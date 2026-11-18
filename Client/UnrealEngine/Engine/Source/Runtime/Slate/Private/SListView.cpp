// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 121

// SListView<TSharedPtr<SWidget,1>_> @ 1427a91c0

SListView<TSharedPtr<SWidget,1>_> * __thiscall
SListView<TSharedPtr<SWidget,1>_>::SListView<TSharedPtr<SWidget,1>_>
          (SListView<TSharedPtr<SWidget,1>_> *this,Type param_1)

{
  byte *pbVar1;
  
  STableViewBase::STableViewBase((STableViewBase *)this,param_1);
  (this->WidgetGenerator).OwnerList = this;
  this->_padding_ = (longlong)&_vftable__for__SCompoundWidget__;
  this->_padding_ = (longlong)&_vftable__for__IScrollableWidget__;
  this->_padding_ = (longlong)&___7__SListView_V__TSharedPtr_VSWidget___00____6B_;
  *(undefined8 *)&(this->WidgetGenerator).ItemToWidgetMap = 0;
  *(undefined8 *)&(this->WidgetGenerator).ItemToWidgetMap.field_0x8 = 0;
  *(undefined8 *)&(this->WidgetGenerator).ItemToWidgetMap.field_0x20 = 0;
  *(undefined4 *)&(this->WidgetGenerator).ItemToWidgetMap.field_0x28 = 0;
  *(undefined4 *)&(this->WidgetGenerator).ItemToWidgetMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->WidgetGenerator).ItemToWidgetMap.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->WidgetGenerator).ItemToWidgetMap.field_0x34 = 0;
  *(undefined8 *)&(this->WidgetGenerator).ItemToWidgetMap.field_0x40 = 0;
  *(undefined4 *)&(this->WidgetGenerator).ItemToWidgetMap.field_0x48 = 0;
  *(undefined8 *)&(this->WidgetGenerator).WidgetMapToItem = 0;
  *(undefined8 *)&(this->WidgetGenerator).WidgetMapToItem.field_0x8 = 0;
  *(undefined8 *)&(this->WidgetGenerator).WidgetMapToItem.field_0x20 = 0;
  *(undefined4 *)&(this->WidgetGenerator).WidgetMapToItem.field_0x28 = 0;
  *(undefined4 *)&(this->WidgetGenerator).WidgetMapToItem.field_0x2c = 0x80;
  *(undefined4 *)&(this->WidgetGenerator).WidgetMapToItem.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->WidgetGenerator).WidgetMapToItem.field_0x34 = 0;
  *(undefined8 *)&(this->WidgetGenerator).WidgetMapToItem.field_0x40 = 0;
  *(undefined4 *)&(this->WidgetGenerator).WidgetMapToItem.field_0x48 = 0;
  (this->WidgetGenerator).ItemsWithGeneratedWidgets.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->WidgetGenerator).ItemsWithGeneratedWidgets.ArrayNum = 0;
  (this->WidgetGenerator).ItemsWithGeneratedWidgets.ArrayMax = 0;
  (this->WidgetGenerator).ItemsToBeCleanedUp.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->WidgetGenerator).ItemsToBeCleanedUp.ArrayNum = 0;
  (this->WidgetGenerator).ItemsToBeCleanedUp.ArrayMax = 0;
  (this->PinnedWidgetGenerator).OwnerList = this;
  *(undefined8 *)&(this->PinnedWidgetGenerator).ItemToWidgetMap = 0;
  *(undefined8 *)&(this->PinnedWidgetGenerator).ItemToWidgetMap.field_0x8 = 0;
  *(undefined8 *)&(this->PinnedWidgetGenerator).ItemToWidgetMap.field_0x20 = 0;
  *(undefined4 *)&(this->PinnedWidgetGenerator).ItemToWidgetMap.field_0x28 = 0;
  *(undefined4 *)&(this->PinnedWidgetGenerator).ItemToWidgetMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->PinnedWidgetGenerator).ItemToWidgetMap.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PinnedWidgetGenerator).ItemToWidgetMap.field_0x34 = 0;
  *(undefined8 *)&(this->PinnedWidgetGenerator).ItemToWidgetMap.field_0x40 = 0;
  *(undefined4 *)&(this->PinnedWidgetGenerator).ItemToWidgetMap.field_0x48 = 0;
  *(undefined8 *)&(this->PinnedWidgetGenerator).WidgetMapToItem = 0;
  *(undefined8 *)&(this->PinnedWidgetGenerator).WidgetMapToItem.field_0x8 = 0;
  *(undefined8 *)&(this->PinnedWidgetGenerator).WidgetMapToItem.field_0x20 = 0;
  *(undefined4 *)&(this->PinnedWidgetGenerator).WidgetMapToItem.field_0x28 = 0;
  *(undefined4 *)&(this->PinnedWidgetGenerator).WidgetMapToItem.field_0x2c = 0x80;
  *(undefined4 *)&(this->PinnedWidgetGenerator).WidgetMapToItem.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PinnedWidgetGenerator).WidgetMapToItem.field_0x34 = 0;
  *(undefined8 *)&(this->PinnedWidgetGenerator).WidgetMapToItem.field_0x40 = 0;
  *(undefined4 *)&(this->PinnedWidgetGenerator).WidgetMapToItem.field_0x48 = 0;
  (this->PinnedWidgetGenerator).ItemsWithGeneratedWidgets.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PinnedWidgetGenerator).ItemsWithGeneratedWidgets.ArrayNum = 0;
  (this->PinnedWidgetGenerator).ItemsWithGeneratedWidgets.ArrayMax = 0;
  (this->PinnedWidgetGenerator).ItemsToBeCleanedUp.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PinnedWidgetGenerator).ItemsToBeCleanedUp.ArrayNum = 0;
  (this->PinnedWidgetGenerator).ItemsToBeCleanedUp.ArrayMax = 0;
  *(undefined8 *)&this->OnEntryInitialized = 0;
  *(undefined8 *)&(this->OnEntryInitialized).field_0x8 = 0;
  *(undefined4 *)&(this->OnEntryInitialized).field_0x10 = 0;
  *(undefined8 *)&this->OnGenerateRow = 0;
  *(undefined8 *)&(this->OnGenerateRow).field_0x8 = 0;
  *(undefined4 *)&(this->OnGenerateRow).field_0x10 = 0;
  *(undefined8 *)&this->OnGeneratePinnedRow = 0;
  *(undefined8 *)&(this->OnGeneratePinnedRow).field_0x8 = 0;
  *(undefined4 *)&(this->OnGeneratePinnedRow).field_0x10 = 0;
  *(undefined8 *)&this->OnRefreshRow = 0;
  *(undefined8 *)&(this->OnRefreshRow).field_0x8 = 0;
  *(undefined4 *)&(this->OnRefreshRow).field_0x10 = 0;
  *(undefined8 *)&this->OnItemToString_Debug = 0;
  *(undefined8 *)&(this->OnItemToString_Debug).field_0x8 = 0;
  *(undefined4 *)&(this->OnItemToString_Debug).field_0x10 = 0;
  *(undefined8 *)&this->OnEnteredBadState = 0;
  *(undefined8 *)&(this->OnEnteredBadState).field_0x8 = 0;
  *(undefined4 *)&(this->OnEnteredBadState).field_0x10 = 0;
  *(undefined8 *)&this->OnRowReleased = 0;
  *(undefined8 *)&(this->OnRowReleased).field_0x8 = 0;
  *(undefined4 *)&(this->OnRowReleased).field_0x10 = 0;
  *(undefined8 *)&this->OnItemScrolledIntoView = 0;
  *(undefined8 *)&(this->OnItemScrolledIntoView).field_0x8 = 0;
  *(undefined4 *)&(this->OnItemScrolledIntoView).field_0x10 = 0;
  *(undefined8 *)&this->OnFinishedScrolling = 0;
  *(undefined8 *)&(this->OnFinishedScrolling).field_0x8 = 0;
  *(undefined4 *)&(this->OnFinishedScrolling).field_0x10 = 0;
  *(undefined8 *)&(this->SelectedItems).Elements = 0;
  *(undefined8 *)&(this->SelectedItems).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->SelectedItems).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->SelectedItems).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->SelectedItems).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->SelectedItems).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->SelectedItems).Elements.field_0x30 = 0xffffffff;
  (this->SelectedItems).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->SelectedItems).HashSize = 0;
  (this->SelectorItem).Object = (SWidget *)0x0;
  (this->SelectorItem).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  (this->RangeSelectionStart).Object = (SWidget *)0x0;
  (this->RangeSelectionStart).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&(this->HighlightedItems).Elements = 0;
  *(undefined8 *)&(this->HighlightedItems).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->HighlightedItems).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->HighlightedItems).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->HighlightedItems).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->HighlightedItems).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->HighlightedItems).Elements.field_0x30 = 0xffffffff;
  (this->HighlightedItems).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->HighlightedItems).HashSize = 0;
  (this->ItemToScrollIntoView).Object = (SWidget *)0x0;
  (this->ItemToScrollIntoView).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ItemToNotifyWhenInView).Object = (SWidget *)0x0;
  (this->ItemToNotifyWhenInView).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->OnSelectionChanged = 0;
  *(undefined8 *)&(this->OnSelectionChanged).field_0x8 = 0;
  *(undefined4 *)&(this->OnSelectionChanged).field_0x10 = 0;
  *(undefined8 *)&this->OnIsSelectableOrNavigable = 0;
  *(undefined8 *)&(this->OnIsSelectableOrNavigable).field_0x8 = 0;
  *(undefined4 *)&(this->OnIsSelectableOrNavigable).field_0x10 = 0;
  *(undefined8 *)&this->OnClick = 0;
  *(undefined8 *)&(this->OnClick).field_0x8 = 0;
  *(undefined4 *)&(this->OnClick).field_0x10 = 0;
  *(undefined8 *)&this->OnDoubleClick = 0;
  *(undefined8 *)&(this->OnDoubleClick).field_0x8 = 0;
  *(undefined4 *)&(this->OnDoubleClick).field_0x10 = 0;
  *(undefined8 *)&this->OnKeyDownHandler = 0;
  *(undefined8 *)&(this->OnKeyDownHandler).field_0x8 = 0;
  *(undefined4 *)&(this->OnKeyDownHandler).field_0x10 = 0;
  (this->IsFocusable).Value = true;
  (this->IsFocusable).bIsSet = true;
  this->ItemsSource = (TArray<TSharedPtr<SWidget,1>,TSizedDefaultAllocator<32>_> *)0x0;
  this->UserRequestingScrollIntoView = 0;
  this->ScrollIntoViewAlignment = CenterAligned;
  *(undefined8 *)&(this->IsFocusable).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->IsFocusable).Getter = 0;
  *(undefined8 *)&(this->IsFocusable).Getter.field_0x8 = 0;
  (this->MaxPinnedItems).Value = 0;
  (this->MaxPinnedItems).bIsSet = false;
  this->bHandleSpacebarSelection = false;
  this->NavigationScrollOffset = 0.5;
  this->bClearScrollVelocityOnSelection = true;
  this->bNavigateOnScrollIntoView = false;
  this->NavigationTypeOnScrollIntoView = Invalid;
  *(undefined8 *)&(this->MaxPinnedItems).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->MaxPinnedItems).Getter = 0;
  *(undefined8 *)&(this->MaxPinnedItems).Getter.field_0x8 = 0;
  (this->DefaultMaxPinnedItems).Value = 0;
  (this->DefaultMaxPinnedItems).bIsSet = false;
  *(undefined8 *)&(this->DefaultMaxPinnedItems).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->DefaultMaxPinnedItems).Getter = 0;
  *(undefined8 *)&(this->DefaultMaxPinnedItems).Getter.field_0x8 = 0;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 4;
  this->bIsHierarchyCollapsed = false;
  (this->ViewSource).Ptr = (IItemsSource<TSharedPtr<SWidget,1>_> *)0x0;
  *(undefined1 *)((longlong)&this->_padding_ + 3) = 1;
  return this;
}

// ~SListView<TSharedPtr<SWidget,1>_> @ 1427b68b0

void __thiscall
SListView<TSharedPtr<SWidget,1>_>::~SListView<TSharedPtr<SWidget,1>_>
          (SListView<TSharedPtr<SWidget,1>_> *this)

{
  IItemsSource<TSharedPtr<SWidget,1>_> *pIVar1;
  void *pvVar2;
  ForElementType<FSetElementId> FVar3;
  
  pIVar1 = (this->ViewSource).Ptr;
  if (pIVar1 != (IItemsSource<TSharedPtr<SWidget,1>_> *)0x0) {
    (**(code **)*pIVar1)(pIVar1,1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->DefaultMaxPinnedItems).Getter);
  pvVar2 = *(void **)&(this->DefaultMaxPinnedItems).Getter.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->DefaultMaxPinnedItems).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->MaxPinnedItems).Getter);
  pvVar2 = *(void **)&(this->MaxPinnedItems).Getter.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->MaxPinnedItems).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->IsFocusable).Getter);
  pvVar2 = *(void **)&(this->IsFocusable).Getter.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->IsFocusable).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnKeyDownHandler);
  pvVar2 = *(void **)&(this->OnKeyDownHandler).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnKeyDownHandler);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnDoubleClick);
  pvVar2 = *(void **)&(this->OnDoubleClick).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnDoubleClick);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnClick);
  pvVar2 = *(void **)&(this->OnClick).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnClick);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnIsSelectableOrNavigable);
  pvVar2 = *(void **)&(this->OnIsSelectableOrNavigable).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnIsSelectableOrNavigable);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnSelectionChanged);
  pvVar2 = *(void **)&(this->OnSelectionChanged).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSelectionChanged);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ItemToNotifyWhenInView).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ItemToScrollIntoView).SharedReferenceCount.ReferenceController);
  (this->HighlightedItems).HashSize = 0;
  FVar3 = (this->HighlightedItems).Hash.SecondaryData;
  if (FVar3 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  TSparseArray<TSparseSetElement<TSharedPtr<SWidget,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TSharedPtr<SWidget,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->HighlightedItems).Elements);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->RangeSelectionStart).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SelectorItem).SharedReferenceCount.ReferenceController);
  (this->SelectedItems).HashSize = 0;
  FVar3 = (this->SelectedItems).Hash.SecondaryData;
  if (FVar3 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  TSparseArray<TSparseSetElement<TSharedPtr<SWidget,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TSharedPtr<SWidget,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->SelectedItems).Elements);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnFinishedScrolling);
  pvVar2 = *(void **)&(this->OnFinishedScrolling).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnFinishedScrolling);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnItemScrolledIntoView);
  pvVar2 = *(void **)&(this->OnItemScrolledIntoView).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnItemScrolledIntoView);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnRowReleased);
  pvVar2 = *(void **)&(this->OnRowReleased).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnRowReleased);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnEnteredBadState);
  pvVar2 = *(void **)&(this->OnEnteredBadState).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnEnteredBadState);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnItemToString_Debug);
  pvVar2 = *(void **)&(this->OnItemToString_Debug).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnItemToString_Debug);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnRefreshRow);
  pvVar2 = *(void **)&(this->OnRefreshRow).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnRefreshRow);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnGeneratePinnedRow);
  pvVar2 = *(void **)&(this->OnGeneratePinnedRow).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnGeneratePinnedRow);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnGenerateRow);
  pvVar2 = *(void **)&(this->OnGenerateRow).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnGenerateRow);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnEntryInitialized);
  pvVar2 = *(void **)&(this->OnEntryInitialized).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnEntryInitialized);
  FWidgetGenerator::~FWidgetGenerator(&this->PinnedWidgetGenerator);
  FWidgetGenerator::~FWidgetGenerator(&this->WidgetGenerator);
  STableViewBase::~STableViewBase((STableViewBase *)this);
  return;
}

// AddReferencedObjects @ 1427c9370

void __thiscall
SListView<TSharedPtr<SWidget,1>_>::AddReferencedObjects
          (SListView<TSharedPtr<SWidget,1>_> *this,FReferenceCollector *param_1)

{
  return;
}

// AsWidget @ 1427d3640

TSharedRef<SWidget,1> * __thiscall
SListView<TSharedPtr<SWidget,1>_>::AsWidget
          (SListView<TSharedPtr<SWidget,1>_> *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  SWidget *pSVar2;
  TSharedRef<SWidget,1> *pTVar3;
  TSharedRef<SWidget,1> local_18;
  
  pTVar3 = TSharedFromThis<SWidget,1>::AsShared
                     ((TSharedFromThis<SWidget,1> *)&this[-1]._padding_,&local_18);
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

// CreateAccessibleWidget @ 1427f4a70

TSharedRef<FSlateAccessibleWidget,1> * __thiscall
SListView<TSharedPtr<SWidget,1>_>::CreateAccessibleWidget
          (SListView<TSharedPtr<SWidget,1>_> *this,
          TSharedRef<FSlateAccessibleWidget,1> *__return_storage_ptr__)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  code *pcVar3;
  bool bVar4;
  FSlateAccessibleWidget *this_00;
  TSharedRef<SWidget,1> *pTVar5;
  TSharedRef<FSlateAccessibleWidget,1> *pTVar6;
  bool bVar7;
  TRawPtrProxy<FSlateAccessibleWidget> TVar8;
  TRawPtrProxy<FSlateAccessibleWidget> local_res10;
  TWeakPtr<SWidget,1> local_28;
  TSharedRef<SWidget,1> local_18;
  
  bVar7 = false;
  local_res10.Object = local_res10.Object & 0xffffffff00000000;
  this_00 = ::operator_new(0x70);
  if (this_00 == (FSlateAccessibleWidget *)0x0) {
    this_00 = (FSlateAccessibleWidget *)0x0;
    TVar8.Object = local_res10.Object;
  }
  else {
    pTVar5 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_18);
    TVar8.Object = (FSlateAccessibleWidget *)(pTVar5->SharedReferenceCount).ReferenceController;
    local_28.Object = pTVar5->Object;
    local_28.WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)TVar8.Object;
    if (TVar8.Object == (FSlateAccessibleWidget *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
      FSlateAccessibleWidget::FSlateAccessibleWidget(this_00,&local_28,List);
      this_00->_padding_ =
           (longlong)&FSlateAccessibleListView::_vftable__for__FSlateAccessibleWidget__;
      this_00[1]._padding_ = (longlong)&FSlateAccessibleListView::_vftable__for__IAccessibleTable__;
    }
    else {
      LOCK();
      *(atomic<int> *)&(TVar8.Object)->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&(TVar8.Object)->_padding_ + 1);
      UNLOCK();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
      LOCK();
      ((atomic<int> *)&(TVar8.Object)->_padding_)[1] =
           (atomic<int>)((int)((atomic<int> *)&(TVar8.Object)->_padding_)[1] + 1);
      UNLOCK();
      LOCK();
      ((atomic<int> *)&(TVar8.Object)->_padding_)[1] =
           (atomic<int>)((int)((atomic<int> *)&(TVar8.Object)->_padding_)[1] + 1);
      UNLOCK();
      FSlateAccessibleWidget::FSlateAccessibleWidget(this_00,&local_28,List);
      this_00->_padding_ =
           (longlong)&FSlateAccessibleListView::_vftable__for__FSlateAccessibleWidget__;
      this_00[1]._padding_ = (longlong)&FSlateAccessibleListView::_vftable__for__IAccessibleTable__;
      LOCK();
      paVar1 = (atomic<int> *)&(TVar8.Object)->_padding_ + 1;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((TVar8.Object)->_padding_ + 8))(TVar8.Object,1);
      }
    }
    bVar7 = true;
    if (((this_00->_padding_ != 0) && (this_00->_padding_ != 0)) &&
       (0 < *(int *)(this_00->_padding_ + 8))) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InObject || !InObject->DoesSharedInstanceExist()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x7a5,L"Trying to share an already-shared object");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TSharedRef<FSlateAccessibleWidget,1> *)(*pcVar3)();
        return pTVar6;
      }
    }
  }
  local_res10.Object = this_00;
  TSharedRef<FSlateAccessibleWidget,1>::TSharedRef<FSlateAccessibleWidget,1><FSlateAccessibleWidget>
            (__return_storage_ptr__,&local_res10);
  if (bVar7) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)TVar8.Object);
  }
  return __return_storage_ptr__;
}

// GenerateNewPinnedWidget @ 14280b780

TSharedRef<ITableRow,1> * __thiscall
SListView<TSharedPtr<SWidget,1>_>::GenerateNewPinnedWidget
          (SListView<TSharedPtr<SWidget,1>_> *this,TSharedRef<ITableRow,1> *__return_storage_ptr__,
          TSharedPtr<SWidget,1> *param_1,int param_2,int param_3)

{
  SWidget *pSVar1;
  TReferenceControllerBase<1> *pTVar2;
  SWidget *pSVar3;
  char cVar4;
  TSharedRef<SWidget,1> *pTVar5;
  FArguments *pFVar6;
  FArguments *pFVar7;
  FText *pFVar8;
  TSharedRef<STextBlock,1> *pTVar9;
  TSlateDecl<STableRow<TSharedPtr<SWidget,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<SWidget,1>_>,1>_&&>_>
  *this_00;
  FSlateInvalidationRoot *pFVar10;
  longlong *plVar11;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_948 [2];
  FDestructionSentinel local_940;
  undefined1 local_928 [32];
  FText local_908;
  bool local_8f8;
  undefined1 local_8f0 [8];
  ForAnyElementType FStack_8e8;
  FWeakReferencer<1> local_8e0;
  FName local_8d8;
  FReadAccessScope local_8d0;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_8b8;
  TSharedRef<STextBlock,1> local_8a0;
  TSlateDecl<STableRow<TSharedPtr<SWidget,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<SWidget,1>_>,1>_&&>_>
  local_890;
  FArguments local_878;
  FArguments local_580;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnGeneratePinnedRow,
             &local_8d0);
  if (((*(int *)&(this->OnGeneratePinnedRow).field_0x10 == 0) ||
      (plVar11 = *(longlong **)&(this->OnGeneratePinnedRow).field_0x8, plVar11 == (longlong *)0x0))
     || (cVar4 = (**(code **)(*plVar11 + 0x38))(), cVar4 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_8d0);
    pFVar6 = STableRow<TSharedPtr<SWidget,1>_>::FArguments::FArguments(&local_878);
    pFVar7 = STextBlock::FArguments::FArguments(&local_580);
    pFVar8 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)&local_8d0,L"SListView",L"OnGeneratePinnedRowNotAssignedMessage",
                        L"OnGeneratePinnedRow() not assigned.");
    FText::FText(&local_908,pFVar8);
    local_8f8 = true;
    local_8e0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_8f0 = (undefined1  [8])0x0;
    FStack_8e8.Data = (FScriptContainerElement *)0x0;
    FText::operator=(&(pFVar7->_Text).Value,&local_908);
    (pFVar7->_Text).bIsSet = local_8f8;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar7->_Text).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_8f0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_8f0,
               (FWriteAccessScope *)&local_940);
    if (((int)local_8e0.ReferenceController != 0) &&
       (FStack_8e8.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_8e8.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_8e8,0,0,0x10);
      local_8e0.ReferenceController = local_8e0.ReferenceController & 0xffffffff00000000;
    }
    if (local_940.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_940.Accessor,&local_940);
    }
    if (FStack_8e8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_8e8.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_8f0);
    if (local_908.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_908.TextData.Reference + 0x10))();
    }
    FLLMScope::FLLMScope(local_948,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_8d8 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope((FMemScope *)&local_940,&local_8d8,true);
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
              (&local_8b8,"STextBlock",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\SListView.h"
               ,0x691,local_res8);
    FMemScope::~FMemScope((FMemScope *)&local_940);
    FLLMScope::~FLLMScope(local_948);
    pTVar9 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                       (&local_8b8,&local_8a0,pFVar7);
    pFVar10 = (FSlateInvalidationRoot *)(pTVar9->SharedReferenceCount).ReferenceController;
    local_940._0_8_ = pTVar9->Object;
    if (pFVar10 != (FSlateInvalidationRoot *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar10->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pFVar10->_padding_ + 1);
      UNLOCK();
      LOCK();
      *(atomic<int> *)&pFVar10->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pFVar10->_padding_ + 1);
      UNLOCK();
    }
    pTVar2 = (pFVar6->_Content).Widget.SharedReferenceCount.ReferenceController;
    (pFVar6->_Content).Widget.Object = (SWidget *)local_940._0_8_;
    (pFVar6->_Content).Widget.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)pFVar10;
    local_940.Accessor = (FMRSWRecursiveAccessDetector *)pFVar10;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    pTVar5 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&this->_padding_,
                        (TSharedRef<SWidget,1> *)&local_940);
    local_928._0_8_ = pTVar5->Object;
    local_928._8_8_ = (pTVar5->SharedReferenceCount).ReferenceController;
    if ((TReferenceControllerBase<1> *)local_928._8_8_ != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      ((TReferenceControllerBase<1> *)local_928._8_8_)->SharedReferenceCount =
           (atomic<int>)
           ((int)((TReferenceControllerBase<1> *)local_928._8_8_)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_940.Accessor);
    local_928._16_8_ = local_928;
    this_00 = MakeTDecl<STableRow<TSharedPtr<SWidget,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<SWidget,1>_>,1>_&&>_>
                        (&local_890,"STableRow<ItemType>",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\SListView.h"
                         ,0x68e,(T1RequiredArgs<TSharedRef<SListView<TSharedPtr<SWidget,1>_>,1>_&&>
                                 *)(local_928 + 0x10));
    TSlateDecl<STableRow<TSharedPtr<SWidget,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<SWidget,1>_>,1>_&&>_>
    ::operator<<=(this_00,(TSharedRef<STableRow<TSharedPtr<SWidget,1>_>,1> *)&local_940,pFVar6);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_890._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_928._8_8_);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar10);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_8a0.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_8b8._Widget.SharedReferenceCount.ReferenceController);
    if ((ITextData *)local_8d0.DestructionSentinel._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_8d0.DestructionSentinel._0_8_ + 0x10))();
    }
    STextBlock::FArguments::~FArguments(&local_580);
    STableRow<TSharedPtr<SWidget,1>_>::FArguments::~FArguments(&local_878);
    __return_storage_ptr__->Object = (ITableRow *)local_940._0_8_;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)local_940.Accessor;
    pFVar10 = (FSlateInvalidationRoot *)local_940.Accessor;
    if ((FSlateInvalidationRoot *)local_940.Accessor != (FSlateInvalidationRoot *)0x0) {
      LOCK();
      *(atomic<int> *)((longlong)local_940.Accessor + 8) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)local_940.Accessor + 8) + 1);
      UNLOCK();
    }
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_8d0);
    pTVar5 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&this->_padding_,
                        (TSharedRef<SWidget,1> *)local_928);
    pFVar10 = (FSlateInvalidationRoot *)(pTVar5->SharedReferenceCount).ReferenceController;
    pSVar1 = pTVar5->Object;
    if (pFVar10 == (FSlateInvalidationRoot *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_928._8_8_);
    }
    else {
      LOCK();
      *(atomic<int> *)&pFVar10->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pFVar10->_padding_ + 1);
      UNLOCK();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_928._8_8_);
      LOCK();
      *(atomic<int> *)&pFVar10->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pFVar10->_padding_ + 1);
      UNLOCK();
    }
    pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
    pSVar3 = param_1->Object;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_928._16_8_ = pSVar1;
    local_928._24_8_ = pFVar10;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnGeneratePinnedRow,
               (FReadAccessScope *)&local_8b8);
    if (*(int *)&(this->OnGeneratePinnedRow).field_0x10 == 0) {
      plVar11 = (longlong *)0x0;
    }
    else {
      plVar11 = *(longlong **)&(this->OnGeneratePinnedRow).field_0x8;
    }
    local_928._0_8_ = pSVar3;
    local_928._8_8_ = pTVar2;
    (**(code **)(*plVar11 + 0x60))(plVar11,__return_storage_ptr__,local_928,local_928 + 0x10);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_8b8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_928._24_8_);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// GenerateNewWidget @ 14280bbb0

TSharedRef<ITableRow,1> * __thiscall
SListView<TSharedPtr<SWidget,1>_>::GenerateNewWidget
          (SListView<TSharedPtr<SWidget,1>_> *this,TSharedRef<ITableRow,1> *__return_storage_ptr__,
          TSharedPtr<SWidget,1> *param_1)

{
  SWidget *pSVar1;
  TReferenceControllerBase<1> *pTVar2;
  SWidget *pSVar3;
  char cVar4;
  TSharedRef<SWidget,1> *pTVar5;
  FArguments *pFVar6;
  FArguments *pFVar7;
  FText *pFVar8;
  TSharedRef<STextBlock,1> *pTVar9;
  TSlateDecl<STableRow<TSharedPtr<SWidget,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<SWidget,1>_>,1>_&&>_>
  *this_00;
  FSlateInvalidationRoot *pFVar10;
  longlong *plVar11;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res20 [2];
  FDestructionSentinel local_958;
  undefined1 local_940 [32];
  FText local_920;
  bool local_910;
  undefined1 local_908 [8];
  ForAnyElementType FStack_900;
  FWeakReferencer<1> local_8f8;
  FName local_8f0;
  FReadAccessScope local_8e8;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_8d0;
  TSharedRef<STextBlock,1> local_8b8;
  TSlateDecl<STableRow<TSharedPtr<SWidget,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<SWidget,1>_>,1>_&&>_>
  local_8a8;
  FArguments local_890;
  FArguments local_598;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnGenerateRow,
             &local_8e8);
  if (((*(int *)&(this->OnGenerateRow).field_0x10 == 0) ||
      (plVar11 = *(longlong **)&(this->OnGenerateRow).field_0x8, plVar11 == (longlong *)0x0)) ||
     (cVar4 = (**(code **)(*plVar11 + 0x38))(), cVar4 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_8e8);
    pFVar6 = STableRow<TSharedPtr<SWidget,1>_>::FArguments::FArguments(&local_890);
    pFVar7 = STextBlock::FArguments::FArguments(&local_598);
    pFVar8 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)&local_8e8,L"SListView",L"OnGenerateWidgetNotAssignedMessage",
                        L"OnGenerateWidget() not assigned.");
    FText::FText(&local_920,pFVar8);
    local_910 = true;
    local_8f8.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_908 = (undefined1  [8])0x0;
    FStack_900.Data = (FScriptContainerElement *)0x0;
    FText::operator=(&(pFVar7->_Text).Value,&local_920);
    (pFVar7->_Text).bIsSet = local_910;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar7->_Text).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_908);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_908,
               (FWriteAccessScope *)&local_958);
    if (((int)local_8f8.ReferenceController != 0) &&
       (FStack_900.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_900.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_900,0,0,0x10);
      local_8f8.ReferenceController = local_8f8.ReferenceController & 0xffffffff00000000;
    }
    if (local_958.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_958.Accessor,&local_958);
    }
    if (FStack_900.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_900.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_908);
    if (local_920.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_920.TextData.Reference + 0x10))();
    }
    FLLMScope::FLLMScope(local_res20,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_8f0 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope((FMemScope *)&local_958,&local_8f0,true);
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
              (&local_8d0,"STextBlock",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\SListView.h"
               ,0x6ad,local_res8);
    FMemScope::~FMemScope((FMemScope *)&local_958);
    FLLMScope::~FLLMScope(local_res20);
    pTVar9 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                       (&local_8d0,&local_8b8,pFVar7);
    pFVar10 = (FSlateInvalidationRoot *)(pTVar9->SharedReferenceCount).ReferenceController;
    local_958._0_8_ = pTVar9->Object;
    if (pFVar10 != (FSlateInvalidationRoot *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar10->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pFVar10->_padding_ + 1);
      UNLOCK();
      LOCK();
      *(atomic<int> *)&pFVar10->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pFVar10->_padding_ + 1);
      UNLOCK();
    }
    pTVar2 = (pFVar6->_Content).Widget.SharedReferenceCount.ReferenceController;
    (pFVar6->_Content).Widget.Object = (SWidget *)local_958._0_8_;
    (pFVar6->_Content).Widget.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)pFVar10;
    local_958.Accessor = (FMRSWRecursiveAccessDetector *)pFVar10;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    pTVar5 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&this->_padding_,
                        (TSharedRef<SWidget,1> *)&local_958);
    local_940._0_8_ = pTVar5->Object;
    local_940._8_8_ = (pTVar5->SharedReferenceCount).ReferenceController;
    if ((TReferenceControllerBase<1> *)local_940._8_8_ != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      ((TReferenceControllerBase<1> *)local_940._8_8_)->SharedReferenceCount =
           (atomic<int>)
           ((int)((TReferenceControllerBase<1> *)local_940._8_8_)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_958.Accessor);
    local_940._16_8_ = local_940;
    this_00 = MakeTDecl<STableRow<TSharedPtr<SWidget,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<SWidget,1>_>,1>_&&>_>
                        (&local_8a8,"STableRow<ItemType>",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\SListView.h"
                         ,0x6aa,(T1RequiredArgs<TSharedRef<SListView<TSharedPtr<SWidget,1>_>,1>_&&>
                                 *)(local_940 + 0x10));
    TSlateDecl<STableRow<TSharedPtr<SWidget,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<SWidget,1>_>,1>_&&>_>
    ::operator<<=(this_00,(TSharedRef<STableRow<TSharedPtr<SWidget,1>_>,1> *)&local_958,pFVar6);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_8a8._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_940._8_8_);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar10);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_8b8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_8d0._Widget.SharedReferenceCount.ReferenceController);
    if ((ITextData *)local_8e8.DestructionSentinel._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_8e8.DestructionSentinel._0_8_ + 0x10))();
    }
    STextBlock::FArguments::~FArguments(&local_598);
    STableRow<TSharedPtr<SWidget,1>_>::FArguments::~FArguments(&local_890);
    __return_storage_ptr__->Object = (ITableRow *)local_958._0_8_;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)local_958.Accessor;
    pFVar10 = (FSlateInvalidationRoot *)local_958.Accessor;
    if ((FSlateInvalidationRoot *)local_958.Accessor != (FSlateInvalidationRoot *)0x0) {
      LOCK();
      *(atomic<int> *)((longlong)local_958.Accessor + 8) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)local_958.Accessor + 8) + 1);
      UNLOCK();
    }
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_8e8);
    pTVar5 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&this->_padding_,
                        (TSharedRef<SWidget,1> *)local_940);
    pFVar10 = (FSlateInvalidationRoot *)(pTVar5->SharedReferenceCount).ReferenceController;
    pSVar1 = pTVar5->Object;
    if (pFVar10 == (FSlateInvalidationRoot *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_940._8_8_);
    }
    else {
      LOCK();
      *(atomic<int> *)&pFVar10->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pFVar10->_padding_ + 1);
      UNLOCK();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_940._8_8_);
      LOCK();
      *(atomic<int> *)&pFVar10->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pFVar10->_padding_ + 1);
      UNLOCK();
    }
    pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
    pSVar3 = param_1->Object;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_940._16_8_ = pSVar1;
    local_940._24_8_ = pFVar10;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnGenerateRow,
               (FReadAccessScope *)&local_8d0);
    if (*(int *)&(this->OnGenerateRow).field_0x10 == 0) {
      plVar11 = (longlong *)0x0;
    }
    else {
      plVar11 = *(longlong **)&(this->OnGenerateRow).field_0x8;
    }
    local_940._0_8_ = pSVar3;
    local_940._8_8_ = pTVar2;
    (**(code **)(*plVar11 + 0x60))(plVar11,__return_storage_ptr__,local_940,local_940 + 0x10);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_8d0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_940._24_8_);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// GenerateWidgetForItem @ 14280c3f0

float __thiscall
SListView<TSharedPtr<SWidget,1>_>::GenerateWidgetForItem
          (SListView<TSharedPtr<SWidget,1>_> *this,TSharedPtr<SWidget,1> *param_1,int param_2,
          int param_3,float param_4)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong *plVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  char cVar6;
  TSharedRef<ITableRow,1> *pTVar7;
  undefined8 *puVar8;
  FDeprecateSlateVector2D FVar9;
  FSharedReferencer<1> FVar10;
  longlong *plVar11;
  float fVar12;
  double dVar13;
  float local_res8;
  float local_resc;
  int local_res18;
  int local_res20;
  ITableRow *local_168;
  FSharedReferencer<1> FStack_160;
  TSharedPtr<SWidget_const_,1> local_158;
  SWidget *local_148;
  TReferenceControllerBase<1> *local_140;
  undefined8 local_138;
  FSharedReferencer<1> local_130;
  TSharedRef<ITableRow,1> local_128;
  TSharedRef<ITableRow,1> local_118;
  SWidget *local_108;
  TReferenceControllerBase<1> *local_100;
  SWidget *local_f8;
  TReferenceControllerBase<1> *local_f0;
  TSharedRef<ITableRow,1> local_e8;
  TSharedPtr<SWidget,1> local_d8;
  FTableViewDimensions local_c8;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined1 local_98 [8];
  TReferenceControllerBase<1> *local_90;
  FReadAccessScope local_88;
  FReadAccessScope local_70 [2];
  
  plVar11 = (longlong *)0x0;
  local_res18 = param_2;
  local_res20 = param_3;
  if (param_1->Object == (SWidget *)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8670646794247469567>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\SListView.h"
                       ,0x601,"TListTypeTraits<ItemType>::IsPtrValid(CurItem)");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      fVar12 = (float)(*pcVar3)();
      return fVar12;
    }
  }
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  local_158.Object = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_158.SharedReferenceCount.ReferenceController = pTVar1;
  pTVar7 = TMapBase<TSharedPtr<SWidget,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<SWidget,1>,TSharedRef<ITableRow,1>,0>_>
           ::Find((TMapBase<TSharedPtr<SWidget,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<SWidget,1>,TSharedRef<ITableRow,1>,0>_>
                   *)&(this->WidgetGenerator).ItemToWidgetMap,&local_158);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if (pTVar7 == (TSharedRef<ITableRow,1> *)0x0) {
    local_a0 = 0;
    FStack_160.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_a8 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    FStack_160.ReferenceController = (pTVar7->SharedReferenceCount).ReferenceController;
    local_168 = pTVar7->Object;
    if (FStack_160.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FStack_160.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FStack_160.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_b0 = 0;
    local_b8 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    if (local_168 != (ITableRow *)0x0) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnRefreshRow,
                 &local_88);
      if ((*(int *)&(this->OnRefreshRow).field_0x10 != 0) &&
         (plVar2 = *(longlong **)&(this->OnRefreshRow).field_0x8, plVar2 != (longlong *)0x0)) {
        cVar6 = (**(code **)(*plVar2 + 0x38))();
        if (cVar6 != '\0') {
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_88);
          local_100 = (param_1->SharedReferenceCount).ReferenceController;
          local_108 = param_1->Object;
          if (local_100 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            local_100->SharedReferenceCount =
                 (atomic<int>)((int)local_100->SharedReferenceCount + 1);
            UNLOCK();
          }
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnRefreshRow,
                     local_70);
          if (*(int *)&(this->OnRefreshRow).field_0x10 != 0) {
            plVar11 = *(longlong **)&(this->OnRefreshRow).field_0x8;
          }
          (**(code **)(*plVar11 + 0x60))(plVar11,&local_108);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(local_70);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
          param_3 = local_res20;
          param_2 = local_res18;
          goto LAB_14280c603;
        }
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_88);
      goto LAB_14280c603;
    }
  }
  pcVar3 = *(code **)(this->_padding_ + 0x2c8);
  local_f8 = param_1->Object;
  local_f0 = (param_1->SharedReferenceCount).ReferenceController;
  if (local_f0 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_f0->SharedReferenceCount = (atomic<int>)((int)local_f0->SharedReferenceCount + 1);
    UNLOCK();
  }
  puVar8 = (undefined8 *)(*pcVar3)(this,local_98,&local_f8);
  local_130.ReferenceController = (TReferenceControllerBase<1> *)puVar8[1];
  local_168 = (ITableRow *)*puVar8;
  if (local_130.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_130.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_130.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_138 = 0;
  SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_160,&local_130);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_130.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_90);
LAB_14280c603:
  if (local_168 == (ITableRow *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      fVar12 = (float)(*pcVar3)();
      return fVar12;
    }
  }
  (**(code **)((longlong)*local_168 + 0x10))(local_168,param_2);
  if (local_168 == (ITableRow *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      fVar12 = (float)(*pcVar3)();
      return fVar12;
    }
  }
  local_e8.Object = local_168;
  local_e8.SharedReferenceCount.ReferenceController = FStack_160.ReferenceController;
  if (FStack_160.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FStack_160.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FStack_160.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (local_168 == (ITableRow *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      fVar12 = (float)(*pcVar3)();
      return fVar12;
    }
  }
  local_d8.Object = param_1->Object;
  local_d8.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_d8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FWidgetGenerator::OnItemSeen(&this->WidgetGenerator,&local_d8,&local_e8);
  if (local_168 == (ITableRow *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      fVar12 = (float)(*pcVar3)();
      return fVar12;
    }
  }
  (**(code **)((longlong)*local_168 + 0x58))(local_168,&local_148);
  local_148->bNeedsPrepass = '\x01';
  SWidget::SlatePrepass(local_148,param_4);
  if (param_2 < param_3) {
    if (local_168 == (ITableRow *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        fVar12 = (float)(*pcVar3)();
        return fVar12;
      }
    }
    local_118.Object = local_168;
    local_118.SharedReferenceCount.ReferenceController = FStack_160.ReferenceController;
    if (FStack_160.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FStack_160.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FStack_160.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (local_168 == (ITableRow *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        fVar12 = (float)(*pcVar3)();
        return fVar12;
      }
    }
    STableViewBase::InsertWidget((STableViewBase *)this,&local_118);
    FVar10.ReferenceController = local_118.SharedReferenceCount.ReferenceController;
  }
  else {
    if (local_168 == (ITableRow *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        fVar12 = (float)(*pcVar3)();
        return fVar12;
      }
    }
    local_128.Object = local_168;
    local_128.SharedReferenceCount.ReferenceController = FStack_160.ReferenceController;
    if (FStack_160.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FStack_160.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FStack_160.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (local_168 == (ITableRow *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        fVar12 = (float)(*pcVar3)();
        return fVar12;
      }
    }
    STableViewBase::AppendWidget((STableViewBase *)this,&local_128);
    FVar10.ReferenceController = local_128.SharedReferenceCount.ReferenceController;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar10.ReferenceController);
  if (((byte)local_148->VisibilityAttribute & 0x19) == 0) {
    dVar4 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._0_8_;
    dVar13 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._8_8_;
  }
  else {
    FVar9 = SWidget::GetDesiredSize(local_148);
    dVar4 = (double)*(float *)FVar9;
    dVar13 = (double)*(float *)((longlong)FVar9 + 4);
  }
  local_res8 = (float)dVar4;
  local_resc = (float)dVar13;
  FTableViewDimensions::FTableViewDimensions
            (&local_c8,*(EOrientation *)((longlong)&this->_padding_ + 4),
             (FDeprecateVector2DParameter *)&local_res8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_140);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_160.ReferenceController);
  return local_c8.ScrollAxis;
}

// GetDefaultAccessibleText @ 14280f5a0

TOptional<FText> * __thiscall
SListView<TSharedPtr<SWidget,1>_>::GetDefaultAccessibleText
          (SListView<TSharedPtr<SWidget,1>_> *this,TOptional<FText> *__return_storage_ptr__,
          EAccessibleType param_1)

{
  code *pcVar1;
  bool bVar2;
  FText *pFVar3;
  TOptional<FText> *pTVar4;
  FText local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_struct_TOptional<FText>___cdecl_SListView<TSharedPtr<SWidget,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_struct_TOptional<FText>___cdecl_SListView<TSharedPtr<SWidget,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_struct_TOptional<FText>___cdecl_SListView<TSharedPtr<SWidget,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FString::FString(&`public:_virtual_struct_TOptional<FText>___cdecl_SListView<TSharedPtr<SWidget,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
                          ::__l2::Name,L"List");
      atexit(`SListView<TSharedPtr<SWidget,1>_>::GetDefaultAccessibleText'::__l2::
             _dynamic_atexit_destructor_for__Name__);
      _Init_thread_footer(&`public:_virtual_struct_TOptional<FText>___cdecl_SListView<TSharedPtr<SWidget,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pFVar3 = FText::FromString(&local_18,
                             &`public:_virtual_struct_TOptional<FText>___cdecl_SListView<TSharedPtr<SWidget,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
                              ::__l2::Name);
  FText::FText((FText *)__return_storage_ptr__,pFVar3);
  if ((__return_storage_ptr__->field0_0x0).TypedValue.TextData.Reference == (ITextData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TOptional<FText> *)(*pcVar1)();
      return pTVar4;
    }
  }
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// GetNumItemsBeingObserved @ 142811920

int __thiscall
SListView<TSharedPtr<SWidget,1>_>::GetNumItemsBeingObserved(SListView<TSharedPtr<SWidget,1>_> *this)

{
  IItemsSource<TSharedPtr<SWidget,1>_> *pIVar1;
  longlong lVar2;
  undefined1 local_18 [24];
  
  pIVar1 = (this->ViewSource).Ptr;
  if (pIVar1 != (IItemsSource<TSharedPtr<SWidget,1>_> *)0x0) {
    lVar2 = (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_18);
    return (int)*(undefined8 *)(lVar2 + 8);
  }
  return 0;
}

// GetReferencerName @ 142814090

FString * __thiscall
SListView<TSharedPtr<SWidget,1>_>::GetReferencerName
          (SListView<TSharedPtr<SWidget,1>_> *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"SListView");
  return __return_storage_ptr__;
}

// GetSelectedItems @ 1428149a0

TArray<TSharedPtr<SWidget,1>,TSizedDefaultAllocator<32>_> * __thiscall
SListView<TSharedPtr<SWidget,1>_>::GetSelectedItems
          (SListView<TSharedPtr<SWidget,1>_> *this,
          TArray<TSharedPtr<SWidget,1>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  bool bVar7;
  TArray<TSharedPtr<SWidget,1>,TSizedDefaultAllocator<32>_> *pTVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  longlong *plVar14;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_40;
  
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar12 = 0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  uVar11 = (int)this->_padding_ - *(int *)((longlong)&this->_padding_ + 4);
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
  }
  DestructItems<TSharedPtr<SWidget,1>,int>((TSharedPtr<SWidget,1> *)0x0,0);
  __return_storage_ptr__->ArrayNum = 0;
  if (*piVar1 != uVar11) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar11,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
  }
  iVar4 = (int)this->_padding_;
  TStack_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&this->_padding_;
  uVar11 = 1;
  iVar13 = iVar12;
  TStack_40.CurrentBitIndex = 0;
  if (iVar4 != 0) {
    plVar14 = (longlong *)this->_padding_;
    if ((longlong *)this->_padding_ == (longlong *)0x0) {
      plVar14 = (longlong *)TStack_40.Array;
    }
    uVar5 = (uint)*plVar14;
    iVar13 = 0;
    iVar12 = 0;
    while (uVar5 == 0) {
      lVar9 = (longlong)iVar12;
      iVar13 = iVar13 + 0x20;
      iVar12 = iVar12 + 1;
      TStack_40.CurrentBitIndex = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_142814a91;
      uVar5 = *(uint *)((longlong)plVar14 + lVar9 * 4 + 4);
    }
    uVar11 = -uVar5 & uVar5;
    uVar3 = (ulonglong)uVar11 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    TStack_40.CurrentBitIndex = (int)lVar9 + -1 + iVar13;
    if (iVar4 < TStack_40.CurrentBitIndex) {
      TStack_40.CurrentBitIndex = iVar4;
    }
  }
LAB_142814a91:
  TStack_40._padding_ = CONCAT44(uVar11,iVar12);
  TStack_40.UnvisitedBitMask = 0xffffffff;
  TStack_40._28_4_ = TStack_40.CurrentBitIndex;
  TStack_40.BaseBitIndex = iVar13;
  if (TStack_40.CurrentBitIndex < iVar4) {
    do {
      pFVar2 = (FScriptContainerElement *)
               (this->_padding_ + (longlong)TStack_40.CurrentBitIndex * 0x18);
      pFVar10 = (__return_storage_ptr__->AllocatorInstance).Data;
      if (((pFVar10 <= pFVar2) && (pFVar2 < pFVar10 + (longlong)*piVar1 * 0x10)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        pTVar8 = (TArray<TSharedPtr<SWidget,1>,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
        return pTVar8;
      }
      iVar12 = __return_storage_ptr__->ArrayNum;
      if (iVar12 == *piVar1) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
      }
      __return_storage_ptr__->ArrayNum = iVar12 + 1;
      pFVar10 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar12 * 0x10;
      *(undefined8 *)pFVar10 = *(undefined8 *)pFVar2;
      lVar9 = *(longlong *)(pFVar2 + 8);
      *(longlong *)(pFVar10 + 8) = lVar9;
      if (lVar9 != 0) {
        LOCK();
        *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
        UNLOCK();
      }
      TStack_40.UnvisitedBitMask = TStack_40.UnvisitedBitMask & ~TStack_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_40);
    } while (TStack_40.CurrentBitIndex < (int)*(longlong *)&(TStack_40.Array)->NumBits);
  }
  return __return_storage_ptr__;
}

// GetTableViewMode @ 142815d10

Type __thiscall
SListView<TSharedPtr<SWidget,1>_>::GetTableViewMode(SListView<TSharedPtr<SWidget,1>_> *this)

{
  return this[-1].PinnedWidgetGenerator.ItemsToBeCleanedUp.ArrayNum;
}

// NavigationSelect @ 142821c50

/* WARNING: Removing unreachable block (ram,0x000142821cb9) */
/* WARNING: Removing unreachable block (ram,0x000142821cde) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SListView<TSharedPtr<SWidget,1>_>::NavigationSelect
          (SListView<TSharedPtr<SWidget,1>_> *this,TSharedPtr<SWidget,1> *param_1,
          FInputEvent *param_2)

{
  FModifierKeysState *pFVar1;
  undefined1 *puVar2;
  TSet<TSharedPtr<SWidget,1>,DefaultKeyFuncs<TSharedPtr<SWidget,1>,0>,FDefaultSetAllocator> *this_00
  ;
  Type TVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  ushort uVar9;
  Type *pTVar10;
  atomic<int> *paVar11;
  ushort uVar12;
  undefined8 uVar13;
  longlong *plVar14;
  TOptional<TSharedPtr<SWidget,1>_>_u_0 local_98;
  SWidget *local_88;
  TReferenceControllerBase<1> *pTStack_80;
  TSharedPtr<SWidget,1> local_78;
  SWidget *local_68;
  FSharedReferencer<1> FStack_60;
  SWidget *local_58;
  FSharedReferencer<1> FStack_50;
  SWidget *local_48;
  FSharedReferencer<1> FStack_40;
  
  Private_FindNextSelectableOrNavigable
            (this,(TOptional<TSharedPtr<SWidget,1>_> *)&local_98.TypedValue,param_1);
  uVar13 = local_98.TypedValue.Object;
  if (local_98.TypedValue.Object == (SWidget *)0xffffffffffffffff) {
    return;
  }
  pTVar10 = TAttribute<enum_ESelectionMode::Type>::Get(&this->_padding_);
  TVar3 = *pTVar10;
  if (TVar3 == None) goto LAB_14282201d;
  if (local_98.TypedValue.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *(atomic<int> *)((longlong)local_98.TypedValue.SharedReferenceCount.ReferenceController + 8) =
         (atomic<int>)
         ((int)*(atomic<int> *)
                ((longlong)local_98.TypedValue.SharedReferenceCount.ReferenceController + 8) + 1);
    UNLOCK();
  }
  local_88 = (this->SelectorItem).Object;
  pTStack_80 = (this->SelectorItem).SharedReferenceCount.ReferenceController;
  (this->SelectorItem).Object = (SWidget *)uVar13;
  (this->SelectorItem).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)local_98.TypedValue.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_80);
  uVar13 = local_98.TypedValue.Object;
  uVar4 = param_2->UserIndex;
  if ((local_98.TypedValue.Object == (SWidget *)0xffffffffffffffff) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        ), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (local_98.TypedValue.SharedReferenceCount.ReferenceController ==
      (TReferenceControllerBase<1> *)0x0) {
    paVar11 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar11 = (atomic<int> *)
              ((longlong)local_98.TypedValue.SharedReferenceCount.ReferenceController + 8);
    LOCK();
    *paVar11 = (atomic<int>)((int)*paVar11 + 1);
    UNLOCK();
  }
  local_78.Object = local_98.TypedValue.Object;
  local_78.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)local_98.TypedValue.SharedReferenceCount.ReferenceController;
  this->bNavigateOnScrollIntoView = true;
  if (local_98.TypedValue.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar11 = (atomic<int>)((int)*paVar11 + 1);
    UNLOCK();
  }
  RequestScrollIntoView(this,&local_78,uVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)
             local_98.TypedValue.SharedReferenceCount.ReferenceController);
  if (*(char *)((longlong)&this->_padding_ + 3) == '\0') goto LAB_14282201d;
  if (TVar3 == Multi) {
    uVar9 = pFVar1->bIsRightShiftDown;
    uVar12 = pFVar1->bIsLeftShiftDown;
    if ((uVar12 == 0) && (uVar9 == 0)) {
      if (pFVar1->bIsLeftControlDown == 0 && pFVar1->bIsRightControlDown == 0) goto LAB_142821dc7;
    }
    else if ((uVar12 != 0) || (uVar9 != 0)) {
      plVar14 = &this->_padding_;
      if (pFVar1->bIsLeftControlDown == 0 && pFVar1->bIsRightControlDown == 0) {
        (**(code **)(*plVar14 + 0x30))(plVar14);
      }
      pcVar7 = *(code **)(*plVar14 + 0x38);
      if (((SWidget *)uVar13 == (SWidget *)0xffffffffffffffff) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_58 = local_98.TypedValue.Object;
      FStack_50.ReferenceController =
           (TReferenceControllerBase<1> *)
           local_98.TypedValue.SharedReferenceCount.ReferenceController;
      if (local_98.TypedValue.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *(atomic<int> *)((longlong)local_98.TypedValue.SharedReferenceCount.ReferenceController + 8)
             = (atomic<int>)
               ((int)*(atomic<int> *)
                      ((longlong)local_98.TypedValue.SharedReferenceCount.ReferenceController + 8) +
               1);
        UNLOCK();
      }
      (*pcVar7)(plVar14,&local_58);
      (**(code **)(*plVar14 + 0x40))(plVar14,1);
      goto LAB_14282201d;
    }
    plVar14 = &this->_padding_;
    pcVar7 = *(code **)(*plVar14 + 0x28);
    if (((SWidget *)uVar13 == (SWidget *)0xffffffffffffffff) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    local_68 = local_98.TypedValue.Object;
    FStack_60.ReferenceController =
         (TReferenceControllerBase<1> *)local_98.TypedValue.SharedReferenceCount.ReferenceController
    ;
    if (local_98.TypedValue.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *(atomic<int> *)((longlong)local_98.TypedValue.SharedReferenceCount.ReferenceController + 8) =
           (atomic<int>)
           ((int)*(atomic<int> *)
                  ((longlong)local_98.TypedValue.SharedReferenceCount.ReferenceController + 8) + 1);
      UNLOCK();
    }
    (*pcVar7)(plVar14,&local_68,1);
    (**(code **)(*plVar14 + 0x40))(plVar14,1);
  }
  else {
LAB_142821dc7:
    if (((SWidget *)uVar13 == (SWidget *)0xffffffffffffffff) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if (local_98.TypedValue.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *(atomic<int> *)((longlong)local_98.TypedValue.SharedReferenceCount.ReferenceController + 8) =
           (atomic<int>)
           ((int)*(atomic<int> *)
                  ((longlong)local_98.TypedValue.SharedReferenceCount.ReferenceController + 8) + 1);
      UNLOCK();
    }
    this_00 = &this->SelectedItems;
    bVar8 = 1 < (this->SelectedItems).HashSize;
    if (!bVar8) {
      TSet<TSharedPtr<SWidget,1>,DefaultKeyFuncs<TSharedPtr<SWidget,1>,0>,FDefaultSetAllocator>::
      UnhashElements(this_00);
    }
    TSparseArray<TSparseSetElement<TSharedPtr<SWidget,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements(&this_00->Elements,0,*(int *)&(this->SelectedItems).Elements.field_0x8);
    puVar2 = &(this->SelectedItems).Elements.field_0xc;
    *(undefined4 *)&(this->SelectedItems).Elements.field_0x8 = 0;
    if (*(int *)puVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)this_00,0,(int *)puVar2);
    }
    *(undefined4 *)&(this->SelectedItems).Elements.field_0x34 = 0;
    *(undefined4 *)&(this->SelectedItems).Elements.field_0x30 = 0xffffffff;
    iVar5 = *(int *)&(this->SelectedItems).Elements.field_0x2c;
    *(undefined4 *)&(this->SelectedItems).Elements.field_0x28 = 0;
    if ((iVar5 < 0) || (0x80 < iVar5)) {
      *(undefined4 *)&(this->SelectedItems).Elements.field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&(this->SelectedItems).Elements.field_0x10,
                 0);
    }
    if (bVar8) {
      (this->SelectedItems).HashSize = 1;
      TSet<TSharedPtr<SWidget,1>,DefaultKeyFuncs<TSharedPtr<SWidget,1>,0>,FDefaultSetAllocator>::
      Rehash(this_00);
    }
    pTVar10 = TAttribute<enum_ESelectionMode::Type>::Get(&this->_padding_);
    if (*pTVar10 != None) {
      lVar6 = this->_padding_;
      local_48 = local_98.TypedValue.Object;
      FStack_40.ReferenceController =
           (TReferenceControllerBase<1> *)
           local_98.TypedValue.SharedReferenceCount.ReferenceController;
      if (local_98.TypedValue.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *(atomic<int> *)((longlong)local_98.TypedValue.SharedReferenceCount.ReferenceController + 8)
             = (atomic<int>)
               ((int)*(atomic<int> *)
                      ((longlong)local_98.TypedValue.SharedReferenceCount.ReferenceController + 8) +
               1);
        UNLOCK();
      }
      (**(code **)(lVar6 + 0x28))(&this->_padding_,&local_48,1);
      (**(code **)(this->_padding_ + 0x40))(&this->_padding_,1);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)
               local_98.TypedValue.SharedReferenceCount.ReferenceController);
  }
LAB_14282201d:
  if ((SWidget *)uVar13 != (SWidget *)0xffffffffffffffff) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)
               local_98.TypedValue.SharedReferenceCount.ReferenceController);
  }
  return;
}

// NavigationSelect @ 142822060

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SListView<TSharedPtr<SWidget,1>_>::NavigationSelect
          (SListView<TSharedPtr<SWidget,1>_> *this,TSharedPtr<SWidget,1> *param_1,
          FNavigationEvent *param_2)

{
  FInputEvent local_38;
  
  local_38._padding_ = (longlong)&___7FInputEvent__6B_;
  local_38.ModifierKeys = *(FModifierKeysState *)&param_2->_padding_;
  local_38.bIsRepeat = *(bool *)((longlong)&param_2->_padding_ + 2);
  local_38.UserIndex = *(uint *)((longlong)&param_2->_padding_ + 4);
  local_38.InputDeviceId.InternalId = (int)param_2->_padding_;
  local_38.EventPath = (FWidgetPath *)param_2->_padding_;
  local_38.EventTimestamp = param_2->_padding_;
  (**(code **)(this->_padding_ + 0x2e8))(this,param_1,&local_38);
  FInputEvent::~FInputEvent(&local_38);
  if (this->bNavigateOnScrollIntoView != false) {
    this->NavigationTypeOnScrollIntoView = param_2->NavigationType;
    return;
  }
  this->NavigationTypeOnScrollIntoView = Invalid;
  return;
}

// NotifyFinishedScrolling @ 142822110

void __thiscall
SListView<TSharedPtr<SWidget,1>_>::NotifyFinishedScrolling(SListView<TSharedPtr<SWidget,1>_> *this)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnFinishedScrolling,
             &local_28);
  if ((*(int *)&(this->OnFinishedScrolling).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->OnFinishedScrolling).field_0x8, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// NotifyItemScrolledIntoView @ 142822160

void __thiscall
SListView<TSharedPtr<SWidget,1>_>::NotifyItemScrolledIntoView
          (SListView<TSharedPtr<SWidget,1>_> *this)

{
  FSharedReferencer<1> *this_00;
  EUINavigation EVar1;
  SWidget *pSVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  TSharedRef<ITableRow,1> *pTVar7;
  undefined8 *puVar8;
  TReferenceControllerBase<1> *pTVar9;
  ITableRow *local_d8;
  TReferenceControllerBase<1> *local_d0;
  TSharedPtr<SWidget_const_,1> local_c8;
  TSharedPtr<SWidget,1> local_b8;
  undefined8 local_a8;
  FSharedReferencer<1> FStack_a0;
  SWidget *local_98;
  TReferenceControllerBase<1> *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  SWidget *local_68;
  TReferenceControllerBase<1> *pTStack_60;
  undefined1 local_58 [8];
  TReferenceControllerBase<1> *local_50;
  FReadAccessScope local_48;
  
  pSVar2 = (this->ItemToNotifyWhenInView).Object;
  if (pSVar2 != (SWidget *)0x0) {
    this_00 = &(this->ItemToNotifyWhenInView).SharedReferenceCount;
    pTVar3 = this_00->ReferenceController;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_c8.Object = pSVar2;
    local_c8.SharedReferenceCount.ReferenceController = pTVar3;
    pTVar7 = TMapBase<TSharedPtr<SWidget,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<SWidget,1>,TSharedRef<ITableRow,1>,0>_>
             ::Find((TMapBase<TSharedPtr<SWidget,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<SWidget,1>,TSharedRef<ITableRow,1>,0>_>
                     *)&(this->WidgetGenerator).ItemToWidgetMap,&local_c8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    if (pTVar7 == (TSharedRef<ITableRow,1> *)0x0) {
      local_70 = 0;
      local_d8 = (ITableRow *)0x0;
      local_d0 = (TReferenceControllerBase<1> *)0x0;
      local_78 = 0;
    }
    else {
      local_d0 = (pTVar7->SharedReferenceCount).ReferenceController;
      local_d8 = pTVar7->Object;
      if (local_d0 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_d0->SharedReferenceCount = (atomic<int>)((int)local_d0->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_80 = 0;
      local_88 = 0;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    if (local_d8 != (ITableRow *)0x0) {
      if (this->bNavigateOnScrollIntoView != false) {
        if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_68 = (this->SelectorItem).Object;
        pTStack_60 = (this->SelectorItem).SharedReferenceCount.ReferenceController;
        (this->SelectorItem).Object = pSVar2;
        (this->SelectorItem).SharedReferenceCount.ReferenceController = pTVar3;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (pTStack_60);
        EVar1 = this->NavigationTypeOnScrollIntoView;
        if ((local_d8 == (ITableRow *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        puVar8 = (undefined8 *)(**(code **)((longlong)*local_d8 + 0x58))(local_d8,local_58);
        local_b8.Object = (SWidget *)*puVar8;
        local_b8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)puVar8[1]
        ;
        if (local_b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        STableViewBase::NavigateToWidget
                  ((STableViewBase *)this,this->UserRequestingScrollIntoView,&local_b8,FocusedWidget
                   ,EVar1);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_b8.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_50);
        this->NavigationTypeOnScrollIntoView = Invalid;
      }
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this->OnItemScrolledIntoView,&local_48);
      if ((*(int *)&(this->OnItemScrolledIntoView).field_0x10 == 0) ||
         (plVar4 = *(longlong **)&(this->OnItemScrolledIntoView).field_0x8,
         plVar4 == (longlong *)0x0)) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_48);
        pTVar9 = pTVar3;
      }
      else {
        local_98 = pSVar2;
        local_90 = pTVar3;
        (**(code **)(*plVar4 + 0x68))(plVar4,&local_98,&local_d8);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_48);
        pTVar9 = (TReferenceControllerBase<1> *)0x0;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
    }
    this->bNavigateOnScrollIntoView = false;
    local_a8 = 0;
    FStack_a0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&this->ItemToNotifyWhenInView != (TSharedPtr<SWidget,1> *)&local_a8) {
      (this->ItemToNotifyWhenInView).Object = (SWidget *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(this_00,&FStack_a0);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_a0.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_d0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  return;
}

// OnKeyDown @ 142827ec0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SListView<TSharedPtr<SWidget,1>_>::OnKeyDown
          (SListView<TSharedPtr<SWidget,1>_> *this,FReply *__return_storage_ptr__,FGeometry *param_1
          ,FKeyEvent *param_2)

{
  bool bVar1;
  char cVar2;
  longlong *plVar3;
  FReadAccessScope local_108;
  FReply local_e8;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnKeyDownHandler,
             &local_108);
  if (((*(int *)&(this->OnKeyDownHandler).field_0x10 == 0) ||
      (plVar3 = *(longlong **)&(this->OnKeyDownHandler).field_0x8, plVar3 == (longlong *)0x0)) ||
     (cVar2 = (**(code **)(*plVar3 + 0x38))(), cVar2 == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_108);
  if (bVar1) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnKeyDownHandler,
               &local_108);
    if (*(int *)&(this->OnKeyDownHandler).field_0x10 == 0) {
      plVar3 = (longlong *)0x0;
    }
    else {
      plVar3 = *(longlong **)&(this->OnKeyDownHandler).field_0x8;
    }
    (**(code **)(*plVar3 + 0x60))(plVar3,&local_e8,param_1,param_2);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_108);
    if ((char)local_e8._padding_ != '\0') {
      FReply::FReply(__return_storage_ptr__,&local_e8);
      FReply::~FReply(&local_e8);
      return __return_storage_ptr__;
    }
    FReply::~FReply(&local_e8);
  }
  OnKeyDown_Internal(this,__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// OnKeyDown_Internal @ 1428281a0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SListView<TSharedPtr<SWidget,1>_>::OnKeyDown_Internal
          (SListView<TSharedPtr<SWidget,1>_> *this,FReply *__return_storage_ptr__,FGeometry *param_1
          ,FKeyEvent *param_2)

{
  IItemsSource<TSharedPtr<SWidget,1>_> *pIVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  longlong *plVar8;
  FReply *pFVar9;
  TSharedPtr<SWidget,1> *pTVar10;
  TSharedPtr<SWidget,1> *pTVar11;
  Type *pTVar12;
  TSharedRef<ITableRow,1> *pTVar13;
  undefined8 *puVar14;
  TReferenceControllerBase<1> *pTVar15;
  ITableRow *pIVar16;
  uint uVar17;
  SWidget *pSVar18;
  int iVar19;
  TReferenceControllerBase<1> *pTVar20;
  TReferenceControllerBase<1> *pTVar21;
  int iVar22;
  longlong lVar23;
  bool bVar24;
  float fVar25;
  undefined4 local_res8;
  undefined4 uStackX_c;
  TArrayView<TSharedPtr<SWidget,1>_const_,int> local_100;
  SWidget *local_e8;
  TReferenceControllerBase<1> *pTStack_e0;
  TSharedPtr<SWidget_const_,1> local_d8;
  SWidget *local_c8;
  TReferenceControllerBase<1> *local_c0;
  longlong local_b8;
  undefined4 uStack_b0;
  undefined8 local_a8;
  TReferenceControllerBase<1> *local_a0;
  undefined8 local_98;
  TReferenceControllerBase<1> *local_90;
  undefined8 local_88;
  longlong local_80;
  SWidget *local_78;
  TReferenceControllerBase<1> *pTStack_70;
  SWidget *local_68;
  TReferenceControllerBase<1> *pTStack_60;
  TSharedPtr<SWidget,1> local_58 [2];
  
  pTVar21 = (TReferenceControllerBase<1> *)0x0;
  pIVar1 = (this->ViewSource).Ptr;
  iVar22 = 0;
  if (pIVar1 == (IItemsSource<TSharedPtr<SWidget,1>_> *)0x0) {
    local_b8 = 0;
    plVar8 = &local_b8;
    uStack_b0 = 0;
  }
  else {
    plVar8 = (longlong *)(**(code **)((longlong)*pIVar1 + 8))();
  }
  local_100.DataPtr = (TSharedPtr<SWidget,1> *)*plVar8;
  local_100._8_8_ = plVar8[1];
  iVar19 = (int)plVar8[1];
  if ((iVar19 < 1) || ((param_2->_padding_ & 0x30) != 0)) {
LAB_1428288af:
    STableViewBase::OnKeyDown((STableViewBase *)this,__return_storage_ptr__,param_1,param_2);
  }
  else {
    pTVar20 = (param_2->Key).KeyDetails.SharedReferenceCount.ReferenceController;
    FVar2 = (param_2->Key).KeyName;
    local_res8 = 0;
    if (pTVar20 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar20->SharedReferenceCount = (atomic<int>)((int)pTVar20->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar24 = FVar2 == EKeys::Home.KeyName;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar20);
    if (bVar24) {
      pTVar10 = local_100.DataPtr;
      if (iVar19 < 1) {
        bVar24 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        pTVar10 = local_100.DataPtr;
        if (bVar24) {
code_r0x000142828280:
          pcVar3 = (code *)swi(3);
          pFVar9 = (FReply *)(*pcVar3)();
          return pFVar9;
        }
      }
LAB_14282828b:
      pSVar18 = pTVar10->Object;
      pTVar20 = (pTVar10->SharedReferenceCount).ReferenceController;
LAB_1428284b0:
      if (pTVar20 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar20->SharedReferenceCount = (atomic<int>)((int)pTVar20->SharedReferenceCount + 1);
        UNLOCK();
      }
LAB_1428284bb:
      local_res8 = 1;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      if (pSVar18 == (SWidget *)0x0) goto LAB_142828500;
      if (pTVar20 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar20->SharedReferenceCount = (atomic<int>)((int)pTVar20->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_c8 = pSVar18;
      local_c0 = pTVar20;
      (**(code **)(this->_padding_ + 0x2e8))(this,&local_c8,param_2);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_c0);
    }
    else {
      pTVar20 = (param_2->Key).KeyDetails.SharedReferenceCount.ReferenceController;
      FVar2 = (param_2->Key).KeyName;
      if (pTVar20 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar20->SharedReferenceCount = (atomic<int>)((int)pTVar20->SharedReferenceCount + 1);
        UNLOCK();
      }
      bVar24 = FVar2 == EKeys::End.KeyName;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar20);
      if (bVar24) {
        pTVar10 = TArrayView<TSharedPtr<SWidget,1>_const_,int>::Last(&local_100,0);
        pTVar20 = (pTVar10->SharedReferenceCount).ReferenceController;
        pSVar18 = pTVar10->Object;
        pTVar10 = local_100.DataPtr;
        if (pTVar20 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar20->SharedReferenceCount = (atomic<int>)((int)pTVar20->SharedReferenceCount + 1);
          UNLOCK();
        }
        goto LAB_1428284bb;
      }
      pTVar20 = (param_2->Key).KeyDetails.SharedReferenceCount.ReferenceController;
      FVar2 = (param_2->Key).KeyName;
      if (pTVar20 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar20->SharedReferenceCount = (atomic<int>)((int)pTVar20->SharedReferenceCount + 1);
        UNLOCK();
      }
      bVar24 = FVar2 == EKeys::PageUp.KeyName;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar20);
      pTVar10 = local_100.DataPtr;
      if (bVar24) {
        pSVar18 = (this->SelectorItem).Object;
        if (pSVar18 != (SWidget *)0x0) {
          pTVar20 = (this->SelectorItem).SharedReferenceCount.ReferenceController;
          if (pTVar20 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar20->SharedReferenceCount = (atomic<int>)((int)pTVar20->SharedReferenceCount + 1);
            UNLOCK();
          }
          for (pTVar11 = local_100.DataPtr; pTVar11 != local_100.DataPtr + iVar19;
              pTVar11 = pTVar11 + 1) {
            if (pTVar11->Object == pSVar18) {
              iVar22 = (int)((longlong)pTVar11 - (longlong)local_100.DataPtr >> 4);
              goto LAB_142828355;
            }
          }
          iVar22 = -1;
LAB_142828355:
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar20);
        }
        fVar25 = (float)(**(code **)(this->_padding_ + 0x268))(this);
        iVar6 = (**(code **)(this->_padding_ + 0x270))(this);
        iVar6 = (int)fVar25 - (int)fVar25 % iVar6;
        if (iVar22 < iVar6) {
          if (iVar19 < 1) {
            bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               );
            if (bVar24) goto code_r0x000142828280;
          }
          goto LAB_14282828b;
        }
        pTVar11 = TArrayView<TSharedPtr<SWidget,1>_const_,int>::operator[]
                            (&local_100,iVar22 - iVar6);
LAB_1428284a9:
        pSVar18 = pTVar11->Object;
        pTVar20 = (pTVar11->SharedReferenceCount).ReferenceController;
        goto LAB_1428284b0;
      }
      pTVar20 = (param_2->Key).KeyDetails.SharedReferenceCount.ReferenceController;
      FVar2 = (param_2->Key).KeyName;
      if (pTVar20 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar20->SharedReferenceCount = (atomic<int>)((int)pTVar20->SharedReferenceCount + 1);
        UNLOCK();
      }
      bVar24 = FVar2 == EKeys::PageDown.KeyName;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar20);
      pTVar10 = local_100.DataPtr;
      pTVar20 = pTVar21;
      if (bVar24) {
        pSVar18 = (this->SelectorItem).Object;
        if (pSVar18 != (SWidget *)0x0) {
          pTVar20 = (this->SelectorItem).SharedReferenceCount.ReferenceController;
          if (pTVar20 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar20->SharedReferenceCount = (atomic<int>)((int)pTVar20->SharedReferenceCount + 1);
            UNLOCK();
          }
          for (pTVar11 = local_100.DataPtr; pTVar11 != local_100.DataPtr + iVar19;
              pTVar11 = pTVar11 + 1) {
            if (pTVar11->Object == pSVar18) {
              iVar22 = (int)((longlong)pTVar11 - (longlong)local_100.DataPtr >> 4);
              goto LAB_142828455;
            }
          }
          iVar22 = -1;
LAB_142828455:
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar20);
        }
        fVar25 = (float)(**(code **)(this->_padding_ + 0x268))(this);
        iVar6 = (**(code **)(this->_padding_ + 0x270))(this);
        iVar6 = (int)fVar25 - (int)fVar25 % iVar6;
        if (iVar22 < iVar19 - iVar6) {
          pTVar11 = TArrayView<TSharedPtr<SWidget,1>_const_,int>::operator[]
                              (&local_100,iVar6 + iVar22);
        }
        else {
          pTVar11 = TArrayView<TSharedPtr<SWidget,1>_const_,int>::Last(&local_100,0);
        }
        goto LAB_1428284a9;
      }
LAB_142828500:
      if ((this->bHandleSpacebarSelection == false) ||
         ((this->SelectorItem).Object == (SWidget *)0x0)) {
        pTVar15 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_c,local_res8);
LAB_142828540:
        bVar24 = false;
      }
      else {
        pTVar15 = (param_2->Key).KeyDetails.SharedReferenceCount.ReferenceController;
        FVar2 = (param_2->Key).KeyName;
        if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
          UNLOCK();
        }
        pTVar21 = (TReferenceControllerBase<1> *)&DAT_00000001;
        if (FVar2 != EKeys::SpaceBar.KeyName) goto LAB_142828540;
        bVar24 = true;
      }
      if (pTVar21 != (TReferenceControllerBase<1> *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15)
        ;
      }
      bVar4 = false;
      if (bVar24) {
        local_e8 = (this->SelectorItem).Object;
        pTStack_e0 = (this->SelectorItem).SharedReferenceCount.ReferenceController;
        if (pTStack_e0 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTStack_e0->SharedReferenceCount =
               (atomic<int>)((int)pTStack_e0->SharedReferenceCount + 1);
          UNLOCK();
        }
        if (((param_2->_padding_ & 0xc) == 0) &&
           (pTVar12 = TAttribute<enum_ESelectionMode::Type>::Get(&this->_padding_),
           *pTVar12 != SingleToggle)) {
          plVar8 = &this->_padding_;
          cVar5 = (**(code **)(*plVar8 + 0x10))(plVar8,&local_e8);
          if (cVar5 == '\0') {
            local_78 = local_e8;
            pTStack_70 = pTStack_e0;
            pcVar3 = *(code **)(*plVar8 + 0x28);
            if (pTStack_e0 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTStack_e0->SharedReferenceCount =
                   (atomic<int>)((int)pTStack_e0->SharedReferenceCount + 1);
              UNLOCK();
            }
            (*pcVar3)(plVar8,&local_78,1);
            lVar23 = *plVar8;
            goto LAB_142828652;
          }
          local_res8 = 0;
        }
        else {
          pcVar3 = *(code **)(this->_padding_ + 0x28);
          cVar5 = (**(code **)(this->_padding_ + 0x10))(&this->_padding_,&local_e8);
          local_68 = local_e8;
          pTStack_60 = pTStack_e0;
          if (pTStack_e0 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTStack_e0->SharedReferenceCount =
                 (atomic<int>)((int)pTStack_e0->SharedReferenceCount + 1);
            UNLOCK();
          }
          (*pcVar3)(&this->_padding_,&local_68,cVar5 == '\0',1);
          lVar23 = this->_padding_;
LAB_142828652:
          (**(code **)(lVar23 + 0x40))(&this->_padding_,0);
          local_res8 = 1;
        }
        TSharedPtr<SWidget,1>::operator=(&this->RangeSelectionStart,&this->SelectorItem);
        pTVar21 = pTStack_e0;
        local_d8.Object = local_e8;
        local_d8.SharedReferenceCount.ReferenceController = pTStack_e0;
        if (pTStack_e0 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTStack_e0->SharedReferenceCount =
               (atomic<int>)((int)pTStack_e0->SharedReferenceCount + 1);
          UNLOCK();
          LOCK();
          pTStack_e0->SharedReferenceCount =
               (atomic<int>)((int)pTStack_e0->SharedReferenceCount + 1);
          UNLOCK();
        }
        pTVar13 = TMapBase<TSharedPtr<SWidget,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<SWidget,1>,TSharedRef<ITableRow,1>,0>_>
                  ::Find((TMapBase<TSharedPtr<SWidget,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<SWidget,1>,TSharedRef<ITableRow,1>,0>_>
                          *)&(this->WidgetGenerator).ItemToWidgetMap,&local_d8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar21)
        ;
        if (pTVar13 == (TSharedRef<ITableRow,1> *)0x0) {
          bVar4 = false;
          bVar24 = true;
          puVar14 = &local_a8;
          pIVar16 = (ITableRow *)0x0;
          local_a0 = (TReferenceControllerBase<1> *)0x0;
        }
        else {
          local_90 = (pTVar13->SharedReferenceCount).ReferenceController;
          bVar4 = true;
          bVar24 = false;
          pIVar16 = pTVar13->Object;
          if (local_90 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            local_90->SharedReferenceCount = (atomic<int>)((int)local_90->SharedReferenceCount + 1);
            UNLOCK();
          }
          puVar14 = &local_98;
        }
        pTVar21 = (TReferenceControllerBase<1> *)puVar14[1];
        puVar14[1] = 0;
        *puVar14 = 0;
        if (bVar24) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_a0);
        }
        if (bVar4) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_90);
        }
        if (pIVar16 == (ITableRow *)0x0) {
          uVar17 = *(uint *)((longlong)&param_2->_padding_ + 4);
          local_58[0].Object = local_e8;
          local_58[0].SharedReferenceCount.ReferenceController = pTStack_e0;
          if (pTStack_e0 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTStack_e0->SharedReferenceCount =
                 (atomic<int>)((int)pTStack_e0->SharedReferenceCount + 1);
            UNLOCK();
          }
          RequestScrollIntoView(this,local_58,uVar17);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar21)
        ;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (pTStack_e0);
      }
      else {
        lVar23 = param_2->_padding_;
        if ((((lVar23 & 3) == 0) && ((lVar23 & 0x30) == 0)) && ((lVar23 & 0xc) != 0)) {
          pTVar21 = (param_2->Key).KeyDetails.SharedReferenceCount.ReferenceController;
          bVar4 = true;
          FVar2 = (param_2->Key).KeyName;
          if (pTVar21 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar21->SharedReferenceCount = (atomic<int>)((int)pTVar21->SharedReferenceCount + 1);
            UNLOCK();
          }
          if ((FVar2 != EKeys::A.KeyName) ||
             (pTVar12 = TAttribute<enum_ESelectionMode::Type>::Get(&this->_padding_),
             *pTVar12 != Multi)) goto LAB_1428287bb;
          bVar24 = true;
        }
        else {
          pTVar21 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_c,local_res8);
LAB_1428287bb:
          bVar24 = false;
        }
        if (bVar4) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar21);
        }
        if (bVar24) {
          plVar8 = &this->_padding_;
          (**(code **)(*plVar8 + 0x30))(plVar8);
          uVar17 = 0;
          if (0 < iVar19) {
            lVar23 = 0;
            do {
              pcVar3 = *(code **)(*plVar8 + 0x28);
              uVar7 = 0;
              if ((int)uVar17 < iVar19) {
                uVar7 = ~uVar17 >> 0x1f;
              }
              if ((uVar7 == 0) &&
                 (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar24)) {
                pcVar3 = (code *)swi(3);
                pFVar9 = (FReply *)(*pcVar3)();
                return pFVar9;
              }
              local_88 = *(undefined8 *)((longlong)&pTVar10->Object + lVar23);
              local_80 = *(longlong *)
                          ((longlong)&(pTVar10->SharedReferenceCount).ReferenceController + lVar23);
              if (local_80 != 0) {
                LOCK();
                *(int *)(local_80 + 8) = *(int *)(local_80 + 8) + 1;
                UNLOCK();
              }
              (*pcVar3)(plVar8,&local_88,1,0);
              uVar17 = uVar17 + 1;
              lVar23 = lVar23 + 0x10;
            } while ((int)uVar17 < iVar19);
          }
          (**(code **)(*plVar8 + 0x40))(plVar8,0);
          goto LAB_142828754;
        }
      }
      if ((char)local_res8 == '\0') {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar20)
        ;
        goto LAB_1428288af;
      }
    }
LAB_142828754:
    FReply::FReply(__return_storage_ptr__,true);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar20);
  }
  return __return_storage_ptr__;
}

// OnMouseButtonDown @ 142828ad0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SListView<TSharedPtr<SWidget,1>_>::OnMouseButtonDown
          (SListView<TSharedPtr<SWidget,1>_> *this,FReply *__return_storage_ptr__,FGeometry *param_1
          ,FPointerEvent *param_2)

{
  longlong *plVar1;
  FName FVar2;
  bool bVar3;
  int iVar4;
  Type *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  uint uStackX_c;
  
  bVar7 = false;
  if (this->bClearSelectionOnClick == false) {
LAB_142828b42:
    pTVar6 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar5 = TAttribute<enum_ESelectionMode::Type>::Get(&this->_padding_);
    if (*pTVar5 == None) goto LAB_142828b42;
    pTVar6 = (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
    FVar2 = (param_2->EffectingButton).KeyName;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar7 = true;
    if (((FVar2 == EKeys::LeftMouseButton.KeyName) && ((param_2->_padding_ & 0xc) == 0)) &&
       ((param_2->_padding_ & 3) == 0)) {
      bVar3 = true;
      goto LAB_142828b4a;
    }
  }
  bVar3 = false;
LAB_142828b4a:
  if (bVar7) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
  if (bVar3) {
    plVar1 = &this->_padding_;
    iVar4 = (**(code **)(*plVar1 + 0x70))(plVar1);
    if (0 < iVar4) {
      (**(code **)(*plVar1 + 0x30))(plVar1);
      (**(code **)(*plVar1 + 0x40))(plVar1,2);
    }
    FReply::FReply(__return_storage_ptr__,true);
  }
  else {
    STableViewBase::OnMouseButtonDown((STableViewBase *)this,__return_storage_ptr__,param_1,param_2)
    ;
  }
  return __return_storage_ptr__;
}

// OnMouseButtonUp @ 142829260

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SListView<TSharedPtr<SWidget,1>_>::OnMouseButtonUp
          (SListView<TSharedPtr<SWidget,1>_> *this,FReply *__return_storage_ptr__,FGeometry *param_1
          ,FPointerEvent *param_2)

{
  longlong *plVar1;
  FName FVar2;
  bool bVar3;
  int iVar4;
  Type *pTVar5;
  bool bVar6;
  TReferenceControllerBase<1> *pTVar7;
  uint uStackX_c;
  
  bVar6 = false;
  if (this->bClearSelectionOnClick == false) {
LAB_1428292de:
    pTVar7 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar5 = TAttribute<enum_ESelectionMode::Type>::Get(&this->_padding_);
    if (*pTVar5 == None) goto LAB_1428292de;
    pTVar7 = (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
    FVar2 = (param_2->EffectingButton).KeyName;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar6 = true;
    if (((FVar2 == EKeys::RightMouseButton.KeyName) && ((param_2->_padding_ & 0xc) == 0)) &&
       ((param_2->_padding_ & 3) == 0)) {
      bVar3 = STableViewBase::IsRightClickScrolling((STableViewBase *)this);
      if (!bVar3) {
        bVar3 = true;
        goto LAB_1428292e6;
      }
    }
  }
  bVar3 = false;
LAB_1428292e6:
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  }
  if (bVar3) {
    plVar1 = &this->_padding_;
    iVar4 = (**(code **)(*plVar1 + 0x70))(plVar1);
    if (0 < iVar4) {
      (**(code **)(*plVar1 + 0x30))(plVar1);
      (**(code **)(*plVar1 + 0x40))(plVar1,2);
    }
  }
  STableViewBase::OnMouseButtonUp((STableViewBase *)this,__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// OnNavigation @ 14282a990

/* WARNING: Removing unreachable block (ram,0x00014282abde) */
/* WARNING: Removing unreachable block (ram,0x00014282ac03) */
/* WARNING: Removing unreachable block (ram,0x00014282ac3f) */

FNavigationReply * __thiscall
SListView<TSharedPtr<SWidget,1>_>::OnNavigation
          (SListView<TSharedPtr<SWidget,1>_> *this,FNavigationReply *__return_storage_ptr__,
          FGeometry *param_1,FNavigationEvent *param_2)

{
  EUINavigation EVar1;
  IItemsSource<TSharedPtr<SWidget,1>_> *pIVar2;
  SWidget *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  longlong lVar6;
  bool bVar7;
  int iVar8;
  longlong *plVar9;
  FNavigationReply *pFVar10;
  TSharedPtr<SWidget,1> *pTVar11;
  int iVar12;
  TSharedPtr<SWidget,1> *pTVar13;
  int iVar14;
  int iVar15;
  TOptional<TSharedPtr<SWidget,1>_>_u_0 local_88;
  TArrayView<TSharedPtr<SWidget,1>_const_,int> local_78;
  TSharedPtr<SWidget,1> local_68;
  undefined1 local_58 [32];
  
  this->NavigationTypeOnScrollIntoView = Invalid;
  pIVar2 = (this->ViewSource).Ptr;
  if (((pIVar2 == (IItemsSource<TSharedPtr<SWidget,1>_> *)0x0) ||
      (this->bHandleDirectionalNavigation == false)) ||
     ((this->bHandleGamepadEvents == false && (param_2->NavigationGenesis == Controller))))
  goto LAB_14282ac49;
  plVar9 = (longlong *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_58);
  pTVar11 = (TSharedPtr<SWidget,1> *)*plVar9;
  lVar6 = plVar9[1];
  local_78.DataPtr = pTVar11;
  local_78._8_8_ = lVar6;
  iVar8 = (**(code **)(this->_padding_ + 0x270))(this);
  pSVar3 = (this->SelectorItem).Object;
  iVar14 = (int)lVar6;
  if (pSVar3 == (SWidget *)0x0) {
    iVar12 = -1;
  }
  else {
    pTVar4 = (this->SelectorItem).SharedReferenceCount.ReferenceController;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    for (pTVar13 = pTVar11; pTVar13 != pTVar11 + iVar14; pTVar13 = pTVar13 + 1) {
      if (pTVar13->Object == pSVar3) {
        iVar12 = (int)((longlong)pTVar13 - (longlong)pTVar11 >> 4);
        goto LAB_14282aa7b;
      }
    }
    iVar12 = -1;
LAB_14282aa7b:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  }
  iVar15 = *(int *)((longlong)&this->_padding_ + 4);
  EVar1 = param_2->NavigationType;
  if (iVar15 == 1) {
    if (EVar1 != Up) {
      if (EVar1 != Down) goto LAB_14282ac49;
      goto LAB_14282aac9;
    }
LAB_14282aab7:
    iVar15 = iVar12 - iVar8;
LAB_14282ab80:
    if ((iVar15 < 0) || (iVar14 <= iVar15)) goto LAB_14282ac49;
  }
  else {
    if (iVar15 != 0) goto LAB_14282ac49;
    if (EVar1 == Left) goto LAB_14282aab7;
    if (EVar1 != Right) goto LAB_14282ac49;
LAB_14282aac9:
    iVar15 = iVar12 + iVar8;
    if ((iVar15 < 0) || (iVar14 <= iVar15)) {
      if (0 < iVar14) {
        if ((iVar8 < 1) &&
           (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_8670646794247470561>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\SListView.h"
                               ,0x21f,"NumItemsPerLine > 0"), bVar7)) {
          pcVar5 = (code *)swi(3);
          pFVar10 = (FNavigationReply *)(*pcVar5)();
          return pFVar10;
        }
        if (-((int)ROUND(__real_bf000000 - (float)(iVar12 + 1) * (__real_40000000 / (float)iVar8))
             >> 1) < -((int)ROUND(__real_bf000000 - ((float)iVar14 + (float)iVar14) / (float)iVar8)
                      >> 1)) {
          iVar15 = iVar14 + -1;
        }
      }
      goto LAB_14282ab80;
    }
  }
  if (*(char *)((longlong)&this->_padding_ + 1) != '\0') {
    pTVar11 = TArrayView<TSharedPtr<SWidget,1>_const_,int>::operator[](&local_78,iVar15);
    Private_FindNextSelectableOrNavigableWithIndexAndDirection
              (this,(TOptional<TSharedPtr<SWidget,1>_> *)&local_88.TypedValue,pTVar11,iVar15,
               iVar12 <= iVar15);
    if (local_88.TypedValue.Object != (SWidget *)0xffffffffffffffff) {
      (**(code **)(this->_padding_ + 0x2e0))(this,&local_88,param_2);
      local_68.Object = (SWidget *)0x0;
      local_68.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      FNavigationReply::Explicit(__return_storage_ptr__,&local_68);
      if (local_88.TypedValue.Object == (SWidget *)0xffffffffffffffff) {
        return __return_storage_ptr__;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)
                 local_88.TypedValue.SharedReferenceCount.ReferenceController);
      return __return_storage_ptr__;
    }
  }
LAB_14282ac49:
  SWidget::OnNavigation((SWidget *)this,__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// Private_ClearHighlightedItems @ 14282dde0

void __thiscall
SListView<TSharedPtr<SWidget,1>_>::Private_ClearHighlightedItems
          (SListView<TSharedPtr<SWidget,1>_> *this)

{
  int *piVar1;
  longlong *this_00;
  int iVar2;
  bool bVar3;
  
  this_00 = &this->_padding_;
  bVar3 = 1 < (int)this->_padding_;
  if (!bVar3) {
    TSet<TSharedPtr<SWidget,1>,DefaultKeyFuncs<TSharedPtr<SWidget,1>,0>,FDefaultSetAllocator>::
    UnhashElements((TSet<TSharedPtr<SWidget,1>,DefaultKeyFuncs<TSharedPtr<SWidget,1>,0>,FDefaultSetAllocator>
                    *)this_00);
  }
  TSparseArray<TSparseSetElement<TSharedPtr<SWidget,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TSharedPtr<SWidget,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_00,0,(int)this->_padding_);
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  *(undefined4 *)&this->_padding_ = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)this_00,0,piVar1);
  }
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  iVar2 = *(int *)((longlong)&this->_padding_ + 4);
  *(undefined4 *)&this->_padding_ = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->_padding_,0);
  }
  if (bVar3) {
    *(undefined4 *)&this->_padding_ = 1;
    TSet<TSharedPtr<SWidget,1>,DefaultKeyFuncs<TSharedPtr<SWidget,1>,0>,FDefaultSetAllocator>::
    Rehash((TSet<TSharedPtr<SWidget,1>,DefaultKeyFuncs<TSharedPtr<SWidget,1>,0>,FDefaultSetAllocator>
            *)this_00);
  }
  return;
}

// Private_ClearSelection @ 14282dea0

void __thiscall
SListView<TSharedPtr<SWidget,1>_>::Private_ClearSelection(SListView<TSharedPtr<SWidget,1>_> *this)

{
  int *piVar1;
  longlong *this_00;
  int iVar2;
  bool bVar3;
  
  this_00 = &this->_padding_;
  bVar3 = 1 < (int)this->_padding_;
  if (!bVar3) {
    TSet<TSharedPtr<SWidget,1>,DefaultKeyFuncs<TSharedPtr<SWidget,1>,0>,FDefaultSetAllocator>::
    UnhashElements((TSet<TSharedPtr<SWidget,1>,DefaultKeyFuncs<TSharedPtr<SWidget,1>,0>,FDefaultSetAllocator>
                    *)this_00);
  }
  TSparseArray<TSparseSetElement<TSharedPtr<SWidget,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TSharedPtr<SWidget,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_00,0,(int)this->_padding_);
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  *(undefined4 *)&this->_padding_ = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)this_00,0,piVar1);
  }
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  iVar2 = *(int *)((longlong)&this->_padding_ + 4);
  *(undefined4 *)&this->_padding_ = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->_padding_,0);
  }
  if (bVar3) {
    *(undefined4 *)&this->_padding_ = 1;
    TSet<TSharedPtr<SWidget,1>,DefaultKeyFuncs<TSharedPtr<SWidget,1>,0>,FDefaultSetAllocator>::
    Rehash((TSet<TSharedPtr<SWidget,1>,DefaultKeyFuncs<TSharedPtr<SWidget,1>,0>,FDefaultSetAllocator>
            *)this_00);
  }
  if (*(char *)((longlong)&this->_padding_ + 1) != '\0') {
    this[-1].HighlightedItems.Elements.field_0x2c = 0;
    *(undefined4 *)&this[-1].HighlightedItems.Elements.field_0x28 = 0;
  }
  return;
}

// Private_DoesItemHaveChildren @ 14282df80

bool __thiscall
SListView<TSharedPtr<SWidget,1>_>::Private_DoesItemHaveChildren
          (SListView<TSharedPtr<SWidget,1>_> *this,int param_1)

{
  return false;
}

// Private_FindNextSelectableOrNavigable @ 14282df90

TOptional<TSharedPtr<SWidget,1>_> * __thiscall
SListView<TSharedPtr<SWidget,1>_>::Private_FindNextSelectableOrNavigable
          (SListView<TSharedPtr<SWidget,1>_> *this,
          TOptional<TSharedPtr<SWidget,1>_> *__return_storage_ptr__,TSharedPtr<SWidget,1> *param_1)

{
  TDelegate<bool___cdecl(TSharedPtr<SWidget,1>),FDefaultDelegateUserPolicy> *this_00;
  uint uVar1;
  IItemsSource<TSharedPtr<SWidget,1>_> *pIVar2;
  longlong lVar3;
  code *pcVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  longlong *plVar8;
  atomic<int> *paVar9;
  TOptional<TSharedPtr<SWidget,1>_> *pTVar10;
  uint uVar11;
  longlong *plVar12;
  int iVar13;
  SWidget *pSVar14;
  TReferenceControllerBase<1> *pTVar15;
  TReferenceControllerBase<1> *pTVar16;
  longlong lVar17;
  ulonglong uVar18;
  uint uVar19;
  TSharedPtr<SWidget,1> local_e0;
  longlong local_d0;
  undefined4 local_c8;
  SWidget *local_c0;
  TReferenceControllerBase<1> *local_b8;
  FReadAccessScope local_b0;
  FReadAccessScope local_98;
  undefined1 local_80 [16];
  TIterator local_70;
  
  pTVar16 = (param_1->SharedReferenceCount).ReferenceController;
  pSVar14 = param_1->Object;
  if (pTVar16 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar16->SharedReferenceCount = (atomic<int>)((int)pTVar16->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_00 = &this->OnIsSelectableOrNavigable;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_b0);
  if (((*(int *)&(this->OnIsSelectableOrNavigable).field_0x10 == 0) ||
      (plVar8 = *(longlong **)&(this->OnIsSelectableOrNavigable).field_0x8,
      plVar8 == (longlong *)0x0)) || (cVar5 = (**(code **)(*plVar8 + 0x38))(), cVar5 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_b0);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_b0);
    if (pTVar16 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar16->SharedReferenceCount = (atomic<int>)((int)pTVar16->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_e0.Object = pSVar14;
    local_e0.SharedReferenceCount.ReferenceController = pTVar16;
    bVar6 = TDelegate<bool___cdecl(TSharedPtr<SWidget,1>),FDefaultDelegateUserPolicy>::Execute
                      (this_00,&local_e0);
    if (!bVar6) {
      pIVar2 = (this->ViewSource).Ptr;
      if (pIVar2 == (IItemsSource<TSharedPtr<SWidget,1>_> *)0x0) {
        local_d0 = 0;
        local_c8 = 0;
        plVar8 = &local_d0;
      }
      else {
        plVar8 = (longlong *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_80);
      }
      uVar1 = *(uint *)(plVar8 + 1);
      uVar18 = (ulonglong)(int)uVar1;
      plVar8 = (longlong *)*plVar8;
      for (plVar12 = plVar8; plVar12 != plVar8 + uVar18 * 2; plVar12 = plVar12 + 2) {
        if ((SWidget *)*plVar12 == pSVar14) {
          lVar17 = (longlong)plVar12 - (longlong)plVar8 >> 4;
          goto LAB_14282e0a9;
        }
      }
      lVar17 = 0xffffffff;
LAB_14282e0a9:
      uVar19 = 1;
      if (*(int *)&(this->SelectedItems).Elements.field_0x8 -
          *(int *)&(this->SelectedItems).Elements.field_0x34 == 1) {
        TSet<TSharedPtr<SWidget,1>,DefaultKeyFuncs<TSharedPtr<SWidget,1>,0>,FDefaultSetAllocator>::
        TIterator::TIterator(&local_70,&this->SelectedItems);
        pTVar15 = *(TReferenceControllerBase<1> **)
                   (*(longlong *)local_70._padding_ + 8 + (longlong)local_70._padding_._4_4_ * 0x18)
        ;
        lVar3 = *(longlong *)
                 (*(longlong *)local_70._padding_ + (longlong)local_70._padding_._4_4_ * 0x18);
        if (pTVar15 == (TReferenceControllerBase<1> *)0x0) {
          paVar9 = (atomic<int> *)&DAT_00000008;
        }
        else {
          paVar9 = &pTVar15->SharedReferenceCount;
          LOCK();
          *paVar9 = (atomic<int>)((int)*paVar9 + 1);
          UNLOCK();
        }
        uVar19 = 1;
        if (lVar3 != 0) {
          plVar12 = plVar8;
          if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            *paVar9 = (atomic<int>)((int)*paVar9 + 1);
            UNLOCK();
          }
          for (; plVar12 != plVar8 + uVar18 * 2; plVar12 = plVar12 + 2) {
            if (*plVar12 == lVar3) {
              iVar13 = (int)((longlong)plVar12 - (longlong)plVar8 >> 4);
              goto LAB_14282e147;
            }
          }
          iVar13 = -1;
LAB_14282e147:
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar15);
          uVar19 = (uint)(iVar13 < (int)lVar17);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15)
        ;
        uVar18 = (ulonglong)uVar1;
      }
      pTVar15 = pTVar16;
      while( true ) {
        uVar11 = (int)lVar17 + -1 + uVar19 * 2;
        lVar17 = (longlong)(int)uVar11;
        if (((int)uVar11 < 0) || ((int)uVar18 <= (int)uVar11)) break;
        uVar7 = 0;
        if ((int)uVar11 < (int)uVar18) {
          uVar7 = ~uVar11 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          pTVar10 = (TOptional<TSharedPtr<SWidget,1>_> *)(*pcVar4)();
          return pTVar10;
        }
        pTVar16 = (TReferenceControllerBase<1> *)plVar8[lVar17 * 2 + 1];
        pSVar14 = (SWidget *)plVar8[lVar17 * 2];
        if (pTVar16 == (TReferenceControllerBase<1> *)0x0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar15);
        }
        else {
          LOCK();
          pTVar16->SharedReferenceCount = (atomic<int>)((int)pTVar16->SharedReferenceCount + 1);
          UNLOCK();
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar15);
          LOCK();
          pTVar16->SharedReferenceCount = (atomic<int>)((int)pTVar16->SharedReferenceCount + 1);
          UNLOCK();
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_98);
        if (*(int *)&(this->OnIsSelectableOrNavigable).field_0x10 == 0) {
          plVar12 = (longlong *)0x0;
        }
        else {
          plVar12 = *(longlong **)&(this->OnIsSelectableOrNavigable).field_0x8;
        }
        local_c0 = pSVar14;
        local_b8 = pTVar16;
        cVar5 = (**(code **)(*plVar12 + 0x60))(plVar12,&local_c0);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_98);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        if (cVar5 != '\0') goto LAB_14282e29f;
        uVar18 = (ulonglong)uVar1;
        pTVar15 = pTVar16;
      }
      (__return_storage_ptr__->field0_0x0).TypedValue.Object = (SWidget *)0xffffffffffffffff;
      (__return_storage_ptr__->field0_0x0).TypedValue.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      goto LAB_14282e2de;
    }
  }
LAB_14282e29f:
  (__return_storage_ptr__->field0_0x0).TypedValue.Object = pSVar14;
  *(TReferenceControllerBase<1> **)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = pTVar16;
  if (pTVar16 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar16->SharedReferenceCount = (atomic<int>)((int)pTVar16->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar15 = pTVar16;
  if (((__return_storage_ptr__->field0_0x0).TypedValue.Object == (SWidget *)0xffffffffffffffff) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        ), bVar6)) {
    pcVar4 = (code *)swi(3);
    pTVar10 = (TOptional<TSharedPtr<SWidget,1>_> *)(*pcVar4)();
    return pTVar10;
  }
LAB_14282e2de:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
  return __return_storage_ptr__;
}

// Private_FindNextSelectableOrNavigableWithIndexAndDirection @ 14282e320

TOptional<TSharedPtr<SWidget,1>_> * __thiscall
SListView<TSharedPtr<SWidget,1>_>::Private_FindNextSelectableOrNavigableWithIndexAndDirection
          (SListView<TSharedPtr<SWidget,1>_> *this,
          TOptional<TSharedPtr<SWidget,1>_> *__return_storage_ptr__,TSharedPtr<SWidget,1> *param_1,
          int param_2,bool param_3)

{
  IItemsSource<TSharedPtr<SWidget,1>_> *pIVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  SWidget *pSVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  uint uVar8;
  longlong *plVar9;
  TOptional<TSharedPtr<SWidget,1>_> *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  SWidget *pSVar12;
  longlong local_88;
  undefined4 uStack_80;
  SWidget *local_78;
  TReferenceControllerBase<1> *pTStack_70;
  undefined1 local_68 [16];
  FReadAccessScope local_58;
  FReadAccessScope local_40;
  
  pTVar11 = (param_1->SharedReferenceCount).ReferenceController;
  pSVar12 = param_1->Object;
  if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
    UNLOCK();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnIsSelectableOrNavigable,&local_58);
  if ((*(int *)&(this->OnIsSelectableOrNavigable).field_0x10 != 0) &&
     (plVar9 = *(longlong **)&(this->OnIsSelectableOrNavigable).field_0x8, plVar9 != (longlong *)0x0
     )) {
    cVar6 = (**(code **)(*plVar9 + 0x38))();
    if (cVar6 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_58);
      pIVar1 = (this->ViewSource).Ptr;
      if (pIVar1 == (IItemsSource<TSharedPtr<SWidget,1>_> *)0x0) {
        local_88 = 0;
        plVar9 = &local_88;
        uStack_80 = 0;
      }
      else {
        plVar9 = (longlong *)(**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_68);
      }
      pSVar4 = (SWidget *)*plVar9;
      pTStack_70 = (TReferenceControllerBase<1> *)plVar9[1];
      iVar5 = (int)pTStack_70;
      local_78 = pSVar4;
      while( true ) {
        if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
          UNLOCK();
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &this->OnIsSelectableOrNavigable,&local_40);
        if (*(int *)&(this->OnIsSelectableOrNavigable).field_0x10 == 0) {
          plVar9 = (longlong *)0x0;
        }
        else {
          plVar9 = *(longlong **)&(this->OnIsSelectableOrNavigable).field_0x8;
        }
        local_78 = pSVar12;
        pTStack_70 = pTVar11;
        cVar6 = (**(code **)(*plVar9 + 0x60))(plVar9,&local_78);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_40);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        if (cVar6 != '\0') goto LAB_14282e4e5;
        param_2 = (param_2 + (uint)param_3 * 2) - 1;
        if ((param_2 < 0) || (iVar5 <= param_2)) break;
        uVar8 = 0;
        if (param_2 < iVar5) {
          uVar8 = (uint)~param_2 >> 0x1f;
        }
        if (uVar8 == 0) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar7) {
            pcVar3 = (code *)swi(3);
            pTVar10 = (TOptional<TSharedPtr<SWidget,1>_> *)(*pcVar3)();
            return pTVar10;
          }
        }
        pTVar2 = (TReferenceControllerBase<1> *)(&pSVar4->_padding_)[(longlong)param_2 * 2];
        pSVar12 = (SWidget *)(&pSVar4->_padding_)[(longlong)param_2 * 2];
        if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11)
        ;
        pTVar11 = pTVar2;
      }
      (__return_storage_ptr__->field0_0x0).TypedValue.Object = (SWidget *)0xffffffffffffffff;
      (__return_storage_ptr__->field0_0x0).TypedValue.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      goto LAB_14282e521;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_58);
LAB_14282e4e5:
  (__return_storage_ptr__->field0_0x0).TypedValue.Object = pSVar12;
  *(TReferenceControllerBase<1> **)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = pTVar11;
  if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((__return_storage_ptr__->field0_0x0).TypedValue.Object == (SWidget *)0xffffffffffffffff) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      pTVar10 = (TOptional<TSharedPtr<SWidget,1>_> *)(*pcVar3)();
      return pTVar10;
    }
  }
LAB_14282e521:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  return __return_storage_ptr__;
}

// Private_GetNestingDepth @ 14282e560

int __thiscall
SListView<TSharedPtr<SWidget,1>_>::Private_GetNestingDepth
          (SListView<TSharedPtr<SWidget,1>_> *this,int param_1)

{
  return 0;
}

// Private_GetNumSelectedItems @ 14282e570

int __thiscall
SListView<TSharedPtr<SWidget,1>_>::Private_GetNumSelectedItems
          (SListView<TSharedPtr<SWidget,1>_> *this)

{
  return (int)this->_padding_ - *(int *)((longlong)&this->_padding_ + 4);
}

// Private_GetOrientation @ 14282e590

EOrientation __thiscall
SListView<TSharedPtr<SWidget,1>_>::Private_GetOrientation(SListView<TSharedPtr<SWidget,1>_> *this)

{
  return *(EOrientation *)&this[-1].HighlightedItems.field_0x4c;
}

// Private_GetSelectionMode @ 14282e5a0

Type __thiscall
SListView<TSharedPtr<SWidget,1>_>::Private_GetSelectionMode(SListView<TSharedPtr<SWidget,1>_> *this)

{
  Type *pTVar1;
  
  pTVar1 = TAttribute<enum_ESelectionMode::Type>::Get(&this[-1].SelectorItem.SharedReferenceCount);
  return *pTVar1;
}

// Private_GetWiresNeededByDepth @ 14282e5c0

TBitArray<FDefaultBitArrayAllocator> * __thiscall
SListView<TSharedPtr<SWidget,1>_>::Private_GetWiresNeededByDepth
          (SListView<TSharedPtr<SWidget,1>_> *this,int param_1)

{
  return &EmptyBitArray;
}

// Private_HasSelectorFocus @ 14282e5d0

bool __thiscall
SListView<TSharedPtr<SWidget,1>_>::Private_HasSelectorFocus
          (SListView<TSharedPtr<SWidget,1>_> *this,TSharedPtr<SWidget,1> *param_1)

{
  return (SWidget *)this->_padding_ == param_1->Object;
}

// Private_IsItemExpanded @ 14282e5f0

bool __thiscall
SListView<TSharedPtr<SWidget,1>_>::Private_IsItemExpanded
          (SListView<TSharedPtr<SWidget,1>_> *this,TSharedPtr<SWidget,1> *param_1)

{
  return false;
}

// Private_IsItemHighlighted @ 14282e600

bool __thiscall
SListView<TSharedPtr<SWidget,1>_>::Private_IsItemHighlighted
          (SListView<TSharedPtr<SWidget,1>_> *this,TSharedPtr<SWidget,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TSharedPtr<SWidget,1> *pTVar2;
  TSharedPtr<SWidget_const_,1> local_18;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  local_18.Object = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18.SharedReferenceCount.ReferenceController = pTVar1;
  pTVar2 = TSet<TSharedPtr<SWidget,1>,DefaultKeyFuncs<TSharedPtr<SWidget,1>,0>,FDefaultSetAllocator>
           ::Find((TSet<TSharedPtr<SWidget,1>,DefaultKeyFuncs<TSharedPtr<SWidget,1>,0>,FDefaultSetAllocator>
                   *)&this->_padding_,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return pTVar2 != (TSharedPtr<SWidget,1> *)0x0;
}

// Private_IsItemSelectableOrNavigable @ 14282e660

bool __thiscall
SListView<TSharedPtr<SWidget,1>_>::Private_IsItemSelectableOrNavigable
          (SListView<TSharedPtr<SWidget,1>_> *this,TSharedPtr<SWidget,1> *param_1)

{
  char cVar1;
  bool bVar2;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_padding_,&local_28);
  if (((int)this->_padding_ != 0) && ((longlong *)this->_padding_ != (longlong *)0x0)) {
    cVar1 = (**(code **)(*(longlong *)this->_padding_ + 0x38))();
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      local_28.DestructionSentinel._0_8_ = param_1->Object;
      local_28.DestructionSentinel.Accessor =
           (FMRSWRecursiveAccessDetector *)(param_1->SharedReferenceCount).ReferenceController;
      if ((TReferenceControllerBase<1> *)local_28.DestructionSentinel.Accessor !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        ((TReferenceControllerBase<1> *)local_28.DestructionSentinel.Accessor)->SharedReferenceCount
             = (atomic<int>)
               ((int)((TReferenceControllerBase<1> *)local_28.DestructionSentinel.Accessor)->
                     SharedReferenceCount + 1);
        UNLOCK();
      }
      bVar2 = TDelegate<bool___cdecl(TSharedPtr<SWidget,1>),FDefaultDelegateUserPolicy>::Execute
                        ((TDelegate<bool___cdecl(TSharedPtr<SWidget,1>),FDefaultDelegateUserPolicy>
                          *)&this->_padding_,(TSharedPtr<SWidget,1> *)&local_28);
      return bVar2;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return true;
}

// Private_IsItemSelected @ 14282e700

bool __thiscall
SListView<TSharedPtr<SWidget,1>_>::Private_IsItemSelected
          (SListView<TSharedPtr<SWidget,1>_> *this,TSharedPtr<SWidget,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TSharedPtr<SWidget,1> *pTVar2;
  TSharedPtr<SWidget_const_,1> local_18;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  local_18.Object = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18.SharedReferenceCount.ReferenceController = pTVar1;
  pTVar2 = TSet<TSharedPtr<SWidget,1>,DefaultKeyFuncs<TSharedPtr<SWidget,1>,0>,FDefaultSetAllocator>
           ::Find((TSet<TSharedPtr<SWidget,1>,DefaultKeyFuncs<TSharedPtr<SWidget,1>,0>,FDefaultSetAllocator>
                   *)&this->_padding_,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return pTVar2 != (TSharedPtr<SWidget,1> *)0x0;
}

// Private_IsLastChild @ 14282e760

bool __thiscall
SListView<TSharedPtr<SWidget,1>_>::Private_IsLastChild
          (SListView<TSharedPtr<SWidget,1>_> *this,int param_1)

{
  return false;
}

// Private_IsPendingRefresh @ 14282e770

bool __thiscall
SListView<TSharedPtr<SWidget,1>_>::Private_IsPendingRefresh(SListView<TSharedPtr<SWidget,1>_> *this)

{
  bool bVar1;
  
  bVar1 = STableViewBase::IsPendingRefresh((STableViewBase *)&this[-1]._padding_);
  return bVar1;
}

// Private_ItemFromWidget @ 14282e790

TSharedPtr<SWidget,1> * __thiscall
SListView<TSharedPtr<SWidget,1>_>::Private_ItemFromWidget
          (SListView<TSharedPtr<SWidget,1>_> *this,ITableRow *param_1)

{
  TSharedPtr<SWidget,1> *pTVar1;
  
  pTVar1 = TMapBase<ITableRow_const_*,TSharedPtr<SWidget,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedPtr<SWidget,1>,0>_>
           ::Find((TMapBase<ITableRow_const_*,TSharedPtr<SWidget,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedPtr<SWidget,1>,0>_>
                   *)&this->_padding_,param_1);
  if (pTVar1 == (TSharedPtr<SWidget,1> *)0x0) {
    pTVar1 = TMapBase<ITableRow_const_*,TSharedPtr<SWidget,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedPtr<SWidget,1>,0>_>
             ::Find((TMapBase<ITableRow_const_*,TSharedPtr<SWidget,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedPtr<SWidget,1>,0>_>
                     *)&this->_padding_,param_1);
  }
  return pTVar1;
}

// Private_OnExpanderArrowShiftClicked @ 14282e7d0

void __thiscall
SListView<TSharedPtr<SWidget,1>_>::Private_OnExpanderArrowShiftClicked
          (SListView<TSharedPtr<SWidget,1>_> *this,TSharedPtr<SWidget,1> *param_1,bool param_2)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// Private_OnItemClicked @ 14282e960

bool __thiscall
SListView<TSharedPtr<SWidget,1>_>::Private_OnItemClicked
          (SListView<TSharedPtr<SWidget,1>_> *this,TSharedPtr<SWidget,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  bool bVar2;
  TSharedPtr<SWidget,1> local_18;
  
  local_18.Object = param_1->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar2 = TDelegate<void___cdecl(TSharedPtr<SWidget,1>),FDefaultDelegateUserPolicy>::ExecuteIfBound
                    ((TDelegate<void___cdecl(TSharedPtr<SWidget,1>),FDefaultDelegateUserPolicy> *)
                     &this->_padding_,&local_18);
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (bVar2) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    return true;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return false;
}

// Private_OnItemDoubleClicked @ 14282e9c0

bool __thiscall
SListView<TSharedPtr<SWidget,1>_>::Private_OnItemDoubleClicked
          (SListView<TSharedPtr<SWidget,1>_> *this,TSharedPtr<SWidget,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  bool bVar2;
  TSharedPtr<SWidget,1> local_18;
  
  local_18.Object = param_1->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar2 = TDelegate<void___cdecl(TSharedPtr<SWidget,1>),FDefaultDelegateUserPolicy>::ExecuteIfBound
                    ((TDelegate<void___cdecl(TSharedPtr<SWidget,1>),FDefaultDelegateUserPolicy> *)
                     &this->_padding_,&local_18);
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (bVar2) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    return true;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return false;
}

// Private_OnItemRightClicked @ 14282ea20

void __thiscall
SListView<TSharedPtr<SWidget,1>_>::Private_OnItemRightClicked
          (SListView<TSharedPtr<SWidget,1>_> *this,TSharedPtr<SWidget,1> *param_1,
          FPointerEvent *param_2)

{
  (**(code **)(this[-1]._padding_ + 0x288))(&this[-1]._padding_,param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// Private_SelectRangeFromCurrentTo @ 14282ea50

void __thiscall
SListView<TSharedPtr<SWidget,1>_>::Private_SelectRangeFromCurrentTo
          (SListView<TSharedPtr<SWidget,1>_> *this,TSharedPtr<SWidget,1> *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  Type *pTVar7;
  undefined8 *puVar8;
  uint uVar9;
  uint uVar10;
  longlong *plVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  TSharedPtr<SWidget,1> local_res8;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined1 local_48 [16];
  
  local_res8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)param_1;
  pTVar7 = TAttribute<enum_ESelectionMode::Type>::Get(&this[-1].SelectorItem.SharedReferenceCount);
  if (*pTVar7 != None) {
    plVar1 = (longlong *)this->_padding_;
    if (plVar1 == (longlong *)0x0) {
      local_58 = 0;
      puVar8 = &local_58;
      uStack_50 = 0;
    }
    else {
      puVar8 = (undefined8 *)(**(code **)(*plVar1 + 8))(plVar1,local_48);
    }
    plVar1 = (longlong *)*puVar8;
    iVar13 = (int)puVar8[1];
    if (iVar13 != 0) {
      lVar2 = this->_padding_;
      uVar12 = 0;
      if (lVar2 != 0) {
        pTVar3 = (TReferenceControllerBase<1> *)this->_padding_;
        if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
          UNLOCK();
        }
        for (plVar11 = plVar1; plVar11 != plVar1 + (longlong)iVar13 * 2; plVar11 = plVar11 + 2) {
          if (*plVar11 == lVar2) {
            uVar12 = (uint)((longlong)plVar11 - (longlong)plVar1 >> 4);
            goto LAB_14282eb35;
          }
        }
        uVar12 = 0xffffffff;
LAB_14282eb35:
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      }
      if (plVar1 != plVar1 + (longlong)iVar13 * 2) {
        plVar11 = plVar1;
        do {
          if ((SWidget *)*plVar11 == param_1->Object) {
            uVar10 = (uint)((longlong)plVar11 - (longlong)plVar1 >> 4);
            goto LAB_14282eb6a;
          }
          plVar11 = plVar11 + 2;
        } while (plVar11 != plVar1 + (longlong)iVar13 * 2);
      }
      uVar10 = 0xffffffff;
LAB_14282eb6a:
      uVar9 = iVar13 - 1;
      uVar6 = uVar9;
      if ((int)uVar12 < (int)uVar9) {
        uVar6 = uVar12;
      }
      uVar12 = 0;
      if (0 < (int)uVar6) {
        uVar12 = uVar6;
      }
      if ((int)uVar10 < (int)uVar9) {
        uVar9 = uVar10;
      }
      uVar10 = 0;
      if (0 < (int)uVar9) {
        uVar10 = uVar9;
      }
      iVar14 = -1;
      if ((int)uVar12 < (int)uVar10) {
        iVar14 = 1;
      }
      while (uVar10 != uVar12) {
        uVar6 = 0;
        if ((int)uVar12 < iVar13) {
          uVar6 = ~uVar12 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        TSet<TSharedPtr<SWidget,1>,DefaultKeyFuncs<TSharedPtr<SWidget,1>,0>,FDefaultSetAllocator>::
        Emplace<TSharedPtr<SWidget,1>_const_&>
                  ((TSet<TSharedPtr<SWidget,1>,DefaultKeyFuncs<TSharedPtr<SWidget,1>,0>,FDefaultSetAllocator>
                    *)&this->_padding_,&local_res8,(bool *)(plVar1 + (longlong)(int)uVar12 * 2));
        uVar12 = uVar12 + iVar14;
      }
      uVar10 = 0;
      if ((int)uVar12 < iVar13) {
        uVar10 = ~uVar12 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      TSet<TSharedPtr<SWidget,1>,DefaultKeyFuncs<TSharedPtr<SWidget,1>,0>,FDefaultSetAllocator>::
      Emplace<TSharedPtr<SWidget,1>_const_&>
                ((TSet<TSharedPtr<SWidget,1>,DefaultKeyFuncs<TSharedPtr<SWidget,1>,0>,FDefaultSetAllocator>
                  *)&this->_padding_,(TSharedPtr<SWidget,1> *)&stack0x00000018,
                 (bool *)(plVar1 + (longlong)(int)uVar12 * 2));
      param_1 = (TSharedPtr<SWidget,1> *)local_res8.SharedReferenceCount.ReferenceController;
    }
    if (*(char *)((longlong)&this->_padding_ + 1) != '\0') {
      this[-1].HighlightedItems.Elements.field_0x2c = 0;
      *(undefined4 *)&this[-1].HighlightedItems.Elements.field_0x28 = 0;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (((FSharedReferencer<1> *)
             &((TReferenceControllerBase<1> *)param_1)->SharedReferenceCount)->ReferenceController);
  return;
}

// Private_SetItemExpansion @ 14282ed00

void __thiscall
SListView<TSharedPtr<SWidget,1>_>::Private_SetItemExpansion
          (SListView<TSharedPtr<SWidget,1>_> *this,TSharedPtr<SWidget,1> *param_1,bool param_2)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// Private_SetItemHighlighted @ 14282ed10

void __thiscall
SListView<TSharedPtr<SWidget,1>_>::Private_SetItemHighlighted
          (SListView<TSharedPtr<SWidget,1>_> *this,TSharedPtr<SWidget,1> *param_1,bool param_2)

{
  TSharedPtr<SWidget,1> local_res18;
  TSharedPtr<SWidget_const_,1> local_18;
  
  if (param_2) {
    TSet<TSharedPtr<SWidget,1>,DefaultKeyFuncs<TSharedPtr<SWidget,1>,0>,FDefaultSetAllocator>::
    Emplace<TSharedPtr<SWidget,1>_const_&>
              ((TSet<TSharedPtr<SWidget,1>,DefaultKeyFuncs<TSharedPtr<SWidget,1>,0>,FDefaultSetAllocator>
                *)&this->_padding_,&local_res18,(bool *)param_1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    return;
  }
  local_18.Object = param_1->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  TSet<TSharedPtr<SWidget,1>,DefaultKeyFuncs<TSharedPtr<SWidget,1>,0>,FDefaultSetAllocator>::Remove
            ((TSet<TSharedPtr<SWidget,1>,DefaultKeyFuncs<TSharedPtr<SWidget,1>,0>,FDefaultSetAllocator>
              *)&this->_padding_,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// Private_SetItemSelection @ 14282ed80

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
SListView<TSharedPtr<SWidget,1>_>::Private_SetItemSelection
          (SListView<TSharedPtr<SWidget,1>_> *this,TSharedPtr<SWidget,1> *param_1,bool param_2,
          bool param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  SWidget *pSVar2;
  FSlateAccessibleMessageHandler *this_00;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  Type *pTVar7;
  FVariant *pFVar8;
  FVariant *pFVar9;
  atomic<int> *paVar10;
  longlong *local_f8;
  TReferenceControllerBase<1> *local_f0;
  SWidget *local_e8;
  TReferenceControllerBase<1> *local_e0;
  TSharedPtr<SWidget_const_,1> local_d8;
  longlong local_c8;
  TReferenceControllerBase<1> *pTStack_c0;
  longlong local_b8;
  TReferenceControllerBase<1> *pTStack_b0;
  FSlateWidgetAccessibleEventArgs local_a8;
  FVariant local_58;
  FVariant local_40;
  
  pTVar7 = TAttribute<enum_ESelectionMode::Type>::Get(&this[-1].SelectorItem.SharedReferenceCount);
  if (*pTVar7 != None) {
    if (param_2) {
      TSet<TSharedPtr<SWidget,1>,DefaultKeyFuncs<TSharedPtr<SWidget,1>,0>,FDefaultSetAllocator>::
      Emplace<TSharedPtr<SWidget,1>_const_&>
                ((TSet<TSharedPtr<SWidget,1>,DefaultKeyFuncs<TSharedPtr<SWidget,1>,0>,FDefaultSetAllocator>
                  *)&this->_padding_,(TSharedPtr<SWidget,1> *)&stack0x00000008,(bool *)param_1);
    }
    else {
      local_d8.Object = param_1->Object;
      local_d8.SharedReferenceCount.ReferenceController =
           (param_1->SharedReferenceCount).ReferenceController;
      if (local_d8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      TSet<TSharedPtr<SWidget,1>,DefaultKeyFuncs<TSharedPtr<SWidget,1>,0>,FDefaultSetAllocator>::
      Remove((TSet<TSharedPtr<SWidget,1>,DefaultKeyFuncs<TSharedPtr<SWidget,1>,0>,FDefaultSetAllocator>
              *)&this->_padding_,&local_d8);
    }
    if (((param_3) ||
        (pTVar7 = TAttribute<enum_ESelectionMode::Type>::Get
                            (&this[-1].SelectorItem.SharedReferenceCount), *pTVar7 == Single)) ||
       (pTVar7 = TAttribute<enum_ESelectionMode::Type>::Get
                           (&this[-1].SelectorItem.SharedReferenceCount), *pTVar7 == SingleToggle))
    {
      pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
      pSVar2 = param_1->Object;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_c8 = this->_padding_;
      pTStack_c0 = (TReferenceControllerBase<1> *)this->_padding_;
      this->_padding_ = (longlong)pSVar2;
      this->_padding_ = (longlong)pTVar1;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_c0);
      pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
      pSVar2 = param_1->Object;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_b8 = this->_padding_;
      pTStack_b0 = (TReferenceControllerBase<1> *)this->_padding_;
      this->_padding_ = (longlong)pSVar2;
      this->_padding_ = (longlong)pTVar1;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_b0);
    }
    if (*(char *)((longlong)&this->_padding_ + 1) != '\0') {
      this[-1].HighlightedItems.Elements.field_0x2c = 0;
      *(undefined4 *)&this[-1].HighlightedItems.Elements.field_0x28 = 0;
    }
    if (param_2) {
      (**(code **)(this->_padding_ + 0xd8))(this,&local_f8,param_1);
      if (local_f8 != (longlong *)0x0) {
        if ((local_f8 == (longlong *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        (**(code **)(*local_f8 + 0x58))(local_f8,&local_e8);
        if (FSlateApplicationBase::CurrentBaseApplication.Object == (FSlateApplicationBase *)0x0) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurrentBaseApplication.IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Application\\SlateApplicationBase.h"
                             ,0x22a,L"");
          if (bVar6) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if ((FSlateApplicationBase::CurrentBaseApplication.Object == (FSlateApplicationBase *)0x0)
             && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x44d,L""), bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        pTVar1 = ((FSlateApplicationBase::CurrentBaseApplication.Object)->AccessibleMessageHandler).
                 SharedReferenceCount.ReferenceController;
        this_00 = ((FSlateApplicationBase::CurrentBaseApplication.Object)->AccessibleMessageHandler)
                  .Object;
        if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
          UNLOCK();
        }
        pFVar8 = FVariant::FVariant<bool>(&local_58,true);
        pFVar9 = FVariant::FVariant<bool>(&local_40,false);
        pTVar5 = local_e0;
        if (local_e0 == (TReferenceControllerBase<1> *)0x0) {
          paVar10 = (atomic<int> *)&DAT_00000008;
        }
        else {
          paVar10 = &local_e0->SharedReferenceCount;
          LOCK();
          *paVar10 = (atomic<int>)((int)*paVar10 + 1);
          UNLOCK();
        }
        local_a8.Widget.Object = local_e8;
        local_a8.Widget.SharedReferenceCount.ReferenceController = local_e0;
        if (local_e0 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          *paVar10 = (atomic<int>)((int)*paVar10 + 1);
          UNLOCK();
        }
        local_a8.Event = FocusChange;
        FVariant::FVariant(&local_a8.OldValue,pFVar9);
        FVariant::FVariant(&local_a8.NewValue,pFVar8);
        local_a8.SlateUserIndex = 0;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
        pFVar3 = (pFVar9->Value).AllocatorInstance.Data;
        if (pFVar3 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar3);
        }
        pFVar3 = (pFVar8->Value).AllocatorInstance.Data;
        if (pFVar3 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar3);
        }
        FSlateAccessibleMessageHandler::OnWidgetEventRaised(this_00,&local_a8);
        if (local_a8.NewValue.Value.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.NewValue.Value.AllocatorInstance.Data);
        }
        if (local_a8.OldValue.Value.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.OldValue.Value.AllocatorInstance.Data);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_a8.Widget.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_e0);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_f0);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// Private_SignalSelectionChanged @ 14282f0a0

void __thiscall
SListView<TSharedPtr<SWidget,1>_>::Private_SignalSelectionChanged
          (SListView<TSharedPtr<SWidget,1>_> *this,Type param_1)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  Type *pTVar4;
  TIterator *pTVar5;
  longlong lVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *local_58;
  TReferenceControllerBase<1> *local_50;
  TIterator local_48;
  
  pTVar7 = (TReferenceControllerBase<1> *)0x0;
  pTVar4 = TAttribute<enum_ESelectionMode::Type>::Get(&this[-1].SelectorItem.SharedReferenceCount);
  if (*pTVar4 != None) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_padding_,
               (FReadAccessScope *)&local_48);
    if ((((int)this->_padding_ == 0) || ((longlong *)this->_padding_ == (longlong *)0x0)) ||
       (cVar3 = (**(code **)(*(longlong *)this->_padding_ + 0x38))(), cVar3 == '\0')) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_48);
    if (bVar2) {
      if ((int)this->_padding_ - *(int *)((longlong)&this->_padding_ + 4) < 1) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        pTVar8 = pTVar7;
      }
      else {
        pTVar5 = TSet<TSharedPtr<SWidget,1>,DefaultKeyFuncs<TSharedPtr<SWidget,1>,0>,FDefaultSetAllocator>
                 ::TIterator::TIterator
                           (&local_48,
                            (TSet<TSharedPtr<SWidget,1>,DefaultKeyFuncs<TSharedPtr<SWidget,1>,0>,FDefaultSetAllocator>
                             *)&this->_padding_);
        lVar6 = (longlong)*(int *)((longlong)&pTVar5->_padding_ + 4);
        pTVar8 = *(TReferenceControllerBase<1> **)
                  (*(longlong *)pTVar5->_padding_ + 8 + lVar6 * 0x18);
        pTVar7 = *(TReferenceControllerBase<1> **)(*(longlong *)pTVar5->_padding_ + lVar6 * 0x18);
        if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
      }
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
        UNLOCK();
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_padding_,
                 (FReadAccessScope *)&local_48);
      if (((int)this->_padding_ == 0) ||
         (plVar1 = (longlong *)this->_padding_, plVar1 == (longlong *)0x0)) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  ((FReadAccessScope *)&local_48);
        pTVar7 = pTVar8;
      }
      else {
        local_58 = pTVar7;
        local_50 = pTVar8;
        (**(code **)(*plVar1 + 0x68))(plVar1,&local_58,param_1);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  ((FReadAccessScope *)&local_48);
        pTVar7 = (TReferenceControllerBase<1> *)0x0;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
    }
  }
  return;
}

// Private_UsesSelectorFocus @ 14282f200

bool __thiscall
SListView<TSharedPtr<SWidget,1>_>::Private_UsesSelectorFocus
          (SListView<TSharedPtr<SWidget,1>_> *this)

{
  return true;
}

// ReGenerateItems @ 14282fbb0

FReGenerateResults * __thiscall
SListView<TSharedPtr<SWidget,1>_>::ReGenerateItems
          (SListView<TSharedPtr<SWidget,1>_> *this,FReGenerateResults *__return_storage_ptr__,
          FGeometry *param_1)

{
  int *piVar1;
  FWidgetGenerator *this_00;
  TArray<TSharedPtr<SWidget,1>,TSizedDefaultAllocator<32>_> *pTVar2;
  float fVar3;
  IItemsSource<TSharedPtr<SWidget,1>_> *pIVar4;
  bool bVar5;
  code *pcVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  bool bVar10;
  bool bVar11;
  uint uVar12;
  longlong *plVar13;
  FReGenerateResults *pFVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  int iVar18;
  TSharedPtr<SWidget,1> *pTVar19;
  uint uVar20;
  ulonglong uVar21;
  float fVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar25;
  undefined1 in_XMM2 [16];
  double dVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float local_138;
  FDeprecateSlateVector2D local_130;
  ulonglong local_128;
  FTableViewDimensions local_120;
  longlong local_110;
  longlong lStack_108;
  longlong local_100;
  undefined4 uStack_f8;
  undefined1 local_f0 [184];
  
  STableViewBase::ClearWidgets((STableViewBase *)this);
  this_00 = &this->WidgetGenerator;
  pTVar2 = &(this->WidgetGenerator).ItemsWithGeneratedWidgets;
  TArray<TSharedPtr<SWidget,1>,TSizedDefaultAllocator<32>_>::operator=
            (&(this->WidgetGenerator).ItemsToBeCleanedUp,pTVar2);
  DestructItems<TSharedPtr<SWidget,1>,int>
            ((TSharedPtr<SWidget,1> *)(pTVar2->AllocatorInstance).Data,
             (this->WidgetGenerator).ItemsWithGeneratedWidgets.ArrayNum);
  piVar1 = &(this->WidgetGenerator).ItemsWithGeneratedWidgets.ArrayMax;
  (this->WidgetGenerator).ItemsWithGeneratedWidgets.ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  pIVar4 = (this->ViewSource).Ptr;
  if (pIVar4 == (IItemsSource<TSharedPtr<SWidget,1>_> *)0x0) {
    local_100 = 0;
    plVar13 = &local_100;
    uStack_f8 = 0;
  }
  else {
    plVar13 = (longlong *)(**(code **)((longlong)*pIVar4 + 8))(pIVar4,local_f0);
  }
  lVar7 = *plVar13;
  lStack_108 = plVar13[1];
  iVar18 = (int)plVar13[1];
  local_110 = lVar7;
  if (iVar18 < 1) {
    __return_storage_ptr__->NewScrollOffset = 0.0;
    __return_storage_ptr__->LengthOfGeneratedItems = 0.0;
    __return_storage_ptr__->ExactNumLinesOnScreen = 0.0;
    __return_storage_ptr__->bGeneratedPastLastItem = false;
    FWidgetGenerator::ProcessItemCleanUp(this_00);
    FWidgetGenerator::ValidateWidgetGeneration(this_00);
  }
  else {
    auVar23._8_8_ = 0;
    auVar23._0_8_ = this->_padding_;
    uVar15 = iVar18 - 1;
    fVar27 = 0.0;
    fVar28 = 0.0;
    fVar30 = 0.0;
    auVar23 = roundpd(auVar23,auVar23,1);
    fVar3 = param_1->Scale;
    uVar20 = uVar15;
    if ((int)auVar23._0_8_ < (int)uVar15) {
      uVar20 = (int)auVar23._0_8_;
    }
    local_138 = 0.0;
    uVar12 = 0;
    if (0 < (int)uVar20) {
      uVar12 = uVar20;
    }
    bVar5 = false;
    bVar11 = false;
    local_130 = param_1->Size;
    FTableViewDimensions::FTableViewDimensions
              (&local_120,*(EOrientation *)((longlong)&this->_padding_ + 4),
               (FDeprecateVector2DParameter *)&local_130);
    fVar9 = __real_3a83126f;
    fVar8 = __real_3f800000;
    uVar17 = (ulonglong)(int)uVar12;
    pTVar19 = (TSharedPtr<SWidget,1> *)(uVar17 * 0x10 + lVar7);
    uVar21 = uVar17;
    uVar20 = uVar12;
    local_128 = uVar17;
    fVar22 = local_120.ScrollAxis;
    do {
      if (iVar18 <= (int)uVar20) break;
      uVar16 = 0;
      if ((int)uVar20 < iVar18) {
        uVar16 = ~uVar20 >> 0x1f;
      }
      if (uVar16 == 0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar10) {
          pcVar6 = (code *)swi(3);
          pFVar14 = (FReGenerateResults *)(*pcVar6)();
          return pFVar14;
        }
        uVar17 = (ulonglong)uVar12;
        fVar22 = local_120.ScrollAxis;
      }
      if (pTVar19->Object != (SWidget *)0x0) {
        fVar22 = GenerateWidgetForItem(this,pTVar19,uVar20,(int)uVar17,fVar3);
        uVar17 = (ulonglong)uVar12;
        if (uVar20 == uVar12) {
          auVar24._8_8_ = 0;
          auVar24._0_8_ = this->_padding_;
          auVar23 = roundpd(in_XMM2,auVar24,3);
          dVar26 = (double)this->_padding_ - auVar23._0_8_;
          if (dVar26 <= __real_0000000000000000) {
            dVar26 = __real_0000000000000000;
          }
          fVar25 = fVar8 - (float)dVar26;
          in_XMM2 = ZEXT416((uint)fVar25);
          fVar29 = local_120.ScrollAxis / (fVar25 * fVar22);
          if (fVar25 <= fVar29) {
            fVar29 = fVar25;
          }
          fVar28 = fVar29 + fVar28;
          fVar29 = fVar28 * fVar22;
          local_138 = fVar22;
        }
        else {
          fVar29 = fVar8;
          if (local_120.ScrollAxis < fVar22 + fVar30) {
            fVar29 = (local_120.ScrollAxis - fVar30) / fVar22;
          }
          fVar28 = fVar29 + fVar28;
          fVar29 = fVar22;
        }
        fVar27 = fVar27 + fVar22;
        fVar30 = fVar30 + fVar29;
        bVar11 = (int)uVar15 <= (int)uVar20;
        fVar22 = local_120.ScrollAxis;
        if ((uVar21 == local_128) && (local_120.ScrollAxis <= fVar30)) {
          bVar5 = true;
          break;
        }
        bVar5 = local_120.ScrollAxis + fVar9 <= fVar30;
      }
      uVar20 = uVar20 + 1;
      uVar21 = uVar21 + 1;
      pTVar19 = pTVar19 + 1;
    } while (!bVar5);
    if ((!bVar11) || (bVar5)) {
      __return_storage_ptr__->NewScrollOffset = (double)this->_padding_;
      dVar26 = (double)fVar28;
      __return_storage_ptr__->bGeneratedPastLastItem = false;
    }
    else {
      uVar20 = (int)uVar17 - 1;
      dVar26 = (double)((fVar27 - fVar22) / local_138) + (double)(int)uVar17;
      if (fVar27 < fVar22) {
        pTVar19 = (TSharedPtr<SWidget,1> *)((longlong)(int)uVar20 * 0x10 + local_110);
        do {
          if ((int)uVar20 < 0) break;
          uVar15 = 0;
          if ((int)uVar20 < iVar18) {
            uVar15 = ~uVar20 >> 0x1f;
          }
          uVar16 = (uint)uVar17;
          if ((uVar15 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             uVar16 = uVar12, fVar22 = local_120.ScrollAxis, bVar11)) {
            pcVar6 = (code *)swi(3);
            pFVar14 = (FReGenerateResults *)(*pcVar6)();
            return pFVar14;
          }
          if (pTVar19->Object != (SWidget *)0x0) {
            fVar28 = GenerateWidgetForItem(this,pTVar19,uVar20,uVar16,fVar3);
            fVar27 = fVar28 + fVar27;
            fVar22 = local_120.ScrollAxis;
            if ((local_120.ScrollAxis < fVar27) && (0.0 < fVar28)) {
              dVar26 = (double)((fVar27 - local_120.ScrollAxis) / fVar28) + (double)(int)uVar20;
            }
          }
          uVar17 = (ulonglong)uVar12;
          uVar20 = uVar20 - 1;
          pTVar19 = pTVar19 + -1;
        } while (fVar27 < fVar22);
      }
      __return_storage_ptr__->bGeneratedPastLastItem = true;
      __return_storage_ptr__->NewScrollOffset = dVar26;
      dVar26 = (double)iVar18 - dVar26;
    }
    __return_storage_ptr__->ExactNumLinesOnScreen = dVar26;
    __return_storage_ptr__->LengthOfGeneratedItems = (double)fVar27;
    FWidgetGenerator::ProcessItemCleanUp(this_00);
    FWidgetGenerator::ValidateWidgetGeneration(this_00);
  }
  return __return_storage_ptr__;
}

// RebuildList @ 142830520

void __thiscall
SListView<TSharedPtr<SWidget,1>_>::RebuildList(SListView<TSharedPtr<SWidget,1>_> *this)

{
  FWidgetGenerator::Clear(&this->WidgetGenerator);
  FWidgetGenerator::Clear(&this->PinnedWidgetGenerator);
                    /* WARNING: Could not recover jumptable at 0x00014283054c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x248))(this);
  return;
}

// RequestScrollIntoView @ 142832b90

void __thiscall
SListView<TSharedPtr<SWidget,1>_>::RequestScrollIntoView
          (SListView<TSharedPtr<SWidget,1>_> *this,TSharedPtr<SWidget,1> *param_1,uint param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  SWidget *pSVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pSVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (this->ItemToScrollIntoView).SharedReferenceCount.ReferenceController;
  (this->ItemToScrollIntoView).Object = pSVar2;
  (this->ItemToScrollIntoView).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  this->UserRequestingScrollIntoView = param_2;
  STableViewBase::RequestLayoutRefresh((STableViewBase *)this);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// ScrollBy @ 142833200

float __thiscall
SListView<TSharedPtr<SWidget,1>_>::ScrollBy
          (SListView<TSharedPtr<SWidget,1>_> *this,FGeometry *param_1,float param_2,
          EAllowOverscroll param_3)

{
  float fVar1;
  IItemsSource<TSharedPtr<SWidget,1>_> *pIVar2;
  SWidget *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  double dVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  double dVar10;
  bool bVar11;
  uint uVar12;
  undefined1 (*pauVar13) [16];
  TSharedRef<ITableRow,1> *pTVar14;
  longlong *plVar15;
  undefined8 *puVar16;
  FDeprecateSlateVector2D FVar17;
  ITableRow *pIVar18;
  uint uVar19;
  FSharedReferencer<1> FVar20;
  longlong *plVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar28;
  double dVar29;
  float fVar30;
  FSharedReferencer<1> FStack_1d0;
  TSharedPtr<SWidget_const_,1> local_1c8;
  FDeprecateVector2DParameter local_1b8;
  FTableViewDimensions local_1b0;
  undefined8 local_1a0;
  FSharedReferencer<1> local_198;
  undefined8 local_190;
  undefined4 uStack_188;
  longlong local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  TReferenceControllerBase<1> *local_168;
  undefined8 local_160;
  TReferenceControllerBase<1> *local_158;
  longlong local_150;
  longlong local_148;
  TSharedRef<ITableRow,1> local_138;
  TSharedPtr<SWidget,1> local_128;
  undefined1 local_110 [8];
  TReferenceControllerBase<1> *local_108;
  undefined1 local_100 [8];
  TReferenceControllerBase<1> *local_f8;
  undefined1 local_f0 [8];
  TReferenceControllerBase<1> *local_e8;
  undefined1 local_e0 [184];
  
  fVar1 = __real_bf800000;
  uVar9 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar23 = __real_3f800000;
  bVar8 = false;
  bVar7 = false;
  if ((param_3 != No) ||
     (((__real_3f1a36e2e0000000 < (double)this->_padding_ ||
        __real_3f1a36e2e0000000 == (double)this->_padding_ || (0.0 <= param_2)) &&
      (((char)this->_padding_ == '\0' || (param_2 <= 0.0)))))) {
    dVar29 = (double)this->_padding_;
    auVar25._8_8_ = 0;
    auVar25._0_8_ = dVar29;
    uVar19 = (uint)(double)this->_padding_;
    fVar30 = (float)((uint)param_2 & __xmm_7fffffff7fffffff7fffffff7fffffff);
    if ((dVar29 == 0.0) && ((char)this->_padding_ != '\0')) {
      bVar11 = true;
    }
    else {
      bVar11 = false;
    }
    if ((param_3 == Yes) &&
       (((((dVar29 == 0.0 && (fVar22 = __real_bf800000, param_2 < 0.0)) ||
          (((char)this->_padding_ != '\0' && (fVar22 = __real_3f800000, 0.0 < param_2)))) ||
         ((fVar28 = *(float *)((longlong)&this->_padding_ + 4), 0.0 < fVar28 &&
          (fVar22 = __real_bf800000, param_2 < 0.0)))) ||
        ((fVar28 < 0.0 && (fVar22 = __real_3f800000, 0.0 < param_2)))))) {
      fVar28 = *(float *)((longlong)&this->_padding_ + 4);
      fVar22 = (fVar22 * fVar30) / param_1->Scale + fVar28;
      *(float *)((longlong)&this->_padding_ + 4) = fVar22;
      fVar30 = fVar23;
      if ((fVar28 <= 0.0) && (fVar30 = fVar1, 0.0 <= fVar28)) {
        fVar30 = 0.0;
      }
      if ((fVar22 <= 0.0) && (fVar23 = fVar1, 0.0 <= fVar22)) {
        fVar23 = 0.0;
      }
      if ((fVar30 != fVar23) && (fVar28 != 0.0)) {
        *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
        fVar22 = 0.0;
      }
      fVar28 = fVar28 - fVar22;
      if (fVar28 == 0.0) {
        return fVar28;
      }
      STableViewBase::RequestLayoutRefresh((STableViewBase *)this);
      return fVar28;
    }
    if (!bVar11) {
      pIVar2 = (this->ViewSource).Ptr;
      if (pIVar2 == (IItemsSource<TSharedPtr<SWidget,1>_> *)0x0) {
        local_190 = 0;
        pauVar13 = (undefined1 (*) [16])&local_190;
        uStack_188 = 0;
      }
      else {
        pauVar13 = (undefined1 (*) [16])(**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_e0);
      }
      dVar10 = __real_bff0000000000000;
      fVar23 = __real_3f800000;
      dVar6 = __real_3ff0000000000000;
      uStack_178 = *(undefined8 *)(*pauVar13 + 8);
      local_180 = SUB168(*pauVar13,0);
      if ((0 < (int)uStack_178) && (fVar1 = param_1->Scale, param_2 != 0.0)) {
        plVar21 = (longlong *)((longlong)(int)uVar19 * 0x10 + local_180);
        do {
          dVar29 = auVar25._0_8_;
          pIVar18 = (ITableRow *)0x0;
          if (((int)uStack_178 <= (int)uVar19) || ((int)uVar19 < 0)) break;
          uVar12 = 0;
          if ((int)uVar19 < (int)uStack_178) {
            uVar12 = ~uVar19 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar11)) {
            pcVar5 = (code *)swi(3);
            fVar23 = (float)(*pcVar5)();
            return fVar23;
          }
          pSVar3 = (SWidget *)*plVar21;
          if (pSVar3 != (SWidget *)0x0) {
            pTVar4 = (TReferenceControllerBase<1> *)plVar21[1];
            if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
              UNLOCK();
              LOCK();
              pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
              UNLOCK();
            }
            local_1c8.Object = pSVar3;
            local_1c8.SharedReferenceCount.ReferenceController = pTVar4;
            pTVar14 = TMapBase<TSharedPtr<SWidget,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<SWidget,1>,TSharedRef<ITableRow,1>,0>_>
                      ::Find((TMapBase<TSharedPtr<SWidget,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<SWidget,1>,TSharedRef<ITableRow,1>,0>_>
                              *)&(this->WidgetGenerator).ItemToWidgetMap,&local_1c8);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar4);
            if (pTVar14 == (TSharedRef<ITableRow,1> *)0x0) {
              bVar7 = true;
              local_168 = (TReferenceControllerBase<1> *)0x0;
              puVar16 = &local_170;
            }
            else {
              local_158 = (pTVar14->SharedReferenceCount).ReferenceController;
              bVar8 = true;
              pIVar18 = pTVar14->Object;
              if (local_158 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                local_158->SharedReferenceCount =
                     (atomic<int>)((int)local_158->SharedReferenceCount + 1);
                UNLOCK();
              }
              puVar16 = &local_160;
            }
            FVar20.ReferenceController = (TReferenceControllerBase<1> *)puVar16[1];
            puVar16[1] = 0;
            *puVar16 = 0;
            FStack_1d0.ReferenceController = FVar20.ReferenceController;
            if (bVar7) {
              bVar7 = false;
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_168);
            }
            if (bVar8) {
              bVar8 = false;
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_158);
            }
            if (pIVar18 == (ITableRow *)0x0) {
              pcVar5 = *(code **)(this->_padding_ + 0x2c8);
              local_150 = *plVar21;
              local_148 = plVar21[1];
              if (local_148 != 0) {
                LOCK();
                *(int *)(local_148 + 8) = *(int *)(local_148 + 8) + 1;
                UNLOCK();
              }
              plVar15 = (longlong *)(*pcVar5)(this,local_110,&local_150);
              local_198.ReferenceController = (TReferenceControllerBase<1> *)plVar15[1];
              pIVar18 = (ITableRow *)*plVar15;
              if (local_198.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                (local_198.ReferenceController)->SharedReferenceCount =
                     (atomic<int>)((int)(local_198.ReferenceController)->SharedReferenceCount + 1);
                UNLOCK();
              }
              local_1a0 = 0;
              SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_1d0,&local_198);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_198.ReferenceController);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_108);
              if ((pIVar18 == (ITableRow *)0x0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar11)) {
                pcVar5 = (code *)swi(3);
                fVar23 = (float)(*pcVar5)();
                return fVar23;
              }
              (**(code **)((longlong)*pIVar18 + 0x10))(pIVar18,uVar19);
              if ((pIVar18 == (ITableRow *)0x0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x408,L""), bVar11)) {
                pcVar5 = (code *)swi(3);
                fVar23 = (float)(*pcVar5)();
                return fVar23;
              }
              FVar20.ReferenceController = FStack_1d0.ReferenceController;
              local_138.SharedReferenceCount.ReferenceController = FStack_1d0.ReferenceController;
              if (FStack_1d0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                (FStack_1d0.ReferenceController)->SharedReferenceCount =
                     (atomic<int>)((int)(FStack_1d0.ReferenceController)->SharedReferenceCount + 1);
                UNLOCK();
              }
              local_138.Object = pIVar18;
              if ((pIVar18 == (ITableRow *)0x0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x25d,L""), bVar11)) {
                pcVar5 = (code *)swi(3);
                fVar23 = (float)(*pcVar5)();
                return fVar23;
              }
              local_128.Object = (SWidget *)*plVar21;
              local_128.SharedReferenceCount.ReferenceController =
                   (TReferenceControllerBase<1> *)plVar21[1];
              if (local_128.SharedReferenceCount.ReferenceController !=
                  (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                (local_128.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                     (atomic<int>)
                     ((int)(local_128.SharedReferenceCount.ReferenceController)->
                           SharedReferenceCount + 1);
                UNLOCK();
              }
              FWidgetGenerator::OnItemSeen(&this->WidgetGenerator,&local_128,&local_138);
              if ((pIVar18 == (ITableRow *)0x0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar11)) {
                pcVar5 = (code *)swi(3);
                fVar23 = (float)(*pcVar5)();
                return fVar23;
              }
              puVar16 = (undefined8 *)(**(code **)((longlong)*pIVar18 + 0x58))(pIVar18,local_100);
              SWidget::SlatePrepass((SWidget *)*puVar16,fVar1);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_f8);
              if ((pIVar18 == (ITableRow *)0x0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar11)) {
                pcVar5 = (code *)swi(3);
                fVar23 = (float)(*pcVar5)();
                return fVar23;
              }
            }
            puVar16 = (undefined8 *)(**(code **)((longlong)*pIVar18 + 0x58))(pIVar18,local_f0);
            FVar17 = SWidget::GetDesiredSize((SWidget *)*puVar16);
            local_1b8 = *(FDeprecateVector2DParameter *)FVar17;
            FTableViewDimensions::FTableViewDimensions
                      (&local_1b0,*(EOrientation *)((longlong)&this->_padding_ + 4),&local_1b8);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_e8);
            if (param_2 <= 0.0) {
              fVar28 = (float)truncf();
              fVar22 = (float)dVar29 - fVar28;
              if ((float)((uint)((float)dVar29 - fVar28) & uVar9) <= __real_322bcc77) {
                auVar25._0_8_ = dVar29 + dVar10;
                fVar22 = fVar23;
              }
              fVar22 = fVar22 * local_1b0.ScrollAxis;
              dVar29 = auVar25._0_8_;
              if (fVar30 <= fVar22) {
                auVar27._8_8_ = 0;
                auVar27._0_8_ = dVar29;
                if (fVar30 == fVar22) {
                  auVar25 = roundpd(auVar25,auVar27,3);
                  dVar29 = auVar25._0_8_;
                }
                else {
                  dVar29 = (double)((float)(int)dVar29 + (fVar22 - fVar30) / local_1b0.ScrollAxis);
                }
              }
              else {
                if (uVar19 != 0) {
                  auVar26._8_8_ = 0;
                  auVar26._0_8_ = dVar29;
                  uVar19 = uVar19 - 1;
                  auVar25 = roundpd(auVar25,auVar26,3);
                  plVar21 = plVar21 + -2;
                  goto LAB_142833859;
                }
                dVar29 = 0.0;
              }
            }
            else {
              auVar24._8_8_ = 0;
              auVar24._0_8_ = dVar29;
              auVar25 = roundpd(auVar24,auVar24,3);
              fVar22 = (float)(dVar6 - (dVar29 - auVar25._0_8_)) * local_1b0.ScrollAxis;
              if (fVar22 < fVar30) {
                uVar19 = uVar19 + 1;
                plVar21 = plVar21 + 2;
                auVar25._0_8_ = (double)(int)dVar29 + dVar6;
                auVar25._8_8_ = 0;
LAB_142833859:
                fVar30 = fVar30 - fVar22;
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (FVar20.ReferenceController);
                goto LAB_142833861;
              }
              if (fVar30 != fVar22) {
                dVar6 = dVar6 - (double)((fVar22 - fVar30) / local_1b0.ScrollAxis);
              }
              dVar29 = (double)(int)dVar29 + dVar6;
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (FVar20.ReferenceController);
            break;
          }
          uVar19 = uVar19 + 1;
          plVar21 = plVar21 + 2;
LAB_142833861:
          dVar29 = auVar25._0_8_;
        } while (fVar30 != 0.0);
      }
      fVar23 = (float)(**(code **)(this->_padding_ + 0x260))(this,(float)dVar29);
      return fVar23;
    }
  }
  return 0.0;
}

// ScrollIntoView @ 142833b40

/* WARNING: Type propagation algorithm not settling */

EScrollIntoViewResult __thiscall
SListView<TSharedPtr<SWidget,1>_>::ScrollIntoView
          (SListView<TSharedPtr<SWidget,1>_> *this,FGeometry *param_1)

{
  EScrollIntoViewAlignment EVar1;
  uint uVar2;
  IItemsSource<TSharedPtr<SWidget,1>_> *pIVar3;
  TReferenceControllerBase<1> *pTVar4;
  SWidget *pSVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  bool bVar8;
  EScrollIntoViewResult EVar9;
  longlong *plVar10;
  TSharedPtr<SWidget,1> *pTVar11;
  undefined8 *puVar12;
  FGeometry *pFVar13;
  ulonglong uVar14;
  TSharedRef<ITableRow,1> *pTVar15;
  ITableRow *pIVar16;
  int iVar17;
  FScriptContainerElement *pFVar18;
  FScriptContainerElement *pFVar19;
  uint uVar20;
  int iVar22;
  longlong lVar23;
  float fVar24;
  double dVar25;
  double dVar26;
  undefined1 auVar27 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  double dVar30;
  undefined1 in_XMM5 [16];
  undefined1 auVar31 [16];
  float fVar32;
  double dVar33;
  float fVar34;
  float fVar35;
  uint local_res8 [2];
  undefined8 local_res18;
  float local_1c0;
  float fStack_1bc;
  TSharedPtr<SWidget_const_,1> local_1b0;
  longlong *local_1a0;
  TReferenceControllerBase<1> *local_198;
  FDeprecateVector2DParameter local_190;
  FDeprecateVector2DParameter local_188;
  FDeprecateVector2DParameter local_180;
  FDeprecateVector2DParameter local_178;
  FDeprecateVector2DParameter local_170;
  undefined8 local_168;
  FSharedReferencer<1> FStack_160;
  SWidget *local_158;
  TReferenceControllerBase<1> *local_150;
  undefined8 local_148;
  TReferenceControllerBase<1> *local_140;
  undefined8 local_138;
  TReferenceControllerBase<1> *local_130;
  FTableViewDimensions local_128;
  FTableViewDimensions local_118;
  FTableViewDimensions local_108;
  FTableViewDimensions local_f8;
  FTableViewDimensions local_e8;
  TArrayView<TSharedPtr<SWidget,1>_const_,int> local_d8;
  undefined1 local_c8 [8];
  TReferenceControllerBase<1> *local_c0;
  undefined1 local_b8 [8];
  TReferenceControllerBase<1> *local_b0;
  SWidget *local_a8;
  TReferenceControllerBase<1> *pTStack_a0;
  undefined1 local_98 [8];
  TReferenceControllerBase<1> *local_90;
  undefined1 local_88 [80];
  ITableRow *pIVar21;
  
  local_res8[0] = 0;
  pIVar3 = (this->ViewSource).Ptr;
  if ((pIVar3 == (IItemsSource<TSharedPtr<SWidget,1>_> *)0x0) ||
     ((this->ItemToScrollIntoView).Object == (SWidget *)0x0)) goto LAB_142833c24;
  plVar10 = (longlong *)(**(code **)((longlong)*pIVar3 + 8))(pIVar3,local_88);
  pTVar4 = (this->ItemToScrollIntoView).SharedReferenceCount.ReferenceController;
  pSVar5 = (this->ItemToScrollIntoView).Object;
  local_d8.DataPtr = (TSharedPtr<SWidget,1> *)*plVar10;
  local_d8._8_8_ = plVar10[1];
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  iVar17 = (int)local_d8._8_8_;
  for (pTVar11 = local_d8.DataPtr; pTVar11 != local_d8.DataPtr + iVar17; pTVar11 = pTVar11 + 1) {
    if (pTVar11->Object == pSVar5) {
      lVar23 = (longlong)pTVar11 - (longlong)local_d8.DataPtr;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      iVar22 = (int)(lVar23 >> 4);
      if (iVar22 == -1) goto LAB_142833bfb;
      fVar24 = (float)(**(code **)(this->_padding_ + 0x268))(this);
      dVar26 = (double)fVar24;
      if (((dVar26 == 0.0) &&
          (bVar8 = STableViewBase::IsPendingRefresh((STableViewBase *)this), bVar8)) &&
         (dVar26 = (double)this->_padding_, dVar26 == 0.0)) {
        return Deferred;
      }
      STableViewBase::EndInertialScrolling((STableViewBase *)this,false);
      dVar25 = (double)this->_padding_;
      auVar28._8_8_ = 0;
      auVar28._0_8_ = dVar25;
      auVar31 = roundpd(in_XMM5,auVar28,2);
      auVar27._0_8_ = dVar25 + dVar26;
      auVar27._8_8_ = 0;
      auVar28 = roundpd(in_XMM2,auVar27,1);
      auVar29._8_8_ = auVar28._8_8_;
      dVar30 = auVar31._0_8_;
      auVar29._0_8_ = auVar28._0_8_ - dVar30;
      auVar31._0_8_ = (double)(int)auVar29._0_8_ + dVar25;
      auVar31._8_8_ = 0;
      if (this->bNavigateOnScrollIntoView == false) {
        auVar28 = roundpd(auVar31,auVar31,1);
        dVar25 = auVar28._0_8_;
      }
      else {
        auVar7._8_8_ = 0;
        auVar7._0_8_ = dVar25;
        auVar28 = roundpd(auVar29,auVar7,1);
        dVar30 = auVar28._0_8_;
        auVar28 = roundpd(auVar31,auVar31,2);
        dVar25 = auVar28._0_8_;
      }
      dVar33 = (double)iVar22;
      if (((dVar30 <= dVar33) && (dVar33 <= dVar25)) &&
         ((this->ScrollIntoViewAlignment != TopOrLeft &&
          (this->ScrollIntoViewAlignment != BottomOrRight)))) {
        if (this->bNavigateOnScrollIntoView == false) goto LAB_142834302;
        pcVar6 = *(code **)(this->_padding_ + 0xd8);
        pTVar11 = TArrayView<TSharedPtr<SWidget,1>_const_,int>::operator[](&local_d8,iVar22);
        (*pcVar6)(&this->_padding_,&local_1a0,pTVar11);
        if (local_1a0 == (longlong *)0x0) goto LAB_142834287;
        if ((local_1a0 == (longlong *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar8)) {
          pcVar6 = (code *)swi(3);
          EVar9 = (*pcVar6)();
          return EVar9;
        }
        puVar12 = (undefined8 *)(**(code **)(*local_1a0 + 0x58))(local_1a0,local_c8);
        pFVar13 = SWidget::GetCachedGeometry((SWidget *)*puVar12);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_c0);
        local_res18._4_4_ = SUB84(pFVar13->Size,4);
        local_res18._0_4_ = SUB84(pFVar13->Size,0);
        local_190._4_4_ =
             (float)UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.Y * local_res18._4_4_ *
             (pFVar13->AccumulatedRenderTransform).M.M[1][1] +
             (float)UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.X * (float)local_res18 *
             (pFVar13->AccumulatedRenderTransform).M.M[0][1] +
             (pFVar13->AccumulatedRenderTransform).Trans.field0_0x0._s_0.Y;
        local_190._0_4_ =
             (float)UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.X * (float)local_res18 *
             (pFVar13->AccumulatedRenderTransform).M.M[0][0] +
             (float)UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.Y * local_res18._4_4_ *
             (pFVar13->AccumulatedRenderTransform).M.M[1][0] +
             (pFVar13->AccumulatedRenderTransform).Trans.field0_0x0._s_0.X;
        FTableViewDimensions::FTableViewDimensions
                  (&local_128,*(EOrientation *)((longlong)&this->_padding_ + 4),&local_190);
        local_res18._4_4_ = SUB84(param_1->Size,4);
        local_res18._0_4_ = SUB84(param_1->Size,0);
        local_188._4_4_ =
             (float)UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.Y * local_res18._4_4_ *
             (param_1->AccumulatedRenderTransform).M.M[1][1] +
             (float)UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.X * (float)local_res18 *
             (param_1->AccumulatedRenderTransform).M.M[0][1] +
             (param_1->AccumulatedRenderTransform).Trans.field0_0x0._s_0.Y;
        local_188._0_4_ =
             (float)UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.Y * local_res18._4_4_ *
             (param_1->AccumulatedRenderTransform).M.M[1][0] +
             (float)UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.X * (float)local_res18 *
             (param_1->AccumulatedRenderTransform).M.M[0][0] +
             (param_1->AccumulatedRenderTransform).Trans.field0_0x0._s_0.X;
        FTableViewDimensions::FTableViewDimensions
                  (&local_118,*(EOrientation *)((longlong)&this->_padding_ + 4),&local_188);
        dVar26 = (double)this->_padding_;
        if (local_128.ScrollAxis < local_118.ScrollAxis) {
          dVar26 = dVar33 - (double)this->NavigationScrollOffset;
          goto LAB_142834278;
        }
        local_res18._0_4_ = SUB84(pFVar13->Size,0);
        local_res18._4_4_ = SUB84(pFVar13->Size,4);
        fVar24 = local_res18._4_4_ * (pFVar13->AccumulatedRenderTransform).M.M[1][0];
        local_res18._4_4_ =
             local_res18._4_4_ * (pFVar13->AccumulatedRenderTransform).M.M[1][1] +
             (float)local_res18 * (pFVar13->AccumulatedRenderTransform).M.M[0][1] +
             (pFVar13->AccumulatedRenderTransform).Trans.field0_0x0._s_0.Y;
        local_res18._0_4_ =
             fVar24 + (float)local_res18 * (pFVar13->AccumulatedRenderTransform).M.M[0][0] +
             (pFVar13->AccumulatedRenderTransform).Trans.field0_0x0._s_0.X;
        local_180 = local_res18;
        FTableViewDimensions::FTableViewDimensions
                  (&local_108,*(EOrientation *)((longlong)&this->_padding_ + 4),&local_180);
        local_res18._0_4_ = SUB84(param_1->Size,0);
        local_res18._4_4_ = SUB84(param_1->Size,4);
        fVar24 = local_res18._4_4_ * (param_1->AccumulatedRenderTransform).M.M[1][0];
        local_res18._4_4_ =
             (float)local_res18 * (param_1->AccumulatedRenderTransform).M.M[0][1] +
             local_res18._4_4_ * (param_1->AccumulatedRenderTransform).M.M[1][1] +
             (param_1->AccumulatedRenderTransform).Trans.field0_0x0._s_0.Y;
        local_res18._0_4_ =
             (float)local_res18 * (param_1->AccumulatedRenderTransform).M.M[0][0] + fVar24 +
             (param_1->AccumulatedRenderTransform).Trans.field0_0x0._s_0.X;
        local_178 = local_res18;
        FTableViewDimensions::FTableViewDimensions
                  (&local_f8,*(EOrientation *)((longlong)&this->_padding_ + 4),&local_178);
        fVar24 = __real_3f800000;
        if (local_108.ScrollAxis <= local_f8.ScrollAxis) goto LAB_142834278;
        uVar2 = (this->WidgetGenerator).ItemsWithGeneratedWidgets.ArrayNum;
        uVar14 = (ulonglong)(int)uVar2;
        fVar34 = 0.0;
        pFVar18 = (this->WidgetGenerator).ItemsWithGeneratedWidgets.AllocatorInstance.Data;
        pFVar19 = pFVar18 + uVar14 * 0x10;
        fVar35 = 0.0;
        pIVar21 = (ITableRow *)0x0;
        fVar32 = local_108.ScrollAxis;
        goto LAB_1428340a6;
      }
      EVar1 = this->ScrollIntoViewAlignment;
      if (EVar1 == IntoView) {
        if (dVar25 < dVar33) {
LAB_1428342cd:
          dVar33 = dVar33 - (dVar26 - __real_3ff0000000000000);
        }
      }
      else if (EVar1 != TopOrLeft) {
        if (EVar1 == CenterAligned) {
          dVar33 = dVar33 + dVar26 * __real_bfe0000000000000;
        }
        else if (EVar1 == BottomOrRight) goto LAB_1428342cd;
      }
      dVar26 = (double)iVar17 - dVar26;
      if (dVar26 <= 0.0) {
        dVar26 = 0.0;
      }
      if (dVar33 <= dVar26) {
        dVar26 = dVar33;
      }
      if (dVar26 <= 0.0) {
        dVar26 = 0.0;
      }
      STableViewBase::SetScrollOffset((STableViewBase *)this,(float)dVar26);
      goto LAB_142834302;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  goto LAB_142833bfb;
LAB_1428340a6:
  fVar32 = fVar32 - local_f8.ScrollAxis;
  if ((this->WidgetGenerator).ItemsWithGeneratedWidgets.ArrayNum != (int)uVar14) {
    local_res8[0] = local_res8[0] & 0xffffff00;
    `TCheckedPointerIterator<TSharedPtr<SWidget,1>,int,0>::operator!='::__l2::<lambda_1>::operator()
              (local_res8);
  }
  if (pFVar18 == pFVar19) goto LAB_142834245;
  pTVar4 = *(TReferenceControllerBase<1> **)(pFVar18 + 8);
  local_1b0.Object = *(SWidget **)pFVar18;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1b0.SharedReferenceCount.ReferenceController = pTVar4;
  pTVar15 = TMapBase<TSharedPtr<SWidget,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<SWidget,1>,TSharedRef<ITableRow,1>,0>_>
            ::Find((TMapBase<TSharedPtr<SWidget,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<SWidget,1>,TSharedRef<ITableRow,1>,0>_>
                    *)&(this->WidgetGenerator).ItemToWidgetMap,&local_1b0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  if (pTVar15 == (TSharedRef<ITableRow,1> *)0x0) {
    uVar20 = (uint)pIVar21 | 2;
    local_140 = (TReferenceControllerBase<1> *)0x0;
    puVar12 = &local_148;
    pIVar16 = (ITableRow *)0x0;
  }
  else {
    local_130 = (pTVar15->SharedReferenceCount).ReferenceController;
    uVar20 = (uint)pIVar21 | 1;
    pIVar16 = pTVar15->Object;
    if (local_130 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_130->SharedReferenceCount = (atomic<int>)((int)local_130->SharedReferenceCount + 1);
      UNLOCK();
    }
    puVar12 = &local_138;
  }
  pTVar4 = (TReferenceControllerBase<1> *)puVar12[1];
  puVar12[1] = 0;
  *puVar12 = 0;
  if ((uVar20 & 2) != 0) {
    uVar20 = uVar20 & 0xfffffffd;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_140);
  }
  if ((uVar20 & 1) != 0) {
    uVar20 = uVar20 & 0xfffffffe;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_130);
  }
  pIVar21 = (ITableRow *)(ulonglong)uVar20;
  if ((pIVar16 == (ITableRow *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    EVar9 = (*pcVar6)();
    return EVar9;
  }
  puVar12 = (undefined8 *)(**(code **)((longlong)*pIVar16 + 0x58))(pIVar16,local_b8);
  pFVar13 = SWidget::GetCachedGeometry((SWidget *)*puVar12);
  fStack_1bc = SUB84(pFVar13->Size,4);
  local_1c0 = SUB84(pFVar13->Size,0);
  local_170._4_4_ =
       local_1c0 * (pFVar13->AccumulatedRenderTransform).M.M[0][1] +
       fStack_1bc * (pFVar13->AccumulatedRenderTransform).M.M[1][1];
  local_170._0_4_ =
       fStack_1bc * (pFVar13->AccumulatedRenderTransform).M.M[1][0] +
       local_1c0 * (pFVar13->AccumulatedRenderTransform).M.M[0][0];
  FTableViewDimensions::FTableViewDimensions
            (&local_e8,*(EOrientation *)((longlong)&this->_padding_ + 4),&local_170);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_b0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  if (fVar32 <= local_e8.ScrollAxis) goto LAB_14283423d;
  uVar14 = (ulonglong)uVar2;
  fVar34 = fVar34 + fVar24;
  pFVar18 = pFVar18 + 0x10;
  local_f8.ScrollAxis = local_e8.ScrollAxis;
  goto LAB_1428340a6;
LAB_14283423d:
  fVar34 = fVar34 + fVar32 / local_e8.ScrollAxis;
LAB_142834245:
  if ((char)this->_padding_ == '\0') {
    fVar35 = this->NavigationScrollOffset;
  }
  dVar26 = (double)fVar34 + (double)this->_padding_ + (double)fVar35;
LAB_142834278:
  STableViewBase::SetScrollOffset((STableViewBase *)this,(float)dVar26);
LAB_142834287:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_198);
LAB_142834302:
  STableViewBase::RequestLayoutRefresh((STableViewBase *)this);
  pTVar4 = (this->ItemToScrollIntoView).SharedReferenceCount.ReferenceController;
  pSVar5 = (this->ItemToScrollIntoView).Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_a8 = (this->ItemToNotifyWhenInView).Object;
  pTStack_a0 = (this->ItemToNotifyWhenInView).SharedReferenceCount.ReferenceController;
  (this->ItemToNotifyWhenInView).Object = pSVar5;
  (this->ItemToNotifyWhenInView).SharedReferenceCount.ReferenceController = pTVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_a0);
LAB_142833bfb:
  local_168 = 0;
  FStack_160.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->ItemToScrollIntoView != (TSharedPtr<SWidget,1> *)&local_168) {
    (this->ItemToScrollIntoView).Object = (SWidget *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ItemToScrollIntoView).SharedReferenceCount,&FStack_160);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_160.ReferenceController);
LAB_142833c24:
  local_158 = (this->ItemToNotifyWhenInView).Object;
  if (local_158 == (SWidget *)0x0) {
    EVar9 = Failure;
  }
  else if ((char)this->_padding_ == '\0') {
    EVar9 = Success;
  }
  else {
    pcVar6 = *(code **)(this->_padding_ + 0xd8);
    local_150 = (this->ItemToNotifyWhenInView).SharedReferenceCount.ReferenceController;
    if (local_150 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_150->SharedReferenceCount = (atomic<int>)((int)local_150->SharedReferenceCount + 1);
      UNLOCK();
    }
    plVar10 = (longlong *)(*pcVar6)(&this->_padding_,local_98,&local_158);
    lVar23 = *plVar10;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_90);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_150);
    EVar9 = (EScrollIntoViewResult)(lVar23 == 0);
  }
  return EVar9;
}

// SupportsKeyboardFocus @ 1428366e0

bool __thiscall
SListView<TSharedPtr<SWidget,1>_>::SupportsKeyboardFocus(SListView<TSharedPtr<SWidget,1>_> *this)

{
  bool *pbVar1;
  
  pbVar1 = TAttribute<bool>::Get(&this->IsFocusable);
  return *pbVar1;
}

// UpdateSelectionSet @ 14283a5a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
SListView<TSharedPtr<SWidget,1>_>::UpdateSelectionSet(SListView<TSharedPtr<SWidget,1>_> *this)

{
  TSet<TSharedPtr<SWidget,1>,DefaultKeyFuncs<TSharedPtr<SWidget,1>,0>,FDefaultSetAllocator> *this_00
  ;
  int iVar1;
  IItemsSource<TSharedPtr<SWidget,1>_> *pIVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  undefined8 *puVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong *puVar14;
  undefined1 auStack_158 [32];
  ulonglong local_138;
  longlong local_130;
  undefined1 local_128 [16];
  TReferenceControllerBase<1> *local_118;
  SListView<TSharedPtr<SWidget,1>_> *local_110;
  SWidget *local_108;
  TReferenceControllerBase<1> *local_100;
  ulonglong *local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [16];
  TSet<TSharedPtr<SWidget,1>,DefaultKeyFuncs<TSharedPtr<SWidget,1>,0>,FDefaultSetAllocator> local_d8
  ;
  TSet<TSharedPtr<SWidget,1>,DefaultKeyFuncs<TSharedPtr<SWidget,1>,0>,FDefaultSetAllocator> local_88
  ;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_158;
  if ((int)this->_padding_ != 2) {
    pIVar2 = (this->ViewSource).Ptr;
    local_110 = this;
    if (pIVar2 == (IItemsSource<TSharedPtr<SWidget,1>_> *)0x0) {
      plVar11 = &this->_padding_;
      (**(code **)(*plVar11 + 0x30))(plVar11);
    }
    else {
      uVar10 = 0;
      local_d8.Elements._44_4_ = 0x80;
      local_d8.Elements._0_8_ = 0;
      local_d8.Elements._8_8_ = 0;
      local_d8.Elements._32_8_ = 0;
      local_d8.Elements._40_4_ = 0;
      local_d8.Elements._52_4_ = 0;
      local_d8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_d8.HashSize = 0;
      local_d8.Elements._48_4_ = 0xffffffff;
      puVar8 = (undefined8 *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_e8);
      puVar14 = (ulonglong *)*puVar8;
      uStack_f0 = puVar8[1];
      iVar1 = *(int *)(puVar8 + 1);
      local_f8 = puVar14;
      if (0 < iVar1) {
        this_00 = &this->SelectedItems;
        uVar13 = uVar10;
        do {
          uVar12 = (uint)uVar10;
          uVar9 = 0;
          if ((int)uVar12 < iVar1) {
            uVar9 = ~uVar12 >> 0x1f;
          }
          if (uVar9 == 0) {
            local_130 = (longlong)iVar1;
            local_138 = uVar13;
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
            ;
            if (bVar6) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          pTVar3 = (TReferenceControllerBase<1> *)puVar14[1];
          local_128._8_8_ = *puVar14;
          if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
            UNLOCK();
            LOCK();
            pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
            UNLOCK();
            LOCK();
            pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
            UNLOCK();
          }
          uVar9 = ((uint)((ulonglong)local_128._8_8_ >> 0x14) & 0xffff ^
                  (uint)((ulonglong)local_128._8_8_ >> 4)) * -0x7a143595;
          uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
          local_118 = pTVar3;
          local_108 = (SWidget *)local_128._8_8_;
          local_100 = pTVar3;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar3);
          iVar7 = TSet<TSharedPtr<SWidget,1>,DefaultKeyFuncs<TSharedPtr<SWidget,1>,0>,FDefaultSetAllocator>
                  ::FindIndexByHash<TSharedPtr<SWidget_const_,1>_>
                            (this_00,uVar9 >> 0x10 ^ uVar9,
                             (TSharedPtr<SWidget_const_,1> *)(local_128 + 8));
          if (iVar7 == -1) {
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar3);
          }
          else {
            lVar4 = *(longlong *)&this_00->Elements;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar3);
            if (lVar4 + (longlong)iVar7 * 0x18 != 0) {
              TSet<TSharedPtr<SWidget,1>,DefaultKeyFuncs<TSharedPtr<SWidget,1>,0>,FDefaultSetAllocator>
              ::Emplace<TSharedPtr<SWidget,1>_const_&>
                        (&local_d8,(TSharedPtr<SWidget,1> *)local_128,(bool *)&local_108);
            }
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar3);
          uVar10 = (ulonglong)(uVar12 + 1);
          uVar13 = uVar13 + 1;
          puVar14 = puVar14 + 2;
          this = local_110;
        } while ((int)(uVar12 + 1) < iVar1);
      }
      TSet<TSharedPtr<SWidget,1>,DefaultKeyFuncs<TSharedPtr<SWidget,1>,0>,FDefaultSetAllocator>::
      Difference(&this->SelectedItems,&local_88,&local_d8);
      TSet<TSharedPtr<SWidget,1>,DefaultKeyFuncs<TSharedPtr<SWidget,1>,0>,FDefaultSetAllocator>::
      operator=(&this->SelectedItems,&local_d8);
      local_88.HashSize = 0;
      if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_88.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TSharedPtr<SWidget,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TSharedPtr<SWidget,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_88.Elements);
      local_d8.HashSize = 0;
      if (local_d8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_d8.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TSharedPtr<SWidget,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TSharedPtr<SWidget,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_d8.Elements);
      plVar11 = &this->_padding_;
      if ((int)(local_88.Elements._8_4_ - local_88.Elements._52_4_) < 1) {
        return;
      }
    }
    (**(code **)(*plVar11 + 0x40))(plVar11,3);
  }
  return;
}

// WidgetFromItem @ 14283b8a0

/* WARNING: Removing unreachable block (ram,0x00014283ba09) */

TSharedPtr<ITableRow,1> * __thiscall
SListView<TSharedPtr<SWidget,1>_>::WidgetFromItem
          (SListView<TSharedPtr<SWidget,1>_> *this,TSharedPtr<ITableRow,1> *__return_storage_ptr__,
          TSharedPtr<SWidget,1> *param_1)

{
  ITableRow *pIVar1;
  TReferenceControllerBase<1> *pTVar2;
  bool bVar3;
  bool bVar4;
  TSharedRef<ITableRow,1> *pTVar5;
  TSharedPtr<SWidget_const_,1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  TSharedPtr<SWidget_const_,1> local_48;
  TSharedPtr<SWidget_const_,1> local_38;
  
  pTVar8 = (param_1->SharedReferenceCount).ReferenceController;
  pTVar7 = (TReferenceControllerBase<1> *)0x0;
  local_48.Object = param_1->Object;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_48.SharedReferenceCount.ReferenceController = pTVar8;
  pTVar5 = TMapBase<TSharedPtr<SWidget,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<SWidget,1>,TSharedRef<ITableRow,1>,0>_>
           ::Find((TMapBase<TSharedPtr<SWidget,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<SWidget,1>,TSharedRef<ITableRow,1>,0>_>
                   *)&this->_padding_,&local_48);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  if (pTVar5 == (TSharedRef<ITableRow,1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    pTVar8 = pTVar7;
  }
  else {
    pIVar1 = pTVar5->Object;
    pTVar8 = (pTVar5->SharedReferenceCount).ReferenceController;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    if (pIVar1 != (ITableRow *)0x0) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
        UNLOCK();
      }
      __return_storage_ptr__->Object = pIVar1;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar8;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      goto LAB_14283ba16;
    }
  }
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  local_48.Object = param_1->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_48.SharedReferenceCount.ReferenceController = pTVar2;
  pTVar5 = TMapBase<TSharedPtr<SWidget,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<SWidget,1>,TSharedRef<ITableRow,1>,0>_>
           ::Find((TMapBase<TSharedPtr<SWidget,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<SWidget,1>,TSharedRef<ITableRow,1>,0>_>
                   *)&this->_padding_,&local_48);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (pTVar5 == (TSharedRef<ITableRow,1> *)0x0) {
    local_48.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pTVar6 = &local_48;
    bVar4 = false;
    bVar3 = true;
  }
  else {
    local_38.SharedReferenceCount.ReferenceController =
         (pTVar5->SharedReferenceCount).ReferenceController;
    pTVar7 = (TReferenceControllerBase<1> *)pTVar5->Object;
    if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar6 = &local_38;
    bVar4 = true;
    bVar3 = false;
  }
  pTVar2 = (pTVar6->SharedReferenceCount).ReferenceController;
  (pTVar6->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar6->Object = (SWidget *)0x0;
  if (bVar3) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  if (bVar4) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
  }
  __return_storage_ptr__->Object = (ITableRow *)pTVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
LAB_14283ba16:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return __return_storage_ptr__;
}

// SListView<TSharedPtr<FString,1>_> @ 1428ae600

SListView<TSharedPtr<FString,1>_> * __thiscall
SListView<TSharedPtr<FString,1>_>::SListView<TSharedPtr<FString,1>_>
          (SListView<TSharedPtr<FString,1>_> *this,Type param_1)

{
  byte *pbVar1;
  
  STableViewBase::STableViewBase((STableViewBase *)this,param_1);
  (this->WidgetGenerator).OwnerList = this;
  this->_padding_ = (longlong)&_vftable__for__SCompoundWidget__;
  this->_padding_ = (longlong)&_vftable__for__IScrollableWidget__;
  this->_padding_ = (longlong)&___7__SListView_V__TSharedPtr_VFString___00____6B_;
  *(undefined8 *)&(this->WidgetGenerator).ItemToWidgetMap = 0;
  *(undefined8 *)&(this->WidgetGenerator).ItemToWidgetMap.field_0x8 = 0;
  *(undefined8 *)&(this->WidgetGenerator).ItemToWidgetMap.field_0x20 = 0;
  *(undefined4 *)&(this->WidgetGenerator).ItemToWidgetMap.field_0x28 = 0;
  *(undefined4 *)&(this->WidgetGenerator).ItemToWidgetMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->WidgetGenerator).ItemToWidgetMap.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->WidgetGenerator).ItemToWidgetMap.field_0x34 = 0;
  *(undefined8 *)&(this->WidgetGenerator).ItemToWidgetMap.field_0x40 = 0;
  *(undefined4 *)&(this->WidgetGenerator).ItemToWidgetMap.field_0x48 = 0;
  *(undefined8 *)&(this->WidgetGenerator).WidgetMapToItem = 0;
  *(undefined8 *)&(this->WidgetGenerator).WidgetMapToItem.field_0x8 = 0;
  *(undefined8 *)&(this->WidgetGenerator).WidgetMapToItem.field_0x20 = 0;
  *(undefined4 *)&(this->WidgetGenerator).WidgetMapToItem.field_0x28 = 0;
  *(undefined4 *)&(this->WidgetGenerator).WidgetMapToItem.field_0x2c = 0x80;
  *(undefined4 *)&(this->WidgetGenerator).WidgetMapToItem.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->WidgetGenerator).WidgetMapToItem.field_0x34 = 0;
  *(undefined8 *)&(this->WidgetGenerator).WidgetMapToItem.field_0x40 = 0;
  *(undefined4 *)&(this->WidgetGenerator).WidgetMapToItem.field_0x48 = 0;
  (this->WidgetGenerator).ItemsWithGeneratedWidgets.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->WidgetGenerator).ItemsWithGeneratedWidgets.ArrayNum = 0;
  (this->WidgetGenerator).ItemsWithGeneratedWidgets.ArrayMax = 0;
  (this->WidgetGenerator).ItemsToBeCleanedUp.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->WidgetGenerator).ItemsToBeCleanedUp.ArrayNum = 0;
  (this->WidgetGenerator).ItemsToBeCleanedUp.ArrayMax = 0;
  (this->PinnedWidgetGenerator).OwnerList = this;
  *(undefined8 *)&(this->PinnedWidgetGenerator).ItemToWidgetMap = 0;
  *(undefined8 *)&(this->PinnedWidgetGenerator).ItemToWidgetMap.field_0x8 = 0;
  *(undefined8 *)&(this->PinnedWidgetGenerator).ItemToWidgetMap.field_0x20 = 0;
  *(undefined4 *)&(this->PinnedWidgetGenerator).ItemToWidgetMap.field_0x28 = 0;
  *(undefined4 *)&(this->PinnedWidgetGenerator).ItemToWidgetMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->PinnedWidgetGenerator).ItemToWidgetMap.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PinnedWidgetGenerator).ItemToWidgetMap.field_0x34 = 0;
  *(undefined8 *)&(this->PinnedWidgetGenerator).ItemToWidgetMap.field_0x40 = 0;
  *(undefined4 *)&(this->PinnedWidgetGenerator).ItemToWidgetMap.field_0x48 = 0;
  *(undefined8 *)&(this->PinnedWidgetGenerator).WidgetMapToItem = 0;
  *(undefined8 *)&(this->PinnedWidgetGenerator).WidgetMapToItem.field_0x8 = 0;
  *(undefined8 *)&(this->PinnedWidgetGenerator).WidgetMapToItem.field_0x20 = 0;
  *(undefined4 *)&(this->PinnedWidgetGenerator).WidgetMapToItem.field_0x28 = 0;
  *(undefined4 *)&(this->PinnedWidgetGenerator).WidgetMapToItem.field_0x2c = 0x80;
  *(undefined4 *)&(this->PinnedWidgetGenerator).WidgetMapToItem.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PinnedWidgetGenerator).WidgetMapToItem.field_0x34 = 0;
  *(undefined8 *)&(this->PinnedWidgetGenerator).WidgetMapToItem.field_0x40 = 0;
  *(undefined4 *)&(this->PinnedWidgetGenerator).WidgetMapToItem.field_0x48 = 0;
  (this->PinnedWidgetGenerator).ItemsWithGeneratedWidgets.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PinnedWidgetGenerator).ItemsWithGeneratedWidgets.ArrayNum = 0;
  (this->PinnedWidgetGenerator).ItemsWithGeneratedWidgets.ArrayMax = 0;
  (this->PinnedWidgetGenerator).ItemsToBeCleanedUp.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PinnedWidgetGenerator).ItemsToBeCleanedUp.ArrayNum = 0;
  (this->PinnedWidgetGenerator).ItemsToBeCleanedUp.ArrayMax = 0;
  *(undefined8 *)&this->OnEntryInitialized = 0;
  *(undefined8 *)&(this->OnEntryInitialized).field_0x8 = 0;
  *(undefined4 *)&(this->OnEntryInitialized).field_0x10 = 0;
  *(undefined8 *)&this->OnGenerateRow = 0;
  *(undefined8 *)&(this->OnGenerateRow).field_0x8 = 0;
  *(undefined4 *)&(this->OnGenerateRow).field_0x10 = 0;
  *(undefined8 *)&this->OnGeneratePinnedRow = 0;
  *(undefined8 *)&(this->OnGeneratePinnedRow).field_0x8 = 0;
  *(undefined4 *)&(this->OnGeneratePinnedRow).field_0x10 = 0;
  *(undefined8 *)&this->OnRefreshRow = 0;
  *(undefined8 *)&(this->OnRefreshRow).field_0x8 = 0;
  *(undefined4 *)&(this->OnRefreshRow).field_0x10 = 0;
  *(undefined8 *)&this->OnItemToString_Debug = 0;
  *(undefined8 *)&(this->OnItemToString_Debug).field_0x8 = 0;
  *(undefined4 *)&(this->OnItemToString_Debug).field_0x10 = 0;
  *(undefined8 *)&this->OnEnteredBadState = 0;
  *(undefined8 *)&(this->OnEnteredBadState).field_0x8 = 0;
  *(undefined4 *)&(this->OnEnteredBadState).field_0x10 = 0;
  *(undefined8 *)&this->OnRowReleased = 0;
  *(undefined8 *)&(this->OnRowReleased).field_0x8 = 0;
  *(undefined4 *)&(this->OnRowReleased).field_0x10 = 0;
  *(undefined8 *)&this->OnItemScrolledIntoView = 0;
  *(undefined8 *)&(this->OnItemScrolledIntoView).field_0x8 = 0;
  *(undefined4 *)&(this->OnItemScrolledIntoView).field_0x10 = 0;
  *(undefined8 *)&this->OnFinishedScrolling = 0;
  *(undefined8 *)&(this->OnFinishedScrolling).field_0x8 = 0;
  *(undefined4 *)&(this->OnFinishedScrolling).field_0x10 = 0;
  *(undefined8 *)&(this->SelectedItems).Elements = 0;
  *(undefined8 *)&(this->SelectedItems).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->SelectedItems).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->SelectedItems).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->SelectedItems).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->SelectedItems).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->SelectedItems).Elements.field_0x30 = 0xffffffff;
  (this->SelectedItems).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->SelectedItems).HashSize = 0;
  (this->SelectorItem).Object = (FString *)0x0;
  (this->SelectorItem).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  (this->RangeSelectionStart).Object = (FString *)0x0;
  (this->RangeSelectionStart).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&(this->HighlightedItems).Elements = 0;
  *(undefined8 *)&(this->HighlightedItems).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->HighlightedItems).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->HighlightedItems).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->HighlightedItems).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->HighlightedItems).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->HighlightedItems).Elements.field_0x30 = 0xffffffff;
  (this->HighlightedItems).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->HighlightedItems).HashSize = 0;
  (this->ItemToScrollIntoView).Object = (FString *)0x0;
  (this->ItemToScrollIntoView).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ItemToNotifyWhenInView).Object = (FString *)0x0;
  (this->ItemToNotifyWhenInView).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->OnSelectionChanged = 0;
  *(undefined8 *)&(this->OnSelectionChanged).field_0x8 = 0;
  *(undefined4 *)&(this->OnSelectionChanged).field_0x10 = 0;
  *(undefined8 *)&this->OnIsSelectableOrNavigable = 0;
  *(undefined8 *)&(this->OnIsSelectableOrNavigable).field_0x8 = 0;
  *(undefined4 *)&(this->OnIsSelectableOrNavigable).field_0x10 = 0;
  *(undefined8 *)&this->OnClick = 0;
  *(undefined8 *)&(this->OnClick).field_0x8 = 0;
  *(undefined4 *)&(this->OnClick).field_0x10 = 0;
  *(undefined8 *)&this->OnDoubleClick = 0;
  *(undefined8 *)&(this->OnDoubleClick).field_0x8 = 0;
  *(undefined4 *)&(this->OnDoubleClick).field_0x10 = 0;
  *(undefined8 *)&this->OnKeyDownHandler = 0;
  *(undefined8 *)&(this->OnKeyDownHandler).field_0x8 = 0;
  *(undefined4 *)&(this->OnKeyDownHandler).field_0x10 = 0;
  (this->IsFocusable).Value = true;
  (this->IsFocusable).bIsSet = true;
  this->ItemsSource = (TArray<TSharedPtr<FString,1>,TSizedDefaultAllocator<32>_> *)0x0;
  this->UserRequestingScrollIntoView = 0;
  this->ScrollIntoViewAlignment = CenterAligned;
  *(undefined8 *)&(this->IsFocusable).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->IsFocusable).Getter = 0;
  *(undefined8 *)&(this->IsFocusable).Getter.field_0x8 = 0;
  (this->MaxPinnedItems).Value = 0;
  (this->MaxPinnedItems).bIsSet = false;
  this->bHandleSpacebarSelection = false;
  this->NavigationScrollOffset = 0.5;
  this->bClearScrollVelocityOnSelection = true;
  this->bNavigateOnScrollIntoView = false;
  this->NavigationTypeOnScrollIntoView = Invalid;
  *(undefined8 *)&(this->MaxPinnedItems).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->MaxPinnedItems).Getter = 0;
  *(undefined8 *)&(this->MaxPinnedItems).Getter.field_0x8 = 0;
  (this->DefaultMaxPinnedItems).Value = 0;
  (this->DefaultMaxPinnedItems).bIsSet = false;
  *(undefined8 *)&(this->DefaultMaxPinnedItems).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->DefaultMaxPinnedItems).Getter = 0;
  *(undefined8 *)&(this->DefaultMaxPinnedItems).Getter.field_0x8 = 0;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 4;
  this->bIsHierarchyCollapsed = false;
  (this->ViewSource).Ptr = (IItemsSource<TSharedPtr<FString,1>_> *)0x0;
  *(undefined1 *)((longlong)&this->_padding_ + 3) = 1;
  return this;
}

// ~SListView<TSharedPtr<FString,1>_> @ 1428bba20

void __thiscall
SListView<TSharedPtr<FString,1>_>::~SListView<TSharedPtr<FString,1>_>
          (SListView<TSharedPtr<FString,1>_> *this)

{
  IItemsSource<TSharedPtr<FString,1>_> *pIVar1;
  void *pvVar2;
  ForElementType<FSetElementId> FVar3;
  
  pIVar1 = (this->ViewSource).Ptr;
  if (pIVar1 != (IItemsSource<TSharedPtr<FString,1>_> *)0x0) {
    (**(code **)*pIVar1)(pIVar1,1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->DefaultMaxPinnedItems).Getter);
  pvVar2 = *(void **)&(this->DefaultMaxPinnedItems).Getter.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->DefaultMaxPinnedItems).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->MaxPinnedItems).Getter);
  pvVar2 = *(void **)&(this->MaxPinnedItems).Getter.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->MaxPinnedItems).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->IsFocusable).Getter);
  pvVar2 = *(void **)&(this->IsFocusable).Getter.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->IsFocusable).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnKeyDownHandler);
  pvVar2 = *(void **)&(this->OnKeyDownHandler).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnKeyDownHandler);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnDoubleClick);
  pvVar2 = *(void **)&(this->OnDoubleClick).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnDoubleClick);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnClick);
  pvVar2 = *(void **)&(this->OnClick).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnClick);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnIsSelectableOrNavigable);
  pvVar2 = *(void **)&(this->OnIsSelectableOrNavigable).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnIsSelectableOrNavigable);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnSelectionChanged);
  pvVar2 = *(void **)&(this->OnSelectionChanged).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSelectionChanged);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ItemToNotifyWhenInView).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ItemToScrollIntoView).SharedReferenceCount.ReferenceController);
  (this->HighlightedItems).HashSize = 0;
  FVar3 = (this->HighlightedItems).Hash.SecondaryData;
  if (FVar3 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  TSparseArray<TSparseSetElement<TSharedPtr<FString,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TSharedPtr<FString,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->HighlightedItems).Elements);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->RangeSelectionStart).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SelectorItem).SharedReferenceCount.ReferenceController);
  (this->SelectedItems).HashSize = 0;
  FVar3 = (this->SelectedItems).Hash.SecondaryData;
  if (FVar3 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  TSparseArray<TSparseSetElement<TSharedPtr<FString,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TSharedPtr<FString,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->SelectedItems).Elements);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnFinishedScrolling);
  pvVar2 = *(void **)&(this->OnFinishedScrolling).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnFinishedScrolling);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnItemScrolledIntoView);
  pvVar2 = *(void **)&(this->OnItemScrolledIntoView).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnItemScrolledIntoView);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnRowReleased);
  pvVar2 = *(void **)&(this->OnRowReleased).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnRowReleased);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnEnteredBadState);
  pvVar2 = *(void **)&(this->OnEnteredBadState).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnEnteredBadState);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnItemToString_Debug);
  pvVar2 = *(void **)&(this->OnItemToString_Debug).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnItemToString_Debug);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnRefreshRow);
  pvVar2 = *(void **)&(this->OnRefreshRow).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnRefreshRow);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnGeneratePinnedRow);
  pvVar2 = *(void **)&(this->OnGeneratePinnedRow).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnGeneratePinnedRow);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnGenerateRow);
  pvVar2 = *(void **)&(this->OnGenerateRow).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnGenerateRow);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnEntryInitialized);
  pvVar2 = *(void **)&(this->OnEntryInitialized).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnEntryInitialized);
  FWidgetGenerator::~FWidgetGenerator(&this->PinnedWidgetGenerator);
  FWidgetGenerator::~FWidgetGenerator(&this->WidgetGenerator);
  STableViewBase::~STableViewBase((STableViewBase *)this);
  return;
}

// AddReferencedObjects @ 1428d0b50

void __thiscall
SListView<TSharedPtr<FString,1>_>::AddReferencedObjects
          (SListView<TSharedPtr<FString,1>_> *this,FReferenceCollector *param_1)

{
  return;
}

// AsWidget @ 1428d7940

TSharedRef<SWidget,1> * __thiscall
SListView<TSharedPtr<FString,1>_>::AsWidget
          (SListView<TSharedPtr<FString,1>_> *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  SWidget *pSVar2;
  TSharedRef<SWidget,1> *pTVar3;
  TSharedRef<SWidget,1> local_18;
  
  pTVar3 = TSharedFromThis<SWidget,1>::AsShared
                     ((TSharedFromThis<SWidget,1> *)&this[-1]._padding_,&local_18);
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

// ClearSelection @ 1428dbd20

void __thiscall
SListView<TSharedPtr<FString,1>_>::ClearSelection(SListView<TSharedPtr<FString,1>_> *this)

{
  Type *pTVar1;
  
  pTVar1 = TAttribute<enum_ESelectionMode::Type>::Get(&this->_padding_);
  if ((*pTVar1 != None) &&
     (*(int *)&(this->SelectedItems).Elements.field_0x8 !=
      *(int *)&(this->SelectedItems).Elements.field_0x34)) {
    (**(code **)(this->_padding_ + 0x30))(&this->_padding_);
                    /* WARNING: Could not recover jumptable at 0x0001428dbd71. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x40))(&this->_padding_,3);
    return;
  }
  return;
}

// Construct @ 1428e3db0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
SListView<TSharedPtr<FString,1>_>::Construct
          (SListView<TSharedPtr<FString,1>_> *this,FArguments *param_1)

{
  TDelegate<ESelectionMode::Type___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  TReferenceControllerBase<1> *pTVar1;
  SWidget *pSVar2;
  FTableViewStyle *pFVar3;
  STextBlock *pSVar4;
  code *pcVar5;
  longlong lVar6;
  char cVar7;
  bool bVar8;
  TSharedRef<SWidget,1> *pTVar9;
  TUniquePtr<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<FString,1>_>,TDefaultDelete<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<FString,1>_>_>_>
  TVar10;
  undefined8 *puVar11;
  ulong64 uVar12;
  undefined4 *puVar13;
  FArguments *pFVar14;
  FText *pFVar15;
  TSharedRef<STextBlock,1> *pTVar16;
  SScrollBar *pSVar17;
  TReferenceControllerBase<1> *pTVar18;
  int iVar19;
  FMRSWRecursiveAccessDetector *this_01;
  FSlotBase *this_02;
  longlong *plVar20;
  TReferenceControllerBase<1> *pTVar21;
  atomic<int> *paVar22;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res10 [2];
  FName local_res18;
  FMemScope local_res20;
  undefined1 local_978 [8];
  FDelegateAllocation local_970;
  undefined1 local_960 [8];
  ForAnyElementType local_958;
  int local_950;
  undefined1 local_948 [8];
  ForAnyElementType local_940;
  int local_938;
  undefined1 local_930 [8];
  ForAnyElementType local_928;
  int local_920;
  undefined1 local_918 [8];
  ForAnyElementType local_910;
  int local_908;
  undefined1 local_900 [8];
  ForAnyElementType local_8f8;
  int local_8f0;
  undefined1 local_8e8 [8];
  ForAnyElementType local_8e0;
  int local_8d8;
  FString local_8d0;
  undefined1 local_8c0 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_8b8;
  ForAnyElementType FStack_8b0;
  ulonglong local_8a8;
  undefined1 local_8a0 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_898;
  ForAnyElementType FStack_890;
  ulonglong local_888;
  undefined1 local_880 [16];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_870;
  ForAnyElementType FStack_868;
  ulonglong local_860;
  SWidget *local_858;
  TReferenceControllerBase<1> *local_850;
  STextBlock *local_848;
  TReferenceControllerBase<1> *pTStack_840;
  TSharedRef<ISlateMetaData,1> local_838;
  undefined1 local_828 [8];
  undefined1 local_820 [8];
  void *pvStack_818;
  undefined8 local_810;
  TSharedRef<SWidget,1> local_808;
  TAttribute<EVisibility> local_7f8;
  FDestructionSentinel local_7d8;
  FDestructionSentinel local_7c0;
  FDestructionSentinel local_7a8;
  FDestructionSentinel local_790;
  FDestructionSentinel local_778;
  FDestructionSentinel local_760;
  FDestructionSentinel local_748;
  FDestructionSentinel local_730;
  FDestructionSentinel local_718;
  FDestructionSentinel local_700;
  FDestructionSentinel local_6e8;
  FDelegateAllocation *local_6d0;
  TAttribute<FText> local_6c8;
  FReadAccessScope local_698;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_680;
  undefined1 local_668 [16];
  TReferenceControllerBase<1> *local_658;
  FText local_650;
  TSharedRef<STextBlock,1> local_640;
  FReadAccessScope local_630;
  FReadAccessScope local_618;
  FReadAccessScope local_600;
  FReadAccessScope local_5e8;
  FReadAccessScope local_5d0;
  FReadAccessScope local_5b8;
  FArguments local_5a0;
  
  *(undefined1 *)((longlong)&this->_padding_ + 5) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 2);
  pTVar21 = (TReferenceControllerBase<1> *)0x0;
  TDelegate<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FString,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
  ::operator=(&this->OnGenerateRow,&param_1->_OnGenerateRow);
  TDelegate<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FString,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
  ::operator=(&this->OnGeneratePinnedRow,&param_1->_OnGeneratePinnedRow);
  TDelegate<void___cdecl(TSharedPtr<FString,1>),FDefaultDelegateUserPolicy>::operator=
            (&this->OnRefreshRow,&param_1->_OnRefreshRow);
  if (&param_1->_OnEntryInitialized != &this->OnEntryInitialized) {
    local_960 = (undefined1  [8])0x0;
    local_958.Data = (FScriptContainerElement *)0x0;
    local_950 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &param_1->_OnEntryInitialized,&local_618);
    if ((*(int *)&(param_1->_OnEntryInitialized).field_0x10 != 0) &&
       (plVar20 = *(longlong **)&(param_1->_OnEntryInitialized).field_0x8,
       plVar20 != (longlong *)0x0)) {
      (**(code **)(*plVar20 + 0x50))(plVar20,local_960);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_618);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnEntryInitialized,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_960);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_960,
               (FWriteAccessScope *)&local_700);
    if ((local_950 != 0) && (local_958.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_958.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_958,0,0,0x10);
      local_950 = 0;
    }
    if (local_700.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_700.Accessor,&local_700);
    }
    if (local_958.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_958.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_960);
  }
  if (&param_1->_OnRowReleased != &this->OnRowReleased) {
    local_948 = (undefined1  [8])0x0;
    local_940.Data = (FScriptContainerElement *)0x0;
    local_938 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->_OnRowReleased,
               &local_600);
    if ((*(int *)&(param_1->_OnRowReleased).field_0x10 != 0) &&
       (plVar20 = *(longlong **)&(param_1->_OnRowReleased).field_0x8, plVar20 != (longlong *)0x0)) {
      (**(code **)(*plVar20 + 0x50))(plVar20,local_948);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_600);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnRowReleased,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_948);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_948,
               (FWriteAccessScope *)&local_7d8);
    if ((local_938 != 0) && (local_940.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_940.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_940,0,0,0x10);
      local_938 = 0;
    }
    if (local_7d8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_7d8.Accessor,&local_7d8);
    }
    if (local_940.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_940.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_948);
  }
  if (&param_1->_OnItemScrolledIntoView != &this->OnItemScrolledIntoView) {
    local_930 = (undefined1  [8])0x0;
    local_928.Data = (FScriptContainerElement *)0x0;
    local_920 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &param_1->_OnItemScrolledIntoView,&local_5b8);
    if ((*(int *)&(param_1->_OnItemScrolledIntoView).field_0x10 != 0) &&
       (plVar20 = *(longlong **)&(param_1->_OnItemScrolledIntoView).field_0x8,
       plVar20 != (longlong *)0x0)) {
      (**(code **)(*plVar20 + 0x50))(plVar20,local_930);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_5b8);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnItemScrolledIntoView,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_930);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_930,
               (FWriteAccessScope *)&local_7c0);
    if ((local_920 != 0) && (local_928.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_928.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_928,0,0,0x10);
      local_920 = 0;
    }
    if (local_7c0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_7c0.Accessor,&local_7c0);
    }
    if (local_928.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_928.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_930);
  }
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->OnFinishedScrolling,&param_1->_OnFinishedScrolling);
  pTVar9 = TSharedFromThis<SWidget,1>::AsShared
                     ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_808);
  pTVar1 = (pTVar9->SharedReferenceCount).ReferenceController;
  pSVar2 = pTVar9->Object;
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_808.SharedReferenceCount.ReferenceController);
  }
  else {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_808.SharedReferenceCount.ReferenceController);
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_858 = pSVar2;
  local_850 = pTVar1;
  TVar10 = FArguments::MakeListItemsSource(param_1,(TSharedRef<STableViewBase,1> *)local_668);
  SetItemsSource(this,TVar10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  TDelegate<TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>::operator=
            ((TDelegate<TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy> *)
             &this->_padding_,&param_1->_OnContextMenuOpening);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&this->_padding_,
             &param_1->_OnItemsRebuilt);
  TDelegate<void___cdecl(TSharedPtr<FString,1>),FDefaultDelegateUserPolicy>::operator=
            (&this->OnClick,&param_1->_OnMouseButtonClick);
  TDelegate<void___cdecl(TSharedPtr<FString,1>),FDefaultDelegateUserPolicy>::operator=
            (&this->OnDoubleClick,&param_1->_OnMouseButtonDoubleClick);
  TDelegate<void___cdecl(TSharedPtr<FString,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>::
  operator=(&this->OnSelectionChanged,&param_1->_OnSelectionChanged);
  if (&param_1->_OnIsSelectableOrNavigable != &this->OnIsSelectableOrNavigable) {
    local_918 = (undefined1  [8])0x0;
    local_910.Data = (FScriptContainerElement *)0x0;
    local_908 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &param_1->_OnIsSelectableOrNavigable,&local_5e8);
    if ((*(int *)&(param_1->_OnIsSelectableOrNavigable).field_0x10 != 0) &&
       (plVar20 = *(longlong **)&(param_1->_OnIsSelectableOrNavigable).field_0x8,
       plVar20 != (longlong *)0x0)) {
      (**(code **)(*plVar20 + 0x50))(plVar20,local_918);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_5e8);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnIsSelectableOrNavigable,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_918);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_918,
               (FWriteAccessScope *)&local_7a8);
    if ((local_908 != 0) && (local_910.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_910.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_910,0,0,0x10);
      local_908 = 0;
    }
    if (local_7a8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_7a8.Accessor,&local_7a8);
    }
    if (local_910.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_910.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_918);
  }
  this_00 = &(param_1->_SelectionMode).Getter;
  *(Type *)&this->_padding_ = (param_1->_SelectionMode).Value;
  *(bool *)((longlong)&this->_padding_ + 4) = (param_1->_SelectionMode).bIsSet;
  if (this_00 !=
      (TDelegate<ESelectionMode::Type___cdecl(void),FDefaultDelegateUserPolicy> *)&this->_padding_)
  {
    local_900 = (undefined1  [8])0x0;
    local_8f8.Data = (FScriptContainerElement *)0x0;
    local_8f0 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_5d0);
    if ((*(int *)&(param_1->_SelectionMode).Getter.field_0x10 != 0) &&
       (plVar20 = *(longlong **)&(param_1->_SelectionMode).Getter.field_0x8,
       plVar20 != (longlong *)0x0)) {
      (**(code **)(*plVar20 + 0x50))(plVar20,local_900);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_5d0);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_padding_,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_900);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_900,
               (FWriteAccessScope *)&local_790);
    if ((local_8f0 != 0) && (local_8f8.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_8f8.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_8f8,0,0,0x10);
      local_8f0 = 0;
    }
    if (local_790.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_790.Accessor,&local_790);
    }
    if (local_8f8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_8f8.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_900);
  }
  this->bClearSelectionOnClick = param_1->_ClearSelectionOnClick;
  *(EAllowOverscroll *)&this->_padding_ = param_1->_AllowOverscroll;
  *(EConsumeMouseWheel *)((longlong)&this->_padding_ + 1) = param_1->_ConsumeMouseWheel;
  *(float *)((longlong)&this->_padding_ + 4) = param_1->_WheelScrollMultiplier;
  this->NavigationScrollOffset = param_1->_NavigationScrollOffset;
  this->bHandleGamepadEvents = param_1->_HandleGamepadEvents;
  this->bHandleDirectionalNavigation = param_1->_HandleDirectionalNavigation;
  this->bHandleSpacebarSelection = param_1->_HandleSpacebarSelection;
  (this->IsFocusable).Value = (param_1->_IsFocusable).Value;
  (this->IsFocusable).bIsSet = (param_1->_IsFocusable).bIsSet;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->IsFocusable).Getter,&(param_1->_IsFocusable).Getter);
  this->bReturnFocusToSelection = param_1->_ReturnFocusToSelection;
  this->bClearScrollVelocityOnSelection = param_1->_ClearScrollVelocityOnSelection;
  *(bool *)&this->_padding_ = param_1->_EnableAnimatedScrolling;
  if (&param_1->_FixedLineScrollOffset != (TOptional<double> *)&this->_padding_) {
    if ((param_1->_FixedLineScrollOffset).bIsSet == false) {
      if ((char)this->_padding_ != '\0') {
        *(undefined1 *)&this->_padding_ = 0;
      }
    }
    else {
      this->_padding_ = (longlong)(param_1->_FixedLineScrollOffset).TypedValue;
      *(undefined1 *)&this->_padding_ = 1;
    }
  }
  this->ScrollIntoViewAlignment = param_1->_ScrollIntoViewAlignment;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &param_1->_OnItemToString_Debug,&local_630);
  if ((*(int *)&(param_1->_OnItemToString_Debug).field_0x10 == 0) ||
     (plVar20 = *(longlong **)&(param_1->_OnItemToString_Debug).field_0x8,
     plVar20 == (longlong *)0x0)) {
LAB_1428e4533:
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_630);
    local_978 = (undefined1  [8])0x0;
    local_970.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_970.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_978,
               (FWriteAccessScope *)&local_6e8);
    local_6d0 = &local_970;
    puVar11 = UE::Core::Private::DelegateAllocate(0x20,&local_970);
    if (puVar11 != (undefined8 *)0x0) {
      *puVar11 = &
                 ___7__TCommonDelegateInstanceState___A6A_AVFString__V__TSharedPtr_VFString___00___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar12 = FDelegateHandle::GenerateNewID();
      puVar11[2] = uVar12;
      *puVar11 = &
                 ___7__TBaseStaticDelegateInstance___A6A_AVFString__V__TSharedPtr_VFString___00___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar11[3] = TListTypeTraits<TSharedPtr<FString,1>,void>::DebugDump;
    }
    if (local_6e8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_6e8.Accessor,&local_6e8);
    }
    TDelegate<FString___cdecl(TSharedPtr<FString,1>),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>
              (&this->OnItemToString_Debug,
               (TDelegate<FString___cdecl(TSharedPtr<FString,1>),FDefaultDelegateUserPolicy> *)
               local_978);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_978,
               (FWriteAccessScope *)&local_760);
    if ((local_970.DelegateSize != 0) &&
       (local_970.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_970.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_970,0,0,0x10);
      local_970.DelegateSize = 0;
    }
    if (local_760.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_760.Accessor,&local_760);
    }
    if (local_970.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_970.DelegateAllocator);
    }
    this_01 = (FMRSWRecursiveAccessDetector *)local_978;
  }
  else {
    cVar7 = (**(code **)(*plVar20 + 0x38))();
    if (cVar7 == '\0') goto LAB_1428e4533;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_630);
    local_8e8 = (undefined1  [8])0x0;
    local_8e0.Data = (FScriptContainerElement *)0x0;
    local_8d8 = 0;
    TDelegate<FString___cdecl(TSharedPtr<FString,1>),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<FString___cdecl(TSharedPtr<FString,1>),FDefaultDelegateUserPolicy> *)
               local_8e8,&param_1->_OnItemToString_Debug);
    TDelegate<FString___cdecl(TSharedPtr<FString,1>),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>
              (&this->OnItemToString_Debug,
               (TDelegate<FString___cdecl(TSharedPtr<FString,1>),FDefaultDelegateUserPolicy> *)
               local_8e8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_8e8,
               (FWriteAccessScope *)&local_778);
    if ((local_8d8 != 0) && (local_8e0.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_8e0.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_8e0,0,0,0x10);
      local_8d8 = 0;
    }
    if (local_778.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_778.Accessor,&local_778);
    }
    if (local_8e0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_8e0.Data);
    }
    this_01 = (FMRSWRecursiveAccessDetector *)local_8e8;
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this_01);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->OnEnteredBadState,&param_1->_OnEnteredBadState);
  TDelegate<FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&this->OnKeyDownHandler,&param_1->_OnKeyDownHandler);
  pFVar3 = param_1->_ListViewStyle;
  this->Style = pFVar3;
  if (pFVar3 == (FTableViewStyle *)0x0) {
    local_880._0_8_ = FStyleDefaults::GetNoBrush();
  }
  else {
    local_880._0_8_ = &pFVar3->BackgroundBrush;
  }
  local_880[8] = true;
  local_860 = 0;
  local_870.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_868.Data = (FScriptContainerElement *)0x0;
  STableViewBase::SetBackgroundBrush
            ((STableViewBase *)this,(TAttribute<FSlateBrush_const_*> *)local_880);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_870,(FWriteAccessScope *)&local_748);
  if (((int)local_860 != 0) && (FStack_868.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_868.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_868,0,0,0x10);
    local_860 = local_860 & 0xffffffff00000000;
  }
  if (local_748.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_748.Accessor,&local_748);
  }
  if (FStack_868.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_868.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_870.AccessDetector);
  *(bool *)&this->_padding_ = param_1->_bEnableShadowBoxStyle;
  this->_padding_ = (longlong)param_1->_ShadowBoxStyle;
  (this->MaxPinnedItems).Value = (param_1->_MaxPinnedItems).Value;
  (this->MaxPinnedItems).bIsSet = (param_1->_MaxPinnedItems).bIsSet;
  TDelegate<int___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->MaxPinnedItems).Getter,&(param_1->_MaxPinnedItems).Getter);
  (this->DefaultMaxPinnedItems).Value = (param_1->_MaxPinnedItems).Value;
  (this->DefaultMaxPinnedItems).bIsSet = (param_1->_MaxPinnedItems).bIsSet;
  TDelegate<int___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->DefaultMaxPinnedItems).Getter,&(param_1->_MaxPinnedItems).Getter);
  lVar6 = *(longlong *)&(param_1->_ScrollBarPadding).Right;
  local_8d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_8d0.Data.ArrayNum = 0;
  local_8d0.Data.ArrayMax = 0;
  this->_padding_ = *(longlong *)&param_1->_ScrollBarPadding;
  this->_padding_ = lVar6;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnGenerateRow,
             &local_698);
  if ((*(int *)&(this->OnGenerateRow).field_0x10 != 0) &&
     (plVar20 = *(longlong **)&(this->OnGenerateRow).field_0x8, plVar20 != (longlong *)0x0)) {
    cVar7 = (**(code **)(*plVar20 + 0x38))();
    if (cVar7 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_698);
      goto LAB_1428e481b;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_698);
  ::FString::AppendChars(&local_8d0,L"Please specify an OnGenerateRow. \n",0x22);
LAB_1428e481b:
  if ((this->ViewSource).Ptr == (IItemsSource<TSharedPtr<FString,1>_> *)0x0) {
    ::FString::AppendChars(&local_8d0,L"Please specify a ListItemsSource. \n",0x23);
  }
  iVar19 = local_8d0.Data.ArrayNum + -1;
  if (local_8d0.Data.ArrayNum == 0) {
    iVar19 = 0;
  }
  if (iVar19 < 1) {
    local_8c0[0] = LeftAligned;
    local_8c0[1] = true;
    local_828._0_4_ = 0.0;
    local_8a0._0_4_ = 0.0;
    local_8b8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_8b0.Data = (FScriptContainerElement *)0x0;
    local_8a8 = 0;
    local_828[4] = true;
    local_820 = (undefined1  [8])0x0;
    pvStack_818 = (void *)0x0;
    local_810 = 0;
    local_8a0[4] = true;
    local_898.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_890.Data = (FScriptContainerElement *)0x0;
    local_888 = 0;
    STableViewBase::ConstructChildren
              ((STableViewBase *)this,(TAttribute<float> *)local_8a0,(TAttribute<float> *)local_828,
               (TAttribute<EListItemAlignment> *)local_8c0,&param_1->_HeaderRow,
               &param_1->_ExternalScrollbar,param_1->_Orientation,&param_1->_OnListViewScrolled,
               param_1->_ScrollBarStyle,param_1->_PreventThrottling);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_898,(FWriteAccessScope *)&local_730);
    if (((int)local_888 != 0) && (FStack_890.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_890.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_890,0,0,0x10);
      local_888 = local_888 & 0xffffffff00000000;
    }
    if (local_730.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_730.Accessor,&local_730);
    }
    if (FStack_890.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_890.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_898.AccessDetector);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_820);
    if (pvStack_818 != (void *)0x0) {
      FMemory::Free(pvStack_818);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_820);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_8b8,(FWriteAccessScope *)&local_718);
    if (((int)local_8a8 != 0) && (FStack_8b0.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_8b0.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_8b0,0,0,0x10);
      local_8a8 = local_8a8 & 0xffffffff00000000;
    }
    if (local_718.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_718.Accessor,&local_718);
    }
    if (FStack_8b0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_8b0.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_8b8.AccessDetector);
    if (this->_padding_ != 0) {
      pSVar17 = TSharedPtr<SScrollBar,1>::operator->((TSharedPtr<SScrollBar,1> *)&this->_padding_);
      pSVar17->DragFocusCause = param_1->_ScrollbarDragFocusCause;
      pSVar17 = TSharedPtr<SScrollBar,1>::operator->((TSharedPtr<SScrollBar,1> *)&this->_padding_);
      local_7f8.Value.Value.Value =
           (TEnumAsByte<EVisibility::Private>)(param_1->_ScrollbarVisibility).Value.Value.Value;
      local_7f8.bIsSet = (param_1->_ScrollbarVisibility).bIsSet;
      local_7f8.Getter._0_8_ = 0;
      local_7f8.Getter._8_8_ = 0;
      local_7f8.Getter._16_4_ = 0;
      TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
      CopyFrom<FDefaultDelegateUserPolicy>
                (&local_7f8.Getter,&(param_1->_ScrollbarVisibility).Getter);
      SScrollBar::SetUserVisibility(pSVar17,&local_7f8);
    }
    pTVar9 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&this->_padding_,
                        (TSharedRef<SWidget,1> *)(local_668 + 8));
    pTVar1 = (pTVar9->SharedReferenceCount).ReferenceController;
    pSVar2 = pTVar9->Object;
    if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
      paVar22 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar22 = &pTVar1->SharedReferenceCount;
      LOCK();
      *paVar22 = (atomic<int>)((int)*paVar22 + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_658);
    pTVar18 = ::operator_new(0x28);
    if (pTVar18 == (TReferenceControllerBase<1> *)0x0) {
      local_838.Object = (ISlateMetaData *)___xmm_00000000000000000000000000000010;
      local_838.SharedReferenceCount.ReferenceController = _UNK_150651568;
    }
    else {
      pTVar18->SharedReferenceCount = (atomic<int>)0x1;
      pTVar18->WeakReferenceCount = (atomic<int>)0x1;
      pTVar18->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_V__TTableViewMetadata_V__TSharedPtr_VFString___00_____00_SharedPointerInternals__6B_
      ;
      if (pSVar2 != (SWidget *)0x0) {
        pTVar21 = (TReferenceControllerBase<1> *)
                  &pSVar2[2].PersistentState.CachedElementHandle.Ptr.WeakReferenceCount;
      }
      if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
        pTVar18[1]._padding_ =
             (longlong)&___7__TTableViewMetadata_V__TSharedPtr_VFString___00____6B_;
        *(TReferenceControllerBase<1> **)&pTVar18[1].SharedReferenceCount = pTVar21;
        pTVar18[2]._padding_ = 0;
      }
      else {
        LOCK();
        *paVar22 = (atomic<int>)((int)*paVar22 + 1);
        UNLOCK();
        pTVar18[1]._padding_ =
             (longlong)&___7__TTableViewMetadata_V__TSharedPtr_VFString___00____6B_;
        *(TReferenceControllerBase<1> **)&pTVar18[1].SharedReferenceCount = pTVar21;
        pTVar18[2]._padding_ = (longlong)pTVar1;
        LOCK();
        pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      local_838.Object = (ISlateMetaData *)(pTVar18 + 1);
      if ((TReferenceControllerBase<1> *)local_838.Object == (TReferenceControllerBase<1> *)0x0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L"");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      LOCK();
      pTVar18->SharedReferenceCount = (atomic<int>)((int)pTVar18->SharedReferenceCount + 1);
      UNLOCK();
      pTVar21 = pTVar18;
      local_838.SharedReferenceCount.ReferenceController = pTVar18;
    }
    SWidget::AddMetadataInternal((SWidget *)this,&local_838);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_838.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar21);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  }
  else {
    plVar20 = &this->_padding_;
    *(undefined4 *)plVar20 = 2;
    puVar13 = (undefined4 *)((longlong)&this->_padding_ + 4);
    if (plVar20 == (longlong *)0x0) {
      puVar13 = (undefined4 *)&DAT_00000054;
    }
    *puVar13 = 2;
    pFVar14 = STextBlock::FArguments::FArguments(&local_5a0);
    pFVar15 = FText::FromString(&local_650,&local_8d0);
    FText::FText(&local_6c8.Value,pFVar15);
    local_6c8.bIsSet = true;
    local_6c8.Getter._16_8_ = 0;
    local_6c8.Getter._0_8_ = 0;
    local_6c8.Getter._8_8_ = 0;
    pFVar14 = STextBlock::FArguments::Text(pFVar14,&local_6c8);
    FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_res18 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_res20,&local_res18,true);
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
              (&local_680,"STextBlock",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\SListView.h"
               ,0x135,local_res8);
    FMemScope::~FMemScope(&local_res20);
    FLLMScope::~FLLMScope(local_res10);
    pTVar16 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                        (&local_680,&local_640,pFVar14);
    this_02 = (FSlotBase *)&this->_padding_;
    pTVar21 = (pTVar16->SharedReferenceCount).ReferenceController;
    pSVar4 = pTVar16->Object;
    if (pTVar21 == (TReferenceControllerBase<1> *)0x0) {
      if (plVar20 == (longlong *)0x0) {
        this_02 = (FSlotBase *)&DAT_00000020;
      }
      FSlotBase::DetatchParentFromContent(this_02);
    }
    else {
      LOCK();
      pTVar21->SharedReferenceCount = (atomic<int>)((int)pTVar21->SharedReferenceCount + 1);
      UNLOCK();
      if (plVar20 == (longlong *)0x0) {
        this_02 = (FSlotBase *)&DAT_00000020;
      }
      FSlotBase::DetatchParentFromContent(this_02);
      LOCK();
      pTVar21->SharedReferenceCount = (atomic<int>)((int)pTVar21->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar1 = (this_02->Widget).SharedReferenceCount.ReferenceController;
    (this_02->Widget).Object = (SWidget *)pSVar4;
    (this_02->Widget).SharedReferenceCount.ReferenceController = pTVar21;
    local_848 = pSVar4;
    pTStack_840 = pTVar21;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    FSlotBase::AfterContentOrOwnerAssigned(this_02);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar21);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_640.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_680._Widget.SharedReferenceCount.ReferenceController);
    if (local_650.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_650.TextData.Reference + 0x10))();
    }
    STextBlock::FArguments::~FArguments(&local_5a0);
  }
  if (local_8d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8d0.Data.AllocatorInstance.Data);
  }
  return;
}

// CreateAccessibleWidget @ 1429118b0

TSharedRef<FSlateAccessibleWidget,1> * __thiscall
SListView<TSharedPtr<FString,1>_>::CreateAccessibleWidget
          (SListView<TSharedPtr<FString,1>_> *this,
          TSharedRef<FSlateAccessibleWidget,1> *__return_storage_ptr__)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  code *pcVar3;
  bool bVar4;
  FSlateAccessibleWidget *this_00;
  TSharedRef<SWidget,1> *pTVar5;
  TSharedRef<FSlateAccessibleWidget,1> *pTVar6;
  bool bVar7;
  TRawPtrProxy<FSlateAccessibleWidget> TVar8;
  TRawPtrProxy<FSlateAccessibleWidget> local_res10;
  TWeakPtr<SWidget,1> local_28;
  TSharedRef<SWidget,1> local_18;
  
  bVar7 = false;
  local_res10.Object = local_res10.Object & 0xffffffff00000000;
  this_00 = ::operator_new(0x70);
  if (this_00 == (FSlateAccessibleWidget *)0x0) {
    this_00 = (FSlateAccessibleWidget *)0x0;
    TVar8.Object = local_res10.Object;
  }
  else {
    pTVar5 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_18);
    TVar8.Object = (FSlateAccessibleWidget *)(pTVar5->SharedReferenceCount).ReferenceController;
    local_28.Object = pTVar5->Object;
    local_28.WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)TVar8.Object;
    if (TVar8.Object == (FSlateAccessibleWidget *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
      FSlateAccessibleWidget::FSlateAccessibleWidget(this_00,&local_28,List);
      this_00->_padding_ =
           (longlong)&FSlateAccessibleListView::_vftable__for__FSlateAccessibleWidget__;
      this_00[1]._padding_ = (longlong)&FSlateAccessibleListView::_vftable__for__IAccessibleTable__;
    }
    else {
      LOCK();
      *(atomic<int> *)&(TVar8.Object)->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&(TVar8.Object)->_padding_ + 1);
      UNLOCK();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
      LOCK();
      ((atomic<int> *)&(TVar8.Object)->_padding_)[1] =
           (atomic<int>)((int)((atomic<int> *)&(TVar8.Object)->_padding_)[1] + 1);
      UNLOCK();
      LOCK();
      ((atomic<int> *)&(TVar8.Object)->_padding_)[1] =
           (atomic<int>)((int)((atomic<int> *)&(TVar8.Object)->_padding_)[1] + 1);
      UNLOCK();
      FSlateAccessibleWidget::FSlateAccessibleWidget(this_00,&local_28,List);
      this_00->_padding_ =
           (longlong)&FSlateAccessibleListView::_vftable__for__FSlateAccessibleWidget__;
      this_00[1]._padding_ = (longlong)&FSlateAccessibleListView::_vftable__for__IAccessibleTable__;
      LOCK();
      paVar1 = (atomic<int> *)&(TVar8.Object)->_padding_ + 1;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((TVar8.Object)->_padding_ + 8))(TVar8.Object,1);
      }
    }
    bVar7 = true;
    if (((this_00->_padding_ != 0) && (this_00->_padding_ != 0)) &&
       (0 < *(int *)(this_00->_padding_ + 8))) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InObject || !InObject->DoesSharedInstanceExist()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x7a5,L"Trying to share an already-shared object");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TSharedRef<FSlateAccessibleWidget,1> *)(*pcVar3)();
        return pTVar6;
      }
    }
  }
  local_res10.Object = this_00;
  TSharedRef<FSlateAccessibleWidget,1>::TSharedRef<FSlateAccessibleWidget,1><FSlateAccessibleWidget>
            (__return_storage_ptr__,&local_res10);
  if (bVar7) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)TVar8.Object);
  }
  return __return_storage_ptr__;
}

// GenerateNewPinnedWidget @ 1429390a0

TSharedRef<ITableRow,1> * __thiscall
SListView<TSharedPtr<FString,1>_>::GenerateNewPinnedWidget
          (SListView<TSharedPtr<FString,1>_> *this,TSharedRef<ITableRow,1> *__return_storage_ptr__,
          TSharedPtr<FString,1> *param_1,int param_2,int param_3)

{
  SWidget *pSVar1;
  TReferenceControllerBase<1> *pTVar2;
  SWidget *pSVar3;
  char cVar4;
  TSharedRef<SWidget,1> *pTVar5;
  FArguments *pFVar6;
  FArguments *pFVar7;
  FText *pFVar8;
  TSharedRef<STextBlock,1> *pTVar9;
  TSlateDecl<STableRow<TSharedPtr<FString,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FString,1>_>,1>_&&>_>
  *this_00;
  FSlateInvalidationRoot *pFVar10;
  longlong *plVar11;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_948 [2];
  FDestructionSentinel local_940;
  undefined1 local_928 [32];
  FText local_908;
  bool local_8f8;
  undefined1 local_8f0 [8];
  ForAnyElementType FStack_8e8;
  FWeakReferencer<1> local_8e0;
  FName local_8d8;
  FReadAccessScope local_8d0;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_8b8;
  TSharedRef<STextBlock,1> local_8a0;
  TSlateDecl<STableRow<TSharedPtr<FString,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FString,1>_>,1>_&&>_>
  local_890;
  FArguments local_878;
  FArguments local_580;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnGeneratePinnedRow,
             &local_8d0);
  if (((*(int *)&(this->OnGeneratePinnedRow).field_0x10 == 0) ||
      (plVar11 = *(longlong **)&(this->OnGeneratePinnedRow).field_0x8, plVar11 == (longlong *)0x0))
     || (cVar4 = (**(code **)(*plVar11 + 0x38))(), cVar4 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_8d0);
    pFVar6 = STableRow<TSharedPtr<FString,1>_>::FArguments::FArguments(&local_878);
    pFVar7 = STextBlock::FArguments::FArguments(&local_580);
    pFVar8 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)&local_8d0,L"SListView",L"OnGeneratePinnedRowNotAssignedMessage",
                        L"OnGeneratePinnedRow() not assigned.");
    FText::FText(&local_908,pFVar8);
    local_8f8 = true;
    local_8e0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_8f0 = (undefined1  [8])0x0;
    FStack_8e8.Data = (FScriptContainerElement *)0x0;
    FText::operator=(&(pFVar7->_Text).Value,&local_908);
    (pFVar7->_Text).bIsSet = local_8f8;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar7->_Text).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_8f0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_8f0,
               (FWriteAccessScope *)&local_940);
    if (((int)local_8e0.ReferenceController != 0) &&
       (FStack_8e8.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_8e8.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_8e8,0,0,0x10);
      local_8e0.ReferenceController = local_8e0.ReferenceController & 0xffffffff00000000;
    }
    if (local_940.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_940.Accessor,&local_940);
    }
    if (FStack_8e8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_8e8.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_8f0);
    if (local_908.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_908.TextData.Reference + 0x10))();
    }
    FLLMScope::FLLMScope(local_948,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_8d8 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope((FMemScope *)&local_940,&local_8d8,true);
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
              (&local_8b8,"STextBlock",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\SListView.h"
               ,0x691,local_res8);
    FMemScope::~FMemScope((FMemScope *)&local_940);
    FLLMScope::~FLLMScope(local_948);
    pTVar9 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                       (&local_8b8,&local_8a0,pFVar7);
    pFVar10 = (FSlateInvalidationRoot *)(pTVar9->SharedReferenceCount).ReferenceController;
    local_940._0_8_ = pTVar9->Object;
    if (pFVar10 != (FSlateInvalidationRoot *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar10->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pFVar10->_padding_ + 1);
      UNLOCK();
      LOCK();
      *(atomic<int> *)&pFVar10->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pFVar10->_padding_ + 1);
      UNLOCK();
    }
    pTVar2 = (pFVar6->_Content).Widget.SharedReferenceCount.ReferenceController;
    (pFVar6->_Content).Widget.Object = (SWidget *)local_940._0_8_;
    (pFVar6->_Content).Widget.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)pFVar10;
    local_940.Accessor = (FMRSWRecursiveAccessDetector *)pFVar10;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    pTVar5 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&this->_padding_,
                        (TSharedRef<SWidget,1> *)&local_940);
    local_928._0_8_ = pTVar5->Object;
    local_928._8_8_ = (pTVar5->SharedReferenceCount).ReferenceController;
    if ((TReferenceControllerBase<1> *)local_928._8_8_ != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      ((TReferenceControllerBase<1> *)local_928._8_8_)->SharedReferenceCount =
           (atomic<int>)
           ((int)((TReferenceControllerBase<1> *)local_928._8_8_)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_940.Accessor);
    local_928._16_8_ = local_928;
    this_00 = MakeTDecl<STableRow<TSharedPtr<FString,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FString,1>_>,1>_&&>_>
                        (&local_890,"STableRow<ItemType>",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\SListView.h"
                         ,0x68e,(T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FString,1>_>,1>_&&>
                                 *)(local_928 + 0x10));
    TSlateDecl<STableRow<TSharedPtr<FString,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FString,1>_>,1>_&&>_>
    ::operator<<=(this_00,(TSharedRef<STableRow<TSharedPtr<FString,1>_>,1> *)&local_940,pFVar6);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_890._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_928._8_8_);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar10);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_8a0.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_8b8._Widget.SharedReferenceCount.ReferenceController);
    if ((ITextData *)local_8d0.DestructionSentinel._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_8d0.DestructionSentinel._0_8_ + 0x10))();
    }
    STextBlock::FArguments::~FArguments(&local_580);
    STableRow<TSharedPtr<FString,1>_>::FArguments::~FArguments(&local_878);
    __return_storage_ptr__->Object = (ITableRow *)local_940._0_8_;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)local_940.Accessor;
    pFVar10 = (FSlateInvalidationRoot *)local_940.Accessor;
    if ((FSlateInvalidationRoot *)local_940.Accessor != (FSlateInvalidationRoot *)0x0) {
      LOCK();
      *(atomic<int> *)((longlong)local_940.Accessor + 8) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)local_940.Accessor + 8) + 1);
      UNLOCK();
    }
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_8d0);
    pTVar5 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&this->_padding_,
                        (TSharedRef<SWidget,1> *)local_928);
    pFVar10 = (FSlateInvalidationRoot *)(pTVar5->SharedReferenceCount).ReferenceController;
    pSVar1 = pTVar5->Object;
    if (pFVar10 == (FSlateInvalidationRoot *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_928._8_8_);
    }
    else {
      LOCK();
      *(atomic<int> *)&pFVar10->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pFVar10->_padding_ + 1);
      UNLOCK();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_928._8_8_);
      LOCK();
      *(atomic<int> *)&pFVar10->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pFVar10->_padding_ + 1);
      UNLOCK();
    }
    pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
    pSVar3 = (SWidget *)param_1->Object;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_928._16_8_ = pSVar1;
    local_928._24_8_ = pFVar10;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnGeneratePinnedRow,
               (FReadAccessScope *)&local_8b8);
    if (*(int *)&(this->OnGeneratePinnedRow).field_0x10 == 0) {
      plVar11 = (longlong *)0x0;
    }
    else {
      plVar11 = *(longlong **)&(this->OnGeneratePinnedRow).field_0x8;
    }
    local_928._0_8_ = pSVar3;
    local_928._8_8_ = pTVar2;
    (**(code **)(*plVar11 + 0x60))(plVar11,__return_storage_ptr__,local_928,local_928 + 0x10);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_8b8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_928._24_8_);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// GenerateNewWidget @ 1429394d0

TSharedRef<ITableRow,1> * __thiscall
SListView<TSharedPtr<FString,1>_>::GenerateNewWidget
          (SListView<TSharedPtr<FString,1>_> *this,TSharedRef<ITableRow,1> *__return_storage_ptr__,
          TSharedPtr<FString,1> *param_1)

{
  SWidget *pSVar1;
  TReferenceControllerBase<1> *pTVar2;
  SWidget *pSVar3;
  char cVar4;
  TSharedRef<SWidget,1> *pTVar5;
  FArguments *pFVar6;
  FArguments *pFVar7;
  FText *pFVar8;
  TSharedRef<STextBlock,1> *pTVar9;
  TSlateDecl<STableRow<TSharedPtr<FString,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FString,1>_>,1>_&&>_>
  *this_00;
  FSlateInvalidationRoot *pFVar10;
  longlong *plVar11;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res20 [2];
  FDestructionSentinel local_958;
  undefined1 local_940 [32];
  FText local_920;
  bool local_910;
  undefined1 local_908 [8];
  ForAnyElementType FStack_900;
  FWeakReferencer<1> local_8f8;
  FName local_8f0;
  FReadAccessScope local_8e8;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_8d0;
  TSharedRef<STextBlock,1> local_8b8;
  TSlateDecl<STableRow<TSharedPtr<FString,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FString,1>_>,1>_&&>_>
  local_8a8;
  FArguments local_890;
  FArguments local_598;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnGenerateRow,
             &local_8e8);
  if (((*(int *)&(this->OnGenerateRow).field_0x10 == 0) ||
      (plVar11 = *(longlong **)&(this->OnGenerateRow).field_0x8, plVar11 == (longlong *)0x0)) ||
     (cVar4 = (**(code **)(*plVar11 + 0x38))(), cVar4 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_8e8);
    pFVar6 = STableRow<TSharedPtr<FString,1>_>::FArguments::FArguments(&local_890);
    pFVar7 = STextBlock::FArguments::FArguments(&local_598);
    pFVar8 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)&local_8e8,L"SListView",L"OnGenerateWidgetNotAssignedMessage",
                        L"OnGenerateWidget() not assigned.");
    FText::FText(&local_920,pFVar8);
    local_910 = true;
    local_8f8.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_908 = (undefined1  [8])0x0;
    FStack_900.Data = (FScriptContainerElement *)0x0;
    FText::operator=(&(pFVar7->_Text).Value,&local_920);
    (pFVar7->_Text).bIsSet = local_910;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar7->_Text).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_908);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_908,
               (FWriteAccessScope *)&local_958);
    if (((int)local_8f8.ReferenceController != 0) &&
       (FStack_900.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_900.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_900,0,0,0x10);
      local_8f8.ReferenceController = local_8f8.ReferenceController & 0xffffffff00000000;
    }
    if (local_958.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_958.Accessor,&local_958);
    }
    if (FStack_900.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_900.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_908);
    if (local_920.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_920.TextData.Reference + 0x10))();
    }
    FLLMScope::FLLMScope(local_res20,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_8f0 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope((FMemScope *)&local_958,&local_8f0,true);
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
              (&local_8d0,"STextBlock",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\SListView.h"
               ,0x6ad,local_res8);
    FMemScope::~FMemScope((FMemScope *)&local_958);
    FLLMScope::~FLLMScope(local_res20);
    pTVar9 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                       (&local_8d0,&local_8b8,pFVar7);
    pFVar10 = (FSlateInvalidationRoot *)(pTVar9->SharedReferenceCount).ReferenceController;
    local_958._0_8_ = pTVar9->Object;
    if (pFVar10 != (FSlateInvalidationRoot *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar10->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pFVar10->_padding_ + 1);
      UNLOCK();
      LOCK();
      *(atomic<int> *)&pFVar10->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pFVar10->_padding_ + 1);
      UNLOCK();
    }
    pTVar2 = (pFVar6->_Content).Widget.SharedReferenceCount.ReferenceController;
    (pFVar6->_Content).Widget.Object = (SWidget *)local_958._0_8_;
    (pFVar6->_Content).Widget.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)pFVar10;
    local_958.Accessor = (FMRSWRecursiveAccessDetector *)pFVar10;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    pTVar5 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&this->_padding_,
                        (TSharedRef<SWidget,1> *)&local_958);
    local_940._0_8_ = pTVar5->Object;
    local_940._8_8_ = (pTVar5->SharedReferenceCount).ReferenceController;
    if ((TReferenceControllerBase<1> *)local_940._8_8_ != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      ((TReferenceControllerBase<1> *)local_940._8_8_)->SharedReferenceCount =
           (atomic<int>)
           ((int)((TReferenceControllerBase<1> *)local_940._8_8_)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_958.Accessor);
    local_940._16_8_ = local_940;
    this_00 = MakeTDecl<STableRow<TSharedPtr<FString,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FString,1>_>,1>_&&>_>
                        (&local_8a8,"STableRow<ItemType>",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\SListView.h"
                         ,0x6aa,(T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FString,1>_>,1>_&&>
                                 *)(local_940 + 0x10));
    TSlateDecl<STableRow<TSharedPtr<FString,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FString,1>_>,1>_&&>_>
    ::operator<<=(this_00,(TSharedRef<STableRow<TSharedPtr<FString,1>_>,1> *)&local_958,pFVar6);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_8a8._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_940._8_8_);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar10);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_8b8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_8d0._Widget.SharedReferenceCount.ReferenceController);
    if ((ITextData *)local_8e8.DestructionSentinel._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_8e8.DestructionSentinel._0_8_ + 0x10))();
    }
    STextBlock::FArguments::~FArguments(&local_598);
    STableRow<TSharedPtr<FString,1>_>::FArguments::~FArguments(&local_890);
    __return_storage_ptr__->Object = (ITableRow *)local_958._0_8_;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)local_958.Accessor;
    pFVar10 = (FSlateInvalidationRoot *)local_958.Accessor;
    if ((FSlateInvalidationRoot *)local_958.Accessor != (FSlateInvalidationRoot *)0x0) {
      LOCK();
      *(atomic<int> *)((longlong)local_958.Accessor + 8) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)local_958.Accessor + 8) + 1);
      UNLOCK();
    }
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_8e8);
    pTVar5 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&this->_padding_,
                        (TSharedRef<SWidget,1> *)local_940);
    pFVar10 = (FSlateInvalidationRoot *)(pTVar5->SharedReferenceCount).ReferenceController;
    pSVar1 = pTVar5->Object;
    if (pFVar10 == (FSlateInvalidationRoot *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_940._8_8_);
    }
    else {
      LOCK();
      *(atomic<int> *)&pFVar10->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pFVar10->_padding_ + 1);
      UNLOCK();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_940._8_8_);
      LOCK();
      *(atomic<int> *)&pFVar10->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pFVar10->_padding_ + 1);
      UNLOCK();
    }
    pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
    pSVar3 = (SWidget *)param_1->Object;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_940._16_8_ = pSVar1;
    local_940._24_8_ = pFVar10;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnGenerateRow,
               (FReadAccessScope *)&local_8d0);
    if (*(int *)&(this->OnGenerateRow).field_0x10 == 0) {
      plVar11 = (longlong *)0x0;
    }
    else {
      plVar11 = *(longlong **)&(this->OnGenerateRow).field_0x8;
    }
    local_940._0_8_ = pSVar3;
    local_940._8_8_ = pTVar2;
    (**(code **)(*plVar11 + 0x60))(plVar11,__return_storage_ptr__,local_940,local_940 + 0x10);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_8d0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_940._24_8_);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// GenerateWidgetForItem @ 1429398f0

float __thiscall
SListView<TSharedPtr<FString,1>_>::GenerateWidgetForItem
          (SListView<TSharedPtr<FString,1>_> *this,TSharedPtr<FString,1> *param_1,int param_2,
          int param_3,float param_4)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong *plVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  char cVar6;
  TSharedRef<ITableRow,1> *pTVar7;
  undefined8 *puVar8;
  FDeprecateSlateVector2D FVar9;
  FSharedReferencer<1> FVar10;
  longlong *plVar11;
  float fVar12;
  double dVar13;
  float local_res8;
  float local_resc;
  int local_res18;
  int local_res20;
  ITableRow *local_168;
  FSharedReferencer<1> FStack_160;
  TSharedPtr<FString_const_,1> local_158;
  SWidget *local_148;
  TReferenceControllerBase<1> *local_140;
  undefined8 local_138;
  FSharedReferencer<1> local_130;
  TSharedRef<ITableRow,1> local_128;
  TSharedRef<ITableRow,1> local_118;
  FString *local_108;
  TReferenceControllerBase<1> *local_100;
  FString *local_f8;
  TReferenceControllerBase<1> *local_f0;
  TSharedRef<ITableRow,1> local_e8;
  TSharedPtr<FString,1> local_d8;
  FTableViewDimensions local_c8;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined1 local_98 [8];
  TReferenceControllerBase<1> *local_90;
  FReadAccessScope local_88;
  FReadAccessScope local_70 [2];
  
  plVar11 = (longlong *)0x0;
  local_res18 = param_2;
  local_res20 = param_3;
  if (param_1->Object == (FString *)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8670646794247469567>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\SListView.h"
                       ,0x601,"TListTypeTraits<ItemType>::IsPtrValid(CurItem)");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      fVar12 = (float)(*pcVar3)();
      return fVar12;
    }
  }
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  local_158.Object = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_158.SharedReferenceCount.ReferenceController = pTVar1;
  pTVar7 = TMapBase<TSharedPtr<FString,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<FString,1>,TSharedRef<ITableRow,1>,0>_>
           ::Find((TMapBase<TSharedPtr<FString,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<FString,1>,TSharedRef<ITableRow,1>,0>_>
                   *)&(this->WidgetGenerator).ItemToWidgetMap,&local_158);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if (pTVar7 == (TSharedRef<ITableRow,1> *)0x0) {
    local_a0 = 0;
    FStack_160.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_a8 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    FStack_160.ReferenceController = (pTVar7->SharedReferenceCount).ReferenceController;
    local_168 = pTVar7->Object;
    if (FStack_160.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FStack_160.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FStack_160.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_b0 = 0;
    local_b8 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    if (local_168 != (ITableRow *)0x0) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnRefreshRow,
                 &local_88);
      if ((*(int *)&(this->OnRefreshRow).field_0x10 != 0) &&
         (plVar2 = *(longlong **)&(this->OnRefreshRow).field_0x8, plVar2 != (longlong *)0x0)) {
        cVar6 = (**(code **)(*plVar2 + 0x38))();
        if (cVar6 != '\0') {
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_88);
          local_100 = (param_1->SharedReferenceCount).ReferenceController;
          local_108 = param_1->Object;
          if (local_100 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            local_100->SharedReferenceCount =
                 (atomic<int>)((int)local_100->SharedReferenceCount + 1);
            UNLOCK();
          }
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnRefreshRow,
                     local_70);
          if (*(int *)&(this->OnRefreshRow).field_0x10 != 0) {
            plVar11 = *(longlong **)&(this->OnRefreshRow).field_0x8;
          }
          (**(code **)(*plVar11 + 0x60))(plVar11,&local_108);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(local_70);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
          param_3 = local_res20;
          param_2 = local_res18;
          goto LAB_142939b03;
        }
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_88);
      goto LAB_142939b03;
    }
  }
  pcVar3 = *(code **)(this->_padding_ + 0x2c8);
  local_f8 = param_1->Object;
  local_f0 = (param_1->SharedReferenceCount).ReferenceController;
  if (local_f0 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_f0->SharedReferenceCount = (atomic<int>)((int)local_f0->SharedReferenceCount + 1);
    UNLOCK();
  }
  puVar8 = (undefined8 *)(*pcVar3)(this,local_98,&local_f8);
  local_130.ReferenceController = (TReferenceControllerBase<1> *)puVar8[1];
  local_168 = (ITableRow *)*puVar8;
  if (local_130.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_130.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_130.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_138 = 0;
  SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_160,&local_130);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_130.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_90);
LAB_142939b03:
  if (local_168 == (ITableRow *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      fVar12 = (float)(*pcVar3)();
      return fVar12;
    }
  }
  (**(code **)((longlong)*local_168 + 0x10))(local_168,param_2);
  if (local_168 == (ITableRow *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      fVar12 = (float)(*pcVar3)();
      return fVar12;
    }
  }
  local_e8.Object = local_168;
  local_e8.SharedReferenceCount.ReferenceController = FStack_160.ReferenceController;
  if (FStack_160.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FStack_160.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FStack_160.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (local_168 == (ITableRow *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      fVar12 = (float)(*pcVar3)();
      return fVar12;
    }
  }
  local_d8.Object = param_1->Object;
  local_d8.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_d8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FWidgetGenerator::OnItemSeen(&this->WidgetGenerator,&local_d8,&local_e8);
  if (local_168 == (ITableRow *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      fVar12 = (float)(*pcVar3)();
      return fVar12;
    }
  }
  (**(code **)((longlong)*local_168 + 0x58))(local_168,&local_148);
  local_148->bNeedsPrepass = '\x01';
  SWidget::SlatePrepass(local_148,param_4);
  if (param_2 < param_3) {
    if (local_168 == (ITableRow *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        fVar12 = (float)(*pcVar3)();
        return fVar12;
      }
    }
    local_118.Object = local_168;
    local_118.SharedReferenceCount.ReferenceController = FStack_160.ReferenceController;
    if (FStack_160.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FStack_160.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FStack_160.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (local_168 == (ITableRow *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        fVar12 = (float)(*pcVar3)();
        return fVar12;
      }
    }
    STableViewBase::InsertWidget((STableViewBase *)this,&local_118);
    FVar10.ReferenceController = local_118.SharedReferenceCount.ReferenceController;
  }
  else {
    if (local_168 == (ITableRow *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        fVar12 = (float)(*pcVar3)();
        return fVar12;
      }
    }
    local_128.Object = local_168;
    local_128.SharedReferenceCount.ReferenceController = FStack_160.ReferenceController;
    if (FStack_160.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FStack_160.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FStack_160.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (local_168 == (ITableRow *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        fVar12 = (float)(*pcVar3)();
        return fVar12;
      }
    }
    STableViewBase::AppendWidget((STableViewBase *)this,&local_128);
    FVar10.ReferenceController = local_128.SharedReferenceCount.ReferenceController;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar10.ReferenceController);
  if (((byte)local_148->VisibilityAttribute & 0x19) == 0) {
    dVar4 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._0_8_;
    dVar13 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._8_8_;
  }
  else {
    FVar9 = SWidget::GetDesiredSize(local_148);
    dVar4 = (double)*(float *)FVar9;
    dVar13 = (double)*(float *)((longlong)FVar9 + 4);
  }
  local_res8 = (float)dVar4;
  local_resc = (float)dVar13;
  FTableViewDimensions::FTableViewDimensions
            (&local_c8,*(EOrientation *)((longlong)&this->_padding_ + 4),
             (FDeprecateVector2DParameter *)&local_res8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_140);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_160.ReferenceController);
  return local_c8.ScrollAxis;
}

// GetDefaultAccessibleText @ 14293ed60

TOptional<FText> * __thiscall
SListView<TSharedPtr<FString,1>_>::GetDefaultAccessibleText
          (SListView<TSharedPtr<FString,1>_> *this,TOptional<FText> *__return_storage_ptr__,
          EAccessibleType param_1)

{
  code *pcVar1;
  bool bVar2;
  FText *pFVar3;
  TOptional<FText> *pTVar4;
  FText local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_struct_TOptional<FText>___cdecl_SListView<TSharedPtr<FString,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_struct_TOptional<FText>___cdecl_SListView<TSharedPtr<FString,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_struct_TOptional<FText>___cdecl_SListView<TSharedPtr<FString,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FString::FString(&`public:_virtual_struct_TOptional<FText>___cdecl_SListView<TSharedPtr<FString,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
                          ::__l2::Name,L"List");
      atexit(`SListView<TSharedPtr<FString,1>_>::GetDefaultAccessibleText'::__l2::
             _dynamic_atexit_destructor_for__Name__);
      _Init_thread_footer(&`public:_virtual_struct_TOptional<FText>___cdecl_SListView<TSharedPtr<FString,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pFVar3 = FText::FromString(&local_18,
                             &`public:_virtual_struct_TOptional<FText>___cdecl_SListView<TSharedPtr<FString,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
                              ::__l2::Name);
  FText::FText((FText *)__return_storage_ptr__,pFVar3);
  if ((__return_storage_ptr__->field0_0x0).TypedValue.TextData.Reference == (ITextData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TOptional<FText> *)(*pcVar1)();
      return pTVar4;
    }
  }
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// GetNumItemsBeingObserved @ 142943330

int __thiscall
SListView<TSharedPtr<FString,1>_>::GetNumItemsBeingObserved(SListView<TSharedPtr<FString,1>_> *this)

{
  IItemsSource<TSharedPtr<FString,1>_> *pIVar1;
  longlong lVar2;
  undefined1 local_18 [24];
  
  pIVar1 = (this->ViewSource).Ptr;
  if (pIVar1 != (IItemsSource<TSharedPtr<FString,1>_> *)0x0) {
    lVar2 = (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_18);
    return (int)*(undefined8 *)(lVar2 + 8);
  }
  return 0;
}

// GetReferencerName @ 142947600

FString * __thiscall
SListView<TSharedPtr<FString,1>_>::GetReferencerName
          (SListView<TSharedPtr<FString,1>_> *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"SListView");
  return __return_storage_ptr__;
}

// GetSelectedItems @ 142947ea0

TArray<TSharedPtr<FString,1>,TSizedDefaultAllocator<32>_> * __thiscall
SListView<TSharedPtr<FString,1>_>::GetSelectedItems
          (SListView<TSharedPtr<FString,1>_> *this,
          TArray<TSharedPtr<FString,1>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  bool bVar7;
  TArray<TSharedPtr<FString,1>,TSizedDefaultAllocator<32>_> *pTVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  longlong *plVar14;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_40;
  
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar12 = 0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  uVar11 = (int)this->_padding_ - *(int *)((longlong)&this->_padding_ + 4);
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
  }
  DestructItems<TSharedPtr<FString,1>,int>((TSharedPtr<FString,1> *)0x0,0);
  __return_storage_ptr__->ArrayNum = 0;
  if (*piVar1 != uVar11) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar11,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
  }
  iVar4 = (int)this->_padding_;
  TStack_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&this->_padding_;
  uVar11 = 1;
  iVar13 = iVar12;
  TStack_40.CurrentBitIndex = 0;
  if (iVar4 != 0) {
    plVar14 = (longlong *)this->_padding_;
    if ((longlong *)this->_padding_ == (longlong *)0x0) {
      plVar14 = (longlong *)TStack_40.Array;
    }
    uVar5 = (uint)*plVar14;
    iVar13 = 0;
    iVar12 = 0;
    while (uVar5 == 0) {
      lVar9 = (longlong)iVar12;
      iVar13 = iVar13 + 0x20;
      iVar12 = iVar12 + 1;
      TStack_40.CurrentBitIndex = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_142947f91;
      uVar5 = *(uint *)((longlong)plVar14 + lVar9 * 4 + 4);
    }
    uVar11 = -uVar5 & uVar5;
    uVar3 = (ulonglong)uVar11 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    TStack_40.CurrentBitIndex = (int)lVar9 + -1 + iVar13;
    if (iVar4 < TStack_40.CurrentBitIndex) {
      TStack_40.CurrentBitIndex = iVar4;
    }
  }
LAB_142947f91:
  TStack_40._padding_ = CONCAT44(uVar11,iVar12);
  TStack_40.UnvisitedBitMask = 0xffffffff;
  TStack_40._28_4_ = TStack_40.CurrentBitIndex;
  TStack_40.BaseBitIndex = iVar13;
  if (TStack_40.CurrentBitIndex < iVar4) {
    do {
      pFVar2 = (FScriptContainerElement *)
               (this->_padding_ + (longlong)TStack_40.CurrentBitIndex * 0x18);
      pFVar10 = (__return_storage_ptr__->AllocatorInstance).Data;
      if (((pFVar10 <= pFVar2) && (pFVar2 < pFVar10 + (longlong)*piVar1 * 0x10)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        pTVar8 = (TArray<TSharedPtr<FString,1>,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
        return pTVar8;
      }
      iVar12 = __return_storage_ptr__->ArrayNum;
      if (iVar12 == *piVar1) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
      }
      __return_storage_ptr__->ArrayNum = iVar12 + 1;
      pFVar10 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar12 * 0x10;
      *(undefined8 *)pFVar10 = *(undefined8 *)pFVar2;
      lVar9 = *(longlong *)(pFVar2 + 8);
      *(longlong *)(pFVar10 + 8) = lVar9;
      if (lVar9 != 0) {
        LOCK();
        *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
        UNLOCK();
      }
      TStack_40.UnvisitedBitMask = TStack_40.UnvisitedBitMask & ~TStack_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_40);
    } while (TStack_40.CurrentBitIndex < (int)*(longlong *)&(TStack_40.Array)->NumBits);
  }
  return __return_storage_ptr__;
}

// GetTableViewMode @ 142949c70

Type __thiscall
SListView<TSharedPtr<FString,1>_>::GetTableViewMode(SListView<TSharedPtr<FString,1>_> *this)

{
  return this[-1].PinnedWidgetGenerator.ItemsToBeCleanedUp.ArrayNum;
}

// NavigationSelect @ 14295c970

/* WARNING: Removing unreachable block (ram,0x00014295c9e1) */
/* WARNING: Removing unreachable block (ram,0x00014295ca06) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SListView<TSharedPtr<FString,1>_>::NavigationSelect
          (SListView<TSharedPtr<FString,1>_> *this,TSharedPtr<FString,1> *param_1,
          FInputEvent *param_2)

{
  FModifierKeysState *pFVar1;
  Type TVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  ushort uVar6;
  Type *pTVar7;
  atomic<int> *paVar8;
  ushort uVar9;
  longlong *plVar10;
  undefined8 uVar11;
  TOptional<TSharedPtr<FString,1>_>_u_0 local_88;
  FString *local_78;
  TReferenceControllerBase<1> *pTStack_70;
  TSharedPtr<FString,1> local_68;
  FString *local_58;
  FSharedReferencer<1> FStack_50;
  FString *local_48;
  FSharedReferencer<1> FStack_40;
  TSharedPtr<FString,1> local_38 [2];
  
  Private_FindNextSelectableOrNavigable
            (this,(TOptional<TSharedPtr<FString,1>_> *)&local_88.TypedValue,param_1);
  uVar11 = local_88.TypedValue.Object;
  if (local_88.TypedValue.Object == (FString *)0xffffffffffffffff) {
    return;
  }
  pTVar7 = TAttribute<enum_ESelectionMode::Type>::Get(&this->_padding_);
  TVar2 = *pTVar7;
  if (TVar2 == None) goto LAB_14295cc57;
  if (local_88.TypedValue.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *(atomic<int> *)((longlong)local_88.TypedValue.SharedReferenceCount.ReferenceController + 8) =
         (atomic<int>)
         ((int)*(atomic<int> *)
                ((longlong)local_88.TypedValue.SharedReferenceCount.ReferenceController + 8) + 1);
    UNLOCK();
  }
  local_78 = (this->SelectorItem).Object;
  pTStack_70 = (this->SelectorItem).SharedReferenceCount.ReferenceController;
  (this->SelectorItem).Object = (FString *)uVar11;
  (this->SelectorItem).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)local_88.TypedValue.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_70);
  uVar11 = local_88.TypedValue.Object;
  uVar3 = param_2->UserIndex;
  if ((local_88.TypedValue.Object == (FString *)0xffffffffffffffff) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (local_88.TypedValue.SharedReferenceCount.ReferenceController ==
      (TReferenceControllerBase<1> *)0x0) {
    paVar8 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar8 = (atomic<int> *)
             ((longlong)local_88.TypedValue.SharedReferenceCount.ReferenceController + 8);
    LOCK();
    *paVar8 = (atomic<int>)((int)*paVar8 + 1);
    UNLOCK();
  }
  local_68.Object = local_88.TypedValue.Object;
  local_68.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)local_88.TypedValue.SharedReferenceCount.ReferenceController;
  this->bNavigateOnScrollIntoView = true;
  if (local_88.TypedValue.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar8 = (atomic<int>)((int)*paVar8 + 1);
    UNLOCK();
  }
  RequestScrollIntoView(this,&local_68,uVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)
             local_88.TypedValue.SharedReferenceCount.ReferenceController);
  if (*(char *)((longlong)&this->_padding_ + 3) == '\0') goto LAB_14295cc57;
  if (TVar2 == Multi) {
    uVar6 = pFVar1->bIsRightShiftDown;
    uVar9 = pFVar1->bIsLeftShiftDown;
    if ((uVar9 == 0) && (uVar6 == 0)) {
      if (pFVar1->bIsLeftControlDown == 0 && pFVar1->bIsRightControlDown == 0) goto LAB_14295caf5;
    }
    else if ((uVar9 != 0) || (uVar6 != 0)) {
      plVar10 = &this->_padding_;
      if (pFVar1->bIsLeftControlDown == 0 && pFVar1->bIsRightControlDown == 0) {
        (**(code **)(*plVar10 + 0x30))(plVar10);
      }
      pcVar4 = *(code **)(*plVar10 + 0x38);
      if (((FString *)uVar11 == (FString *)0xffffffffffffffff) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_48 = local_88.TypedValue.Object;
      FStack_40.ReferenceController =
           (TReferenceControllerBase<1> *)
           local_88.TypedValue.SharedReferenceCount.ReferenceController;
      if (local_88.TypedValue.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *(atomic<int> *)((longlong)local_88.TypedValue.SharedReferenceCount.ReferenceController + 8)
             = (atomic<int>)
               ((int)*(atomic<int> *)
                      ((longlong)local_88.TypedValue.SharedReferenceCount.ReferenceController + 8) +
               1);
        UNLOCK();
      }
      (*pcVar4)(plVar10,&local_48);
      (**(code **)(*plVar10 + 0x40))(plVar10,1);
      goto LAB_14295cc57;
    }
    plVar10 = &this->_padding_;
    pcVar4 = *(code **)(*plVar10 + 0x28);
    if (((FString *)uVar11 == (FString *)0xffffffffffffffff) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_58 = local_88.TypedValue.Object;
    FStack_50.ReferenceController =
         (TReferenceControllerBase<1> *)local_88.TypedValue.SharedReferenceCount.ReferenceController
    ;
    if (local_88.TypedValue.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *(atomic<int> *)((longlong)local_88.TypedValue.SharedReferenceCount.ReferenceController + 8) =
           (atomic<int>)
           ((int)*(atomic<int> *)
                  ((longlong)local_88.TypedValue.SharedReferenceCount.ReferenceController + 8) + 1);
      UNLOCK();
    }
    (*pcVar4)(plVar10,&local_58,1);
    (**(code **)(*plVar10 + 0x40))(plVar10,1);
  }
  else {
LAB_14295caf5:
    if (((FString *)uVar11 == (FString *)0xffffffffffffffff) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_38[0].Object = local_88.TypedValue.Object;
    local_38[0].SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)local_88.TypedValue.SharedReferenceCount.ReferenceController
    ;
    if (local_88.TypedValue.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *(atomic<int> *)((longlong)local_88.TypedValue.SharedReferenceCount.ReferenceController + 8) =
           (atomic<int>)
           ((int)*(atomic<int> *)
                  ((longlong)local_88.TypedValue.SharedReferenceCount.ReferenceController + 8) + 1);
      UNLOCK();
    }
    Private_SetSelection(this,local_38,OnNavigation);
  }
LAB_14295cc57:
  if ((FString *)uVar11 != (FString *)0xffffffffffffffff) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)
               local_88.TypedValue.SharedReferenceCount.ReferenceController);
  }
  return;
}

// NavigationSelect @ 14295cca0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SListView<TSharedPtr<FString,1>_>::NavigationSelect
          (SListView<TSharedPtr<FString,1>_> *this,TSharedPtr<FString,1> *param_1,
          FNavigationEvent *param_2)

{
  FInputEvent local_38;
  
  local_38._padding_ = (longlong)&___7FInputEvent__6B_;
  local_38.ModifierKeys = *(FModifierKeysState *)&param_2->_padding_;
  local_38.bIsRepeat = *(bool *)((longlong)&param_2->_padding_ + 2);
  local_38.UserIndex = *(uint *)((longlong)&param_2->_padding_ + 4);
  local_38.InputDeviceId.InternalId = (int)param_2->_padding_;
  local_38.EventPath = (FWidgetPath *)param_2->_padding_;
  local_38.EventTimestamp = param_2->_padding_;
  (**(code **)(this->_padding_ + 0x2e8))(this,param_1,&local_38);
  FInputEvent::~FInputEvent(&local_38);
  if (this->bNavigateOnScrollIntoView != false) {
    this->NavigationTypeOnScrollIntoView = param_2->NavigationType;
    return;
  }
  this->NavigationTypeOnScrollIntoView = Invalid;
  return;
}

// NotifyFinishedScrolling @ 14295cd40

void __thiscall
SListView<TSharedPtr<FString,1>_>::NotifyFinishedScrolling(SListView<TSharedPtr<FString,1>_> *this)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnFinishedScrolling,
             &local_28);
  if ((*(int *)&(this->OnFinishedScrolling).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->OnFinishedScrolling).field_0x8, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// NotifyItemScrolledIntoView @ 14295cd90

void __thiscall
SListView<TSharedPtr<FString,1>_>::NotifyItemScrolledIntoView
          (SListView<TSharedPtr<FString,1>_> *this)

{
  FSharedReferencer<1> *this_00;
  EUINavigation EVar1;
  FString *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  TSharedRef<ITableRow,1> *pTVar7;
  undefined8 *puVar8;
  TReferenceControllerBase<1> *pTVar9;
  ITableRow *local_d8;
  TReferenceControllerBase<1> *local_d0;
  TSharedPtr<FString_const_,1> local_c8;
  TSharedPtr<SWidget,1> local_b8;
  undefined8 local_a8;
  FSharedReferencer<1> FStack_a0;
  FString *local_98;
  TReferenceControllerBase<1> *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  FString *local_68;
  TReferenceControllerBase<1> *pTStack_60;
  undefined1 local_58 [8];
  TReferenceControllerBase<1> *local_50;
  FReadAccessScope local_48;
  
  pFVar2 = (this->ItemToNotifyWhenInView).Object;
  if (pFVar2 != (FString *)0x0) {
    this_00 = &(this->ItemToNotifyWhenInView).SharedReferenceCount;
    pTVar3 = this_00->ReferenceController;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_c8.Object = pFVar2;
    local_c8.SharedReferenceCount.ReferenceController = pTVar3;
    pTVar7 = TMapBase<TSharedPtr<FString,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<FString,1>,TSharedRef<ITableRow,1>,0>_>
             ::Find((TMapBase<TSharedPtr<FString,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<FString,1>,TSharedRef<ITableRow,1>,0>_>
                     *)&(this->WidgetGenerator).ItemToWidgetMap,&local_c8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    if (pTVar7 == (TSharedRef<ITableRow,1> *)0x0) {
      local_70 = 0;
      local_d8 = (ITableRow *)0x0;
      local_d0 = (TReferenceControllerBase<1> *)0x0;
      local_78 = 0;
    }
    else {
      local_d0 = (pTVar7->SharedReferenceCount).ReferenceController;
      local_d8 = pTVar7->Object;
      if (local_d0 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_d0->SharedReferenceCount = (atomic<int>)((int)local_d0->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_80 = 0;
      local_88 = 0;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    if (local_d8 != (ITableRow *)0x0) {
      if (this->bNavigateOnScrollIntoView != false) {
        if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_68 = (this->SelectorItem).Object;
        pTStack_60 = (this->SelectorItem).SharedReferenceCount.ReferenceController;
        (this->SelectorItem).Object = pFVar2;
        (this->SelectorItem).SharedReferenceCount.ReferenceController = pTVar3;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (pTStack_60);
        EVar1 = this->NavigationTypeOnScrollIntoView;
        if ((local_d8 == (ITableRow *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        puVar8 = (undefined8 *)(**(code **)((longlong)*local_d8 + 0x58))(local_d8,local_58);
        local_b8.Object = (SWidget *)*puVar8;
        local_b8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)puVar8[1]
        ;
        if (local_b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        STableViewBase::NavigateToWidget
                  ((STableViewBase *)this,this->UserRequestingScrollIntoView,&local_b8,FocusedWidget
                   ,EVar1);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_b8.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_50);
        this->NavigationTypeOnScrollIntoView = Invalid;
      }
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this->OnItemScrolledIntoView,&local_48);
      if ((*(int *)&(this->OnItemScrolledIntoView).field_0x10 == 0) ||
         (plVar4 = *(longlong **)&(this->OnItemScrolledIntoView).field_0x8,
         plVar4 == (longlong *)0x0)) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_48);
        pTVar9 = pTVar3;
      }
      else {
        local_98 = pFVar2;
        local_90 = pTVar3;
        (**(code **)(*plVar4 + 0x68))(plVar4,&local_98,&local_d8);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_48);
        pTVar9 = (TReferenceControllerBase<1> *)0x0;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
    }
    this->bNavigateOnScrollIntoView = false;
    local_a8 = 0;
    FStack_a0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&this->ItemToNotifyWhenInView != (TSharedPtr<FString,1> *)&local_a8) {
      (this->ItemToNotifyWhenInView).Object = (FString *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(this_00,&FStack_a0);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_a0.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_d0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  return;
}

// OnKeyDown @ 1429668f0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SListView<TSharedPtr<FString,1>_>::OnKeyDown
          (SListView<TSharedPtr<FString,1>_> *this,FReply *__return_storage_ptr__,FGeometry *param_1
          ,FKeyEvent *param_2)

{
  bool bVar1;
  char cVar2;
  longlong *plVar3;
  FReadAccessScope local_108;
  FReply local_e8;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnKeyDownHandler,
             &local_108);
  if (((*(int *)&(this->OnKeyDownHandler).field_0x10 == 0) ||
      (plVar3 = *(longlong **)&(this->OnKeyDownHandler).field_0x8, plVar3 == (longlong *)0x0)) ||
     (cVar2 = (**(code **)(*plVar3 + 0x38))(), cVar2 == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_108);
  if (bVar1) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnKeyDownHandler,
               &local_108);
    if (*(int *)&(this->OnKeyDownHandler).field_0x10 == 0) {
      plVar3 = (longlong *)0x0;
    }
    else {
      plVar3 = *(longlong **)&(this->OnKeyDownHandler).field_0x8;
    }
    (**(code **)(*plVar3 + 0x60))(plVar3,&local_e8,param_1,param_2);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_108);
    if ((char)local_e8._padding_ != '\0') {
      FReply::FReply(__return_storage_ptr__,&local_e8);
      FReply::~FReply(&local_e8);
      return __return_storage_ptr__;
    }
    FReply::~FReply(&local_e8);
  }
  OnKeyDown_Internal(this,__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// OnKeyDown_Internal @ 1429693f0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SListView<TSharedPtr<FString,1>_>::OnKeyDown_Internal
          (SListView<TSharedPtr<FString,1>_> *this,FReply *__return_storage_ptr__,FGeometry *param_1
          ,FKeyEvent *param_2)

{
  IItemsSource<TSharedPtr<FString,1>_> *pIVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  longlong *plVar8;
  FReply *pFVar9;
  TSharedPtr<FString,1> *pTVar10;
  TSharedPtr<FString,1> *pTVar11;
  Type *pTVar12;
  TSharedRef<ITableRow,1> *pTVar13;
  undefined8 *puVar14;
  TReferenceControllerBase<1> *pTVar15;
  ITableRow *pIVar16;
  uint uVar17;
  FString *pFVar18;
  int iVar19;
  TReferenceControllerBase<1> *pTVar20;
  TReferenceControllerBase<1> *pTVar21;
  int iVar22;
  longlong lVar23;
  bool bVar24;
  float fVar25;
  undefined4 local_res8;
  undefined4 uStackX_c;
  TArrayView<TSharedPtr<FString,1>_const_,int> local_100;
  FString *local_e8;
  TReferenceControllerBase<1> *pTStack_e0;
  TSharedPtr<FString_const_,1> local_d8;
  FString *local_c8;
  TReferenceControllerBase<1> *local_c0;
  longlong local_b8;
  undefined4 uStack_b0;
  undefined8 local_a8;
  TReferenceControllerBase<1> *local_a0;
  undefined8 local_98;
  TReferenceControllerBase<1> *local_90;
  undefined8 local_88;
  longlong local_80;
  FString *local_78;
  TReferenceControllerBase<1> *pTStack_70;
  FString *local_68;
  TReferenceControllerBase<1> *pTStack_60;
  TSharedPtr<FString,1> local_58 [2];
  
  pTVar21 = (TReferenceControllerBase<1> *)0x0;
  pIVar1 = (this->ViewSource).Ptr;
  iVar22 = 0;
  if (pIVar1 == (IItemsSource<TSharedPtr<FString,1>_> *)0x0) {
    local_b8 = 0;
    plVar8 = &local_b8;
    uStack_b0 = 0;
  }
  else {
    plVar8 = (longlong *)(**(code **)((longlong)*pIVar1 + 8))();
  }
  local_100.DataPtr = (TSharedPtr<FString,1> *)*plVar8;
  local_100._8_8_ = plVar8[1];
  iVar19 = (int)plVar8[1];
  if ((iVar19 < 1) || ((param_2->_padding_ & 0x30) != 0)) {
LAB_142969aff:
    STableViewBase::OnKeyDown((STableViewBase *)this,__return_storage_ptr__,param_1,param_2);
  }
  else {
    pTVar20 = (param_2->Key).KeyDetails.SharedReferenceCount.ReferenceController;
    FVar2 = (param_2->Key).KeyName;
    local_res8 = 0;
    if (pTVar20 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar20->SharedReferenceCount = (atomic<int>)((int)pTVar20->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar24 = FVar2 == EKeys::Home.KeyName;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar20);
    if (bVar24) {
      pTVar10 = local_100.DataPtr;
      if (iVar19 < 1) {
        bVar24 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        pTVar10 = local_100.DataPtr;
        if (bVar24) {
code_r0x0001429694d0:
          pcVar3 = (code *)swi(3);
          pFVar9 = (FReply *)(*pcVar3)();
          return pFVar9;
        }
      }
LAB_1429694db:
      pFVar18 = pTVar10->Object;
      pTVar20 = (pTVar10->SharedReferenceCount).ReferenceController;
LAB_142969700:
      if (pTVar20 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar20->SharedReferenceCount = (atomic<int>)((int)pTVar20->SharedReferenceCount + 1);
        UNLOCK();
      }
LAB_14296970b:
      local_res8 = 1;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      if (pFVar18 == (FString *)0x0) goto LAB_142969750;
      if (pTVar20 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar20->SharedReferenceCount = (atomic<int>)((int)pTVar20->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_c8 = pFVar18;
      local_c0 = pTVar20;
      (**(code **)(this->_padding_ + 0x2e8))(this,&local_c8,param_2);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_c0);
    }
    else {
      pTVar20 = (param_2->Key).KeyDetails.SharedReferenceCount.ReferenceController;
      FVar2 = (param_2->Key).KeyName;
      if (pTVar20 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar20->SharedReferenceCount = (atomic<int>)((int)pTVar20->SharedReferenceCount + 1);
        UNLOCK();
      }
      bVar24 = FVar2 == EKeys::End.KeyName;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar20);
      if (bVar24) {
        pTVar10 = TArrayView<TSharedPtr<FString,1>_const_,int>::Last(&local_100,0);
        pTVar20 = (pTVar10->SharedReferenceCount).ReferenceController;
        pFVar18 = pTVar10->Object;
        pTVar10 = local_100.DataPtr;
        if (pTVar20 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar20->SharedReferenceCount = (atomic<int>)((int)pTVar20->SharedReferenceCount + 1);
          UNLOCK();
        }
        goto LAB_14296970b;
      }
      pTVar20 = (param_2->Key).KeyDetails.SharedReferenceCount.ReferenceController;
      FVar2 = (param_2->Key).KeyName;
      if (pTVar20 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar20->SharedReferenceCount = (atomic<int>)((int)pTVar20->SharedReferenceCount + 1);
        UNLOCK();
      }
      bVar24 = FVar2 == EKeys::PageUp.KeyName;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar20);
      pTVar10 = local_100.DataPtr;
      if (bVar24) {
        pFVar18 = (this->SelectorItem).Object;
        if (pFVar18 != (FString *)0x0) {
          pTVar20 = (this->SelectorItem).SharedReferenceCount.ReferenceController;
          if (pTVar20 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar20->SharedReferenceCount = (atomic<int>)((int)pTVar20->SharedReferenceCount + 1);
            UNLOCK();
          }
          for (pTVar11 = local_100.DataPtr; pTVar11 != local_100.DataPtr + iVar19;
              pTVar11 = pTVar11 + 1) {
            if (pTVar11->Object == pFVar18) {
              iVar22 = (int)((longlong)pTVar11 - (longlong)local_100.DataPtr >> 4);
              goto LAB_1429695a5;
            }
          }
          iVar22 = -1;
LAB_1429695a5:
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar20);
        }
        fVar25 = (float)(**(code **)(this->_padding_ + 0x268))(this);
        iVar6 = (**(code **)(this->_padding_ + 0x270))(this);
        iVar6 = (int)fVar25 - (int)fVar25 % iVar6;
        if (iVar22 < iVar6) {
          if (iVar19 < 1) {
            bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               );
            if (bVar24) goto code_r0x0001429694d0;
          }
          goto LAB_1429694db;
        }
        pTVar11 = TArrayView<TSharedPtr<FString,1>_const_,int>::operator[]
                            (&local_100,iVar22 - iVar6);
LAB_1429696f9:
        pFVar18 = pTVar11->Object;
        pTVar20 = (pTVar11->SharedReferenceCount).ReferenceController;
        goto LAB_142969700;
      }
      pTVar20 = (param_2->Key).KeyDetails.SharedReferenceCount.ReferenceController;
      FVar2 = (param_2->Key).KeyName;
      if (pTVar20 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar20->SharedReferenceCount = (atomic<int>)((int)pTVar20->SharedReferenceCount + 1);
        UNLOCK();
      }
      bVar24 = FVar2 == EKeys::PageDown.KeyName;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar20);
      pTVar10 = local_100.DataPtr;
      pTVar20 = pTVar21;
      if (bVar24) {
        pFVar18 = (this->SelectorItem).Object;
        if (pFVar18 != (FString *)0x0) {
          pTVar20 = (this->SelectorItem).SharedReferenceCount.ReferenceController;
          if (pTVar20 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar20->SharedReferenceCount = (atomic<int>)((int)pTVar20->SharedReferenceCount + 1);
            UNLOCK();
          }
          for (pTVar11 = local_100.DataPtr; pTVar11 != local_100.DataPtr + iVar19;
              pTVar11 = pTVar11 + 1) {
            if (pTVar11->Object == pFVar18) {
              iVar22 = (int)((longlong)pTVar11 - (longlong)local_100.DataPtr >> 4);
              goto LAB_1429696a5;
            }
          }
          iVar22 = -1;
LAB_1429696a5:
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar20);
        }
        fVar25 = (float)(**(code **)(this->_padding_ + 0x268))(this);
        iVar6 = (**(code **)(this->_padding_ + 0x270))(this);
        iVar6 = (int)fVar25 - (int)fVar25 % iVar6;
        if (iVar22 < iVar19 - iVar6) {
          pTVar11 = TArrayView<TSharedPtr<FString,1>_const_,int>::operator[]
                              (&local_100,iVar6 + iVar22);
        }
        else {
          pTVar11 = TArrayView<TSharedPtr<FString,1>_const_,int>::Last(&local_100,0);
        }
        goto LAB_1429696f9;
      }
LAB_142969750:
      if ((this->bHandleSpacebarSelection == false) ||
         ((this->SelectorItem).Object == (FString *)0x0)) {
        pTVar15 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_c,local_res8);
LAB_142969790:
        bVar24 = false;
      }
      else {
        pTVar15 = (param_2->Key).KeyDetails.SharedReferenceCount.ReferenceController;
        FVar2 = (param_2->Key).KeyName;
        if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
          UNLOCK();
        }
        pTVar21 = (TReferenceControllerBase<1> *)&DAT_00000001;
        if (FVar2 != EKeys::SpaceBar.KeyName) goto LAB_142969790;
        bVar24 = true;
      }
      if (pTVar21 != (TReferenceControllerBase<1> *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15)
        ;
      }
      bVar4 = false;
      if (bVar24) {
        local_e8 = (this->SelectorItem).Object;
        pTStack_e0 = (this->SelectorItem).SharedReferenceCount.ReferenceController;
        if (pTStack_e0 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTStack_e0->SharedReferenceCount =
               (atomic<int>)((int)pTStack_e0->SharedReferenceCount + 1);
          UNLOCK();
        }
        if (((param_2->_padding_ & 0xc) == 0) &&
           (pTVar12 = TAttribute<enum_ESelectionMode::Type>::Get(&this->_padding_),
           *pTVar12 != SingleToggle)) {
          plVar8 = &this->_padding_;
          cVar5 = (**(code **)(*plVar8 + 0x10))(plVar8,&local_e8);
          if (cVar5 == '\0') {
            local_78 = local_e8;
            pTStack_70 = pTStack_e0;
            pcVar3 = *(code **)(*plVar8 + 0x28);
            if (pTStack_e0 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTStack_e0->SharedReferenceCount =
                   (atomic<int>)((int)pTStack_e0->SharedReferenceCount + 1);
              UNLOCK();
            }
            (*pcVar3)(plVar8,&local_78,1);
            lVar23 = *plVar8;
            goto LAB_1429698a2;
          }
          local_res8 = 0;
        }
        else {
          pcVar3 = *(code **)(this->_padding_ + 0x28);
          cVar5 = (**(code **)(this->_padding_ + 0x10))(&this->_padding_,&local_e8);
          local_68 = local_e8;
          pTStack_60 = pTStack_e0;
          if (pTStack_e0 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTStack_e0->SharedReferenceCount =
                 (atomic<int>)((int)pTStack_e0->SharedReferenceCount + 1);
            UNLOCK();
          }
          (*pcVar3)(&this->_padding_,&local_68,cVar5 == '\0',1);
          lVar23 = this->_padding_;
LAB_1429698a2:
          (**(code **)(lVar23 + 0x40))(&this->_padding_,0);
          local_res8 = 1;
        }
        TSharedPtr<FString,1>::operator=(&this->RangeSelectionStart,&this->SelectorItem);
        pTVar21 = pTStack_e0;
        local_d8.Object = local_e8;
        local_d8.SharedReferenceCount.ReferenceController = pTStack_e0;
        if (pTStack_e0 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTStack_e0->SharedReferenceCount =
               (atomic<int>)((int)pTStack_e0->SharedReferenceCount + 1);
          UNLOCK();
          LOCK();
          pTStack_e0->SharedReferenceCount =
               (atomic<int>)((int)pTStack_e0->SharedReferenceCount + 1);
          UNLOCK();
        }
        pTVar13 = TMapBase<TSharedPtr<FString,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<FString,1>,TSharedRef<ITableRow,1>,0>_>
                  ::Find((TMapBase<TSharedPtr<FString,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<FString,1>,TSharedRef<ITableRow,1>,0>_>
                          *)&(this->WidgetGenerator).ItemToWidgetMap,&local_d8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar21)
        ;
        if (pTVar13 == (TSharedRef<ITableRow,1> *)0x0) {
          bVar4 = false;
          bVar24 = true;
          puVar14 = &local_a8;
          pIVar16 = (ITableRow *)0x0;
          local_a0 = (TReferenceControllerBase<1> *)0x0;
        }
        else {
          local_90 = (pTVar13->SharedReferenceCount).ReferenceController;
          bVar4 = true;
          bVar24 = false;
          pIVar16 = pTVar13->Object;
          if (local_90 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            local_90->SharedReferenceCount = (atomic<int>)((int)local_90->SharedReferenceCount + 1);
            UNLOCK();
          }
          puVar14 = &local_98;
        }
        pTVar21 = (TReferenceControllerBase<1> *)puVar14[1];
        puVar14[1] = 0;
        *puVar14 = 0;
        if (bVar24) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_a0);
        }
        if (bVar4) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_90);
        }
        if (pIVar16 == (ITableRow *)0x0) {
          uVar17 = *(uint *)((longlong)&param_2->_padding_ + 4);
          local_58[0].Object = local_e8;
          local_58[0].SharedReferenceCount.ReferenceController = pTStack_e0;
          if (pTStack_e0 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTStack_e0->SharedReferenceCount =
                 (atomic<int>)((int)pTStack_e0->SharedReferenceCount + 1);
            UNLOCK();
          }
          RequestScrollIntoView(this,local_58,uVar17);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar21)
        ;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (pTStack_e0);
      }
      else {
        lVar23 = param_2->_padding_;
        if ((((lVar23 & 3) == 0) && ((lVar23 & 0x30) == 0)) && ((lVar23 & 0xc) != 0)) {
          pTVar21 = (param_2->Key).KeyDetails.SharedReferenceCount.ReferenceController;
          bVar4 = true;
          FVar2 = (param_2->Key).KeyName;
          if (pTVar21 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar21->SharedReferenceCount = (atomic<int>)((int)pTVar21->SharedReferenceCount + 1);
            UNLOCK();
          }
          if ((FVar2 != EKeys::A.KeyName) ||
             (pTVar12 = TAttribute<enum_ESelectionMode::Type>::Get(&this->_padding_),
             *pTVar12 != Multi)) goto LAB_142969a0b;
          bVar24 = true;
        }
        else {
          pTVar21 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_c,local_res8);
LAB_142969a0b:
          bVar24 = false;
        }
        if (bVar4) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar21);
        }
        if (bVar24) {
          plVar8 = &this->_padding_;
          (**(code **)(*plVar8 + 0x30))(plVar8);
          uVar17 = 0;
          if (0 < iVar19) {
            lVar23 = 0;
            do {
              pcVar3 = *(code **)(*plVar8 + 0x28);
              uVar7 = 0;
              if ((int)uVar17 < iVar19) {
                uVar7 = ~uVar17 >> 0x1f;
              }
              if ((uVar7 == 0) &&
                 (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar24)) {
                pcVar3 = (code *)swi(3);
                pFVar9 = (FReply *)(*pcVar3)();
                return pFVar9;
              }
              local_88 = *(undefined8 *)((longlong)&pTVar10->Object + lVar23);
              local_80 = *(longlong *)
                          ((longlong)&(pTVar10->SharedReferenceCount).ReferenceController + lVar23);
              if (local_80 != 0) {
                LOCK();
                *(int *)(local_80 + 8) = *(int *)(local_80 + 8) + 1;
                UNLOCK();
              }
              (*pcVar3)(plVar8,&local_88,1,0);
              uVar17 = uVar17 + 1;
              lVar23 = lVar23 + 0x10;
            } while ((int)uVar17 < iVar19);
          }
          (**(code **)(*plVar8 + 0x40))(plVar8,0);
          goto LAB_1429699a4;
        }
      }
      if ((char)local_res8 == '\0') {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar20)
        ;
        goto LAB_142969aff;
      }
    }
LAB_1429699a4:
    FReply::FReply(__return_storage_ptr__,true);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar20);
  }
  return __return_storage_ptr__;
}

// OnMouseButtonDown @ 14296a740

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SListView<TSharedPtr<FString,1>_>::OnMouseButtonDown
          (SListView<TSharedPtr<FString,1>_> *this,FReply *__return_storage_ptr__,FGeometry *param_1
          ,FPointerEvent *param_2)

{
  longlong *plVar1;
  FName FVar2;
  bool bVar3;
  int iVar4;
  Type *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  uint uStackX_c;
  
  bVar7 = false;
  if (this->bClearSelectionOnClick == false) {
LAB_14296a7b2:
    pTVar6 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar5 = TAttribute<enum_ESelectionMode::Type>::Get(&this->_padding_);
    if (*pTVar5 == None) goto LAB_14296a7b2;
    pTVar6 = (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
    FVar2 = (param_2->EffectingButton).KeyName;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar7 = true;
    if (((FVar2 == EKeys::LeftMouseButton.KeyName) && ((param_2->_padding_ & 0xc) == 0)) &&
       ((param_2->_padding_ & 3) == 0)) {
      bVar3 = true;
      goto LAB_14296a7ba;
    }
  }
  bVar3 = false;
LAB_14296a7ba:
  if (bVar7) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
  if (bVar3) {
    plVar1 = &this->_padding_;
    iVar4 = (**(code **)(*plVar1 + 0x70))(plVar1);
    if (0 < iVar4) {
      (**(code **)(*plVar1 + 0x30))(plVar1);
      (**(code **)(*plVar1 + 0x40))(plVar1,2);
    }
    FReply::FReply(__return_storage_ptr__,true);
  }
  else {
    STableViewBase::OnMouseButtonDown((STableViewBase *)this,__return_storage_ptr__,param_1,param_2)
    ;
  }
  return __return_storage_ptr__;
}

// OnMouseButtonUp @ 14296d2f0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SListView<TSharedPtr<FString,1>_>::OnMouseButtonUp
          (SListView<TSharedPtr<FString,1>_> *this,FReply *__return_storage_ptr__,FGeometry *param_1
          ,FPointerEvent *param_2)

{
  longlong *plVar1;
  FName FVar2;
  bool bVar3;
  int iVar4;
  Type *pTVar5;
  bool bVar6;
  TReferenceControllerBase<1> *pTVar7;
  uint uStackX_c;
  
  bVar6 = false;
  if (this->bClearSelectionOnClick == false) {
LAB_14296d36e:
    pTVar7 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar5 = TAttribute<enum_ESelectionMode::Type>::Get(&this->_padding_);
    if (*pTVar5 == None) goto LAB_14296d36e;
    pTVar7 = (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
    FVar2 = (param_2->EffectingButton).KeyName;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar6 = true;
    if (((FVar2 == EKeys::RightMouseButton.KeyName) && ((param_2->_padding_ & 0xc) == 0)) &&
       ((param_2->_padding_ & 3) == 0)) {
      bVar3 = STableViewBase::IsRightClickScrolling((STableViewBase *)this);
      if (!bVar3) {
        bVar3 = true;
        goto LAB_14296d376;
      }
    }
  }
  bVar3 = false;
LAB_14296d376:
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  }
  if (bVar3) {
    plVar1 = &this->_padding_;
    iVar4 = (**(code **)(*plVar1 + 0x70))(plVar1);
    if (0 < iVar4) {
      (**(code **)(*plVar1 + 0x30))(plVar1);
      (**(code **)(*plVar1 + 0x40))(plVar1,2);
    }
  }
  STableViewBase::OnMouseButtonUp((STableViewBase *)this,__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// OnNavigation @ 142978260

/* WARNING: Removing unreachable block (ram,0x0001429784ae) */
/* WARNING: Removing unreachable block (ram,0x0001429784d3) */
/* WARNING: Removing unreachable block (ram,0x00014297850f) */

FNavigationReply * __thiscall
SListView<TSharedPtr<FString,1>_>::OnNavigation
          (SListView<TSharedPtr<FString,1>_> *this,FNavigationReply *__return_storage_ptr__,
          FGeometry *param_1,FNavigationEvent *param_2)

{
  EUINavigation EVar1;
  IItemsSource<TSharedPtr<FString,1>_> *pIVar2;
  FString *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  longlong lVar6;
  bool bVar7;
  int iVar8;
  longlong *plVar9;
  FNavigationReply *pFVar10;
  TSharedPtr<FString,1> *pTVar11;
  int iVar12;
  TSharedPtr<FString,1> *pTVar13;
  int iVar14;
  int iVar15;
  TOptional<TSharedPtr<FString,1>_>_u_0 local_88;
  TArrayView<TSharedPtr<FString,1>_const_,int> local_78;
  TSharedPtr<SWidget,1> local_68;
  undefined1 local_58 [32];
  
  this->NavigationTypeOnScrollIntoView = Invalid;
  pIVar2 = (this->ViewSource).Ptr;
  if (((pIVar2 == (IItemsSource<TSharedPtr<FString,1>_> *)0x0) ||
      (this->bHandleDirectionalNavigation == false)) ||
     ((this->bHandleGamepadEvents == false && (param_2->NavigationGenesis == Controller))))
  goto LAB_142978519;
  plVar9 = (longlong *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_58);
  pTVar11 = (TSharedPtr<FString,1> *)*plVar9;
  lVar6 = plVar9[1];
  local_78.DataPtr = pTVar11;
  local_78._8_8_ = lVar6;
  iVar8 = (**(code **)(this->_padding_ + 0x270))(this);
  pFVar3 = (this->SelectorItem).Object;
  iVar14 = (int)lVar6;
  if (pFVar3 == (FString *)0x0) {
    iVar12 = -1;
  }
  else {
    pTVar4 = (this->SelectorItem).SharedReferenceCount.ReferenceController;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    for (pTVar13 = pTVar11; pTVar13 != pTVar11 + iVar14; pTVar13 = pTVar13 + 1) {
      if (pTVar13->Object == pFVar3) {
        iVar12 = (int)((longlong)pTVar13 - (longlong)pTVar11 >> 4);
        goto LAB_14297834b;
      }
    }
    iVar12 = -1;
LAB_14297834b:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  }
  iVar15 = *(int *)((longlong)&this->_padding_ + 4);
  EVar1 = param_2->NavigationType;
  if (iVar15 == 1) {
    if (EVar1 != Up) {
      if (EVar1 != Down) goto LAB_142978519;
      goto LAB_142978399;
    }
LAB_142978387:
    iVar15 = iVar12 - iVar8;
LAB_142978450:
    if ((iVar15 < 0) || (iVar14 <= iVar15)) goto LAB_142978519;
  }
  else {
    if (iVar15 != 0) goto LAB_142978519;
    if (EVar1 == Left) goto LAB_142978387;
    if (EVar1 != Right) goto LAB_142978519;
LAB_142978399:
    iVar15 = iVar12 + iVar8;
    if ((iVar15 < 0) || (iVar14 <= iVar15)) {
      if (0 < iVar14) {
        if ((iVar8 < 1) &&
           (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_8670646794247470561>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\SListView.h"
                               ,0x21f,"NumItemsPerLine > 0"), bVar7)) {
          pcVar5 = (code *)swi(3);
          pFVar10 = (FNavigationReply *)(*pcVar5)();
          return pFVar10;
        }
        if (-((int)ROUND(__real_bf000000 - (float)(iVar12 + 1) * (__real_40000000 / (float)iVar8))
             >> 1) < -((int)ROUND(__real_bf000000 - ((float)iVar14 + (float)iVar14) / (float)iVar8)
                      >> 1)) {
          iVar15 = iVar14 + -1;
        }
      }
      goto LAB_142978450;
    }
  }
  if (*(char *)((longlong)&this->_padding_ + 1) != '\0') {
    pTVar11 = TArrayView<TSharedPtr<FString,1>_const_,int>::operator[](&local_78,iVar15);
    Private_FindNextSelectableOrNavigableWithIndexAndDirection
              (this,(TOptional<TSharedPtr<FString,1>_> *)&local_88.TypedValue,pTVar11,iVar15,
               iVar12 <= iVar15);
    if (local_88.TypedValue.Object != (FString *)0xffffffffffffffff) {
      (**(code **)(this->_padding_ + 0x2e0))(this,&local_88,param_2);
      local_68.Object = (SWidget *)0x0;
      local_68.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      FNavigationReply::Explicit(__return_storage_ptr__,&local_68);
      if (local_88.TypedValue.Object == (FString *)0xffffffffffffffff) {
        return __return_storage_ptr__;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)
                 local_88.TypedValue.SharedReferenceCount.ReferenceController);
      return __return_storage_ptr__;
    }
  }
LAB_142978519:
  SWidget::OnNavigation((SWidget *)this,__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// Private_ClearHighlightedItems @ 142985f90

void __thiscall
SListView<TSharedPtr<FString,1>_>::Private_ClearHighlightedItems
          (SListView<TSharedPtr<FString,1>_> *this)

{
  int *piVar1;
  longlong *this_00;
  int iVar2;
  bool bVar3;
  
  this_00 = &this->_padding_;
  bVar3 = 1 < (int)this->_padding_;
  if (!bVar3) {
    TSet<TSharedPtr<FString,1>,DefaultKeyFuncs<TSharedPtr<FString,1>,0>,FDefaultSetAllocator>::
    UnhashElements((TSet<TSharedPtr<FString,1>,DefaultKeyFuncs<TSharedPtr<FString,1>,0>,FDefaultSetAllocator>
                    *)this_00);
  }
  TSparseArray<TSparseSetElement<TSharedPtr<FString,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TSharedPtr<FString,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_00,0,(int)this->_padding_);
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  *(undefined4 *)&this->_padding_ = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)this_00,0,piVar1);
  }
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  iVar2 = *(int *)((longlong)&this->_padding_ + 4);
  *(undefined4 *)&this->_padding_ = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->_padding_,0);
  }
  if (bVar3) {
    *(undefined4 *)&this->_padding_ = 1;
    TSet<TSharedPtr<FString,1>,DefaultKeyFuncs<TSharedPtr<FString,1>,0>,FDefaultSetAllocator>::
    Rehash((TSet<TSharedPtr<FString,1>,DefaultKeyFuncs<TSharedPtr<FString,1>,0>,FDefaultSetAllocator>
            *)this_00);
  }
  return;
}

// Private_ClearSelection @ 142986050

void __thiscall
SListView<TSharedPtr<FString,1>_>::Private_ClearSelection(SListView<TSharedPtr<FString,1>_> *this)

{
  int *piVar1;
  longlong *this_00;
  int iVar2;
  bool bVar3;
  
  this_00 = &this->_padding_;
  bVar3 = 1 < (int)this->_padding_;
  if (!bVar3) {
    TSet<TSharedPtr<FString,1>,DefaultKeyFuncs<TSharedPtr<FString,1>,0>,FDefaultSetAllocator>::
    UnhashElements((TSet<TSharedPtr<FString,1>,DefaultKeyFuncs<TSharedPtr<FString,1>,0>,FDefaultSetAllocator>
                    *)this_00);
  }
  TSparseArray<TSparseSetElement<TSharedPtr<FString,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TSharedPtr<FString,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_00,0,(int)this->_padding_);
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  *(undefined4 *)&this->_padding_ = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)this_00,0,piVar1);
  }
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  iVar2 = *(int *)((longlong)&this->_padding_ + 4);
  *(undefined4 *)&this->_padding_ = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->_padding_,0);
  }
  if (bVar3) {
    *(undefined4 *)&this->_padding_ = 1;
    TSet<TSharedPtr<FString,1>,DefaultKeyFuncs<TSharedPtr<FString,1>,0>,FDefaultSetAllocator>::
    Rehash((TSet<TSharedPtr<FString,1>,DefaultKeyFuncs<TSharedPtr<FString,1>,0>,FDefaultSetAllocator>
            *)this_00);
  }
  if (*(char *)((longlong)&this->_padding_ + 1) != '\0') {
    FInertialScrollManager::ClearScrollVelocity
              ((FInertialScrollManager *)&this[-1].HighlightedItems.Elements.field_0x18,false);
  }
  return;
}

// Private_DoesItemHaveChildren @ 142986130

bool __thiscall
SListView<TSharedPtr<FString,1>_>::Private_DoesItemHaveChildren
          (SListView<TSharedPtr<FString,1>_> *this,int param_1)

{
  return false;
}

// Private_FindNextSelectableOrNavigable @ 142986140

TOptional<TSharedPtr<FString,1>_> * __thiscall
SListView<TSharedPtr<FString,1>_>::Private_FindNextSelectableOrNavigable
          (SListView<TSharedPtr<FString,1>_> *this,
          TOptional<TSharedPtr<FString,1>_> *__return_storage_ptr__,TSharedPtr<FString,1> *param_1)

{
  TDelegate<bool___cdecl(TSharedPtr<FString,1>),FDefaultDelegateUserPolicy> *this_00;
  uint uVar1;
  IItemsSource<TSharedPtr<FString,1>_> *pIVar2;
  longlong lVar3;
  code *pcVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  longlong *plVar8;
  atomic<int> *paVar9;
  TOptional<TSharedPtr<FString,1>_> *pTVar10;
  uint uVar11;
  longlong *plVar12;
  int iVar13;
  FString *pFVar14;
  TReferenceControllerBase<1> *pTVar15;
  TReferenceControllerBase<1> *pTVar16;
  longlong lVar17;
  ulonglong uVar18;
  uint uVar19;
  TSharedPtr<FString,1> local_e0;
  longlong local_d0;
  undefined4 local_c8;
  FString *local_c0;
  TReferenceControllerBase<1> *local_b8;
  FReadAccessScope local_b0;
  FReadAccessScope local_98;
  undefined1 local_80 [16];
  TIterator local_70;
  
  pTVar16 = (param_1->SharedReferenceCount).ReferenceController;
  pFVar14 = param_1->Object;
  if (pTVar16 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar16->SharedReferenceCount = (atomic<int>)((int)pTVar16->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_00 = &this->OnIsSelectableOrNavigable;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_b0);
  if (((*(int *)&(this->OnIsSelectableOrNavigable).field_0x10 == 0) ||
      (plVar8 = *(longlong **)&(this->OnIsSelectableOrNavigable).field_0x8,
      plVar8 == (longlong *)0x0)) || (cVar5 = (**(code **)(*plVar8 + 0x38))(), cVar5 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_b0);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_b0);
    if (pTVar16 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar16->SharedReferenceCount = (atomic<int>)((int)pTVar16->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_e0.Object = pFVar14;
    local_e0.SharedReferenceCount.ReferenceController = pTVar16;
    bVar6 = TDelegate<bool___cdecl(TSharedPtr<FString,1>),FDefaultDelegateUserPolicy>::Execute
                      (this_00,&local_e0);
    if (!bVar6) {
      pIVar2 = (this->ViewSource).Ptr;
      if (pIVar2 == (IItemsSource<TSharedPtr<FString,1>_> *)0x0) {
        local_d0 = 0;
        local_c8 = 0;
        plVar8 = &local_d0;
      }
      else {
        plVar8 = (longlong *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_80);
      }
      uVar1 = *(uint *)(plVar8 + 1);
      uVar18 = (ulonglong)(int)uVar1;
      plVar8 = (longlong *)*plVar8;
      for (plVar12 = plVar8; plVar12 != plVar8 + uVar18 * 2; plVar12 = plVar12 + 2) {
        if ((FString *)*plVar12 == pFVar14) {
          lVar17 = (longlong)plVar12 - (longlong)plVar8 >> 4;
          goto LAB_142986259;
        }
      }
      lVar17 = 0xffffffff;
LAB_142986259:
      uVar19 = 1;
      if (*(int *)&(this->SelectedItems).Elements.field_0x8 -
          *(int *)&(this->SelectedItems).Elements.field_0x34 == 1) {
        TSet<TSharedPtr<FString,1>,DefaultKeyFuncs<TSharedPtr<FString,1>,0>,FDefaultSetAllocator>::
        TIterator::TIterator(&local_70,&this->SelectedItems);
        pTVar15 = *(TReferenceControllerBase<1> **)
                   (*(longlong *)local_70._padding_ + 8 + (longlong)local_70._padding_._4_4_ * 0x18)
        ;
        lVar3 = *(longlong *)
                 (*(longlong *)local_70._padding_ + (longlong)local_70._padding_._4_4_ * 0x18);
        if (pTVar15 == (TReferenceControllerBase<1> *)0x0) {
          paVar9 = (atomic<int> *)&DAT_00000008;
        }
        else {
          paVar9 = &pTVar15->SharedReferenceCount;
          LOCK();
          *paVar9 = (atomic<int>)((int)*paVar9 + 1);
          UNLOCK();
        }
        uVar19 = 1;
        if (lVar3 != 0) {
          plVar12 = plVar8;
          if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            *paVar9 = (atomic<int>)((int)*paVar9 + 1);
            UNLOCK();
          }
          for (; plVar12 != plVar8 + uVar18 * 2; plVar12 = plVar12 + 2) {
            if (*plVar12 == lVar3) {
              iVar13 = (int)((longlong)plVar12 - (longlong)plVar8 >> 4);
              goto LAB_1429862f7;
            }
          }
          iVar13 = -1;
LAB_1429862f7:
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar15);
          uVar19 = (uint)(iVar13 < (int)lVar17);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15)
        ;
        uVar18 = (ulonglong)uVar1;
      }
      pTVar15 = pTVar16;
      while( true ) {
        uVar11 = (int)lVar17 + -1 + uVar19 * 2;
        lVar17 = (longlong)(int)uVar11;
        if (((int)uVar11 < 0) || ((int)uVar18 <= (int)uVar11)) break;
        uVar7 = 0;
        if ((int)uVar11 < (int)uVar18) {
          uVar7 = ~uVar11 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          pTVar10 = (TOptional<TSharedPtr<FString,1>_> *)(*pcVar4)();
          return pTVar10;
        }
        pTVar16 = (TReferenceControllerBase<1> *)plVar8[lVar17 * 2 + 1];
        pFVar14 = (FString *)plVar8[lVar17 * 2];
        if (pTVar16 == (TReferenceControllerBase<1> *)0x0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar15);
        }
        else {
          LOCK();
          pTVar16->SharedReferenceCount = (atomic<int>)((int)pTVar16->SharedReferenceCount + 1);
          UNLOCK();
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar15);
          LOCK();
          pTVar16->SharedReferenceCount = (atomic<int>)((int)pTVar16->SharedReferenceCount + 1);
          UNLOCK();
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_98);
        if (*(int *)&(this->OnIsSelectableOrNavigable).field_0x10 == 0) {
          plVar12 = (longlong *)0x0;
        }
        else {
          plVar12 = *(longlong **)&(this->OnIsSelectableOrNavigable).field_0x8;
        }
        local_c0 = pFVar14;
        local_b8 = pTVar16;
        cVar5 = (**(code **)(*plVar12 + 0x60))(plVar12,&local_c0);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_98);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        if (cVar5 != '\0') goto LAB_14298644f;
        uVar18 = (ulonglong)uVar1;
        pTVar15 = pTVar16;
      }
      (__return_storage_ptr__->field0_0x0).TypedValue.Object = (FString *)0xffffffffffffffff;
      (__return_storage_ptr__->field0_0x0).TypedValue.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      goto LAB_14298648e;
    }
  }
LAB_14298644f:
  (__return_storage_ptr__->field0_0x0).TypedValue.Object = pFVar14;
  *(TReferenceControllerBase<1> **)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = pTVar16;
  if (pTVar16 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar16->SharedReferenceCount = (atomic<int>)((int)pTVar16->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar15 = pTVar16;
  if (((__return_storage_ptr__->field0_0x0).TypedValue.Object == (FString *)0xffffffffffffffff) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        ), bVar6)) {
    pcVar4 = (code *)swi(3);
    pTVar10 = (TOptional<TSharedPtr<FString,1>_> *)(*pcVar4)();
    return pTVar10;
  }
LAB_14298648e:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
  return __return_storage_ptr__;
}

// Private_FindNextSelectableOrNavigableWithIndexAndDirection @ 1429864d0

TOptional<TSharedPtr<FString,1>_> * __thiscall
SListView<TSharedPtr<FString,1>_>::Private_FindNextSelectableOrNavigableWithIndexAndDirection
          (SListView<TSharedPtr<FString,1>_> *this,
          TOptional<TSharedPtr<FString,1>_> *__return_storage_ptr__,TSharedPtr<FString,1> *param_1,
          int param_2,bool param_3)

{
  IItemsSource<TSharedPtr<FString,1>_> *pIVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  uint uVar8;
  longlong *plVar9;
  TOptional<TSharedPtr<FString,1>_> *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  FScriptContainerElement *pFVar12;
  longlong local_88;
  undefined4 uStack_80;
  FScriptContainerElement *local_78;
  TReferenceControllerBase<1> *pTStack_70;
  undefined1 local_68 [16];
  FReadAccessScope local_58;
  FReadAccessScope local_40;
  
  pTVar11 = (param_1->SharedReferenceCount).ReferenceController;
  pFVar12 = (FScriptContainerElement *)param_1->Object;
  if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
    UNLOCK();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnIsSelectableOrNavigable,&local_58);
  if ((*(int *)&(this->OnIsSelectableOrNavigable).field_0x10 != 0) &&
     (plVar9 = *(longlong **)&(this->OnIsSelectableOrNavigable).field_0x8, plVar9 != (longlong *)0x0
     )) {
    cVar6 = (**(code **)(*plVar9 + 0x38))();
    if (cVar6 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_58);
      pIVar1 = (this->ViewSource).Ptr;
      if (pIVar1 == (IItemsSource<TSharedPtr<FString,1>_> *)0x0) {
        local_88 = 0;
        plVar9 = &local_88;
        uStack_80 = 0;
      }
      else {
        plVar9 = (longlong *)(**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_68);
      }
      pFVar4 = (FScriptContainerElement *)*plVar9;
      pTStack_70 = (TReferenceControllerBase<1> *)plVar9[1];
      iVar5 = (int)pTStack_70;
      local_78 = pFVar4;
      while( true ) {
        if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
          UNLOCK();
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &this->OnIsSelectableOrNavigable,&local_40);
        if (*(int *)&(this->OnIsSelectableOrNavigable).field_0x10 == 0) {
          plVar9 = (longlong *)0x0;
        }
        else {
          plVar9 = *(longlong **)&(this->OnIsSelectableOrNavigable).field_0x8;
        }
        local_78 = pFVar12;
        pTStack_70 = pTVar11;
        cVar6 = (**(code **)(*plVar9 + 0x60))(plVar9,&local_78);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_40);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        if (cVar6 != '\0') goto LAB_142986695;
        param_2 = (param_2 + (uint)param_3 * 2) - 1;
        if ((param_2 < 0) || (iVar5 <= param_2)) break;
        uVar8 = 0;
        if (param_2 < iVar5) {
          uVar8 = (uint)~param_2 >> 0x1f;
        }
        if (uVar8 == 0) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar7) {
            pcVar3 = (code *)swi(3);
            pTVar10 = (TOptional<TSharedPtr<FString,1>_> *)(*pcVar3)();
            return pTVar10;
          }
        }
        pTVar2 = *(TReferenceControllerBase<1> **)&pFVar4[(longlong)param_2 * 0x10 + 8].field_0x0;
        pFVar12 = *(FScriptContainerElement **)&pFVar4[(longlong)param_2 * 0x10].field_0x0;
        if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11)
        ;
        pTVar11 = pTVar2;
      }
      (__return_storage_ptr__->field0_0x0).TypedValue.Object = (FString *)0xffffffffffffffff;
      (__return_storage_ptr__->field0_0x0).TypedValue.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      goto LAB_1429866d1;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_58);
LAB_142986695:
  (__return_storage_ptr__->field0_0x0).TypedValue.Object = (FString *)pFVar12;
  *(TReferenceControllerBase<1> **)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = pTVar11;
  if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((__return_storage_ptr__->field0_0x0).TypedValue.Object == (FString *)0xffffffffffffffff) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      pTVar10 = (TOptional<TSharedPtr<FString,1>_> *)(*pcVar3)();
      return pTVar10;
    }
  }
LAB_1429866d1:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  return __return_storage_ptr__;
}

// Private_GetNestingDepth @ 142986710

int __thiscall
SListView<TSharedPtr<FString,1>_>::Private_GetNestingDepth
          (SListView<TSharedPtr<FString,1>_> *this,int param_1)

{
  return 0;
}

// Private_GetNumSelectedItems @ 142986720

int __thiscall
SListView<TSharedPtr<FString,1>_>::Private_GetNumSelectedItems
          (SListView<TSharedPtr<FString,1>_> *this)

{
  return (int)this->_padding_ - *(int *)((longlong)&this->_padding_ + 4);
}

// Private_GetOrientation @ 142986740

EOrientation __thiscall
SListView<TSharedPtr<FString,1>_>::Private_GetOrientation(SListView<TSharedPtr<FString,1>_> *this)

{
  return *(EOrientation *)&this[-1].HighlightedItems.field_0x4c;
}

// Private_GetSelectionMode @ 142986750

Type __thiscall
SListView<TSharedPtr<FString,1>_>::Private_GetSelectionMode(SListView<TSharedPtr<FString,1>_> *this)

{
  Type *pTVar1;
  
  pTVar1 = TAttribute<enum_ESelectionMode::Type>::Get(&this[-1].SelectorItem.SharedReferenceCount);
  return *pTVar1;
}

// Private_GetWiresNeededByDepth @ 142986770

TBitArray<FDefaultBitArrayAllocator> * __thiscall
SListView<TSharedPtr<FString,1>_>::Private_GetWiresNeededByDepth
          (SListView<TSharedPtr<FString,1>_> *this,int param_1)

{
  return &EmptyBitArray;
}

// Private_HasSelectorFocus @ 142986780

bool __thiscall
SListView<TSharedPtr<FString,1>_>::Private_HasSelectorFocus
          (SListView<TSharedPtr<FString,1>_> *this,TSharedPtr<FString,1> *param_1)

{
  return (FString *)this->_padding_ == param_1->Object;
}

// Private_IsItemExpanded @ 1429867a0

bool __thiscall
SListView<TSharedPtr<FString,1>_>::Private_IsItemExpanded
          (SListView<TSharedPtr<FString,1>_> *this,TSharedPtr<FString,1> *param_1)

{
  return false;
}

// Private_IsItemHighlighted @ 1429867b0

bool __thiscall
SListView<TSharedPtr<FString,1>_>::Private_IsItemHighlighted
          (SListView<TSharedPtr<FString,1>_> *this,TSharedPtr<FString,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TSharedPtr<FString,1> *pTVar2;
  TSharedPtr<FString_const_,1> local_18;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  local_18.Object = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18.SharedReferenceCount.ReferenceController = pTVar1;
  pTVar2 = TSet<TSharedPtr<FString,1>,DefaultKeyFuncs<TSharedPtr<FString,1>,0>,FDefaultSetAllocator>
           ::Find((TSet<TSharedPtr<FString,1>,DefaultKeyFuncs<TSharedPtr<FString,1>,0>,FDefaultSetAllocator>
                   *)&this->_padding_,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return pTVar2 != (TSharedPtr<FString,1> *)0x0;
}

// Private_IsItemSelectableOrNavigable @ 142986810

bool __thiscall
SListView<TSharedPtr<FString,1>_>::Private_IsItemSelectableOrNavigable
          (SListView<TSharedPtr<FString,1>_> *this,TSharedPtr<FString,1> *param_1)

{
  char cVar1;
  bool bVar2;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_padding_,&local_28);
  if (((int)this->_padding_ != 0) && ((longlong *)this->_padding_ != (longlong *)0x0)) {
    cVar1 = (**(code **)(*(longlong *)this->_padding_ + 0x38))();
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      local_28.DestructionSentinel._0_8_ = param_1->Object;
      local_28.DestructionSentinel.Accessor =
           (FMRSWRecursiveAccessDetector *)(param_1->SharedReferenceCount).ReferenceController;
      if ((TReferenceControllerBase<1> *)local_28.DestructionSentinel.Accessor !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        ((TReferenceControllerBase<1> *)local_28.DestructionSentinel.Accessor)->SharedReferenceCount
             = (atomic<int>)
               ((int)((TReferenceControllerBase<1> *)local_28.DestructionSentinel.Accessor)->
                     SharedReferenceCount + 1);
        UNLOCK();
      }
      bVar2 = TDelegate<bool___cdecl(TSharedPtr<FString,1>),FDefaultDelegateUserPolicy>::Execute
                        ((TDelegate<bool___cdecl(TSharedPtr<FString,1>),FDefaultDelegateUserPolicy>
                          *)&this->_padding_,(TSharedPtr<FString,1> *)&local_28);
      return bVar2;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return true;
}

// Private_IsItemSelected @ 1429868b0

bool __thiscall
SListView<TSharedPtr<FString,1>_>::Private_IsItemSelected
          (SListView<TSharedPtr<FString,1>_> *this,TSharedPtr<FString,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TSharedPtr<FString,1> *pTVar2;
  TSharedPtr<FString_const_,1> local_18;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  local_18.Object = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18.SharedReferenceCount.ReferenceController = pTVar1;
  pTVar2 = TSet<TSharedPtr<FString,1>,DefaultKeyFuncs<TSharedPtr<FString,1>,0>,FDefaultSetAllocator>
           ::Find((TSet<TSharedPtr<FString,1>,DefaultKeyFuncs<TSharedPtr<FString,1>,0>,FDefaultSetAllocator>
                   *)&this->_padding_,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return pTVar2 != (TSharedPtr<FString,1> *)0x0;
}

// Private_IsLastChild @ 142986910

bool __thiscall
SListView<TSharedPtr<FString,1>_>::Private_IsLastChild
          (SListView<TSharedPtr<FString,1>_> *this,int param_1)

{
  return false;
}

// Private_IsPendingRefresh @ 142986920

bool __thiscall
SListView<TSharedPtr<FString,1>_>::Private_IsPendingRefresh(SListView<TSharedPtr<FString,1>_> *this)

{
  bool bVar1;
  
  bVar1 = STableViewBase::IsPendingRefresh((STableViewBase *)&this[-1]._padding_);
  return bVar1;
}

// Private_ItemFromWidget @ 142986940

TSharedPtr<FString,1> * __thiscall
SListView<TSharedPtr<FString,1>_>::Private_ItemFromWidget
          (SListView<TSharedPtr<FString,1>_> *this,ITableRow *param_1)

{
  TSharedPtr<FString,1> *pTVar1;
  
  pTVar1 = TMapBase<ITableRow_const_*,TSharedPtr<FString,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedPtr<FString,1>,0>_>
           ::Find((TMapBase<ITableRow_const_*,TSharedPtr<FString,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedPtr<FString,1>,0>_>
                   *)&this->_padding_,param_1);
  if (pTVar1 == (TSharedPtr<FString,1> *)0x0) {
    pTVar1 = TMapBase<ITableRow_const_*,TSharedPtr<FString,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedPtr<FString,1>,0>_>
             ::Find((TMapBase<ITableRow_const_*,TSharedPtr<FString,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedPtr<FString,1>,0>_>
                     *)&this->_padding_,param_1);
  }
  return pTVar1;
}

// Private_OnExpanderArrowShiftClicked @ 142986980

void __thiscall
SListView<TSharedPtr<FString,1>_>::Private_OnExpanderArrowShiftClicked
          (SListView<TSharedPtr<FString,1>_> *this,TSharedPtr<FString,1> *param_1,bool param_2)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// Private_OnItemClicked @ 142986b10

bool __thiscall
SListView<TSharedPtr<FString,1>_>::Private_OnItemClicked
          (SListView<TSharedPtr<FString,1>_> *this,TSharedPtr<FString,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  bool bVar2;
  TSharedPtr<FString,1> local_18;
  
  local_18.Object = param_1->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar2 = TDelegate<void___cdecl(TSharedPtr<FString,1>),FDefaultDelegateUserPolicy>::ExecuteIfBound
                    ((TDelegate<void___cdecl(TSharedPtr<FString,1>),FDefaultDelegateUserPolicy> *)
                     &this->_padding_,&local_18);
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (bVar2) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    return true;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return false;
}

// Private_OnItemDoubleClicked @ 142986b70

bool __thiscall
SListView<TSharedPtr<FString,1>_>::Private_OnItemDoubleClicked
          (SListView<TSharedPtr<FString,1>_> *this,TSharedPtr<FString,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  bool bVar2;
  TSharedPtr<FString,1> local_18;
  
  local_18.Object = param_1->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar2 = TDelegate<void___cdecl(TSharedPtr<FString,1>),FDefaultDelegateUserPolicy>::ExecuteIfBound
                    ((TDelegate<void___cdecl(TSharedPtr<FString,1>),FDefaultDelegateUserPolicy> *)
                     &this->_padding_,&local_18);
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (bVar2) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    return true;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return false;
}

// Private_OnItemRightClicked @ 142986bd0

void __thiscall
SListView<TSharedPtr<FString,1>_>::Private_OnItemRightClicked
          (SListView<TSharedPtr<FString,1>_> *this,TSharedPtr<FString,1> *param_1,
          FPointerEvent *param_2)

{
  (**(code **)(this[-1]._padding_ + 0x288))(&this[-1]._padding_,param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// Private_SelectRangeFromCurrentTo @ 142986c00

void __thiscall
SListView<TSharedPtr<FString,1>_>::Private_SelectRangeFromCurrentTo
          (SListView<TSharedPtr<FString,1>_> *this,TSharedPtr<FString,1> *param_1)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  longlong *plVar4;
  bool bVar5;
  Type *pTVar6;
  undefined8 *puVar7;
  uint uVar8;
  uint uVar9;
  longlong *plVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  TSharedPtr<FString,1> local_res18;
  undefined8 local_68;
  undefined4 uStack_60;
  
  pTVar6 = TAttribute<enum_ESelectionMode::Type>::Get(&this[-1].SelectorItem.SharedReferenceCount);
  if (*pTVar6 != None) {
    uVar11 = 0;
    if ((longlong *)this->_padding_ == (longlong *)0x0) {
      local_68 = 0;
      puVar7 = &local_68;
      uStack_60 = 0;
    }
    else {
      puVar7 = (undefined8 *)(**(code **)(*(longlong *)this->_padding_ + 8))();
    }
    plVar4 = (longlong *)*puVar7;
    iVar12 = (int)puVar7[1];
    if (iVar12 != 0) {
      lVar1 = this->_padding_;
      if (lVar1 != 0) {
        pTVar2 = (TReferenceControllerBase<1> *)this->_padding_;
        if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
          UNLOCK();
        }
        for (plVar10 = plVar4; plVar10 != plVar4 + (longlong)iVar12 * 2; plVar10 = plVar10 + 2) {
          if (*plVar10 == lVar1) {
            uVar11 = (uint)((longlong)plVar10 - (longlong)plVar4 >> 4);
            goto LAB_142986ce5;
          }
        }
        uVar11 = 0xffffffff;
LAB_142986ce5:
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      }
      local_res18.Object = (FString *)(longlong)iVar12;
      if (plVar4 != plVar4 + (longlong)local_res18.Object * 2) {
        plVar10 = plVar4;
        do {
          if ((FString *)*plVar10 == param_1->Object) {
            uVar9 = (uint)((longlong)plVar10 - (longlong)plVar4 >> 4);
            goto LAB_142986d25;
          }
          plVar10 = plVar10 + 2;
        } while (plVar10 != plVar4 + (longlong)local_res18.Object * 2);
      }
      uVar9 = 0xffffffff;
LAB_142986d25:
      uVar8 = iVar12 - 1;
      uVar14 = uVar8;
      if ((int)uVar11 < (int)uVar8) {
        uVar14 = uVar11;
      }
      uVar11 = 0;
      if (0 < (int)uVar14) {
        uVar11 = uVar14;
      }
      if ((int)uVar9 < (int)uVar8) {
        uVar8 = uVar9;
      }
      uVar14 = 0;
      uVar9 = uVar14;
      if (0 < (int)uVar8) {
        uVar9 = uVar8;
      }
      iVar13 = -1;
      if ((int)uVar11 < (int)uVar9) {
        iVar13 = 1;
      }
      while (uVar9 != uVar11) {
        uVar8 = uVar14;
        if ((int)uVar11 < iVar12) {
          uVar8 = ~uVar11 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        TSet<TSharedPtr<FString,1>,DefaultKeyFuncs<TSharedPtr<FString,1>,0>,FDefaultSetAllocator>::
        Emplace<TSharedPtr<FString,1>_const_&>
                  ((TSet<TSharedPtr<FString,1>,DefaultKeyFuncs<TSharedPtr<FString,1>,0>,FDefaultSetAllocator>
                    *)&this->_padding_,&local_res18,(bool *)(plVar4 + (longlong)(int)uVar11 * 2));
        uVar11 = uVar11 + iVar13;
      }
      if ((int)uVar11 < iVar12) {
        uVar14 = ~uVar11 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      TSet<TSharedPtr<FString,1>,DefaultKeyFuncs<TSharedPtr<FString,1>,0>,FDefaultSetAllocator>::
      Emplace<TSharedPtr<FString,1>_const_&>
                ((TSet<TSharedPtr<FString,1>,DefaultKeyFuncs<TSharedPtr<FString,1>,0>,FDefaultSetAllocator>
                  *)&this->_padding_,(TSharedPtr<FString,1> *)&local_res18.SharedReferenceCount,
                 (bool *)(plVar4 + (longlong)(int)uVar11 * 2));
    }
    if (*(char *)((longlong)&this->_padding_ + 1) != '\0') {
      FInertialScrollManager::ClearScrollVelocity
                ((FInertialScrollManager *)&this[-1].HighlightedItems.Elements.field_0x18,false);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// Private_SetItemExpansion @ 142986ed0

void __thiscall
SListView<TSharedPtr<FString,1>_>::Private_SetItemExpansion
          (SListView<TSharedPtr<FString,1>_> *this,TSharedPtr<FString,1> *param_1,bool param_2)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// Private_SetItemHighlighted @ 142986ee0

void __thiscall
SListView<TSharedPtr<FString,1>_>::Private_SetItemHighlighted
          (SListView<TSharedPtr<FString,1>_> *this,TSharedPtr<FString,1> *param_1,bool param_2)

{
  TSharedPtr<FString,1> local_res18;
  TSharedPtr<FString_const_,1> local_18;
  
  if (param_2) {
    TSet<TSharedPtr<FString,1>,DefaultKeyFuncs<TSharedPtr<FString,1>,0>,FDefaultSetAllocator>::
    Emplace<TSharedPtr<FString,1>_const_&>
              ((TSet<TSharedPtr<FString,1>,DefaultKeyFuncs<TSharedPtr<FString,1>,0>,FDefaultSetAllocator>
                *)&this->_padding_,&local_res18,(bool *)param_1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    return;
  }
  local_18.Object = param_1->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  TSet<TSharedPtr<FString,1>,DefaultKeyFuncs<TSharedPtr<FString,1>,0>,FDefaultSetAllocator>::Remove
            ((TSet<TSharedPtr<FString,1>,DefaultKeyFuncs<TSharedPtr<FString,1>,0>,FDefaultSetAllocator>
              *)&this->_padding_,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// Private_SetItemSelection @ 142986f50

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
SListView<TSharedPtr<FString,1>_>::Private_SetItemSelection
          (SListView<TSharedPtr<FString,1>_> *this,TSharedPtr<FString,1> *param_1,bool param_2,
          bool param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  FString *pFVar2;
  FSlateAccessibleMessageHandler *this_00;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  Type *pTVar7;
  FVariant *pFVar8;
  FVariant *pFVar9;
  atomic<int> *paVar10;
  longlong *local_f8;
  TReferenceControllerBase<1> *local_f0;
  SWidget *local_e8;
  TReferenceControllerBase<1> *local_e0;
  TSharedPtr<FString_const_,1> local_d8;
  longlong local_c8;
  TReferenceControllerBase<1> *pTStack_c0;
  longlong local_b8;
  TReferenceControllerBase<1> *pTStack_b0;
  FSlateWidgetAccessibleEventArgs local_a8;
  FVariant local_58;
  FVariant local_40;
  
  pTVar7 = TAttribute<enum_ESelectionMode::Type>::Get(&this[-1].SelectorItem.SharedReferenceCount);
  if (*pTVar7 != None) {
    if (param_2) {
      TSet<TSharedPtr<FString,1>,DefaultKeyFuncs<TSharedPtr<FString,1>,0>,FDefaultSetAllocator>::
      Emplace<TSharedPtr<FString,1>_const_&>
                ((TSet<TSharedPtr<FString,1>,DefaultKeyFuncs<TSharedPtr<FString,1>,0>,FDefaultSetAllocator>
                  *)&this->_padding_,(TSharedPtr<FString,1> *)&stack0x00000008,(bool *)param_1);
    }
    else {
      local_d8.Object = param_1->Object;
      local_d8.SharedReferenceCount.ReferenceController =
           (param_1->SharedReferenceCount).ReferenceController;
      if (local_d8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      TSet<TSharedPtr<FString,1>,DefaultKeyFuncs<TSharedPtr<FString,1>,0>,FDefaultSetAllocator>::
      Remove((TSet<TSharedPtr<FString,1>,DefaultKeyFuncs<TSharedPtr<FString,1>,0>,FDefaultSetAllocator>
              *)&this->_padding_,&local_d8);
    }
    if (((param_3) ||
        (pTVar7 = TAttribute<enum_ESelectionMode::Type>::Get
                            (&this[-1].SelectorItem.SharedReferenceCount), *pTVar7 == Single)) ||
       (pTVar7 = TAttribute<enum_ESelectionMode::Type>::Get
                           (&this[-1].SelectorItem.SharedReferenceCount), *pTVar7 == SingleToggle))
    {
      pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
      pFVar2 = param_1->Object;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_c8 = this->_padding_;
      pTStack_c0 = (TReferenceControllerBase<1> *)this->_padding_;
      this->_padding_ = (longlong)pFVar2;
      this->_padding_ = (longlong)pTVar1;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_c0);
      pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
      pFVar2 = param_1->Object;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_b8 = this->_padding_;
      pTStack_b0 = (TReferenceControllerBase<1> *)this->_padding_;
      this->_padding_ = (longlong)pFVar2;
      this->_padding_ = (longlong)pTVar1;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_b0);
    }
    if (*(char *)((longlong)&this->_padding_ + 1) != '\0') {
      FInertialScrollManager::ClearScrollVelocity
                ((FInertialScrollManager *)&this[-1].HighlightedItems.Elements.field_0x18,false);
    }
    if (param_2) {
      (**(code **)(this->_padding_ + 0xd8))(this,&local_f8,param_1);
      if (local_f8 != (longlong *)0x0) {
        if ((local_f8 == (longlong *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        (**(code **)(*local_f8 + 0x58))(local_f8,&local_e8);
        if (FSlateApplicationBase::CurrentBaseApplication.Object == (FSlateApplicationBase *)0x0) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurrentBaseApplication.IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Application\\SlateApplicationBase.h"
                             ,0x22a,L"");
          if (bVar6) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if ((FSlateApplicationBase::CurrentBaseApplication.Object == (FSlateApplicationBase *)0x0)
             && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x44d,L""), bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        pTVar1 = ((FSlateApplicationBase::CurrentBaseApplication.Object)->AccessibleMessageHandler).
                 SharedReferenceCount.ReferenceController;
        this_00 = ((FSlateApplicationBase::CurrentBaseApplication.Object)->AccessibleMessageHandler)
                  .Object;
        if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
          UNLOCK();
        }
        pFVar8 = FVariant::FVariant<bool>(&local_58,true);
        pFVar9 = FVariant::FVariant<bool>(&local_40,false);
        pTVar5 = local_e0;
        if (local_e0 == (TReferenceControllerBase<1> *)0x0) {
          paVar10 = (atomic<int> *)&DAT_00000008;
        }
        else {
          paVar10 = &local_e0->SharedReferenceCount;
          LOCK();
          *paVar10 = (atomic<int>)((int)*paVar10 + 1);
          UNLOCK();
        }
        local_a8.Widget.Object = local_e8;
        local_a8.Widget.SharedReferenceCount.ReferenceController = local_e0;
        if (local_e0 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          *paVar10 = (atomic<int>)((int)*paVar10 + 1);
          UNLOCK();
        }
        local_a8.Event = FocusChange;
        FVariant::FVariant(&local_a8.OldValue,pFVar9);
        FVariant::FVariant(&local_a8.NewValue,pFVar8);
        local_a8.SlateUserIndex = 0;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
        pFVar3 = (pFVar9->Value).AllocatorInstance.Data;
        if (pFVar3 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar3);
        }
        pFVar3 = (pFVar8->Value).AllocatorInstance.Data;
        if (pFVar3 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar3);
        }
        FSlateAccessibleMessageHandler::OnWidgetEventRaised(this_00,&local_a8);
        if (local_a8.NewValue.Value.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.NewValue.Value.AllocatorInstance.Data);
        }
        if (local_a8.OldValue.Value.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.OldValue.Value.AllocatorInstance.Data);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_a8.Widget.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_e0);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_f0);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// Private_SetSelection @ 142987270

void __thiscall
SListView<TSharedPtr<FString,1>_>::Private_SetSelection
          (SListView<TSharedPtr<FString,1>_> *this,TSharedPtr<FString,1> *param_1,Type param_2)

{
  undefined1 *puVar1;
  TSet<TSharedPtr<FString,1>,DefaultKeyFuncs<TSharedPtr<FString,1>,0>,FDefaultSetAllocator> *this_00
  ;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  Type *pTVar5;
  FString *local_28;
  TReferenceControllerBase<1> *local_20;
  
  this_00 = &this->SelectedItems;
  bVar4 = 1 < (this->SelectedItems).HashSize;
  if (!bVar4) {
    TSet<TSharedPtr<FString,1>,DefaultKeyFuncs<TSharedPtr<FString,1>,0>,FDefaultSetAllocator>::
    UnhashElements(this_00);
  }
  TSparseArray<TSparseSetElement<TSharedPtr<FString,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements(&this_00->Elements,0,*(int *)&(this->SelectedItems).Elements.field_0x8);
  puVar1 = &(this->SelectedItems).Elements.field_0xc;
  *(undefined4 *)&(this->SelectedItems).Elements.field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->SelectedItems).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SelectedItems).Elements.field_0x34 = 0;
  iVar2 = *(int *)&(this->SelectedItems).Elements.field_0x2c;
  *(undefined4 *)&(this->SelectedItems).Elements.field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->SelectedItems).Elements.field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->SelectedItems).Elements.field_0x10,0)
    ;
  }
  if (bVar4) {
    (this->SelectedItems).HashSize = 1;
    TSet<TSharedPtr<FString,1>,DefaultKeyFuncs<TSharedPtr<FString,1>,0>,FDefaultSetAllocator>::
    Rehash(this_00);
  }
  pTVar5 = TAttribute<enum_ESelectionMode::Type>::Get(&this->_padding_);
  if (*pTVar5 != None) {
    pcVar3 = *(code **)(this->_padding_ + 0x28);
    local_28 = param_1->Object;
    local_20 = (param_1->SharedReferenceCount).ReferenceController;
    if (local_20 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_20->SharedReferenceCount = (atomic<int>)((int)local_20->SharedReferenceCount + 1);
      UNLOCK();
    }
    (*pcVar3)(&this->_padding_,&local_28,1,param_2 != Direct);
    (**(code **)(this->_padding_ + 0x40))(&this->_padding_,param_2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// Private_SignalSelectionChanged @ 1429873c0

void __thiscall
SListView<TSharedPtr<FString,1>_>::Private_SignalSelectionChanged
          (SListView<TSharedPtr<FString,1>_> *this,Type param_1)

{
  bool bVar1;
  char cVar2;
  Type *pTVar3;
  TIterator *pTVar4;
  longlong lVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  TIterator local_48;
  
  pTVar6 = (TReferenceControllerBase<1> *)0x0;
  pTVar3 = TAttribute<enum_ESelectionMode::Type>::Get(&this[-1].SelectorItem.SharedReferenceCount);
  if (*pTVar3 != None) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_padding_,
               (FReadAccessScope *)&local_48);
    if ((((int)this->_padding_ == 0) || ((longlong *)this->_padding_ == (longlong *)0x0)) ||
       (cVar2 = (**(code **)(*(longlong *)this->_padding_ + 0x38))(), cVar2 == '\0')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_48);
    if (bVar1) {
      if ((int)this->_padding_ - *(int *)((longlong)&this->_padding_ + 4) < 1) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        pTVar7 = pTVar6;
      }
      else {
        pTVar4 = TSet<TSharedPtr<FString,1>,DefaultKeyFuncs<TSharedPtr<FString,1>,0>,FDefaultSetAllocator>
                 ::TIterator::TIterator
                           (&local_48,
                            (TSet<TSharedPtr<FString,1>,DefaultKeyFuncs<TSharedPtr<FString,1>,0>,FDefaultSetAllocator>
                             *)&this->_padding_);
        lVar5 = (longlong)*(int *)((longlong)&pTVar4->_padding_ + 4);
        pTVar7 = *(TReferenceControllerBase<1> **)
                  (*(longlong *)pTVar4->_padding_ + 8 + lVar5 * 0x18);
        pTVar6 = *(TReferenceControllerBase<1> **)(*(longlong *)pTVar4->_padding_ + lVar5 * 0x18);
        if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
      }
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_48._padding_ = (longlong)pTVar6;
      local_48._padding_ = (longlong)pTVar7;
      TDelegate<void___cdecl(TSharedPtr<FString,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
      ::ExecuteIfBound(&this->_padding_,(TSharedPtr<FString,1> *)&local_48,param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
    }
  }
  return;
}

// Private_UsesSelectorFocus @ 1429874e0

bool __thiscall
SListView<TSharedPtr<FString,1>_>::Private_UsesSelectorFocus
          (SListView<TSharedPtr<FString,1>_> *this)

{
  return true;
}

// ReGenerateItems @ 142987c70

FReGenerateResults * __thiscall
SListView<TSharedPtr<FString,1>_>::ReGenerateItems
          (SListView<TSharedPtr<FString,1>_> *this,FReGenerateResults *__return_storage_ptr__,
          FGeometry *param_1)

{
  int *piVar1;
  FWidgetGenerator *this_00;
  TArray<TSharedPtr<FString,1>,TSizedDefaultAllocator<32>_> *pTVar2;
  float fVar3;
  IItemsSource<TSharedPtr<FString,1>_> *pIVar4;
  bool bVar5;
  code *pcVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  bool bVar10;
  bool bVar11;
  uint uVar12;
  longlong *plVar13;
  FReGenerateResults *pFVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  int iVar18;
  TSharedPtr<FString,1> *pTVar19;
  uint uVar20;
  ulonglong uVar21;
  float fVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar25;
  undefined1 in_XMM2 [16];
  double dVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float local_138;
  FDeprecateSlateVector2D local_130;
  ulonglong local_128;
  FTableViewDimensions local_120;
  longlong local_110;
  longlong lStack_108;
  longlong local_100;
  undefined4 uStack_f8;
  undefined1 local_f0 [184];
  
  STableViewBase::ClearWidgets((STableViewBase *)this);
  this_00 = &this->WidgetGenerator;
  pTVar2 = &(this->WidgetGenerator).ItemsWithGeneratedWidgets;
  TArray<TSharedPtr<FString,1>,TSizedDefaultAllocator<32>_>::operator=
            (&(this->WidgetGenerator).ItemsToBeCleanedUp,pTVar2);
  DestructItems<TSharedPtr<FString,1>,int>
            ((TSharedPtr<FString,1> *)(pTVar2->AllocatorInstance).Data,
             (this->WidgetGenerator).ItemsWithGeneratedWidgets.ArrayNum);
  piVar1 = &(this->WidgetGenerator).ItemsWithGeneratedWidgets.ArrayMax;
  (this->WidgetGenerator).ItemsWithGeneratedWidgets.ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  pIVar4 = (this->ViewSource).Ptr;
  if (pIVar4 == (IItemsSource<TSharedPtr<FString,1>_> *)0x0) {
    local_100 = 0;
    plVar13 = &local_100;
    uStack_f8 = 0;
  }
  else {
    plVar13 = (longlong *)(**(code **)((longlong)*pIVar4 + 8))(pIVar4,local_f0);
  }
  lVar7 = *plVar13;
  lStack_108 = plVar13[1];
  iVar18 = (int)plVar13[1];
  local_110 = lVar7;
  if (iVar18 < 1) {
    __return_storage_ptr__->NewScrollOffset = 0.0;
    __return_storage_ptr__->LengthOfGeneratedItems = 0.0;
    __return_storage_ptr__->ExactNumLinesOnScreen = 0.0;
    __return_storage_ptr__->bGeneratedPastLastItem = false;
    FWidgetGenerator::ProcessItemCleanUp(this_00);
    FWidgetGenerator::ValidateWidgetGeneration(this_00);
  }
  else {
    auVar23._8_8_ = 0;
    auVar23._0_8_ = this->_padding_;
    uVar15 = iVar18 - 1;
    fVar27 = 0.0;
    fVar28 = 0.0;
    fVar30 = 0.0;
    auVar23 = roundpd(auVar23,auVar23,1);
    fVar3 = param_1->Scale;
    uVar20 = uVar15;
    if ((int)auVar23._0_8_ < (int)uVar15) {
      uVar20 = (int)auVar23._0_8_;
    }
    local_138 = 0.0;
    uVar12 = 0;
    if (0 < (int)uVar20) {
      uVar12 = uVar20;
    }
    bVar5 = false;
    bVar11 = false;
    local_130 = param_1->Size;
    FTableViewDimensions::FTableViewDimensions
              (&local_120,*(EOrientation *)((longlong)&this->_padding_ + 4),
               (FDeprecateVector2DParameter *)&local_130);
    fVar9 = __real_3a83126f;
    fVar8 = __real_3f800000;
    uVar17 = (ulonglong)(int)uVar12;
    pTVar19 = (TSharedPtr<FString,1> *)(uVar17 * 0x10 + lVar7);
    uVar21 = uVar17;
    uVar20 = uVar12;
    local_128 = uVar17;
    fVar22 = local_120.ScrollAxis;
    do {
      if (iVar18 <= (int)uVar20) break;
      uVar16 = 0;
      if ((int)uVar20 < iVar18) {
        uVar16 = ~uVar20 >> 0x1f;
      }
      if (uVar16 == 0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar10) {
          pcVar6 = (code *)swi(3);
          pFVar14 = (FReGenerateResults *)(*pcVar6)();
          return pFVar14;
        }
        uVar17 = (ulonglong)uVar12;
        fVar22 = local_120.ScrollAxis;
      }
      if (pTVar19->Object != (FString *)0x0) {
        fVar22 = GenerateWidgetForItem(this,pTVar19,uVar20,(int)uVar17,fVar3);
        uVar17 = (ulonglong)uVar12;
        if (uVar20 == uVar12) {
          auVar24._8_8_ = 0;
          auVar24._0_8_ = this->_padding_;
          auVar23 = roundpd(in_XMM2,auVar24,3);
          dVar26 = (double)this->_padding_ - auVar23._0_8_;
          if (dVar26 <= __real_0000000000000000) {
            dVar26 = __real_0000000000000000;
          }
          fVar25 = fVar8 - (float)dVar26;
          in_XMM2 = ZEXT416((uint)fVar25);
          fVar29 = local_120.ScrollAxis / (fVar25 * fVar22);
          if (fVar25 <= fVar29) {
            fVar29 = fVar25;
          }
          fVar28 = fVar29 + fVar28;
          fVar29 = fVar28 * fVar22;
          local_138 = fVar22;
        }
        else {
          fVar29 = fVar8;
          if (local_120.ScrollAxis < fVar22 + fVar30) {
            fVar29 = (local_120.ScrollAxis - fVar30) / fVar22;
          }
          fVar28 = fVar29 + fVar28;
          fVar29 = fVar22;
        }
        fVar27 = fVar27 + fVar22;
        fVar30 = fVar30 + fVar29;
        bVar11 = (int)uVar15 <= (int)uVar20;
        fVar22 = local_120.ScrollAxis;
        if ((uVar21 == local_128) && (local_120.ScrollAxis <= fVar30)) {
          bVar5 = true;
          break;
        }
        bVar5 = local_120.ScrollAxis + fVar9 <= fVar30;
      }
      uVar20 = uVar20 + 1;
      uVar21 = uVar21 + 1;
      pTVar19 = pTVar19 + 1;
    } while (!bVar5);
    if ((!bVar11) || (bVar5)) {
      __return_storage_ptr__->NewScrollOffset = (double)this->_padding_;
      dVar26 = (double)fVar28;
      __return_storage_ptr__->bGeneratedPastLastItem = false;
    }
    else {
      uVar20 = (int)uVar17 - 1;
      dVar26 = (double)((fVar27 - fVar22) / local_138) + (double)(int)uVar17;
      if (fVar27 < fVar22) {
        pTVar19 = (TSharedPtr<FString,1> *)((longlong)(int)uVar20 * 0x10 + local_110);
        do {
          if ((int)uVar20 < 0) break;
          uVar15 = 0;
          if ((int)uVar20 < iVar18) {
            uVar15 = ~uVar20 >> 0x1f;
          }
          uVar16 = (uint)uVar17;
          if ((uVar15 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             uVar16 = uVar12, fVar22 = local_120.ScrollAxis, bVar11)) {
            pcVar6 = (code *)swi(3);
            pFVar14 = (FReGenerateResults *)(*pcVar6)();
            return pFVar14;
          }
          if (pTVar19->Object != (FString *)0x0) {
            fVar28 = GenerateWidgetForItem(this,pTVar19,uVar20,uVar16,fVar3);
            fVar27 = fVar28 + fVar27;
            fVar22 = local_120.ScrollAxis;
            if ((local_120.ScrollAxis < fVar27) && (0.0 < fVar28)) {
              dVar26 = (double)((fVar27 - local_120.ScrollAxis) / fVar28) + (double)(int)uVar20;
            }
          }
          uVar17 = (ulonglong)uVar12;
          uVar20 = uVar20 - 1;
          pTVar19 = pTVar19 + -1;
        } while (fVar27 < fVar22);
      }
      __return_storage_ptr__->bGeneratedPastLastItem = true;
      __return_storage_ptr__->NewScrollOffset = dVar26;
      dVar26 = (double)iVar18 - dVar26;
    }
    __return_storage_ptr__->ExactNumLinesOnScreen = dVar26;
    __return_storage_ptr__->LengthOfGeneratedItems = (double)fVar27;
    FWidgetGenerator::ProcessItemCleanUp(this_00);
    FWidgetGenerator::ValidateWidgetGeneration(this_00);
  }
  return __return_storage_ptr__;
}

// RebuildList @ 1429881e0

void __thiscall
SListView<TSharedPtr<FString,1>_>::RebuildList(SListView<TSharedPtr<FString,1>_> *this)

{
  FWidgetGenerator::Clear(&this->WidgetGenerator);
  FWidgetGenerator::Clear(&this->PinnedWidgetGenerator);
                    /* WARNING: Could not recover jumptable at 0x00014298820c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x248))(this);
  return;
}

// RequestScrollIntoView @ 142989e70

void __thiscall
SListView<TSharedPtr<FString,1>_>::RequestScrollIntoView
          (SListView<TSharedPtr<FString,1>_> *this,TSharedPtr<FString,1> *param_1,uint param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FString *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pFVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (this->ItemToScrollIntoView).SharedReferenceCount.ReferenceController;
  (this->ItemToScrollIntoView).Object = pFVar2;
  (this->ItemToScrollIntoView).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  this->UserRequestingScrollIntoView = param_2;
  STableViewBase::RequestLayoutRefresh((STableViewBase *)this);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// ScrollBy @ 14298bc80

float __thiscall
SListView<TSharedPtr<FString,1>_>::ScrollBy
          (SListView<TSharedPtr<FString,1>_> *this,FGeometry *param_1,float param_2,
          EAllowOverscroll param_3)

{
  float fVar1;
  IItemsSource<TSharedPtr<FString,1>_> *pIVar2;
  FString *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  double dVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  double dVar10;
  bool bVar11;
  bool bVar12;
  uint uVar13;
  undefined1 (*pauVar14) [16];
  TSharedRef<ITableRow,1> *pTVar15;
  longlong *plVar16;
  undefined8 *puVar17;
  FDeprecateSlateVector2D FVar18;
  ITableRow *pIVar19;
  uint uVar20;
  FSharedReferencer<1> FVar21;
  longlong *plVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar29;
  double dVar30;
  float fVar31;
  FSharedReferencer<1> FStack_1d0;
  TSharedPtr<FString_const_,1> local_1c8;
  FDeprecateVector2DParameter local_1b8;
  FTableViewDimensions local_1b0;
  undefined8 local_1a0;
  FSharedReferencer<1> local_198;
  undefined8 local_190;
  undefined4 uStack_188;
  longlong local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  TReferenceControllerBase<1> *local_168;
  undefined8 local_160;
  TReferenceControllerBase<1> *local_158;
  longlong local_150;
  longlong local_148;
  TSharedRef<ITableRow,1> local_138;
  TSharedPtr<FString,1> local_128;
  undefined1 local_110 [8];
  TReferenceControllerBase<1> *local_108;
  undefined1 local_100 [8];
  TReferenceControllerBase<1> *local_f8;
  undefined1 local_f0 [8];
  TReferenceControllerBase<1> *local_e8;
  undefined1 local_e0 [184];
  
  uVar9 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  bVar8 = false;
  bVar7 = false;
  if ((param_3 != No) ||
     (((__real_3f1a36e2e0000000 < (double)this->_padding_ ||
        __real_3f1a36e2e0000000 == (double)this->_padding_ || (0.0 <= param_2)) &&
      (((char)this->_padding_ == '\0' || (param_2 <= 0.0)))))) {
    dVar30 = (double)this->_padding_;
    auVar26._8_8_ = 0;
    auVar26._0_8_ = dVar30;
    uVar20 = (uint)(double)this->_padding_;
    fVar31 = (float)((uint)param_2 & __xmm_7fffffff7fffffff7fffffff7fffffff);
    if ((dVar30 == 0.0) && ((char)this->_padding_ != '\0')) {
      bVar12 = true;
    }
    else {
      bVar12 = false;
    }
    if ((param_3 == Yes) &&
       (bVar11 = FOverscroll::ShouldApplyOverscroll
                           ((FOverscroll *)((longlong)&this->_padding_ + 4),dVar30 == 0.0,
                            SUB81(this->_padding_,0),param_2), bVar11)) {
      fVar29 = __real_3f800000;
      if ((param_2 <= 0.0) && (fVar29 = __real_bf800000, 0.0 <= param_2)) {
        fVar29 = 0.0;
      }
      fVar31 = FOverscroll::ScrollBy
                         ((FOverscroll *)((longlong)&this->_padding_ + 4),param_1,fVar29 * fVar31);
      if (fVar31 == 0.0) {
        return fVar31;
      }
      STableViewBase::RequestLayoutRefresh((STableViewBase *)this);
      return fVar31;
    }
    if (!bVar12) {
      pIVar2 = (this->ViewSource).Ptr;
      if (pIVar2 == (IItemsSource<TSharedPtr<FString,1>_> *)0x0) {
        local_190 = 0;
        pauVar14 = (undefined1 (*) [16])&local_190;
        uStack_188 = 0;
      }
      else {
        pauVar14 = (undefined1 (*) [16])(**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_e0);
      }
      dVar10 = __real_bff0000000000000;
      fVar29 = __real_3f800000;
      dVar6 = __real_3ff0000000000000;
      uStack_178 = *(undefined8 *)(*pauVar14 + 8);
      local_180 = SUB168(*pauVar14,0);
      if ((0 < (int)uStack_178) && (fVar1 = param_1->Scale, param_2 != 0.0)) {
        plVar22 = (longlong *)((longlong)(int)uVar20 * 0x10 + local_180);
        do {
          dVar30 = auVar26._0_8_;
          pIVar19 = (ITableRow *)0x0;
          if (((int)uStack_178 <= (int)uVar20) || ((int)uVar20 < 0)) break;
          uVar13 = 0;
          if ((int)uVar20 < (int)uStack_178) {
            uVar13 = ~uVar20 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar12)) {
            pcVar5 = (code *)swi(3);
            fVar31 = (float)(*pcVar5)();
            return fVar31;
          }
          pFVar3 = (FString *)*plVar22;
          if (pFVar3 != (FString *)0x0) {
            pTVar4 = (TReferenceControllerBase<1> *)plVar22[1];
            if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
              UNLOCK();
              LOCK();
              pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
              UNLOCK();
            }
            local_1c8.Object = pFVar3;
            local_1c8.SharedReferenceCount.ReferenceController = pTVar4;
            pTVar15 = TMapBase<TSharedPtr<FString,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<FString,1>,TSharedRef<ITableRow,1>,0>_>
                      ::Find((TMapBase<TSharedPtr<FString,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<FString,1>,TSharedRef<ITableRow,1>,0>_>
                              *)&(this->WidgetGenerator).ItemToWidgetMap,&local_1c8);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar4);
            if (pTVar15 == (TSharedRef<ITableRow,1> *)0x0) {
              bVar7 = true;
              local_168 = (TReferenceControllerBase<1> *)0x0;
              puVar17 = &local_170;
            }
            else {
              local_158 = (pTVar15->SharedReferenceCount).ReferenceController;
              bVar8 = true;
              pIVar19 = pTVar15->Object;
              if (local_158 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                local_158->SharedReferenceCount =
                     (atomic<int>)((int)local_158->SharedReferenceCount + 1);
                UNLOCK();
              }
              puVar17 = &local_160;
            }
            FVar21.ReferenceController = (TReferenceControllerBase<1> *)puVar17[1];
            puVar17[1] = 0;
            *puVar17 = 0;
            FStack_1d0.ReferenceController = FVar21.ReferenceController;
            if (bVar7) {
              bVar7 = false;
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_168);
            }
            if (bVar8) {
              bVar8 = false;
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_158);
            }
            if (pIVar19 == (ITableRow *)0x0) {
              pcVar5 = *(code **)(this->_padding_ + 0x2c8);
              local_150 = *plVar22;
              local_148 = plVar22[1];
              if (local_148 != 0) {
                LOCK();
                *(int *)(local_148 + 8) = *(int *)(local_148 + 8) + 1;
                UNLOCK();
              }
              plVar16 = (longlong *)(*pcVar5)(this,local_110,&local_150);
              local_198.ReferenceController = (TReferenceControllerBase<1> *)plVar16[1];
              pIVar19 = (ITableRow *)*plVar16;
              if (local_198.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                (local_198.ReferenceController)->SharedReferenceCount =
                     (atomic<int>)((int)(local_198.ReferenceController)->SharedReferenceCount + 1);
                UNLOCK();
              }
              local_1a0 = 0;
              SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_1d0,&local_198);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_198.ReferenceController);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_108);
              if ((pIVar19 == (ITableRow *)0x0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar12)) {
                pcVar5 = (code *)swi(3);
                fVar31 = (float)(*pcVar5)();
                return fVar31;
              }
              (**(code **)((longlong)*pIVar19 + 0x10))(pIVar19,uVar20);
              if ((pIVar19 == (ITableRow *)0x0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x408,L""), bVar12)) {
                pcVar5 = (code *)swi(3);
                fVar31 = (float)(*pcVar5)();
                return fVar31;
              }
              FVar21.ReferenceController = FStack_1d0.ReferenceController;
              local_138.SharedReferenceCount.ReferenceController = FStack_1d0.ReferenceController;
              if (FStack_1d0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                (FStack_1d0.ReferenceController)->SharedReferenceCount =
                     (atomic<int>)((int)(FStack_1d0.ReferenceController)->SharedReferenceCount + 1);
                UNLOCK();
              }
              local_138.Object = pIVar19;
              if ((pIVar19 == (ITableRow *)0x0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x25d,L""), bVar12)) {
                pcVar5 = (code *)swi(3);
                fVar31 = (float)(*pcVar5)();
                return fVar31;
              }
              local_128.Object = (FString *)*plVar22;
              local_128.SharedReferenceCount.ReferenceController =
                   (TReferenceControllerBase<1> *)plVar22[1];
              if (local_128.SharedReferenceCount.ReferenceController !=
                  (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                (local_128.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                     (atomic<int>)
                     ((int)(local_128.SharedReferenceCount.ReferenceController)->
                           SharedReferenceCount + 1);
                UNLOCK();
              }
              FWidgetGenerator::OnItemSeen(&this->WidgetGenerator,&local_128,&local_138);
              if ((pIVar19 == (ITableRow *)0x0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar12)) {
                pcVar5 = (code *)swi(3);
                fVar31 = (float)(*pcVar5)();
                return fVar31;
              }
              puVar17 = (undefined8 *)(**(code **)((longlong)*pIVar19 + 0x58))(pIVar19,local_100);
              SWidget::SlatePrepass((SWidget *)*puVar17,fVar1);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_f8);
              if ((pIVar19 == (ITableRow *)0x0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar12)) {
                pcVar5 = (code *)swi(3);
                fVar31 = (float)(*pcVar5)();
                return fVar31;
              }
            }
            puVar17 = (undefined8 *)(**(code **)((longlong)*pIVar19 + 0x58))(pIVar19,local_f0);
            FVar18 = SWidget::GetDesiredSize((SWidget *)*puVar17);
            local_1b8 = *(FDeprecateVector2DParameter *)FVar18;
            FTableViewDimensions::FTableViewDimensions
                      (&local_1b0,*(EOrientation *)((longlong)&this->_padding_ + 4),&local_1b8);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_e8);
            if (param_2 <= 0.0) {
              fVar23 = (float)truncf();
              fVar24 = (float)dVar30 - fVar23;
              if ((float)((uint)((float)dVar30 - fVar23) & uVar9) <= __real_322bcc77) {
                auVar26._0_8_ = dVar30 + dVar10;
                fVar24 = fVar29;
              }
              fVar24 = fVar24 * local_1b0.ScrollAxis;
              dVar30 = auVar26._0_8_;
              if (fVar31 <= fVar24) {
                auVar28._8_8_ = 0;
                auVar28._0_8_ = dVar30;
                if (fVar31 == fVar24) {
                  auVar26 = roundpd(auVar26,auVar28,3);
                  dVar30 = auVar26._0_8_;
                }
                else {
                  dVar30 = (double)((float)(int)dVar30 + (fVar24 - fVar31) / local_1b0.ScrollAxis);
                }
              }
              else {
                if (uVar20 != 0) {
                  auVar27._8_8_ = 0;
                  auVar27._0_8_ = dVar30;
                  uVar20 = uVar20 - 1;
                  auVar26 = roundpd(auVar26,auVar27,3);
                  plVar22 = plVar22 + -2;
                  goto LAB_14298c288;
                }
                dVar30 = 0.0;
              }
            }
            else {
              auVar25._8_8_ = 0;
              auVar25._0_8_ = dVar30;
              auVar26 = roundpd(auVar25,auVar25,3);
              fVar24 = (float)(dVar6 - (dVar30 - auVar26._0_8_)) * local_1b0.ScrollAxis;
              if (fVar24 < fVar31) {
                uVar20 = uVar20 + 1;
                plVar22 = plVar22 + 2;
                auVar26._0_8_ = (double)(int)dVar30 + dVar6;
                auVar26._8_8_ = 0;
LAB_14298c288:
                fVar31 = fVar31 - fVar24;
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (FVar21.ReferenceController);
                goto LAB_14298c290;
              }
              if (fVar31 != fVar24) {
                dVar6 = dVar6 - (double)((fVar24 - fVar31) / local_1b0.ScrollAxis);
              }
              dVar30 = (double)(int)dVar30 + dVar6;
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (FVar21.ReferenceController);
            break;
          }
          uVar20 = uVar20 + 1;
          plVar22 = plVar22 + 2;
LAB_14298c290:
          dVar30 = auVar26._0_8_;
        } while (fVar31 != 0.0);
      }
      fVar31 = (float)(**(code **)(this->_padding_ + 0x260))(this,(float)dVar30);
      return fVar31;
    }
  }
  return 0.0;
}

// ScrollIntoView @ 14298c790

/* WARNING: Type propagation algorithm not settling */

EScrollIntoViewResult __thiscall
SListView<TSharedPtr<FString,1>_>::ScrollIntoView
          (SListView<TSharedPtr<FString,1>_> *this,FGeometry *param_1)

{
  EScrollIntoViewAlignment EVar1;
  uint uVar2;
  IItemsSource<TSharedPtr<FString,1>_> *pIVar3;
  TReferenceControllerBase<1> *pTVar4;
  FString *pFVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  bool bVar8;
  EScrollIntoViewResult EVar9;
  longlong *plVar10;
  TSharedPtr<FString,1> *pTVar11;
  undefined8 *puVar12;
  FGeometry *pFVar13;
  ulonglong uVar14;
  TSharedRef<ITableRow,1> *pTVar15;
  ITableRow *pIVar16;
  int iVar17;
  FScriptContainerElement *pFVar18;
  FScriptContainerElement *pFVar19;
  uint uVar20;
  int iVar22;
  longlong lVar23;
  float fVar24;
  double dVar25;
  double dVar26;
  undefined1 auVar27 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  double dVar30;
  undefined1 in_XMM5 [16];
  undefined1 auVar31 [16];
  float fVar32;
  double dVar33;
  float fVar34;
  float fVar35;
  uint local_res8 [2];
  undefined8 local_res18;
  float local_1c0;
  float fStack_1bc;
  TSharedPtr<FString_const_,1> local_1b0;
  longlong *local_1a0;
  TReferenceControllerBase<1> *local_198;
  FDeprecateVector2DParameter local_190;
  FDeprecateVector2DParameter local_188;
  FDeprecateVector2DParameter local_180;
  FDeprecateVector2DParameter local_178;
  FDeprecateVector2DParameter local_170;
  undefined8 local_168;
  FSharedReferencer<1> FStack_160;
  FString *local_158;
  TReferenceControllerBase<1> *local_150;
  undefined8 local_148;
  TReferenceControllerBase<1> *local_140;
  undefined8 local_138;
  TReferenceControllerBase<1> *local_130;
  FTableViewDimensions local_128;
  FTableViewDimensions local_118;
  FTableViewDimensions local_108;
  FTableViewDimensions local_f8;
  FTableViewDimensions local_e8;
  TArrayView<TSharedPtr<FString,1>_const_,int> local_d8;
  undefined1 local_c8 [8];
  TReferenceControllerBase<1> *local_c0;
  undefined1 local_b8 [8];
  TReferenceControllerBase<1> *local_b0;
  FString *local_a8;
  TReferenceControllerBase<1> *pTStack_a0;
  undefined1 local_98 [8];
  TReferenceControllerBase<1> *local_90;
  undefined1 local_88 [80];
  ITableRow *pIVar21;
  
  local_res8[0] = 0;
  pIVar3 = (this->ViewSource).Ptr;
  if ((pIVar3 == (IItemsSource<TSharedPtr<FString,1>_> *)0x0) ||
     ((this->ItemToScrollIntoView).Object == (FString *)0x0)) goto LAB_14298c874;
  plVar10 = (longlong *)(**(code **)((longlong)*pIVar3 + 8))(pIVar3,local_88);
  pTVar4 = (this->ItemToScrollIntoView).SharedReferenceCount.ReferenceController;
  pFVar5 = (this->ItemToScrollIntoView).Object;
  local_d8.DataPtr = (TSharedPtr<FString,1> *)*plVar10;
  local_d8._8_8_ = plVar10[1];
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  iVar17 = (int)local_d8._8_8_;
  for (pTVar11 = local_d8.DataPtr; pTVar11 != local_d8.DataPtr + iVar17; pTVar11 = pTVar11 + 1) {
    if (pTVar11->Object == pFVar5) {
      lVar23 = (longlong)pTVar11 - (longlong)local_d8.DataPtr;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      iVar22 = (int)(lVar23 >> 4);
      if (iVar22 == -1) goto LAB_14298c84b;
      fVar24 = (float)(**(code **)(this->_padding_ + 0x268))(this);
      dVar26 = (double)fVar24;
      if (((dVar26 == 0.0) &&
          (bVar8 = STableViewBase::IsPendingRefresh((STableViewBase *)this), bVar8)) &&
         (dVar26 = (double)this->_padding_, dVar26 == 0.0)) {
        return Deferred;
      }
      STableViewBase::EndInertialScrolling((STableViewBase *)this,false);
      dVar25 = (double)this->_padding_;
      auVar28._8_8_ = 0;
      auVar28._0_8_ = dVar25;
      auVar31 = roundpd(in_XMM5,auVar28,2);
      auVar27._0_8_ = dVar25 + dVar26;
      auVar27._8_8_ = 0;
      auVar28 = roundpd(in_XMM2,auVar27,1);
      auVar29._8_8_ = auVar28._8_8_;
      dVar30 = auVar31._0_8_;
      auVar29._0_8_ = auVar28._0_8_ - dVar30;
      auVar31._0_8_ = (double)(int)auVar29._0_8_ + dVar25;
      auVar31._8_8_ = 0;
      if (this->bNavigateOnScrollIntoView == false) {
        auVar28 = roundpd(auVar31,auVar31,1);
        dVar25 = auVar28._0_8_;
      }
      else {
        auVar7._8_8_ = 0;
        auVar7._0_8_ = dVar25;
        auVar28 = roundpd(auVar29,auVar7,1);
        dVar30 = auVar28._0_8_;
        auVar28 = roundpd(auVar31,auVar31,2);
        dVar25 = auVar28._0_8_;
      }
      dVar33 = (double)iVar22;
      if (((dVar30 <= dVar33) && (dVar33 <= dVar25)) &&
         ((this->ScrollIntoViewAlignment != TopOrLeft &&
          (this->ScrollIntoViewAlignment != BottomOrRight)))) {
        if (this->bNavigateOnScrollIntoView == false) goto LAB_14298cf52;
        pcVar6 = *(code **)(this->_padding_ + 0xd8);
        pTVar11 = TArrayView<TSharedPtr<FString,1>_const_,int>::operator[](&local_d8,iVar22);
        (*pcVar6)(&this->_padding_,&local_1a0,pTVar11);
        if (local_1a0 == (longlong *)0x0) goto LAB_14298ced7;
        if ((local_1a0 == (longlong *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar8)) {
          pcVar6 = (code *)swi(3);
          EVar9 = (*pcVar6)();
          return EVar9;
        }
        puVar12 = (undefined8 *)(**(code **)(*local_1a0 + 0x58))(local_1a0,local_c8);
        pFVar13 = SWidget::GetCachedGeometry((SWidget *)*puVar12);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_c0);
        local_res18._4_4_ = SUB84(pFVar13->Size,4);
        local_res18._0_4_ = SUB84(pFVar13->Size,0);
        local_190._4_4_ =
             (float)UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.Y * local_res18._4_4_ *
             (pFVar13->AccumulatedRenderTransform).M.M[1][1] +
             (float)UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.X * (float)local_res18 *
             (pFVar13->AccumulatedRenderTransform).M.M[0][1] +
             (pFVar13->AccumulatedRenderTransform).Trans.field0_0x0._s_0.Y;
        local_190._0_4_ =
             (float)UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.X * (float)local_res18 *
             (pFVar13->AccumulatedRenderTransform).M.M[0][0] +
             (float)UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.Y * local_res18._4_4_ *
             (pFVar13->AccumulatedRenderTransform).M.M[1][0] +
             (pFVar13->AccumulatedRenderTransform).Trans.field0_0x0._s_0.X;
        FTableViewDimensions::FTableViewDimensions
                  (&local_128,*(EOrientation *)((longlong)&this->_padding_ + 4),&local_190);
        local_res18._4_4_ = SUB84(param_1->Size,4);
        local_res18._0_4_ = SUB84(param_1->Size,0);
        local_188._4_4_ =
             (float)UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.Y * local_res18._4_4_ *
             (param_1->AccumulatedRenderTransform).M.M[1][1] +
             (float)UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.X * (float)local_res18 *
             (param_1->AccumulatedRenderTransform).M.M[0][1] +
             (param_1->AccumulatedRenderTransform).Trans.field0_0x0._s_0.Y;
        local_188._0_4_ =
             (float)UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.Y * local_res18._4_4_ *
             (param_1->AccumulatedRenderTransform).M.M[1][0] +
             (float)UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.X * (float)local_res18 *
             (param_1->AccumulatedRenderTransform).M.M[0][0] +
             (param_1->AccumulatedRenderTransform).Trans.field0_0x0._s_0.X;
        FTableViewDimensions::FTableViewDimensions
                  (&local_118,*(EOrientation *)((longlong)&this->_padding_ + 4),&local_188);
        dVar26 = (double)this->_padding_;
        if (local_128.ScrollAxis < local_118.ScrollAxis) {
          dVar26 = dVar33 - (double)this->NavigationScrollOffset;
          goto LAB_14298cec8;
        }
        local_res18._0_4_ = SUB84(pFVar13->Size,0);
        local_res18._4_4_ = SUB84(pFVar13->Size,4);
        fVar24 = local_res18._4_4_ * (pFVar13->AccumulatedRenderTransform).M.M[1][0];
        local_res18._4_4_ =
             local_res18._4_4_ * (pFVar13->AccumulatedRenderTransform).M.M[1][1] +
             (float)local_res18 * (pFVar13->AccumulatedRenderTransform).M.M[0][1] +
             (pFVar13->AccumulatedRenderTransform).Trans.field0_0x0._s_0.Y;
        local_res18._0_4_ =
             fVar24 + (float)local_res18 * (pFVar13->AccumulatedRenderTransform).M.M[0][0] +
             (pFVar13->AccumulatedRenderTransform).Trans.field0_0x0._s_0.X;
        local_180 = local_res18;
        FTableViewDimensions::FTableViewDimensions
                  (&local_108,*(EOrientation *)((longlong)&this->_padding_ + 4),&local_180);
        local_res18._0_4_ = SUB84(param_1->Size,0);
        local_res18._4_4_ = SUB84(param_1->Size,4);
        fVar24 = local_res18._4_4_ * (param_1->AccumulatedRenderTransform).M.M[1][0];
        local_res18._4_4_ =
             (float)local_res18 * (param_1->AccumulatedRenderTransform).M.M[0][1] +
             local_res18._4_4_ * (param_1->AccumulatedRenderTransform).M.M[1][1] +
             (param_1->AccumulatedRenderTransform).Trans.field0_0x0._s_0.Y;
        local_res18._0_4_ =
             (float)local_res18 * (param_1->AccumulatedRenderTransform).M.M[0][0] + fVar24 +
             (param_1->AccumulatedRenderTransform).Trans.field0_0x0._s_0.X;
        local_178 = local_res18;
        FTableViewDimensions::FTableViewDimensions
                  (&local_f8,*(EOrientation *)((longlong)&this->_padding_ + 4),&local_178);
        fVar24 = __real_3f800000;
        if (local_108.ScrollAxis <= local_f8.ScrollAxis) goto LAB_14298cec8;
        uVar2 = (this->WidgetGenerator).ItemsWithGeneratedWidgets.ArrayNum;
        uVar14 = (ulonglong)(int)uVar2;
        fVar34 = 0.0;
        pFVar18 = (this->WidgetGenerator).ItemsWithGeneratedWidgets.AllocatorInstance.Data;
        pFVar19 = pFVar18 + uVar14 * 0x10;
        fVar35 = 0.0;
        pIVar21 = (ITableRow *)0x0;
        fVar32 = local_108.ScrollAxis;
        goto LAB_14298ccf6;
      }
      EVar1 = this->ScrollIntoViewAlignment;
      if (EVar1 == IntoView) {
        if (dVar25 < dVar33) {
LAB_14298cf1d:
          dVar33 = dVar33 - (dVar26 - __real_3ff0000000000000);
        }
      }
      else if (EVar1 != TopOrLeft) {
        if (EVar1 == CenterAligned) {
          dVar33 = dVar33 + dVar26 * __real_bfe0000000000000;
        }
        else if (EVar1 == BottomOrRight) goto LAB_14298cf1d;
      }
      dVar26 = (double)iVar17 - dVar26;
      if (dVar26 <= 0.0) {
        dVar26 = 0.0;
      }
      if (dVar33 <= dVar26) {
        dVar26 = dVar33;
      }
      if (dVar26 <= 0.0) {
        dVar26 = 0.0;
      }
      STableViewBase::SetScrollOffset((STableViewBase *)this,(float)dVar26);
      goto LAB_14298cf52;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  goto LAB_14298c84b;
LAB_14298ccf6:
  fVar32 = fVar32 - local_f8.ScrollAxis;
  if ((this->WidgetGenerator).ItemsWithGeneratedWidgets.ArrayNum != (int)uVar14) {
    local_res8[0] = local_res8[0] & 0xffffff00;
    `TCheckedPointerIterator<TSharedPtr<FString,1>,int,0>::operator!='::__l2::<lambda_1>::operator()
              (local_res8);
  }
  if (pFVar18 == pFVar19) goto LAB_14298ce95;
  pTVar4 = *(TReferenceControllerBase<1> **)(pFVar18 + 8);
  local_1b0.Object = *(FString **)pFVar18;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1b0.SharedReferenceCount.ReferenceController = pTVar4;
  pTVar15 = TMapBase<TSharedPtr<FString,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<FString,1>,TSharedRef<ITableRow,1>,0>_>
            ::Find((TMapBase<TSharedPtr<FString,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<FString,1>,TSharedRef<ITableRow,1>,0>_>
                    *)&(this->WidgetGenerator).ItemToWidgetMap,&local_1b0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  if (pTVar15 == (TSharedRef<ITableRow,1> *)0x0) {
    uVar20 = (uint)pIVar21 | 2;
    local_140 = (TReferenceControllerBase<1> *)0x0;
    puVar12 = &local_148;
    pIVar16 = (ITableRow *)0x0;
  }
  else {
    local_130 = (pTVar15->SharedReferenceCount).ReferenceController;
    uVar20 = (uint)pIVar21 | 1;
    pIVar16 = pTVar15->Object;
    if (local_130 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_130->SharedReferenceCount = (atomic<int>)((int)local_130->SharedReferenceCount + 1);
      UNLOCK();
    }
    puVar12 = &local_138;
  }
  pTVar4 = (TReferenceControllerBase<1> *)puVar12[1];
  puVar12[1] = 0;
  *puVar12 = 0;
  if ((uVar20 & 2) != 0) {
    uVar20 = uVar20 & 0xfffffffd;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_140);
  }
  if ((uVar20 & 1) != 0) {
    uVar20 = uVar20 & 0xfffffffe;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_130);
  }
  pIVar21 = (ITableRow *)(ulonglong)uVar20;
  if ((pIVar16 == (ITableRow *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    EVar9 = (*pcVar6)();
    return EVar9;
  }
  puVar12 = (undefined8 *)(**(code **)((longlong)*pIVar16 + 0x58))(pIVar16,local_b8);
  pFVar13 = SWidget::GetCachedGeometry((SWidget *)*puVar12);
  fStack_1bc = SUB84(pFVar13->Size,4);
  local_1c0 = SUB84(pFVar13->Size,0);
  local_170._4_4_ =
       local_1c0 * (pFVar13->AccumulatedRenderTransform).M.M[0][1] +
       fStack_1bc * (pFVar13->AccumulatedRenderTransform).M.M[1][1];
  local_170._0_4_ =
       fStack_1bc * (pFVar13->AccumulatedRenderTransform).M.M[1][0] +
       local_1c0 * (pFVar13->AccumulatedRenderTransform).M.M[0][0];
  FTableViewDimensions::FTableViewDimensions
            (&local_e8,*(EOrientation *)((longlong)&this->_padding_ + 4),&local_170);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_b0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  if (fVar32 <= local_e8.ScrollAxis) goto LAB_14298ce8d;
  uVar14 = (ulonglong)uVar2;
  fVar34 = fVar34 + fVar24;
  pFVar18 = pFVar18 + 0x10;
  local_f8.ScrollAxis = local_e8.ScrollAxis;
  goto LAB_14298ccf6;
LAB_14298ce8d:
  fVar34 = fVar34 + fVar32 / local_e8.ScrollAxis;
LAB_14298ce95:
  if ((char)this->_padding_ == '\0') {
    fVar35 = this->NavigationScrollOffset;
  }
  dVar26 = (double)fVar34 + (double)this->_padding_ + (double)fVar35;
LAB_14298cec8:
  STableViewBase::SetScrollOffset((STableViewBase *)this,(float)dVar26);
LAB_14298ced7:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_198);
LAB_14298cf52:
  STableViewBase::RequestLayoutRefresh((STableViewBase *)this);
  pTVar4 = (this->ItemToScrollIntoView).SharedReferenceCount.ReferenceController;
  pFVar5 = (this->ItemToScrollIntoView).Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_a8 = (this->ItemToNotifyWhenInView).Object;
  pTStack_a0 = (this->ItemToNotifyWhenInView).SharedReferenceCount.ReferenceController;
  (this->ItemToNotifyWhenInView).Object = pFVar5;
  (this->ItemToNotifyWhenInView).SharedReferenceCount.ReferenceController = pTVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_a0);
LAB_14298c84b:
  local_168 = 0;
  FStack_160.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->ItemToScrollIntoView != (TSharedPtr<FString,1> *)&local_168) {
    (this->ItemToScrollIntoView).Object = (FString *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ItemToScrollIntoView).SharedReferenceCount,&FStack_160);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_160.ReferenceController);
LAB_14298c874:
  local_158 = (this->ItemToNotifyWhenInView).Object;
  if (local_158 == (FString *)0x0) {
    EVar9 = Failure;
  }
  else if ((char)this->_padding_ == '\0') {
    EVar9 = Success;
  }
  else {
    pcVar6 = *(code **)(this->_padding_ + 0xd8);
    local_150 = (this->ItemToNotifyWhenInView).SharedReferenceCount.ReferenceController;
    if (local_150 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_150->SharedReferenceCount = (atomic<int>)((int)local_150->SharedReferenceCount + 1);
      UNLOCK();
    }
    plVar10 = (longlong *)(*pcVar6)(&this->_padding_,local_98,&local_158);
    lVar23 = *plVar10;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_90);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_150);
    EVar9 = (EScrollIntoViewResult)(lVar23 == 0);
  }
  return EVar9;
}

// SetItemsSource @ 142992ca0

void __thiscall
SListView<TSharedPtr<FString,1>_>::SetItemsSource
          (SListView<TSharedPtr<FString,1>_> *this,
          TUniquePtr<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<FString,1>_>,TDefaultDelete<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<FString,1>_>_>_>
          param_1)

{
  IItemsSource<TSharedPtr<FString,1>_> *pIVar1;
  IItemsSource<TSharedPtr<FString,1>_> IVar2;
  TUniquePtr<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<FString,1>_>,TDefaultDelete<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<FString,1>_>_>_>
  *pTVar3;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  if ((this->_padding_ & 0x400) == 0) {
    pTVar3 = &this->ViewSource;
    if ((IItemsSource<TSharedPtr<FString,1>_> *)pTVar3 != param_1.Ptr) {
      pIVar1 = pTVar3->Ptr;
      pTVar3->Ptr = (IItemsSource<TSharedPtr<FString,1>_> *)*param_1.Ptr;
      *param_1.Ptr = (IItemsSource<TSharedPtr<FString,1>_>)0x0;
      if (pIVar1 != (IItemsSource<TSharedPtr<FString,1>_> *)0x0) {
        (**(code **)*pIVar1)(pIVar1,1);
      }
    }
  }
  else {
    (**(code **)(this->_padding_ + 0x30))();
    this->UserRequestingScrollIntoView = 0;
    this->bNavigateOnScrollIntoView = false;
    local_18 = 0;
    FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&this->ItemToScrollIntoView != (TSharedPtr<FString,1> *)&local_18) {
      (this->ItemToScrollIntoView).Object = (FString *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->ItemToScrollIntoView).SharedReferenceCount,&FStack_10);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_10.ReferenceController);
    STableViewBase::ClearWidgets((STableViewBase *)this);
    pTVar3 = &this->ViewSource;
    if ((IItemsSource<TSharedPtr<FString,1>_> *)pTVar3 != param_1.Ptr) {
      pIVar1 = pTVar3->Ptr;
      pTVar3->Ptr = (IItemsSource<TSharedPtr<FString,1>_> *)*param_1.Ptr;
      *param_1.Ptr = (IItemsSource<TSharedPtr<FString,1>_>)0x0;
      if (pIVar1 != (IItemsSource<TSharedPtr<FString,1>_> *)0x0) {
        (**(code **)*pIVar1)(pIVar1,1);
      }
    }
    (**(code **)(this->_padding_ + 0x250))(this);
  }
  IVar2 = *param_1.Ptr;
  if (IVar2 != (IItemsSource<TSharedPtr<FString,1>_>)0x0) {
    (*(code *)**(undefined8 **)IVar2)(IVar2,1);
  }
  return;
}

// SetSelection @ 1429996b0

/* WARNING: Removing unreachable block (ram,0x0001429996f2) */
/* WARNING: Removing unreachable block (ram,0x000142999717) */

void __thiscall
SListView<TSharedPtr<FString,1>_>::SetSelection
          (SListView<TSharedPtr<FString,1>_> *this,TSharedPtr<FString,1> *param_1,Type param_2)

{
  TOptional<TSharedPtr<FString,1>_>_u_0 local_28;
  TSharedPtr<FString,1> local_18;
  
  Private_FindNextSelectableOrNavigable
            (this,(TOptional<TSharedPtr<FString,1>_> *)&local_28.TypedValue,param_1);
  if (local_28.TypedValue.Object != (FString *)0xffffffffffffffff) {
    local_18.Object = local_28.TypedValue.Object;
    local_18.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)local_28.TypedValue.SharedReferenceCount.ReferenceController
    ;
    if (local_28.TypedValue.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *(atomic<int> *)((longlong)local_28.TypedValue.SharedReferenceCount.ReferenceController + 8) =
           (atomic<int>)
           ((int)*(atomic<int> *)
                  ((longlong)local_28.TypedValue.SharedReferenceCount.ReferenceController + 8) + 1);
      UNLOCK();
    }
    Private_SetSelection(this,&local_18,param_2);
    if (local_28.TypedValue.Object != (FString *)0xffffffffffffffff) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)
                 local_28.TypedValue.SharedReferenceCount.ReferenceController);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SupportsKeyboardFocus @ 1429a6100

bool __thiscall
SListView<TSharedPtr<FString,1>_>::SupportsKeyboardFocus(SListView<TSharedPtr<FString,1>_> *this)

{
  bool *pbVar1;
  
  pbVar1 = TAttribute<bool>::Get(&this->IsFocusable);
  return *pbVar1;
}

// UpdateSelectionSet @ 1429af2e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
SListView<TSharedPtr<FString,1>_>::UpdateSelectionSet(SListView<TSharedPtr<FString,1>_> *this)

{
  TSet<TSharedPtr<FString,1>,DefaultKeyFuncs<TSharedPtr<FString,1>,0>,FDefaultSetAllocator> *this_00
  ;
  int iVar1;
  IItemsSource<TSharedPtr<FString,1>_> *pIVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  undefined8 *puVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong *puVar14;
  undefined1 auStack_158 [32];
  ulonglong local_138;
  longlong local_130;
  undefined1 local_128 [16];
  TReferenceControllerBase<1> *local_118;
  SListView<TSharedPtr<FString,1>_> *local_110;
  TReferenceControllerBase<1> *local_108;
  TReferenceControllerBase<1> *local_100;
  ulonglong *local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [16];
  TSet<TSharedPtr<FString,1>,DefaultKeyFuncs<TSharedPtr<FString,1>,0>,FDefaultSetAllocator> local_d8
  ;
  TSet<TSharedPtr<FString,1>,DefaultKeyFuncs<TSharedPtr<FString,1>,0>,FDefaultSetAllocator> local_88
  ;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_158;
  if ((int)this->_padding_ != 2) {
    pIVar2 = (this->ViewSource).Ptr;
    local_110 = this;
    if (pIVar2 == (IItemsSource<TSharedPtr<FString,1>_> *)0x0) {
      plVar11 = &this->_padding_;
      (**(code **)(*plVar11 + 0x30))(plVar11);
    }
    else {
      uVar10 = 0;
      local_d8.Elements._44_4_ = 0x80;
      local_d8.Elements._0_8_ = 0;
      local_d8.Elements._8_8_ = 0;
      local_d8.Elements._32_8_ = 0;
      local_d8.Elements._40_4_ = 0;
      local_d8.Elements._52_4_ = 0;
      local_d8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_d8.HashSize = 0;
      local_d8.Elements._48_4_ = 0xffffffff;
      puVar8 = (undefined8 *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_e8);
      puVar14 = (ulonglong *)*puVar8;
      uStack_f0 = puVar8[1];
      iVar1 = *(int *)(puVar8 + 1);
      local_f8 = puVar14;
      if (0 < iVar1) {
        this_00 = &this->SelectedItems;
        uVar13 = uVar10;
        do {
          uVar12 = (uint)uVar10;
          uVar9 = 0;
          if ((int)uVar12 < iVar1) {
            uVar9 = ~uVar12 >> 0x1f;
          }
          if (uVar9 == 0) {
            local_130 = (longlong)iVar1;
            local_138 = uVar13;
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
            ;
            if (bVar6) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          pTVar3 = (TReferenceControllerBase<1> *)puVar14[1];
          local_128._8_8_ = *puVar14;
          if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
            UNLOCK();
            LOCK();
            pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
            UNLOCK();
            LOCK();
            pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
            UNLOCK();
          }
          uVar9 = ((uint)((ulonglong)local_128._8_8_ >> 0x14) & 0xffff ^
                  (uint)((ulonglong)local_128._8_8_ >> 4)) * -0x7a143595;
          uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
          local_118 = pTVar3;
          local_108 = (TReferenceControllerBase<1> *)local_128._8_8_;
          local_100 = pTVar3;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar3);
          iVar7 = TSet<TSharedPtr<FString,1>,DefaultKeyFuncs<TSharedPtr<FString,1>,0>,FDefaultSetAllocator>
                  ::FindIndexByHash<TSharedPtr<FString_const_,1>_>
                            (this_00,uVar9 >> 0x10 ^ uVar9,
                             (TSharedPtr<FString_const_,1> *)(local_128 + 8));
          if (iVar7 == -1) {
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar3);
          }
          else {
            lVar4 = *(longlong *)&this_00->Elements;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar3);
            if (lVar4 + (longlong)iVar7 * 0x18 != 0) {
              TSet<TSharedPtr<FString,1>,DefaultKeyFuncs<TSharedPtr<FString,1>,0>,FDefaultSetAllocator>
              ::Emplace<TSharedPtr<FString,1>_const_&>
                        (&local_d8,(TSharedPtr<FString,1> *)local_128,(bool *)&local_108);
            }
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar3);
          uVar10 = (ulonglong)(uVar12 + 1);
          uVar13 = uVar13 + 1;
          puVar14 = puVar14 + 2;
          this = local_110;
        } while ((int)(uVar12 + 1) < iVar1);
      }
      TSet<TSharedPtr<FString,1>,DefaultKeyFuncs<TSharedPtr<FString,1>,0>,FDefaultSetAllocator>::
      Difference(&this->SelectedItems,&local_88,&local_d8);
      TSet<TSharedPtr<FString,1>,DefaultKeyFuncs<TSharedPtr<FString,1>,0>,FDefaultSetAllocator>::
      operator=(&this->SelectedItems,&local_d8);
      local_88.HashSize = 0;
      if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_88.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TSharedPtr<FString,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TSharedPtr<FString,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_88.Elements);
      local_d8.HashSize = 0;
      if (local_d8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_d8.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TSharedPtr<FString,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TSharedPtr<FString,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_d8.Elements);
      plVar11 = &this->_padding_;
      if ((int)(local_88.Elements._8_4_ - local_88.Elements._52_4_) < 1) {
        return;
      }
    }
    (**(code **)(*plVar11 + 0x40))(plVar11,3);
  }
  return;
}

// WidgetFromItem @ 1429b10f0

/* WARNING: Removing unreachable block (ram,0x0001429b1259) */

TSharedPtr<ITableRow,1> * __thiscall
SListView<TSharedPtr<FString,1>_>::WidgetFromItem
          (SListView<TSharedPtr<FString,1>_> *this,TSharedPtr<ITableRow,1> *__return_storage_ptr__,
          TSharedPtr<FString,1> *param_1)

{
  ITableRow *pIVar1;
  TReferenceControllerBase<1> *pTVar2;
  bool bVar3;
  bool bVar4;
  TSharedRef<ITableRow,1> *pTVar5;
  TSharedPtr<FString_const_,1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  TSharedPtr<FString_const_,1> local_48;
  TSharedPtr<FString_const_,1> local_38;
  
  pTVar8 = (param_1->SharedReferenceCount).ReferenceController;
  pTVar7 = (TReferenceControllerBase<1> *)0x0;
  local_48.Object = param_1->Object;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_48.SharedReferenceCount.ReferenceController = pTVar8;
  pTVar5 = TMapBase<TSharedPtr<FString,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<FString,1>,TSharedRef<ITableRow,1>,0>_>
           ::Find((TMapBase<TSharedPtr<FString,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<FString,1>,TSharedRef<ITableRow,1>,0>_>
                   *)&this->_padding_,&local_48);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  if (pTVar5 == (TSharedRef<ITableRow,1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    pTVar8 = pTVar7;
  }
  else {
    pIVar1 = pTVar5->Object;
    pTVar8 = (pTVar5->SharedReferenceCount).ReferenceController;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    if (pIVar1 != (ITableRow *)0x0) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
        UNLOCK();
      }
      __return_storage_ptr__->Object = pIVar1;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar8;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      goto LAB_1429b1266;
    }
  }
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  local_48.Object = param_1->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_48.SharedReferenceCount.ReferenceController = pTVar2;
  pTVar5 = TMapBase<TSharedPtr<FString,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<FString,1>,TSharedRef<ITableRow,1>,0>_>
           ::Find((TMapBase<TSharedPtr<FString,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<FString,1>,TSharedRef<ITableRow,1>,0>_>
                   *)&this->_padding_,&local_48);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (pTVar5 == (TSharedRef<ITableRow,1> *)0x0) {
    local_48.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pTVar6 = &local_48;
    bVar4 = false;
    bVar3 = true;
  }
  else {
    local_38.SharedReferenceCount.ReferenceController =
         (pTVar5->SharedReferenceCount).ReferenceController;
    pTVar7 = (TReferenceControllerBase<1> *)pTVar5->Object;
    if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar6 = &local_38;
    bVar4 = true;
    bVar3 = false;
  }
  pTVar2 = (pTVar6->SharedReferenceCount).ReferenceController;
  (pTVar6->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar6->Object = (FString *)0x0;
  if (bVar3) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  if (bVar4) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
  }
  __return_storage_ptr__->Object = (ITableRow *)pTVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
LAB_1429b1266:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return __return_storage_ptr__;
}

