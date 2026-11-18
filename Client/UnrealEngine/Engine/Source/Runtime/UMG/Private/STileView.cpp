// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 7

// Construct @ 1469ac140

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall STileView<UObject_*>::Construct(STileView<UObject_*> *this,FArguments *param_1)

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
  TUniquePtr<UE::Slate::ItemsSource::IItemsSource<UObject_*>,TDefaultDelete<UE::Slate::ItemsSource::IItemsSource<UObject_*>_>_>
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
  TDelegate<TSharedRef<ITableRow,1>___cdecl(UObject_*,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
  ::operator=((TDelegate<TSharedRef<ITableRow,1>___cdecl(UObject_*,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
               *)&this->field_0x758,&param_1->_OnGenerateTile);
  TDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy>::operator=
            ((TDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)&this->field_0x788,
             &param_1->_OnRefreshTile);
  TDelegate<void___cdecl(TSharedRef<ITableRow,1>_const_&),FDefaultDelegateUserPolicy>::operator=
            ((TDelegate<void___cdecl(TSharedRef<ITableRow,1>_const_&),FDefaultDelegateUserPolicy> *)
             &this->field_0x7d0,&param_1->_OnTileReleased);
  TDelegate<void___cdecl(UObject_*,TSharedPtr<ITableRow,1>_const_&),FDefaultDelegateUserPolicy>::
  operator=((TDelegate<void___cdecl(UObject_*,TSharedPtr<ITableRow,1>_const_&),FDefaultDelegateUserPolicy>
             *)&this->field_0x7e8,&param_1->_OnItemScrolledIntoView);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&this->field_0x800,
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
  SListView<UObject_*>::SetItemsSource((SListView<UObject_*> *)this,TVar10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  TDelegate<TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>::operator=
            ((TDelegate<TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy> *)
             &this->field_0x3b8,&param_1->_OnContextMenuOpening);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&this->field_0x3d0,
             &param_1->_OnItemsRebuilt);
  TDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy>::operator=
            ((TDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)&this->field_0x920,
             &param_1->_OnMouseButtonClick);
  TDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy>::operator=
            ((TDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)&this->field_0x938,
             &param_1->_OnMouseButtonDoubleClick);
  TDelegate<void___cdecl(UObject_*,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>::operator=
            (&this->field_0x8f0,&param_1->_OnSelectionChanged);
  TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>::operator=
            ((TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)&this->field_0x908,
             &param_1->_OnIsSelectableOrNavigable);
  TAttribute<enum_ESelectionMode::Type>::operator=(&this->field_0x3e8,&param_1->_SelectionMode);
  this->field_0x98c = param_1->_ClearSelectionOnClick;
  this->field_0x548 = param_1->_AllowOverscroll;
  this->field_0x549 = param_1->_ConsumeMouseWheel;
  *(float *)&this->field_0x444 = param_1->_WheelScrollMultiplier;
  this->field_0x98d = param_1->_HandleGamepadEvents;
  this->field_0x98e = param_1->_HandleDirectionalNavigation;
  TAttribute<bool>::operator=((TAttribute<bool> *)&this->field_0x968,&param_1->_IsFocusable);
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
LAB_1469ac446:
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
                 ___7__TCommonDelegateInstanceState___A6A_AVFString__PEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar12 = FDelegateHandle::GenerateNewID();
      puVar11[2] = uVar12;
      *puVar11 = &
                 ___7__TBaseStaticDelegateInstance___A6A_AVFString__PEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar11[3] = TListTypeTraits<UObject_*,void>::DebugDump;
    }
    if (local_678.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_678.Accessor,&local_678);
    }
    TDelegate<FString___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<FString___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)
               &this->field_0x7a0,
               (TDelegate<FString___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)local_758);
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
    if (cVar7 == '\0') goto LAB_1469ac446;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_5f0);
    local_740 = (undefined1  [8])0x0;
    local_738.Data = (FScriptContainerElement *)0x0;
    local_730 = 0;
    TDelegate<FString___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<FString___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)local_740,
               &param_1->_OnItemToString_Debug);
    TDelegate<FString___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<FString___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)
               &this->field_0x7a0,
               (TDelegate<FString___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)local_740);
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
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&this->field_0x7b8,
             &param_1->_OnEnteredBadState);
  this->bWrapHorizontalNavigation = param_1->_WrapHorizontalNavigation;
  local_728.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_728.Data.ArrayNum = 0;
  local_728.Data.ArrayMax = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->field_0x758,&local_5d8
            );
  if ((*(int *)&this->field_0x768 != 0) && (*(longlong **)&this->field_0x760 != (longlong *)0x0)) {
    cVar7 = (**(code **)(**(longlong **)&this->field_0x760 + 0x38))();
    if (cVar7 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_5d8);
      goto LAB_1469ac5d2;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_5d8);
  ::FString::AppendChars(&local_728,L"Please specify an OnGenerateTile. \n",0x23);
LAB_1469ac5d2:
  if (*(longlong *)&this->field_0x9e8 == 0) {
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
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_6b8.SharedReferenceCount.ReferenceController);
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
           ___7__TIntrusiveReferenceController_V__TTableViewMetadata_PEAVUObject_____00_SharedPointerInternals__6B_
      ;
      if (pSVar2 != (SWidget *)0x0) {
        pTVar19 = (TReferenceControllerBase<1> *)&pSVar2[2].PersistentState.IncomingUserIndex;
      }
      if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
        pTVar17[1]._padding_ = (longlong)&___7__TTableViewMetadata_PEAVUObject____6B_;
        *(TReferenceControllerBase<1> **)&pTVar17[1].SharedReferenceCount = pTVar19;
        pTVar17[2]._padding_ = 0;
      }
      else {
        LOCK();
        *paVar21 = (atomic<int>)((int)*paVar21 + 1);
        UNLOCK();
        pTVar17[1]._padding_ = (longlong)&___7__TTableViewMetadata_PEAVUObject____6B_;
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

// GetNumItemsBeingObserved @ 1469d20c0

int __thiscall STileView<UObject_*>::GetNumItemsBeingObserved(STileView<UObject_*> *this)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 local_18;
  ulonglong uStack_10;
  
  plVar1 = *(longlong **)&this->field_0x9e8;
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

// GetNumItemsPerLine @ 1469d2160

/* WARNING: Removing unreachable block (ram,0x0001469d2200) */

int __thiscall STileView<UObject_*>::GetNumItemsPerLine(STileView<UObject_*> *this)

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

// OnNavigation @ 1469ef470

FNavigationReply * __thiscall
STileView<UObject_*>::OnNavigation
          (STileView<UObject_*> *this,FNavigationReply *__return_storage_ptr__,FGeometry *param_1,
          FNavigationEvent *param_2)

{
  EUINavigation EVar1;
  code *pcVar2;
  SWidget *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  int iVar5;
  longlong *plVar6;
  UObject **ppUVar7;
  SWidget *pSVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  undefined1 local_28 [8];
  FSharedReferencer<1> FStack_20;
  
  plVar6 = *(longlong **)&this->field_0x9e8;
  if (((plVar6 == (longlong *)0x0) || (this->field_0x98e == '\0')) ||
     ((this->field_0x98d == '\0' && (param_2->NavigationGenesis == Controller))))
  goto LAB_1469ef54f;
  plVar6 = (longlong *)(**(code **)(*plVar6 + 8))(plVar6,local_28);
  pSVar3 = (SWidget *)*plVar6;
  pTVar4 = (TReferenceControllerBase<1> *)plVar6[1];
  local_28 = (undefined1  [8])pSVar3;
  FStack_20.ReferenceController = pTVar4;
  iVar5 = (**(code **)(*(longlong *)this + 0x270))();
  iVar11 = (int)pTVar4;
  if (*(UObject **)&this->field_0x868 == (UObject *)0x0) {
    uVar9 = 0;
  }
  else {
    for (pSVar8 = pSVar3; pSVar8 != (SWidget *)(&pSVar3->_padding_ + iVar11);
        pSVar8 = (SWidget *)&pSVar8->_padding_) {
      if ((UObject *)pSVar8->_padding_ == *(UObject **)&this->field_0x868) {
        uVar9 = (longlong)pSVar8 - (longlong)pSVar3 >> 3;
        goto LAB_1469ef533;
      }
    }
    uVar9 = 0xffffffff;
  }
LAB_1469ef533:
  EVar1 = param_2->NavigationType;
  iVar10 = (int)uVar9;
  if (*(int *)&this->field_0x44c == 1) {
    if (EVar1 != Left) {
      if (EVar1 != Right) goto LAB_1469ef54f;
      goto LAB_1469ef5a5;
    }
LAB_1469ef589:
    if ((this->bWrapHorizontalNavigation == false) &&
       ((int)((longlong)((ulonglong)(uint)(iVar10 >> 0x1f) << 0x20 | uVar9 & 0xffffffff) %
             (longlong)iVar5) < 1)) goto LAB_1469ef54f;
    iVar10 = iVar10 + -1;
  }
  else {
    if (*(int *)&this->field_0x44c != 0) goto LAB_1469ef54f;
    if (EVar1 == Up) goto LAB_1469ef589;
    if (EVar1 != Down) goto LAB_1469ef54f;
LAB_1469ef5a5:
    if ((this->bWrapHorizontalNavigation == false) &&
       (iVar5 + -1 <=
        (int)((longlong)((ulonglong)(uint)(iVar10 >> 0x1f) << 0x20 | uVar9 & 0xffffffff) %
             (longlong)iVar5))) goto LAB_1469ef54f;
    iVar10 = iVar10 + 1;
  }
  if (((-1 < iVar10) && (iVar10 < iVar11)) && (this->field_0x449 != '\0')) {
    pcVar2 = *(code **)(*(longlong *)this + 0x2d0);
    ppUVar7 = TArrayView<UObject_*_const,int>::operator[]
                        ((TArrayView<UObject_*_const,int> *)local_28,iVar10);
    (*pcVar2)(this,ppUVar7,param_2);
    local_28 = (undefined1  [8])0x0;
    FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    FNavigationReply::Explicit(__return_storage_ptr__,(TSharedPtr<SWidget,1> *)local_28);
    return __return_storage_ptr__;
  }
LAB_1469ef54f:
  SListView<UObject_*>::OnNavigation
            ((SListView<UObject_*> *)this,__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// ReGenerateItems @ 1469f84b0

FReGenerateResults * __thiscall
STileView<UObject_*>::ReGenerateItems
          (STileView<UObject_*> *this,FReGenerateResults *__return_storage_ptr__,FGeometry *param_1)

{
  UObject **ppUVar1;
  ulonglong uVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  float fVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  longlong *plVar15;
  FReGenerateResults *pFVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
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
  plVar15 = *(longlong **)&this->field_0x9e8;
  bVar11 = false;
  if (plVar15 == (longlong *)0x0) {
    local_d8 = 0;
    plVar15 = &local_d8;
    uStack_d0 = 0;
  }
  else {
    plVar15 = (longlong *)(**(code **)(*plVar15 + 8))(plVar15,local_b8);
  }
  local_c8 = *plVar15;
  lStack_c0 = plVar15[1];
  uVar2 = plVar15[1];
  iVar20 = (int)uVar2;
  if (iVar20 < 1) {
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
    iVar12 = (**(code **)(*(longlong *)this + 0x270))(this);
    fVar21 = param_1->Scale;
    dVar5 = 0.0;
    iVar18 = (int)((longlong)((ulonglong)(uint)(iVar20 >> 0x1f) << 0x20 | uVar2 & 0xffffffff) %
                  (longlong)iVar12);
    iVar17 = iVar20;
    if (iVar18 != 0) {
      iVar17 = (iVar20 - iVar18) + iVar12;
    }
    dVar25 = (double)iVar17 - (double)(local_f8.ScrollAxis / local_e8.ScrollAxis) * (double)iVar12;
    if (*(double *)&this->field_0x330 <= dVar25) {
      dVar25 = *(double *)&this->field_0x330;
    }
    if (dVar25 <= 0.0) {
      dVar25 = 0.0;
    }
    FTableViewDimensions::FTableViewDimensions(&local_108,*(EOrientation *)&this->field_0x44c);
    dVar6 = dVar25 / (double)iVar12;
    uVar13 = ((int)ROUND((dVar6 + dVar6) - __real_3fe0000000000000) >> 1) * iVar12;
    if ((int)uVar13 < 0) {
      uVar13 = 0;
    }
    local_110 = (FWidgetGenerator *)&this->field_0x5a0;
    TArray<UObject_*,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<UObject_*,TSizedDefaultAllocator<32>_> *)&this->field_0x660,
               (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)&this->field_0x648);
    *(undefined4 *)&this->field_0x650 = 0;
    if (*(int *)&this->field_0x654 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,(ForAnyElementType *)&this->field_0x648,0,(int *)&this->field_0x654);
    }
    fVar10 = __real_3a83126f;
    fVar22 = __real_3f800000;
    bVar9 = true;
    bVar8 = true;
    bVar7 = false;
    uVar19 = uVar13;
    do {
      if (iVar20 <= (int)uVar19) break;
      uVar14 = 0;
      if ((int)uVar19 < iVar20) {
        uVar14 = ~uVar19 >> 0x1f;
      }
      if (uVar14 == 0) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar11) {
          pcVar3 = (code *)swi(3);
          pFVar16 = (FReGenerateResults *)(*pcVar3)();
          return pFVar16;
        }
      }
      ppUVar1 = (UObject **)(local_c8 + (longlong)(int)uVar19 * 8);
      if (bVar9) {
        bVar9 = false;
        fVar23 = fVar22;
        if (bVar8) {
          bVar8 = false;
          dVar4 = (double)trunc(SUB84(dVar6,0));
          fVar23 = fVar22 - (float)(dVar6 - dVar4);
        }
        local_108.ScrollAxis = fVar23 * local_e8.ScrollAxis + local_108.ScrollAxis;
        if ((local_f8.ScrollAxis < local_108.ScrollAxis) &&
           (fVar23 = fVar22 - (local_108.ScrollAxis - local_f8.ScrollAxis) / local_e8.ScrollAxis,
           fVar23 <= 0.0)) {
          fVar23 = 0.0;
        }
        dVar5 = dVar5 + (double)fVar23;
      }
      SListView<UObject_*>::GenerateWidgetForItem
                ((SListView<UObject_*> *)this,ppUVar1,uVar19,uVar13,fVar21);
      local_108.LineAxis = local_108.LineAxis + local_e8.LineAxis;
      bVar11 = iVar20 + -1 <= (int)uVar19;
      if (local_f8.LineAxis < local_108.LineAxis + local_e8.LineAxis) {
        local_108.LineAxis = 0.0;
        bVar9 = true;
      }
      if ((iVar20 + -1 <= (int)uVar19) || (bVar9)) {
        bVar7 = local_f8.ScrollAxis + fVar10 < local_108.ScrollAxis;
      }
      uVar19 = uVar19 + 1;
    } while (!bVar7);
    SListView<UObject_*>::FWidgetGenerator::ProcessItemCleanUp(local_110);
    SListView<UObject_*>::FWidgetGenerator::ValidateWidgetGeneration(local_110);
    auVar24._8_8_ = 0;
    auVar24._0_8_ = dVar5;
    auVar24 = roundpd(auVar24,auVar24,2);
    if ((!bVar11) || (bVar7)) {
      bVar11 = false;
    }
    else {
      bVar11 = true;
    }
    __return_storage_ptr__->bGeneratedPastLastItem = bVar11;
    __return_storage_ptr__->NewScrollOffset = dVar25;
    __return_storage_ptr__->ExactNumLinesOnScreen = dVar5;
    __return_storage_ptr__->LengthOfGeneratedItems =
         (double)(float)((double)local_e8.ScrollAxis * auVar24._0_8_);
  }
  return __return_storage_ptr__;
}

// ScrollBy @ 146a0eb30

float __thiscall
STileView<UObject_*>::ScrollBy
          (STileView<UObject_*> *this,FGeometry *param_1,float param_2,EAllowOverscroll param_3)

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

// ScrollIntoView @ 146a0fcd0

EScrollIntoViewResult __thiscall
STileView<UObject_*>::ScrollIntoView(STileView<UObject_*> *this,FGeometry *param_1)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  double dVar3;
  float fVar4;
  bool bVar5;
  int iVar6;
  EScrollIntoViewResult EVar7;
  longlong *plVar8;
  FTableViewDimensions *pFVar9;
  longlong *plVar10;
  int iVar11;
  longlong *plVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  double dVar16;
  double dVar17;
  undefined1 in_XMM1 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  FDeprecateSlateVector2D local_res8;
  FTableViewDimensions local_d8;
  undefined1 local_c8 [176];
  
  if ((*(longlong *)&this->field_0x8d0 != 0) &&
     (plVar10 = *(longlong **)&this->field_0x9e8, plVar10 != (longlong *)0x0)) {
    plVar8 = (longlong *)(**(code **)(*plVar10 + 8))(plVar10,local_c8);
    plVar10 = (longlong *)*plVar8;
    for (plVar12 = plVar10; plVar12 != plVar10 + (int)plVar8[1]; plVar12 = plVar12 + 1) {
      if (*plVar12 == *(longlong *)&this->field_0x8d0) {
        iVar11 = (int)((longlong)plVar12 - (longlong)plVar10 >> 3);
        if (iVar11 != -1) {
          local_res8 = param_1->Size;
          fVar13 = STableViewBase::GetItemHeight((STableViewBase *)this);
          fVar14 = STableViewBase::GetItemWidth((STableViewBase *)this);
          FTableViewDimensions::FTableViewDimensions
                    (&local_d8,*(EOrientation *)&this->field_0x44c,fVar14,fVar13);
          pFVar9 = FTableViewDimensions::FTableViewDimensions
                             ((FTableViewDimensions *)local_c8,*(EOrientation *)&this->field_0x44c,
                              (FDeprecateVector2DParameter *)&local_res8);
          fVar4 = __real_3f800000;
          fVar22 = __real_3f800000 / local_d8.ScrollAxis;
          fVar13 = pFVar9->ScrollAxis;
          fVar23 = fVar22 * fVar13;
          fVar15 = (float)(**(code **)(*(longlong *)this + 0x268))(this);
          fVar14 = 0.0;
          if (((fVar15 == 0.0) &&
              (bVar5 = STableViewBase::IsPendingRefresh((STableViewBase *)this), bVar5)) &&
             (*(double *)&this->field_0x368 == 0.0)) {
            return Deferred;
          }
          STableViewBase::EndInertialScrolling((STableViewBase *)this,false);
          iVar6 = (**(code **)(*(longlong *)this + 0x270))(this);
          dVar3 = (double)iVar6;
          dVar16 = STableViewBase::GetTargetScrollOffset((STableViewBase *)this);
          fVar15 = (float)iVar11;
          dVar16 = dVar16 / dVar3;
          fVar24 = (float)iVar6;
          auVar19._0_8_ = __real_bfe0000000000000 - (dVar16 + dVar16);
          auVar19._8_8_ = 0;
          iVar11 = (int)ROUND((fVar15 + fVar15) / fVar24 - __real_3f000000) >> 1;
          dVar21 = (double)fVar23 + dVar16;
          auVar20._0_8_ =
               (double)(((int)ROUND(auVar19._0_8_) >> 1) +
                       ((int)ROUND((dVar21 + dVar21) - __real_3fe0000000000000) >> 1)) + dVar16;
          auVar20._8_8_ = 0;
          if (this->field_0x992 == '\0') {
            auVar18._8_8_ = 0;
            auVar18._0_8_ = dVar16;
            auVar18 = roundpd(in_XMM1,auVar18,2);
            auVar20 = roundpd(auVar19,auVar20,1);
            dVar21 = auVar20._0_8_;
          }
          else {
            auVar20 = roundpd(auVar19,auVar20,2);
            dVar21 = auVar20._0_8_;
            auVar2._8_8_ = 0;
            auVar2._0_8_ = dVar16;
            auVar18 = roundpd(in_XMM1,auVar2,1);
          }
          dVar16 = (double)iVar11;
          dVar17 = auVar18._0_8_;
          if ((dVar16 < dVar17) || (dVar21 < dVar16)) {
            if ((dVar16 < dVar17 - __real_3ff0000000000000) ||
               (dVar21 + __real_3ff0000000000000 < dVar16)) {
              fVar14 = ((float)iVar11 - fVar23 * __real_3f000000) + __real_3f000000;
            }
            else {
              fVar14 = (float)iVar11;
              if (dVar16 != dVar17 - __real_3ff0000000000000) {
                if (this->field_0x318 == '\0') {
                  fVar14 = (fVar14 - fVar23) + fVar4 + *(float *)&this->field_0x988;
                }
                else {
                  fVar14 = fVar14 - ((float)((int)ROUND((fVar22 + fVar22) * fVar13 - __real_3f000000
                                                       ) >> 1) - fVar4);
                }
              }
            }
            iVar11 = (**(code **)(*(longlong *)this + 0x2a0))(this);
            dVar16 = (double)iVar11 - (double)fVar23 * dVar3;
            if ((double)fVar14 * dVar3 <= dVar16) {
              dVar16 = (double)fVar14 * dVar3;
            }
            if (dVar16 <= 0.0) {
              dVar16 = 0.0;
            }
            fVar14 = (float)dVar16;
LAB_146a10077:
            STableViewBase::SetScrollOffset((STableViewBase *)this,fVar14);
          }
          else {
            if (dVar16 == dVar17) {
              if ((this->field_0x318 == '\0') || (iVar11 < 1)) {
                fVar14 = *(float *)&this->field_0x988;
              }
              fVar14 = (float)(iVar11 * iVar6) - fVar14;
              goto LAB_146a10077;
            }
            if (dVar16 == dVar21) {
              if (this->field_0x318 == '\0') {
                fVar14 = (((float)iVar11 - fVar23) + fVar4 + *(float *)&this->field_0x988) * fVar24;
              }
              else {
                auVar20 = roundps(auVar18,ZEXT416((uint)fVar23),1);
                fVar14 = (((float)iVar11 - auVar20._0_4_) + fVar4) * fVar24;
              }
              goto LAB_146a10077;
            }
          }
          (**(code **)(*(longlong *)this + 0x248))(this);
          *(undefined8 *)&this->field_0x8e0 = *(undefined8 *)&this->field_0x8d0;
        }
        break;
      }
    }
    *(undefined8 *)&this->field_0x8d0 = 0;
  }
  local_res8 = *(FDeprecateSlateVector2D *)&this->field_0x8e0;
  if ((local_res8 == (FDeprecateSlateVector2D)0x0) || (this->field_0x320 == '\0')) {
    EVar7 = Success;
  }
  else {
    plVar10 = (longlong *)
              (**(code **)(*(longlong *)&this->field_0x598 + 0xd8))
                        (&this->field_0x598,local_c8,&local_res8);
    lVar1 = *plVar10;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_c8._8_8_);
    EVar7 = (EScrollIntoViewResult)(lVar1 == 0);
  }
  return EVar7;
}

