// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 7

// Construct @ 14d8e81e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
STileView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>::Construct
          (STileView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
           *this,FArguments *param_1)

{
  undefined1 *puVar1;
  longlong *plVar2;
  TReferenceControllerBase<1> *pTVar3;
  SWidget *pSVar4;
  IItemsSource<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_> IVar5;
  STextBlock *pSVar6;
  code *pcVar7;
  char cVar8;
  bool bVar9;
  TSharedRef<SWidget,1> *pTVar10;
  TUniquePtr<UE::Slate::ItemsSource::IItemsSource<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,TDefaultDelete<UE::Slate::ItemsSource::IItemsSource<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>_>_>
  TVar11;
  undefined8 *puVar12;
  ulong64 uVar13;
  undefined4 *puVar14;
  FArguments *pFVar15;
  FText *pFVar16;
  TSharedRef<STextBlock,1> *pTVar17;
  SScrollBar *pSVar18;
  TAttribute<EVisibility> *pTVar19;
  TReferenceControllerBase<1> *pTVar20;
  int iVar21;
  FMRSWRecursiveAccessDetector *this_00;
  FSlotBase *this_01;
  undefined1 *puVar22;
  TReferenceControllerBase<1> *pTVar23;
  atomic<int> *paVar24;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res10 [2];
  FName local_res18;
  FMemScope local_res20;
  undefined1 local_888 [8];
  FDelegateAllocation local_880;
  undefined1 local_870 [8];
  ForAnyElementType local_868;
  int local_860;
  undefined1 local_858 [8];
  ForAnyElementType local_850;
  int local_848;
  undefined1 local_840 [8];
  ForAnyElementType local_838;
  int local_830;
  undefined1 local_828 [8];
  ForAnyElementType local_820;
  int local_818;
  undefined1 local_810 [8];
  ForAnyElementType local_808;
  int local_800;
  FString local_7f8;
  SWidget *local_7e8;
  TReferenceControllerBase<1> *local_7e0;
  STextBlock *local_7d8;
  TReferenceControllerBase<1> *pTStack_7d0;
  TSharedRef<ISlateMetaData,1> local_7c8;
  undefined8 local_7b8;
  FSharedReferencer<1> FStack_7b0;
  TSharedRef<SWidget,1> local_7a8;
  TSharedPtr<SHeaderRow,1> local_798;
  FDestructionSentinel local_788;
  FDestructionSentinel local_770;
  FDestructionSentinel local_758;
  FDestructionSentinel local_740;
  FDestructionSentinel local_728;
  FDestructionSentinel local_710;
  FDestructionSentinel local_6f8;
  FDelegateAllocation *local_6e0;
  TAttribute<FText> local_6d8;
  undefined1 local_6a8 [16];
  TReferenceControllerBase<1> *local_698;
  FReadAccessScope local_690;
  FReadAccessScope local_678;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_660;
  FText local_648;
  TSharedRef<SWidget,1> local_638;
  FReadAccessScope local_628;
  FReadAccessScope local_610;
  FReadAccessScope local_5f8;
  FReadAccessScope local_5e0;
  TAttribute<EVisibility> local_5c8;
  FArguments local_5a8;
  
  pTVar23 = (TReferenceControllerBase<1> *)0x0;
  this->field_0x35 = *(undefined1 *)((longlong)&param_1->_padding_ + 2);
  puVar22 = &this->field_0x748;
  if (&param_1->_OnGenerateTile !=
      (TDelegate<TSharedRef<ITableRow,1>___cdecl(TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
       *)puVar22) {
    local_828 = (undefined1  [8])0x0;
    local_820.Data = (FScriptContainerElement *)0x0;
    local_818 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->_OnGenerateTile,
               &local_5f8);
    if ((*(int *)&(param_1->_OnGenerateTile).field_0x10 != 0) &&
       (plVar2 = *(longlong **)&(param_1->_OnGenerateTile).field_0x8, plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x50))(plVar2,local_828);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_5f8);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)puVar22,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_828);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_828,
               (FWriteAccessScope *)&local_788);
    if ((local_818 != 0) && (local_820.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_820.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_820,0,0,0x10);
      local_818 = 0;
    }
    if (local_788.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_788.Accessor,&local_788);
    }
    if (local_820.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_820.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_828);
  }
  TDelegate<void___cdecl(TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>),FDefaultDelegateUserPolicy>
  ::operator=((TDelegate<void___cdecl(TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>),FDefaultDelegateUserPolicy>
               *)&this->field_0x778,&param_1->_OnRefreshTile);
  TDelegate<void___cdecl(TSharedRef<ITableRow,1>_const_&),FDefaultDelegateUserPolicy>::operator=
            ((TDelegate<void___cdecl(TSharedRef<ITableRow,1>_const_&),FDefaultDelegateUserPolicy> *)
             &this->field_0x7c0,&param_1->_OnTileReleased);
  if (&param_1->_OnItemScrolledIntoView !=
      (TDelegate<void___cdecl(TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,TSharedPtr<ITableRow,1>_const_&),FDefaultDelegateUserPolicy>
       *)&this->field_0x7d8) {
    local_810 = (undefined1  [8])0x0;
    local_808.Data = (FScriptContainerElement *)0x0;
    local_800 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &param_1->_OnItemScrolledIntoView,&local_5e0);
    if ((*(int *)&(param_1->_OnItemScrolledIntoView).field_0x10 != 0) &&
       (plVar2 = *(longlong **)&(param_1->_OnItemScrolledIntoView).field_0x8,
       plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x50))(plVar2,local_810);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_5e0);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->field_0x7d8,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_810);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_810,
               (FWriteAccessScope *)&local_770);
    if ((local_800 != 0) && (local_808.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_808.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_808,0,0,0x10);
      local_800 = 0;
    }
    if (local_770.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_770.Accessor,&local_770);
    }
    if (local_808.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_808.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_810);
  }
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&this->field_0x7f0,
             &param_1->_OnFinishedScrolling);
  pTVar10 = TSharedFromThis<SWidget,1>::AsShared
                      ((TSharedFromThis<SWidget,1> *)&this->field_0x8,&local_7a8);
  pTVar3 = (pTVar10->SharedReferenceCount).ReferenceController;
  pSVar4 = pTVar10->Object;
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_7a8.SharedReferenceCount.ReferenceController);
  }
  else {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_7a8.SharedReferenceCount.ReferenceController);
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_7e8 = pSVar4;
  local_7e0 = pTVar3;
  TVar11 = FArguments::MakeListItemsSource(param_1,(TSharedRef<STableViewBase,1> *)local_6a8);
  if ((this->field_0x31 & 4) == 0) {
    puVar1 = &this->field_0x9f8;
    if ((IItemsSource<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
         *)puVar1 != TVar11.Ptr) {
      puVar12 = *(undefined8 **)puVar1;
      *(IItemsSource<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
        *)puVar1 = *TVar11.Ptr;
      *TVar11.Ptr = (IItemsSource<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
                     )0x0;
      if (puVar12 != (undefined8 *)0x0) {
        (**(code **)*puVar12)(puVar12,1);
      }
    }
  }
  else {
    (**(code **)(*(longlong *)&this->field_0x588 + 0x30))();
    *(undefined4 *)&this->field_0x8e0 = 0;
    this->field_0x9a2 = 0;
    local_7b8 = 0;
    FStack_7b0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if ((undefined8 *)&this->field_0x8d0 != &local_7b8) {
      *(undefined8 *)&this->field_0x8d0 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&this->field_0x8d8,&FStack_7b0);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_7b0.ReferenceController);
    STableViewBase::ClearWidgets((STableViewBase *)this);
    puVar1 = &this->field_0x9f8;
    if ((IItemsSource<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
         *)puVar1 != TVar11.Ptr) {
      puVar12 = *(undefined8 **)puVar1;
      *(IItemsSource<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
        *)puVar1 = *TVar11.Ptr;
      *TVar11.Ptr = (IItemsSource<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
                     )0x0;
      if (puVar12 != (undefined8 *)0x0) {
        (**(code **)*puVar12)(puVar12,1);
      }
    }
    (**(code **)(*(longlong *)this + 0x250))(this);
  }
  IVar5 = *TVar11.Ptr;
  if (IVar5 != (IItemsSource<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
                )0x0) {
    (*(code *)**(undefined8 **)IVar5)(IVar5,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  TDelegate<TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>::operator=
            ((TDelegate<TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy> *)
             &this->field_0x3b8,&param_1->_OnContextMenuOpening);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&this->field_0x3d0,
             &param_1->_OnItemsRebuilt);
  TDelegate<void___cdecl(TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>),FDefaultDelegateUserPolicy>
  ::operator=((TDelegate<void___cdecl(TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>),FDefaultDelegateUserPolicy>
               *)&this->field_0x930,&param_1->_OnMouseButtonClick);
  TDelegate<void___cdecl(TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>),FDefaultDelegateUserPolicy>
  ::operator=((TDelegate<void___cdecl(TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>),FDefaultDelegateUserPolicy>
               *)&this->field_0x948,&param_1->_OnMouseButtonDoubleClick);
  if (&param_1->_OnSelectionChanged !=
      (TDelegate<void___cdecl(TSharedPtr<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,ESelectInfo::Type),FDefaultDelegateUserPolicy>
       *)&this->field_0x900) {
    local_870 = (undefined1  [8])0x0;
    local_868.Data = (FScriptContainerElement *)0x0;
    local_860 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &param_1->_OnSelectionChanged,&local_628);
    if ((*(int *)&(param_1->_OnSelectionChanged).field_0x10 != 0) &&
       (plVar2 = *(longlong **)&(param_1->_OnSelectionChanged).field_0x8, plVar2 != (longlong *)0x0)
       ) {
      (**(code **)(*plVar2 + 0x50))(plVar2,local_870);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_628);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->field_0x900,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_870);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_870,
               (FWriteAccessScope *)&local_758);
    if ((local_860 != 0) && (local_868.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_868.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_868,0,0,0x10);
      local_860 = 0;
    }
    if (local_758.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_758.Accessor,&local_758);
    }
    if (local_868.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_868.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_870);
  }
  if (&param_1->_OnIsSelectableOrNavigable !=
      (TDelegate<bool___cdecl(TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>),FDefaultDelegateUserPolicy>
       *)&this->field_0x918) {
    local_858 = (undefined1  [8])0x0;
    local_850.Data = (FScriptContainerElement *)0x0;
    local_848 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &param_1->_OnIsSelectableOrNavigable,&local_610);
    if ((*(int *)&(param_1->_OnIsSelectableOrNavigable).field_0x10 != 0) &&
       (plVar2 = *(longlong **)&(param_1->_OnIsSelectableOrNavigable).field_0x8,
       plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x50))(plVar2,local_858);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_610);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->field_0x918,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_858);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_858,
               (FWriteAccessScope *)&local_740);
    if ((local_848 != 0) && (local_850.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_850.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_850,0,0,0x10);
      local_848 = 0;
    }
    if (local_740.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_740.Accessor,&local_740);
    }
    if (local_850.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_850.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_858);
  }
  TAttribute<enum_ESelectionMode::Type>::operator=(&this->field_0x3e8,&param_1->_SelectionMode);
  this->field_0x99c = param_1->_ClearSelectionOnClick;
  this->field_0x548 = param_1->_AllowOverscroll;
  this->field_0x549 = param_1->_ConsumeMouseWheel;
  *(float *)&this->field_0x444 = param_1->_WheelScrollMultiplier;
  this->field_0x99d = param_1->_HandleGamepadEvents;
  this->field_0x99e = param_1->_HandleDirectionalNavigation;
  TAttribute<bool>::operator=((TAttribute<bool> *)&this->field_0x978,&param_1->_IsFocusable);
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
             &param_1->_OnItemToString_Debug,&local_690);
  if ((*(int *)&(param_1->_OnItemToString_Debug).field_0x10 == 0) ||
     (plVar2 = *(longlong **)&(param_1->_OnItemToString_Debug).field_0x8, plVar2 == (longlong *)0x0)
     ) {
LAB_14d8e88a2:
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_690);
    local_888 = (undefined1  [8])0x0;
    local_880.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_880.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_888,
               (FWriteAccessScope *)&local_6f8);
    local_6e0 = &local_880;
    puVar12 = UE::Core::Private::DelegateAllocate(0x20,&local_880);
    if (puVar12 != (undefined8 *)0x0) {
      *puVar12 = &
                 ___7__TCommonDelegateInstanceState___A6A_AVFString__V__TSharedRef___CBUFLoudnessMetric_FLoudnessMeterWidgetView_AudioWidgets___00___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar13 = FDelegateHandle::GenerateNewID();
      puVar12[2] = uVar13;
      *puVar12 = &
                 ___7__TBaseStaticDelegateInstance___A6A_AVFString__V__TSharedRef___CBUFLoudnessMetric_FLoudnessMeterWidgetView_AudioWidgets___00___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar12[3] = TListTypeTraits<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,void>
                   ::DebugDump;
    }
    if (local_6f8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_6f8.Accessor,&local_6f8);
    }
    TDelegate<FString___cdecl(TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>),FDefaultDelegateUserPolicy>
    ::CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<FString___cdecl(TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>),FDefaultDelegateUserPolicy>
                *)&this->field_0x790,
               (TDelegate<FString___cdecl(TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>),FDefaultDelegateUserPolicy>
                *)local_888);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_888,
               (FWriteAccessScope *)&local_710);
    if ((local_880.DelegateSize != 0) &&
       (local_880.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_880.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_880,0,0,0x10);
      local_880.DelegateSize = 0;
    }
    if (local_710.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_710.Accessor,&local_710);
    }
    if (local_880.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_880.DelegateAllocator);
    }
    this_00 = (FMRSWRecursiveAccessDetector *)local_888;
  }
  else {
    cVar8 = (**(code **)(*plVar2 + 0x38))();
    if (cVar8 == '\0') goto LAB_14d8e88a2;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_690);
    local_840 = (undefined1  [8])0x0;
    local_838.Data = (FScriptContainerElement *)0x0;
    local_830 = 0;
    TDelegate<FString___cdecl(TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>),FDefaultDelegateUserPolicy>
    ::CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<FString___cdecl(TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>),FDefaultDelegateUserPolicy>
                *)local_840,&param_1->_OnItemToString_Debug);
    TDelegate<FString___cdecl(TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>),FDefaultDelegateUserPolicy>
    ::CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<FString___cdecl(TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>),FDefaultDelegateUserPolicy>
                *)&this->field_0x790,
               (TDelegate<FString___cdecl(TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>),FDefaultDelegateUserPolicy>
                *)local_840);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_840,
               (FWriteAccessScope *)&local_728);
    if ((local_830 != 0) && (local_838.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_838.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_838,0,0,0x10);
      local_830 = 0;
    }
    if (local_728.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_728.Accessor,&local_728);
    }
    if (local_838.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_838.Data);
    }
    this_00 = (FMRSWRecursiveAccessDetector *)local_840;
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this_00);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&this->field_0x7a8,
             &param_1->_OnEnteredBadState);
  this->bWrapHorizontalNavigation = param_1->_WrapHorizontalNavigation;
  local_7f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_7f8.Data.ArrayNum = 0;
  local_7f8.Data.ArrayMax = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)puVar22,&local_678);
  if ((*(int *)&this->field_0x758 != 0) && (*(longlong **)&this->field_0x750 != (longlong *)0x0)) {
    cVar8 = (**(code **)(**(longlong **)&this->field_0x750 + 0x38))();
    if (cVar8 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_678);
      goto LAB_14d8e8a3f;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_678);
  ::FString::AppendChars(&local_7f8,L"Please specify an OnGenerateTile. \n",0x23);
LAB_14d8e8a3f:
  if (*(longlong *)&this->field_0x9f8 == 0) {
    ::FString::AppendChars(&local_7f8,L"Please specify a ListItemsSource. \n",0x23);
  }
  iVar21 = local_7f8.Data.ArrayNum + -1;
  if (local_7f8.Data.ArrayNum == 0) {
    iVar21 = 0;
  }
  if (iVar21 < 1) {
    local_798.Object = (SHeaderRow *)0x0;
    local_798.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    STableViewBase::ConstructChildren
              ((STableViewBase *)this,&param_1->_ItemWidth,&param_1->_ItemHeight,
               &param_1->_ItemAlignment,&local_798,&param_1->_ExternalScrollbar,
               param_1->_Orientation,&param_1->_OnTileViewScrolled,param_1->_ScrollBarStyle,false);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_798.SharedReferenceCount.ReferenceController);
    if (*(longlong *)&this->field_0x2d8 != 0) {
      pSVar18 = TSharedPtr<SScrollBar,1>::operator->((TSharedPtr<SScrollBar,1> *)&this->field_0x2d8)
      ;
      SScrollBar::SetDragFocusCause(pSVar18,param_1->_ScrollbarDragFocusCause);
      pSVar18 = TSharedPtr<SScrollBar,1>::operator->((TSharedPtr<SScrollBar,1> *)&this->field_0x2d8)
      ;
      pTVar19 = TAttribute<EVisibility>::TAttribute<EVisibility>
                          (&local_5c8,&param_1->_ScrollbarVisibility);
      SScrollBar::SetUserVisibility(pSVar18,pTVar19);
      pSVar18 = TSharedPtr<SScrollBar,1>::operator->((TSharedPtr<SScrollBar,1> *)&this->field_0x2d8)
      ;
      SScrollBar::SetScrollbarDisabledVisibility
                (pSVar18,(EVisibility)(param_1->_ScrollbarDisabledVisibility).Value.Value);
    }
    pTVar10 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->field_0x8,&local_638);
    pTVar3 = (pTVar10->SharedReferenceCount).ReferenceController;
    pSVar4 = pTVar10->Object;
    if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
      paVar24 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar24 = &pTVar3->SharedReferenceCount;
      LOCK();
      *paVar24 = (atomic<int>)((int)*paVar24 + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_638.SharedReferenceCount.ReferenceController);
    pTVar20 = ::operator_new(0x28);
    if (pTVar20 == (TReferenceControllerBase<1> *)0x0) {
      local_7c8.Object = (ISlateMetaData *)___xmm_00000000000000000000000000000010;
      local_7c8.SharedReferenceCount.ReferenceController = _UNK_150651568;
    }
    else {
      pTVar20->SharedReferenceCount = (atomic<int>)0x1;
      pTVar20->WeakReferenceCount = (atomic<int>)0x1;
      pTVar20->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_V__TTableViewMetadata_V__TSharedRef___CBUFLoudnessMetric_FLoudnessMeterWidgetView_AudioWidgets___00_____00_SharedPointerInternals__6B_
      ;
      if (pSVar4 != (SWidget *)0x0) {
        pTVar23 = (TReferenceControllerBase<1> *)
                  &pSVar4[2].PersistentState.CachedElementHandle.Ptr.WeakReferenceCount;
      }
      if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
        pTVar20[1]._padding_ =
             (longlong)
             &
             ___7__TTableViewMetadata_V__TSharedRef___CBUFLoudnessMetric_FLoudnessMeterWidgetView_AudioWidgets___00____6B_
        ;
        *(TReferenceControllerBase<1> **)&pTVar20[1].SharedReferenceCount = pTVar23;
        pTVar20[2]._padding_ = 0;
      }
      else {
        LOCK();
        *paVar24 = (atomic<int>)((int)*paVar24 + 1);
        UNLOCK();
        pTVar20[1]._padding_ =
             (longlong)
             &
             ___7__TTableViewMetadata_V__TSharedRef___CBUFLoudnessMetric_FLoudnessMeterWidgetView_AudioWidgets___00____6B_
        ;
        *(TReferenceControllerBase<1> **)&pTVar20[1].SharedReferenceCount = pTVar23;
        pTVar20[2]._padding_ = (longlong)pTVar3;
        LOCK();
        pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      local_7c8.Object = (ISlateMetaData *)(pTVar20 + 1);
      if ((TReferenceControllerBase<1> *)local_7c8.Object == (TReferenceControllerBase<1> *)0x0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L"");
        if (bVar9) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      LOCK();
      pTVar20->SharedReferenceCount = (atomic<int>)((int)pTVar20->SharedReferenceCount + 1);
      UNLOCK();
      pTVar23 = pTVar20;
      local_7c8.SharedReferenceCount.ReferenceController = pTVar20;
    }
    SWidget::AddMetadataInternal((SWidget *)this,&local_7c8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_7c8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar23);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  else {
    puVar22 = &this->field_0x268;
    *(undefined4 *)puVar22 = 2;
    puVar14 = (undefined4 *)&this->field_0x26c;
    if (puVar22 == (undefined1 *)0x0) {
      puVar14 = (undefined4 *)&DAT_00000054;
    }
    *puVar14 = 2;
    pFVar15 = STextBlock::FArguments::FArguments(&local_5a8);
    pFVar16 = FText::FromString(&local_648,&local_7f8);
    FText::FText(&local_6d8.Value,pFVar16);
    local_6d8.bIsSet = true;
    local_6d8.Getter._16_8_ = 0;
    local_6d8.Getter._0_8_ = 0;
    local_6d8.Getter._8_8_ = 0;
    pFVar15 = STextBlock::FArguments::Text(pFVar15,&local_6d8);
    FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_res18 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_res20,&local_res18,true);
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
              (&local_660,"STextBlock",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\STileView.h"
               ,0xd8,local_res8);
    FMemScope::~FMemScope(&local_res20);
    FLLMScope::~FLLMScope(local_res10);
    pTVar17 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                        (&local_660,(TSharedRef<STextBlock,1> *)(local_6a8 + 8),pFVar15);
    this_01 = (FSlotBase *)&this->field_0x238;
    pTVar23 = (pTVar17->SharedReferenceCount).ReferenceController;
    pSVar6 = pTVar17->Object;
    if (pTVar23 == (TReferenceControllerBase<1> *)0x0) {
      if (puVar22 == (undefined1 *)0x0) {
        this_01 = (FSlotBase *)&DAT_00000020;
      }
      FSlotBase::DetatchParentFromContent(this_01);
    }
    else {
      LOCK();
      pTVar23->SharedReferenceCount = (atomic<int>)((int)pTVar23->SharedReferenceCount + 1);
      UNLOCK();
      if (puVar22 == (undefined1 *)0x0) {
        this_01 = (FSlotBase *)&DAT_00000020;
      }
      FSlotBase::DetatchParentFromContent(this_01);
      LOCK();
      pTVar23->SharedReferenceCount = (atomic<int>)((int)pTVar23->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar3 = (this_01->Widget).SharedReferenceCount.ReferenceController;
    (this_01->Widget).Object = (SWidget *)pSVar6;
    (this_01->Widget).SharedReferenceCount.ReferenceController = pTVar23;
    local_7d8 = pSVar6;
    pTStack_7d0 = pTVar23;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    FSlotBase::AfterContentOrOwnerAssigned(this_01);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar23);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_698);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_660._Widget.SharedReferenceCount.ReferenceController);
    if (local_648.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_648.TextData.Reference + 0x10))();
    }
    STextBlock::FArguments::~FArguments(&local_5a8);
  }
  if (local_7f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_7f8.Data.AllocatorInstance.Data);
  }
  return;
}

// GetNumItemsBeingObserved @ 14d9301e0

int __thiscall
STileView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>::
GetNumItemsBeingObserved
          (STileView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
           *this)

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

// GetNumItemsPerLine @ 14d930280

/* WARNING: Removing unreachable block (ram,0x00014d930320) */

int __thiscall
STileView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>::
GetNumItemsPerLine(STileView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
                   *this)

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

// OnNavigation @ 14d951bd0

FNavigationReply * __thiscall
STileView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>::
OnNavigation(STileView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
             *this,FNavigationReply *__return_storage_ptr__,FGeometry *param_1,
            FNavigationEvent *param_2)

{
  EUINavigation EVar1;
  longlong *plVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1> *pTVar8;
  TArrayView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_const_,int>
  local_48;
  TSharedPtr<SWidget,1> local_38 [2];
  
  iVar6 = 0;
  plVar2 = *(longlong **)&this->field_0x9f8;
  if (((plVar2 == (longlong *)0x0) || (this->field_0x99e == '\0')) ||
     ((this->field_0x99d == '\0' && (param_2->NavigationGenesis == Controller))))
  goto LAB_14d951c8a;
  puVar7 = (undefined4 *)(**(code **)(*plVar2 + 8))(plVar2,local_38);
  local_48.DataPtr._0_4_ = *puVar7;
  local_48.DataPtr._4_4_ = puVar7[1];
  iVar4 = puVar7[2];
  local_48._12_4_ = puVar7[3];
  local_48.ArrayNum = iVar4;
  iVar5 = (**(code **)(*(longlong *)this + 0x270))(this);
  if (*(longlong *)&this->field_0x858 != 0) {
    pTVar8 = TListTypeTraits<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,void>
             ::NullableItemTypeConvertToItemType
                       ((TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>
                         *)local_38,
                        (TSharedPtr<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>
                         *)&this->field_0x858);
    iVar6 = TArrayView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_const_,int>
            ::Find(&local_48,pTVar8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38[0].SharedReferenceCount.ReferenceController);
  }
  EVar1 = param_2->NavigationType;
  if (*(int *)&this->field_0x44c == 1) {
    if (EVar1 != Left) {
      if (EVar1 != Right) goto LAB_14d951c8a;
      goto LAB_14d951ce1;
    }
LAB_14d951cc5:
    if ((this->bWrapHorizontalNavigation == false) && (iVar6 % iVar5 < 1)) goto LAB_14d951c8a;
    iVar6 = iVar6 + -1;
  }
  else {
    if (*(int *)&this->field_0x44c != 0) goto LAB_14d951c8a;
    if (EVar1 == Up) goto LAB_14d951cc5;
    if (EVar1 != Down) goto LAB_14d951c8a;
LAB_14d951ce1:
    if ((this->bWrapHorizontalNavigation == false) && (iVar5 + -1 <= iVar6 % iVar5))
    goto LAB_14d951c8a;
    iVar6 = iVar6 + 1;
  }
  if (((-1 < iVar6) && (iVar6 < iVar4)) && (this->field_0x449 != '\0')) {
    pcVar3 = *(code **)(*(longlong *)this + 0x2e0);
    pTVar8 = TArrayView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_const_,int>
             ::operator[](&local_48,iVar6);
    (*pcVar3)(this,pTVar8,param_2);
    local_38[0].Object = (SWidget *)0x0;
    local_38[0].SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    FNavigationReply::Explicit(__return_storage_ptr__,local_38);
    return __return_storage_ptr__;
  }
LAB_14d951c8a:
  SListView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>::
  OnNavigation((SListView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
                *)this,__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// ReGenerateItems @ 14d95dae0

FReGenerateResults * __thiscall
STileView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>::
ReGenerateItems(STileView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
                *this,FReGenerateResults *__return_storage_ptr__,FGeometry *param_1)

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
  TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1> *pTVar19;
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
    SListView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>::
    FWidgetGenerator::OnBeginGenerationPass(local_110);
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
      pTVar19 = (TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1> *)
                ((longlong)(int)uVar17 * 0x10 + local_c8);
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
      SListView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>::
      GenerateWidgetForItem
                ((SListView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
                  *)this,pTVar19,uVar17,uVar20,fVar21);
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
    SListView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>::
    FWidgetGenerator::ProcessItemCleanUp(local_110);
    SListView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>::
    FWidgetGenerator::ValidateWidgetGeneration(local_110);
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

// ScrollBy @ 14d965a80

float __thiscall
STileView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>::ScrollBy
          (STileView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
           *this,FGeometry *param_1,float param_2,EAllowOverscroll param_3)

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

// ScrollIntoView @ 14d966d10

EScrollIntoViewResult __thiscall
STileView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>::
ScrollIntoView(STileView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
               *this,FGeometry *param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  double dVar5;
  float fVar6;
  bool bVar7;
  EScrollIntoViewResult EVar8;
  int iVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  FTableViewDimensions *pFVar12;
  TReferenceControllerBase<1> *pTVar13;
  int iVar14;
  longlong lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  double dVar19;
  double dVar20;
  undefined1 in_XMM1 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  double dVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  FDeprecateSlateVector2D local_res8;
  FTableViewDimensions local_148;
  FTableViewDimensions local_13c;
  longlong local_130;
  TReferenceControllerBase<1> *local_128;
  longlong local_120;
  FSharedReferencer<1> FStack_118;
  longlong *local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  TReferenceControllerBase<1> *pTStack_f8;
  undefined1 local_f0 [8];
  TReferenceControllerBase<1> *local_e8;
  undefined1 local_e0 [184];
  
  puVar1 = &this->field_0x8d0;
  if ((*(longlong *)puVar1 != 0) &&
     (plVar11 = *(longlong **)&this->field_0x9f8, plVar11 != (longlong *)0x0)) {
    puVar10 = (undefined8 *)(**(code **)(*plVar11 + 8))(plVar11,local_e0);
    local_110 = (longlong *)*puVar10;
    uStack_108 = puVar10[1];
    if ((*(longlong *)puVar1 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      EVar8 = (*pcVar3)();
      return EVar8;
    }
    pTVar13 = *(TReferenceControllerBase<1> **)&this->field_0x8d8;
    lVar15 = *(longlong *)puVar1;
    if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((lVar15 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      EVar8 = (*pcVar3)();
      return EVar8;
    }
    for (plVar11 = local_110; plVar11 != local_110 + (longlong)(int)uStack_108 * 2;
        plVar11 = plVar11 + 2) {
      if (*plVar11 == lVar15) {
        lVar15 = (longlong)plVar11 - (longlong)local_110;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13)
        ;
        iVar14 = (int)(lVar15 >> 4);
        if (iVar14 == -1) goto LAB_14d966e2a;
        local_res8 = param_1->Size;
        fVar16 = STableViewBase::GetItemHeight((STableViewBase *)this);
        fVar17 = STableViewBase::GetItemWidth((STableViewBase *)this);
        FTableViewDimensions::FTableViewDimensions
                  (&local_148,*(EOrientation *)&this->field_0x44c,fVar17,fVar16);
        pFVar12 = FTableViewDimensions::FTableViewDimensions
                            (&local_13c,*(EOrientation *)&this->field_0x44c,
                             (FDeprecateVector2DParameter *)&local_res8);
        fVar6 = __real_3f800000;
        fVar25 = __real_3f800000 / local_148.ScrollAxis;
        fVar16 = pFVar12->ScrollAxis;
        fVar26 = fVar16 * fVar25;
        fVar18 = (float)(**(code **)(*(longlong *)this + 0x268))(this);
        fVar17 = 0.0;
        if (((fVar18 == 0.0) &&
            (bVar7 = STableViewBase::IsPendingRefresh((STableViewBase *)this), bVar7)) &&
           (*(double *)&this->field_0x368 == 0.0)) {
          return Deferred;
        }
        STableViewBase::EndInertialScrolling((STableViewBase *)this,false);
        iVar9 = (**(code **)(*(longlong *)this + 0x270))(this);
        dVar5 = (double)iVar9;
        dVar19 = STableViewBase::GetTargetScrollOffset((STableViewBase *)this);
        fVar18 = (float)iVar14;
        dVar19 = dVar19 / dVar5;
        fVar27 = (float)iVar9;
        auVar22._0_8_ = __real_bfe0000000000000 - (dVar19 + dVar19);
        auVar22._8_8_ = 0;
        iVar14 = (int)ROUND((fVar18 + fVar18) / fVar27 - __real_3f000000) >> 1;
        dVar24 = (double)fVar26 + dVar19;
        auVar23._0_8_ =
             (double)(((int)ROUND(auVar22._0_8_) >> 1) +
                     ((int)ROUND((dVar24 + dVar24) - __real_3fe0000000000000) >> 1)) + dVar19;
        auVar23._8_8_ = 0;
        if (this->field_0x9a2 == '\0') {
          auVar21._8_8_ = 0;
          auVar21._0_8_ = dVar19;
          auVar21 = roundpd(in_XMM1,auVar21,2);
          auVar23 = roundpd(auVar22,auVar23,1);
          dVar24 = auVar23._0_8_;
        }
        else {
          auVar23 = roundpd(auVar22,auVar23,2);
          dVar24 = auVar23._0_8_;
          auVar4._8_8_ = 0;
          auVar4._0_8_ = dVar19;
          auVar21 = roundpd(in_XMM1,auVar4,1);
        }
        dVar19 = (double)iVar14;
        dVar20 = auVar21._0_8_;
        if ((dVar19 < dVar20) || (dVar24 < dVar19)) {
          if ((dVar19 < dVar20 - __real_3ff0000000000000) ||
             (dVar24 + __real_3ff0000000000000 < dVar19)) {
            fVar17 = ((float)iVar14 - fVar26 * __real_3f000000) + __real_3f000000;
          }
          else {
            fVar17 = (float)iVar14;
            if (dVar19 != dVar20 - __real_3ff0000000000000) {
              if (this->field_0x318 == '\0') {
                fVar17 = (fVar17 - fVar26) + fVar6 + *(float *)&this->field_0x998;
              }
              else {
                fVar17 = fVar17 - ((float)((int)ROUND((fVar25 + fVar25) * fVar16 - __real_3f000000)
                                          >> 1) - fVar6);
              }
            }
          }
          iVar14 = (**(code **)(*(longlong *)this + 0x2a0))(this);
          dVar19 = (double)iVar14 - (double)fVar26 * dVar5;
          if ((double)fVar17 * dVar5 <= dVar19) {
            dVar19 = (double)fVar17 * dVar5;
          }
          if (dVar19 <= 0.0) {
            dVar19 = 0.0;
          }
          fVar17 = (float)dVar19;
LAB_14d967223:
          STableViewBase::SetScrollOffset((STableViewBase *)this,fVar17);
        }
        else {
          if (dVar19 == dVar20) {
            if ((this->field_0x318 == '\0') || (iVar14 < 1)) {
              fVar17 = *(float *)&this->field_0x998;
            }
            fVar17 = (float)(iVar14 * iVar9) - fVar17;
            goto LAB_14d967223;
          }
          if (dVar19 == dVar24) {
            if (this->field_0x318 == '\0') {
              fVar17 = (((float)iVar14 - fVar26) + fVar6 + *(float *)&this->field_0x998) * fVar27;
            }
            else {
              auVar23 = roundps(auVar21,ZEXT416((uint)fVar26),1);
              fVar17 = (((float)iVar14 - auVar23._0_4_) + fVar6) * fVar27;
            }
            goto LAB_14d967223;
          }
        }
        (**(code **)(*(longlong *)this + 0x248))(this);
        lVar15 = *(longlong *)&this->field_0x8d8;
        uVar2 = *(undefined8 *)puVar1;
        if (lVar15 != 0) {
          LOCK();
          *(int *)(lVar15 + 8) = *(int *)(lVar15 + 8) + 1;
          UNLOCK();
        }
        local_100 = *(undefined8 *)&this->field_0x8e8;
        pTVar13 = *(TReferenceControllerBase<1> **)&this->field_0x8f0;
        *(undefined8 *)&this->field_0x8e8 = uVar2;
        *(longlong *)&this->field_0x8f0 = lVar15;
        pTStack_f8 = pTVar13;
        break;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
LAB_14d966e2a:
    local_120 = 0;
    FStack_118.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if ((longlong *)puVar1 != &local_120) {
      *(undefined8 *)puVar1 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&this->field_0x8d8,&FStack_118);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_118.ReferenceController);
  }
  local_130 = *(longlong *)&this->field_0x8e8;
  if ((local_130 == 0) || (this->field_0x320 == '\0')) {
    EVar8 = Success;
  }
  else {
    pcVar3 = *(code **)(*(longlong *)&this->field_0x588 + 0xd8);
    local_128 = *(TReferenceControllerBase<1> **)&this->field_0x8f0;
    if (local_128 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_128->SharedReferenceCount = (atomic<int>)((int)local_128->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((local_130 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      EVar8 = (*pcVar3)();
      return EVar8;
    }
    plVar11 = (longlong *)(*pcVar3)(&this->field_0x588,local_f0,&local_130);
    lVar15 = *plVar11;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_e8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_128);
    EVar8 = (EScrollIntoViewResult)(lVar15 == 0);
  }
  return EVar8;
}

