// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 94

// OnRightMouseButtonDown @ 14282b3a0

void __thiscall STableViewBase::OnRightMouseButtonDown(STableViewBase *this,FPointerEvent *param_1)

{
  return;
}

// STableViewBase @ 142a18310

STableViewBase * __thiscall STableViewBase::STableViewBase(STableViewBase *this,Type param_1)

{
  double dVar1;
  TConsoleVariableData<float> *pTVar2;
  bool bVar3;
  longlong lVar4;
  ISlateStyle *pIVar5;
  FName *pFVar6;
  FScrollBoxStyle *pFVar7;
  FName local_res8;
  undefined8 local_58;
  FDestructionSentinel local_50;
  FSlateBrush *local_38;
  undefined1 local_30;
  undefined1 local_28 [8];
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  SCompoundWidget::SCompoundWidget((SCompoundWidget *)this);
  this->TableViewMode = param_1;
  (this->ItemsPanel).Object = (SListPanel *)0x0;
  *(undefined ***)this = &_vftable__for__SCompoundWidget__;
  (this->ItemsPanel).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  *(undefined ***)&this->field_0x2a8 = &_vftable__for__IScrollableWidget__;
  (this->PinnedItemsPanel).Object = (SListPanel *)0x0;
  (this->PinnedItemsPanel).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ScrollBar).Object = (SScrollBar *)0x0;
  (this->ScrollBar).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->ScrollBarSlotPadding).Left = 0.0;
  (this->ScrollBarSlotPadding).Top = 0.0;
  (this->ScrollBarSlotPadding).Right = 0.0;
  (this->ScrollBarSlotPadding).Bottom = 0.0;
  *(undefined8 *)&this->OnTableViewScrolled = 0;
  *(undefined8 *)&(this->OnTableViewScrolled).field_0x8 = 0;
  *(undefined4 *)&(this->OnTableViewScrolled).field_0x10 = 0;
  (this->FixedLineScrollOffset).bIsSet = false;
  this->bEnableAnimatedScrolling = false;
  this->ScrollingAnimationInterpolationSpeed = 12.0;
  this->bEnableTouchAnimatedScrolling = false;
  this->bEnableRightClickScrolling = true;
  this->bEnableTouchScrolling = true;
  this->bSelectItemOnNavigation = true;
  this->CurrentScrollOffset = 0.0;
  this->DesiredScrollOffset = 0.0;
  this->bStartedTouchInteraction = false;
  this->AmountScrolledWhileRightMouseDown = 0.0;
  this->TickScrollDelta = 0.0;
  (this->LastGenerateResults).NewScrollOffset = 0.0;
  (this->LastGenerateResults).LengthOfGeneratedItems = 0.0;
  (this->LastGenerateResults).ExactNumLinesOnScreen = 0.0;
  (this->LastGenerateResults).bGeneratedPastLastItem = false;
  this->bWasAtEndOfList = false;
  FGeometry::FGeometry(&this->PanelGeometryLastTick);
  dVar1 = __real_3fb99999a0000000;
  *(undefined8 *)&this->OnContextMenuOpening = 0;
  *(undefined8 *)&(this->OnContextMenuOpening).field_0x8 = 0;
  *(undefined4 *)&(this->OnContextMenuOpening).field_0x10 = 0;
  *(undefined8 *)&this->OnItemsRebuilt = 0;
  *(undefined8 *)&(this->OnItemsRebuilt).field_0x8 = 0;
  *(undefined4 *)&(this->OnItemsRebuilt).field_0x10 = 0;
  (this->SelectionMode).Value = Multi;
  (this->SelectionMode).bIsSet = true;
  *(undefined8 *)&(this->SelectionMode).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->SelectionMode).Getter = 0;
  *(undefined8 *)&(this->SelectionMode).Getter.field_0x8 = 0;
  (this->HeaderRow).Object = (SHeaderRow *)0x0;
  (this->HeaderRow).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FInertialScrollManager::FInertialScrollManager(&this->InertialScrollManager,dVar1);
  (this->SoftwareCursorPosition).field0_0x0 = (TVector2<float>_u_0)0x0;
  this->bShowSoftwareCursor = false;
  pTVar2 = GlobalScrollAmount.Ref;
  bVar3 = IsInParallelGameThread();
  if (!bVar3) {
    bVar3 = IsInGameThread();
    lVar4 = 4;
    if (!bVar3) goto LAB_142a184a9;
  }
  lVar4 = 0;
LAB_142a184a9:
  this->WheelScrollMultiplier = *(float *)((longlong)pTVar2->ShadowedValue + lVar4);
  this->bIsPointerScrollingEnabled = true;
  this->bIsGamepadScrollingEnabled = true;
  this->Orientation = Orient_Vertical;
  this->bShouldUseShadowBoxStyle = false;
  pIVar5 = FAppStyle::Get();
  pFVar6 = ::FName::FName(&local_res8,"ScrollBox");
  pFVar7 = (FScrollBoxStyle *)
           (**(code **)((longlong)*pIVar5 + 0xa0))(pIVar5,FScrollBoxStyle::TypeName,*pFVar6,0,1);
  if (pFVar7 == (FScrollBoxStyle *)0x0) {
    pFVar7 = FScrollBoxStyle::GetDefault();
  }
  this->ShadowBoxStyle = pFVar7;
  local_38 = FStyleDefaults::GetNoBrush();
  local_30 = 1;
  local_18 = 0;
  local_28 = (undefined1  [8])0x0;
  FStack_20.Data = (FScriptContainerElement *)0x0;
  (this->BackgroundBrush).Image.Value = local_38;
  (this->BackgroundBrush).Image.bIsSet = true;
  TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
            (&(this->BackgroundBrush).Image.Getter,
             (TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy> *)local_28);
  FSlateBrush::FSlateBrush(&(this->BackgroundBrush).ImageCache);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_28,
             (FWriteAccessScope *)&local_50);
  if (((int)local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
    local_18 = local_18 & 0xffffffff00000000;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  if (FStack_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_20.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_28);
  this->bIsScrollingActiveTimerRegistered = false;
  FOverscroll::FOverscroll(&this->Overscroll);
  this->AllowOverscroll = Yes;
  this->ConsumeMouseWheel = WhenScrollingPossible;
  this->bItemsNeedRefresh = false;
  this->bIsInertialScroll = false;
  this->ShadowFadeDistance = 32.0;
  (this->DeltaTimeQueue).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeltaTimeQueue).ArrayNum = 0;
  (this->DeltaTimeQueue).ArrayMax = 0;
  this->DeltaTimeCircularIndex = 0;
  (this->SortedDeltaTimes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SortedDeltaTimes).ArrayNum = 0;
  (this->SortedDeltaTimes).ArrayMax = 0;
  this->SmoothDeltaTime = -1.0;
  if ((TOptional<double> *)&local_58 != &this->FixedLineScrollOffset) {
    (this->FixedLineScrollOffset).bIsSet = true;
    (this->FixedLineScrollOffset).TypedValue = 0.25;
  }
  return this;
}

// ~STableViewBase @ 142a18fa0

void __thiscall STableViewBase::~STableViewBase(STableViewBase *this)

{
  FScriptContainerElement *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  void *pvVar3;
  
  *(undefined ***)this = &_vftable__for__SCompoundWidget__;
  *(undefined ***)&this->field_0x2a8 = &_vftable__for__IScrollableWidget__;
  pFVar1 = (this->SortedDeltaTimes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DeltaTimeQueue).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pTVar2 = (this->BackgroundBrush).ImageCache.ResourceHandle.Data.SharedReferenceCount.
           ReferenceController;
  (this->BackgroundBrush).ImageCache._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->BackgroundBrush).Image.Getter);
  pvVar3 = *(void **)&(this->BackgroundBrush).Image.Getter.field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->BackgroundBrush).Image.Getter);
  pFVar1 = (this->InertialScrollManager).ScrollSamples.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->HeaderRow).SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->SelectionMode).Getter);
  pvVar3 = *(void **)&(this->SelectionMode).Getter.field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->SelectionMode).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnItemsRebuilt);
  pvVar3 = *(void **)&(this->OnItemsRebuilt).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnItemsRebuilt);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnContextMenuOpening);
  pvVar3 = *(void **)&(this->OnContextMenuOpening).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnContextMenuOpening);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnTableViewScrolled);
  pvVar3 = *(void **)&(this->OnTableViewScrolled).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnTableViewScrolled);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ScrollBar).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->PinnedItemsPanel).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ItemsPanel).SharedReferenceCount.ReferenceController);
  *(undefined ***)&this->field_0x2a8 = &___7IScrollableWidget__6B_;
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  return;
}

// AddScrollOffset @ 142a1ab30

void __thiscall STableViewBase::AddScrollOffset(STableViewBase *this,float param_1,bool param_2)

{
  longlong *plVar1;
  double dVar2;
  FReadAccessScope local_38 [2];
  
  if (__real_322bcc77 < (float)((uint)param_1 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    dVar2 = (double)param_1 + this->DesiredScrollOffset;
    this->DesiredScrollOffset = dVar2;
    if (param_2) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this->OnTableViewScrolled,local_38);
      if ((*(int *)&(this->OnTableViewScrolled).field_0x10 != 0) &&
         (plVar1 = *(longlong **)&(this->OnTableViewScrolled).field_0x8, plVar1 != (longlong *)0x0))
      {
        (**(code **)(*plVar1 + 0x68))(plVar1,SUB84(dVar2,0));
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (local_38);
      RequestLayoutRefresh(this);
    }
  }
  return;
}

// AppendPinnedWidget @ 142a1b050

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
STableViewBase::AppendPinnedWidget(STableViewBase *this,TSharedRef<SWidget,1> *param_1)

{
  SListPanel *pSVar1;
  code *pcVar2;
  TUniquePtr<SListPanel::FSlot,TDefaultDelete<SListPanel::FSlot>_> TVar3;
  bool bVar4;
  FSlotBase *this_00;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 auStack_e8 [32];
  int local_c8 [2];
  FSlotBase *local_c0;
  undefined8 local_b8;
  FSharedReferencer<1> local_b0;
  TAttribute<EVisibility> local_a8;
  FSlotArguments local_88;
  TPanelChildren<SListPanel::FSlot> *local_70;
  int local_68;
  code *local_58;
  longlong local_48 [3];
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if ((this->PinnedItemsPanel).Object == (SListPanel *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pSVar1 = (this->PinnedItemsPanel).Object;
  this_00 = ::operator_new(0x20);
  if (this_00 == (FSlotBase *)0x0) {
    local_88.Slot.Ptr = (FSlot *)0x0;
    local_88.ChildWidget.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Slot.Get()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\SlotBase.h"
                       ,0x9b,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    this_00->_padding_ = 0;
    this_00->Owner = (FChildren *)0x0;
    (this_00->Widget).Object = (SWidget *)0x0;
    (this_00->Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    FSlotBase::FSlotBase(this_00);
    this_00->_padding_ = (longlong)&___7FSlot_SListPanel__6B_;
    local_88.ChildWidget.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    local_88.Slot.Ptr = (FSlot *)this_00;
  }
  local_88.ChildWidget.Object = param_1->Object;
  local_70 = &pSVar1->Children;
  local_b0.ReferenceController = (param_1->SharedReferenceCount).ReferenceController;
  local_68 = -1;
  local_58 = (code *)0x0;
  local_30 = (longlong *)0x0;
  if (local_b0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_b0.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_b0.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_b8 = 0;
  SharedPointerInternals::FSharedReferencer<1>::operator=
            (&local_88.ChildWidget.SharedReferenceCount,&local_b0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b0.ReferenceController);
  TVar3.Ptr = local_88.Slot.Ptr;
  if ((FSlotBase *)local_88.Slot.Ptr != (FSlotBase *)0x0) {
    if (local_68 == -1) {
      local_68 = TPanelChildren<SListPanel::FSlot>::AddSlot(local_70,&local_88);
    }
    else {
      TPanelChildren<SListPanel::FSlot>::InsertSlot(local_70,&local_88,local_68);
    }
    if (local_58 == (code *)0x0) goto LAB_142a1b1f5;
    local_c0 = (FSlotBase *)TVar3.Ptr;
    local_c8[0] = local_68;
    UE::Core::Private::Function::CheckCallable(local_58);
    pcVar2 = local_58;
    plVar6 = local_48;
    if (local_30 != (longlong *)0x0) {
      plVar6 = local_30;
    }
    uVar5 = (**(code **)(*plVar6 + 8))();
    (*pcVar2)(uVar5,&local_c0,local_c8);
  }
  if (local_58 != (code *)0x0) {
    plVar6 = local_48;
    if (local_30 != (longlong *)0x0) {
      plVar6 = local_30;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
LAB_142a1b1f5:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.ChildWidget.SharedReferenceCount.ReferenceController);
  if ((FSlotBase *)local_88.Slot.Ptr != (FSlotBase *)0x0) {
    (*(code *)**(undefined8 **)local_88.Slot.Ptr)(local_88.Slot.Ptr,1);
  }
  if ((this->PinnedItemsPanel).Object == (SListPanel *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_a8.Value = (EVisibility)EVisibility::Visible.Value.Value;
  local_a8.Getter._16_8_ = 0;
  local_a8.bIsSet = true;
  local_a8.Getter._0_8_ = 0;
  local_a8.Getter._8_8_ = 0;
  SPanel::SetVisibility((SPanel *)(this->PinnedItemsPanel).Object,&local_a8);
  return;
}

// AppendWidget @ 142a1b2a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall STableViewBase::AppendWidget(STableViewBase *this,TSharedRef<ITableRow,1> *param_1)

{
  SListPanel *pSVar1;
  code *pcVar2;
  TUniquePtr<SListPanel::FSlot,TDefaultDelete<SListPanel::FSlot>_> TVar3;
  bool bVar4;
  FSlotBase *this_00;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 auStack_c8 [32];
  int local_a8 [2];
  FSlotBase *local_a0;
  undefined8 local_98;
  FSharedReferencer<1> local_90;
  undefined1 local_88 [8];
  TReferenceControllerBase<1> *local_80;
  FSlotArguments local_78;
  TPanelChildren<SListPanel::FSlot> *local_60;
  int local_58;
  code *local_48;
  longlong local_38 [3];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  if ((this->ItemsPanel).Object == (SListPanel *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pSVar1 = (this->ItemsPanel).Object;
  this_00 = ::operator_new(0x20);
  if (this_00 == (FSlotBase *)0x0) {
    local_78.Slot.Ptr = (FSlot *)0x0;
    local_78.ChildWidget.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Slot.Get()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\SlotBase.h"
                       ,0x9b,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    this_00->_padding_ = 0;
    this_00->Owner = (FChildren *)0x0;
    (this_00->Widget).Object = (SWidget *)0x0;
    (this_00->Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    FSlotBase::FSlotBase(this_00);
    this_00->_padding_ = (longlong)&___7FSlot_SListPanel__6B_;
    local_78.ChildWidget.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    local_78.Slot.Ptr = (FSlot *)this_00;
  }
  local_60 = &pSVar1->Children;
  local_58 = -1;
  local_48 = (code *)0x0;
  local_20 = (longlong *)0x0;
  puVar5 = (undefined8 *)(**(code **)((longlong)*param_1->Object + 0x58))(param_1->Object,local_88);
  local_90.ReferenceController = (TReferenceControllerBase<1> *)puVar5[1];
  local_78.ChildWidget.Object = (SWidget *)*puVar5;
  if (local_90.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_90.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_90.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_98 = 0;
  SharedPointerInternals::FSharedReferencer<1>::operator=
            (&local_78.ChildWidget.SharedReferenceCount,&local_90);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_90.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_80);
  TVar3.Ptr = local_78.Slot.Ptr;
  if ((FSlotBase *)local_78.Slot.Ptr != (FSlotBase *)0x0) {
    if (local_58 == -1) {
      local_58 = TPanelChildren<SListPanel::FSlot>::AddSlot(local_60,&local_78);
    }
    else {
      TPanelChildren<SListPanel::FSlot>::InsertSlot(local_60,&local_78,local_58);
    }
    if (local_48 == (code *)0x0) goto LAB_142a1b457;
    local_a0 = (FSlotBase *)TVar3.Ptr;
    local_a8[0] = local_58;
    UE::Core::Private::Function::CheckCallable(local_48);
    pcVar2 = local_48;
    plVar7 = local_38;
    if (local_20 != (longlong *)0x0) {
      plVar7 = local_20;
    }
    uVar6 = (**(code **)(*plVar7 + 8))();
    (*pcVar2)(uVar6,&local_a0,local_a8);
  }
  if (local_48 != (code *)0x0) {
    plVar7 = local_38;
    if (local_20 != (longlong *)0x0) {
      plVar7 = local_20;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
LAB_142a1b457:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.ChildWidget.SharedReferenceCount.ReferenceController);
  if ((FSlotBase *)local_78.Slot.Ptr != (FSlotBase *)0x0) {
    (*(code *)**(undefined8 **)local_78.Slot.Ptr)(local_78.Slot.Ptr,1);
  }
  return;
}

// CanUseInertialScroll @ 142a1b9f0

bool __thiscall STableViewBase::CanUseInertialScroll(STableViewBase *this,float param_1)

{
  FGeometry *pFVar1;
  float fVar2;
  float fVar3;
  
  pFVar1 = SWidget::GetTickSpaceGeometry((SWidget *)this);
  fVar2 = FOverscroll::GetOverscroll(&this->Overscroll,pFVar1);
  if (fVar2 != 0.0) {
    fVar3 = __real_3f800000;
    if ((fVar2 <= 0.0) && (fVar3 = __real_bf800000, 0.0 <= fVar2)) {
      fVar3 = 0.0;
    }
    fVar2 = __real_3f800000;
    if ((param_1 <= 0.0) && (fVar2 = __real_bf800000, 0.0 <= param_1)) {
      fVar2 = 0.0;
    }
    if (fVar3 == fVar2) {
      return false;
    }
  }
  return true;
}

// ClearPinnedWidgets @ 142a1bcb0

void __thiscall STableViewBase::ClearPinnedWidgets(STableViewBase *this)

{
  code *pcVar1;
  bool bVar2;
  TAttribute<EVisibility> local_28;
  
  if ((this->PinnedItemsPanel).Object == (SListPanel *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_28.Value = (EVisibility)EVisibility::Collapsed.Value.Value;
  local_28.Getter._16_8_ = 0;
  local_28.bIsSet = true;
  local_28.Getter._0_8_ = 0;
  local_28.Getter._8_8_ = 0;
  SPanel::SetVisibility((SPanel *)(this->PinnedItemsPanel).Object,&local_28);
  if ((this->PinnedItemsPanel).Object == (SListPanel *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SListPanel::ClearItems((this->PinnedItemsPanel).Object);
  return;
}

// ClearWidgets @ 142a1bd70

void __thiscall STableViewBase::ClearWidgets(STableViewBase *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->ItemsPanel).Object == (SListPanel *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SListPanel::ClearItems((this->ItemsPanel).Object);
  return;
}

// ComputeVolatility @ 142a1c030

bool __thiscall STableViewBase::ComputeVolatility(STableViewBase *this)

{
  longlong *plVar1;
  char cVar2;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &(this->BackgroundBrush).Image.Getter,&local_28);
  if ((*(int *)&(this->BackgroundBrush).Image.Getter.field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->BackgroundBrush).Image.Getter.field_0x8,
     plVar1 != (longlong *)0x0)) {
    cVar2 = (**(code **)(*plVar1 + 0x38))();
    if (cVar2 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      return true;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return false;
}

// ConstructChildren @ 142a20280

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
STableViewBase::ConstructChildren
          (STableViewBase *this,TAttribute<float> *param_1,TAttribute<float> *param_2,
          TAttribute<EListItemAlignment> *param_3,TSharedPtr<SHeaderRow,1> *param_4,
          TSharedPtr<SScrollBar,1> *param_5,EOrientation param_6,
          TDelegate<void___cdecl(double),FDefaultDelegateUserPolicy> *param_7,
          FScrollBarStyle *param_8,bool param_9)

{
  byte *pbVar1;
  TSharedPtr<SListPanel,1> *pTVar2;
  SHeaderRow *pSVar3;
  longlong *plVar4;
  SWidget *pSVar5;
  TReferenceControllerBase<1> *pTVar6;
  SVerticalBox *pSVar7;
  TReferenceControllerBase<1> *pTVar8;
  code *pcVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  char cVar15;
  byte bVar16;
  bool bVar17;
  EOrientation EVar18;
  FArguments *pFVar19;
  TSharedRef<SListPanel,1> *pTVar20;
  undefined8 *puVar21;
  TSharedRef<SWidget,1> *pTVar22;
  ulong64 uVar23;
  FArguments *pFVar24;
  ISlateStyle *this_00;
  FName *pFVar25;
  FScrollBarStyle *pFVar26;
  SScrollBar *pSVar27;
  SScrollBar *pSVar28;
  FSlot *pFVar29;
  FArguments *pFVar30;
  FSlotArguments *pFVar31;
  STableViewBase_u_1408 *pSVar32;
  FArguments *pFVar33;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> *pTVar34;
  TSharedRef<SBox,1> *pTVar35;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> *this_01;
  TSharedRef<SHorizontalBox,1> *pTVar36;
  STableViewBase_u_1408 *pSVar37;
  TSharedRef<SScrollBar,1> *pTVar38;
  FArguments *pFVar39;
  FSlotArguments *pFVar40;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> *pTVar41;
  TSharedRef<SVerticalBox,1> *pTVar42;
  TReferenceControllerBase<1> *pTVar43;
  FSharedReferencer<1> FVar44;
  float fVar45;
  undefined4 local_res8 [2];
  T0RequiredArgs local_res10 [8];
  T0RequiredArgs local_res18 [8];
  T0RequiredArgs local_res20 [8];
  uint uStack_257c;
  T0RequiredArgs local_2578;
  T0RequiredArgs local_2577;
  T0RequiredArgs local_2576;
  T0RequiredArgs local_2575;
  T0RequiredArgs local_2574 [12];
  TSharedPtr<SWidget,1> local_2568;
  FLLMScope local_2558;
  FLLMScope local_2554;
  FLLMScope local_2550;
  FLLMScope local_254c;
  undefined1 local_2548 [8];
  FDelegateAllocation local_2540;
  undefined1 local_2530 [8];
  FDelegateAllocation local_2528;
  undefined1 local_2518 [8];
  ForAnyElementType local_2510;
  int local_2508;
  TSharedRef<SWidget,1> local_24f8;
  float local_24e8;
  bool local_24e4;
  undefined1 local_24e0 [8];
  ForAnyElementType FStack_24d8;
  int local_24d0;
  float local_24c8;
  bool local_24c4;
  undefined1 local_24c0 [8];
  ForAnyElementType FStack_24b8;
  int local_24b0;
  float local_24a8;
  bool local_24a4;
  undefined1 local_24a0 [8];
  ForAnyElementType FStack_2498;
  int local_2490;
  float local_2488;
  bool local_2484;
  undefined1 local_2480 [8];
  ForAnyElementType FStack_2478;
  int local_2470;
  uchar local_2468;
  undefined1 local_2467;
  undefined1 local_2460 [8];
  ForAnyElementType FStack_2458;
  ulonglong local_2450;
  SListPanel *local_2448;
  FSharedReferencer<1> local_2440;
  TSlateDecl<SScrollBar,RequiredArgs::T0RequiredArgs> local_2438;
  SWidget *local_2420;
  TReferenceControllerBase<1> *pTStack_2418;
  SListPanel *local_2410;
  FSharedReferencer<1> local_2408;
  SListPanel *local_2400;
  FSharedReferencer<1> local_23f8;
  SScrollBar *local_23f0;
  FSharedReferencer<1> local_23e8 [2];
  SVerticalBox *local_23d8;
  FSharedReferencer<1> FStack_23d0;
  EListItemAlignment local_23c8;
  bool local_23c7;
  undefined1 local_23c0 [24];
  EListItemAlignment local_23a8;
  bool local_23a7;
  undefined1 local_23a0 [24];
  FName local_2388;
  FMemScope local_2380;
  FName local_2378;
  FMemScope local_2370;
  FName local_2368;
  STableViewBase_u_1408 *local_2360;
  STableViewBase_u_1408 *local_2358;
  FName local_2350;
  FMemScope local_2348;
  FMemScope local_2340;
  undefined8 local_2338;
  FSharedReferencer<1> local_2330;
  undefined8 local_2328;
  TReferenceControllerBase<1> *pTStack_2320;
  undefined8 local_2318;
  FSharedReferencer<1> local_2310;
  TSharedRef<SWidget,1> local_2308;
  STableViewBase_u_1408 local_22f8;
  STableViewBase_u_1408 SStack_22f0;
  undefined1 local_22e8;
  undefined1 local_22e0 [8];
  void *pvStack_22d8;
  undefined8 local_22d0;
  TAttribute<FOptionalSize> local_22c8;
  TAttribute<float> local_22a8;
  TAttribute<FOptionalSize> local_2288;
  TAttribute<float> local_2268;
  TAttribute<float> local_2248;
  TAttribute<float> local_2228;
  TSharedPtr<SWidget,1> local_2208;
  TSharedRef<SWidget,1> local_21f8;
  TSharedRef<SWidget,1> local_21e8;
  TSharedRef<SWidget,1> local_21d8;
  TSharedRef<SWidget,1> local_21c8;
  TSharedRef<SWidget,1> local_21b8;
  TSharedRef<SWidget,1> local_21a8;
  FDestructionSentinel local_2198;
  FDestructionSentinel local_2180;
  FDestructionSentinel local_2168;
  FDestructionSentinel local_2150;
  FDestructionSentinel local_2138;
  FDestructionSentinel local_2120;
  FDestructionSentinel local_2108;
  FDestructionSentinel local_20f0;
  FDestructionSentinel local_20d8;
  FDelegateAllocation *local_20c0;
  FDestructionSentinel local_20b8;
  undefined1 *local_20a0;
  FDestructionSentinel local_2098;
  FDelegateAllocation *local_2080;
  TAttribute<FMargin> local_2078;
  TSharedRef<SVerticalBox,1> local_2048;
  TSharedRef<SListPanel,1> local_2038;
  TSharedRef<SListPanel,1> local_2028;
  TSharedRef<SVerticalBox,1> local_2018;
  TSharedRef<SWidget,1> local_2008;
  TSlateDecl<SListPanel,RequiredArgs::T0RequiredArgs> local_1ff8;
  TSlateDecl<SListPanel,RequiredArgs::T0RequiredArgs> local_1fe0;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_1fc8;
  TSharedRef<SWidget,1> local_1fb0;
  TSharedRef<SHorizontalBox,1> local_1fa0;
  TSharedRef<SBox,1> local_1f90;
  TSharedRef<SScrollBar,1> local_1f80;
  TSharedRef<SVerticalBox,1> local_1f70;
  TSharedRef<SBox,1> local_1f60;
  TSharedRef<SScrollBar,1> local_1f50;
  TSharedRef<SScrollBar,1> local_1f40;
  TSharedRef<SWidget,1> local_1f30;
  FName local_1f20;
  TSharedRef<SWidget,1> local_1f18;
  SHeaderRow *local_1f08;
  TReferenceControllerBase<1> *pTStack_1f00;
  code *local_1ef8;
  longlong lStack_1ef0;
  TSharedRef<SListPanel,1> local_1ee8;
  code *local_1ed8;
  longlong lStack_1ed0;
  TSharedRef<SListPanel,1> local_1ec8;
  SScrollBar *local_1eb8;
  TReferenceControllerBase<1> *pTStack_1eb0;
  TSharedRef<SWidget,1> local_1ea8;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_1e98;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_1e80;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_1e68;
  FReadAccessScope local_1e50;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_1e38;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_1e20;
  TSharedRef<SWidget,1> local_1e08;
  undefined1 local_1df8 [512];
  undefined1 local_1bf8 [24];
  undefined1 local_1be0 [64];
  undefined1 local_1ba0 [48];
  undefined1 local_1b70 [24];
  FSlotArguments local_1b58;
  FSlotArguments local_1a70;
  FArguments local_1988;
  FArguments local_1780;
  FArguments local_1578;
  FArguments local_1370;
  FSlotArguments local_1168;
  FSlotArguments local_1080;
  FSlotArguments local_f98;
  FSlotArguments local_eb0;
  FSlotArguments local_dc8;
  FSlotArguments local_ce0;
  FArguments local_bf8;
  FArguments local_968;
  FArguments local_6d8;
  FArguments local_398;
  undefined8 uStack_48;
  
  uStack_48 = 0x142a2029f;
  bVar13 = false;
  bVar12 = false;
  bVar14 = false;
  bVar11 = false;
  bVar10 = false;
  bVar17 = false;
  local_res8[0] = 0;
  this->bItemsNeedRefresh = true;
  pSVar3 = param_4->Object;
  pTVar43 = (param_4->SharedReferenceCount).ReferenceController;
  if (pTVar43 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar43->SharedReferenceCount = (atomic<int>)((int)pTVar43->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1f08 = (this->HeaderRow).Object;
  pTStack_1f00 = (this->HeaderRow).SharedReferenceCount.ReferenceController;
  (this->HeaderRow).Object = pSVar3;
  (this->HeaderRow).SharedReferenceCount.ReferenceController = pTVar43;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1f00);
  if (param_7 != &this->OnTableViewScrolled) {
    local_2518 = (undefined1  [8])0x0;
    local_2510.Data = (FScriptContainerElement *)0x0;
    local_2508 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_7,&local_1e50);
    if ((*(int *)&param_7->field_0x10 != 0) &&
       (plVar4 = *(longlong **)&param_7->field_0x8, plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 0x50))(plVar4,local_2518);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_1e50);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnTableViewScrolled,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2518);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2518,
               (FWriteAccessScope *)&local_2180);
    if ((local_2508 != 0) && (local_2510.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_2510.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_2510,0,0,0x10);
      local_2508 = 0;
    }
    if (local_2180.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2180.Accessor,&local_2180);
    }
    if (local_2510.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2510.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_2518);
  }
  EVar18 = param_6;
  if (param_4->Object != (SHeaderRow *)0x0) {
    EVar18 = Orient_Vertical;
  }
  this->Orientation = EVar18;
  if ((1 < (byte)LogSlate._0_1_) && (param_6 != EVar18)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogSlate);
  }
  pFVar19 = SListPanel::FArguments::FArguments(&local_bf8);
  *(undefined1 *)((longlong)&pFVar19->_padding_ + 2) = this->field_0x35;
  local_2488 = param_1->Value;
  local_2484 = param_1->bIsSet;
  local_2480 = (undefined1  [8])0x0;
  FStack_2478.Data = (FScriptContainerElement *)0x0;
  local_2470 = 0;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *)local_2480,
             &param_1->Getter);
  (pFVar19->_ItemWidth).Value = local_2488;
  (pFVar19->_ItemWidth).bIsSet = local_2484;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar19->_ItemWidth).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2480);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2480,
             (FWriteAccessScope *)&local_2198);
  if ((local_2470 != 0) && (FStack_2478.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_2478.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2478,0,0,0x10);
    local_2470 = 0;
  }
  if (local_2198.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2198.Accessor,&local_2198);
  }
  if (FStack_2478.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2478.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2480);
  local_24a8 = param_2->Value;
  local_24a4 = param_2->bIsSet;
  local_24a0 = (undefined1  [8])0x0;
  FStack_2498.Data = (FScriptContainerElement *)0x0;
  local_2490 = 0;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *)local_24a0,
             &param_2->Getter);
  (pFVar19->_ItemHeight).Value = local_24a8;
  (pFVar19->_ItemHeight).bIsSet = local_24a4;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar19->_ItemHeight).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_24a0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_24a0,
             (FWriteAccessScope *)&local_2108);
  if ((local_2490 != 0) && (FStack_2498.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_2498.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2498,0,0,0x10);
    local_2490 = 0;
  }
  if (local_2108.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2108.Accessor,&local_2108);
  }
  if (FStack_2498.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2498.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_24a0);
  lStack_1ef0 = (ulonglong)uStack_257c << 0x20;
  local_1ef8 = _vcall__672__flat______;
  pFVar19 = SListPanel::FArguments::NumDesiredItems<STableViewBase>
                      (pFVar19,this,(pmf_5a7cbbcf *)&local_1ef8);
  local_23a8 = param_3->Value;
  local_23a7 = param_3->bIsSet;
  TDelegate<enum_EListItemAlignment___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<enum_EListItemAlignment___cdecl(void),FDefaultDelegateUserPolicy>
            (local_23a0,&param_3->Getter);
  (pFVar19->_ItemAlignment).Value = local_23a8;
  (pFVar19->_ItemAlignment).bIsSet = local_23a7;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar19->_ItemAlignment).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_23a0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_23a0);
  if ((void *)local_23a0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_23a0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_23a0);
  pFVar19->_ListOrientation = this->Orientation;
  FLLMScope::FLLMScope(&local_2558,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_2388 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_2380,&local_2388,true);
  TSlateDecl<SListPanel,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SListPanel,RequiredArgs::T0RequiredArgs>
            (&local_1ff8,"SListPanel",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Views\\STableViewBase.cpp"
             ,0x8d,(T0RequiredArgs *)local_res8);
  FMemScope::~FMemScope(&local_2380);
  FLLMScope::~FLLMScope(&local_2558);
  pTVar20 = TSlateDecl<SListPanel,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1ff8,&local_1ee8,pFVar19);
  local_2408.ReferenceController = (pTVar20->SharedReferenceCount).ReferenceController;
  local_2410 = pTVar20->Object;
  if (local_2408.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_2408.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_2408.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar2 = &this->ItemsPanel;
  if (pTVar2 != (TSharedPtr<SListPanel,1> *)&local_2410) {
    pTVar2->Object = local_2410;
    local_2410 = (SListPanel *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ItemsPanel).SharedReferenceCount,&local_2408);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2408.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1ee8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1ff8._Widget.SharedReferenceCount.ReferenceController);
  SListPanel::FArguments::~FArguments(&local_bf8);
  pFVar19 = SListPanel::FArguments::FArguments(&local_968);
  *(undefined1 *)((longlong)&pFVar19->_padding_ + 2) = this->field_0x35;
  local_24c8 = param_1->Value;
  local_24c4 = param_1->bIsSet;
  local_24c0 = (undefined1  [8])0x0;
  FStack_24b8.Data = (FScriptContainerElement *)0x0;
  local_24b0 = 0;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *)local_24c0,
             &param_1->Getter);
  (pFVar19->_ItemWidth).Value = local_24c8;
  (pFVar19->_ItemWidth).bIsSet = local_24c4;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar19->_ItemWidth).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_24c0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_24c0,
             (FWriteAccessScope *)&local_20f0);
  if ((local_24b0 != 0) && (FStack_24b8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_24b8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_24b8,0,0,0x10);
    local_24b0 = 0;
  }
  if (local_20f0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_20f0.Accessor,&local_20f0);
  }
  if (FStack_24b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_24b8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_24c0);
  local_24e8 = param_2->Value;
  local_24e4 = param_2->bIsSet;
  local_24e0 = (undefined1  [8])0x0;
  FStack_24d8.Data = (FScriptContainerElement *)0x0;
  local_24d0 = 0;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *)local_24e0,
             &param_2->Getter);
  (pFVar19->_ItemHeight).Value = local_24e8;
  (pFVar19->_ItemHeight).bIsSet = local_24e4;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar19->_ItemHeight).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_24e0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_24e0,
             (FWriteAccessScope *)&local_2150);
  if ((local_24d0 != 0) && (FStack_24d8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_24d8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_24d8,0,0,0x10);
    local_24d0 = 0;
  }
  if (local_2150.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2150.Accessor,&local_2150);
  }
  if (FStack_24d8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_24d8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_24e0);
  lStack_1ed0 = (ulonglong)uStack_257c << 0x20;
  local_1ed8 = GetNumPinnedItems;
  pFVar19 = SListPanel::FArguments::NumDesiredItems<STableViewBase>
                      (pFVar19,this,(pmf_5a7cbbcf *)&local_1ed8);
  local_23c8 = param_3->Value;
  local_23c7 = param_3->bIsSet;
  TDelegate<enum_EListItemAlignment___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<enum_EListItemAlignment___cdecl(void),FDefaultDelegateUserPolicy>
            (local_23c0,&param_3->Getter);
  (pFVar19->_ItemAlignment).Value = local_23c8;
  (pFVar19->_ItemAlignment).bIsSet = local_23c7;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar19->_ItemAlignment).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_23c0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_23c0);
  if ((void *)local_23c0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_23c0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_23c0);
  pFVar19->_ListOrientation = this->Orientation;
  local_2468 = (uchar)EVisibility::Collapsed.Value.Value;
  local_2467 = 1;
  local_2460 = (undefined1  [8])0x0;
  FStack_2458.Data = (FScriptContainerElement *)0x0;
  local_2450 = 0;
  *(TEnumAsByte<EVisibility::Private> *)&pFVar19->_padding_ = EVisibility::Collapsed.Value.Value;
  *(undefined1 *)((longlong)&pFVar19->_padding_ + 1) = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar19->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2460);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2460,
             (FWriteAccessScope *)&local_2138);
  if (((int)local_2450 != 0) && (FStack_2458.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_2458.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2458,0,0,0x10);
    local_2450 = local_2450 & 0xffffffff00000000;
  }
  if (local_2138.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2138.Accessor,&local_2138);
  }
  if (FStack_2458.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2458.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2460);
  FLLMScope::FLLMScope(&local_2554,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_2378 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_2370,&local_2378,true);
  TSlateDecl<SListPanel,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SListPanel,RequiredArgs::T0RequiredArgs>
            (&local_1fe0,"SListPanel",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Views\\STableViewBase.cpp"
             ,0x95,local_res10);
  FMemScope::~FMemScope(&local_2370);
  FLLMScope::~FLLMScope(&local_2554);
  pTVar20 = TSlateDecl<SListPanel,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1fe0,&local_1ec8,pFVar19);
  local_23f8.ReferenceController = (pTVar20->SharedReferenceCount).ReferenceController;
  local_2400 = pTVar20->Object;
  if (local_23f8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_23f8.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_23f8.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->PinnedItemsPanel != (TSharedPtr<SListPanel,1> *)&local_2400) {
    (this->PinnedItemsPanel).Object = local_2400;
    local_2400 = (SListPanel *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->PinnedItemsPanel).SharedReferenceCount,&local_23f8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_23f8.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1ec8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1fe0._Widget.SharedReferenceCount.ReferenceController);
  SListPanel::FArguments::~FArguments(&local_968);
  local_2568.Object = (SWidget *)0x0;
  local_2568.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pSVar27 = param_5->Object;
  if (pSVar27 != (SScrollBar *)0x0) {
    pTVar43 = (param_5->SharedReferenceCount).ReferenceController;
    if (pTVar43 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar43->SharedReferenceCount = (atomic<int>)((int)pTVar43->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_1eb8 = (this->ScrollBar).Object;
    pTStack_1eb0 = (this->ScrollBar).SharedReferenceCount.ReferenceController;
    (this->ScrollBar).Object = pSVar27;
    (this->ScrollBar).SharedReferenceCount.ReferenceController = pTVar43;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (pTStack_1eb0);
    if (((this->ScrollBar).Object == (SScrollBar *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar14)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pSVar27 = (this->ScrollBar).Object;
    local_2530 = (undefined1  [8])0x0;
    local_2528.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_2528.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2530,
               (FWriteAccessScope *)&local_20d8);
    local_20c0 = &local_2528;
    puVar21 = UE::Core::Private::DelegateAllocate(0x38,&local_2528);
    pTVar8 = pTStack_2320;
    pTVar43 = (TReferenceControllerBase<1> *)param_4;
    if (puVar21 != (undefined8 *)0x0) {
      pTVar22 = TSharedFromThis<SWidget,1>::AsShared
                          ((TSharedFromThis<SWidget,1> *)&this->field_0x8,&local_1f30);
      pTVar43 = (pTVar22->SharedReferenceCount).ReferenceController;
      pSVar5 = pTVar22->Object;
      if (pTVar43 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar43->SharedReferenceCount = (atomic<int>)((int)pTVar43->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar43->SharedReferenceCount = (atomic<int>)((int)pTVar43->SharedReferenceCount + 1);
        UNLOCK();
      }
      *puVar21 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
      uVar23 = FDelegateHandle::GenerateNewID();
      puVar21[2] = uVar23;
      *puVar21 = &
                 ___7__TBaseSPMethodDelegateInstance__0A_VSTableViewBase___00__A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar21[3] = pSVar5;
      puVar21[4] = pTVar43;
      if (pTVar43 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar43->WeakReferenceCount = (atomic<int>)((int)pTVar43->WeakReferenceCount + 1);
        UNLOCK();
      }
      bVar11 = true;
      bVar10 = true;
      bVar17 = true;
      puVar21[5] = ScrollBar_OnUserScrolled;
      puVar21[6] = (ulonglong)pTVar8 & 0xffffffff00000000;
    }
    if (bVar17) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar43);
    }
    if (bVar10) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar43);
    }
    if (bVar11) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1f30.SharedReferenceCount.ReferenceController);
    }
    if (local_20d8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_20d8.Accessor,&local_20d8);
    }
    SScrollBar::SetOnUserScrolled
              (pSVar27,(TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy> *)local_2530);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2530,
               (FWriteAccessScope *)&local_2168);
    if ((local_2528.DelegateSize != 0) &&
       (local_2528.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_2528.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_2528,0,0,0x10);
      local_2528.DelegateSize = 0;
    }
    if (local_2168.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2168.Accessor,&local_2168);
    }
    if (local_2528.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_2528.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_2530);
    local_2310.ReferenceController = (this->ItemsPanel).SharedReferenceCount.ReferenceController;
    local_2568.Object = (SWidget *)pTVar2->Object;
    if (local_2310.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_2310.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_2310.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_2318 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&local_2568.SharedReferenceCount,&local_2310);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2310.ReferenceController);
    goto LAB_142a21cb9;
  }
  pFVar24 = SScrollBar::FArguments::FArguments((FArguments *)local_1df8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar24->_OnUserScrolled,
             (FWriteAccessScope *)&local_20b8);
  local_20a0 = &(pFVar24->_OnUserScrolled).field_0x8;
  puVar21 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20a0);
  pTVar8 = pTStack_2320;
  pTVar43 = (TReferenceControllerBase<1> *)param_4;
  if (puVar21 != (undefined8 *)0x0) {
    pTVar22 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->field_0x8,&local_1ea8);
    pTVar43 = (pTVar22->SharedReferenceCount).ReferenceController;
    pSVar5 = pTVar22->Object;
    if (pTVar43 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar43->SharedReferenceCount = (atomic<int>)((int)pTVar43->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar43->SharedReferenceCount = (atomic<int>)((int)pTVar43->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar21 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar23 = FDelegateHandle::GenerateNewID();
    puVar21[2] = uVar23;
    *puVar21 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSTableViewBase___00__A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar21[3] = pSVar5;
    puVar21[4] = pTVar43;
    if (pTVar43 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar43->WeakReferenceCount = (atomic<int>)((int)pTVar43->WeakReferenceCount + 1);
      UNLOCK();
    }
    bVar13 = true;
    bVar12 = true;
    bVar14 = true;
    puVar21[5] = ScrollBar_OnUserScrolled;
    puVar21[6] = (ulonglong)pTVar8 & 0xffffffff00000000;
  }
  if (bVar14) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar43);
  }
  if (bVar12) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar43);
  }
  if (bVar13) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1ea8.SharedReferenceCount.ReferenceController);
  }
  if (local_20b8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_20b8.Accessor,&local_20b8);
  }
  pFVar24->_Orientation = this->Orientation;
  pFVar26 = param_8;
  if (param_8 == (FScrollBarStyle *)0x0) {
    this_00 = FAppStyle::Get();
    pFVar25 = ::FName::FName(&local_1f20,"ScrollBar");
    pFVar26 = ISlateStyle::GetWidgetStyle<FScrollBarStyle>
                        (this_00,*pFVar25,(char *)0x0,(FScrollBarStyle *)0x0);
  }
  pFVar24->_Style = pFVar26;
  pFVar24->_PreventThrottling = param_9;
  FLLMScope::FLLMScope(&local_2550,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_2368 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_2340,&local_2368,true);
  TSlateDecl<SScrollBar,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SScrollBar,RequiredArgs::T0RequiredArgs>
            (&local_2438,"SScrollBar",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Views\\STableViewBase.cpp"
             ,0xa9,local_res18);
  FMemScope::~FMemScope(&local_2340);
  FLLMScope::~FLLMScope(&local_2550);
  pSVar27 = TSharedPtr<SScrollBar,1>::operator->(&local_2438._Widget);
  SWidget::SWidgetConstruct((SWidget *)pSVar27,(FSlateBaseNamedArgs *)pFVar24);
  pSVar27 = local_2438._Widget.Object;
  SScrollBar::Construct(local_2438._Widget.Object,pFVar24);
  pSVar28 = TSharedPtr<SScrollBar,1>::operator->(&local_2438._Widget);
  if ((pSVar28->_padding_ & 0x10) == 0) {
    cVar15 = (**(code **)(pSVar28->_padding_ + 0x228))(pSVar28);
    bVar16 = 0;
    if (cVar15 != '\0') goto LAB_142a2109c;
  }
  else {
LAB_142a2109c:
    bVar16 = 0x20;
  }
  *(byte *)&pSVar28->_padding_ = (byte)pSVar28->_padding_ & 0xdf;
  *(byte *)&pSVar28->_padding_ = (byte)pSVar28->_padding_ | bVar16;
  pSVar28 = TSharedPtr<SScrollBar,1>::operator->(&local_2438._Widget);
  pbVar1 = (byte *)((longlong)&pSVar28->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((local_2438._Widget.Object == (SScrollBar *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar17)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  FVar44.ReferenceController = local_2438._Widget.SharedReferenceCount.ReferenceController;
  pSVar32 = (STableViewBase_u_1408 *)0x0;
  local_2438._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_2438._Widget.Object = (SScrollBar *)0x0;
  if ((pSVar27 == (SScrollBar *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar17)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  local_23f0 = pSVar27;
  local_23e8[0].ReferenceController = FVar44.ReferenceController;
  if (FVar44.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar44.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar44.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->ScrollBar != (TSharedPtr<SScrollBar,1> *)&local_23f0) {
    (this->ScrollBar).Object = pSVar27;
    local_23f0 = (SScrollBar *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ScrollBar).SharedReferenceCount,local_23e8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_23e8[0].ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar44.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1b70);
  if ((void *)local_1b70._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1b70._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1b70);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1ba0);
  if ((void *)local_1ba0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1ba0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1ba0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1be0);
  if ((void *)local_1be0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1be0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1be0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1bf8);
  if ((void *)local_1bf8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1bf8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1bf8);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_1df8);
  fVar45 = __real_41800000;
  if (param_8 != (FScrollBarStyle *)0x0) {
    fVar45 = param_8->Thickness + __real_40800000;
  }
  pFVar39 = SVerticalBox::FArguments::FArguments(&local_1988);
  pFVar29 = ::operator_new(0x58);
  local_2360 = pSVar32;
  if (pFVar29 != (FSlot *)0x0) {
    *(undefined8 *)pFVar29 = 0;
    *(undefined8 *)&pFVar29->field_0x8 = 0;
    *(undefined8 *)&pFVar29->field_0x10 = 0;
    *(undefined8 *)&pFVar29->field_0x18 = 0;
    *(undefined8 *)&pFVar29->field_0x20 = 0;
    *(undefined8 *)&pFVar29->field_0x28 = 0;
    *(undefined8 *)&pFVar29->field_0x30 = 0;
    *(undefined8 *)&pFVar29->field_0x38 = 0;
    *(undefined8 *)&pFVar29->field_0x40 = 0;
    *(undefined8 *)&pFVar29->field_0x48 = 0;
    *(undefined8 *)&pFVar29->field_0x50 = 0;
    local_2360 = (STableViewBase_u_1408 *)SVerticalBox::FSlot::FSlot(pFVar29);
  }
  SVerticalBox::FSlot::FSlotArguments::FSlotArguments(&local_1a70,(FSlot *)&local_2360);
  pFVar40 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(&local_1a70);
  pTVar20 = TSharedPtr<SListPanel,1>::ToSharedRef(&this->PinnedItemsPanel,&local_2028);
  pTVar43 = (pTVar20->SharedReferenceCount).ReferenceController;
  local_2448 = pTVar20->Object;
  if (pTVar43 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar43->SharedReferenceCount = (atomic<int>)((int)pTVar43->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar43->SharedReferenceCount = (atomic<int>)((int)pTVar43->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2440.ReferenceController = pTVar43;
  if ((SListPanel **)&pFVar40->field_0x8 != &local_2448) {
    *(SListPanel **)&pFVar40->field_0x8 = local_2448;
    local_2448 = (SListPanel *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar40->field_0x10,&local_2440);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2440.ReferenceController);
  pFVar39 = SVerticalBox::FArguments::operator+(pFVar39,pFVar40);
  pFVar29 = ::operator_new(0x58);
  local_2358 = pSVar32;
  if (pFVar29 != (FSlot *)0x0) {
    *(undefined8 *)pFVar29 = 0;
    *(undefined8 *)&pFVar29->field_0x8 = 0;
    *(undefined8 *)&pFVar29->field_0x10 = 0;
    *(undefined8 *)&pFVar29->field_0x18 = 0;
    *(undefined8 *)&pFVar29->field_0x20 = 0;
    *(undefined8 *)&pFVar29->field_0x28 = 0;
    *(undefined8 *)&pFVar29->field_0x30 = 0;
    *(undefined8 *)&pFVar29->field_0x38 = 0;
    *(undefined8 *)&pFVar29->field_0x40 = 0;
    *(undefined8 *)&pFVar29->field_0x48 = 0;
    *(undefined8 *)&pFVar29->field_0x50 = 0;
    local_2358 = (STableViewBase_u_1408 *)SVerticalBox::FSlot::FSlot(pFVar29);
  }
  SVerticalBox::FSlot::FSlotArguments::FSlotArguments(&local_1b58,(FSlot *)&local_2358);
  local_2248.Value = 1.0;
  local_2248.Getter._16_8_ = 0;
  local_2248.bIsSet = true;
  local_2248.Getter._0_8_ = 0;
  local_2248.Getter._8_8_ = 0;
  pFVar40 = SVerticalBox::FSlot::FSlotArguments::FillHeight(&local_1b58,&local_2248);
  pTVar20 = TSharedPtr<SListPanel,1>::ToSharedRef(&this->ItemsPanel,&local_2038);
  pTVar8 = (pTVar20->SharedReferenceCount).ReferenceController;
  local_21d8.Object = (SWidget *)pTVar20->Object;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_21d8.SharedReferenceCount.ReferenceController = pTVar8;
  pFVar40 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)pFVar40,&local_21d8);
  pFVar39 = SVerticalBox::FArguments::operator+(pFVar39,pFVar40);
  FLLMScope::FLLMScope(&local_254c,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_2350 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_2348,&local_2350,true);
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
            (&local_1fc8,"SVerticalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Views\\STableViewBase.cpp"
             ,0xb2,local_res20);
  FMemScope::~FMemScope(&local_2348);
  FLLMScope::~FLLMScope(&local_254c);
  pTVar42 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1fc8,&local_2048,pFVar39);
  pTVar6 = (pTVar42->SharedReferenceCount).ReferenceController;
  pSVar7 = pTVar42->Object;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_24f8.Object = (SWidget *)pSVar7;
  local_24f8.SharedReferenceCount.ReferenceController = pTVar6;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2048.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1fc8._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2038.SharedReferenceCount.ReferenceController);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_1b58);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar43);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2028.SharedReferenceCount.ReferenceController);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_1a70);
  DestructItems<SVerticalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_1988._Slots.AllocatorInstance.Data,local_1988._Slots.ArrayNum);
  if ((FSlotArguments *)local_1988._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_1988._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_1988);
  if ((this->bShouldUseShadowBoxStyle != false) && (this->ShadowBoxStyle != (FScrollBoxStyle *)0x0))
  {
    if (this->Orientation == Orient_Vertical) {
      pTVar22 = TSharedRef<SWidget,1>::TSharedRef<SWidget,1>(&local_1e08,&local_24f8);
      pTVar22 = ConstructVerticalShadowBox(this,&local_2008,pTVar22);
      local_24f8.Object = pTVar22->Object;
      local_24f8.SharedReferenceCount.ReferenceController =
           (pTVar22->SharedReferenceCount).ReferenceController;
      pTVar22->Object = (SWidget *)pSVar7;
      (pTVar22->SharedReferenceCount).ReferenceController = pTVar6;
    }
    else {
      if (this->Orientation != Orient_Horizontal) goto LAB_142a21609;
      pTVar22 = TSharedRef<SWidget,1>::TSharedRef<SWidget,1>(&local_1f18,&local_24f8);
      pTVar22 = ConstructHorizontalShadowBox(this,&local_1fb0,pTVar22);
      local_24f8.Object = pTVar22->Object;
      local_24f8.SharedReferenceCount.ReferenceController =
           (pTVar22->SharedReferenceCount).ReferenceController;
      pTVar22->Object = (SWidget *)pSVar7;
      (pTVar22->SharedReferenceCount).ReferenceController = pTVar6;
      local_2008.SharedReferenceCount.ReferenceController =
           local_1fb0.SharedReferenceCount.ReferenceController;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2008.SharedReferenceCount.ReferenceController);
  }
LAB_142a21609:
  FVar44.ReferenceController = local_24f8.SharedReferenceCount.ReferenceController;
  (this->field783_0x580).VerticalScrollBarSlot = (FSlot *)0x0;
  if (this->Orientation == Orient_Vertical) {
    pFVar30 = SHorizontalBox::FArguments::FArguments(&local_1780);
    pFVar31 = SHorizontalBox::Slot(&local_1080);
    local_2228.Value = 1.0;
    local_2228.bIsSet = true;
    local_2228.Getter._16_8_ = 0;
    local_2228.Getter._0_8_ = 0;
    local_2228.Getter._8_8_ = 0;
    pFVar31 = SHorizontalBox::FSlot::FSlotArguments::FillWidth(pFVar31,&local_2228);
    pFVar31 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                        ((FSlotArguments *)pFVar31,&local_24f8);
    pFVar30 = SHorizontalBox::FArguments::operator+(pFVar30,pFVar31);
    pFVar31 = SHorizontalBox::Slot(&local_1168);
    pFVar31 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar31);
    local_2078.Value.Left = (this->ScrollBarSlotPadding).Left;
    local_2078.Value.Top = (this->ScrollBarSlotPadding).Top;
    local_2078.Value.Right = (this->ScrollBarSlotPadding).Right;
    local_2078.Value.Bottom = (this->ScrollBarSlotPadding).Bottom;
    local_2078.bIsSet = true;
    local_2078.Getter._16_8_ = 0;
    local_2078.Getter._0_8_ = 0;
    local_2078.Getter._8_8_ = 0;
    pSVar32 = (STableViewBase_u_1408 *)
              TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                        ((FSlotArgumentsMixin *)&pFVar31->field_0x18,&local_2078);
    this->field783_0x580 = *pSVar32;
    pFVar33 = SBox::FArguments::FArguments(&local_6d8);
    local_22c8.Getter._16_8_ = 0;
    local_22c8.bIsSet = true;
    local_22c8.Getter._0_8_ = 0;
    local_22c8.Getter._8_8_ = 0;
    local_22c8.Value.Size = fVar45;
    pFVar33 = SBox::FArguments::WidthOverride(pFVar33,&local_22c8);
    pTVar38 = TSharedPtr<SScrollBar,1>::ToSharedRef(&this->ScrollBar,&local_1f80);
    pTVar43 = (pTVar38->SharedReferenceCount).ReferenceController;
    local_21c8.Object = (SWidget *)pTVar38->Object;
    if (pTVar43 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar43->SharedReferenceCount = (atomic<int>)((int)pTVar43->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_21c8.SharedReferenceCount.ReferenceController = pTVar43;
    pFVar33 = SBox::FArguments::operator[](pFVar33,&local_21c8);
    pTVar34 = MakeTDecl<SBox,RequiredArgs::T0RequiredArgs>
                        (&local_1e20,"SBox",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Views\\STableViewBase.cpp"
                         ,0xd9,local_2574);
    pTVar35 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                        (pTVar34,&local_1f90,pFVar33);
    pTVar8 = (pTVar35->SharedReferenceCount).ReferenceController;
    local_21b8.Object = (SWidget *)pTVar35->Object;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_21b8.SharedReferenceCount.ReferenceController = pTVar8;
    pFVar31 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                        ((FSlotArguments *)pSVar32,&local_21b8);
    pFVar30 = SHorizontalBox::FArguments::operator+(pFVar30,pFVar31);
    this_01 = MakeTDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
                        (&local_1e38,"SHorizontalBox",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Views\\STableViewBase.cpp"
                         ,0xce,&local_2578);
    pTVar36 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                        (this_01,&local_1fa0,pFVar30);
    TSharedPtr<SWidget,1>::TSharedPtr<SWidget,1><SHorizontalBox>(&local_2208,pTVar36);
    TSharedPtr<SWidget,1>::operator=(&local_2568,&local_2208);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2208.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1fa0.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1e38._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1f90.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1e20._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar43);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1f80.SharedReferenceCount.ReferenceController);
    SBox::FArguments::~FArguments(&local_6d8);
    SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_1168);
    SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_1080);
    DestructItems<SHorizontalBox::FSlot::FSlotArguments,int>
              ((FSlotArguments *)local_1780._Slots.AllocatorInstance.Data,local_1780._Slots.ArrayNum
              );
    if ((FSlotArguments *)local_1780._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
      FMemory::Free(local_1780._Slots.AllocatorInstance.Data);
    }
    FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_1780);
  }
  else {
    pFVar39 = SVerticalBox::FArguments::FArguments(&local_1578);
    pFVar40 = SVerticalBox::Slot(&local_eb0);
    local_22a8.Value = 1.0;
    local_22a8.bIsSet = true;
    local_22a8.Getter._16_8_ = 0;
    local_22a8.Getter._0_8_ = 0;
    local_22a8.Getter._8_8_ = 0;
    pFVar40 = SVerticalBox::FSlot::FSlotArguments::FillHeight(pFVar40,&local_22a8);
    local_23d8 = (SVerticalBox *)local_24f8.Object;
    FStack_23d0.ReferenceController = local_24f8.SharedReferenceCount.ReferenceController;
    if (FVar44.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar44.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar44.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((SVerticalBox **)&pFVar40->field_0x8 != &local_23d8) {
      *(SWidget **)&pFVar40->field_0x8 = local_24f8.Object;
      local_23d8 = (SVerticalBox *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&pFVar40->field_0x10,&FStack_23d0);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_23d0.ReferenceController);
    pFVar39 = SVerticalBox::FArguments::operator+(pFVar39,pFVar40);
    pFVar40 = SVerticalBox::Slot(&local_f98);
    pSVar37 = (STableViewBase_u_1408 *)SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar40);
    local_22f8 = *(STableViewBase_u_1408 *)&this->ScrollBarSlotPadding;
    SStack_22f0 = *(STableViewBase_u_1408 *)&(this->ScrollBarSlotPadding).Right;
    local_22e8 = 1;
    local_22d0 = 0;
    local_22e0 = (undefined1  [8])0x0;
    pvStack_22d8 = (void *)0x0;
    pSVar37[3] = local_22f8;
    pSVar37[4] = SStack_22f0;
    *(undefined1 *)(pSVar37 + 5) = 1;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)(pSVar37 + 6),
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_22e0);
    if (pSVar37 + 3 != (STableViewBase_u_1408 *)0x0) {
      pSVar32 = pSVar37;
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_22e0);
    if (pvStack_22d8 != (void *)0x0) {
      FMemory::Free(pvStack_22d8);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_22e0);
    this->field783_0x580 = *pSVar32;
    pFVar33 = SBox::FArguments::FArguments(&local_398);
    local_2288.Getter._16_8_ = 0;
    local_2288.bIsSet = true;
    local_2288.Getter._0_8_ = 0;
    local_2288.Getter._8_8_ = 0;
    local_2288.Value.Size = fVar45;
    pFVar33 = SBox::FArguments::HeightOverride(pFVar33,&local_2288);
    pTVar38 = TSharedPtr<SScrollBar,1>::ToSharedRef(&this->ScrollBar,&local_1f50);
    pTVar43 = (pTVar38->SharedReferenceCount).ReferenceController;
    pSVar27 = pTVar38->Object;
    if (pTVar43 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar43->SharedReferenceCount = (atomic<int>)((int)pTVar43->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar43->SharedReferenceCount = (atomic<int>)((int)pTVar43->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_2420 = (pFVar33->_Content).Widget.Object;
    pTStack_2418 = (pFVar33->_Content).Widget.SharedReferenceCount.ReferenceController;
    (pFVar33->_Content).Widget.Object = (SWidget *)pSVar27;
    (pFVar33->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar43;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (pTStack_2418);
    pTVar34 = MakeTDecl<SBox,RequiredArgs::T0RequiredArgs>
                        (&local_1e80,"SBox",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Views\\STableViewBase.cpp"
                         ,0xee,&local_2577);
    pTVar35 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                        (pTVar34,&local_1f60,pFVar33);
    pTVar8 = (pTVar35->SharedReferenceCount).ReferenceController;
    local_21f8.Object = (SWidget *)pTVar35->Object;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_21f8.SharedReferenceCount.ReferenceController = pTVar8;
    pFVar40 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                        ((FSlotArguments *)pSVar32,&local_21f8);
    pFVar39 = SVerticalBox::FArguments::operator+(pFVar39,pFVar40);
    pTVar41 = MakeTDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
                        (&local_1e98,"SVerticalBox",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Views\\STableViewBase.cpp"
                         ,0xe3,&local_2576);
    pTVar42 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                        (pTVar41,&local_1f70,pFVar39);
    local_2330.ReferenceController = (pTVar42->SharedReferenceCount).ReferenceController;
    local_2568.Object = (SWidget *)pTVar42->Object;
    if (local_2330.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_2330.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_2330.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_2338 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&local_2568.SharedReferenceCount,&local_2330);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2330.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1f70.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1e98._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1f60.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1e80._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar43);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1f50.SharedReferenceCount.ReferenceController);
    SBox::FArguments::~FArguments(&local_398);
    SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_f98);
    SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_eb0);
    DestructItems<SVerticalBox::FSlot::FSlotArguments,int>
              ((FSlotArguments *)local_1578._Slots.AllocatorInstance.Data,local_1578._Slots.ArrayNum
              );
    if ((FSlotArguments *)local_1578._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
      FMemory::Free(local_1578._Slots.AllocatorInstance.Data);
    }
    FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_1578);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar44.ReferenceController);
LAB_142a21cb9:
  pSVar5 = local_2568.Object;
  bVar17 = false;
  pSVar3 = param_4->Object;
  if (pSVar3 == (SHeaderRow *)0x0) {
    if (((SListPanel *)local_2568.Object == (SListPanel *)0x0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x408,L""), bVar17)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    FVar44.ReferenceController = local_2568.SharedReferenceCount.ReferenceController;
    if (local_2568.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_2568.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_2568.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (((SListPanel *)pSVar5 == (SListPanel *)0x0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x25d,L""), bVar17)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    FSlotBase::DetatchParentFromContent((FSlotBase *)&this->field_0x238);
    if (FVar44.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar44.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar44.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_2328 = *(undefined8 *)&this->field_0x248;
    pTStack_2320 = *(TReferenceControllerBase<1> **)&this->field_0x250;
    *(SWidget **)&this->field_0x248 = pSVar5;
    *(TReferenceControllerBase<1> **)&this->field_0x250 = FVar44.ReferenceController;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (pTStack_2320);
    FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)&this->field_0x238);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar44.ReferenceController);
    FVar44.ReferenceController = local_2568.SharedReferenceCount.ReferenceController;
  }
  else {
    if (param_5->Object == (SScrollBar *)0x0) {
      pTVar38 = TSharedPtr<SScrollBar,1>::ToSharedRef(&this->ScrollBar,&local_1f40);
      (pSVar3->ScrollBarThickness).field0_0x0._s_0.X = 16.0;
      local_2548 = (undefined1  [8])0x0;
      local_2540.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_2540.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2548,
                 (FWriteAccessScope *)&local_2098);
      local_2080 = &local_2540;
      puVar21 = UE::Core::Private::DelegateAllocate(0x38,&local_2540);
      pTVar43 = (TReferenceControllerBase<1> *)param_4;
      if (puVar21 != (undefined8 *)0x0) {
        pSVar27 = pTVar38->Object;
        pTVar43 = (pTVar38->SharedReferenceCount).ReferenceController;
        if (pTVar43 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar43->SharedReferenceCount = (atomic<int>)((int)pTVar43->SharedReferenceCount + 1);
          UNLOCK();
        }
        bVar17 = true;
        *puVar21 = &
                   ___7__TCommonDelegateInstanceState___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar23 = FDelegateHandle::GenerateNewID();
        puVar21[2] = uVar23;
        *puVar21 = &
                   ___7__TBaseSPMethodDelegateInstance__00__CBVSScrollBar___00__A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
        ;
        puVar21[3] = pSVar27;
        puVar21[4] = pTVar43;
        if (pTVar43 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar43->WeakReferenceCount = (atomic<int>)((int)pTVar43->WeakReferenceCount + 1);
          UNLOCK();
        }
        puVar21[5] = SScrollBar::ShouldBeVisible;
        puVar21[6] = (ulonglong)local_1f18.SharedReferenceCount.ReferenceController._4_4_ << 0x20;
      }
      if (bVar17) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar43)
        ;
      }
      if (local_2098.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2098.Accessor,&local_2098);
      }
      (pSVar3->ScrollBarVisibility).bIsSet = true;
      TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pSVar3->ScrollBarVisibility).Getter,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2548);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2548,
                 (FWriteAccessScope *)&local_2120);
      if ((local_2540.DelegateSize != 0) &&
         (local_2540.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_2540.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_2540,0,0,0x10);
        local_2540.DelegateSize = 0;
      }
      if (local_2120.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2120.Accessor,&local_2120);
      }
      if (local_2540.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_2540.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_2548);
      SHeaderRow::RegenerateWidgets(pSVar3);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1f40.SharedReferenceCount.ReferenceController);
    }
    pFVar39 = SVerticalBox::FArguments::FArguments(&local_1370);
    pFVar40 = SVerticalBox::Slot(&local_ce0);
    pFVar40 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar40);
    if ((param_4->Object == (SHeaderRow *)0x0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x408,L""), bVar17)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pTVar43 = (param_4->SharedReferenceCount).ReferenceController;
    pSVar3 = param_4->Object;
    if (pTVar43 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar43->SharedReferenceCount = (atomic<int>)((int)pTVar43->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pSVar3 == (SHeaderRow *)0x0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x25d,L""), bVar17)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if (pTVar43 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar43->SharedReferenceCount = (atomic<int>)((int)pTVar43->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_2308.Object = (SWidget *)pSVar3;
    local_2308.SharedReferenceCount.ReferenceController = pTVar43;
    pFVar40 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                        ((FSlotArguments *)pFVar40,&local_2308);
    pFVar39 = SVerticalBox::FArguments::operator+(pFVar39,pFVar40);
    pFVar40 = SVerticalBox::Slot(&local_dc8);
    local_2268.Value = 1.0;
    local_2268.bIsSet = true;
    local_2268.Getter._16_8_ = 0;
    local_2268.Getter._0_8_ = 0;
    local_2268.Getter._8_8_ = 0;
    pFVar40 = SVerticalBox::FSlot::FSlotArguments::FillHeight(pFVar40,&local_2268);
    pSVar5 = local_2568.Object;
    if (((SListPanel *)local_2568.Object == (SListPanel *)0x0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x408,L""), bVar17)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    FVar44.ReferenceController = local_2568.SharedReferenceCount.ReferenceController;
    local_21a8.Object = local_2568.Object;
    local_21a8.SharedReferenceCount.ReferenceController =
         local_2568.SharedReferenceCount.ReferenceController;
    if (local_2568.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_2568.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_2568.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (((SListPanel *)pSVar5 == (SListPanel *)0x0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x25d,L""), bVar17)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pFVar40 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                        ((FSlotArguments *)pFVar40,&local_21a8);
    pFVar39 = SVerticalBox::FArguments::operator+(pFVar39,pFVar40);
    pTVar41 = MakeTDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
                        (&local_1e68,"SVerticalBox",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Views\\STableViewBase.cpp"
                         ,0x102,&local_2575);
    pTVar42 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                        (pTVar41,&local_2018,pFVar39);
    pTVar8 = (pTVar42->SharedReferenceCount).ReferenceController;
    local_21e8.Object = (SWidget *)pTVar42->Object;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_21e8.SharedReferenceCount.ReferenceController = pTVar8;
    TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>::operator[]
              ((TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *)
               &this->field_0x218,&local_21e8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2018.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1e68._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_21a8.SharedReferenceCount.ReferenceController);
    SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_dc8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2308.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar43);
    SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_ce0);
    DestructItems<SVerticalBox::FSlot::FSlotArguments,int>
              ((FSlotArguments *)local_1370._Slots.AllocatorInstance.Data,local_1370._Slots.ArrayNum
              );
    if ((FSlotArguments *)local_1370._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
      FMemory::Free(local_1370._Slots.AllocatorInstance.Data);
    }
    FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_1370);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar44.ReferenceController);
  return;
}

// ConstructHorizontalShadowBox @ 142a22220

TSharedRef<SWidget,1> * __thiscall
STableViewBase::ConstructHorizontalShadowBox
          (STableViewBase *this,TSharedRef<SWidget,1> *__return_storage_ptr__,
          TSharedRef<SWidget,1> *param_1)

{
  longlong *plVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<SWidget,1> *pTVar5;
  FArguments *pFVar6;
  FSlotArguments *pFVar7;
  FArguments *pFVar8;
  TSharedRef<SImage,1> *pTVar9;
  TSharedRef<SOverlay,1> *pTVar10;
  FSlotArguments *pFVar11;
  T0RequiredArgs local_res8 [8];
  TSharedRef<SWidget,1> *local_res10;
  T0RequiredArgs local_res18 [8];
  T0RequiredArgs local_res20 [8];
  FLLMScope local_a38 [5];
  FName local_a28;
  undefined8 uStack_a20;
  bool local_a18;
  FName local_a08;
  uchar local_a00;
  undefined1 local_9ff;
  undefined1 local_9f8 [8];
  ForAnyElementType FStack_9f0;
  ulonglong local_9e8;
  uchar local_9e0;
  undefined1 local_9df;
  undefined1 local_9d8 [8];
  ForAnyElementType FStack_9d0;
  ulonglong local_9c8;
  SImage *local_9c0;
  FSharedReferencer<1> local_9b8;
  SImage *local_9b0;
  FSharedReferencer<1> local_9a8;
  FSlateBrush *local_9a0;
  undefined1 local_998;
  undefined1 local_990 [8];
  ForAnyElementType FStack_988;
  ulonglong local_980;
  FSlateBrush *local_978;
  undefined1 local_970;
  undefined1 local_968 [8];
  ForAnyElementType FStack_960;
  ulonglong local_958;
  SWidget *local_950;
  FSharedReferencer<1> local_948;
  undefined4 local_940 [2];
  undefined4 local_938 [2];
  undefined4 local_930 [2];
  undefined4 local_928 [2];
  TSharedRef<SOverlay,1> local_920;
  TSharedRef<SImage,1> local_910;
  TSharedRef<SImage,1> local_900;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_8f0;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_8d8;
  undefined1 local_8c0 [56];
  void *local_888;
  undefined1 local_860 [56];
  void *local_828;
  undefined1 local_800 [56];
  void *local_7c8;
  FArguments local_7a0;
  FArguments local_598;
  FArguments local_2f0;
  
  local_res10 = __return_storage_ptr__;
  pFVar6 = SOverlay::FArguments::FArguments(&local_7a0);
  pFVar7 = SOverlay::Slot((FSlotArguments *)local_800,0);
  pFVar7 = TPaddingWidgetSlotMixin<SOverlay::FOverlaySlot>::FSlotArgumentsMixin::Padding
                     ((FSlotArgumentsMixin *)&pFVar7->_padding_,0.0);
  local_948.ReferenceController = (param_1->SharedReferenceCount).ReferenceController;
  local_950 = param_1->Object;
  if (local_948.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_948.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_948.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((SWidget **)&pFVar7->_padding_ != &local_950) {
    pFVar7->_padding_ = (longlong)local_950;
    local_950 = (SWidget *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar7->_padding_,&local_948);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_948.ReferenceController);
  pFVar6 = SOverlay::FArguments::operator+(pFVar6,pFVar7);
  pFVar7 = SOverlay::Slot((FSlotArguments *)local_860,0);
  plVar1 = &pFVar7->_padding_;
  if ((longlong *)local_940 != plVar1) {
    *(undefined4 *)plVar1 = 1;
    *(undefined1 *)((longlong)&pFVar7->_padding_ + 4) = 1;
  }
  pFVar11 = (FSlotArguments *)0x0;
  if (plVar1 != (longlong *)0x0) {
    pFVar11 = pFVar7;
  }
  if ((longlong *)local_938 != &pFVar11->_padding_) {
    *(undefined4 *)&pFVar11->_padding_ = 0;
    *(undefined1 *)((longlong)&pFVar11->_padding_ + 4) = 1;
  }
  pFVar7 = (FSlotArguments *)0x0;
  if (pFVar11 != (FSlotArguments *)0xffffffffffffffb8) {
    pFVar7 = pFVar11;
  }
  pFVar8 = SImage::FArguments::FArguments(&local_2f0);
  local_a00 = (uchar)EVisibility::HitTestInvisible.Value.Value;
  local_9ff = 1;
  local_9e8 = 0;
  local_9f8 = (undefined1  [8])0x0;
  FStack_9f0.Data = (FScriptContainerElement *)0x0;
  *(TEnumAsByte<EVisibility::Private> *)&pFVar8->_padding_ =
       EVisibility::HitTestInvisible.Value.Value;
  *(undefined1 *)((longlong)&pFVar8->_padding_ + 1) = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar8->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_9f8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_9f8,
             (FWriteAccessScope *)&local_a28);
  if (((int)local_9e8 != 0) && (FStack_9f0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_9f0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_9f0,0,0,0x10);
    local_9e8 = local_9e8 & 0xffffffff00000000;
  }
  if (local_a18 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)uStack_a20,(FDestructionSentinel *)&local_a28);
  }
  if (FStack_9f0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_9f0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_9f8);
  uStack_a20 = (TReferenceControllerBase<1> *)((ulonglong)uStack_a20._4_4_ << 0x20);
  local_a28 = (FName)GetStartShadowOpacity;
  pFVar8 = SImage::FArguments::ColorAndOpacity<STableViewBase>
                     (pFVar8,this,(pmf_63eb7225 *)&local_a28);
  local_998 = 1;
  local_9a0 = &this->ShadowBoxStyle->LeftShadowBrush;
  local_980 = 0;
  local_990 = (undefined1  [8])0x0;
  FStack_988.Data = (FScriptContainerElement *)0x0;
  (pFVar8->_Image).Value = local_9a0;
  (pFVar8->_Image).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar8->_Image).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_990);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_990,
             (FWriteAccessScope *)&local_a28);
  if (((int)local_980 != 0) && (FStack_988.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_988.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_988,0,0,0x10);
    local_980 = local_980 & 0xffffffff00000000;
  }
  if (local_a18 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)uStack_a20,(FDestructionSentinel *)&local_a28);
  }
  if (FStack_988.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_988.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_990);
  FLLMScope::FLLMScope(local_a38,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_a08 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope((FMemScope *)&local_a28,&local_a08,true);
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
            (&local_8d8,"SImage",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Views\\STableViewBase.cpp"
             ,0x71,local_res8);
  FMemScope::~FMemScope((FMemScope *)&local_a28);
  FLLMScope::~FLLMScope(local_a38);
  pTVar9 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                     (&local_8d8,&local_900,pFVar8);
  pTVar2 = (pTVar9->SharedReferenceCount).ReferenceController;
  local_9c0 = pTVar9->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_9b8.ReferenceController = pTVar2;
  if ((SImage **)&pFVar7->_padding_ != &local_9c0) {
    pFVar7->_padding_ = (longlong)local_9c0;
    local_9c0 = (SImage *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar7->_padding_,&local_9b8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_9b8.ReferenceController);
  pFVar6 = SOverlay::FArguments::operator+(pFVar6,pFVar7);
  pFVar7 = SOverlay::Slot((FSlotArguments *)local_8c0,0);
  plVar1 = &pFVar7->_padding_;
  if ((longlong *)local_930 != plVar1) {
    *(undefined4 *)plVar1 = 3;
    *(undefined1 *)((longlong)&pFVar7->_padding_ + 4) = 1;
  }
  pFVar11 = (FSlotArguments *)0x0;
  if (plVar1 != (longlong *)0x0) {
    pFVar11 = pFVar7;
  }
  if ((longlong *)local_928 != &pFVar11->_padding_) {
    *(undefined4 *)&pFVar11->_padding_ = 0;
    *(undefined1 *)((longlong)&pFVar11->_padding_ + 4) = 1;
  }
  pFVar7 = (FSlotArguments *)0x0;
  if (pFVar11 != (FSlotArguments *)0xffffffffffffffb8) {
    pFVar7 = pFVar11;
  }
  pFVar8 = SImage::FArguments::FArguments(&local_598);
  local_9e0 = (uchar)EVisibility::HitTestInvisible.Value.Value;
  local_9df = 1;
  local_9c8 = 0;
  local_9d8 = (undefined1  [8])0x0;
  FStack_9d0.Data = (FScriptContainerElement *)0x0;
  *(TEnumAsByte<EVisibility::Private> *)&pFVar8->_padding_ =
       EVisibility::HitTestInvisible.Value.Value;
  *(undefined1 *)((longlong)&pFVar8->_padding_ + 1) = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar8->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_9d8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_9d8,
             (FWriteAccessScope *)&local_a28);
  if (((int)local_9c8 != 0) && (FStack_9d0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_9d0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_9d0,0,0,0x10);
    local_9c8 = local_9c8 & 0xffffffff00000000;
  }
  if (local_a18 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)uStack_a20,(FDestructionSentinel *)&local_a28);
  }
  if (FStack_9d0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_9d0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_9d8);
  uStack_a20 = uStack_a20 & 0xffffffff00000000;
  local_a28 = (FName)GetEndShadowOpacity;
  pFVar8 = SImage::FArguments::ColorAndOpacity<STableViewBase>
                     (pFVar8,this,(pmf_63eb7225 *)&local_a28);
  local_970 = 1;
  local_978 = &this->ShadowBoxStyle->RightShadowBrush;
  local_958 = 0;
  local_968 = (undefined1  [8])0x0;
  FStack_960.Data = (FScriptContainerElement *)0x0;
  (pFVar8->_Image).Value = local_978;
  (pFVar8->_Image).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar8->_Image).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_968);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_968,
             (FWriteAccessScope *)&local_a28);
  if (((int)local_958 != 0) && (FStack_960.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_960.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_960,0,0,0x10);
    local_958 = local_958 & 0xffffffff00000000;
  }
  if (local_a18 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)uStack_a20,(FDestructionSentinel *)&local_a28);
  }
  if (FStack_960.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_960.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_968);
  FLLMScope::FLLMScope(local_a38,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_a28 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope((FMemScope *)&local_a08,&local_a28,true);
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
            (&local_8f0,"SImage",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Views\\STableViewBase.cpp"
             ,0x7b,local_res18);
  FMemScope::~FMemScope((FMemScope *)&local_a08);
  FLLMScope::~FLLMScope(local_a38);
  pTVar9 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                     (&local_8f0,&local_910,pFVar8);
  pTVar3 = (pTVar9->SharedReferenceCount).ReferenceController;
  local_9b0 = pTVar9->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_9a8.ReferenceController = pTVar3;
  if ((SImage **)&pFVar7->_padding_ != &local_9b0) {
    pFVar7->_padding_ = (longlong)local_9b0;
    local_9b0 = (SImage *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar7->_padding_,&local_9a8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_9a8.ReferenceController);
  pFVar6 = SOverlay::FArguments::operator+(pFVar6,pFVar7);
  FLLMScope::FLLMScope(local_a38,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_a28 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope((FMemScope *)&local_a08,&local_a28,true);
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>
            ((TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs> *)&local_a28,"SOverlay",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Views\\STableViewBase.cpp"
             ,0x66,local_res20);
  FMemScope::~FMemScope((FMemScope *)&local_a08);
  FLLMScope::~FLLMScope(local_a38);
  pTVar10 = TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::operator<<=
                      ((TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs> *)&local_a28,&local_920,
                       pFVar6);
  pTVar5 = local_res10;
  local_res10->Object = (SWidget *)pTVar10->Object;
  pTVar4 = (pTVar10->SharedReferenceCount).ReferenceController;
  (local_res10->SharedReferenceCount).ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_920.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(uStack_a20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_910.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_8f0._Widget.SharedReferenceCount.ReferenceController);
  SImage::FArguments::~FArguments(&local_598);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_8c0 + 0x30));
  if (local_888 != (void *)0x0) {
    FMemory::Free(local_888);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)(local_8c0 + 0x30));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_8c0._16_8_);
  if ((undefined8 *)local_8c0._0_8_ != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)local_8c0._0_8_)(local_8c0._0_8_,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_900.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_8d8._Widget.SharedReferenceCount.ReferenceController);
  SImage::FArguments::~FArguments(&local_2f0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_860 + 0x30));
  if (local_828 != (void *)0x0) {
    FMemory::Free(local_828);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)(local_860 + 0x30));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_860._16_8_);
  if ((undefined8 *)local_860._0_8_ != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)local_860._0_8_)(local_860._0_8_,1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_800 + 0x30));
  if (local_7c8 != (void *)0x0) {
    FMemory::Free(local_7c8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)(local_800 + 0x30));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_800._16_8_);
  if ((undefined8 *)local_800._0_8_ != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)local_800._0_8_)(local_800._0_8_,1);
  }
  DestructItems<SOverlay::FOverlaySlot::FSlotArguments,int>
            ((FSlotArguments *)local_7a0._Slots.AllocatorInstance.Data,local_7a0._Slots.ArrayNum);
  if ((FSlotArguments *)local_7a0._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_7a0._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_7a0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return pTVar5;
}

// ConstructVerticalShadowBox @ 142a22ad0

TSharedRef<SWidget,1> * __thiscall
STableViewBase::ConstructVerticalShadowBox
          (STableViewBase *this,TSharedRef<SWidget,1> *__return_storage_ptr__,
          TSharedRef<SWidget,1> *param_1)

{
  longlong *plVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<SWidget,1> *pTVar5;
  FArguments *pFVar6;
  FSlotArguments *pFVar7;
  FArguments *pFVar8;
  TSharedRef<SImage,1> *pTVar9;
  TSharedRef<SOverlay,1> *pTVar10;
  FSlotArguments *pFVar11;
  T0RequiredArgs local_res8 [8];
  TSharedRef<SWidget,1> *local_res10;
  T0RequiredArgs local_res18 [8];
  T0RequiredArgs local_res20 [8];
  FLLMScope local_a38 [5];
  FName local_a28;
  undefined8 uStack_a20;
  bool local_a18;
  FName local_a08;
  uchar local_a00;
  undefined1 local_9ff;
  undefined1 local_9f8 [8];
  ForAnyElementType FStack_9f0;
  ulonglong local_9e8;
  uchar local_9e0;
  undefined1 local_9df;
  undefined1 local_9d8 [8];
  ForAnyElementType FStack_9d0;
  ulonglong local_9c8;
  SImage *local_9c0;
  FSharedReferencer<1> local_9b8;
  SImage *local_9b0;
  FSharedReferencer<1> local_9a8;
  FSlateBrush *local_9a0;
  undefined1 local_998;
  undefined1 local_990 [8];
  ForAnyElementType FStack_988;
  ulonglong local_980;
  FSlateBrush *local_978;
  undefined1 local_970;
  undefined1 local_968 [8];
  ForAnyElementType FStack_960;
  ulonglong local_958;
  SWidget *local_950;
  FSharedReferencer<1> local_948;
  undefined4 local_940 [2];
  undefined4 local_938 [2];
  undefined4 local_930 [2];
  undefined4 local_928 [2];
  TSharedRef<SOverlay,1> local_920;
  TSharedRef<SImage,1> local_910;
  TSharedRef<SImage,1> local_900;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_8f0;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_8d8;
  undefined1 local_8c0 [56];
  void *local_888;
  undefined1 local_860 [56];
  void *local_828;
  undefined1 local_800 [56];
  void *local_7c8;
  FArguments local_7a0;
  FArguments local_598;
  FArguments local_2f0;
  
  local_res10 = __return_storage_ptr__;
  pFVar6 = SOverlay::FArguments::FArguments(&local_7a0);
  pFVar7 = SOverlay::Slot((FSlotArguments *)local_800,0);
  pFVar7 = TPaddingWidgetSlotMixin<SOverlay::FOverlaySlot>::FSlotArgumentsMixin::Padding
                     ((FSlotArgumentsMixin *)&pFVar7->_padding_,0.0);
  local_948.ReferenceController = (param_1->SharedReferenceCount).ReferenceController;
  local_950 = param_1->Object;
  if (local_948.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_948.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_948.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((SWidget **)&pFVar7->_padding_ != &local_950) {
    pFVar7->_padding_ = (longlong)local_950;
    local_950 = (SWidget *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar7->_padding_,&local_948);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_948.ReferenceController);
  pFVar6 = SOverlay::FArguments::operator+(pFVar6,pFVar7);
  pFVar7 = SOverlay::Slot((FSlotArguments *)local_860,0);
  plVar1 = &pFVar7->_padding_;
  if ((longlong *)local_940 != plVar1) {
    *(undefined4 *)plVar1 = 0;
    *(undefined1 *)((longlong)&pFVar7->_padding_ + 4) = 1;
  }
  pFVar11 = (FSlotArguments *)0x0;
  if (plVar1 != (longlong *)0x0) {
    pFVar11 = pFVar7;
  }
  if ((longlong *)local_938 != &pFVar11->_padding_) {
    *(undefined4 *)&pFVar11->_padding_ = 1;
    *(undefined1 *)((longlong)&pFVar11->_padding_ + 4) = 1;
  }
  pFVar7 = (FSlotArguments *)0x0;
  if (pFVar11 != (FSlotArguments *)0xffffffffffffffb8) {
    pFVar7 = pFVar11;
  }
  pFVar8 = SImage::FArguments::FArguments(&local_2f0);
  local_a00 = (uchar)EVisibility::HitTestInvisible.Value.Value;
  local_9ff = 1;
  local_9e8 = 0;
  local_9f8 = (undefined1  [8])0x0;
  FStack_9f0.Data = (FScriptContainerElement *)0x0;
  *(TEnumAsByte<EVisibility::Private> *)&pFVar8->_padding_ =
       EVisibility::HitTestInvisible.Value.Value;
  *(undefined1 *)((longlong)&pFVar8->_padding_ + 1) = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar8->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_9f8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_9f8,
             (FWriteAccessScope *)&local_a28);
  if (((int)local_9e8 != 0) && (FStack_9f0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_9f0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_9f0,0,0,0x10);
    local_9e8 = local_9e8 & 0xffffffff00000000;
  }
  if (local_a18 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)uStack_a20,(FDestructionSentinel *)&local_a28);
  }
  if (FStack_9f0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_9f0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_9f8);
  uStack_a20 = (TReferenceControllerBase<1> *)((ulonglong)uStack_a20._4_4_ << 0x20);
  local_a28 = (FName)GetStartShadowOpacity;
  pFVar8 = SImage::FArguments::ColorAndOpacity<STableViewBase>
                     (pFVar8,this,(pmf_63eb7225 *)&local_a28);
  local_998 = 1;
  local_9a0 = &this->ShadowBoxStyle->TopShadowBrush;
  local_980 = 0;
  local_990 = (undefined1  [8])0x0;
  FStack_988.Data = (FScriptContainerElement *)0x0;
  (pFVar8->_Image).Value = local_9a0;
  (pFVar8->_Image).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar8->_Image).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_990);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_990,
             (FWriteAccessScope *)&local_a28);
  if (((int)local_980 != 0) && (FStack_988.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_988.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_988,0,0,0x10);
    local_980 = local_980 & 0xffffffff00000000;
  }
  if (local_a18 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)uStack_a20,(FDestructionSentinel *)&local_a28);
  }
  if (FStack_988.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_988.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_990);
  FLLMScope::FLLMScope(local_a38,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_a08 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope((FMemScope *)&local_a28,&local_a08,true);
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
            (&local_8d8,"SImage",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Views\\STableViewBase.cpp"
             ,0x53,local_res8);
  FMemScope::~FMemScope((FMemScope *)&local_a28);
  FLLMScope::~FLLMScope(local_a38);
  pTVar9 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                     (&local_8d8,&local_900,pFVar8);
  pTVar2 = (pTVar9->SharedReferenceCount).ReferenceController;
  local_9c0 = pTVar9->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_9b8.ReferenceController = pTVar2;
  if ((SImage **)&pFVar7->_padding_ != &local_9c0) {
    pFVar7->_padding_ = (longlong)local_9c0;
    local_9c0 = (SImage *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar7->_padding_,&local_9b8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_9b8.ReferenceController);
  pFVar6 = SOverlay::FArguments::operator+(pFVar6,pFVar7);
  pFVar7 = SOverlay::Slot((FSlotArguments *)local_8c0,0);
  plVar1 = &pFVar7->_padding_;
  if ((longlong *)local_930 != plVar1) {
    *(undefined4 *)plVar1 = 0;
    *(undefined1 *)((longlong)&pFVar7->_padding_ + 4) = 1;
  }
  pFVar11 = (FSlotArguments *)0x0;
  if (plVar1 != (longlong *)0x0) {
    pFVar11 = pFVar7;
  }
  if ((longlong *)local_928 != &pFVar11->_padding_) {
    *(undefined4 *)&pFVar11->_padding_ = 3;
    *(undefined1 *)((longlong)&pFVar11->_padding_ + 4) = 1;
  }
  pFVar7 = (FSlotArguments *)0x0;
  if (pFVar11 != (FSlotArguments *)0xffffffffffffffb8) {
    pFVar7 = pFVar11;
  }
  pFVar8 = SImage::FArguments::FArguments(&local_598);
  local_9e0 = (uchar)EVisibility::HitTestInvisible.Value.Value;
  local_9df = 1;
  local_9c8 = 0;
  local_9d8 = (undefined1  [8])0x0;
  FStack_9d0.Data = (FScriptContainerElement *)0x0;
  *(TEnumAsByte<EVisibility::Private> *)&pFVar8->_padding_ =
       EVisibility::HitTestInvisible.Value.Value;
  *(undefined1 *)((longlong)&pFVar8->_padding_ + 1) = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar8->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_9d8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_9d8,
             (FWriteAccessScope *)&local_a28);
  if (((int)local_9c8 != 0) && (FStack_9d0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_9d0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_9d0,0,0,0x10);
    local_9c8 = local_9c8 & 0xffffffff00000000;
  }
  if (local_a18 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)uStack_a20,(FDestructionSentinel *)&local_a28);
  }
  if (FStack_9d0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_9d0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_9d8);
  uStack_a20 = uStack_a20 & 0xffffffff00000000;
  local_a28 = (FName)GetEndShadowOpacity;
  pFVar8 = SImage::FArguments::ColorAndOpacity<STableViewBase>
                     (pFVar8,this,(pmf_63eb7225 *)&local_a28);
  local_970 = 1;
  local_978 = &this->ShadowBoxStyle->BottomShadowBrush;
  local_958 = 0;
  local_968 = (undefined1  [8])0x0;
  FStack_960.Data = (FScriptContainerElement *)0x0;
  (pFVar8->_Image).Value = local_978;
  (pFVar8->_Image).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar8->_Image).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_968);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_968,
             (FWriteAccessScope *)&local_a28);
  if (((int)local_958 != 0) && (FStack_960.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_960.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_960,0,0,0x10);
    local_958 = local_958 & 0xffffffff00000000;
  }
  if (local_a18 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)uStack_a20,(FDestructionSentinel *)&local_a28);
  }
  if (FStack_960.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_960.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_968);
  FLLMScope::FLLMScope(local_a38,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_a28 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope((FMemScope *)&local_a08,&local_a28,true);
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
            (&local_8f0,"SImage",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Views\\STableViewBase.cpp"
             ,0x5d,local_res18);
  FMemScope::~FMemScope((FMemScope *)&local_a08);
  FLLMScope::~FLLMScope(local_a38);
  pTVar9 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                     (&local_8f0,&local_910,pFVar8);
  pTVar3 = (pTVar9->SharedReferenceCount).ReferenceController;
  local_9b0 = pTVar9->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_9a8.ReferenceController = pTVar3;
  if ((SImage **)&pFVar7->_padding_ != &local_9b0) {
    pFVar7->_padding_ = (longlong)local_9b0;
    local_9b0 = (SImage *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar7->_padding_,&local_9a8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_9a8.ReferenceController);
  pFVar6 = SOverlay::FArguments::operator+(pFVar6,pFVar7);
  FLLMScope::FLLMScope(local_a38,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_a28 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope((FMemScope *)&local_a08,&local_a28,true);
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>
            ((TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs> *)&local_a28,"SOverlay",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Views\\STableViewBase.cpp"
             ,0x48,local_res20);
  FMemScope::~FMemScope((FMemScope *)&local_a08);
  FLLMScope::~FLLMScope(local_a38);
  pTVar10 = TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::operator<<=
                      ((TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs> *)&local_a28,&local_920,
                       pFVar6);
  pTVar5 = local_res10;
  local_res10->Object = (SWidget *)pTVar10->Object;
  pTVar4 = (pTVar10->SharedReferenceCount).ReferenceController;
  (local_res10->SharedReferenceCount).ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_920.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(uStack_a20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_910.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_8f0._Widget.SharedReferenceCount.ReferenceController);
  SImage::FArguments::~FArguments(&local_598);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_8c0 + 0x30));
  if (local_888 != (void *)0x0) {
    FMemory::Free(local_888);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)(local_8c0 + 0x30));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_8c0._16_8_);
  if ((undefined8 *)local_8c0._0_8_ != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)local_8c0._0_8_)(local_8c0._0_8_,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_900.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_8d8._Widget.SharedReferenceCount.ReferenceController);
  SImage::FArguments::~FArguments(&local_2f0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_860 + 0x30));
  if (local_828 != (void *)0x0) {
    FMemory::Free(local_828);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)(local_860 + 0x30));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_860._16_8_);
  if ((undefined8 *)local_860._0_8_ != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)local_860._0_8_)(local_860._0_8_,1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_800 + 0x30));
  if (local_7c8 != (void *)0x0) {
    FMemory::Free(local_7c8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)(local_800 + 0x30));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_800._16_8_);
  if ((undefined8 *)local_800._0_8_ != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)local_800._0_8_)(local_800._0_8_,1);
  }
  DestructItems<SOverlay::FOverlaySlot::FSlotArguments,int>
            ((FSlotArguments *)local_7a0._Slots.AllocatorInstance.Data,local_7a0._Slots.ArrayNum);
  if ((FSlotArguments *)local_7a0._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_7a0._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_7a0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return pTVar5;
}

// EndInertialScrolling @ 142a26830

void __thiscall STableViewBase::EndInertialScrolling(STableViewBase *this,bool param_1)

{
  FInertialScrollManager::ClearScrollVelocity(&this->InertialScrollManager,param_1);
  this->bIsInertialScroll = false;
  return;
}

// EnsureTickToRefresh @ 142a26860

EActiveTimerReturnType __thiscall
STableViewBase::EnsureTickToRefresh(STableViewBase *this,double param_1,float param_2)

{
  return Stop;
}

// FindChildUnderPosition @ 142a285a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
STableViewBase::FindChildUnderPosition
          (STableViewBase *this,FArrangedChildren *param_1,TVector2<double> *param_2)

{
  SListPanel *this_00;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FGeometry *pFVar4;
  undefined1 auStack_78 [32];
  float local_58;
  float local_54;
  FGeometry local_50;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  this_00 = (this->ItemsPanel).Object;
  if (this_00 == (SListPanel *)0x0) {
    iVar3 = -1;
  }
  else {
    pFVar4 = SWidget::GetCachedGeometry((SWidget *)this_00);
    local_50.Size = pFVar4->Size;
    local_50._8_8_ = *(undefined8 *)&pFVar4->Scale;
    local_50._16_8_ = *(undefined8 *)((longlong)&(pFVar4->AbsolutePosition).field0_0x0 + 4);
    local_50._24_8_ = *(undefined8 *)((longlong)&(pFVar4->Position).field0_0x0 + 4);
    local_50.AccumulatedRenderTransform.M.M._4_8_ =
         *(undefined8 *)((pFVar4->AccumulatedRenderTransform).M.M[0] + 1);
    local_50.AccumulatedRenderTransform._12_8_ =
         *(undefined8 *)((pFVar4->AccumulatedRenderTransform).M.M[1] + 1);
    local_50._48_8_ =
         *(undefined8 *)((longlong)&(pFVar4->AccumulatedRenderTransform).Trans.field0_0x0 + 4);
    if ((this->ItemsPanel).Object == (SListPanel *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        iVar3 = (*pcVar1)();
        return iVar3;
      }
    }
    SWidget::ArrangeChildren((SWidget *)(this->ItemsPanel).Object,&local_50,param_1,true);
    if ((this->ItemsPanel).Object == (SListPanel *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        iVar3 = (*pcVar1)();
        return iVar3;
      }
    }
    local_58 = (float)(param_2->field0_0x0)._s_0.X;
    local_54 = (float)(param_2->field0_0x0)._s_0.Y;
    iVar3 = SWidget::FindChildUnderPosition(param_1,(FDeprecateVector2DParameter *)&local_58);
  }
  return iVar3;
}

// GetConstructedTableItems @ 142a28f00

FChildren * __thiscall STableViewBase::GetConstructedTableItems(STableViewBase *this)

{
  code *pcVar1;
  bool bVar2;
  FChildren *pFVar3;
  
  if ((this->ItemsPanel).Object == (SListPanel *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FChildren *)(*pcVar1)();
      return pFVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000142a28f48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar3 = (FChildren *)(**(code **)(((this->ItemsPanel).Object)->_padding_ + 0x180))();
  return pFVar3;
}

// GetEndShadowOpacity @ 142a29020

FSlateColor * __thiscall
STableViewBase::GetEndShadowOpacity(STableViewBase *this,FSlateColor *__return_storage_ptr__)

{
  float fVar1;
  code *pcVar2;
  bool bVar3;
  FSlateColor *pFVar4;
  FDeprecateSlateVector2D FVar5;
  float fVar6;
  float local_res8;
  float fStackX_c;
  
  if ((this->ItemsPanel).Object == (SListPanel *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FSlateColor *)(*pcVar2)();
      return pFVar4;
    }
  }
  FVar5 = SWidget::GetDesiredSize((SWidget *)(this->ItemsPanel).Object);
  if (this->Orientation == Orient_Vertical) {
    fStackX_c = (float)((ulonglong)*(undefined8 *)FVar5 >> 0x20);
  }
  else {
    local_res8 = (float)*(undefined8 *)FVar5;
    fStackX_c = local_res8;
  }
  if ((this->ScrollBar).Object == (SScrollBar *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FSlateColor *)(*pcVar2)();
      return pFVar4;
    }
  }
  fVar6 = SScrollBar::DistanceFromBottom((this->ScrollBar).Object);
  fVar1 = this->ShadowFadeDistance;
  (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.R = 1.0;
  (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.G = 1.0;
  (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.B = 1.0;
  (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.A = (fVar6 * fStackX_c) / fVar1;
  __return_storage_ptr__->ColorUseRule = UseColor_Specified;
  return __return_storage_ptr__;
}

// GetFirstLineScrollOffset @ 142a29560

float __thiscall STableViewBase::GetFirstLineScrollOffset(STableViewBase *this)

{
  int iVar1;
  double dVar2;
  
  iVar1 = (**(code **)(*(longlong *)this + 0x270))();
  dVar2 = this->CurrentScrollOffset / (double)iVar1;
  return (float)(dVar2 - (double)(longlong)dVar2);
}

// GetGeneratedChildAt @ 142a295b0

TSharedPtr<SWidget,1> * __thiscall
STableViewBase::GetGeneratedChildAt
          (STableViewBase *this,TSharedPtr<SWidget,1> *__return_storage_ptr__,int param_1)

{
  SListPanel *pSVar1;
  TReferenceControllerBase<1> *pTVar2;
  SWidget *pSVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  undefined8 *puVar7;
  TSharedPtr<SWidget,1> *pTVar8;
  longlong *plVar9;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  pSVar1 = (this->ItemsPanel).Object;
  if (pSVar1 == (SListPanel *)0x0) {
    iVar6 = 0;
  }
  else {
    puVar7 = (undefined8 *)(**(code **)(pSVar1->_padding_ + 0x180))();
    iVar6 = (**(code **)*puVar7)();
  }
  if (param_1 < iVar6) {
    if ((this->ItemsPanel).Object == (SListPanel *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TSharedPtr<SWidget,1> *)(*pcVar4)();
        return pTVar8;
      }
    }
    plVar9 = (longlong *)(**(code **)(((this->ItemsPanel).Object)->_padding_ + 0x180))();
    puVar7 = (undefined8 *)(**(code **)(*plVar9 + 0x10))(plVar9,local_18,param_1);
    pTVar2 = (TReferenceControllerBase<1> *)puVar7[1];
    pSVar3 = (SWidget *)*puVar7;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
    __return_storage_ptr__->Object = pSVar3;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    __return_storage_ptr__->Object = (SWidget *)0x0;
    local_10 = (TReferenceControllerBase<1> *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  return __return_storage_ptr__;
}

// GetHeaderRow @ 142a29840

TSharedPtr<SHeaderRow,1> * __thiscall
STableViewBase::GetHeaderRow(STableViewBase *this,TSharedPtr<SHeaderRow,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->HeaderRow).Object;
  pTVar1 = (this->HeaderRow).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetItemHeight @ 142a29a20

float __thiscall STableViewBase::GetItemHeight(STableViewBase *this)

{
  FDeprecateSlateVector2D FVar1;
  
  FVar1 = GetItemSize(this);
  return *(float *)((longlong)FVar1 + 4);
}

// GetItemSize @ 142a29c90

FDeprecateSlateVector2D __thiscall STableViewBase::GetItemSize(STableViewBase *this)

{
  SListPanel *pSVar1;
  code *pcVar2;
  bool bVar3;
  FDeprecateSlateVector2D FVar4;
  undefined8 uVar5;
  FDeprecateSlateVector2D in_RDX;
  float fVar6;
  FTableViewDimensions local_28;
  
  if ((this->ItemsPanel).Object == (SListPanel *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      FVar4 = (FDeprecateSlateVector2D)(*pcVar2)();
      return FVar4;
    }
  }
  pSVar1 = (this->ItemsPanel).Object;
  SListPanel::GetItemSize
            (pSVar1,&local_28,&this->PanelGeometryLastTick,
             (EListItemAlignment)pSVar1->ItemAlignmentAttribute);
  if (pSVar1 == (SListPanel *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      FVar4 = (FDeprecateSlateVector2D)(*pcVar2)();
      return FVar4;
    }
  }
  pSVar1 = (this->ItemsPanel).Object;
  fVar6 = SListPanel::GetItemPadding
                    (pSVar1,&this->PanelGeometryLastTick,
                     (EListItemAlignment)pSVar1->ItemAlignmentAttribute);
  if (local_28.Orientation == Orient_Vertical) {
    uVar5 = CONCAT44(local_28.ScrollAxis,local_28.LineAxis + fVar6);
  }
  else {
    uVar5 = CONCAT44(local_28.LineAxis + fVar6,local_28.ScrollAxis);
  }
  *(undefined8 *)in_RDX = uVar5;
  return in_RDX;
}

// GetItemWidth @ 142a29d90

float __thiscall STableViewBase::GetItemWidth(STableViewBase *this)

{
  FDeprecateSlateVector2D FVar1;
  
  FVar1 = GetItemSize(this);
  return *(float *)FVar1;
}

// GetNumGeneratedChildren @ 142a29ef0

int __thiscall STableViewBase::GetNumGeneratedChildren(STableViewBase *this)

{
  SListPanel *pSVar1;
  int iVar2;
  undefined8 *puVar3;
  
  pSVar1 = (this->ItemsPanel).Object;
  if (pSVar1 != (SListPanel *)0x0) {
    puVar3 = (undefined8 *)(**(code **)(pSVar1->_padding_ + 0x180))();
                    /* WARNING: Could not recover jumptable at 0x000142a29f16. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar2 = (**(code **)*puVar3)(puVar3,*(code **)*puVar3);
    return iVar2;
  }
  return 0;
}

// GetNumItemsPerLine @ 142a29f30

int __thiscall STableViewBase::GetNumItemsPerLine(STableViewBase *this)

{
  return 1;
}

// GetNumLiveWidgets @ 142a29f40

float __thiscall STableViewBase::GetNumLiveWidgets(STableViewBase *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined8 *puVar4;
  float fVar5;
  
  if ((this->ItemsPanel).Object == (SListPanel *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar5 = (float)(*pcVar1)();
      return fVar5;
    }
  }
  puVar4 = (undefined8 *)(**(code **)(((this->ItemsPanel).Object)->_padding_ + 0x180))();
  iVar3 = (**(code **)*puVar4)(puVar4);
  return (float)iVar3;
}

// GetNumPinnedItems @ 142a29fb0

int __thiscall STableViewBase::GetNumPinnedItems(STableViewBase *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined8 *puVar4;
  
  if ((this->PinnedItemsPanel).Object == (SListPanel *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  puVar4 = (undefined8 *)(**(code **)(((this->PinnedItemsPanel).Object)->_padding_ + 0x180))();
                    /* WARNING: Could not recover jumptable at 0x000142a2a007. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar3 = (**(code **)*puVar4)(puVar4,*(code **)*puVar4);
  return iVar3;
}

// GetPinnedItemsVisiblity @ 142a2a870

EVisibility __thiscall STableViewBase::GetPinnedItemsVisiblity(STableViewBase *this)

{
  code *pcVar1;
  bool bVar2;
  TEnumAsByte<EVisibility::Private> TVar3;
  int iVar4;
  undefined8 *puVar5;
  EVisibility EVar6;
  uchar *in_RDX;
  
  if ((this->PinnedItemsPanel).Object == (SListPanel *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar3.Value = (*pcVar1)();
      return (TEnumAsByte<EVisibility::Private>)(TEnumAsByte<EVisibility::Private>)TVar3.Value;
    }
  }
  puVar5 = (undefined8 *)(**(code **)(((this->PinnedItemsPanel).Object)->_padding_ + 0x180))();
  iVar4 = (**(code **)*puVar5)(puVar5);
  EVar6 = EVisibility::Collapsed;
  if (iVar4 != 0) {
    EVar6 = EVisibility::Visible;
  }
  *in_RDX = (uchar)EVar6.Value.Value;
  return (EVisibility)SUB81(in_RDX,0);
}

// GetScrollDistance @ 142a2ae30

TVector2<double> * __thiscall
STableViewBase::GetScrollDistance(STableViewBase *this,TVector2<double> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TVector2<double> *pTVar3;
  float fVar4;
  
  if (*(longlong *)&this->field_0x30 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TVector2<double> *)(*pcVar1)();
      return pTVar3;
    }
  }
  fVar4 = SScrollBar::DistanceFromTop(*(SScrollBar **)&this->field_0x30);
  (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)fVar4;
  return __return_storage_ptr__;
}

// GetScrollDistanceRemaining @ 142a2aea0

TVector2<double> * __thiscall
STableViewBase::GetScrollDistanceRemaining
          (STableViewBase *this,TVector2<double> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TVector2<double> *pTVar3;
  float fVar4;
  
  if (*(longlong *)&this->field_0x30 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TVector2<double> *)(*pcVar1)();
      return pTVar3;
    }
  }
  fVar4 = SScrollBar::DistanceFromBottom(*(SScrollBar **)&this->field_0x30);
  (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)fVar4;
  return __return_storage_ptr__;
}

// GetScrollOffset @ 142a2af10

float __thiscall STableViewBase::GetScrollOffset(STableViewBase *this)

{
  return (float)this->DesiredScrollOffset;
}

// GetScrollRateInItems @ 142a2af30

float __thiscall STableViewBase::GetScrollRateInItems(STableViewBase *this)

{
  double dVar1;
  double dVar2;
  
  dVar1 = (this->LastGenerateResults).LengthOfGeneratedItems;
  if ((dVar1 != 0.0) && (dVar2 = (this->LastGenerateResults).ExactNumLinesOnScreen, dVar2 != 0.0)) {
    return (float)(dVar2 / dVar1);
  }
  return (float)__real_3fe0000000000000;
}

// GetScrollWidget @ 142a2af70

TSharedRef<SWidget,1> * __thiscall
STableViewBase::GetScrollWidget(STableViewBase *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  SWidget *pSVar2;
  TSharedRef<SWidget,1> *pTVar3;
  TSharedRef<SWidget,1> local_18;
  
  pTVar3 = TSharedFromThis<SWidget,1>::AsShared
                     ((TSharedFromThis<SWidget,1> *)&this[-1].ScrollBarSlotPadding.Right,&local_18);
  pTVar1 = (pTVar3->SharedReferenceCount).ReferenceController;
  pSVar2 = pTVar3->Object;
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    __return_storage_ptr__->Object = pSVar2;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    __return_storage_ptr__->Object = pSVar2;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// GetScrollbarVisibility @ 142a2aff0

/* WARNING: Type propagation algorithm not settling */

EVisibility __thiscall STableViewBase::GetScrollbarVisibility(STableViewBase *this)

{
  SScrollBar *this_00;
  EVisibility EVar1;
  undefined7 extraout_var;
  TEnumAsByte<EVisibility::Private> *in_RDX;
  
  this_00 = (this->ScrollBar).Object;
  if (this_00 != (SScrollBar *)0x0) {
    EVar1 = SScrollBar::ShouldBeVisible(this_00);
    in_RDX->Value = *(uchar *)CONCAT71(extraout_var,EVar1.Value.Value);
    return (TEnumAsByte<EVisibility::Private>)(uchar)in_RDX;
  }
  in_RDX->Value = (uchar)EVisibility::Collapsed.Value.Value;
  return (EVisibility)(uchar)in_RDX;
}

// GetSmoothDeltaTime @ 142a2b1a0

float __thiscall STableViewBase::GetSmoothDeltaTime(STableViewBase *this,float param_1)

{
  float fVar1;
  
  fVar1 = this->SmoothDeltaTime;
  if (this->SmoothDeltaTime < 0.0) {
    fVar1 = param_1;
  }
  return fVar1;
}

// GetStartShadowOpacity @ 142a2b350

FSlateColor * __thiscall
STableViewBase::GetStartShadowOpacity(STableViewBase *this,FSlateColor *__return_storage_ptr__)

{
  double dVar1;
  
  dVar1 = this->CurrentScrollOffset / (double)this->ShadowFadeDistance;
  if (__real_3ff0000000000000 <= dVar1) {
    dVar1 = __real_3ff0000000000000;
  }
  (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.R = 1.0;
  (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.G = 1.0;
  (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.B = 1.0;
  if (dVar1 <= 0.0) {
    dVar1 = 0.0;
  }
  (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.A = (float)dVar1;
  __return_storage_ptr__->ColorUseRule = UseColor_Specified;
  return __return_storage_ptr__;
}

// GetTargetScrollOffset @ 142a2b3b0

double __thiscall STableViewBase::GetTargetScrollOffset(STableViewBase *this)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined1 in_XMM2 [16];
  undefined1 auVar7 [16];
  double dVar8;
  undefined1 auVar9 [16];
  
  if ((((this->bWasAtEndOfList != false) || ((this->FixedLineScrollOffset).bIsSet == false)) ||
      (bVar3 = IsRightClickScrolling(this), bVar3)) ||
     ((this->InertialScrollManager).ScrollVelocity != 0.0)) {
    return this->DesiredScrollOffset;
  }
  iVar4 = (**(code **)(*(longlong *)this + 0x270))(this);
  auVar9._0_8_ = this->DesiredScrollOffset / (double)iVar4;
  auVar9._8_8_ = 0;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = auVar9._0_8_ + __real_3fe0000000000000;
  auVar7 = roundpd(in_XMM2,auVar7,1);
  dVar8 = auVar7._0_8_ - auVar9._0_8_;
  uVar5 = SUB84(dVar8,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar6 = (uint)((ulonglong)dVar8 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  dVar8 = auVar9._0_8_;
  if ((__real_3f1a36e2eb1c432d <= (double)CONCAT44(uVar6,uVar5) &&
       (double)CONCAT44(uVar6,uVar5) != __real_3f1a36e2eb1c432d) &&
     (dVar8 = auVar7._0_8_, this->bIsInertialScroll == false)) {
    auVar2._8_8_ = 0;
    auVar2._0_8_ = auVar9._0_8_;
    auVar7 = roundpd(auVar9,auVar2,1);
    dVar8 = auVar7._0_8_;
  }
  if (((this->FixedLineScrollOffset).bIsSet == false) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        ), bVar3)) {
    pcVar1 = (code *)swi(3);
    dVar8 = (double)(*pcVar1)();
    return dVar8;
  }
  dVar8 = (dVar8 - (this->FixedLineScrollOffset).TypedValue) * (double)iVar4;
  if (dVar8 <= 0.0) {
    dVar8 = 0.0;
  }
  return dVar8;
}

// InsertPinnedWidget @ 142a2c610

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
STableViewBase::InsertPinnedWidget(STableViewBase *this,TSharedRef<SWidget,1> *param_1)

{
  SListPanel *pSVar1;
  code *pcVar2;
  TUniquePtr<SListPanel::FSlot,TDefaultDelete<SListPanel::FSlot>_> TVar3;
  bool bVar4;
  FSlotBase *this_00;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 auStack_e8 [32];
  int local_c8 [2];
  FSlotBase *local_c0;
  undefined8 local_b8;
  FSharedReferencer<1> local_b0;
  TAttribute<EVisibility> local_a8;
  FSlotArguments local_88;
  TPanelChildren<SListPanel::FSlot> *local_70;
  int local_68;
  code *local_58;
  longlong local_48 [3];
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if ((this->PinnedItemsPanel).Object == (SListPanel *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pSVar1 = (this->PinnedItemsPanel).Object;
  this_00 = ::operator_new(0x20);
  if (this_00 == (FSlotBase *)0x0) {
    local_88.Slot.Ptr = (FSlot *)0x0;
    local_88.ChildWidget.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Slot.Get()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\SlotBase.h"
                       ,0x9b,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    this_00->_padding_ = 0;
    this_00->Owner = (FChildren *)0x0;
    (this_00->Widget).Object = (SWidget *)0x0;
    (this_00->Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    FSlotBase::FSlotBase(this_00);
    this_00->_padding_ = (longlong)&___7FSlot_SListPanel__6B_;
    local_88.ChildWidget.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    local_88.Slot.Ptr = (FSlot *)this_00;
  }
  local_88.ChildWidget.Object = param_1->Object;
  local_70 = &pSVar1->Children;
  local_b0.ReferenceController = (param_1->SharedReferenceCount).ReferenceController;
  local_68 = 0;
  local_58 = (code *)0x0;
  local_30 = (longlong *)0x0;
  if (local_b0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_b0.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_b0.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_b8 = 0;
  SharedPointerInternals::FSharedReferencer<1>::operator=
            (&local_88.ChildWidget.SharedReferenceCount,&local_b0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b0.ReferenceController);
  TVar3.Ptr = local_88.Slot.Ptr;
  if ((FSlotBase *)local_88.Slot.Ptr != (FSlotBase *)0x0) {
    if (local_68 == -1) {
      local_68 = TPanelChildren<SListPanel::FSlot>::AddSlot(local_70,&local_88);
    }
    else {
      TPanelChildren<SListPanel::FSlot>::InsertSlot(local_70,&local_88,local_68);
    }
    if (local_58 == (code *)0x0) goto LAB_142a2c7b1;
    local_c0 = (FSlotBase *)TVar3.Ptr;
    local_c8[0] = local_68;
    UE::Core::Private::Function::CheckCallable(local_58);
    pcVar2 = local_58;
    plVar6 = local_48;
    if (local_30 != (longlong *)0x0) {
      plVar6 = local_30;
    }
    uVar5 = (**(code **)(*plVar6 + 8))();
    (*pcVar2)(uVar5,&local_c0,local_c8);
  }
  if (local_58 != (code *)0x0) {
    plVar6 = local_48;
    if (local_30 != (longlong *)0x0) {
      plVar6 = local_30;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
LAB_142a2c7b1:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.ChildWidget.SharedReferenceCount.ReferenceController);
  if ((FSlotBase *)local_88.Slot.Ptr != (FSlotBase *)0x0) {
    (*(code *)**(undefined8 **)local_88.Slot.Ptr)(local_88.Slot.Ptr,1);
  }
  if ((this->PinnedItemsPanel).Object == (SListPanel *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_a8.Value = (EVisibility)EVisibility::Visible.Value.Value;
  local_a8.Getter._16_8_ = 0;
  local_a8.bIsSet = true;
  local_a8.Getter._0_8_ = 0;
  local_a8.Getter._8_8_ = 0;
  SPanel::SetVisibility((SPanel *)(this->PinnedItemsPanel).Object,&local_a8);
  return;
}

// InsertWidget @ 142a2ca00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall STableViewBase::InsertWidget(STableViewBase *this,TSharedRef<ITableRow,1> *param_1)

{
  SListPanel *pSVar1;
  code *pcVar2;
  TUniquePtr<SListPanel::FSlot,TDefaultDelete<SListPanel::FSlot>_> TVar3;
  bool bVar4;
  FSlotBase *this_00;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 auStack_c8 [32];
  int local_a8 [2];
  FSlotBase *local_a0;
  undefined8 local_98;
  FSharedReferencer<1> local_90;
  undefined1 local_88 [8];
  TReferenceControllerBase<1> *local_80;
  FSlotArguments local_78;
  TPanelChildren<SListPanel::FSlot> *local_60;
  int local_58;
  code *local_48;
  longlong local_38 [3];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  if ((this->ItemsPanel).Object == (SListPanel *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pSVar1 = (this->ItemsPanel).Object;
  this_00 = ::operator_new(0x20);
  if (this_00 == (FSlotBase *)0x0) {
    local_78.Slot.Ptr = (FSlot *)0x0;
    local_78.ChildWidget.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Slot.Get()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\SlotBase.h"
                       ,0x9b,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    this_00->_padding_ = 0;
    this_00->Owner = (FChildren *)0x0;
    (this_00->Widget).Object = (SWidget *)0x0;
    (this_00->Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    FSlotBase::FSlotBase(this_00);
    this_00->_padding_ = (longlong)&___7FSlot_SListPanel__6B_;
    local_78.ChildWidget.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    local_78.Slot.Ptr = (FSlot *)this_00;
  }
  local_60 = &pSVar1->Children;
  local_58 = 0;
  local_48 = (code *)0x0;
  local_20 = (longlong *)0x0;
  puVar5 = (undefined8 *)(**(code **)((longlong)*param_1->Object + 0x58))(param_1->Object,local_88);
  local_90.ReferenceController = (TReferenceControllerBase<1> *)puVar5[1];
  local_78.ChildWidget.Object = (SWidget *)*puVar5;
  if (local_90.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_90.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_90.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_98 = 0;
  SharedPointerInternals::FSharedReferencer<1>::operator=
            (&local_78.ChildWidget.SharedReferenceCount,&local_90);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_90.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_80);
  TVar3.Ptr = local_78.Slot.Ptr;
  if ((FSlotBase *)local_78.Slot.Ptr != (FSlotBase *)0x0) {
    if (local_58 == -1) {
      local_58 = TPanelChildren<SListPanel::FSlot>::AddSlot(local_60,&local_78);
    }
    else {
      TPanelChildren<SListPanel::FSlot>::InsertSlot(local_60,&local_78,local_58);
    }
    if (local_48 == (code *)0x0) goto LAB_142a2cbb3;
    local_a0 = (FSlotBase *)TVar3.Ptr;
    local_a8[0] = local_58;
    UE::Core::Private::Function::CheckCallable(local_48);
    pcVar2 = local_48;
    plVar7 = local_38;
    if (local_20 != (longlong *)0x0) {
      plVar7 = local_20;
    }
    uVar6 = (**(code **)(*plVar7 + 8))();
    (*pcVar2)(uVar6,&local_a0,local_a8);
  }
  if (local_48 != (code *)0x0) {
    plVar7 = local_38;
    if (local_20 != (longlong *)0x0) {
      plVar7 = local_20;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
LAB_142a2cbb3:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.ChildWidget.SharedReferenceCount.ReferenceController);
  if ((FSlotBase *)local_78.Slot.Ptr != (FSlotBase *)0x0) {
    (*(code *)**(undefined8 **)local_78.Slot.Ptr)(local_78.Slot.Ptr,1);
  }
  return;
}

// IsPendingRefresh @ 142a2cd70

bool __thiscall STableViewBase::IsPendingRefresh(STableViewBase *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (this->bItemsNeedRefresh == false) {
    if ((this->ItemsPanel).Object == (SListPanel *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    if (((this->ItemsPanel).Object)->bIsRefreshPending == false) {
      return false;
    }
  }
  return true;
}

// IsRightClickScrolling @ 142a2cdf0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall STableViewBase::IsRightClickScrolling(STableViewBase *this)

{
  float fVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FSlateApplication *this_00;
  float fVar5;
  
  fVar1 = this->AmountScrolledWhileRightMouseDown;
  this_00 = FSlateApplication::Get();
  fVar5 = FSlateApplication::GetDragTriggerDistance(this_00);
  if (fVar5 <= fVar1) {
    if ((this->ScrollBar).Object == (SScrollBar *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    bVar3 = SScrollBar::IsNeeded((this->ScrollBar).Object);
    if ((bVar3) || (this->AllowOverscroll == Yes)) {
      return true;
    }
  }
  return false;
}

// IsScrollbarNeeded @ 142a2d2f0

bool __thiscall STableViewBase::IsScrollbarNeeded(STableViewBase *this)

{
  float *pfVar1;
  SScrollBarTrack *pSVar2;
  SScrollBar *pSVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  
  pSVar3 = (this->ScrollBar).Object;
  if (pSVar3 == (SScrollBar *)0x0) {
    return false;
  }
  if ((pSVar3->Track).Object == (SScrollBarTrack *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  pSVar2 = (pSVar3->Track).Object;
  pfVar1 = &pSVar2->ThumbSizeFraction;
  if ((__real_3f7ff972 < *pfVar1 || __real_3f7ff972 == *pfVar1) &&
     (pSVar2->bIsAlwaysVisible == false)) {
    return false;
  }
  return true;
}

// IsScrolling @ 142a2d310

bool __thiscall STableViewBase::IsScrolling(STableViewBase *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->ScrollBar).Object == (SScrollBar *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  bVar2 = SScrollBar::IsScrolling((this->ScrollBar).Object);
  return bVar2;
}

// IsUserScrolling @ 142a2d360

bool __thiscall STableViewBase::IsUserScrolling(STableViewBase *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (((this->ScrollBar).Object == (SScrollBar *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    bVar2 = (bool)(*pcVar1)();
    return bVar2;
  }
  bVar2 = SScrollBar::IsNeeded((this->ScrollBar).Object);
  if (bVar2) {
    if (((this->ScrollBar).Object == (SScrollBar *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
    bVar2 = SScrollBar::IsScrolling((this->ScrollBar).Object);
    if (bVar2) {
      return true;
    }
  }
  bVar2 = IsRightClickScrolling(this);
  if (bVar2) {
    return true;
  }
  return false;
}

// NavigateToWidget @ 142a2d470

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
STableViewBase::NavigateToWidget
          (STableViewBase *this,uint param_1,TSharedPtr<SWidget,1> *param_2,
          ENavigationSource param_3,EUINavigation param_4)

{
  FSlateApplication *this_00;
  
  this_00 = FSlateApplication::Get();
  FSlateApplication::NavigateToWidget(this_00,param_1,param_2,param_3,param_4);
  return;
}

// OnClippingChanged @ 142a2e2b0

void __thiscall STableViewBase::OnClippingChanged(STableViewBase *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->ItemsPanel).Object == (SListPanel *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SWidget::SetClipping((SWidget *)(this->ItemsPanel).Object,this->field_0x35);
  return;
}

// OnCursorQuery @ 142a2e310

/* WARNING: Enum "Type": Some values do not have unique names */

FCursorReply * __thiscall
STableViewBase::OnCursorQuery
          (STableViewBase *this,FCursorReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  bool bVar1;
  FKey local_28;
  
  bVar1 = IsRightClickScrolling(this);
  if (bVar1) {
    local_28.KeyName = EKeys::RightMouseButton.KeyName;
    local_28.KeyDetails.Object = EKeys::RightMouseButton.KeyDetails.Object;
    local_28.KeyDetails.SharedReferenceCount.ReferenceController =
         EKeys::RightMouseButton.KeyDetails.SharedReferenceCount.ReferenceController;
    if (EKeys::RightMouseButton.KeyDetails.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (EKeys::RightMouseButton.KeyDetails.SharedReferenceCount.ReferenceController)->
      SharedReferenceCount =
           (atomic<int>)
           ((int)(EKeys::RightMouseButton.KeyDetails.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar1 = FPointerEvent::IsMouseButtonDown(param_2,&local_28);
    if (bVar1) {
      *(undefined1 *)&__return_storage_ptr__->_padding_ = 1;
      __return_storage_ptr__->_padding_ = 0;
      __return_storage_ptr__->_padding_ = 0;
      (__return_storage_ptr__->CursorWindow).Object = (SWindow *)0x0;
      (__return_storage_ptr__->CursorWindow).SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      (__return_storage_ptr__->CursorWidget).Object = (SWidget *)0x0;
      (__return_storage_ptr__->CursorWidget).SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      __return_storage_ptr__->MouseCursor = None;
      return __return_storage_ptr__;
    }
  }
  *(undefined1 *)&__return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  (__return_storage_ptr__->CursorWindow).Object = (SWindow *)0x0;
  (__return_storage_ptr__->CursorWindow).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (__return_storage_ptr__->CursorWidget).Object = (SWidget *)0x0;
  (__return_storage_ptr__->CursorWidget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  __return_storage_ptr__->MouseCursor = Default;
  return __return_storage_ptr__;
}

// OnFocusLost @ 142a2e3d0

void __thiscall STableViewBase::OnFocusLost(STableViewBase *this,FFocusEvent *param_1)

{
  this->bShowSoftwareCursor = false;
  return;
}

// OnKeyDown @ 142a2f120

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
STableViewBase::OnKeyDown
          (STableViewBase *this,FReply *__return_storage_ptr__,FGeometry *param_1,FKeyEvent *param_2
          )

{
  FName FVar1;
  bool bVar2;
  int iVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  uint uStackX_24;
  
  bVar5 = false;
  if ((param_2->_padding_ & 0xc) == 0) {
    pTVar4 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_24 << 0x20);
LAB_142a2f177:
    bVar2 = false;
    if (!bVar5) goto LAB_142a2f1ce;
  }
  else {
    pTVar4 = (param_2->Key).KeyDetails.SharedReferenceCount.ReferenceController;
    FVar1 = (param_2->Key).KeyName;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar5 = true;
    if (FVar1 != EKeys::End.KeyName) goto LAB_142a2f177;
    bVar2 = true;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  if (bVar2) {
    FInertialScrollManager::ClearScrollVelocity(&this->InertialScrollManager,false);
    this->bIsInertialScroll = false;
    iVar3 = (**(code **)(*(longlong *)this + 0x2a0))(this);
    SetScrollOffset(this,(float)iVar3);
    RequestLayoutRefresh(this);
    FReply::FReply(__return_storage_ptr__,true);
    return __return_storage_ptr__;
  }
LAB_142a2f1ce:
  SWidget::OnKeyDown((SWidget *)this,__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// OnMouseButtonDoubleClick @ 142a2f200

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
STableViewBase::OnMouseButtonDoubleClick
          (STableViewBase *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  bool bVar1;
  
  bVar1 = SWidget::HasMouseCapture((SWidget *)this);
  if (bVar1) {
    FReply::FReply(__return_storage_ptr__,true);
    return __return_storage_ptr__;
  }
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnMouseButtonDown @ 142a2f240

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
STableViewBase::OnMouseButtonDown
          (STableViewBase *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FName FVar2;
  code *pcVar3;
  FReply *pFVar4;
  bool bVar5;
  
  FInertialScrollManager::ClearScrollVelocity(&this->InertialScrollManager,true);
  this->bIsInertialScroll = false;
  pTVar1 = (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
  FVar2 = (param_2->EffectingButton).KeyName;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar5 = FVar2 == EKeys::RightMouseButton.KeyName;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if (bVar5) {
    (**(code **)(*(longlong *)this + 0x280))(this);
  }
  pTVar1 = (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
  FVar2 = (param_2->EffectingButton).KeyName;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (FVar2 == EKeys::RightMouseButton.KeyName) {
    if ((this->ScrollBar).Object == (SScrollBar *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pFVar4 = (FReply *)(*pcVar3)();
        return pFVar4;
      }
    }
    bVar5 = SScrollBar::IsNeeded((this->ScrollBar).Object);
    if (!bVar5) goto LAB_142a2f315;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    this->AmountScrolledWhileRightMouseDown = 0.0;
  }
  else {
LAB_142a2f315:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    bVar5 = SWidget::HasMouseCapture((SWidget *)this);
    if (!bVar5) {
      bVar5 = false;
      goto LAB_142a2f32b;
    }
  }
  bVar5 = true;
LAB_142a2f32b:
  FReply::FReply(__return_storage_ptr__,bVar5);
  return __return_storage_ptr__;
}

// OnMouseButtonUp @ 142a2f850

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
STableViewBase::OnMouseButtonUp
          (STableViewBase *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FName FVar3;
  TReferenceControllerBase<1> *pTVar4;
  FDeprecateSlateVector2D FVar5;
  TVector2<float>_u_0_s_0 TVar6;
  FWeakReferencer<1> FVar7;
  bool bVar8;
  float fVar9;
  float fVar10;
  float local_res20;
  float fStackX_24;
  TIntPoint<int>_u_0 local_1c8;
  float local_1c0;
  float fStack_1bc;
  TVector2<float>_u_0 local_1b8;
  TVector2<float>_u_0 TStack_1b0;
  undefined1 local_1a8 [8];
  float fStack_1a0;
  float local_19c;
  ulonglong local_198;
  FReply local_190;
  FReply local_d8;
  
  FVar3 = (param_2->EffectingButton).KeyName;
  pTVar4 = (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar8 = FVar3 == EKeys::RightMouseButton.KeyName;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  if (bVar8) {
    (**(code **)(*(longlong *)this + 0x288))(this,param_2);
    FReply::FReply(&local_190,true);
    FVar7.ReferenceController = local_190.MouseCaptor.WeakReferenceCount.ReferenceController;
    local_190.MouseCaptor.Object = (SWidget *)0x0;
    local_190.MouseCaptor.WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    if (FVar7.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(FVar7.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((FVar7.ReferenceController)->_padding_ + 8))(FVar7.ReferenceController,1);
      }
    }
    local_190.bUseHighPrecisionMouse = 0;
    local_190.bReleaseMouseCapture = 1;
    FReply::FReply(&local_d8,&local_190);
    FReply::~FReply(&local_190);
    this->bShowSoftwareCursor = false;
    bVar8 = SWidget::HasMouseCapture((SWidget *)this);
    if (bVar8) {
      fVar9 = param_1->Scale;
      FVar5 = param_1->Size;
      fStackX_24 = FVar5._4_4_;
      local_res20 = FVar5._0_4_;
      unique0x00023d00 = (param_1->AbsolutePosition).field0_0x0._s_0;
      local_1c8 = (TIntPoint<int>_u_0)((ulonglong)(uint)fStackX_24 << 0x20);
      local_198 = (ulonglong)FVar5 & 0xffffffff;
      local_1b8._s_0.X = fVar9 * local_res20;
      fStack_1bc = fVar9 * 0.0 + fStack_1a0;
      local_1c0 = fVar9 * 0.0 + (float)local_1a8._4_4_;
      local_1b8._s_0.Y = fVar9 * 0.0;
      TStack_1b0._s_0.X = fVar9 * 0.0;
      TStack_1b0._s_0.Y = fVar9 * fStackX_24;
      FSlateRotatedRect::ToBoundingRect((FSlateRotatedRect *)&local_1c0,(FSlateRect *)local_1a8);
      TVar6 = (this->SoftwareCursorPosition).field0_0x0._s_0;
      fStackX_24 = TVar6.Y;
      local_res20 = TVar6.X;
      fVar9 = fStackX_24 * (param_1->AccumulatedRenderTransform).M.M[1][0] +
              local_res20 * (param_1->AccumulatedRenderTransform).M.M[0][0] +
              (param_1->AccumulatedRenderTransform).Trans.field0_0x0._s_0.X;
      fVar10 = local_res20 * (param_1->AccumulatedRenderTransform).M.M[0][1] +
               fStackX_24 * (param_1->AccumulatedRenderTransform).M.M[1][1] +
               (param_1->AccumulatedRenderTransform).Trans.field0_0x0._s_0.Y;
      if (fStack_1a0 <= fVar9) {
        fVar9 = fStack_1a0;
      }
      if (local_19c <= fVar10) {
        fVar10 = local_19c;
      }
      if (fVar9 <= (float)local_1a8._0_4_) {
        fVar9 = (float)local_1a8._0_4_;
      }
      if (fVar10 <= (float)local_1a8._4_4_) {
        fVar10 = (float)local_1a8._4_4_;
      }
      local_1c8._s_0.Y = (int)ROUND(fVar10 + fVar10 + __real_3f000000) >> 1;
      local_1c8._s_0.X = (int)ROUND(fVar9 + fVar9 + __real_3f000000) >> 1;
      FReply::SetMousePos(&local_d8,(TIntPoint<int> *)&local_1c8._s_0);
    }
    FReply::FReply(__return_storage_ptr__,&local_d8);
    FReply::~FReply(&local_d8);
  }
  else {
    FReply::FReply(__return_storage_ptr__,false);
  }
  return __return_storage_ptr__;
}

// OnMouseCaptureLost @ 142a2faf0

void __thiscall STableViewBase::OnMouseCaptureLost(STableViewBase *this,FCaptureLostEvent *param_1)

{
  SWidget::OnMouseCaptureLost((SWidget *)this,param_1);
  this->bShowSoftwareCursor = false;
  return;
}

// OnMouseEnter @ 142a2fb20

void __thiscall
STableViewBase::OnMouseEnter(STableViewBase *this,FGeometry *param_1,FPointerEvent *param_2)

{
  bool bVar1;
  undefined4 local_res8;
  undefined4 uStackX_c;
  TVector2<float>_u_0 local_38;
  undefined4 local_30;
  undefined8 local_2c;
  undefined4 local_24;
  FSlateRotatedRect local_20;
  
  if (((this->bEnableTouchScrolling != false) && (param_2->bIsTouchEvent != false)) &&
     (this->bStartedTouchInteraction == false)) {
    local_res8 = SUB84(param_1->Size,0);
    uStackX_c = SUB84(param_1->Size,4);
    local_30 = local_res8;
    local_24 = uStackX_c;
    local_38 = (TVector2<float>_u_0)0x0;
    local_2c = 0;
    TransformRect<TTransform2<float>_>
              (&local_20,&param_1->AccumulatedRenderTransform,(FSlateRotatedRect *)&local_38._s_0);
    bVar1 = FSlateRotatedRect::IsUnderLocation
                      (&local_20,*(FDeprecateVector2DParameter *)&param_2->LastScreenSpacePosition);
    if (bVar1) {
      this->bStartedTouchInteraction = true;
    }
  }
  return;
}

// OnMouseLeave @ 142a2fbc0

void __thiscall STableViewBase::OnMouseLeave(STableViewBase *this,FPointerEvent *param_1)

{
  bool bVar1;
  
  SWidget::OnMouseLeave((SWidget *)this,param_1);
  this->bStartedTouchInteraction = false;
  bVar1 = SWidget::HasMouseCapture((SWidget *)this);
  if (!bVar1) {
    this->AmountScrolledWhileRightMouseDown = 0.0;
  }
  return;
}

// OnMouseMove @ 142a2fc00

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
STableViewBase::OnMouseMove
          (STableViewBase *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  EOrientation EVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  bool bVar11;
  TDelegate<EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy> *pTVar12;
  TSharedRef<SWidget,1> *pTVar13;
  FReply *pFVar14;
  TTransform2<float> *pTVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  uint uVar19;
  undefined8 local_188;
  FSharedReferencer<1> local_180;
  undefined8 local_178;
  FSharedReferencer<1> FStack_170;
  FSharedReferencer<1> local_168;
  TTransform2<float> local_158;
  FReply local_138;
  
  if (this->bEnableRightClickScrolling != false) {
    local_178 = (code *)EKeys::RightMouseButton.KeyName;
    FStack_170.ReferenceController =
         (TReferenceControllerBase<1> *)EKeys::RightMouseButton.KeyDetails.Object;
    local_168.ReferenceController =
         EKeys::RightMouseButton.KeyDetails.SharedReferenceCount.ReferenceController;
    if (EKeys::RightMouseButton.KeyDetails.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (EKeys::RightMouseButton.KeyDetails.SharedReferenceCount.ReferenceController)->
      SharedReferenceCount =
           (atomic<int>)
           ((int)(EKeys::RightMouseButton.KeyDetails.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar11 = FPointerEvent::IsMouseButtonDown(param_2,(FKey *)&local_178);
    if (((bVar11) && (param_2->bIsTouchEvent == false)) &&
       (this->bIsPointerScrollingEnabled != false)) {
      local_188 = (TVector2<float>_u_0)*(TVector2<float>_u_0 *)&param_2->CursorDelta;
      EVar8 = this->Orientation;
      if (EVar8 == Orient_Vertical) {
        fVar17 = (float)local_188._4_4_;
      }
      else {
        fVar17 = (float)(undefined4)local_188;
      }
      fVar18 = fVar17 / param_1->Scale;
      this->AmountScrolledWhileRightMouseDown =
           (float)((uint)fVar18 & __xmm_7fffffff7fffffff7fffffff7fffffff) +
           this->AmountScrolledWhileRightMouseDown;
      bVar11 = IsRightClickScrolling(this);
      if (bVar11) {
        if (this->bIsScrollingActiveTimerRegistered == false) {
          FStack_170.ReferenceController = FStack_170.ReferenceController & 0xffffffff00000000;
          local_178 = UpdateInertialScroll;
          this->bIsScrollingActiveTimerRegistered = true;
          pTVar12 = TDelegate<enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
                    ::CreateSP<STableViewBase>
                              ((TDelegate<EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
                                *)&local_158,this,(pmf_1d42f6b2 *)&local_178);
          SWidget::RegisterActiveTimer
                    ((SWidget *)this,(TSharedRef<FActiveTimerHandle,1> *)&local_188,0.0,pTVar12);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_180.ReferenceController);
        }
        uVar19 = (uint)fVar18 ^ __xmm_80000000800000008000000080000000;
        this->TickScrollDelta = this->TickScrollDelta - fVar18;
        fVar18 = (float)(**(code **)(*(longlong *)this + 600))
                                  (this,param_1,uVar19,this->AllowOverscroll);
        FReply::FReply(&local_138,true);
        bVar11 = SWidget::HasMouseCapture((SWidget *)this);
        if (!bVar11) {
          pTVar13 = TSharedFromThis<SWidget,1>::AsShared
                              ((TSharedFromThis<SWidget,1> *)&this->field_0x8,
                               (TSharedRef<SWidget,1> *)&local_178);
          pFVar14 = FReply::CaptureMouse(&local_138,pTVar13);
          pTVar13 = TSharedFromThis<SWidget,1>::AsShared
                              ((TSharedFromThis<SWidget,1> *)&this->field_0x8,
                               (TSharedRef<SWidget,1> *)&local_188);
          (pFVar14->MouseCaptor).Object = pTVar13->Object;
          pTVar9 = (pTVar13->SharedReferenceCount).ReferenceController;
          if (pTVar9 != (pFVar14->MouseCaptor).WeakReferenceCount.ReferenceController) {
            if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar9->WeakReferenceCount = (atomic<int>)((int)pTVar9->WeakReferenceCount + 1);
              UNLOCK();
            }
            pTVar10 = (pFVar14->MouseCaptor).WeakReferenceCount.ReferenceController;
            if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              paVar1 = &pTVar10->WeakReferenceCount;
              aVar2 = *paVar1;
              *paVar1 = (atomic<int>)((int)*paVar1 + -1);
              UNLOCK();
              if (aVar2 == (atomic<int>)0x1) {
                (**(code **)(pTVar10->_padding_ + 8))(pTVar10,1);
              }
            }
            (pFVar14->MouseCaptor).WeakReferenceCount.ReferenceController = pTVar9;
          }
          pFVar14->bUseHighPrecisionMouse = 1;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((pTVar13->SharedReferenceCount).ReferenceController);
          pTVar15 = Inverse<TTransform2<float>_>(&local_158,&param_1->AccumulatedRenderTransform);
          local_188._4_4_ = SUB84(param_2->ScreenSpacePosition,4);
          local_188._0_4_ = SUB84(param_2->ScreenSpacePosition,0);
          fVar16 = (float)local_188._4_4_ * (pTVar15->M).M[1][0];
          fVar3 = (pTVar15->M).M[0][1];
          fVar4 = (pTVar15->M).M[0][0];
          fVar5 = (pTVar15->M).M[1][1];
          fVar6 = (pTVar15->Trans).field0_0x0._s_0.X;
          fVar7 = (pTVar15->Trans).field0_0x0._s_0.Y;
          this->bShowSoftwareCursor = true;
          local_188._4_4_ =
               (float)(undefined4)local_188 * fVar3 + (float)local_188._4_4_ * fVar5 + fVar7;
          local_188._0_4_ = fVar16 + (float)(undefined4)local_188 * fVar4 + fVar6;
          (this->SoftwareCursorPosition).field0_0x0 = local_188;
        }
        if (fVar18 != 0.0) {
          if (EVar8 == Orient_Vertical) {
            local_188 = (TVector2<float>_u_0)((ulonglong)(uint)fVar17 << 0x20);
          }
          else {
            local_188._4_4_ = 0;
            local_188._0_4_ = fVar17;
          }
          local_178._4_4_ =
               (float)local_188._4_4_ + (this->SoftwareCursorPosition).field0_0x0._s_0.Y;
          local_178._0_4_ =
               (float)(undefined4)local_188 + (this->SoftwareCursorPosition).field0_0x0._s_0.X;
          (this->SoftwareCursorPosition).field0_0x0 = (TVector2<float>_u_0)local_178;
        }
        FReply::FReply(__return_storage_ptr__,&local_138);
        FReply::~FReply(&local_138);
        return __return_storage_ptr__;
      }
    }
  }
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnMouseWheel @ 142a2ff80

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
STableViewBase::OnMouseWheel
          (STableViewBase *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  double dVar5;
  float fVar6;
  
  if (((this->WheelScrollMultiplier != 0.0) && (this->bIsPointerScrollingEnabled != false)) &&
     ((param_2->_padding_ & 0xc) == 0)) {
    FInertialScrollManager::ClearScrollVelocity(&this->InertialScrollManager,false);
    bVar3 = (this->FixedLineScrollOffset).bIsSet;
    this->bIsInertialScroll = false;
    if (bVar3 == false) {
      uVar4 = (**(code **)(*(longlong *)this + 600))
                        (this,param_1,
                         (uint)(this->WheelScrollMultiplier *
                               *(float *)&(param_2->WheelOrGestureDelta).field_0x4) ^
                         __xmm_80000000800000008000000080000000,1);
    }
    else {
      puVar1 = &(param_2->WheelOrGestureDelta).field_0x4;
      fVar6 = __real_3f800000;
      if (0.0 < *(float *)puVar1 || *(float *)puVar1 == 0.0) {
        fVar6 = __real_bf800000;
      }
      iVar2 = (**(code **)(*(longlong *)this + 0x270))(this);
      dVar5 = (double)((float)iVar2 * fVar6) + this->DesiredScrollOffset;
      if (dVar5 <= 0.0) {
        dVar5 = 0.0;
      }
      uVar4 = (**(code **)(*(longlong *)this + 0x260))(this,(float)dVar5);
    }
    if ((this->ConsumeMouseWheel == Always) ||
       ((0.0 < (float)(uVar4 & __xmm_7fffffff7fffffff7fffffff7fffffff) &&
        (this->ConsumeMouseWheel != Never)))) {
      bVar3 = true;
      goto LAB_142a3008f;
    }
  }
  bVar3 = false;
LAB_142a3008f:
  FReply::FReply(__return_storage_ptr__,bVar3);
  return __return_storage_ptr__;
}

// OnPaint @ 142a30a10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
STableViewBase::OnPaint
          (STableViewBase *this,FPaintArgs *param_1,FGeometry *param_2,FSlateRect *param_3,
          FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,bool param_7)

{
  TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  float fVar1;
  ESlateColorStylingMode EVar2;
  undefined1 uVar3;
  longlong *plVar4;
  code *pcVar5;
  TVector2<float>_u_0_s_0 TVar6;
  bool bVar7;
  undefined8 uVar8;
  char cVar9;
  int iVar10;
  FSlateBrush *pFVar11;
  FSlateColor *this_01;
  ISlateStyle *pIVar12;
  FName *pFVar13;
  longlong *plVar14;
  ESlateDrawEffect EVar15;
  float fVar16;
  float fVar17;
  undefined1 auStackY_128 [32];
  undefined8 local_e8;
  undefined8 local_e0;
  FLinearColor_u_0 local_d8;
  undefined8 local_c8;
  FName local_c0;
  TTransform2<float> local_b8;
  TVector2<float>_u_0 local_a0;
  float local_98;
  undefined8 local_94;
  FDeprecateSlateVector2D local_8c;
  float local_84 [2];
  float afStack_7c [2];
  TVector2<float>_u_0 local_74;
  byte local_6c;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_128;
  this_00 = &(this->BackgroundBrush).Image.Getter;
  local_c0 = (FName)param_1;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
             (FReadAccessScope *)&local_d8._s_0);
  plVar14 = (longlong *)0x0;
  if (((*(int *)&(this->BackgroundBrush).Image.Getter.field_0x10 == 0) ||
      (plVar4 = *(longlong **)&(this->BackgroundBrush).Image.Getter.field_0x8,
      plVar4 == (longlong *)0x0)) || (cVar9 = (**(code **)(*plVar4 + 0x38))(), cVar9 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_d8._s_0);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_d8._s_0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
               (FReadAccessScope *)&local_b8);
    if (*(int *)&(this->BackgroundBrush).Image.Getter.field_0x10 != 0) {
      plVar14 = *(longlong **)&(this->BackgroundBrush).Image.Getter.field_0x8;
    }
    pFVar11 = (FSlateBrush *)(**(code **)(*plVar14 + 0x60))();
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_b8);
    (this->BackgroundBrush).Image.Value = pFVar11;
  }
  pFVar11 = (this->BackgroundBrush).Image.Value;
  if ((pFVar11 != (FSlateBrush *)0x0) && ((pFVar11->DrawAs).Value != '\0')) {
    if ((!param_7) || (bVar7 = true, this->field_0x3a == '\0')) {
      bVar7 = false;
    }
    EVar2 = (pFVar11->TintColor).ColorUseRule;
    this_01 = &pFVar11->TintColor;
    EVar15 = DisabledEffect;
    if (bVar7) {
      EVar15 = None;
    }
    if (EVar2 != UseColor_Specified) {
      if (EVar2 == UseColor_ColorTable) {
        this_01 = (FSlateColor *)FSlateColor::GetColorFromTable(this_01);
      }
      else if ((EVar2 == UseColor_Foreground) || (EVar2 != UseColor_Foreground_Subdued)) {
        this_01 = (FSlateColor *)&param_6->ForegroundColor;
      }
      else {
        this_01 = (FSlateColor *)&param_6->SubduedForeground;
      }
    }
    local_a0 = (param_2->AbsolutePosition).field0_0x0;
    param_5 = param_5 + 1;
    local_d8._s_0.R =
         (this_01->SpecifiedColor).field0_0x0._s_0.R *
         (param_6->ColorAndOpacityTint).field0_0x0._s_0.R;
    local_8c = param_2->Size;
    local_d8._s_0.G =
         (this_01->SpecifiedColor).field0_0x0._s_0.G *
         (param_6->ColorAndOpacityTint).field0_0x0._s_0.G;
    local_d8._s_0.B =
         (this_01->SpecifiedColor).field0_0x0._s_0.B *
         (param_6->ColorAndOpacityTint).field0_0x0._s_0.B;
    local_6c = param_2->bHasRenderTransform * '\x02' | local_6c & 0xfc;
    local_d8._s_0.A =
         (this_01->SpecifiedColor).field0_0x0._s_0.A *
         (param_6->ColorAndOpacityTint).field0_0x0._s_0.A;
    local_98 = param_2->Scale;
    local_84 = (param_2->AccumulatedRenderTransform).M.M[0];
    afStack_7c = (param_2->AccumulatedRenderTransform).M.M[1];
    local_74 = (param_2->AccumulatedRenderTransform).Trans.field0_0x0;
    local_94 = 0;
    FSlateDrawElement::MakeBox
              (param_4,param_5,(FPaintGeometry *)&local_a0._s_0,pFVar11,EVar15,
               (FLinearColor *)&local_d8._s_0);
  }
  iVar10 = SCompoundWidget::OnPaint
                     ((SCompoundWidget *)this,(FPaintArgs *)local_c0,param_2,param_3,param_4,param_5
                      ,param_6,param_7);
  if (this->bShowSoftwareCursor != false) {
    pIVar12 = FAppStyle::Get();
    pcVar5 = *(code **)((longlong)*pIVar12 + 0x50);
    pFVar13 = ::FName::FName(&local_c0,L"SoftwareCursor_Grab");
    pFVar11 = (FSlateBrush *)(*pcVar5)(pIVar12,*pFVar13,0,0);
    fVar1 = param_2->Scale;
    fVar17 = (__real_3f800000 / fVar1) * *(float *)&(pFVar11->ImageSize).field_0x4;
    fVar16 = (__real_3f800000 / fVar1) * *(float *)&pFVar11->ImageSize;
    TVar6 = (param_2->AbsolutePosition).field0_0x0._s_0;
    local_d8._s_0.G = TVar6.X;
    local_d8._s_0.B = TVar6.Y;
    local_e8 = (TVector2<float>_u_0)CONCAT44(fVar17,fVar16);
    uVar8 = local_e8;
    fVar16 = (this->SoftwareCursorPosition).field0_0x0._s_0.X - fVar16 * __real_40000000;
    fVar17 = (this->SoftwareCursorPosition).field0_0x0._s_0.Y - fVar17 * __real_40000000;
    local_e0 = CONCAT44(fVar17,fVar16);
    local_c8 = local_e0;
    local_e8._0_4_ = fVar1 * fVar16 + local_d8._s_0.G;
    local_e8._4_4_ = fVar1 * fVar17 + local_d8._s_0.B;
    local_d8._s_0.R = (float)___xmm_3f80000000000000000000003f800000;
    local_d8._s_0.G = (float)((ulonglong)___xmm_3f80000000000000000000003f800000 >> 0x20);
    local_d8._s_0.B = (float)_UNK_15076b188;
    local_d8._s_0.A = (float)((ulonglong)_UNK_15076b188 >> 0x20);
    Concatenate<TTransform2<float>_>
              (&local_b8,(TTransform2<float> *)&local_d8._s_0,&param_2->AccumulatedRenderTransform);
    local_a0 = local_e8;
    local_6c = param_2->bHasRenderTransform * '\x02' | local_6c & 0xfc;
    local_94 = 0;
    local_8c = (FDeprecateSlateVector2D)uVar8;
    local_84[0] = local_b8.M.M[0][0];
    local_84[1] = local_b8.M.M[0][1];
    afStack_7c[0] = local_b8.M.M[1][0];
    afStack_7c[1] = local_b8.M.M[1][1];
    local_74 = local_b8.Trans.field0_0x0;
    local_98 = fVar1;
    FSlateDrawElement::MakeBox
              (param_4,iVar10 + 1,(FPaintGeometry *)&local_a0._s_0,pFVar11,None,&FLinearColor::White
              );
    iVar10 = iVar10 + 1;
  }
  return iVar10;
}

// OnPreviewMouseButtonDown @ 142a311d0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
STableViewBase::OnPreviewMouseButtonDown
          (STableViewBase *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  if ((this->bEnableTouchScrolling != false) && (param_2->bIsTouchEvent != false)) {
    FInertialScrollManager::ClearScrollVelocity(&this->InertialScrollManager,true);
    this->bIsInertialScroll = false;
    this->AmountScrolledWhileRightMouseDown = 0.0;
    (this->PressedScreenSpacePosition).field0_0x0 =
         *(TVector2<float>_u_0 *)&param_2->ScreenSpacePosition;
    this->bStartedTouchInteraction = true;
  }
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnRightMouseButtonUp @ 142a31250

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall STableViewBase::OnRightMouseButtonUp(STableViewBase *this,FPointerEvent *param_1)

{
  undefined1 *puVar1;
  FDeprecateSlateVector2D FVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  FWidgetPath *pFVar6;
  FSlateApplication *this_00;
  TSharedRef<SWidget,1> *pTVar7;
  longlong *plVar8;
  ForElementType<FArrangedWidget> FVar9;
  undefined1 auStackY_558 [32];
  char local_4f8 [4];
  FPopupTransitionEffect local_4f4 [3];
  SWidget *local_4e8;
  TReferenceControllerBase<1> *pTStack_4e0;
  TVector2<float>_u_0 local_4d8;
  FDeprecateSlateVector2D local_4d0;
  TSharedRef<SWidget,1> local_4c8;
  TSharedPtr<IMenu,1> local_4b8;
  TSharedRef<SWidget,1> local_4a8;
  FReadAccessScope local_498;
  FReadAccessScope local_480;
  FWidgetPath local_468;
  FWidgetPath local_308;
  FWidgetPath local_1a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_558;
  FVar2 = param_1->ScreenSpacePosition;
  local_4f8[0] = IsRightClickScrolling(this);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnContextMenuOpening,
             &local_498);
  puVar1 = &(this->OnContextMenuOpening).field_0x8;
  if ((*(int *)&(this->OnContextMenuOpening).field_0x10 != 0) &&
     (plVar8 = *(longlong **)puVar1, plVar8 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*plVar8 + 0x38))();
    if (cVar4 != '\0') {
      bVar5 = true;
      goto LAB_142a312d6;
    }
  }
  bVar5 = false;
LAB_142a312d6:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_498);
  if ((local_4f8[0] == '\0') && (bVar5)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnContextMenuOpening
               ,&local_480);
    if (*(int *)&(this->OnContextMenuOpening).field_0x10 == 0) {
      plVar8 = (longlong *)0x0;
    }
    else {
      plVar8 = *(longlong **)puVar1;
    }
    (**(code **)(*plVar8 + 0x60))(plVar8,&local_4e8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_480);
    if (local_4e8 != (SWidget *)0x0) {
      this->bShowSoftwareCursor = false;
      if ((FWidgetPath *)param_1->_padding_ == (FWidgetPath *)0x0) {
        pFVar6 = FWidgetPath::FWidgetPath(&local_1a8);
        FWidgetPath::FWidgetPath(&local_468,pFVar6);
        if (local_1a8.VirtualPointerPositions.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1a8.VirtualPointerPositions.AllocatorInstance.Data);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_1a8.TopLevelWindow.SharedReferenceCount.ReferenceController);
        FVar9 = (ForElementType<FArrangedWidget>)&local_1a8.Widgets.Array;
        if (local_1a8.Widgets.Array.AllocatorInstance.SecondaryData !=
            (ForElementType<FArrangedWidget>)0x0) {
          FVar9 = local_1a8.Widgets.Array.AllocatorInstance.SecondaryData;
        }
        DestructItems<FArrangedWidget,int>
                  ((FArrangedWidget *)FVar9,local_1a8.Widgets.Array.ArrayNum);
        local_308.Widgets.Array.AllocatorInstance.SecondaryData =
             local_1a8.Widgets.Array.AllocatorInstance.SecondaryData;
      }
      else {
        pFVar6 = FWidgetPath::FWidgetPath(&local_308,(FWidgetPath *)param_1->_padding_);
        FWidgetPath::FWidgetPath(&local_468,pFVar6);
        if (local_308.VirtualPointerPositions.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_308.VirtualPointerPositions.AllocatorInstance.Data);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_308.TopLevelWindow.SharedReferenceCount.ReferenceController);
        FVar9 = (ForElementType<FArrangedWidget>)&local_308.Widgets.Array;
        if (local_308.Widgets.Array.AllocatorInstance.SecondaryData !=
            (ForElementType<FArrangedWidget>)0x0) {
          FVar9 = local_308.Widgets.Array.AllocatorInstance.SecondaryData;
        }
        DestructItems<FArrangedWidget,int>
                  ((FArrangedWidget *)FVar9,local_308.Widgets.Array.ArrayNum);
      }
      if (local_308.Widgets.Array.AllocatorInstance.SecondaryData !=
          (ForElementType<FArrangedWidget>)0x0) {
        FMemory::Free((void *)local_308.Widgets.Array.AllocatorInstance.SecondaryData);
      }
      this_00 = FSlateApplication::Get();
      local_4d8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
      local_4f8[1] = 0;
      local_4f4[0].SlideDirection = ContextMenu;
      local_4d0 = FVar2;
      if (local_4e8 == (SWidget *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      local_4c8.Object = local_4e8;
      local_4c8.SharedReferenceCount.ReferenceController = pTStack_4e0;
      if (pTStack_4e0 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTStack_4e0->SharedReferenceCount =
             (atomic<int>)((int)pTStack_4e0->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (local_4e8 == (SWidget *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pTVar7 = TSharedFromThis<SWidget,1>::AsShared
                         ((TSharedFromThis<SWidget,1> *)&this->field_0x8,&local_4a8);
      FSlateApplication::PushMenu
                (this_00,&local_4b8,pTVar7,&local_468,&local_4c8,
                 (FDeprecateVector2DParameter *)&local_4d0,local_4f4,true,
                 (FDeprecateVector2DParameter *)&local_4d8._s_0,SUB82(local_4f8,0),true,-1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_4b8.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_4a8.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_4c8.SharedReferenceCount.ReferenceController);
      if (local_468.VirtualPointerPositions.AllocatorInstance.Data != (FScriptContainerElement *)0x0
         ) {
        FMemory::Free(local_468.VirtualPointerPositions.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_468.TopLevelWindow.SharedReferenceCount.ReferenceController);
      FVar9 = (ForElementType<FArrangedWidget>)&local_468.Widgets.Array;
      if (local_468.Widgets.Array.AllocatorInstance.SecondaryData !=
          (ForElementType<FArrangedWidget>)0x0) {
        FVar9 = local_468.Widgets.Array.AllocatorInstance.SecondaryData;
      }
      DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar9,local_468.Widgets.Array.ArrayNum);
      if (local_468.Widgets.Array.AllocatorInstance.SecondaryData !=
          (ForElementType<FArrangedWidget>)0x0) {
        FMemory::Free((void *)local_468.Widgets.Array.AllocatorInstance.SecondaryData);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_4e0)
    ;
  }
  this->AmountScrolledWhileRightMouseDown = 0.0;
  return;
}

// OnTouchEnded @ 142a31c70

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
STableViewBase::OnTouchEnded
          (STableViewBase *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  code *pcVar3;
  FWeakReferencer<1> FVar4;
  bool bVar5;
  FReply *pFVar6;
  FReply local_c8;
  
  this->AmountScrolledWhileRightMouseDown = 0.0;
  this->bStartedTouchInteraction = false;
  if ((this->ScrollBar).Object == (SScrollBar *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FReply *)(*pcVar3)();
      return pFVar6;
    }
  }
  (**(code **)(((this->ScrollBar).Object)->_padding_ + 0x260))();
  bVar5 = SWidget::HasMouseCapture((SWidget *)this);
  if (bVar5) {
    FReply::FReply(&local_c8,true);
    FVar4.ReferenceController = local_c8.MouseCaptor.WeakReferenceCount.ReferenceController;
    local_c8.MouseCaptor.Object = (SWidget *)0x0;
    local_c8.MouseCaptor.WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
    ;
    if (FVar4.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(FVar4.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((FVar4.ReferenceController)->_padding_ + 8))(FVar4.ReferenceController,1);
      }
    }
    local_c8.bUseHighPrecisionMouse = 0;
    local_c8.bReleaseMouseCapture = 1;
    FReply::FReply(__return_storage_ptr__,&local_c8);
    FReply::~FReply(&local_c8);
  }
  else {
    FReply::FReply(__return_storage_ptr__,false);
  }
  return __return_storage_ptr__;
}

// OnTouchMoved @ 142a31d80

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
STableViewBase::OnTouchMoved
          (STableViewBase *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  bool bVar1;
  FSlateApplication *this_00;
  TDelegate<EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy> *pTVar2;
  SScrollBar *pSVar3;
  TSharedRef<SWidget,1> *pTVar4;
  FReply *pFVar5;
  float fVar6;
  float local_res8;
  float fStackX_c;
  code *local_288;
  ulonglong uStack_280;
  TSharedRef<SWidget,1> local_278;
  TDelegate<EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy> local_268;
  FReply local_250;
  FReply local_198;
  FReply local_e0;
  
  if (((this->bIsPointerScrollingEnabled != false) && (this->bEnableTouchScrolling != false)) &&
     (this->bStartedTouchInteraction != false)) {
    if (this->Orientation == Orient_Vertical) {
      fStackX_c = SUB84(param_2->CursorDelta,4);
    }
    else {
      local_res8 = SUB84(param_2->CursorDelta,0);
      fStackX_c = local_res8;
    }
    fStackX_c = fStackX_c / param_1->Scale;
    this->AmountScrolledWhileRightMouseDown =
         (float)((uint)fStackX_c & __xmm_7fffffff7fffffff7fffffff7fffffff) +
         this->AmountScrolledWhileRightMouseDown;
    this->TickScrollDelta = this->TickScrollDelta - fStackX_c;
    this_00 = FSlateApplication::Get();
    bVar1 = FSlateApplication::HasTraveledFarEnoughToTriggerDrag
                      (this_00,param_2,
                       (FDeprecateVector2DParameter)
                       (this->PressedScreenSpacePosition).field0_0x0._s_0,this->Orientation);
    if (bVar1) {
      if (this->bIsScrollingActiveTimerRegistered == false) {
        uStack_280 = uStack_280 & 0xffffffff00000000;
        local_288 = UpdateInertialScroll;
        this->bIsScrollingActiveTimerRegistered = true;
        pTVar2 = TDelegate<enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
                 ::CreateSP<STableViewBase>(&local_268,this,(pmf_1d42f6b2 *)&local_288);
        SWidget::RegisterActiveTimer
                  ((SWidget *)this,(TSharedRef<FActiveTimerHandle,1> *)&local_278,0.0,pTVar2);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_278.SharedReferenceCount.ReferenceController);
      }
      fVar6 = (float)(**(code **)(*(longlong *)this + 600))
                               (this,param_1,
                                (uint)fStackX_c ^ __xmm_80000000800000008000000080000000,
                                this->AllowOverscroll);
      if (fVar6 != 0.0) {
        pSVar3 = TSharedPtr<SScrollBar,1>::operator->(&this->ScrollBar);
        (**(code **)(pSVar3->_padding_ + 600))(pSVar3);
        bVar1 = SWidget::HasMouseCapture((SWidget *)this);
        if (bVar1) {
          FReply::FReply(&local_250,true);
          FReply::FReply(__return_storage_ptr__,&local_250);
          FReply::~FReply(&local_250);
          return __return_storage_ptr__;
        }
        FReply::FReply(&local_198,true);
        pTVar4 = TSharedFromThis<SWidget,1>::AsShared
                           ((TSharedFromThis<SWidget,1> *)&this->field_0x8,&local_278);
        pFVar5 = FReply::CaptureMouse(&local_198,pTVar4);
        pFVar5 = FReply::FReply(&local_e0,pFVar5);
        FReply::FReply(__return_storage_ptr__,pFVar5);
        FReply::~FReply(&local_e0);
        FReply::~FReply(&local_198);
        return __return_storage_ptr__;
      }
    }
  }
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnTouchStarted @ 142a31fd0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
STableViewBase::OnTouchStarted
          (STableViewBase *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// RequestLayoutRefresh @ 142a35750

void __thiscall STableViewBase::RequestLayoutRefresh(STableViewBase *this)

{
  SListPanel *pSVar1;
  TDelegate<EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy> *pTVar2;
  code *local_48;
  ulonglong uStack_40;
  TSharedRef<FActiveTimerHandle,1> local_38;
  TDelegate<EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy> local_28;
  
  if (this->bItemsNeedRefresh == false) {
    uStack_40 = uStack_40 & 0xffffffff00000000;
    this->bItemsNeedRefresh = true;
    local_48 = EnsureTickToRefresh;
    pTVar2 = TDelegate<enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
             ::CreateSP<STableViewBase>(&local_28,this,(pmf_1d42f6b2 *)&local_48);
    SWidget::RegisterActiveTimer((SWidget *)this,&local_38,0.0,pTVar2);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
  }
  pSVar1 = (this->ItemsPanel).Object;
  if (pSVar1 != (SListPanel *)0x0) {
    pSVar1->bIsRefreshPending = true;
  }
  SWidget::Invalidate((SWidget *)this,Layout);
  return;
}

// RequestListRefresh @ 142a357e0

void __thiscall STableViewBase::RequestListRefresh(STableViewBase *this)

{
  SListPanel *pSVar1;
  TDelegate<EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy> *pTVar2;
  code *pcStack_48;
  ulonglong uStack_40;
  TSharedRef<FActiveTimerHandle,1> TStack_38;
  TDelegate<EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy> TStack_28;
  
  if (this->bItemsNeedRefresh == false) {
    uStack_40 = uStack_40 & 0xffffffff00000000;
    this->bItemsNeedRefresh = true;
    pcStack_48 = EnsureTickToRefresh;
    pTVar2 = TDelegate<enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
             ::CreateSP<STableViewBase>(&TStack_28,this,(pmf_1d42f6b2 *)&pcStack_48);
    SWidget::RegisterActiveTimer((SWidget *)this,&TStack_38,0.0,pTVar2);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (TStack_38.SharedReferenceCount.ReferenceController);
  }
  pSVar1 = (this->ItemsPanel).Object;
  if (pSVar1 != (SListPanel *)0x0) {
    pSVar1->bIsRefreshPending = true;
  }
  SWidget::Invalidate((SWidget *)this,Layout);
  return;
}

// ScrollBar_OnUserScrolled @ 142a35a90

void __thiscall STableViewBase::ScrollBar_OnUserScrolled(STableViewBase *this,float param_1)

{
  int iVar1;
  double dVar2;
  
  iVar1 = (**(code **)(*(longlong *)this + 0x2a0))();
  dVar2 = (double)param_1;
  if (__real_3ff0000000000000 <= (double)param_1) {
    dVar2 = __real_3ff0000000000000;
  }
  if (dVar2 <= 0.0) {
    dVar2 = 0.0;
  }
                    /* WARNING: Could not recover jumptable at 0x000142a35ae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x260))(this,(float)((double)iVar1 * dVar2));
  return;
}

// ScrollBy @ 142a35af0

float __thiscall
STableViewBase::ScrollBy
          (STableViewBase *this,FGeometry *param_1,float param_2,EAllowOverscroll param_3)

{
  double dVar1;
  double dVar2;
  int iVar3;
  float fVar4;
  double dVar5;
  
  iVar3 = (**(code **)(*(longlong *)this + 0x2a0))();
  dVar1 = (this->LastGenerateResults).LengthOfGeneratedItems;
  dVar5 = __real_3fe0000000000000;
  if ((dVar1 != 0.0) && (dVar2 = (this->LastGenerateResults).ExactNumLinesOnScreen, dVar2 != 0.0)) {
    dVar5 = dVar2 / dVar1;
  }
  dVar1 = (double)((float)(((double)((float)dVar5 * param_2) + this->DesiredScrollOffset) /
                          (double)iVar3) * (float)iVar3);
  dVar5 = (double)((float)iVar3 + __real_41200000);
  if (dVar5 <= dVar1) {
    dVar1 = dVar5;
  }
  if (dVar1 <= __real_c024000000000000) {
    dVar1 = __real_c024000000000000;
  }
  dVar1 = dVar1 * (double)iVar3;
  if (param_3 == Yes) {
    FOverscroll::ScrollBy(&this->Overscroll,param_1,(float)(dVar1 - (double)param_2));
  }
                    /* WARNING: Could not recover jumptable at 0x000142a35be0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar4 = (float)(**(code **)(*(longlong *)this + 0x260))(this,(float)dVar1);
  return fVar4;
}

// ScrollTo @ 142a35bf0

float __thiscall STableViewBase::ScrollTo(STableViewBase *this,float param_1)

{
  int iVar1;
  double dVar2;
  float fVar3;
  float fVar4;
  
  iVar1 = (**(code **)(*(longlong *)this + 0x2a0))();
  fVar3 = (float)iVar1 + __real_41200000;
  if (param_1 <= (float)iVar1 + __real_41200000) {
    fVar3 = param_1;
  }
  if (fVar3 <= __real_c1200000) {
    fVar3 = __real_c1200000;
  }
  dVar2 = this->DesiredScrollOffset - (double)fVar3;
  fVar4 = (float)(double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) &
                                  __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                  SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  if ((this->bWasAtEndOfList != false) && (this->DesiredScrollOffset <= (double)fVar3)) {
    fVar4 = 0.0;
  }
  SetScrollOffset(this,fVar3);
  return fVar4;
}

// ScrollToBottom @ 142a35c70

void __thiscall STableViewBase::ScrollToBottom(STableViewBase *this)

{
  int iVar1;
  
  FInertialScrollManager::ClearScrollVelocity(&this->InertialScrollManager,false);
  this->bIsInertialScroll = false;
  iVar1 = (**(code **)(*(longlong *)this + 0x2a0))(this);
  SetScrollOffset(this,(float)iVar1);
  RequestLayoutRefresh(this);
  return;
}

// ScrollToTop @ 142a35cc0

void __thiscall STableViewBase::ScrollToTop(STableViewBase *this)

{
  FInertialScrollManager::ClearScrollVelocity(&this->InertialScrollManager,false);
  this->bIsInertialScroll = false;
  SetScrollOffset(this,0.0);
  RequestLayoutRefresh(this);
  return;
}

// SetAllowOverscroll @ 142a35d00

void __thiscall STableViewBase::SetAllowOverscroll(STableViewBase *this,EAllowOverscroll param_1)

{
  this->AllowOverscroll = param_1;
  return;
}

// SetBackgroundBrush @ 142a35eb0

void __thiscall
STableViewBase::SetBackgroundBrush(STableViewBase *this,TAttribute<FSlateBrush_const_*> *param_1)

{
  FInvalidatableBrushAttribute::SetImage(&this->BackgroundBrush,(SWidget *)this,param_1);
  return;
}

// SetEnableTouchAnimatedScrolling @ 142a36180

void __thiscall STableViewBase::SetEnableTouchAnimatedScrolling(STableViewBase *this,bool param_1)

{
  this->bEnableTouchAnimatedScrolling = param_1;
  return;
}

// SetFixedLineScrollOffset @ 142a361a0

void __thiscall
STableViewBase::SetFixedLineScrollOffset(STableViewBase *this,TOptional<double> *param_1)

{
  TOptional<double> *pTVar1;
  bool bVar2;
  bool bVar3;
  
  pTVar1 = &this->FixedLineScrollOffset;
  bVar2 = (this->FixedLineScrollOffset).bIsSet;
  if (bVar2 == param_1->bIsSet) {
    if (bVar2 == false) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
      if (param_1->TypedValue == pTVar1->TypedValue) {
        bVar3 = false;
      }
    }
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    if (param_1 != pTVar1) {
      if (param_1->bIsSet != false) {
        pTVar1->TypedValue = param_1->TypedValue;
        (this->FixedLineScrollOffset).bIsSet = true;
        RequestLayoutRefresh(this);
        return;
      }
      if (bVar2 != false) {
        (this->FixedLineScrollOffset).bIsSet = false;
      }
    }
    RequestLayoutRefresh(this);
    return;
  }
  return;
}

// SetIsGamepadScrollingEnabled @ 142a36270

void __thiscall STableViewBase::SetIsGamepadScrollingEnabled(STableViewBase *this,bool param_1)

{
  this->bIsGamepadScrollingEnabled = param_1;
  return;
}

// SetIsPointerScrollingEnabled @ 142a36280

void __thiscall STableViewBase::SetIsPointerScrollingEnabled(STableViewBase *this,bool param_1)

{
  this->bIsPointerScrollingEnabled = param_1;
  return;
}

// SetIsRightClickScrollingEnabled @ 142a36290

void __thiscall STableViewBase::SetIsRightClickScrollingEnabled(STableViewBase *this,bool param_1)

{
  this->bEnableRightClickScrolling = param_1;
  return;
}

// SetIsScrollAnimationEnabled @ 142a362a0

void __thiscall STableViewBase::SetIsScrollAnimationEnabled(STableViewBase *this,bool param_1)

{
  this->bEnableAnimatedScrolling = param_1;
  return;
}

// SetIsTouchScrollingEnabled @ 142a362b0

void __thiscall STableViewBase::SetIsTouchScrollingEnabled(STableViewBase *this,bool param_1)

{
  undefined1 local_res10 [24];
  
  this->bEnableTouchScrolling = param_1;
  if (this->bStartedTouchInteraction != false) {
    `STableViewBase::SetIsTouchScrollingEnabled'::__l2::<lambda_1>::operator()(local_res10);
    return;
  }
  return;
}

// SetItemHeight @ 142a36320

void __thiscall STableViewBase::SetItemHeight(STableViewBase *this,TAttribute<float> *param_1)

{
  SListPanel *pSVar1;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  FDestructionSentinel local_48;
  undefined1 local_30 [8];
  undefined1 local_28 [8];
  ForAnyElementType FStack_20;
  int local_18;
  
  if ((this->ItemsPanel).Object == (SListPanel *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_30._0_4_ = param_1->Value;
  local_30[4] = param_1->bIsSet;
  this_00 = &param_1->Getter;
  pSVar1 = (this->ItemsPanel).Object;
  local_28 = (undefined1  [8])0x0;
  FStack_20.Data = (FScriptContainerElement *)0x0;
  local_18 = 0;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *)local_28,this_00);
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&pSVar1->ItemHeightAttribute,(SWidget *)pSVar1,(TAttribute<float> *)local_30,None);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_28,
             (FWriteAccessScope *)&local_48);
  if ((local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
    local_18 = 0;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  if (FStack_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_20.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_28);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar2 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return;
}

// SetItemWidth @ 142a364b0

void __thiscall STableViewBase::SetItemWidth(STableViewBase *this,TAttribute<float> *param_1)

{
  SListPanel *pSVar1;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  FDestructionSentinel local_48;
  undefined1 local_30 [8];
  undefined1 local_28 [8];
  ForAnyElementType FStack_20;
  int local_18;
  
  if ((this->ItemsPanel).Object == (SListPanel *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_30._0_4_ = param_1->Value;
  local_30[4] = param_1->bIsSet;
  this_00 = &param_1->Getter;
  pSVar1 = (this->ItemsPanel).Object;
  local_28 = (undefined1  [8])0x0;
  FStack_20.Data = (FScriptContainerElement *)0x0;
  local_18 = 0;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *)local_28,this_00);
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&pSVar1->ItemWidthAttribute,(SWidget *)pSVar1,(TAttribute<float> *)local_30,None);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_28,
             (FWriteAccessScope *)&local_48);
  if ((local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
    local_18 = 0;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  if (FStack_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_20.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_28);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar2 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return;
}

// SetScrollOffset @ 142a36610

void __thiscall STableViewBase::SetScrollOffset(STableViewBase *this,float param_1)

{
  longlong *plVar1;
  double dVar2;
  FReadAccessScope local_38 [2];
  
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  dVar2 = (double)param_1;
  if (dVar2 != this->DesiredScrollOffset) {
    this->DesiredScrollOffset = dVar2;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnTableViewScrolled,
               local_38);
    if ((*(int *)&(this->OnTableViewScrolled).field_0x10 != 0) &&
       (plVar1 = *(longlong **)&(this->OnTableViewScrolled).field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x68))(plVar1,SUB84(dVar2,0));
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (local_38);
    RequestLayoutRefresh(this);
  }
  return;
}

// SetScrollbarPadding @ 142a366a0

void __thiscall STableViewBase::SetScrollbarPadding(STableViewBase *this,FMargin *param_1)

{
  EOrientation EVar1;
  FSlot *pFVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  FSlot *pFVar6;
  FDestructionSentinel local_58;
  undefined1 local_40 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  EVar1 = this->Orientation;
  fVar3 = param_1->Top;
  fVar4 = param_1->Right;
  fVar5 = param_1->Bottom;
  pFVar2 = (this->field783_0x580).VerticalScrollBarSlot;
  (this->ScrollBarSlotPadding).Left = param_1->Left;
  (this->ScrollBarSlotPadding).Top = fVar3;
  (this->ScrollBarSlotPadding).Right = fVar4;
  (this->ScrollBarSlotPadding).Bottom = fVar5;
  if (EVar1 == Orient_Vertical) {
    if (pFVar2 == (FSlot *)0x0) {
      return;
    }
    local_40._0_4_ = param_1->Left;
    local_40._4_4_ = param_1->Top;
    local_40._8_4_ = param_1->Right;
    local_40._12_4_ = param_1->Bottom;
    local_40[0x10] = true;
    local_18 = 0;
    pFVar6 = (FSlot *)0x0;
    if (&pFVar2->field_0x28 != (undefined1 *)0x0) {
      pFVar6 = pFVar2;
    }
    local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    SlateAttributePrivate::
    TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
    ::Assign((TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
              *)&pFVar2->field_0x28,(ISlateAttributeContainer *)&pFVar6->field_0x20,
             (TAttribute<FMargin> *)local_40,None);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_28,(FWriteAccessScope *)&local_58);
  }
  else {
    if (pFVar2 == (FSlot *)0x0) {
      return;
    }
    local_40._0_4_ = param_1->Left;
    local_40._4_4_ = param_1->Top;
    local_40._8_4_ = param_1->Right;
    local_40._12_4_ = param_1->Bottom;
    local_40[0x10] = true;
    local_18 = 0;
    pFVar6 = (FSlot *)0x0;
    if (&pFVar2->field_0x28 != (undefined1 *)0x0) {
      pFVar6 = pFVar2;
    }
    local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    SlateAttributePrivate::
    TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
    ::Assign((TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
              *)&pFVar2->field_0x28,(ISlateAttributeContainer *)&pFVar6->field_0x20,
             (TAttribute<FMargin> *)local_40,None);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_28,(FWriteAccessScope *)&local_58);
  }
  if (((int)local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
    local_18 = local_18 & 0xffffffff00000000;
  }
  if (local_58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
  }
  if (FStack_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_20.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_28.AccessDetector);
  return;
}

// SetScrollbarVisibility @ 142a367e0

void __thiscall STableViewBase::SetScrollbarVisibility(STableViewBase *this,EVisibility param_1)

{
  SScrollBar *this_00;
  TAttribute<EVisibility> local_28;
  
  this_00 = (this->ScrollBar).Object;
  if (this_00 != (SScrollBar *)0x0) {
    local_28.Getter._16_8_ = 0;
    local_28.bIsSet = true;
    local_28.Getter._0_8_ = 0;
    local_28.Getter._8_8_ = 0;
    local_28.Value.Value.Value = param_1.Value.Value;
    SCompoundWidget::SetVisibility((SCompoundWidget *)this_00,&local_28);
  }
  return;
}

// SetScrollingAnimationInterpolationSpeed @ 142a36830

void __thiscall
STableViewBase::SetScrollingAnimationInterpolationSpeed(STableViewBase *this,float param_1)

{
  this->ScrollingAnimationInterpolationSpeed = param_1;
  return;
}

// SetSelectItemOnNavigation @ 142a36840

void __thiscall STableViewBase::SetSelectItemOnNavigation(STableViewBase *this,bool param_1)

{
  this->bSelectItemOnNavigation = param_1;
  return;
}

// SetWheelScrollMultiplier @ 142a369d0

void __thiscall STableViewBase::SetWheelScrollMultiplier(STableViewBase *this,float param_1)

{
  this->WheelScrollMultiplier = param_1;
  return;
}

// ShouldScrollToFixedLineOffsetAtZeroVelocity @ 142a36d40

bool __thiscall STableViewBase::ShouldScrollToFixedLineOffsetAtZeroVelocity(STableViewBase *this)

{
  bool bVar1;
  
  if ((this->bWasAtEndOfList == false) && ((this->FixedLineScrollOffset).bIsSet != false)) {
    bVar1 = IsRightClickScrolling(this);
    if (!bVar1) {
      return true;
    }
  }
  return false;
}

// SupportsKeyboardFocus @ 142a36eb0

bool __thiscall STableViewBase::SupportsKeyboardFocus(STableViewBase *this)

{
  return true;
}

// Tick @ 142a37070

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
STableViewBase::Tick(STableViewBase *this,FGeometry *param_1,double param_2,float param_3)

{
  SListPanel *pSVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong lVar3;
  code *pcVar4;
  FDeprecateSlateVector2D FVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  FGeometry *pFVar10;
  SScrollBar *pSVar11;
  TDelegate<EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy> *pTVar12;
  bool bVar13;
  float fVar14;
  double dVar15;
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  double dVar19;
  undefined8 in_XMM2_Qb;
  undefined1 auVar20 [16];
  uint uVar21;
  uint uVar22;
  double dVar23;
  undefined1 auVar24 [16];
  undefined1 auStack_188 [32];
  FDeprecateSlateVector2D local_168;
  TSharedRef<SWidget,1> local_158;
  undefined8 local_148;
  undefined8 local_140;
  double local_138;
  double dStack_130;
  double local_128;
  char cStack_120;
  undefined7 uStack_11f;
  code *local_118;
  TReferenceControllerBase<1> *pTStack_110;
  TSharedRef<FActiveTimerHandle,1> local_108;
  TDelegate<EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy> local_f8;
  FGeometry local_e0;
  ulonglong local_a8;
  
  auVar20._8_8_ = in_XMM2_Qb;
  auVar20._0_8_ = param_2;
  local_a8 = __security_cookie.value ^ (ulonglong)auStack_188;
  bVar13 = -1 < CpuChannel->Enabled;
  if (bVar13) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId366,"STableViewBase::Tick",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Views\\STableViewBase.cpp"
               ,0x16e);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId366);
  }
  pSVar1 = (this->ItemsPanel).Object;
  if (pSVar1 == (SListPanel *)0x0) goto LAB_142a378aa;
  pTVar2 = (this->ItemsPanel).SharedReferenceCount.ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_158.Object = (SWidget *)pSVar1;
  local_158.SharedReferenceCount.ReferenceController = pTVar2;
  SWidget::FindChildGeometry((SWidget *)this,&local_e0,param_1,&local_158);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  local_140 = local_e0.Size;
  FVar5 = local_140;
  local_148 = (this->PanelGeometryLastTick).Size;
  local_140._0_4_ = local_e0.Size._0_4_;
  if ((float)local_148 == (float)local_140) {
    local_140._4_4_ = local_e0.Size._4_4_;
    if (local_148._4_4_ != local_140._4_4_) goto LAB_142a3717b;
    bVar6 = false;
  }
  else {
LAB_142a3717b:
    bVar6 = true;
  }
  local_140 = FVar5;
  if ((this->bItemsNeedRefresh == false) && (!bVar6)) goto LAB_142a378aa;
  UpdateSmoothDeltaTime(this,param_3);
  FGeometry::operator=(&this->PanelGeometryLastTick,&local_e0);
  iVar7 = (**(code **)(*(longlong *)this + 0x270))(this);
  iVar8 = (**(code **)(*(longlong *)this + 0x2a8))(this,&local_e0);
  if ((this->bWasAtEndOfList != false) ||
     ((((this->FixedLineScrollOffset).bIsSet == false ||
       (bVar6 = IsRightClickScrolling(this), bVar6)) ||
      ((this->InertialScrollManager).ScrollVelocity != 0.0)))) {
    dVar23 = this->DesiredScrollOffset;
  }
  else {
    iVar9 = (**(code **)(*(longlong *)this + 0x270))(this);
    auVar24._0_8_ = this->DesiredScrollOffset / (double)iVar9;
    auVar24._8_8_ = 0;
    auVar18._0_8_ = auVar24._0_8_ + __real_3fe0000000000000;
    auVar18._8_8_ = 0;
    auVar20 = roundpd(auVar20,auVar18,1);
    dVar15 = auVar20._0_8_ - auVar24._0_8_;
    dVar23 = auVar24._0_8_;
    if ((__real_3f1a36e2eb1c432d <
         (double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar15,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) &&
       (dVar23 = auVar20._0_8_, this->bIsInertialScroll == false)) {
      auVar17._8_8_ = 0;
      auVar17._0_8_ = auVar24._0_8_;
      auVar20 = roundpd(auVar24,auVar17,1);
      dVar23 = auVar20._0_8_;
    }
    if (((this->FixedLineScrollOffset).bIsSet == false) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    dVar23 = (dVar23 - (this->FixedLineScrollOffset).TypedValue) * (double)iVar9;
    if (dVar23 <= 0.0) {
      dVar23 = 0.0;
    }
  }
  uVar22 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar21 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  if ((this->InertialScrollManager).bShouldStopScrollNow != false) {
    dVar23 = this->CurrentScrollOffset;
    this->DesiredScrollOffset = dVar23;
    (this->InertialScrollManager).bShouldStopScrollNow = false;
  }
  dVar15 = __real_3ff0000000000000;
  if (this->bStartedTouchInteraction == false) {
    if (this->bEnableAnimatedScrolling != false) goto LAB_142a3736d;
LAB_142a37428:
    this->CurrentScrollOffset = dVar23;
  }
  else {
    if (this->bEnableTouchAnimatedScrolling == false) goto LAB_142a37428;
LAB_142a3736d:
    fVar14 = this->SmoothDeltaTime;
    if (this->SmoothDeltaTime < 0.0) {
      fVar14 = param_3;
    }
    dVar16 = dVar23;
    if (0.0 < this->ScrollingAnimationInterpolationSpeed) {
      dVar19 = dVar23 - this->CurrentScrollOffset;
      if (__real_3e45798ee0000000 <= dVar19 * dVar19) {
        dVar16 = (double)fVar14 * (double)this->ScrollingAnimationInterpolationSpeed;
        if (__real_3ff0000000000000 <= dVar16) {
          dVar16 = __real_3ff0000000000000;
        }
        if (dVar16 <= 0.0) {
          dVar16 = 0.0;
        }
        dVar16 = dVar16 * dVar19 + this->CurrentScrollOffset;
      }
    }
    this->CurrentScrollOffset = dVar16;
    if (((((this->bWasAtEndOfList != false) || ((this->FixedLineScrollOffset).bIsSet == false)) ||
         (bVar6 = IsRightClickScrolling(this), uVar21 = (uint)__xmm_7fffffffffffffff7fffffffffffffff
         , uVar22 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_, bVar6)) ||
        ((this->InertialScrollManager).ScrollVelocity == 0.0)) &&
       (dVar16 = this->CurrentScrollOffset - dVar23,
       (double)CONCAT44((uint)((ulonglong)dVar16 >> 0x20) & uVar22,SUB84(dVar16,0) & uVar21) <=
       __real_3f847ae147ae147b)) goto LAB_142a37428;
  }
  (**(code **)(*(longlong *)this + 0x298))(this,&local_138,&local_e0);
  lVar3 = *(longlong *)this;
  (this->LastGenerateResults).NewScrollOffset = local_138;
  (this->LastGenerateResults).LengthOfGeneratedItems = dStack_130;
  (this->LastGenerateResults).ExactNumLinesOnScreen = local_128;
  *(ulonglong *)&(this->LastGenerateResults).bGeneratedPastLastItem =
       CONCAT71(uStack_11f,cStack_120);
  iVar9 = (**(code **)(lVar3 + 0x2a0))(this);
  if (local_128 < (double)(iVar9 / iVar7)) {
    if (cStack_120 != '\0') {
      if (local_138 <= 0.0) {
        local_138 = 0.0;
      }
      fVar14 = (float)local_138;
      goto LAB_142a374a2;
    }
  }
  else {
    fVar14 = 0.0;
LAB_142a374a2:
    SetScrollOffset(this,fVar14);
    dVar23 = this->DesiredScrollOffset;
    this->CurrentScrollOffset = dVar23;
  }
  if (((this->ItemsPanel).Object == (SListPanel *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pSVar1 = (this->ItemsPanel).Object;
  fVar14 = (float)(**(code **)(*(longlong *)this + 0x278))(this);
  pSVar1->FirstLineScrollOffset = fVar14;
  if (this->AllowOverscroll == Yes) {
    pFVar10 = SWidget::GetTickSpaceGeometry((SWidget *)this);
    fVar14 = FOverscroll::GetOverscroll(&this->Overscroll,pFVar10);
    if (((this->ItemsPanel).Object == (SListPanel *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    ((this->ItemsPanel).Object)->OverscrollAmount = fVar14;
  }
  (**(code **)(*(longlong *)this + 0x290))(this);
  if (iVar9 < 1) {
    pSVar11 = TSharedPtr<SScrollBar,1>::operator->(&this->ScrollBar);
  }
  else {
    if (local_128 < dVar15) {
      local_168 = param_1->Size;
    }
    pSVar11 = TSharedPtr<SScrollBar,1>::operator->(&this->ScrollBar);
  }
  (**(code **)(pSVar11->_padding_ + 0x250))(pSVar11);
  if (((this->ScrollBar).Object == (SScrollBar *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  fVar14 = SScrollBar::DistanceFromBottom((this->ScrollBar).Object);
  bVar6 = fVar14 < __real_322bcc77;
  this->bItemsNeedRefresh = false;
  this->bWasAtEndOfList = bVar6;
  if (((this->ItemsPanel).Object == (SListPanel *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  ((this->ItemsPanel).Object)->bIsRefreshPending = false;
  SWidget::Invalidate((SWidget *)this,ChildOrder);
  if (iVar8 == 0) {
    (**(code **)(*(longlong *)this + 0x2b0))(this);
LAB_142a37720:
    if (dVar23 != this->CurrentScrollOffset) goto LAB_142a37804;
    if (((this->ScrollBar).Object == (SScrollBar *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    bVar6 = SScrollBar::IsNeeded((this->ScrollBar).Object);
    if (bVar6) {
      if (((this->ScrollBar).Object == (SScrollBar *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      bVar6 = SScrollBar::IsScrolling((this->ScrollBar).Object);
      if (!bVar6) goto LAB_142a377b3;
    }
    else {
LAB_142a377b3:
      bVar6 = IsRightClickScrolling(this);
      if (!bVar6) {
        if (this->AllowOverscroll != No) {
          pFVar10 = SWidget::GetTickSpaceGeometry((SWidget *)this);
          fVar14 = FOverscroll::GetOverscroll(&this->Overscroll,pFVar10);
          if (fVar14 != 0.0) goto LAB_142a3787c;
        }
        this->DesiredScrollOffset = dVar23;
        (**(code **)(*(longlong *)this + 0x2b8))(this);
      }
    }
  }
  else {
    if (iVar8 != 1) goto LAB_142a37720;
LAB_142a37804:
    if (this->bItemsNeedRefresh == false) {
      local_158.SharedReferenceCount.ReferenceController =
           local_158.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
      local_158.Object = (SWidget *)EnsureTickToRefresh;
      local_118 = EnsureTickToRefresh;
      pTStack_110 = local_158.SharedReferenceCount.ReferenceController;
      this->bItemsNeedRefresh = true;
      pTVar12 = TDelegate<enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
                ::CreateSP<STableViewBase>(&local_f8,this,(pmf_1d42f6b2 *)&local_118);
      SWidget::RegisterActiveTimer((SWidget *)this,&local_108,0.0,pTVar12);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_108.SharedReferenceCount.ReferenceController);
    }
    pSVar1 = (this->ItemsPanel).Object;
    if (pSVar1 != (SListPanel *)0x0) {
      pSVar1->bIsRefreshPending = true;
    }
    SWidget::Invalidate((SWidget *)this,Layout);
  }
LAB_142a3787c:
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::ExecuteIfBound(&this->OnItemsRebuilt);
LAB_142a378aa:
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// UpdateInertialScroll @ 142a37f00

EActiveTimerReturnType __thiscall
STableViewBase::UpdateInertialScroll(STableViewBase *this,double param_1,float param_2)

{
  float fVar1;
  EAllowOverscroll EVar2;
  code *pcVar3;
  bool bVar4;
  FGeometry *pFVar5;
  bool bVar6;
  float fVar7;
  
  bVar6 = false;
  if ((this->ItemsPanel).Object != (SListPanel *)0x0) {
    bVar4 = IsRightClickScrolling(this);
    if (bVar4) {
      bVar6 = true;
      bVar4 = CanUseInertialScroll(this,this->TickScrollDelta);
      if (bVar4) {
        FInertialScrollManager::AddScrollSample
                  (&this->InertialScrollManager,this->TickScrollDelta,param_1);
        this->bIsInertialScroll = true;
      }
    }
    else {
      fVar7 = this->SmoothDeltaTime;
      if (this->SmoothDeltaTime < 0.0) {
        fVar7 = param_2;
      }
      FInertialScrollManager::UpdateScrollVelocity(&this->InertialScrollManager,fVar7);
      fVar1 = (this->InertialScrollManager).ScrollVelocity;
      if (fVar1 != 0.0) {
        bVar4 = CanUseInertialScroll(this,fVar1);
        if (bVar4) {
          EVar2 = this->AllowOverscroll;
          bVar6 = true;
          pcVar3 = *(code **)(*(longlong *)this + 600);
          pFVar5 = SWidget::GetTickSpaceGeometry((SWidget *)this);
          (*pcVar3)(this,pFVar5,fVar7 * fVar1,EVar2);
        }
        else {
          FInertialScrollManager::ClearScrollVelocity(&this->InertialScrollManager,false);
          this->bIsInertialScroll = false;
        }
      }
      if (this->AllowOverscroll == Yes) {
        pFVar5 = SWidget::GetTickSpaceGeometry((SWidget *)this);
        fVar7 = FOverscroll::GetOverscroll(&this->Overscroll,pFVar5);
        if (fVar7 != 0.0) {
          bVar6 = true;
          RequestLayoutRefresh(this);
        }
        FOverscroll::UpdateOverscroll(&this->Overscroll,param_2);
      }
    }
    this->TickScrollDelta = 0.0;
  }
  this->bIsScrollingActiveTimerRegistered = bVar6;
  return bVar6 != false;
}

// UpdateSmoothDeltaTime @ 142a380a0

void __thiscall STableViewBase::UpdateSmoothDeltaTime(STableViewBase *this,float param_1)

{
  int *piVar1;
  int *piVar2;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int iVar12;
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  FIdentityFunctor local_res8 [8];
  float local_res10 [2];
  
  uVar8 = this->DeltaTimeCircularIndex;
  local_res10[0] = param_1;
  if (((int)uVar8 < 0) || ((this->DeltaTimeQueue).ArrayNum <= (int)uVar8)) {
    pTVar3 = &this->DeltaTimeQueue;
    pFVar4 = (pTVar3->AllocatorInstance).Data;
    if ((pFVar4 <= (FScriptContainerElement *)local_res10) &&
       (((FScriptContainerElement *)local_res10 <
         pFVar4 + (longlong)(this->DeltaTimeQueue).ArrayMax * 4 &&
        (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar6)))) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar12 = (this->DeltaTimeQueue).ArrayNum;
    piVar1 = &(this->DeltaTimeQueue).ArrayMax;
    if (iVar12 == *piVar1) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&pTVar3->AllocatorInstance,piVar1);
    }
    (this->DeltaTimeQueue).ArrayNum = iVar12 + 1;
    *(float *)((pTVar3->AllocatorInstance).Data + (longlong)iVar12 * 4) = local_res10[0];
  }
  else {
    uVar9 = 0;
    if ((int)uVar8 < (this->DeltaTimeQueue).ArrayNum) {
      uVar9 = ~uVar8 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    *(float *)((this->DeltaTimeQueue).AllocatorInstance.Data + (longlong)(int)uVar8 * 4) = param_1;
  }
  pTVar3 = &this->SortedDeltaTimes;
  this->DeltaTimeCircularIndex = (this->DeltaTimeCircularIndex + 1) % MaxNumberOfDeltaTimes;
  iVar12 = MaxNumberOfDeltaTimes;
  if (MaxNumberOfDeltaTimes < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)MaxNumberOfDeltaTimes);
  }
  piVar1 = &(this->SortedDeltaTimes).ArrayMax;
  piVar2 = &(this->SortedDeltaTimes).ArrayNum;
  *piVar2 = 0;
  if (*piVar1 != iVar12) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar12,&pTVar3->AllocatorInstance,0,piVar1);
  }
  if ((pTVar3 == &this->DeltaTimeQueue) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)this != (void*)&Source",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x96e,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar12 = (this->DeltaTimeQueue).ArrayNum;
  if (iVar12 != 0) {
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,iVar12,&pTVar3->AllocatorInstance,piVar2,piVar1);
    memcpy((pTVar3->AllocatorInstance).Data + (longlong)iVar7 * 4,
           (this->DeltaTimeQueue).AllocatorInstance.Data,(longlong)iVar12 << 2);
  }
  AlgoImpl::IntroSortInternal<float,int,FIdentityFunctor,TDereferenceWrapper<float,TLess<void>_>_>
            ((float *)(pTVar3->AllocatorInstance).Data,*piVar2,local_res8[0],
             (TLess<void> *)local_res8);
  iVar12 = (this->SortedDeltaTimes).ArrayNum;
  fVar15 = 0.0;
  fVar14 = (float)((uint)RatioOfOutliers & __xmm_7fffffff7fffffff7fffffff7fffffff) * (float)iVar12;
  auVar13 = ZEXT416((uint)fVar14);
  if (0.0 <= fVar14) {
    auVar13 = roundps(auVar13,auVar13,2);
    fVar14 = auVar13._0_4_;
  }
  else {
    auVar13 = roundps(auVar13,auVar13,1);
    fVar14 = auVar13._0_4_;
  }
  iVar7 = (int)fVar14 / 2;
  uVar10 = (ulonglong)iVar7;
  iVar12 = iVar12 - iVar7;
  iVar7 = iVar12 - iVar7;
  if ((iVar7 < 1) &&
     (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_5698722673173986343>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Views\\STableViewBase.cpp"
                         ,0x3d9,"EndIndex - StartIndex > 0"), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar11 = uVar10;
  while( true ) {
    if ((longlong)iVar12 <= (longlong)uVar10) {
      this->SmoothDeltaTime = fVar15 / (float)iVar7;
      return;
    }
    uVar9 = (uint)uVar11;
    uVar8 = 0;
    if ((int)uVar9 < *piVar2) {
      uVar8 = ~uVar9 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) break;
    uVar11 = (ulonglong)(uVar9 + 1);
    fVar15 = fVar15 + *(float *)((pTVar3->AllocatorInstance).Data + uVar10 * 4);
    uVar10 = uVar10 + 1;
  }
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

// operator() @ 150495550

bool __thiscall
`STableViewBase::SetIsTouchScrollingEnabled'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_5698722673173986191>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5698722673173986191>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

