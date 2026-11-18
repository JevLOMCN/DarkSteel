// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangePipelines
// Functions: 18

// Image<SInterchangeGenericAssetSkeletonConflictWidget,enum_EInterchangeSkeletonCompareSection> @ 14e758a20

FArguments * __thiscall
SImage::FArguments::
Image<SInterchangeGenericAssetSkeletonConflictWidget,enum_EInterchangeSkeletonCompareSection>
          (FArguments *this,SInterchangeGenericAssetSkeletonConflictWidget *param_1,
          pmf_5046b25f *param_2,EInterchangeSkeletonCompareSection param_3)

{
  SWidget *pSVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined8 *puVar7;
  TSharedRef<SWidget_const_,1> *pTVar8;
  ulong64 uVar9;
  TReferenceControllerBase<1> *pTVar10;
  uint uStackX_c;
  TSharedRef<SWidget_const_,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  (this->_Image).bIsSet = true;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(this->_Image).Getter,
             (FWriteAccessScope *)&local_38);
  local_20 = &(this->_Image).Getter.field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar8 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_48);
    pTVar10 = (pTVar8->SharedReferenceCount).ReferenceController;
    pSVar1 = pTVar8->Object;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy__W4EInterchangeSkeletonCompareSection____6B_
    ;
    *(EInterchangeSkeletonCompareSection *)(puVar7 + 1) = param_3;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSInterchangeGenericAssetSkeletonConflictWidget___00__A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy__W4EInterchangeSkeletonCompareSection____6B_
    ;
    puVar7[3] = pSVar1;
    puVar7[4] = pTVar10;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->WeakReferenceCount = (atomic<int>)((int)pTVar10->WeakReferenceCount + 1);
      UNLOCK();
    }
    bVar6 = true;
    bVar5 = true;
    bVar4 = true;
    puVar7[5] = uVar2;
    puVar7[6] = uVar3;
  }
  if (bVar4) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return this;
}

// OnClicked<SInterchangeGenericAssetSkeletonConflictWidget> @ 14e760370

FArguments * __thiscall
SButton::FArguments::OnClicked<SInterchangeGenericAssetSkeletonConflictWidget>
          (FArguments *this,SInterchangeGenericAssetSkeletonConflictWidget *param_1,
          pmf_6c60570b *param_2)

{
  SWidget *pSVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined8 *puVar7;
  TSharedRef<SWidget,1> *pTVar8;
  ulong64 uVar9;
  TReferenceControllerBase<1> *pTVar10;
  uint uStackX_c;
  TSharedRef<SWidget,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_OnClicked,
             (FWriteAccessScope *)&local_38);
  local_20 = &(this->_OnClicked).field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar8 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_48);
    pTVar10 = (pTVar8->SharedReferenceCount).ReferenceController;
    pSVar1 = pTVar8->Object;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSInterchangeGenericAssetSkeletonConflictWidget___00__A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[3] = pSVar1;
    puVar7[4] = pTVar10;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->WeakReferenceCount = (atomic<int>)((int)pTVar10->WeakReferenceCount + 1);
      UNLOCK();
    }
    bVar6 = true;
    bVar5 = true;
    bVar4 = true;
    puVar7[5] = uVar2;
    puVar7[6] = uVar3;
  }
  if (bVar4) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return this;
}

// OnClicked<SInterchangeGenericAssetSkeletonConflictWidget,enum_EInterchangeSkeletonCompareSection> @ 14e7604a0

FArguments * __thiscall
SButton::FArguments::
OnClicked<SInterchangeGenericAssetSkeletonConflictWidget,enum_EInterchangeSkeletonCompareSection>
          (FArguments *this,SInterchangeGenericAssetSkeletonConflictWidget *param_1,
          pmf_e662be6c *param_2,EInterchangeSkeletonCompareSection param_3)

{
  SWidget *pSVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined8 *puVar7;
  TSharedRef<SWidget,1> *pTVar8;
  ulong64 uVar9;
  TReferenceControllerBase<1> *pTVar10;
  uint uStackX_c;
  TSharedRef<SWidget,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_OnClicked,
             (FWriteAccessScope *)&local_38);
  local_20 = &(this->_OnClicked).field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar8 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_48);
    pTVar10 = (pTVar8->SharedReferenceCount).ReferenceController;
    pSVar1 = pTVar8->Object;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFReply__XZUFDefaultDelegateUserPolicy__W4EInterchangeSkeletonCompareSection____6B_
    ;
    *(EInterchangeSkeletonCompareSection *)(puVar7 + 1) = param_3;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSInterchangeGenericAssetSkeletonConflictWidget___00__A6A_AVFReply__XZUFDefaultDelegateUserPolicy__W4EInterchangeSkeletonCompareSection____6B_
    ;
    puVar7[3] = pSVar1;
    puVar7[4] = pTVar10;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->WeakReferenceCount = (atomic<int>)((int)pTVar10->WeakReferenceCount + 1);
      UNLOCK();
    }
    bVar6 = true;
    bVar5 = true;
    bVar4 = true;
    puVar7[5] = uVar2;
    puVar7[6] = uVar3;
  }
  if (bVar4) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return this;
}

// FArguments @ 14e765350

FArguments * __thiscall
SListView<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>::FArguments::
FArguments(FArguments *this)

{
  float fVar1;
  TConsoleVariableData<float> *pTVar2;
  bool bVar3;
  ISlateStyle *pIVar4;
  FName *pFVar5;
  FTableViewStyle *pFVar6;
  FScrollBarStyle *pFVar7;
  longlong lVar8;
  FName local_res8;
  FName local_res10;
  
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  pIVar4 = FAppStyle::Get();
  pFVar5 = ::FName::FName(&local_res8,"ListView");
  pFVar6 = (FTableViewStyle *)
           (**(code **)((longlong)*pIVar4 + 0xa0))(pIVar4,FTableViewStyle::TypeName,*pFVar5,0,1);
  if (pFVar6 == (FTableViewStyle *)0x0) {
    pFVar6 = FTableViewStyle::GetDefault();
  }
  this->_ListViewStyle = pFVar6;
  this->_bEnableShadowBoxStyle = false;
  *(undefined8 *)&(this->_OnGenerateRow).field_0x10 = 0;
  *(undefined8 *)&this->_OnGenerateRow = 0;
  *(undefined8 *)&(this->_OnGenerateRow).field_0x8 = 0;
  *(undefined8 *)&(this->_OnGeneratePinnedRow).field_0x10 = 0;
  *(undefined8 *)&this->_OnGeneratePinnedRow = 0;
  *(undefined8 *)&(this->_OnGeneratePinnedRow).field_0x8 = 0;
  *(undefined8 *)&(this->_OnRefreshRow).field_0x10 = 0;
  *(undefined8 *)&this->_OnRefreshRow = 0;
  *(undefined8 *)&(this->_OnRefreshRow).field_0x8 = 0;
  *(undefined8 *)&(this->_OnEntryInitialized).field_0x10 = 0;
  *(undefined8 *)&this->_OnEntryInitialized = 0;
  *(undefined8 *)&(this->_OnEntryInitialized).field_0x8 = 0;
  *(undefined8 *)&(this->_OnRowReleased).field_0x10 = 0;
  *(undefined8 *)&this->_OnRowReleased = 0;
  *(undefined8 *)&(this->_OnRowReleased).field_0x8 = 0;
  *(undefined8 *)&this->_OnListViewScrolled = 0;
  *(undefined8 *)&(this->_OnListViewScrolled).field_0x8 = 0;
  *(undefined4 *)&(this->_OnListViewScrolled).field_0x10 = 0;
  *(undefined8 *)&this->_OnItemScrolledIntoView = 0;
  *(undefined8 *)&(this->_OnItemScrolledIntoView).field_0x8 = 0;
  *(undefined4 *)&(this->_OnItemScrolledIntoView).field_0x10 = 0;
  *(undefined8 *)&this->_OnFinishedScrolling = 0;
  *(undefined8 *)&(this->_OnFinishedScrolling).field_0x8 = 0;
  *(undefined4 *)&(this->_OnFinishedScrolling).field_0x10 = 0;
  (this->_ListItemsSource_SharedObservableArray).Object =
       (TObservableArray<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_> *
       )0x0;
  (this->_ListItemsSource_SharedObservableArray).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->_ItemHeight).Value = 0.0;
  (this->_ItemHeight).bIsSet = false;
  this->_ListItemsSource_ArrayPointer =
       (TArray<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>,TSizedDefaultAllocator<32>_>
        *)0x0;
  this->_ListItemsSource_ObservableArrayPointer =
       (TObservableArray<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_> *
       )0x0;
  *(undefined8 *)&(this->_ItemHeight).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_ItemHeight).Getter = 0;
  *(undefined8 *)&(this->_ItemHeight).Getter.field_0x8 = 0;
  (this->_MaxPinnedItems).Value = 6;
  (this->_MaxPinnedItems).bIsSet = true;
  *(undefined8 *)&(this->_MaxPinnedItems).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_MaxPinnedItems).Getter = 0;
  *(undefined8 *)&(this->_MaxPinnedItems).Getter.field_0x8 = 0;
  *(undefined8 *)&(this->_OnContextMenuOpening).field_0x10 = 0;
  *(undefined8 *)&this->_OnContextMenuOpening = 0;
  *(undefined8 *)&(this->_OnContextMenuOpening).field_0x8 = 0;
  *(undefined8 *)&(this->_OnItemsRebuilt).field_0x10 = 0;
  *(undefined8 *)&this->_OnItemsRebuilt = 0;
  *(undefined8 *)&(this->_OnItemsRebuilt).field_0x8 = 0;
  *(undefined8 *)&(this->_OnMouseButtonClick).field_0x10 = 0;
  *(undefined8 *)&this->_OnMouseButtonClick = 0;
  *(undefined8 *)&(this->_OnMouseButtonClick).field_0x8 = 0;
  *(undefined8 *)&(this->_OnMouseButtonDoubleClick).field_0x10 = 0;
  *(undefined8 *)&this->_OnMouseButtonDoubleClick = 0;
  *(undefined8 *)&(this->_OnMouseButtonDoubleClick).field_0x8 = 0;
  *(undefined8 *)&(this->_OnSelectionChanged).field_0x10 = 0;
  *(undefined8 *)&this->_OnSelectionChanged = 0;
  *(undefined8 *)&(this->_OnSelectionChanged).field_0x8 = 0;
  *(undefined8 *)&(this->_OnIsSelectableOrNavigable).field_0x10 = 0;
  *(undefined8 *)&this->_OnIsSelectableOrNavigable = 0;
  *(undefined8 *)&(this->_OnIsSelectableOrNavigable).field_0x8 = 0;
  (this->_SelectionMode).Value = Multi;
  (this->_SelectionMode).bIsSet = true;
  *(undefined8 *)&(this->_SelectionMode).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_SelectionMode).Getter = 0;
  *(undefined8 *)&(this->_SelectionMode).Getter.field_0x8 = 0;
  (this->_HeaderRow).Object = (SHeaderRow *)0x0;
  (this->_HeaderRow).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_ExternalScrollbar).Object = (SScrollBar *)0x0;
  (this->_ExternalScrollbar).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->_FixedLineScrollOffset).bIsSet = false;
  (this->_ScrollbarVisibility).Value = (TEnumAsByte<EVisibility::Private>)0x19;
  (this->_ScrollbarVisibility).bIsSet = false;
  this->_ClearSelectionOnClick = true;
  this->_Orientation = Orient_Vertical;
  this->_EnableAnimatedScrolling = false;
  *(undefined8 *)&(this->_ScrollbarVisibility).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_ScrollbarVisibility).Getter = 0;
  *(undefined8 *)&(this->_ScrollbarVisibility).Getter.field_0x8 = 0;
  this->_ScrollbarDragFocusCause = Mouse;
  this->_AllowOverscroll = Yes;
  pIVar4 = FAppStyle::Get();
  pFVar5 = ::FName::FName(&local_res10,"ScrollBar");
  pFVar7 = (FScrollBarStyle *)
           (**(code **)((longlong)*pIVar4 + 0xa0))(pIVar4,FScrollBarStyle::TypeName,*pFVar5,0,1);
  if (pFVar7 == (FScrollBarStyle *)0x0) {
    pFVar7 = FScrollBarStyle::GetDefault();
  }
  this->_ScrollBarStyle = pFVar7;
  this->_PreventThrottling = false;
  pTVar2 = GlobalScrollAmount.Ref;
  this->_ConsumeMouseWheel = WhenScrollingPossible;
  bVar3 = IsInParallelGameThread();
  if (!bVar3) {
    bVar3 = IsInGameThread();
    lVar8 = 4;
    if (!bVar3) goto LAB_14e76563d;
  }
  lVar8 = 0;
LAB_14e76563d:
  fVar1 = *(float *)((longlong)pTVar2->ShadowedValue + lVar8);
  (this->_IsFocusable).Value = true;
  (this->_IsFocusable).bIsSet = true;
  this->_WheelScrollMultiplier = fVar1;
  this->_HandleSpacebarSelection = false;
  this->_NavigationScrollOffset = 0.5;
  (this->_ScrollBarPadding).Left = 0.0;
  this->_HandleGamepadEvents = true;
  this->_HandleDirectionalNavigation = true;
  *(undefined8 *)&(this->_IsFocusable).Getter.field_0x8 = 0;
  (this->_ScrollBarPadding).Top = 0.0;
  (this->_ScrollBarPadding).Right = 0.0;
  (this->_ScrollBarPadding).Bottom = 0.0;
  *(undefined8 *)&(this->_IsFocusable).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_IsFocusable).Getter = 0;
  this->_ReturnFocusToSelection = false;
  this->_ClearScrollVelocityOnSelection = true;
  *(undefined8 *)&(this->_OnItemToString_Debug).field_0x10 = 0;
  *(undefined8 *)&this->_OnItemToString_Debug = 0;
  *(undefined8 *)&(this->_OnItemToString_Debug).field_0x8 = 0;
  *(undefined8 *)&(this->_OnEnteredBadState).field_0x10 = 0;
  *(undefined8 *)&this->_OnEnteredBadState = 0;
  *(undefined8 *)&(this->_OnEnteredBadState).field_0x8 = 0;
  *(undefined8 *)&this->_OnKeyDownHandler = 0;
  *(undefined8 *)&(this->_OnKeyDownHandler).field_0x8 = 0;
  *(undefined4 *)&(this->_OnKeyDownHandler).field_0x10 = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 1;
  return this;
}

// FArguments @ 14e765700

FArguments * __thiscall
STableRow<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>::FArguments::
FArguments(FArguments *this)

{
  atomic<int> *paVar1;
  FSharedReferencer<1> FVar2;
  ISlateStyle *pIVar3;
  FName *pFVar4;
  FTableRowStyle *pFVar5;
  FName local_res8;
  
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  pIVar3 = FAppStyle::Get();
  pFVar4 = ::FName::FName(&local_res8,"TableView.Row");
  pFVar5 = (FTableRowStyle *)
           (**(code **)((longlong)*pIVar3 + 0xa0))(pIVar3,FTableRowStyle::TypeName,*pFVar4,0,1);
  if (pFVar5 == (FTableRowStyle *)0x0) {
    pFVar5 = FTableRowStyle::GetDefault();
  }
  this->_Style = pFVar5;
  pIVar3 = FAppStyle::Get();
  this->_ExpanderStyleSet = pIVar3;
  *(undefined8 *)&this->_OnCanAcceptDrop = 0;
  *(undefined8 *)&(this->_OnCanAcceptDrop).field_0x8 = 0;
  *(undefined4 *)&(this->_OnCanAcceptDrop).field_0x10 = 0;
  *(undefined8 *)&this->_OnAcceptDrop = 0;
  *(undefined8 *)&(this->_OnAcceptDrop).field_0x8 = 0;
  *(undefined4 *)&(this->_OnAcceptDrop).field_0x10 = 0;
  *(undefined8 *)&this->_OnPaintDropIndicator = 0;
  *(undefined8 *)&(this->_OnPaintDropIndicator).field_0x8 = 0;
  *(undefined4 *)&(this->_OnPaintDropIndicator).field_0x10 = 0;
  *(undefined8 *)&this->_OnDragDetected = 0;
  *(undefined8 *)&(this->_OnDragDetected).field_0x8 = 0;
  *(undefined4 *)&(this->_OnDragDetected).field_0x10 = 0;
  *(undefined8 *)&this->_OnDragEnter = 0;
  *(undefined8 *)&(this->_OnDragEnter).field_0x8 = 0;
  *(undefined4 *)&(this->_OnDragEnter).field_0x10 = 0;
  *(undefined8 *)&this->_OnDragLeave = 0;
  *(undefined8 *)&(this->_OnDragLeave).field_0x8 = 0;
  *(undefined4 *)&(this->_OnDragLeave).field_0x10 = 0;
  *(undefined8 *)&this->_OnDrop = 0;
  *(undefined8 *)&(this->_OnDrop).field_0x8 = 0;
  *(undefined4 *)&(this->_OnDrop).field_0x10 = 0;
  (this->_Padding).Value.Left = 0.0;
  (this->_Padding).Value.Top = 0.0;
  (this->_Padding).Value.Right = 0.0;
  (this->_Padding).Value.Bottom = 0.0;
  (this->_Padding).bIsSet = true;
  *(undefined8 *)&(this->_Padding).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_Padding).Getter = 0;
  *(undefined8 *)&(this->_Padding).Getter.field_0x8 = 0;
  this->_ShowSelection = true;
  this->_ShowWires = false;
  this->_bAllowPreselectedItemActivation = false;
  this->_SignalSelectionMode = Deferred;
  (this->_Content).Widget.Object = SNullWidget::NullWidget.Object;
  FVar2 = SNullWidget::NullWidget.SharedReferenceCount;
  (this->_Content).Widget.SharedReferenceCount.ReferenceController =
       SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
  if (FVar2.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar2.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  return this;
}

// FArguments @ 14e765870

FArguments * __thiscall
STableRow<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>::FArguments::FArguments
          (FArguments *this)

{
  atomic<int> *paVar1;
  FSharedReferencer<1> FVar2;
  ISlateStyle *pIVar3;
  FName *pFVar4;
  FTableRowStyle *pFVar5;
  FName local_res8;
  
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  pIVar3 = FAppStyle::Get();
  pFVar4 = ::FName::FName(&local_res8,"TableView.Row");
  pFVar5 = (FTableRowStyle *)
           (**(code **)((longlong)*pIVar3 + 0xa0))(pIVar3,FTableRowStyle::TypeName,*pFVar4,0,1);
  if (pFVar5 == (FTableRowStyle *)0x0) {
    pFVar5 = FTableRowStyle::GetDefault();
  }
  this->_Style = pFVar5;
  pIVar3 = FAppStyle::Get();
  this->_ExpanderStyleSet = pIVar3;
  *(undefined8 *)&this->_OnCanAcceptDrop = 0;
  *(undefined8 *)&(this->_OnCanAcceptDrop).field_0x8 = 0;
  *(undefined4 *)&(this->_OnCanAcceptDrop).field_0x10 = 0;
  *(undefined8 *)&this->_OnAcceptDrop = 0;
  *(undefined8 *)&(this->_OnAcceptDrop).field_0x8 = 0;
  *(undefined4 *)&(this->_OnAcceptDrop).field_0x10 = 0;
  *(undefined8 *)&this->_OnPaintDropIndicator = 0;
  *(undefined8 *)&(this->_OnPaintDropIndicator).field_0x8 = 0;
  *(undefined4 *)&(this->_OnPaintDropIndicator).field_0x10 = 0;
  *(undefined8 *)&this->_OnDragDetected = 0;
  *(undefined8 *)&(this->_OnDragDetected).field_0x8 = 0;
  *(undefined4 *)&(this->_OnDragDetected).field_0x10 = 0;
  *(undefined8 *)&this->_OnDragEnter = 0;
  *(undefined8 *)&(this->_OnDragEnter).field_0x8 = 0;
  *(undefined4 *)&(this->_OnDragEnter).field_0x10 = 0;
  *(undefined8 *)&this->_OnDragLeave = 0;
  *(undefined8 *)&(this->_OnDragLeave).field_0x8 = 0;
  *(undefined4 *)&(this->_OnDragLeave).field_0x10 = 0;
  *(undefined8 *)&this->_OnDrop = 0;
  *(undefined8 *)&(this->_OnDrop).field_0x8 = 0;
  *(undefined4 *)&(this->_OnDrop).field_0x10 = 0;
  (this->_Padding).Value.Left = 0.0;
  (this->_Padding).Value.Top = 0.0;
  (this->_Padding).Value.Right = 0.0;
  (this->_Padding).Value.Bottom = 0.0;
  (this->_Padding).bIsSet = true;
  *(undefined8 *)&(this->_Padding).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_Padding).Getter = 0;
  *(undefined8 *)&(this->_Padding).Getter.field_0x8 = 0;
  this->_ShowSelection = true;
  this->_ShowWires = false;
  this->_bAllowPreselectedItemActivation = false;
  this->_SignalSelectionMode = Deferred;
  (this->_Content).Widget.Object = SNullWidget::NullWidget.Object;
  FVar2 = SNullWidget::NullWidget.SharedReferenceCount;
  (this->_Content).Widget.SharedReferenceCount.ReferenceController =
       SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
  if (FVar2.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar2.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  return this;
}

// FArguments @ 14e7659e0

FArguments * __thiscall
STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>::FArguments::FArguments
          (FArguments *this)

{
  TConsoleVariableData<float> *pTVar1;
  bool bVar2;
  ISlateStyle *pIVar3;
  FName *pFVar4;
  FTableViewStyle *pFVar5;
  FScrollBarStyle *pFVar6;
  longlong lVar7;
  FName local_res8;
  FName local_res10;
  
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  pIVar3 = FAppStyle::Get();
  pFVar4 = ::FName::FName(&local_res8,"TreeView");
  pFVar5 = (FTableViewStyle *)
           (**(code **)((longlong)*pIVar3 + 0xa0))(pIVar3,FTableViewStyle::TypeName,*pFVar4,0,1);
  if (pFVar5 == (FTableViewStyle *)0x0) {
    pFVar5 = FTableViewStyle::GetDefault();
  }
  this->_TreeViewStyle = pFVar5;
  *(undefined8 *)&(this->_OnGenerateRow).field_0x10 = 0;
  *(undefined8 *)&this->_OnGenerateRow = 0;
  *(undefined8 *)&(this->_OnGenerateRow).field_0x8 = 0;
  *(undefined8 *)&(this->_OnGeneratePinnedRow).field_0x10 = 0;
  *(undefined8 *)&this->_OnGeneratePinnedRow = 0;
  *(undefined8 *)&(this->_OnGeneratePinnedRow).field_0x8 = 0;
  *(undefined8 *)&(this->_OnRefreshRow).field_0x10 = 0;
  *(undefined8 *)&this->_OnRefreshRow = 0;
  *(undefined8 *)&(this->_OnRefreshRow).field_0x8 = 0;
  *(undefined8 *)&this->_OnRowReleased = 0;
  *(undefined8 *)&(this->_OnRowReleased).field_0x8 = 0;
  *(undefined4 *)&(this->_OnRowReleased).field_0x10 = 0;
  *(undefined8 *)&this->_OnTreeViewScrolled = 0;
  *(undefined8 *)&(this->_OnTreeViewScrolled).field_0x8 = 0;
  *(undefined4 *)&(this->_OnTreeViewScrolled).field_0x10 = 0;
  *(undefined8 *)&this->_OnFinishedScrolling = 0;
  *(undefined8 *)&(this->_OnFinishedScrolling).field_0x8 = 0;
  *(undefined4 *)&(this->_OnFinishedScrolling).field_0x10 = 0;
  *(undefined8 *)&this->_OnItemScrolledIntoView = 0;
  *(undefined8 *)&(this->_OnItemScrolledIntoView).field_0x8 = 0;
  *(undefined4 *)&(this->_OnItemScrolledIntoView).field_0x10 = 0;
  *(undefined8 *)&(this->_OnGetChildren).field_0x10 = 0;
  *(undefined8 *)&this->_OnGetChildren = 0;
  *(undefined8 *)&(this->_OnGetChildren).field_0x8 = 0;
  *(undefined8 *)&(this->_OnSetExpansionRecursive).field_0x10 = 0;
  *(undefined8 *)&this->_OnSetExpansionRecursive = 0;
  *(undefined8 *)&(this->_OnSetExpansionRecursive).field_0x8 = 0;
  (this->_TreeItemsSource_SharedObservableArray).Object =
       (TObservableArray<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_> *)0x0;
  (this->_TreeItemsSource_SharedObservableArray).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->_ItemHeight).Value = 0.0;
  (this->_ItemHeight).bIsSet = false;
  this->_TreeItemsSource_ArrayPointer =
       (TArray<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,TSizedDefaultAllocator<32>_>
        *)0x0;
  this->_TreeItemsSource_ObservableArrayPointer =
       (TObservableArray<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_> *)0x0;
  *(undefined8 *)&(this->_ItemHeight).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_ItemHeight).Getter = 0;
  *(undefined8 *)&(this->_ItemHeight).Getter.field_0x8 = 0;
  (this->_MaxPinnedItems).Value = 6;
  (this->_MaxPinnedItems).bIsSet = true;
  *(undefined8 *)&(this->_MaxPinnedItems).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_MaxPinnedItems).Getter = 0;
  *(undefined8 *)&(this->_MaxPinnedItems).Getter.field_0x8 = 0;
  *(undefined8 *)&(this->_OnContextMenuOpening).field_0x10 = 0;
  *(undefined8 *)&this->_OnContextMenuOpening = 0;
  *(undefined8 *)&(this->_OnContextMenuOpening).field_0x8 = 0;
  *(undefined8 *)&(this->_OnItemsRebuilt).field_0x10 = 0;
  *(undefined8 *)&this->_OnItemsRebuilt = 0;
  *(undefined8 *)&(this->_OnItemsRebuilt).field_0x8 = 0;
  *(undefined8 *)&(this->_OnMouseButtonClick).field_0x10 = 0;
  *(undefined8 *)&this->_OnMouseButtonClick = 0;
  *(undefined8 *)&(this->_OnMouseButtonClick).field_0x8 = 0;
  *(undefined8 *)&(this->_OnMouseButtonDoubleClick).field_0x10 = 0;
  *(undefined8 *)&this->_OnMouseButtonDoubleClick = 0;
  *(undefined8 *)&(this->_OnMouseButtonDoubleClick).field_0x8 = 0;
  *(undefined8 *)&(this->_OnSelectionChanged).field_0x10 = 0;
  *(undefined8 *)&this->_OnSelectionChanged = 0;
  *(undefined8 *)&(this->_OnSelectionChanged).field_0x8 = 0;
  *(undefined8 *)&(this->_OnExpansionChanged).field_0x10 = 0;
  *(undefined8 *)&this->_OnExpansionChanged = 0;
  *(undefined8 *)&(this->_OnExpansionChanged).field_0x8 = 0;
  *(undefined8 *)&(this->_OnIsSelectableOrNavigable).field_0x10 = 0;
  *(undefined8 *)&this->_OnIsSelectableOrNavigable = 0;
  *(undefined8 *)&(this->_OnIsSelectableOrNavigable).field_0x8 = 0;
  (this->_SelectionMode).Value = Multi;
  (this->_SelectionMode).bIsSet = true;
  *(undefined8 *)&(this->_SelectionMode).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_SelectionMode).Getter = 0;
  *(undefined8 *)&(this->_SelectionMode).Getter.field_0x8 = 0;
  (this->_HeaderRow).Object = (SHeaderRow *)0x0;
  (this->_HeaderRow).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->_ClearSelectionOnClick = true;
  (this->_ExternalScrollbar).Object = (SScrollBar *)0x0;
  (this->_ExternalScrollbar).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->_EnableAnimatedScrolling = false;
  (this->_FixedLineScrollOffset).bIsSet = false;
  this->_ScrollbarDragFocusCause = Mouse;
  this->_ConsumeMouseWheel = WhenScrollingPossible;
  this->_AllowOverscroll = Yes;
  pIVar3 = FAppStyle::Get();
  pFVar4 = ::FName::FName(&local_res10,"ScrollBar");
  pFVar6 = (FScrollBarStyle *)
           (**(code **)((longlong)*pIVar3 + 0xa0))(pIVar3,FScrollBarStyle::TypeName,*pFVar4,0,1);
  if (pFVar6 == (FScrollBarStyle *)0x0) {
    pFVar6 = FScrollBarStyle::GetDefault();
  }
  this->_ScrollBarStyle = pFVar6;
  this->_PreventThrottling = false;
  pTVar1 = GlobalScrollAmount.Ref;
  bVar2 = IsInParallelGameThread();
  if (!bVar2) {
    bVar2 = IsInGameThread();
    lVar7 = 4;
    if (!bVar2) goto LAB_14e765cce;
  }
  lVar7 = 0;
LAB_14e765cce:
  this->_WheelScrollMultiplier = *(float *)((longlong)pTVar1->ShadowedValue + lVar7);
  this->_ShadowBoxStyle = (FScrollBoxStyle *)0x0;
  this->_bEnableShadowBoxStyle = false;
  *(undefined8 *)&(this->_OnItemToString_Debug).field_0x10 = 0;
  *(undefined8 *)&this->_OnItemToString_Debug = 0;
  *(undefined8 *)&(this->_OnItemToString_Debug).field_0x8 = 0;
  *(undefined8 *)&(this->_OnEnteredBadState).field_0x10 = 0;
  *(undefined8 *)&this->_OnEnteredBadState = 0;
  *(undefined8 *)&(this->_OnEnteredBadState).field_0x8 = 0;
  this->_ReturnFocusToSelection = false;
  (this->_ShouldStackHierarchyHeaders).Value = false;
  (this->_ShouldStackHierarchyHeaders).bIsSet = true;
  this->_HandleGamepadEvents = true;
  this->_HandleDirectionalNavigation = true;
  this->_AllowInvisibleItemSelection = false;
  this->_HighlightParentNodesForSelection = false;
  *(undefined8 *)&(this->_ShouldStackHierarchyHeaders).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_ShouldStackHierarchyHeaders).Getter = 0;
  *(undefined8 *)&(this->_ShouldStackHierarchyHeaders).Getter.field_0x8 = 0;
  *(undefined8 *)&this->_OnKeyDownHandler = 0;
  *(undefined8 *)&(this->_OnKeyDownHandler).field_0x8 = 0;
  *(undefined4 *)&(this->_OnKeyDownHandler).field_0x10 = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 1;
  return this;
}

// FArguments @ 14e765d80

FArguments * __thiscall
SInterchangeCompareSkeletonTreeViewItem::FArguments::FArguments(FArguments *this)

{
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  (this->_SkeletonCompareData).Object = (FSkeletonJoint *)0x0;
  (this->_SkeletonCompareData).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// FArguments @ 14e765db0

FArguments * __thiscall
SInterchangeGenericAssetMaterialConflictListRow::FArguments::FArguments(FArguments *this)

{
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  (this->_Item).Object = (FListItem *)0x0;
  (this->_Item).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// FArguments @ 14e765de0

FArguments * __thiscall
SInterchangeGenericAssetMaterialConflictWidget::FArguments::FArguments(FArguments *this)

{
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  (this->_AssetMaterialNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->_AssetMaterialNames).ArrayNum = 0;
  (this->_AssetMaterialNames).ArrayMax = 0;
  (this->_ImportMaterialNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->_ImportMaterialNames).ArrayNum = 0;
  (this->_ImportMaterialNames).ArrayMax = 0;
  (this->_MatchMaterialIndexes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->_MatchMaterialIndexes).ArrayNum = 0;
  (this->_MatchMaterialIndexes).ArrayMax = 0;
  this->_ReimportObject = (UObject *)0x0;
  return this;
}

// FArguments @ 14e765e30

FArguments * __thiscall
SInterchangeGenericAssetSkeletonConflictWidget::FArguments::FArguments(FArguments *this)

{
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  (this->_AssetReferencingSkeleton).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->_AssetReferencingSkeleton).ArrayNum = 0;
  (this->_AssetReferencingSkeleton).ArrayMax = 0;
  (this->_Joints).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->_Joints).ArrayNum = 0;
  (this->_Joints).ArrayMax = 0;
  this->_ReimportObject = (UObject *)0x0;
  return this;
}

// FArguments @ 14e765e80

FArguments * __thiscall
SListView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>::
SListViewPinnedRowWidget::FArguments::FArguments(FArguments *this)

{
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return this;
}

// ~FArguments @ 14e76b040

void __thiscall
SListView<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>::FArguments::
~FArguments(FArguments *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnKeyDownHandler);
  pvVar1 = *(void **)&(this->_OnKeyDownHandler).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnKeyDownHandler);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnEnteredBadState);
  pvVar1 = *(void **)&(this->_OnEnteredBadState).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnEnteredBadState);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnItemToString_Debug);
  pvVar1 = *(void **)&(this->_OnItemToString_Debug).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnItemToString_Debug);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_IsFocusable).Getter);
  pvVar1 = *(void **)&(this->_IsFocusable).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_IsFocusable).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_ScrollbarVisibility).Getter);
  pvVar1 = *(void **)&(this->_ScrollbarVisibility).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_ScrollbarVisibility).Getter);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->_ExternalScrollbar).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->_HeaderRow).SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_SelectionMode).Getter);
  pvVar1 = *(void **)&(this->_SelectionMode).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_SelectionMode).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnIsSelectableOrNavigable);
  pvVar1 = *(void **)&(this->_OnIsSelectableOrNavigable).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnIsSelectableOrNavigable);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnSelectionChanged);
  pvVar1 = *(void **)&(this->_OnSelectionChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnSelectionChanged);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnMouseButtonDoubleClick);
  pvVar1 = *(void **)&(this->_OnMouseButtonDoubleClick).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnMouseButtonDoubleClick);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnMouseButtonClick);
  pvVar1 = *(void **)&(this->_OnMouseButtonClick).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnMouseButtonClick);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnItemsRebuilt);
  pvVar1 = *(void **)&(this->_OnItemsRebuilt).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnItemsRebuilt);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnContextMenuOpening);
  pvVar1 = *(void **)&(this->_OnContextMenuOpening).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnContextMenuOpening);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_MaxPinnedItems).Getter);
  pvVar1 = *(void **)&(this->_MaxPinnedItems).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_MaxPinnedItems).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_ItemHeight).Getter);
  pvVar1 = *(void **)&(this->_ItemHeight).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_ItemHeight).Getter);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->_ListItemsSource_SharedObservableArray).SharedReferenceCount.ReferenceController
            );
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnFinishedScrolling);
  pvVar1 = *(void **)&(this->_OnFinishedScrolling).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnFinishedScrolling);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnItemScrolledIntoView);
  pvVar1 = *(void **)&(this->_OnItemScrolledIntoView).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnItemScrolledIntoView);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnListViewScrolled);
  pvVar1 = *(void **)&(this->_OnListViewScrolled).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnListViewScrolled);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnRowReleased);
  pvVar1 = *(void **)&(this->_OnRowReleased).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnRowReleased);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnEntryInitialized);
  pvVar1 = *(void **)&(this->_OnEntryInitialized).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnEntryInitialized);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnRefreshRow);
  pvVar1 = *(void **)&(this->_OnRefreshRow).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnRefreshRow);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnGeneratePinnedRow);
  pvVar1 = *(void **)&(this->_OnGeneratePinnedRow).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnGeneratePinnedRow);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnGenerateRow);
  pvVar1 = *(void **)&(this->_OnGenerateRow).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnGenerateRow);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return;
}

// ~FArguments @ 14e76b410

void __thiscall
STableRow<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>::FArguments::
~FArguments(FArguments *this)

{
  void *pvVar1;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->_Content).Widget.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_Padding).Getter);
  pvVar1 = *(void **)&(this->_Padding).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_Padding).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnDrop);
  pvVar1 = *(void **)&(this->_OnDrop).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnDrop);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnDragLeave);
  pvVar1 = *(void **)&(this->_OnDragLeave).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnDragLeave);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnDragEnter);
  pvVar1 = *(void **)&(this->_OnDragEnter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnDragEnter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnDragDetected);
  pvVar1 = *(void **)&(this->_OnDragDetected).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnDragDetected);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnPaintDropIndicator);
  pvVar1 = *(void **)&(this->_OnPaintDropIndicator).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnPaintDropIndicator);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnAcceptDrop);
  pvVar1 = *(void **)&(this->_OnAcceptDrop).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnAcceptDrop);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnCanAcceptDrop);
  pvVar1 = *(void **)&(this->_OnCanAcceptDrop).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnCanAcceptDrop);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return;
}

// ~FArguments @ 14e76b590

void __thiscall
STableRow<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>::FArguments::~FArguments
          (FArguments *this)

{
  void *pvVar1;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->_Content).Widget.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_Padding).Getter);
  pvVar1 = *(void **)&(this->_Padding).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_Padding).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnDrop);
  pvVar1 = *(void **)&(this->_OnDrop).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnDrop);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnDragLeave);
  pvVar1 = *(void **)&(this->_OnDragLeave).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnDragLeave);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnDragEnter);
  pvVar1 = *(void **)&(this->_OnDragEnter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnDragEnter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnDragDetected);
  pvVar1 = *(void **)&(this->_OnDragDetected).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnDragDetected);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnPaintDropIndicator);
  pvVar1 = *(void **)&(this->_OnPaintDropIndicator).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnPaintDropIndicator);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnAcceptDrop);
  pvVar1 = *(void **)&(this->_OnAcceptDrop).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnAcceptDrop);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnCanAcceptDrop);
  pvVar1 = *(void **)&(this->_OnCanAcceptDrop).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnCanAcceptDrop);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return;
}

// ~FArguments @ 14e76b710

void __thiscall
STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>::FArguments::~FArguments
          (FArguments *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnKeyDownHandler);
  pvVar1 = *(void **)&(this->_OnKeyDownHandler).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnKeyDownHandler);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->_ShouldStackHierarchyHeaders).Getter);
  pvVar1 = *(void **)&(this->_ShouldStackHierarchyHeaders).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_ShouldStackHierarchyHeaders).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnEnteredBadState);
  pvVar1 = *(void **)&(this->_OnEnteredBadState).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnEnteredBadState);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnItemToString_Debug);
  pvVar1 = *(void **)&(this->_OnItemToString_Debug).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnItemToString_Debug);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->_ExternalScrollbar).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->_HeaderRow).SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_SelectionMode).Getter);
  pvVar1 = *(void **)&(this->_SelectionMode).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_SelectionMode).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnIsSelectableOrNavigable);
  pvVar1 = *(void **)&(this->_OnIsSelectableOrNavigable).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnIsSelectableOrNavigable);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnExpansionChanged);
  pvVar1 = *(void **)&(this->_OnExpansionChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnExpansionChanged);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnSelectionChanged);
  pvVar1 = *(void **)&(this->_OnSelectionChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnSelectionChanged);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnMouseButtonDoubleClick);
  pvVar1 = *(void **)&(this->_OnMouseButtonDoubleClick).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnMouseButtonDoubleClick);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnMouseButtonClick);
  pvVar1 = *(void **)&(this->_OnMouseButtonClick).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnMouseButtonClick);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnItemsRebuilt);
  pvVar1 = *(void **)&(this->_OnItemsRebuilt).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnItemsRebuilt);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnContextMenuOpening);
  pvVar1 = *(void **)&(this->_OnContextMenuOpening).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnContextMenuOpening);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_MaxPinnedItems).Getter);
  pvVar1 = *(void **)&(this->_MaxPinnedItems).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_MaxPinnedItems).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_ItemHeight).Getter);
  pvVar1 = *(void **)&(this->_ItemHeight).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_ItemHeight).Getter);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->_TreeItemsSource_SharedObservableArray).SharedReferenceCount.ReferenceController
            );
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnSetExpansionRecursive);
  pvVar1 = *(void **)&(this->_OnSetExpansionRecursive).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnSetExpansionRecursive);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnGetChildren);
  pvVar1 = *(void **)&(this->_OnGetChildren).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnGetChildren);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnItemScrolledIntoView);
  pvVar1 = *(void **)&(this->_OnItemScrolledIntoView).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnItemScrolledIntoView);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnFinishedScrolling);
  pvVar1 = *(void **)&(this->_OnFinishedScrolling).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnFinishedScrolling);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnTreeViewScrolled);
  pvVar1 = *(void **)&(this->_OnTreeViewScrolled).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnTreeViewScrolled);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnRowReleased);
  pvVar1 = *(void **)&(this->_OnRowReleased).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnRowReleased);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnRefreshRow);
  pvVar1 = *(void **)&(this->_OnRefreshRow).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnRefreshRow);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnGeneratePinnedRow);
  pvVar1 = *(void **)&(this->_OnGeneratePinnedRow).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnGeneratePinnedRow);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnGenerateRow);
  pvVar1 = *(void **)&(this->_OnGenerateRow).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnGenerateRow);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return;
}

// MakeListItemsSource @ 14e7c97f0

TUniquePtr<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>,TDefaultDelete<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>_>_>
 __thiscall
SListView<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>::FArguments::
MakeListItemsSource(FArguments *this,TSharedRef<STableViewBase,1> *param_1)

{
  TArray<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>,TSizedDefaultAllocator<32>_>
  *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  TObservableArray<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_> *pTVar3
  ;
  STableViewBase *pSVar4;
  FObservableArrayPointer<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>
  *this_00;
  FSharedObservableArray<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>
  *this_01;
  longlong *in_R8;
  TSharedRef<STableViewBase,1> local_28;
  TSharedRef<STableViewBase,1> local_18;
  
  if (this->_ListItemsSource_ArrayPointer ==
      (TArray<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>,TSizedDefaultAllocator<32>_>
       *)0x0) {
    if (this->_ListItemsSource_ObservableArrayPointer ==
        (TObservableArray<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>
         *)0x0) {
      pSVar4 = (STableViewBase *)(this->_ListItemsSource_SharedObservableArray).Object;
      if (pSVar4 == (STableViewBase *)0x0) {
        pTVar2 = (TReferenceControllerBase<1> *)in_R8[1];
        param_1->Object = (STableViewBase *)0x0;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      }
      else {
        pTVar2 = (this->_ListItemsSource_SharedObservableArray).SharedReferenceCount.
                 ReferenceController;
        if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
          UNLOCK();
        }
        this_01 = ::operator_new(0x30);
        if (this_01 ==
            (FSharedObservableArray<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>
             *)0x0) {
          pSVar4 = (STableViewBase *)0x0;
        }
        else {
          if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_18.SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)in_R8[1];
          local_18.Object = (STableViewBase *)*in_R8;
          if (local_18.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          local_28.Object = pSVar4;
          local_28.SharedReferenceCount.ReferenceController = pTVar2;
          pSVar4 = (STableViewBase *)
                   UE::Slate::ItemsSource::
                   FSharedObservableArray<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>
                   ::
                   FSharedObservableArray<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>
                             (this_01,&local_18,
                              (TSharedRef<UE::Slate::Containers::TObservableArray<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>,1>
                               *)&local_28);
        }
        param_1->Object = pSVar4;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)in_R8[1]);
      }
      return (TUniquePtr<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>,TDefaultDelete<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>_>_>
              )(IItemsSource<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>
                *)param_1;
    }
    this_00 = ::operator_new(0x28);
    if (this_00 !=
        (FObservableArrayPointer<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>
         *)0x0) {
      local_28.Object = (STableViewBase *)*in_R8;
      pTVar3 = this->_ListItemsSource_ObservableArrayPointer;
      local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)in_R8[1];
      if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pSVar4 = (STableViewBase *)
               UE::Slate::ItemsSource::
               FObservableArrayPointer<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>
               ::
               FObservableArrayPointer<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>
                         (this_00,&local_28,pTVar3);
      goto LAB_14e7c985b;
    }
  }
  else {
    pSVar4 = ::operator_new(0x10);
    if (pSVar4 != (STableViewBase *)0x0) {
      pTVar1 = this->_ListItemsSource_ArrayPointer;
      *(undefined ***)pSVar4 =
           &
           ___7__FArrayPointer_V__TSharedPtr_UFListItem_SInterchangeGenericAssetMaterialConflictWidget___00___ItemsSource_Slate_UE__6B_
      ;
      *(TArray<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>,TSizedDefaultAllocator<32>_>
        **)&pSVar4->field_0x8 = pTVar1;
      pTVar2 = (TReferenceControllerBase<1> *)in_R8[1];
      param_1->Object = pSVar4;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      return (TUniquePtr<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>,TDefaultDelete<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>_>_>
              )(IItemsSource<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>
                *)param_1;
    }
  }
  pSVar4 = (STableViewBase *)0x0;
LAB_14e7c985b:
  pTVar2 = (TReferenceControllerBase<1> *)in_R8[1];
  param_1->Object = pSVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return (TUniquePtr<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>,TDefaultDelete<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>_>_>
          )(IItemsSource<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_> *
           )param_1;
}

// MakeTreeItemsSource @ 14e7ca0c0

TUniquePtr<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,TDefaultDelete<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>_>_>
 __thiscall
STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>::FArguments::
MakeTreeItemsSource(FArguments *this,TSharedRef<STableViewBase,1> *param_1)

{
  TArray<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,TSizedDefaultAllocator<32>_>
  *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  TObservableArray<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_> *pTVar3;
  STableViewBase *pSVar4;
  FObservableArrayPointer<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_> *this_00
  ;
  FSharedObservableArray<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_> *this_01;
  longlong *in_R8;
  TSharedRef<STableViewBase,1> local_28;
  TSharedRef<STableViewBase,1> local_18;
  
  if (this->_TreeItemsSource_ArrayPointer ==
      (TArray<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,TSizedDefaultAllocator<32>_>
       *)0x0) {
    if (this->_TreeItemsSource_ObservableArrayPointer ==
        (TObservableArray<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_> *)0x0) {
      pSVar4 = (STableViewBase *)(this->_TreeItemsSource_SharedObservableArray).Object;
      if (pSVar4 == (STableViewBase *)0x0) {
        pTVar2 = (TReferenceControllerBase<1> *)in_R8[1];
        param_1->Object = (STableViewBase *)0x0;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      }
      else {
        pTVar2 = (this->_TreeItemsSource_SharedObservableArray).SharedReferenceCount.
                 ReferenceController;
        if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
          UNLOCK();
        }
        this_01 = ::operator_new(0x30);
        if (this_01 ==
            (FSharedObservableArray<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>
             *)0x0) {
          pSVar4 = (STableViewBase *)0x0;
        }
        else {
          if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_18.SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)in_R8[1];
          local_18.Object = (STableViewBase *)*in_R8;
          if (local_18.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          local_28.Object = pSVar4;
          local_28.SharedReferenceCount.ReferenceController = pTVar2;
          pSVar4 = (STableViewBase *)
                   UE::Slate::ItemsSource::
                   FSharedObservableArray<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>
                   ::
                   FSharedObservableArray<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>
                             (this_01,&local_18,
                              (TSharedRef<UE::Slate::Containers::TObservableArray<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,1>
                               *)&local_28);
        }
        param_1->Object = pSVar4;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)in_R8[1]);
      }
      return (TUniquePtr<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,TDefaultDelete<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>_>_>
              )(IItemsSource<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_> *)
               param_1;
    }
    this_00 = ::operator_new(0x28);
    if (this_00 !=
        (FObservableArrayPointer<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_> *
        )0x0) {
      local_28.Object = (STableViewBase *)*in_R8;
      pTVar3 = this->_TreeItemsSource_ObservableArrayPointer;
      local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)in_R8[1];
      if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pSVar4 = (STableViewBase *)
               UE::Slate::ItemsSource::
               FObservableArrayPointer<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>
               ::
               FObservableArrayPointer<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>
                         (this_00,&local_28,pTVar3);
      goto LAB_14e7ca12b;
    }
  }
  else {
    pSVar4 = ::operator_new(0x10);
    if (pSVar4 != (STableViewBase *)0x0) {
      pTVar1 = this->_TreeItemsSource_ArrayPointer;
      *(undefined ***)pSVar4 =
           &
           ___7__FArrayPointer_V__TSharedPtr_UFSkeletonJoint_UInterchangeGenericAssetsPipeline___00___ItemsSource_Slate_UE__6B_
      ;
      *(TArray<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,TSizedDefaultAllocator<32>_>
        **)&pSVar4->field_0x8 = pTVar1;
      pTVar2 = (TReferenceControllerBase<1> *)in_R8[1];
      param_1->Object = pSVar4;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      return (TUniquePtr<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,TDefaultDelete<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>_>_>
              )(IItemsSource<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_> *)
               param_1;
    }
  }
  pSVar4 = (STableViewBase *)0x0;
LAB_14e7ca12b:
  pTVar2 = (TReferenceControllerBase<1> *)in_R8[1];
  param_1->Object = pSVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return (TUniquePtr<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,TDefaultDelete<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>_>_>
          )(IItemsSource<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_> *)param_1
  ;
}

