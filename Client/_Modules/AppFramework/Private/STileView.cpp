// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 14

// Construct @ 142f66eb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
STileView<TSharedPtr<int,1>_>::Construct(STileView<TSharedPtr<int,1>_> *this,FArguments *param_1)

{
  longlong *plVar1;
  STextBlock *pSVar2;
  longlong lVar3;
  code *pcVar4;
  FScriptContainerElement *pFVar5;
  char cVar6;
  bool bVar7;
  TSharedRef<SWidget,1> *pTVar8;
  TUniquePtr<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<int,1>_>,TDefaultDelete<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<int,1>_>_>_>
  TVar9;
  undefined8 *puVar10;
  ulong64 uVar11;
  undefined4 *puVar12;
  FArguments *pFVar13;
  FText *pFVar14;
  TSharedRef<STextBlock,1> *pTVar15;
  TReferenceControllerBase<1> *pTVar16;
  TReferenceControllerBase<1> *pTVar17;
  int iVar18;
  TDelegate<FString___cdecl(TSharedPtr<int,1>),FDefaultDelegateUserPolicy> *pTVar19;
  FSlotBase *this_00;
  TReferenceControllerBase<1> *pTVar20;
  undefined1 *puVar21;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res10 [2];
  FName local_res18;
  FMemScope local_res20;
  undefined1 local_7b8 [8];
  ForAnyElementType local_7b0;
  int local_7a8;
  FString local_7a0;
  undefined1 local_790 [8];
  FScriptContainerElement *local_788;
  int local_780;
  uchar local_778;
  undefined1 local_777;
  undefined1 local_770 [8];
  void *pvStack_768;
  undefined4 local_760;
  undefined1 local_758 [8];
  FDelegateAllocation local_750;
  STextBlock *local_740;
  TReferenceControllerBase<1> *pTStack_738;
  TSharedRef<ISlateMetaData,1> local_730;
  TSharedRef<STileView<TSharedPtr<int,1>_>,1> local_720;
  TSharedRef<STileView<TSharedPtr<int,1>_>,1> local_708;
  TSharedPtr<SHeaderRow,1> local_6f8;
  FDestructionSentinel local_6e8;
  FDestructionSentinel local_6d0;
  FDestructionSentinel local_6b8;
  FDelegateAllocation *local_6a0;
  TAttribute<FText> local_698;
  undefined1 local_668 [16];
  TReferenceControllerBase<1> *local_658;
  STileView<TSharedPtr<int,1>_> *local_648;
  TReferenceControllerBase<1> *pTStack_640;
  TSharedRef<STextBlock,1> local_638;
  FText local_628;
  TSharedRef<SWidget,1> local_618;
  FReadAccessScope local_608;
  FReadAccessScope local_5f0;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_5d8;
  FReadAccessScope local_5c0;
  FArguments local_5a8;
  
  this->field_0x35 = *(undefined1 *)((longlong)&param_1->_padding_ + 2);
  pTVar20 = (TReferenceControllerBase<1> *)0x0;
  TDelegate<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<int,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
  ::operator=((TDelegate<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<int,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
               *)&this->field_0x748,&param_1->_OnGenerateTile);
  TDelegate<void___cdecl(TSharedPtr<int,1>),FDefaultDelegateUserPolicy>::operator=
            ((TDelegate<void___cdecl(TSharedPtr<int,1>),FDefaultDelegateUserPolicy> *)
             &this->field_0x778,&param_1->_OnRefreshTile);
  TDelegate<void___cdecl(TSharedRef<ITableRow,1>_const_&),FDefaultDelegateUserPolicy>::operator=
            ((TDelegate<void___cdecl(TSharedRef<ITableRow,1>_const_&),FDefaultDelegateUserPolicy> *)
             &this->field_0x7c0,&param_1->_OnTileReleased);
  TDelegate<void___cdecl(TSharedPtr<int,1>,TSharedPtr<ITableRow,1>_const_&),FDefaultDelegateUserPolicy>
  ::operator=((TDelegate<void___cdecl(TSharedPtr<int,1>,TSharedPtr<ITableRow,1>_const_&),FDefaultDelegateUserPolicy>
               *)&this->field_0x7d8,&param_1->_OnItemScrolledIntoView);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::operator=
            ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&this->field_0x7f0,
             &param_1->_OnFinishedScrolling);
  pTVar8 = TSharedFromThis<SWidget,1>::AsShared
                     ((TSharedFromThis<SWidget,1> *)&this->field_0x8,
                      (TSharedRef<SWidget,1> *)(local_668 + 8));
  local_708.Object = (STileView<TSharedPtr<int,1>_> *)pTVar8->Object;
  local_708.SharedReferenceCount.ReferenceController =
       (pTVar8->SharedReferenceCount).ReferenceController;
  if (local_708.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_708.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_708.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_658);
  local_648 = local_708.Object;
  pTStack_640 = local_708.SharedReferenceCount.ReferenceController;
  if (local_708.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_708.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_708.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  TVar9 = FArguments::MakeListItemsSource(param_1,(TSharedRef<STableViewBase,1> *)local_668);
  SListView<TSharedPtr<int,1>_>::SetItemsSource((SListView<TSharedPtr<int,1>_> *)this,TVar9);
  TSharedRef<STileView<TSharedPtr<int,1>_>,1>::~TSharedRef<STileView<TSharedPtr<int,1>_>,1>
            (&local_708);
  TDelegate<TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>::operator=
            ((TDelegate<TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy> *)
             &this->field_0x3b8,&param_1->_OnContextMenuOpening);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::operator=
            ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&this->field_0x3d0,
             &param_1->_OnItemsRebuilt);
  TDelegate<void___cdecl(TSharedPtr<int,1>),FDefaultDelegateUserPolicy>::operator=
            ((TDelegate<void___cdecl(TSharedPtr<int,1>),FDefaultDelegateUserPolicy> *)
             &this->field_0x930,&param_1->_OnMouseButtonClick);
  TDelegate<void___cdecl(TSharedPtr<int,1>),FDefaultDelegateUserPolicy>::operator=
            ((TDelegate<void___cdecl(TSharedPtr<int,1>),FDefaultDelegateUserPolicy> *)
             &this->field_0x948,&param_1->_OnMouseButtonDoubleClick);
  TDelegate<void___cdecl(TSharedPtr<int,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>::
  operator=(&this->field_0x900,&param_1->_OnSelectionChanged);
  TDelegate<bool___cdecl(TSharedPtr<int,1>),FDefaultDelegateUserPolicy>::operator=
            ((TDelegate<bool___cdecl(TSharedPtr<int,1>),FDefaultDelegateUserPolicy> *)
             &this->field_0x918,&param_1->_OnIsSelectableOrNavigable);
  TAttribute<enum_ESelectionMode::Type>::operator=(&this->field_0x3e8,&param_1->_SelectionMode);
  this->field_0x99c = param_1->_ClearSelectionOnClick;
  this->field_0x548 = param_1->_AllowOverscroll;
  this->field_0x549 = param_1->_ConsumeMouseWheel;
  *(float *)&this->field_0x444 = param_1->_WheelScrollMultiplier;
  this->field_0x99d = param_1->_HandleGamepadEvents;
  this->field_0x99e = param_1->_HandleDirectionalNavigation;
  this->field_0x978 = (param_1->_IsFocusable).Value;
  this->field_0x979 = (param_1->_IsFocusable).bIsSet;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)&this->field_0x980,
             &(param_1->_IsFocusable).Getter);
  this->field_0x320 = param_1->_EnableAnimatedScrolling;
  if (&param_1->_FixedLineScrollOffset != (TOptional<double> *)&this->field_0x310) {
    if ((param_1->_FixedLineScrollOffset).bIsSet == false) {
      if (this->field_0x318 != '\0') {
        this->field_0x318 = 0;
      }
    }
    else {
      *(double *)&this->field_0x310 = (param_1->_FixedLineScrollOffset).TypedValue;
      this->field_0x318 = 1;
    }
  }
  pTVar19 = &param_1->_OnItemToString_Debug;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pTVar19,&local_608);
  if ((*(int *)&(param_1->_OnItemToString_Debug).field_0x10 == 0) ||
     (plVar1 = *(longlong **)&(param_1->_OnItemToString_Debug).field_0x8, plVar1 == (longlong *)0x0)
     ) {
LAB_142f6726b:
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_608);
    local_758 = (undefined1  [8])0x0;
    local_750.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_750.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_758,
               (FWriteAccessScope *)&local_6b8);
    local_6a0 = &local_750;
    puVar10 = UE::Core::Private::DelegateAllocate(0x20,&local_750);
    if (puVar10 != (undefined8 *)0x0) {
      *puVar10 = &
                 ___7__TCommonDelegateInstanceState___A6A_AVFString__V__TSharedPtr_H_00___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar11 = FDelegateHandle::GenerateNewID();
      puVar10[2] = uVar11;
      *puVar10 = &
                 ___7__TBaseStaticDelegateInstance___A6A_AVFString__V__TSharedPtr_H_00___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar10[3] = TListTypeTraits<TSharedPtr<int,1>,void>::DebugDump;
    }
    if (local_6b8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_6b8.Accessor,&local_6b8);
    }
    TDelegate<FString___cdecl(TSharedPtr<int,1>),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<FString___cdecl(TSharedPtr<int,1>),FDefaultDelegateUserPolicy> *)
               &this->field_0x790,
               (TDelegate<FString___cdecl(TSharedPtr<int,1>),FDefaultDelegateUserPolicy> *)local_758
              );
    pTVar19 = (TDelegate<FString___cdecl(TSharedPtr<int,1>),FDefaultDelegateUserPolicy> *)local_758;
  }
  else {
    cVar6 = (**(code **)(*plVar1 + 0x38))();
    if (cVar6 == '\0') goto LAB_142f6726b;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_608);
    local_7b8 = (undefined1  [8])0x0;
    local_7b0.Data = (FScriptContainerElement *)0x0;
    local_7a8 = 0;
    if (pTVar19 !=
        (TDelegate<FString___cdecl(TSharedPtr<int,1>),FDefaultDelegateUserPolicy> *)local_7b8) {
      local_790 = (undefined1  [8])0x0;
      local_788 = (FScriptContainerElement *)0x0;
      local_780 = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pTVar19,&local_5c0);
      if ((*(int *)&(param_1->_OnItemToString_Debug).field_0x10 != 0) &&
         (plVar1 = *(longlong **)&(param_1->_OnItemToString_Debug).field_0x8,
         plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0x50))(plVar1,local_790);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_5c0);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_790,
                 (FWriteAccessScope *)&local_6e8);
      iVar18 = local_780;
      pFVar5 = local_788;
      local_788 = (FScriptContainerElement *)0x0;
      local_780 = 0;
      if (local_6e8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_6e8.Accessor,&local_6e8);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_7b8,
                 (FWriteAccessScope *)&local_6d0);
      if (local_7a8 == 0) {
LAB_142f67219:
        if (local_7b0.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_7b0.Data);
        }
      }
      else if (local_7b0.Data != (FScriptContainerElement *)0x0) {
        (*(code *)**(undefined8 **)local_7b0.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_7b0,0,0,0x10);
        local_7a8 = 0;
        goto LAB_142f67219;
      }
      local_7b0.Data = pFVar5;
      local_7a8 = iVar18;
      if (local_6d0.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_6d0.Accessor,&local_6d0);
      }
      TDelegate<FString___cdecl(TSharedPtr<int,1>),FDefaultDelegateUserPolicy>::
      ~TDelegate<FString___cdecl(TSharedPtr<int,1>),FDefaultDelegateUserPolicy>
                ((TDelegate<FString___cdecl(TSharedPtr<int,1>),FDefaultDelegateUserPolicy> *)
                 local_790);
    }
    TDelegate<FString___cdecl(TSharedPtr<int,1>),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<FString___cdecl(TSharedPtr<int,1>),FDefaultDelegateUserPolicy> *)
               &this->field_0x790,
               (TDelegate<FString___cdecl(TSharedPtr<int,1>),FDefaultDelegateUserPolicy> *)local_7b8
              );
    pTVar19 = (TDelegate<FString___cdecl(TSharedPtr<int,1>),FDefaultDelegateUserPolicy> *)local_7b8;
  }
  TDelegate<FString___cdecl(TSharedPtr<int,1>),FDefaultDelegateUserPolicy>::
  ~TDelegate<FString___cdecl(TSharedPtr<int,1>),FDefaultDelegateUserPolicy>(pTVar19);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::operator=
            ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&this->field_0x7a8,
             &param_1->_OnEnteredBadState);
  this->bWrapHorizontalNavigation = param_1->_WrapHorizontalNavigation;
  local_7a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_7a0.Data.ArrayNum = 0;
  local_7a0.Data.ArrayMax = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->field_0x748,&local_5f0
            );
  if ((*(int *)&this->field_0x758 != 0) && (*(longlong **)&this->field_0x750 != (longlong *)0x0)) {
    cVar6 = (**(code **)(**(longlong **)&this->field_0x750 + 0x38))();
    if (cVar6 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_5f0);
      goto LAB_142f6738d;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_5f0);
  ::FString::AppendChars(&local_7a0,L"Please specify an OnGenerateTile. \n",0x23);
LAB_142f6738d:
  if (*(longlong *)&this->field_0x9f8 == 0) {
    ::FString::AppendChars(&local_7a0,L"Please specify a ListItemsSource. \n",0x23);
  }
  iVar18 = local_7a0.Data.ArrayNum + -1;
  if (local_7a0.Data.ArrayNum == 0) {
    iVar18 = 0;
  }
  if (iVar18 < 1) {
    local_6f8.Object = (SHeaderRow *)0x0;
    local_6f8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    STableViewBase::ConstructChildren
              ((STableViewBase *)this,&param_1->_ItemWidth,&param_1->_ItemHeight,
               &param_1->_ItemAlignment,&local_6f8,&param_1->_ExternalScrollbar,
               param_1->_Orientation,&param_1->_OnTileViewScrolled,param_1->_ScrollBarStyle,false);
    TSharedPtr<SHeaderRow,1>::~TSharedPtr<SHeaderRow,1>(&local_6f8);
    if (*(SScrollBar **)&this->field_0x2d8 != (SScrollBar *)0x0) {
      SScrollBar::SetDragFocusCause
                (*(SScrollBar **)&this->field_0x2d8,param_1->_ScrollbarDragFocusCause);
      if (*(longlong *)&this->field_0x2d8 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      local_778 = (param_1->_ScrollbarVisibility).Value.Value.Value;
      lVar3 = *(longlong *)&this->field_0x2d8;
      local_777 = (param_1->_ScrollbarVisibility).bIsSet;
      local_770 = (undefined1  [8])0x0;
      pvStack_768 = (void *)0x0;
      local_760 = 0;
      TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
      CopyFrom<FDefaultDelegateUserPolicy>
                ((TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *)local_770,
                 &(param_1->_ScrollbarVisibility).Getter);
      *(uchar *)(lVar3 + 0x2e0) = local_778;
      *(undefined1 *)(lVar3 + 0x2e1) = local_777;
      TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
      CopyFrom<FDefaultDelegateUserPolicy>
                ((TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *)(lVar3 + 0x2e8),
                 (TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *)local_770);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_770);
      if (pvStack_768 != (void *)0x0) {
        FMemory::Free(pvStack_768);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_770);
      if (*(longlong *)&this->field_0x2d8 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      SScrollBar::SetScrollbarDisabledVisibility
                (*(SScrollBar **)&this->field_0x2d8,
                 (EVisibility)(param_1->_ScrollbarDisabledVisibility).Value.Value);
    }
    pTVar8 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&this->field_0x8,&local_618);
    local_720.Object = (STileView<TSharedPtr<int,1>_> *)pTVar8->Object;
    local_720.SharedReferenceCount.ReferenceController =
         (pTVar8->SharedReferenceCount).ReferenceController;
    if (local_720.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_720.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_720.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_618.SharedReferenceCount.ReferenceController);
    pTVar16 = ::operator_new(0x28);
    if (pTVar16 == (TReferenceControllerBase<1> *)0x0) {
      local_730.Object = (ISlateMetaData *)___xmm_00000000000000000000000000000010;
      local_730.SharedReferenceCount.ReferenceController = _UNK_150651568;
    }
    else {
      pTVar16->SharedReferenceCount = (atomic<int>)0x1;
      pTVar16->WeakReferenceCount = (atomic<int>)0x1;
      pTVar16->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_V__TTableViewMetadata_V__TSharedPtr_H_00_____00_SharedPointerInternals__6B_
      ;
      pTVar17 = (TReferenceControllerBase<1> *)&(local_720.Object)->field_0x588;
      if (local_720.Object == (STileView<TSharedPtr<int,1>_> *)0x0) {
        pTVar17 = pTVar20;
      }
      if (local_720.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0)
      {
        pTVar16[1]._padding_ = (longlong)&___7__TTableViewMetadata_V__TSharedPtr_H_00____6B_;
        *(TReferenceControllerBase<1> **)&pTVar16[1].SharedReferenceCount = pTVar17;
        pTVar16[2]._padding_ = 0;
      }
      else {
        LOCK();
        (local_720.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_720.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
        pTVar16[1]._padding_ = (longlong)&___7__TTableViewMetadata_V__TSharedPtr_H_00____6B_;
        *(TReferenceControllerBase<1> **)&pTVar16[1].SharedReferenceCount = pTVar17;
        pTVar16[2]._padding_ = (longlong)local_720.SharedReferenceCount.ReferenceController;
        LOCK();
        (local_720.SharedReferenceCount.ReferenceController)->WeakReferenceCount =
             (atomic<int>)
             ((int)(local_720.SharedReferenceCount.ReferenceController)->WeakReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_720.SharedReferenceCount.ReferenceController);
      local_730.Object = (ISlateMetaData *)(pTVar16 + 1);
      if ((TReferenceControllerBase<1> *)local_730.Object == (TReferenceControllerBase<1> *)0x0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L"");
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      LOCK();
      pTVar16->SharedReferenceCount = (atomic<int>)((int)pTVar16->SharedReferenceCount + 1);
      UNLOCK();
      pTVar20 = pTVar16;
      local_730.SharedReferenceCount.ReferenceController = pTVar16;
    }
    SWidget::AddMetadataInternal((SWidget *)this,&local_730);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_730.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar20);
    TSharedRef<STileView<TSharedPtr<int,1>_>,1>::~TSharedRef<STileView<TSharedPtr<int,1>_>,1>
              (&local_720);
  }
  else {
    puVar21 = &this->field_0x268;
    *(undefined4 *)puVar21 = 2;
    puVar12 = (undefined4 *)&this->field_0x26c;
    if (puVar21 == (undefined1 *)0x0) {
      puVar12 = (undefined4 *)&DAT_00000054;
    }
    *puVar12 = 2;
    pFVar13 = STextBlock::FArguments::FArguments(&local_5a8);
    pFVar14 = FText::FromString(&local_628,&local_7a0);
    FText::FText(&local_698.Value,pFVar14);
    local_698.bIsSet = true;
    local_698.Getter._16_8_ = 0;
    local_698.Getter._0_8_ = 0;
    local_698.Getter._8_8_ = 0;
    pFVar13 = STextBlock::FArguments::Text(pFVar13,&local_698);
    FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_res18 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_res20,&local_res18,true);
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
              (&local_5d8,"STextBlock",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\STileView.h"
               ,0xd8,local_res8);
    FMemScope::~FMemScope(&local_res20);
    FLLMScope::~FLLMScope(local_res10);
    pTVar15 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                        (&local_5d8,&local_638,pFVar13);
    this_00 = (FSlotBase *)&this->field_0x238;
    pTVar20 = (pTVar15->SharedReferenceCount).ReferenceController;
    pSVar2 = pTVar15->Object;
    if (pTVar20 == (TReferenceControllerBase<1> *)0x0) {
      if (puVar21 == (undefined1 *)0x0) {
        this_00 = (FSlotBase *)&DAT_00000020;
      }
      FSlotBase::DetatchParentFromContent(this_00);
    }
    else {
      LOCK();
      pTVar20->SharedReferenceCount = (atomic<int>)((int)pTVar20->SharedReferenceCount + 1);
      UNLOCK();
      if (puVar21 == (undefined1 *)0x0) {
        this_00 = (FSlotBase *)&DAT_00000020;
      }
      FSlotBase::DetatchParentFromContent(this_00);
      LOCK();
      pTVar20->SharedReferenceCount = (atomic<int>)((int)pTVar20->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar16 = (this_00->Widget).SharedReferenceCount.ReferenceController;
    (this_00->Widget).Object = (SWidget *)pSVar2;
    (this_00->Widget).SharedReferenceCount.ReferenceController = pTVar20;
    local_740 = pSVar2;
    pTStack_738 = pTVar20;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar16);
    FSlotBase::AfterContentOrOwnerAssigned(this_00);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar20);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_638.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_5d8._Widget.SharedReferenceCount.ReferenceController);
    if (local_628.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_628.TextData.Reference + 0x10))();
    }
    STextBlock::FArguments::~FArguments(&local_5a8);
  }
  if (local_7a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_7a0.Data.AllocatorInstance.Data);
  }
  return;
}

// Construct @ 142f67840

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
STileView<TSharedPtr<FTestData,1>_>::Construct
          (STileView<TSharedPtr<FTestData,1>_> *this,FArguments *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  SWidget *pSVar2;
  longlong *plVar3;
  STextBlock *pSVar4;
  longlong lVar5;
  code *pcVar6;
  char cVar7;
  bool bVar8;
  TSharedRef<SWidget,1> *pTVar9;
  TUniquePtr<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<FTestData,1>_>,TDefaultDelete<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<FTestData,1>_>_>_>
  TVar10;
  undefined8 *puVar11;
  ulong64 uVar12;
  undefined4 *puVar13;
  FArguments *pFVar14;
  FText *pFVar15;
  TSharedRef<STextBlock,1> *pTVar16;
  TReferenceControllerBase<1> *pTVar17;
  int iVar18;
  FMRSWRecursiveAccessDetector *this_00;
  FSlotBase *this_01;
  TReferenceControllerBase<1> *pTVar19;
  undefined1 *puVar20;
  atomic<int> *paVar21;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res10 [2];
  FName local_res18;
  FMemScope local_res20;
  undefined1 local_758 [8];
  FDelegateAllocation local_750;
  undefined1 local_740 [8];
  ForAnyElementType local_738;
  int local_730;
  FString local_728;
  uchar local_718;
  undefined1 local_717;
  undefined1 local_710 [8];
  void *pvStack_708;
  undefined4 local_700;
  SWidget *local_6f8;
  TReferenceControllerBase<1> *local_6f0;
  STextBlock *local_6e8;
  TReferenceControllerBase<1> *pTStack_6e0;
  TSharedRef<ISlateMetaData,1> local_6d8;
  TSharedRef<SWidget,1> local_6c8;
  TSharedPtr<SHeaderRow,1> local_6b8;
  FDestructionSentinel local_6a8;
  FDestructionSentinel local_690;
  FDestructionSentinel local_678;
  FDelegateAllocation *local_660;
  TAttribute<FText> local_658;
  undefined1 local_628 [16];
  TReferenceControllerBase<1> *local_618;
  FText local_610;
  TSharedRef<SWidget,1> local_600;
  FReadAccessScope local_5f0;
  FReadAccessScope local_5d8;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_5c0;
  FArguments local_5a8;
  
  this->field_0x35 = *(undefined1 *)((longlong)&param_1->_padding_ + 2);
  pTVar19 = (TReferenceControllerBase<1> *)0x0;
  TDelegate<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FTestData,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
  ::operator=((TDelegate<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FTestData,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
               *)&this->field_0x748,&param_1->_OnGenerateTile);
  TDelegate<void___cdecl(TSharedPtr<FTestData,1>),FDefaultDelegateUserPolicy>::operator=
            ((TDelegate<void___cdecl(TSharedPtr<FTestData,1>),FDefaultDelegateUserPolicy> *)
             &this->field_0x778,&param_1->_OnRefreshTile);
  TDelegate<void___cdecl(TSharedRef<ITableRow,1>_const_&),FDefaultDelegateUserPolicy>::operator=
            ((TDelegate<void___cdecl(TSharedRef<ITableRow,1>_const_&),FDefaultDelegateUserPolicy> *)
             &this->field_0x7c0,&param_1->_OnTileReleased);
  TDelegate<void___cdecl(TSharedPtr<FTestData,1>,TSharedPtr<ITableRow,1>_const_&),FDefaultDelegateUserPolicy>
  ::operator=((TDelegate<void___cdecl(TSharedPtr<FTestData,1>,TSharedPtr<ITableRow,1>_const_&),FDefaultDelegateUserPolicy>
               *)&this->field_0x7d8,&param_1->_OnItemScrolledIntoView);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::operator=
            ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&this->field_0x7f0,
             &param_1->_OnFinishedScrolling);
  pTVar9 = TSharedFromThis<SWidget,1>::AsShared
                     ((TSharedFromThis<SWidget,1> *)&this->field_0x8,&local_6c8);
  pTVar1 = (pTVar9->SharedReferenceCount).ReferenceController;
  pSVar2 = pTVar9->Object;
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_6c8.SharedReferenceCount.ReferenceController);
  }
  else {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_6c8.SharedReferenceCount.ReferenceController);
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_6f8 = pSVar2;
  local_6f0 = pTVar1;
  TVar10 = FArguments::MakeListItemsSource(param_1,(TSharedRef<STableViewBase,1> *)local_628);
  SListView<TSharedPtr<FTestData,1>_>::SetItemsSource
            ((SListView<TSharedPtr<FTestData,1>_> *)this,TVar10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  TDelegate<TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>::operator=
            ((TDelegate<TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy> *)
             &this->field_0x3b8,&param_1->_OnContextMenuOpening);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::operator=
            ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&this->field_0x3d0,
             &param_1->_OnItemsRebuilt);
  TDelegate<void___cdecl(TSharedPtr<FTestData,1>),FDefaultDelegateUserPolicy>::operator=
            ((TDelegate<void___cdecl(TSharedPtr<FTestData,1>),FDefaultDelegateUserPolicy> *)
             &this->field_0x930,&param_1->_OnMouseButtonClick);
  TDelegate<void___cdecl(TSharedPtr<FTestData,1>),FDefaultDelegateUserPolicy>::operator=
            ((TDelegate<void___cdecl(TSharedPtr<FTestData,1>),FDefaultDelegateUserPolicy> *)
             &this->field_0x948,&param_1->_OnMouseButtonDoubleClick);
  TDelegate<void___cdecl(TSharedPtr<FTestData,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
  ::operator=(&this->field_0x900,&param_1->_OnSelectionChanged);
  TDelegate<bool___cdecl(TSharedPtr<FTestData,1>),FDefaultDelegateUserPolicy>::operator=
            ((TDelegate<bool___cdecl(TSharedPtr<FTestData,1>),FDefaultDelegateUserPolicy> *)
             &this->field_0x918,&param_1->_OnIsSelectableOrNavigable);
  TAttribute<enum_ESelectionMode::Type>::operator=(&this->field_0x3e8,&param_1->_SelectionMode);
  this->field_0x99c = param_1->_ClearSelectionOnClick;
  this->field_0x548 = param_1->_AllowOverscroll;
  this->field_0x549 = param_1->_ConsumeMouseWheel;
  *(float *)&this->field_0x444 = param_1->_WheelScrollMultiplier;
  this->field_0x99d = param_1->_HandleGamepadEvents;
  this->field_0x99e = param_1->_HandleDirectionalNavigation;
  this->field_0x978 = (param_1->_IsFocusable).Value;
  this->field_0x979 = (param_1->_IsFocusable).bIsSet;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)&this->field_0x980,
             &(param_1->_IsFocusable).Getter);
  this->field_0x320 = param_1->_EnableAnimatedScrolling;
  if (&param_1->_FixedLineScrollOffset != (TOptional<double> *)&this->field_0x310) {
    if ((param_1->_FixedLineScrollOffset).bIsSet == false) {
      if (this->field_0x318 != '\0') {
        this->field_0x318 = 0;
      }
    }
    else {
      *(double *)&this->field_0x310 = (param_1->_FixedLineScrollOffset).TypedValue;
      this->field_0x318 = 1;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &param_1->_OnItemToString_Debug,&local_5f0);
  if ((*(int *)&(param_1->_OnItemToString_Debug).field_0x10 == 0) ||
     (plVar3 = *(longlong **)&(param_1->_OnItemToString_Debug).field_0x8, plVar3 == (longlong *)0x0)
     ) {
LAB_142f67b62:
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_5f0);
    local_758 = (undefined1  [8])0x0;
    local_750.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_750.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_758,
               (FWriteAccessScope *)&local_678);
    local_660 = &local_750;
    puVar11 = UE::Core::Private::DelegateAllocate(0x20,&local_750);
    if (puVar11 != (undefined8 *)0x0) {
      *puVar11 = &
                 ___7__TCommonDelegateInstanceState___A6A_AVFString__V__TSharedPtr_VFTestData___00___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar12 = FDelegateHandle::GenerateNewID();
      puVar11[2] = uVar12;
      *puVar11 = &
                 ___7__TBaseStaticDelegateInstance___A6A_AVFString__V__TSharedPtr_VFTestData___00___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar11[3] = TListTypeTraits<TSharedPtr<FTestData,1>,void>::DebugDump;
    }
    if (local_678.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_678.Accessor,&local_678);
    }
    TDelegate<FString___cdecl(TSharedPtr<FTestData,1>),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<FString___cdecl(TSharedPtr<FTestData,1>),FDefaultDelegateUserPolicy> *)
               &this->field_0x790,
               (TDelegate<FString___cdecl(TSharedPtr<FTestData,1>),FDefaultDelegateUserPolicy> *)
               local_758);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_758,
               (FWriteAccessScope *)&local_690);
    if ((local_750.DelegateSize != 0) &&
       (local_750.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_750.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_750,0,0,0x10);
      local_750.DelegateSize = 0;
    }
    if (local_690.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_690.Accessor,&local_690);
    }
    if (local_750.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_750.DelegateAllocator);
    }
    this_00 = (FMRSWRecursiveAccessDetector *)local_758;
  }
  else {
    cVar7 = (**(code **)(*plVar3 + 0x38))();
    if (cVar7 == '\0') goto LAB_142f67b62;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_5f0);
    local_740 = (undefined1  [8])0x0;
    local_738.Data = (FScriptContainerElement *)0x0;
    local_730 = 0;
    TDelegate<FString___cdecl(TSharedPtr<FTestData,1>),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<FString___cdecl(TSharedPtr<FTestData,1>),FDefaultDelegateUserPolicy> *)
               local_740,&param_1->_OnItemToString_Debug);
    TDelegate<FString___cdecl(TSharedPtr<FTestData,1>),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<FString___cdecl(TSharedPtr<FTestData,1>),FDefaultDelegateUserPolicy> *)
               &this->field_0x790,
               (TDelegate<FString___cdecl(TSharedPtr<FTestData,1>),FDefaultDelegateUserPolicy> *)
               local_740);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_740,
               (FWriteAccessScope *)&local_6a8);
    if ((local_730 != 0) && (local_738.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_738.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_738,0,0,0x10);
      local_730 = 0;
    }
    if (local_6a8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_6a8.Accessor,&local_6a8);
    }
    if (local_738.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_738.Data);
    }
    this_00 = (FMRSWRecursiveAccessDetector *)local_740;
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this_00);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::operator=
            ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&this->field_0x7a8,
             &param_1->_OnEnteredBadState);
  this->bWrapHorizontalNavigation = param_1->_WrapHorizontalNavigation;
  local_728.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_728.Data.ArrayNum = 0;
  local_728.Data.ArrayMax = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->field_0x748,&local_5d8
            );
  if ((*(int *)&this->field_0x758 != 0) && (*(longlong **)&this->field_0x750 != (longlong *)0x0)) {
    cVar7 = (**(code **)(**(longlong **)&this->field_0x750 + 0x38))();
    if (cVar7 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_5d8);
      goto LAB_142f67cee;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_5d8);
  ::FString::AppendChars(&local_728,L"Please specify an OnGenerateTile. \n",0x23);
LAB_142f67cee:
  if (*(longlong *)&this->field_0x9f8 == 0) {
    ::FString::AppendChars(&local_728,L"Please specify a ListItemsSource. \n",0x23);
  }
  iVar18 = local_728.Data.ArrayNum + -1;
  if (local_728.Data.ArrayNum == 0) {
    iVar18 = 0;
  }
  if (iVar18 < 1) {
    local_6b8.Object = (SHeaderRow *)0x0;
    local_6b8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    STableViewBase::ConstructChildren
              ((STableViewBase *)this,&param_1->_ItemWidth,&param_1->_ItemHeight,
               &param_1->_ItemAlignment,&local_6b8,&param_1->_ExternalScrollbar,
               param_1->_Orientation,&param_1->_OnTileViewScrolled,param_1->_ScrollBarStyle,false);
    TSharedPtr<SHeaderRow,1>::~TSharedPtr<SHeaderRow,1>(&local_6b8);
    if (*(SScrollBar **)&this->field_0x2d8 != (SScrollBar *)0x0) {
      SScrollBar::SetDragFocusCause
                (*(SScrollBar **)&this->field_0x2d8,param_1->_ScrollbarDragFocusCause);
      if (*(longlong *)&this->field_0x2d8 == 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      local_718 = (param_1->_ScrollbarVisibility).Value.Value.Value;
      lVar5 = *(longlong *)&this->field_0x2d8;
      local_717 = (param_1->_ScrollbarVisibility).bIsSet;
      local_710 = (undefined1  [8])0x0;
      pvStack_708 = (void *)0x0;
      local_700 = 0;
      TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
      CopyFrom<FDefaultDelegateUserPolicy>
                ((TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *)local_710,
                 &(param_1->_ScrollbarVisibility).Getter);
      *(uchar *)(lVar5 + 0x2e0) = local_718;
      *(undefined1 *)(lVar5 + 0x2e1) = local_717;
      TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
      CopyFrom<FDefaultDelegateUserPolicy>
                ((TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *)(lVar5 + 0x2e8),
                 (TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *)local_710);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_710);
      if (pvStack_708 != (void *)0x0) {
        FMemory::Free(pvStack_708);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_710);
      if (*(longlong *)&this->field_0x2d8 == 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      SScrollBar::SetScrollbarDisabledVisibility
                (*(SScrollBar **)&this->field_0x2d8,
                 (EVisibility)(param_1->_ScrollbarDisabledVisibility).Value.Value);
    }
    pTVar9 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&this->field_0x8,&local_600);
    pTVar1 = (pTVar9->SharedReferenceCount).ReferenceController;
    pSVar2 = pTVar9->Object;
    if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
      paVar21 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar21 = &pTVar1->SharedReferenceCount;
      LOCK();
      *paVar21 = (atomic<int>)((int)*paVar21 + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_600.SharedReferenceCount.ReferenceController);
    pTVar17 = ::operator_new(0x28);
    if (pTVar17 == (TReferenceControllerBase<1> *)0x0) {
      local_6d8.Object = (ISlateMetaData *)___xmm_00000000000000000000000000000010;
      local_6d8.SharedReferenceCount.ReferenceController = _UNK_150651568;
    }
    else {
      pTVar17->SharedReferenceCount = (atomic<int>)0x1;
      pTVar17->WeakReferenceCount = (atomic<int>)0x1;
      pTVar17->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_V__TTableViewMetadata_V__TSharedPtr_VFTestData___00_____00_SharedPointerInternals__6B_
      ;
      if (pSVar2 != (SWidget *)0x0) {
        pTVar19 = (TReferenceControllerBase<1> *)
                  &pSVar2[2].PersistentState.CachedElementHandle.Ptr.WeakReferenceCount;
      }
      if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
        pTVar17[1]._padding_ =
             (longlong)&___7__TTableViewMetadata_V__TSharedPtr_VFTestData___00____6B_;
        *(TReferenceControllerBase<1> **)&pTVar17[1].SharedReferenceCount = pTVar19;
        pTVar17[2]._padding_ = 0;
      }
      else {
        LOCK();
        *paVar21 = (atomic<int>)((int)*paVar21 + 1);
        UNLOCK();
        pTVar17[1]._padding_ =
             (longlong)&___7__TTableViewMetadata_V__TSharedPtr_VFTestData___00____6B_;
        *(TReferenceControllerBase<1> **)&pTVar17[1].SharedReferenceCount = pTVar19;
        pTVar17[2]._padding_ = (longlong)pTVar1;
        LOCK();
        pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      local_6d8.Object = (ISlateMetaData *)(pTVar17 + 1);
      if ((TReferenceControllerBase<1> *)local_6d8.Object == (TReferenceControllerBase<1> *)0x0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L"");
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      LOCK();
      pTVar17->SharedReferenceCount = (atomic<int>)((int)pTVar17->SharedReferenceCount + 1);
      UNLOCK();
      pTVar19 = pTVar17;
      local_6d8.SharedReferenceCount.ReferenceController = pTVar17;
    }
    SWidget::AddMetadataInternal((SWidget *)this,&local_6d8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_6d8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar19);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  }
  else {
    puVar20 = &this->field_0x268;
    *(undefined4 *)puVar20 = 2;
    puVar13 = (undefined4 *)&this->field_0x26c;
    if (puVar20 == (undefined1 *)0x0) {
      puVar13 = (undefined4 *)&DAT_00000054;
    }
    *puVar13 = 2;
    pFVar14 = STextBlock::FArguments::FArguments(&local_5a8);
    pFVar15 = FText::FromString(&local_610,&local_728);
    FText::FText(&local_658.Value,pFVar15);
    local_658.bIsSet = true;
    local_658.Getter._16_8_ = 0;
    local_658.Getter._0_8_ = 0;
    local_658.Getter._8_8_ = 0;
    pFVar14 = STextBlock::FArguments::Text(pFVar14,&local_658);
    FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_res18 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_res20,&local_res18,true);
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
              (&local_5c0,"STextBlock",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\STileView.h"
               ,0xd8,local_res8);
    FMemScope::~FMemScope(&local_res20);
    FLLMScope::~FLLMScope(local_res10);
    pTVar16 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                        (&local_5c0,(TSharedRef<STextBlock,1> *)(local_628 + 8),pFVar14);
    this_01 = (FSlotBase *)&this->field_0x238;
    pTVar19 = (pTVar16->SharedReferenceCount).ReferenceController;
    pSVar4 = pTVar16->Object;
    if (pTVar19 == (TReferenceControllerBase<1> *)0x0) {
      if (puVar20 == (undefined1 *)0x0) {
        this_01 = (FSlotBase *)&DAT_00000020;
      }
      FSlotBase::DetatchParentFromContent(this_01);
    }
    else {
      LOCK();
      pTVar19->SharedReferenceCount = (atomic<int>)((int)pTVar19->SharedReferenceCount + 1);
      UNLOCK();
      if (puVar20 == (undefined1 *)0x0) {
        this_01 = (FSlotBase *)&DAT_00000020;
      }
      FSlotBase::DetatchParentFromContent(this_01);
      LOCK();
      pTVar19->SharedReferenceCount = (atomic<int>)((int)pTVar19->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar1 = (this_01->Widget).SharedReferenceCount.ReferenceController;
    (this_01->Widget).Object = (SWidget *)pSVar4;
    (this_01->Widget).SharedReferenceCount.ReferenceController = pTVar19;
    local_6e8 = pSVar4;
    pTStack_6e0 = pTVar19;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    FSlotBase::AfterContentOrOwnerAssigned(this_01);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar19);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_618);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_5c0._Widget.SharedReferenceCount.ReferenceController);
    if (local_610.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_610.TextData.Reference + 0x10))();
    }
    STextBlock::FArguments::~FArguments(&local_5a8);
  }
  if (local_728.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_728.Data.AllocatorInstance.Data);
  }
  return;
}

// GetNumItemsBeingObserved @ 142fd4260

int __thiscall
STileView<TSharedPtr<int,1>_>::GetNumItemsBeingObserved(STileView<TSharedPtr<int,1>_> *this)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 local_18;
  ulonglong uStack_10;
  
  plVar1 = *(longlong **)&this->field_0x9f8;
  if (plVar1 == (longlong *)0x0) {
    local_18 = 0;
    puVar4 = &local_18;
    uStack_10 = uStack_10 & 0xffffffff00000000;
  }
  else {
    puVar4 = (undefined8 *)(**(code **)(*plVar1 + 8))(plVar1,&local_18);
  }
  local_18 = *puVar4;
  uStack_10 = puVar4[1];
  iVar3 = (**(code **)(*(longlong *)this + 0x270))(this);
  iVar2 = (int)uStack_10;
  if (0 < iVar3) {
    iVar5 = iVar3 - (int)((longlong)
                          ((ulonglong)(uint)(iVar2 >> 0x1f) << 0x20 | uStack_10 & 0xffffffff) %
                         (longlong)iVar3);
    if (iVar3 <= iVar5) {
      iVar5 = 0;
    }
    return iVar2 + iVar5;
  }
  return iVar2;
}

// GetNumItemsBeingObserved @ 142fd4300

int __thiscall
STileView<TSharedPtr<FTestData,1>_>::GetNumItemsBeingObserved
          (STileView<TSharedPtr<FTestData,1>_> *this)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 local_18;
  ulonglong uStack_10;
  
  plVar1 = *(longlong **)&this->field_0x9f8;
  if (plVar1 == (longlong *)0x0) {
    local_18 = 0;
    puVar4 = &local_18;
    uStack_10 = uStack_10 & 0xffffffff00000000;
  }
  else {
    puVar4 = (undefined8 *)(**(code **)(*plVar1 + 8))(plVar1,&local_18);
  }
  local_18 = *puVar4;
  uStack_10 = puVar4[1];
  iVar3 = (**(code **)(*(longlong *)this + 0x270))(this);
  iVar2 = (int)uStack_10;
  if (0 < iVar3) {
    iVar5 = iVar3 - (int)((longlong)
                          ((ulonglong)(uint)(iVar2 >> 0x1f) << 0x20 | uStack_10 & 0xffffffff) %
                         (longlong)iVar3);
    if (iVar3 <= iVar5) {
      iVar5 = 0;
    }
    return iVar2 + iVar5;
  }
  return iVar2;
}

// GetNumItemsPerLine @ 142fd43a0

/* WARNING: Removing unreachable block (ram,0x000142fd4440) */

int __thiscall
STileView<TSharedPtr<int,1>_>::GetNumItemsPerLine(STileView<TSharedPtr<int,1>_> *this)

{
  int iVar1;
  float fVar2;
  float fVar3;
  FDeprecateVector2DParameter local_res8 [4];
  FTableViewDimensions local_38;
  FTableViewDimensions local_28 [2];
  
  local_res8[0] = *(FDeprecateVector2DParameter *)&this->field_0x37c;
  FTableViewDimensions::FTableViewDimensions
            (local_28,*(EOrientation *)&this->field_0x44c,local_res8);
  fVar2 = STableViewBase::GetItemHeight((STableViewBase *)this);
  fVar3 = STableViewBase::GetItemWidth((STableViewBase *)this);
  FTableViewDimensions::FTableViewDimensions
            (&local_38,*(EOrientation *)&this->field_0x44c,fVar3,fVar2);
  if (local_38.LineAxis <= 0.0) {
    return 1;
  }
  iVar1 = (int)ROUND((local_28[0].LineAxis / local_38.LineAxis +
                     local_28[0].LineAxis / local_38.LineAxis) - __real_3f000000) >> 1;
  if (iVar1 < 1) {
    iVar1 = 1;
  }
  return iVar1;
}

// GetNumItemsPerLine @ 142fd4450

/* WARNING: Removing unreachable block (ram,0x000142fd44f0) */

int __thiscall
STileView<TSharedPtr<FTestData,1>_>::GetNumItemsPerLine(STileView<TSharedPtr<FTestData,1>_> *this)

{
  int iVar1;
  float fVar2;
  float fVar3;
  FDeprecateVector2DParameter local_res8 [4];
  FTableViewDimensions local_38;
  FTableViewDimensions local_28 [2];
  
  local_res8[0] = *(FDeprecateVector2DParameter *)&this->field_0x37c;
  FTableViewDimensions::FTableViewDimensions
            (local_28,*(EOrientation *)&this->field_0x44c,local_res8);
  fVar2 = STableViewBase::GetItemHeight((STableViewBase *)this);
  fVar3 = STableViewBase::GetItemWidth((STableViewBase *)this);
  FTableViewDimensions::FTableViewDimensions
            (&local_38,*(EOrientation *)&this->field_0x44c,fVar3,fVar2);
  if (local_38.LineAxis <= 0.0) {
    return 1;
  }
  iVar1 = (int)ROUND((local_28[0].LineAxis / local_38.LineAxis +
                     local_28[0].LineAxis / local_38.LineAxis) - __real_3f000000) >> 1;
  if (iVar1 < 1) {
    iVar1 = 1;
  }
  return iVar1;
}

// OnNavigation @ 142ff6dd0

FNavigationReply * __thiscall
STileView<TSharedPtr<int,1>_>::OnNavigation
          (STileView<TSharedPtr<int,1>_> *this,FNavigationReply *__return_storage_ptr__,
          FGeometry *param_1,FNavigationEvent *param_2)

{
  EUINavigation EVar1;
  int *piVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  SWidget *pSVar5;
  int iVar6;
  longlong *plVar7;
  TSharedPtr<int,1> *pTVar8;
  int iVar9;
  SWidget *pSVar10;
  ulonglong uVar11;
  int iVar12;
  undefined1 local_48 [8];
  FSharedReferencer<1> FStack_40;
  
  uVar11 = 0;
  plVar7 = *(longlong **)&this->field_0x9f8;
  if (((plVar7 == (longlong *)0x0) || (this->field_0x99e == '\0')) ||
     ((this->field_0x99d == '\0' && (param_2->NavigationGenesis == Controller))))
  goto LAB_142ff6ec4;
  plVar7 = (longlong *)(**(code **)(*plVar7 + 8))(plVar7,local_48);
  pSVar5 = (SWidget *)*plVar7;
  pTVar3 = (TReferenceControllerBase<1> *)plVar7[1];
  local_48 = (undefined1  [8])pSVar5;
  FStack_40.ReferenceController = pTVar3;
  iVar6 = (**(code **)(*(longlong *)this + 0x270))(this);
  piVar2 = *(int **)&this->field_0x858;
  iVar12 = (int)pTVar3;
  if (piVar2 != (int *)0x0) {
    pTVar3 = *(TReferenceControllerBase<1> **)&this->field_0x860;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    for (pSVar10 = pSVar5; pSVar10 != (SWidget *)(&pSVar5->_padding_ + (longlong)iVar12 * 2);
        pSVar10 = (SWidget *)&pSVar10->_padding_) {
      if ((int *)pSVar10->_padding_ == piVar2) {
        uVar11 = (longlong)pSVar10 - (longlong)pSVar5 >> 4;
        goto LAB_142ff6ea3;
      }
    }
    uVar11 = 0xffffffff;
LAB_142ff6ea3:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  EVar1 = param_2->NavigationType;
  iVar9 = (int)uVar11;
  if (*(int *)&this->field_0x44c == 1) {
    if (EVar1 != Left) {
      if (EVar1 != Right) goto LAB_142ff6ec4;
      goto LAB_142ff6f1f;
    }
LAB_142ff6f03:
    if ((this->bWrapHorizontalNavigation == false) &&
       ((int)((longlong)((ulonglong)(uint)(iVar9 >> 0x1f) << 0x20 | uVar11 & 0xffffffff) %
             (longlong)iVar6) < 1)) goto LAB_142ff6ec4;
    iVar9 = iVar9 + -1;
  }
  else {
    if (*(int *)&this->field_0x44c != 0) goto LAB_142ff6ec4;
    if (EVar1 == Up) goto LAB_142ff6f03;
    if (EVar1 != Down) goto LAB_142ff6ec4;
LAB_142ff6f1f:
    if ((this->bWrapHorizontalNavigation == false) &&
       (iVar6 + -1 <=
        (int)((longlong)((ulonglong)(uint)(iVar9 >> 0x1f) << 0x20 | uVar11 & 0xffffffff) %
             (longlong)iVar6))) goto LAB_142ff6ec4;
    iVar9 = iVar9 + 1;
  }
  if (((-1 < iVar9) && (iVar9 < iVar12)) && (this->field_0x449 != '\0')) {
    pcVar4 = *(code **)(*(longlong *)this + 0x2e0);
    pTVar8 = TArrayView<TSharedPtr<int,1>_const_,int>::operator[]
                       ((TArrayView<TSharedPtr<int,1>_const_,int> *)local_48,iVar9);
    (*pcVar4)(this,pTVar8,param_2);
    local_48 = (undefined1  [8])0x0;
    FStack_40.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    FNavigationReply::Explicit(__return_storage_ptr__,(TSharedPtr<SWidget,1> *)local_48);
    return __return_storage_ptr__;
  }
LAB_142ff6ec4:
  SListView<TSharedPtr<int,1>_>::OnNavigation
            ((SListView<TSharedPtr<int,1>_> *)this,__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// OnNavigation @ 142ff6f90

FNavigationReply * __thiscall
STileView<TSharedPtr<FTestData,1>_>::OnNavigation
          (STileView<TSharedPtr<FTestData,1>_> *this,FNavigationReply *__return_storage_ptr__,
          FGeometry *param_1,FNavigationEvent *param_2)

{
  EUINavigation EVar1;
  FTestData *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  SWidget *pSVar5;
  int iVar6;
  longlong *plVar7;
  TSharedPtr<FTestData,1> *pTVar8;
  int iVar9;
  SWidget *pSVar10;
  ulonglong uVar11;
  int iVar12;
  undefined1 local_48 [8];
  FSharedReferencer<1> FStack_40;
  
  uVar11 = 0;
  plVar7 = *(longlong **)&this->field_0x9f8;
  if (((plVar7 == (longlong *)0x0) || (this->field_0x99e == '\0')) ||
     ((this->field_0x99d == '\0' && (param_2->NavigationGenesis == Controller))))
  goto LAB_142ff7084;
  plVar7 = (longlong *)(**(code **)(*plVar7 + 8))(plVar7,local_48);
  pSVar5 = (SWidget *)*plVar7;
  pTVar3 = (TReferenceControllerBase<1> *)plVar7[1];
  local_48 = (undefined1  [8])pSVar5;
  FStack_40.ReferenceController = pTVar3;
  iVar6 = (**(code **)(*(longlong *)this + 0x270))(this);
  pFVar2 = *(FTestData **)&this->field_0x858;
  iVar12 = (int)pTVar3;
  if (pFVar2 != (FTestData *)0x0) {
    pTVar3 = *(TReferenceControllerBase<1> **)&this->field_0x860;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    for (pSVar10 = pSVar5; pSVar10 != (SWidget *)(&pSVar5->_padding_ + (longlong)iVar12 * 2);
        pSVar10 = (SWidget *)&pSVar10->_padding_) {
      if ((FTestData *)pSVar10->_padding_ == pFVar2) {
        uVar11 = (longlong)pSVar10 - (longlong)pSVar5 >> 4;
        goto LAB_142ff7063;
      }
    }
    uVar11 = 0xffffffff;
LAB_142ff7063:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  EVar1 = param_2->NavigationType;
  iVar9 = (int)uVar11;
  if (*(int *)&this->field_0x44c == 1) {
    if (EVar1 != Left) {
      if (EVar1 != Right) goto LAB_142ff7084;
      goto LAB_142ff70df;
    }
LAB_142ff70c3:
    if ((this->bWrapHorizontalNavigation == false) &&
       ((int)((longlong)((ulonglong)(uint)(iVar9 >> 0x1f) << 0x20 | uVar11 & 0xffffffff) %
             (longlong)iVar6) < 1)) goto LAB_142ff7084;
    iVar9 = iVar9 + -1;
  }
  else {
    if (*(int *)&this->field_0x44c != 0) goto LAB_142ff7084;
    if (EVar1 == Up) goto LAB_142ff70c3;
    if (EVar1 != Down) goto LAB_142ff7084;
LAB_142ff70df:
    if ((this->bWrapHorizontalNavigation == false) &&
       (iVar6 + -1 <=
        (int)((longlong)((ulonglong)(uint)(iVar9 >> 0x1f) << 0x20 | uVar11 & 0xffffffff) %
             (longlong)iVar6))) goto LAB_142ff7084;
    iVar9 = iVar9 + 1;
  }
  if (((-1 < iVar9) && (iVar9 < iVar12)) && (this->field_0x449 != '\0')) {
    pcVar4 = *(code **)(*(longlong *)this + 0x2e0);
    pTVar8 = TArrayView<TSharedPtr<FTestData,1>_const_,int>::operator[]
                       ((TArrayView<TSharedPtr<FTestData,1>_const_,int> *)local_48,iVar9);
    (*pcVar4)(this,pTVar8,param_2);
    local_48 = (undefined1  [8])0x0;
    FStack_40.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    FNavigationReply::Explicit(__return_storage_ptr__,(TSharedPtr<SWidget,1> *)local_48);
    return __return_storage_ptr__;
  }
LAB_142ff7084:
  SListView<TSharedPtr<FTestData,1>_>::OnNavigation
            ((SListView<TSharedPtr<FTestData,1>_> *)this,__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// ReGenerateItems @ 143003ad0

FReGenerateResults * __thiscall
STileView<TSharedPtr<int,1>_>::ReGenerateItems
          (STileView<TSharedPtr<int,1>_> *this,FReGenerateResults *__return_storage_ptr__,
          FGeometry *param_1)

{
  ulonglong uVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  bool bVar6;
  bool bVar7;
  float fVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  longlong *plVar13;
  FReGenerateResults *pFVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  TSharedPtr<int,1> *pTVar19;
  uint uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar24 [16];
  double dVar25;
  FDeprecateSlateVector2D local_118;
  FWidgetGenerator *local_110;
  FTableViewDimensions local_108;
  FTableViewDimensions local_f8;
  FTableViewDimensions local_e8;
  longlong local_d8;
  undefined4 uStack_d0;
  longlong local_c8;
  longlong lStack_c0;
  undefined1 local_b8 [128];
  
  STableViewBase::ClearWidgets((STableViewBase *)this);
  plVar13 = *(longlong **)&this->field_0x9f8;
  bVar10 = false;
  if (plVar13 == (longlong *)0x0) {
    local_d8 = 0;
    plVar13 = &local_d8;
    uStack_d0 = 0;
  }
  else {
    plVar13 = (longlong *)(**(code **)(*plVar13 + 8))(plVar13,local_b8);
  }
  local_c8 = *plVar13;
  lStack_c0 = plVar13[1];
  uVar1 = plVar13[1];
  iVar18 = (int)uVar1;
  if (iVar18 < 1) {
    __return_storage_ptr__->NewScrollOffset = 0.0;
    __return_storage_ptr__->LengthOfGeneratedItems = 0.0;
    __return_storage_ptr__->ExactNumLinesOnScreen = 0.0;
    __return_storage_ptr__->bGeneratedPastLastItem = false;
  }
  else {
    fVar21 = STableViewBase::GetItemHeight((STableViewBase *)this);
    fVar22 = STableViewBase::GetItemWidth((STableViewBase *)this);
    FTableViewDimensions::FTableViewDimensions
              (&local_e8,*(EOrientation *)&this->field_0x44c,fVar22,fVar21);
    local_118 = param_1->Size;
    FTableViewDimensions::FTableViewDimensions
              (&local_f8,*(EOrientation *)&this->field_0x44c,
               (FDeprecateVector2DParameter *)&local_118);
    iVar11 = (**(code **)(*(longlong *)this + 0x270))(this);
    fVar21 = param_1->Scale;
    dVar4 = 0.0;
    iVar16 = (int)((longlong)((ulonglong)(uint)(iVar18 >> 0x1f) << 0x20 | uVar1 & 0xffffffff) %
                  (longlong)iVar11);
    iVar15 = iVar18;
    if (iVar16 != 0) {
      iVar15 = (iVar18 - iVar16) + iVar11;
    }
    dVar25 = (double)iVar15 - (double)(local_f8.ScrollAxis / local_e8.ScrollAxis) * (double)iVar11;
    if (*(double *)&this->field_0x330 <= dVar25) {
      dVar25 = *(double *)&this->field_0x330;
    }
    if (dVar25 <= 0.0) {
      dVar25 = 0.0;
    }
    FTableViewDimensions::FTableViewDimensions(&local_108,*(EOrientation *)&this->field_0x44c);
    local_110 = (FWidgetGenerator *)&this->field_0x590;
    dVar5 = dVar25 / (double)iVar11;
    uVar20 = ((int)ROUND((dVar5 + dVar5) - __real_3fe0000000000000) >> 1) * iVar11;
    if ((int)uVar20 < 0) {
      uVar20 = 0;
    }
    SListView<TSharedPtr<int,1>_>::FWidgetGenerator::OnBeginGenerationPass(local_110);
    fVar8 = __real_3a83126f;
    fVar22 = __real_3f800000;
    bVar7 = true;
    bVar6 = true;
    bVar9 = false;
    uVar17 = uVar20;
    do {
      if (iVar18 <= (int)uVar17) break;
      uVar12 = 0;
      if ((int)uVar17 < iVar18) {
        uVar12 = ~uVar17 >> 0x1f;
      }
      if (uVar12 == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar9) {
          pcVar2 = (code *)swi(3);
          pFVar14 = (FReGenerateResults *)(*pcVar2)();
          return pFVar14;
        }
      }
      pTVar19 = (TSharedPtr<int,1> *)((longlong)(int)uVar17 * 0x10 + local_c8);
      if (bVar7) {
        bVar7 = false;
        fVar23 = fVar22;
        if (bVar6) {
          bVar6 = false;
          dVar3 = (double)trunc(SUB84(dVar5,0));
          fVar23 = fVar22 - (float)(dVar5 - dVar3);
        }
        local_108.ScrollAxis = fVar23 * local_e8.ScrollAxis + local_108.ScrollAxis;
        if ((local_f8.ScrollAxis < local_108.ScrollAxis) &&
           (fVar23 = fVar22 - (local_108.ScrollAxis - local_f8.ScrollAxis) / local_e8.ScrollAxis,
           fVar23 <= 0.0)) {
          fVar23 = 0.0;
        }
        dVar4 = dVar4 + (double)fVar23;
      }
      SListView<TSharedPtr<int,1>_>::GenerateWidgetForItem
                ((SListView<TSharedPtr<int,1>_> *)this,pTVar19,uVar17,uVar20,fVar21);
      local_108.LineAxis = local_108.LineAxis + local_e8.LineAxis;
      bVar9 = iVar18 + -1 <= (int)uVar17;
      if (local_f8.LineAxis < local_108.LineAxis + local_e8.LineAxis) {
        local_108.LineAxis = 0.0;
        bVar7 = true;
      }
      if ((iVar18 + -1 <= (int)uVar17) || (bVar7)) {
        bVar10 = local_f8.ScrollAxis + fVar8 < local_108.ScrollAxis;
      }
      uVar17 = uVar17 + 1;
    } while (!bVar10);
    SListView<TSharedPtr<int,1>_>::FWidgetGenerator::ProcessItemCleanUp(local_110);
    SListView<TSharedPtr<int,1>_>::FWidgetGenerator::ValidateWidgetGeneration(local_110);
    auVar24._8_8_ = 0;
    auVar24._0_8_ = dVar4;
    auVar24 = roundpd(auVar24,auVar24,2);
    if ((!bVar9) || (bVar10)) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    __return_storage_ptr__->bGeneratedPastLastItem = bVar10;
    __return_storage_ptr__->NewScrollOffset = dVar25;
    __return_storage_ptr__->ExactNumLinesOnScreen = dVar4;
    __return_storage_ptr__->LengthOfGeneratedItems =
         (double)(float)((double)local_e8.ScrollAxis * auVar24._0_8_);
  }
  return __return_storage_ptr__;
}

// ReGenerateItems @ 143003ed0

FReGenerateResults * __thiscall
STileView<TSharedPtr<FTestData,1>_>::ReGenerateItems
          (STileView<TSharedPtr<FTestData,1>_> *this,FReGenerateResults *__return_storage_ptr__,
          FGeometry *param_1)

{
  ulonglong uVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  bool bVar6;
  bool bVar7;
  float fVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  longlong *plVar13;
  FReGenerateResults *pFVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  TSharedPtr<FTestData,1> *pTVar19;
  uint uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar24 [16];
  double dVar25;
  FDeprecateSlateVector2D local_118;
  FWidgetGenerator *local_110;
  FTableViewDimensions local_108;
  FTableViewDimensions local_f8;
  FTableViewDimensions local_e8;
  longlong local_d8;
  undefined4 uStack_d0;
  longlong local_c8;
  longlong lStack_c0;
  undefined1 local_b8 [128];
  
  STableViewBase::ClearWidgets((STableViewBase *)this);
  plVar13 = *(longlong **)&this->field_0x9f8;
  bVar10 = false;
  if (plVar13 == (longlong *)0x0) {
    local_d8 = 0;
    plVar13 = &local_d8;
    uStack_d0 = 0;
  }
  else {
    plVar13 = (longlong *)(**(code **)(*plVar13 + 8))(plVar13,local_b8);
  }
  local_c8 = *plVar13;
  lStack_c0 = plVar13[1];
  uVar1 = plVar13[1];
  iVar18 = (int)uVar1;
  if (iVar18 < 1) {
    __return_storage_ptr__->NewScrollOffset = 0.0;
    __return_storage_ptr__->LengthOfGeneratedItems = 0.0;
    __return_storage_ptr__->ExactNumLinesOnScreen = 0.0;
    __return_storage_ptr__->bGeneratedPastLastItem = false;
  }
  else {
    fVar21 = STableViewBase::GetItemHeight((STableViewBase *)this);
    fVar22 = STableViewBase::GetItemWidth((STableViewBase *)this);
    FTableViewDimensions::FTableViewDimensions
              (&local_e8,*(EOrientation *)&this->field_0x44c,fVar22,fVar21);
    local_118 = param_1->Size;
    FTableViewDimensions::FTableViewDimensions
              (&local_f8,*(EOrientation *)&this->field_0x44c,
               (FDeprecateVector2DParameter *)&local_118);
    iVar11 = (**(code **)(*(longlong *)this + 0x270))(this);
    fVar21 = param_1->Scale;
    dVar4 = 0.0;
    iVar16 = (int)((longlong)((ulonglong)(uint)(iVar18 >> 0x1f) << 0x20 | uVar1 & 0xffffffff) %
                  (longlong)iVar11);
    iVar15 = iVar18;
    if (iVar16 != 0) {
      iVar15 = (iVar18 - iVar16) + iVar11;
    }
    dVar25 = (double)iVar15 - (double)(local_f8.ScrollAxis / local_e8.ScrollAxis) * (double)iVar11;
    if (*(double *)&this->field_0x330 <= dVar25) {
      dVar25 = *(double *)&this->field_0x330;
    }
    if (dVar25 <= 0.0) {
      dVar25 = 0.0;
    }
    FTableViewDimensions::FTableViewDimensions(&local_108,*(EOrientation *)&this->field_0x44c);
    local_110 = (FWidgetGenerator *)&this->field_0x590;
    dVar5 = dVar25 / (double)iVar11;
    uVar20 = ((int)ROUND((dVar5 + dVar5) - __real_3fe0000000000000) >> 1) * iVar11;
    if ((int)uVar20 < 0) {
      uVar20 = 0;
    }
    SListView<TSharedPtr<FTestData,1>_>::FWidgetGenerator::OnBeginGenerationPass(local_110);
    fVar8 = __real_3a83126f;
    fVar22 = __real_3f800000;
    bVar7 = true;
    bVar6 = true;
    bVar9 = false;
    uVar17 = uVar20;
    do {
      if (iVar18 <= (int)uVar17) break;
      uVar12 = 0;
      if ((int)uVar17 < iVar18) {
        uVar12 = ~uVar17 >> 0x1f;
      }
      if (uVar12 == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar9) {
          pcVar2 = (code *)swi(3);
          pFVar14 = (FReGenerateResults *)(*pcVar2)();
          return pFVar14;
        }
      }
      pTVar19 = (TSharedPtr<FTestData,1> *)((longlong)(int)uVar17 * 0x10 + local_c8);
      if (bVar7) {
        bVar7 = false;
        fVar23 = fVar22;
        if (bVar6) {
          bVar6 = false;
          dVar3 = (double)trunc(SUB84(dVar5,0));
          fVar23 = fVar22 - (float)(dVar5 - dVar3);
        }
        local_108.ScrollAxis = fVar23 * local_e8.ScrollAxis + local_108.ScrollAxis;
        if ((local_f8.ScrollAxis < local_108.ScrollAxis) &&
           (fVar23 = fVar22 - (local_108.ScrollAxis - local_f8.ScrollAxis) / local_e8.ScrollAxis,
           fVar23 <= 0.0)) {
          fVar23 = 0.0;
        }
        dVar4 = dVar4 + (double)fVar23;
      }
      SListView<TSharedPtr<FTestData,1>_>::GenerateWidgetForItem
                ((SListView<TSharedPtr<FTestData,1>_> *)this,pTVar19,uVar17,uVar20,fVar21);
      local_108.LineAxis = local_108.LineAxis + local_e8.LineAxis;
      bVar9 = iVar18 + -1 <= (int)uVar17;
      if (local_f8.LineAxis < local_108.LineAxis + local_e8.LineAxis) {
        local_108.LineAxis = 0.0;
        bVar7 = true;
      }
      if ((iVar18 + -1 <= (int)uVar17) || (bVar7)) {
        bVar10 = local_f8.ScrollAxis + fVar8 < local_108.ScrollAxis;
      }
      uVar17 = uVar17 + 1;
    } while (!bVar10);
    SListView<TSharedPtr<FTestData,1>_>::FWidgetGenerator::ProcessItemCleanUp(local_110);
    SListView<TSharedPtr<FTestData,1>_>::FWidgetGenerator::ValidateWidgetGeneration(local_110);
    auVar24._8_8_ = 0;
    auVar24._0_8_ = dVar4;
    auVar24 = roundpd(auVar24,auVar24,2);
    if ((!bVar9) || (bVar10)) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    __return_storage_ptr__->bGeneratedPastLastItem = bVar10;
    __return_storage_ptr__->NewScrollOffset = dVar25;
    __return_storage_ptr__->ExactNumLinesOnScreen = dVar4;
    __return_storage_ptr__->LengthOfGeneratedItems =
         (double)(float)((double)local_e8.ScrollAxis * auVar24._0_8_);
  }
  return __return_storage_ptr__;
}

// ScrollBy @ 143009b90

float __thiscall
STileView<TSharedPtr<int,1>_>::ScrollBy
          (STileView<TSharedPtr<int,1>_> *this,FGeometry *param_1,float param_2,
          EAllowOverscroll param_3)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  FTableViewDimensions local_38 [4];
  
  if ((*(double *)&this->field_0x338 == 0.0) && (this->field_0x378 != '\0')) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((param_3 == Yes) &&
     (bVar2 = FOverscroll::ShouldApplyOverscroll
                        ((FOverscroll *)&this->field_0x544,*(double *)&this->field_0x338 == 0.0,
                         (bool)this->field_0x378,param_2), bVar2)) {
    iVar3 = (**(code **)(*(longlong *)this + 0x270))(this);
    fVar4 = FOverscroll::ScrollBy((FOverscroll *)&this->field_0x544,param_1,param_2 / (float)iVar3);
    if (fVar4 != 0.0) {
      (**(code **)(*(longlong *)this + 0x248))(this);
    }
  }
  else if (bVar1) {
    fVar4 = 0.0;
  }
  else {
    fVar4 = STableViewBase::GetItemHeight((STableViewBase *)this);
    fVar5 = STableViewBase::GetItemWidth((STableViewBase *)this);
    FTableViewDimensions::FTableViewDimensions
              (local_38,*(EOrientation *)&this->field_0x44c,fVar5,fVar4);
    iVar3 = (**(code **)(*(longlong *)this + 0x270))(this);
    fVar4 = (float)(**(code **)(*(longlong *)this + 0x260))
                             (this,(float)((double)(((float)iVar3 * param_2) /
                                                   local_38[0].ScrollAxis) +
                                          *(double *)&this->field_0x338));
  }
  return fVar4;
}

// ScrollBy @ 143009ce0

float __thiscall
STileView<TSharedPtr<FTestData,1>_>::ScrollBy
          (STileView<TSharedPtr<FTestData,1>_> *this,FGeometry *param_1,float param_2,
          EAllowOverscroll param_3)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  FTableViewDimensions local_38 [4];
  
  if ((*(double *)&this->field_0x338 == 0.0) && (this->field_0x378 != '\0')) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((param_3 == Yes) &&
     (bVar2 = FOverscroll::ShouldApplyOverscroll
                        ((FOverscroll *)&this->field_0x544,*(double *)&this->field_0x338 == 0.0,
                         (bool)this->field_0x378,param_2), bVar2)) {
    iVar3 = (**(code **)(*(longlong *)this + 0x270))(this);
    fVar4 = FOverscroll::ScrollBy((FOverscroll *)&this->field_0x544,param_1,param_2 / (float)iVar3);
    if (fVar4 != 0.0) {
      (**(code **)(*(longlong *)this + 0x248))(this);
    }
  }
  else if (bVar1) {
    fVar4 = 0.0;
  }
  else {
    fVar4 = STableViewBase::GetItemHeight((STableViewBase *)this);
    fVar5 = STableViewBase::GetItemWidth((STableViewBase *)this);
    FTableViewDimensions::FTableViewDimensions
              (local_38,*(EOrientation *)&this->field_0x44c,fVar5,fVar4);
    iVar3 = (**(code **)(*(longlong *)this + 0x270))(this);
    fVar4 = (float)(**(code **)(*(longlong *)this + 0x260))
                             (this,(float)((double)(((float)iVar3 * param_2) /
                                                   local_38[0].ScrollAxis) +
                                          *(double *)&this->field_0x338));
  }
  return fVar4;
}

// ScrollIntoView @ 14300aed0

EScrollIntoViewResult __thiscall
STileView<TSharedPtr<int,1>_>::ScrollIntoView
          (STileView<TSharedPtr<int,1>_> *this,FGeometry *param_1)

{
  undefined1 *puVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  double dVar6;
  float fVar7;
  bool bVar8;
  EScrollIntoViewResult EVar9;
  int iVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  FTableViewDimensions *pFVar13;
  TReferenceControllerBase<1> *pTVar14;
  int iVar15;
  longlong *plVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  double dVar20;
  double dVar21;
  undefined1 in_XMM1 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  double dVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  FDeprecateSlateVector2D local_res8;
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  longlong local_c8;
  FSharedReferencer<1> aFStack_c0 [21];
  
  puVar1 = &this->field_0x8d0;
  if ((*(longlong *)puVar1 != 0) &&
     (plVar12 = *(longlong **)&this->field_0x9f8, plVar12 != (longlong *)0x0)) {
    puVar11 = (undefined8 *)(**(code **)(*plVar12 + 8))(plVar12,local_d8);
    pTVar14 = *(TReferenceControllerBase<1> **)&this->field_0x8d8;
    lVar2 = *(longlong *)puVar1;
    plVar12 = (longlong *)*puVar11;
    uVar4 = puVar11[1];
    if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
      UNLOCK();
    }
    for (plVar16 = plVar12; plVar16 != plVar12 + (longlong)(int)uVar4 * 2; plVar16 = plVar16 + 2) {
      if (*plVar16 == lVar2) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14)
        ;
        iVar15 = (int)((longlong)plVar16 - (longlong)plVar12 >> 4);
        if (iVar15 == -1) goto LAB_14300af8a;
        local_res8 = param_1->Size;
        fVar17 = STableViewBase::GetItemHeight((STableViewBase *)this);
        fVar18 = STableViewBase::GetItemWidth((STableViewBase *)this);
        FTableViewDimensions::FTableViewDimensions
                  ((FTableViewDimensions *)local_e8,*(EOrientation *)&this->field_0x44c,fVar18,
                   fVar17);
        pFVar13 = FTableViewDimensions::FTableViewDimensions
                            ((FTableViewDimensions *)local_d8,*(EOrientation *)&this->field_0x44c,
                             (FDeprecateVector2DParameter *)&local_res8);
        fVar7 = __real_3f800000;
        fVar26 = __real_3f800000 / (float)local_e8._4_4_;
        fVar17 = pFVar13->ScrollAxis;
        fVar27 = fVar17 * fVar26;
        fVar19 = (float)(**(code **)(*(longlong *)this + 0x268))(this);
        fVar18 = 0.0;
        if (((fVar19 == 0.0) &&
            (bVar8 = STableViewBase::IsPendingRefresh((STableViewBase *)this), bVar8)) &&
           (*(double *)&this->field_0x368 == 0.0)) {
          return Deferred;
        }
        STableViewBase::EndInertialScrolling((STableViewBase *)this,false);
        iVar10 = (**(code **)(*(longlong *)this + 0x270))(this);
        dVar6 = (double)iVar10;
        dVar20 = STableViewBase::GetTargetScrollOffset((STableViewBase *)this);
        fVar19 = (float)iVar15;
        dVar20 = dVar20 / dVar6;
        fVar28 = (float)iVar10;
        auVar23._0_8_ = __real_bfe0000000000000 - (dVar20 + dVar20);
        auVar23._8_8_ = 0;
        iVar15 = (int)ROUND((fVar19 + fVar19) / fVar28 - __real_3f000000) >> 1;
        dVar25 = (double)fVar27 + dVar20;
        auVar24._0_8_ =
             (double)(((int)ROUND(auVar23._0_8_) >> 1) +
                     ((int)ROUND((dVar25 + dVar25) - __real_3fe0000000000000) >> 1)) + dVar20;
        auVar24._8_8_ = 0;
        if (this->field_0x9a2 == '\0') {
          auVar22._8_8_ = 0;
          auVar22._0_8_ = dVar20;
          auVar22 = roundpd(in_XMM1,auVar22,2);
          auVar24 = roundpd(auVar23,auVar24,1);
          dVar25 = auVar24._0_8_;
        }
        else {
          auVar24 = roundpd(auVar23,auVar24,2);
          dVar25 = auVar24._0_8_;
          auVar5._8_8_ = 0;
          auVar5._0_8_ = dVar20;
          auVar22 = roundpd(in_XMM1,auVar5,1);
        }
        dVar20 = (double)iVar15;
        dVar21 = auVar22._0_8_;
        if ((dVar20 < dVar21) || (dVar25 < dVar20)) {
          if ((dVar20 < dVar21 - __real_3ff0000000000000) ||
             (dVar25 + __real_3ff0000000000000 < dVar20)) {
            fVar18 = ((float)iVar15 - fVar27 * __real_3f000000) + __real_3f000000;
          }
          else {
            fVar18 = (float)iVar15;
            if (dVar20 != dVar21 - __real_3ff0000000000000) {
              if (this->field_0x318 == '\0') {
                fVar18 = (fVar18 - fVar27) + fVar7 + *(float *)&this->field_0x998;
              }
              else {
                fVar18 = fVar18 - ((float)((int)ROUND((fVar26 + fVar26) * fVar17 - __real_3f000000)
                                          >> 1) - fVar7);
              }
            }
          }
          iVar15 = (**(code **)(*(longlong *)this + 0x2a0))(this);
          dVar20 = (double)iVar15 - (double)fVar27 * dVar6;
          if ((double)fVar18 * dVar6 <= dVar20) {
            dVar20 = (double)fVar18 * dVar6;
          }
          if (dVar20 <= 0.0) {
            dVar20 = 0.0;
          }
          fVar18 = (float)dVar20;
LAB_14300b34a:
          STableViewBase::SetScrollOffset((STableViewBase *)this,fVar18);
        }
        else {
          if (dVar20 == dVar21) {
            if ((this->field_0x318 == '\0') || (iVar15 < 1)) {
              fVar18 = *(float *)&this->field_0x998;
            }
            fVar18 = (float)(iVar15 * iVar10) - fVar18;
            goto LAB_14300b34a;
          }
          if (dVar20 == dVar25) {
            if (this->field_0x318 == '\0') {
              fVar18 = (((float)iVar15 - fVar27) + fVar7 + *(float *)&this->field_0x998) * fVar28;
            }
            else {
              auVar24 = roundps(auVar22,ZEXT416((uint)fVar27),1);
              fVar18 = (((float)iVar15 - auVar24._0_4_) + fVar7) * fVar28;
            }
            goto LAB_14300b34a;
          }
        }
        (**(code **)(*(longlong *)this + 0x248))(this);
        lVar2 = *(longlong *)&this->field_0x8d8;
        uVar4 = *(undefined8 *)puVar1;
        if (lVar2 != 0) {
          LOCK();
          *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
          UNLOCK();
        }
        pTVar14 = *(TReferenceControllerBase<1> **)&this->field_0x8f0;
        *(undefined8 *)&this->field_0x8e8 = uVar4;
        *(longlong *)&this->field_0x8f0 = lVar2;
        break;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
LAB_14300af8a:
    local_c8 = 0;
    aFStack_c0[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if ((longlong *)puVar1 != &local_c8) {
      *(undefined8 *)puVar1 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&this->field_0x8d8,aFStack_c0);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (aFStack_c0[0].ReferenceController);
  }
  local_d8._0_8_ = *(undefined8 *)&this->field_0x8e8;
  if ((local_d8._0_8_ == 0) || (this->field_0x320 == '\0')) {
    EVar9 = Success;
  }
  else {
    pcVar3 = *(code **)(*(longlong *)&this->field_0x588 + 0xd8);
    local_d8._8_8_ = *(undefined8 *)&this->field_0x8f0;
    if ((TReferenceControllerBase<1> *)local_d8._8_8_ != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      ((TReferenceControllerBase<1> *)local_d8._8_8_)->SharedReferenceCount =
           (atomic<int>)
           ((int)((TReferenceControllerBase<1> *)local_d8._8_8_)->SharedReferenceCount + 1);
      UNLOCK();
    }
    plVar12 = (longlong *)(*pcVar3)(&this->field_0x588,local_e8,local_d8);
    lVar2 = *plVar12;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_e8._8_8_);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_d8._8_8_);
    EVar9 = (EScrollIntoViewResult)(lVar2 == 0);
  }
  return EVar9;
}

// ScrollIntoView @ 14300b3f0

EScrollIntoViewResult __thiscall
STileView<TSharedPtr<FTestData,1>_>::ScrollIntoView
          (STileView<TSharedPtr<FTestData,1>_> *this,FGeometry *param_1)

{
  undefined1 *puVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  double dVar6;
  float fVar7;
  bool bVar8;
  EScrollIntoViewResult EVar9;
  int iVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  FTableViewDimensions *pFVar13;
  TReferenceControllerBase<1> *pTVar14;
  int iVar15;
  longlong *plVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  double dVar20;
  double dVar21;
  undefined1 in_XMM1 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  double dVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  FDeprecateSlateVector2D local_res8;
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  longlong local_c8;
  FSharedReferencer<1> aFStack_c0 [21];
  
  puVar1 = &this->field_0x8d0;
  if ((*(longlong *)puVar1 != 0) &&
     (plVar12 = *(longlong **)&this->field_0x9f8, plVar12 != (longlong *)0x0)) {
    puVar11 = (undefined8 *)(**(code **)(*plVar12 + 8))(plVar12,local_d8);
    pTVar14 = *(TReferenceControllerBase<1> **)&this->field_0x8d8;
    lVar2 = *(longlong *)puVar1;
    plVar12 = (longlong *)*puVar11;
    uVar4 = puVar11[1];
    if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
      UNLOCK();
    }
    for (plVar16 = plVar12; plVar16 != plVar12 + (longlong)(int)uVar4 * 2; plVar16 = plVar16 + 2) {
      if (*plVar16 == lVar2) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14)
        ;
        iVar15 = (int)((longlong)plVar16 - (longlong)plVar12 >> 4);
        if (iVar15 == -1) goto LAB_14300b4aa;
        local_res8 = param_1->Size;
        fVar17 = STableViewBase::GetItemHeight((STableViewBase *)this);
        fVar18 = STableViewBase::GetItemWidth((STableViewBase *)this);
        FTableViewDimensions::FTableViewDimensions
                  ((FTableViewDimensions *)local_e8,*(EOrientation *)&this->field_0x44c,fVar18,
                   fVar17);
        pFVar13 = FTableViewDimensions::FTableViewDimensions
                            ((FTableViewDimensions *)local_d8,*(EOrientation *)&this->field_0x44c,
                             (FDeprecateVector2DParameter *)&local_res8);
        fVar7 = __real_3f800000;
        fVar26 = __real_3f800000 / (float)local_e8._4_4_;
        fVar17 = pFVar13->ScrollAxis;
        fVar27 = fVar17 * fVar26;
        fVar19 = (float)(**(code **)(*(longlong *)this + 0x268))(this);
        fVar18 = 0.0;
        if (((fVar19 == 0.0) &&
            (bVar8 = STableViewBase::IsPendingRefresh((STableViewBase *)this), bVar8)) &&
           (*(double *)&this->field_0x368 == 0.0)) {
          return Deferred;
        }
        STableViewBase::EndInertialScrolling((STableViewBase *)this,false);
        iVar10 = (**(code **)(*(longlong *)this + 0x270))(this);
        dVar6 = (double)iVar10;
        dVar20 = STableViewBase::GetTargetScrollOffset((STableViewBase *)this);
        fVar19 = (float)iVar15;
        dVar20 = dVar20 / dVar6;
        fVar28 = (float)iVar10;
        auVar23._0_8_ = __real_bfe0000000000000 - (dVar20 + dVar20);
        auVar23._8_8_ = 0;
        iVar15 = (int)ROUND((fVar19 + fVar19) / fVar28 - __real_3f000000) >> 1;
        dVar25 = (double)fVar27 + dVar20;
        auVar24._0_8_ =
             (double)(((int)ROUND(auVar23._0_8_) >> 1) +
                     ((int)ROUND((dVar25 + dVar25) - __real_3fe0000000000000) >> 1)) + dVar20;
        auVar24._8_8_ = 0;
        if (this->field_0x9a2 == '\0') {
          auVar22._8_8_ = 0;
          auVar22._0_8_ = dVar20;
          auVar22 = roundpd(in_XMM1,auVar22,2);
          auVar24 = roundpd(auVar23,auVar24,1);
          dVar25 = auVar24._0_8_;
        }
        else {
          auVar24 = roundpd(auVar23,auVar24,2);
          dVar25 = auVar24._0_8_;
          auVar5._8_8_ = 0;
          auVar5._0_8_ = dVar20;
          auVar22 = roundpd(in_XMM1,auVar5,1);
        }
        dVar20 = (double)iVar15;
        dVar21 = auVar22._0_8_;
        if ((dVar20 < dVar21) || (dVar25 < dVar20)) {
          if ((dVar20 < dVar21 - __real_3ff0000000000000) ||
             (dVar25 + __real_3ff0000000000000 < dVar20)) {
            fVar18 = ((float)iVar15 - fVar27 * __real_3f000000) + __real_3f000000;
          }
          else {
            fVar18 = (float)iVar15;
            if (dVar20 != dVar21 - __real_3ff0000000000000) {
              if (this->field_0x318 == '\0') {
                fVar18 = (fVar18 - fVar27) + fVar7 + *(float *)&this->field_0x998;
              }
              else {
                fVar18 = fVar18 - ((float)((int)ROUND((fVar26 + fVar26) * fVar17 - __real_3f000000)
                                          >> 1) - fVar7);
              }
            }
          }
          iVar15 = (**(code **)(*(longlong *)this + 0x2a0))(this);
          dVar20 = (double)iVar15 - (double)fVar27 * dVar6;
          if ((double)fVar18 * dVar6 <= dVar20) {
            dVar20 = (double)fVar18 * dVar6;
          }
          if (dVar20 <= 0.0) {
            dVar20 = 0.0;
          }
          fVar18 = (float)dVar20;
LAB_14300b86a:
          STableViewBase::SetScrollOffset((STableViewBase *)this,fVar18);
        }
        else {
          if (dVar20 == dVar21) {
            if ((this->field_0x318 == '\0') || (iVar15 < 1)) {
              fVar18 = *(float *)&this->field_0x998;
            }
            fVar18 = (float)(iVar15 * iVar10) - fVar18;
            goto LAB_14300b86a;
          }
          if (dVar20 == dVar25) {
            if (this->field_0x318 == '\0') {
              fVar18 = (((float)iVar15 - fVar27) + fVar7 + *(float *)&this->field_0x998) * fVar28;
            }
            else {
              auVar24 = roundps(auVar22,ZEXT416((uint)fVar27),1);
              fVar18 = (((float)iVar15 - auVar24._0_4_) + fVar7) * fVar28;
            }
            goto LAB_14300b86a;
          }
        }
        (**(code **)(*(longlong *)this + 0x248))(this);
        lVar2 = *(longlong *)&this->field_0x8d8;
        uVar4 = *(undefined8 *)puVar1;
        if (lVar2 != 0) {
          LOCK();
          *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
          UNLOCK();
        }
        pTVar14 = *(TReferenceControllerBase<1> **)&this->field_0x8f0;
        *(undefined8 *)&this->field_0x8e8 = uVar4;
        *(longlong *)&this->field_0x8f0 = lVar2;
        break;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
LAB_14300b4aa:
    local_c8 = 0;
    aFStack_c0[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if ((longlong *)puVar1 != &local_c8) {
      *(undefined8 *)puVar1 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&this->field_0x8d8,aFStack_c0);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (aFStack_c0[0].ReferenceController);
  }
  local_d8._0_8_ = *(undefined8 *)&this->field_0x8e8;
  if ((local_d8._0_8_ == 0) || (this->field_0x320 == '\0')) {
    EVar9 = Success;
  }
  else {
    pcVar3 = *(code **)(*(longlong *)&this->field_0x588 + 0xd8);
    local_d8._8_8_ = *(undefined8 *)&this->field_0x8f0;
    if ((TReferenceControllerBase<1> *)local_d8._8_8_ != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      ((TReferenceControllerBase<1> *)local_d8._8_8_)->SharedReferenceCount =
           (atomic<int>)
           ((int)((TReferenceControllerBase<1> *)local_d8._8_8_)->SharedReferenceCount + 1);
      UNLOCK();
    }
    plVar12 = (longlong *)(*pcVar3)(&this->field_0x588,local_e8,local_d8);
    lVar2 = *plVar12;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_e8._8_8_);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_d8._8_8_);
    EVar9 = (EScrollIntoViewResult)(lVar2 == 0);
  }
  return EVar9;
}

