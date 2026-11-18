// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 126

// SListView<UObject_*> @ 146981990

SListView<UObject_*> * __thiscall
SListView<UObject_*>::SListView<UObject_*>(SListView<UObject_*> *this,Type param_1)

{
  byte *pbVar1;
  
  STableViewBase::STableViewBase((STableViewBase *)this,param_1);
  *(undefined2 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::RegisterGCObject((FGCObject *)&this->_padding_);
  (this->WidgetGenerator).OwnerList = this;
  this->_padding_ = (longlong)&SListView<UObject*___ptr64>::_vftable__for__SCompoundWidget__;
  this->_padding_ = (longlong)&SListView<UObject*___ptr64>::_vftable__for__IScrollableWidget__;
  this->_padding_ = (longlong)&SListView<UObject*___ptr64>::_vftable__for__FGCObject__;
  this->_padding_ =
       (longlong)&SListView<UObject*___ptr64>::_vftable__for__ITypedTableView<UObject*___ptr64>__;
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
  *(undefined8 *)&(this->HighlightedItems).Elements = 0;
  *(undefined8 *)&(this->HighlightedItems).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->HighlightedItems).Elements.field_0x20 = 0;
  this->SelectorItem = (UObject *)0x0;
  this->RangeSelectionStart = (UObject *)0x0;
  *(undefined4 *)&(this->HighlightedItems).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->HighlightedItems).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->HighlightedItems).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->HighlightedItems).Elements.field_0x30 = 0xffffffff;
  (this->HighlightedItems).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->HighlightedItems).HashSize = 0;
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
  this->ItemsSource = (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)0x0;
  this->ItemToScrollIntoView = (UObject *)0x0;
  this->UserRequestingScrollIntoView = 0;
  this->ItemToNotifyWhenInView = (UObject *)0x0;
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
  (this->ViewSource).Ptr = (IItemsSource<UObject_*> *)0x0;
  *(undefined1 *)((longlong)&this->_padding_ + 3) = 1;
  return this;
}

// SListView<FName> @ 146981dc0

SListView<FName> * __thiscall
SListView<FName>::SListView<FName>(SListView<FName> *this,Type param_1)

{
  STableViewBase::STableViewBase((STableViewBase *)this,param_1);
  (this->WidgetGenerator).OwnerList = this;
  *(undefined ***)this = &_vftable__for__SCompoundWidget__;
  *(undefined ***)&this->field_0x2a8 = &_vftable__for__IScrollableWidget__;
  *(undefined ***)&this->field_0x588 = &___7__SListView_VFName____6B_;
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
  (this->SelectorItem).ComparisonIndex = 0;
  (this->SelectorItem).Number = 0;
  (this->RangeSelectionStart).ComparisonIndex = 0;
  (this->RangeSelectionStart).Number = 0;
  *(undefined8 *)&(this->HighlightedItems).Elements = 0;
  *(undefined8 *)&(this->HighlightedItems).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->HighlightedItems).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->HighlightedItems).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->HighlightedItems).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->HighlightedItems).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->HighlightedItems).Elements.field_0x30 = 0xffffffff;
  (this->HighlightedItems).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->HighlightedItems).HashSize = 0;
  (this->ItemToScrollIntoView).ComparisonIndex = 0;
  (this->ItemToScrollIntoView).Number = 0;
  (this->ItemToNotifyWhenInView).Number = 0;
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
  this->ItemsSource = (TArray<FName,TSizedDefaultAllocator<32>_> *)0x0;
  this->UserRequestingScrollIntoView = 0;
  (this->ItemToNotifyWhenInView).ComparisonIndex = 0;
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
  this->field_0x32 = this->field_0x32 | 4;
  this->bIsHierarchyCollapsed = false;
  (this->ViewSource).Ptr = (IItemsSource<FName> *)0x0;
  this->field_0x33 = 1;
  return this;
}

// ~SListView<UObject_*> @ 14698f6a0

void __thiscall SListView<UObject_*>::~SListView<UObject_*>(SListView<UObject_*> *this)

{
  IItemsSource<UObject_*> *pIVar1;
  void *pvVar2;
  ForElementType<FSetElementId> FVar3;
  
  pIVar1 = (this->ViewSource).Ptr;
  if (pIVar1 != (IItemsSource<UObject_*> *)0x0) {
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
  (this->HighlightedItems).HashSize = 0;
  FVar3 = (this->HighlightedItems).Hash.SecondaryData;
  if (FVar3 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  TSparseArray<TSparseSetElement<TObjectPtr<UObject>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<UObject>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->HighlightedItems).Elements);
  (this->SelectedItems).HashSize = 0;
  FVar3 = (this->SelectedItems).Hash.SecondaryData;
  if (FVar3 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  TSparseArray<TSparseSetElement<TObjectPtr<UObject>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<UObject>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::UnregisterGCObject((FGCObject *)&this->_padding_);
  STableViewBase::~STableViewBase((STableViewBase *)this);
  return;
}

// ~SListView<FName> @ 14698fa10

void __thiscall SListView<FName>::~SListView<FName>(SListView<FName> *this)

{
  IItemsSource<FName> *pIVar1;
  void *pvVar2;
  ForElementType<FSetElementId> FVar3;
  
  pIVar1 = (this->ViewSource).Ptr;
  if (pIVar1 != (IItemsSource<FName> *)0x0) {
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
  (this->HighlightedItems).HashSize = 0;
  FVar3 = (this->HighlightedItems).Hash.SecondaryData;
  if (FVar3 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->HighlightedItems).Elements);
  (this->SelectedItems).HashSize = 0;
  FVar3 = (this->SelectedItems).Hash.SecondaryData;
  if (FVar3 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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

// AddReferencedObjects @ 1469a27c0

void __thiscall
SListView<UObject_*>::AddReferencedObjects(SListView<UObject_*> *this,FReferenceCollector *param_1)

{
  TListTypeTraits<UObject_*,void>::AddReferencedObjects<ITableRow>
            (param_1,(TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *)&this->_padding_,
             (TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>
              *)&this->_padding_,
             (TMap<ITableRow_const_*,TObjectPtr<UObject>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TObjectPtr<UObject>,0>_>
              *)&this->_padding_);
  return;
}

// AddReferencedObjects @ 1469a27f0

void __thiscall
SListView<FName>::AddReferencedObjects(SListView<FName> *this,FReferenceCollector *param_1)

{
  return;
}

// AsWidget @ 1469a2940

TSharedRef<SWidget,1> * __thiscall
SListView<UObject_*>::AsWidget
          (SListView<UObject_*> *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

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

// AsWidget @ 1469a29c0

TSharedRef<SWidget,1> * __thiscall
SListView<FName>::AsWidget(SListView<FName> *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  SWidget *pSVar2;
  TSharedRef<SWidget,1> *pTVar3;
  TSharedRef<SWidget,1> local_18;
  
  pTVar3 = TSharedFromThis<SWidget,1>::AsShared
                     ((TSharedFromThis<SWidget,1> *)&this[-1].field_0x460,&local_18);
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

// ClearSelection @ 1469a7120

void __thiscall SListView<UObject_*>::ClearSelection(SListView<UObject_*> *this)

{
  Type *pTVar1;
  
  pTVar1 = TAttribute<enum_ESelectionMode::Type>::Get(&this->_padding_);
  if ((*pTVar1 != None) &&
     (*(int *)&(this->SelectedItems).Elements.field_0x8 !=
      *(int *)&(this->SelectedItems).Elements.field_0x34)) {
    (**(code **)(this->_padding_ + 0x30))(&this->_padding_);
                    /* WARNING: Could not recover jumptable at 0x0001469a7171. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x40))(&this->_padding_,3);
    return;
  }
  return;
}

// ClearSelection @ 1469a7190

void __thiscall SListView<FName>::ClearSelection(SListView<FName> *this)

{
  Type *pTVar1;
  
  pTVar1 = TAttribute<enum_ESelectionMode::Type>::Get(&this->field_0x3e8);
  if ((*pTVar1 != None) &&
     (*(int *)&(this->SelectedItems).Elements.field_0x8 !=
      *(int *)&(this->SelectedItems).Elements.field_0x34)) {
    (**(code **)(*(longlong *)&this->field_0x588 + 0x30))(&this->field_0x588);
                    /* WARNING: Could not recover jumptable at 0x0001469a71e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)&this->field_0x588 + 0x40))(&this->field_0x588,3);
    return;
  }
  return;
}

// Construct @ 1469a9e40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall SListView<UObject_*>::Construct(SListView<UObject_*> *this,FArguments *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  SWidget *pSVar2;
  FTableViewStyle *pFVar3;
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
  longlong *plVar19;
  TReferenceControllerBase<1> *pTVar20;
  atomic<int> *paVar21;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res10 [2];
  FName local_res18;
  FMemScope local_res20;
  undefined1 local_818 [8];
  FDelegateAllocation local_810;
  undefined1 local_800 [8];
  ForAnyElementType local_7f8;
  int local_7f0;
  FString local_7e8;
  undefined1 local_7d8 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_7d0;
  ForAnyElementType FStack_7c8;
  ulonglong local_7c0;
  undefined1 local_7b8 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_7b0;
  ForAnyElementType FStack_7a8;
  ulonglong local_7a0;
  undefined1 local_798 [16];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_788;
  ForAnyElementType FStack_780;
  ulonglong local_778;
  uchar local_770;
  undefined1 local_76f;
  undefined1 local_768 [8];
  void *pvStack_760;
  undefined4 local_758;
  SWidget *local_750;
  TReferenceControllerBase<1> *local_748;
  STextBlock *local_740;
  TReferenceControllerBase<1> *pTStack_738;
  TSharedRef<ISlateMetaData,1> local_730;
  undefined1 local_720 [8];
  undefined1 local_718 [8];
  void *pvStack_710;
  undefined8 local_708;
  TSharedRef<SWidget,1> local_700;
  FDestructionSentinel local_6f0;
  FDestructionSentinel local_6d8;
  FDestructionSentinel local_6c0;
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
  
  *(undefined1 *)((longlong)&this->_padding_ + 5) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 2);
  pTVar20 = (TReferenceControllerBase<1> *)0x0;
  TDelegate<TSharedRef<ITableRow,1>___cdecl(UObject_*,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
  ::operator=(&this->OnGenerateRow,&param_1->_OnGenerateRow);
  TDelegate<TSharedRef<ITableRow,1>___cdecl(UObject_*,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
  ::operator=(&this->OnGeneratePinnedRow,&param_1->_OnGeneratePinnedRow);
  TDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy>::operator=
            (&this->OnRefreshRow,&param_1->_OnRefreshRow);
  TDelegate<void___cdecl(UObject_*,TSharedRef<ITableRow,1>_const_&),FDefaultDelegateUserPolicy>::
  operator=(&this->OnEntryInitialized,&param_1->_OnEntryInitialized);
  TDelegate<void___cdecl(TSharedRef<ITableRow,1>_const_&),FDefaultDelegateUserPolicy>::operator=
            (&this->OnRowReleased,&param_1->_OnRowReleased);
  TDelegate<void___cdecl(UObject_*,TSharedPtr<ITableRow,1>_const_&),FDefaultDelegateUserPolicy>::
  operator=(&this->OnItemScrolledIntoView,&param_1->_OnItemScrolledIntoView);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->OnFinishedScrolling,&param_1->_OnFinishedScrolling);
  pTVar9 = TSharedFromThis<SWidget,1>::AsShared
                     ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_700);
  pTVar1 = (pTVar9->SharedReferenceCount).ReferenceController;
  pSVar2 = pTVar9->Object;
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_700.SharedReferenceCount.ReferenceController);
  }
  else {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_700.SharedReferenceCount.ReferenceController);
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_750 = pSVar2;
  local_748 = pTVar1;
  TVar10 = FArguments::MakeListItemsSource(param_1,(TSharedRef<STableViewBase,1> *)local_628);
  SetItemsSource(this,TVar10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  TDelegate<TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>::operator=
            ((TDelegate<TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy> *)
             &this->_padding_,&param_1->_OnContextMenuOpening);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&this->_padding_,
             &param_1->_OnItemsRebuilt);
  TDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy>::operator=
            (&this->OnClick,&param_1->_OnMouseButtonClick);
  TDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy>::operator=
            (&this->OnDoubleClick,&param_1->_OnMouseButtonDoubleClick);
  TDelegate<void___cdecl(UObject_*,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>::operator=
            (&this->OnSelectionChanged,&param_1->_OnSelectionChanged);
  TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>::operator=
            (&this->OnIsSelectableOrNavigable,&param_1->_OnIsSelectableOrNavigable);
  TAttribute<enum_ESelectionMode::Type>::operator=(&this->_padding_,&param_1->_SelectionMode);
  this->bClearSelectionOnClick = param_1->_ClearSelectionOnClick;
  *(EAllowOverscroll *)&this->_padding_ = param_1->_AllowOverscroll;
  *(EConsumeMouseWheel *)((longlong)&this->_padding_ + 1) = param_1->_ConsumeMouseWheel;
  *(float *)((longlong)&this->_padding_ + 4) = param_1->_WheelScrollMultiplier;
  this->NavigationScrollOffset = param_1->_NavigationScrollOffset;
  this->bHandleGamepadEvents = param_1->_HandleGamepadEvents;
  this->bHandleDirectionalNavigation = param_1->_HandleDirectionalNavigation;
  this->bHandleSpacebarSelection = param_1->_HandleSpacebarSelection;
  TAttribute<bool>::operator=(&this->IsFocusable,&param_1->_IsFocusable);
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
             &param_1->_OnItemToString_Debug,&local_5f0);
  if ((*(int *)&(param_1->_OnItemToString_Debug).field_0x10 == 0) ||
     (plVar19 = *(longlong **)&(param_1->_OnItemToString_Debug).field_0x8,
     plVar19 == (longlong *)0x0)) {
LAB_1469aa1b8:
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_5f0);
    local_818 = (undefined1  [8])0x0;
    local_810.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_810.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_818,
               (FWriteAccessScope *)&local_678);
    local_660 = &local_810;
    puVar11 = UE::Core::Private::DelegateAllocate(0x20,&local_810);
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
              (&this->OnItemToString_Debug,
               (TDelegate<FString___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)local_818);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_818,
               (FWriteAccessScope *)&local_6d8);
    if ((local_810.DelegateSize != 0) &&
       (local_810.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_810.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_810,0,0,0x10);
      local_810.DelegateSize = 0;
    }
    if (local_6d8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_6d8.Accessor,&local_6d8);
    }
    if (local_810.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_810.DelegateAllocator);
    }
    this_00 = (FMRSWRecursiveAccessDetector *)local_818;
  }
  else {
    cVar7 = (**(code **)(*plVar19 + 0x38))();
    if (cVar7 == '\0') goto LAB_1469aa1b8;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_5f0);
    local_800 = (undefined1  [8])0x0;
    local_7f8.Data = (FScriptContainerElement *)0x0;
    local_7f0 = 0;
    TDelegate<FString___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<FString___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)local_800,
               &param_1->_OnItemToString_Debug);
    TDelegate<FString___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>
              (&this->OnItemToString_Debug,
               (TDelegate<FString___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)local_800);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_800,
               (FWriteAccessScope *)&local_6f0);
    if ((local_7f0 != 0) && (local_7f8.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_7f8.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_7f8,0,0,0x10);
      local_7f0 = 0;
    }
    if (local_6f0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_6f0.Accessor,&local_6f0);
    }
    if (local_7f8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_7f8.Data);
    }
    this_00 = (FMRSWRecursiveAccessDetector *)local_800;
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this_00);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->OnEnteredBadState,&param_1->_OnEnteredBadState);
  TDelegate<FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>::
  operator=(&this->OnKeyDownHandler,&param_1->_OnKeyDownHandler);
  pFVar3 = param_1->_ListViewStyle;
  this->Style = pFVar3;
  if (pFVar3 == (FTableViewStyle *)0x0) {
    local_798._0_8_ = FStyleDefaults::GetNoBrush();
  }
  else {
    local_798._0_8_ = &pFVar3->BackgroundBrush;
  }
  local_798[8] = true;
  local_778 = 0;
  local_788.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_780.Data = (FScriptContainerElement *)0x0;
  STableViewBase::SetBackgroundBrush
            ((STableViewBase *)this,(TAttribute<FSlateBrush_const_*> *)local_798);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_788,(FWriteAccessScope *)&local_6c0);
  if (((int)local_778 != 0) && (FStack_780.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_780.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_780,0,0,0x10);
    local_778 = local_778 & 0xffffffff00000000;
  }
  if (local_6c0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_6c0.Accessor,&local_6c0);
  }
  if (FStack_780.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_780.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_788.AccessDetector);
  *(bool *)&this->_padding_ = param_1->_bEnableShadowBoxStyle;
  this->_padding_ = (longlong)param_1->_ShadowBoxStyle;
  TAttribute<int>::operator=(&this->MaxPinnedItems,&param_1->_MaxPinnedItems);
  TAttribute<int>::operator=(&this->DefaultMaxPinnedItems,&param_1->_MaxPinnedItems);
  lVar5 = *(longlong *)&(param_1->_ScrollBarPadding).Right;
  local_7e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_7e8.Data.ArrayNum = 0;
  local_7e8.Data.ArrayMax = 0;
  this->_padding_ = *(longlong *)&param_1->_ScrollBarPadding;
  this->_padding_ = lVar5;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnGenerateRow,
             &local_5d8);
  if ((*(int *)&(this->OnGenerateRow).field_0x10 != 0) &&
     (plVar19 = *(longlong **)&(this->OnGenerateRow).field_0x8, plVar19 != (longlong *)0x0)) {
    cVar7 = (**(code **)(*plVar19 + 0x38))();
    if (cVar7 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_5d8);
      goto LAB_1469aa46a;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_5d8);
  ::FString::AppendChars(&local_7e8,L"Please specify an OnGenerateRow. \n",0x22);
LAB_1469aa46a:
  if ((this->ViewSource).Ptr == (IItemsSource<UObject_*> *)0x0) {
    ::FString::AppendChars(&local_7e8,L"Please specify a ListItemsSource. \n",0x23);
  }
  iVar18 = local_7e8.Data.ArrayNum + -1;
  if (local_7e8.Data.ArrayNum == 0) {
    iVar18 = 0;
  }
  if (iVar18 < 1) {
    local_720[0] = LeftAligned;
    local_720[1] = true;
    local_7b8._0_4_ = 0.0;
    local_7d8._0_4_ = 0.0;
    local_718 = (undefined1  [8])0x0;
    pvStack_710 = (void *)0x0;
    local_708 = 0;
    local_7b8[4] = true;
    local_7b0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_7a8.Data = (FScriptContainerElement *)0x0;
    local_7a0 = 0;
    local_7d8[4] = true;
    local_7d0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_7c8.Data = (FScriptContainerElement *)0x0;
    local_7c0 = 0;
    STableViewBase::ConstructChildren
              ((STableViewBase *)this,(TAttribute<float> *)local_7d8,(TAttribute<float> *)local_7b8,
               (TAttribute<EListItemAlignment> *)local_720,&param_1->_HeaderRow,
               &param_1->_ExternalScrollbar,param_1->_Orientation,&param_1->_OnListViewScrolled,
               param_1->_ScrollBarStyle,param_1->_PreventThrottling);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_7d0,(FWriteAccessScope *)&local_6a8);
    if (((int)local_7c0 != 0) && (FStack_7c8.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_7c8.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_7c8,0,0,0x10);
      local_7c0 = local_7c0 & 0xffffffff00000000;
    }
    if (local_6a8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_6a8.Accessor,&local_6a8);
    }
    if (FStack_7c8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_7c8.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_7d0.AccessDetector);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_7b0,(FWriteAccessScope *)&local_690);
    if (((int)local_7a0 != 0) && (FStack_7a8.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_7a8.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_7a8,0,0,0x10);
      local_7a0 = local_7a0 & 0xffffffff00000000;
    }
    if (local_690.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_690.Accessor,&local_690);
    }
    if (FStack_7a8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_7a8.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_7b0.AccessDetector);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_718);
    if (pvStack_710 != (void *)0x0) {
      FMemory::Free(pvStack_710);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_718);
    if ((SScrollBar *)this->_padding_ != (SScrollBar *)0x0) {
      SScrollBar::SetDragFocusCause((SScrollBar *)this->_padding_,param_1->_ScrollbarDragFocusCause)
      ;
      if (this->_padding_ == 0) {
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
      local_770 = (param_1->_ScrollbarVisibility).Value.Value.Value;
      lVar5 = this->_padding_;
      local_76f = (param_1->_ScrollbarVisibility).bIsSet;
      local_768 = (undefined1  [8])0x0;
      pvStack_760 = (void *)0x0;
      local_758 = 0;
      TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
      CopyFrom<FDefaultDelegateUserPolicy>
                ((TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *)local_768,
                 &(param_1->_ScrollbarVisibility).Getter);
      *(uchar *)(lVar5 + 0x2e0) = local_770;
      *(undefined1 *)(lVar5 + 0x2e1) = local_76f;
      TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
      CopyFrom<FDefaultDelegateUserPolicy>
                ((TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *)(lVar5 + 0x2e8),
                 (TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *)local_768);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_768);
      if (pvStack_760 != (void *)0x0) {
        FMemory::Free(pvStack_760);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_768);
    }
    pTVar9 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_600);
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
      local_730.Object = (ISlateMetaData *)___xmm_00000000000000000000000000000010;
      local_730.SharedReferenceCount.ReferenceController = _UNK_150651568;
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
        pTVar20 = (TReferenceControllerBase<1> *)&pSVar2[2].PersistentState.IncomingUserIndex;
      }
      if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
        pTVar17[1]._padding_ = (longlong)&___7__TTableViewMetadata_PEAVUObject____6B_;
        *(TReferenceControllerBase<1> **)&pTVar17[1].SharedReferenceCount = pTVar20;
        pTVar17[2]._padding_ = 0;
      }
      else {
        LOCK();
        *paVar21 = (atomic<int>)((int)*paVar21 + 1);
        UNLOCK();
        pTVar17[1]._padding_ = (longlong)&___7__TTableViewMetadata_PEAVUObject____6B_;
        *(TReferenceControllerBase<1> **)&pTVar17[1].SharedReferenceCount = pTVar20;
        pTVar17[2]._padding_ = (longlong)pTVar1;
        LOCK();
        pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      local_730.Object = (ISlateMetaData *)(pTVar17 + 1);
      if ((TReferenceControllerBase<1> *)local_730.Object == (TReferenceControllerBase<1> *)0x0) {
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
      pTVar20 = pTVar17;
      local_730.SharedReferenceCount.ReferenceController = pTVar17;
    }
    SWidget::AddMetadataInternal((SWidget *)this,&local_730);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_730.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar20);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  }
  else {
    plVar19 = &this->_padding_;
    *(undefined4 *)plVar19 = 2;
    puVar13 = (undefined4 *)((longlong)&this->_padding_ + 4);
    if (plVar19 == (longlong *)0x0) {
      puVar13 = (undefined4 *)&DAT_00000054;
    }
    *puVar13 = 2;
    pFVar14 = STextBlock::FArguments::FArguments(&local_5a8);
    pFVar15 = FText::FromString(&local_610,&local_7e8);
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
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\SListView.h"
               ,0x135,local_res8);
    FMemScope::~FMemScope(&local_res20);
    FLLMScope::~FLLMScope(local_res10);
    pTVar16 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                        (&local_5c0,(TSharedRef<STextBlock,1> *)(local_628 + 8),pFVar14);
    this_01 = (FSlotBase *)&this->_padding_;
    pTVar20 = (pTVar16->SharedReferenceCount).ReferenceController;
    pSVar4 = pTVar16->Object;
    if (pTVar20 == (TReferenceControllerBase<1> *)0x0) {
      if (plVar19 == (longlong *)0x0) {
        this_01 = (FSlotBase *)&DAT_00000020;
      }
      FSlotBase::DetatchParentFromContent(this_01);
    }
    else {
      LOCK();
      pTVar20->SharedReferenceCount = (atomic<int>)((int)pTVar20->SharedReferenceCount + 1);
      UNLOCK();
      if (plVar19 == (longlong *)0x0) {
        this_01 = (FSlotBase *)&DAT_00000020;
      }
      FSlotBase::DetatchParentFromContent(this_01);
      LOCK();
      pTVar20->SharedReferenceCount = (atomic<int>)((int)pTVar20->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar1 = (this_01->Widget).SharedReferenceCount.ReferenceController;
    (this_01->Widget).Object = (SWidget *)pSVar4;
    (this_01->Widget).SharedReferenceCount.ReferenceController = pTVar20;
    local_740 = pSVar4;
    pTStack_738 = pTVar20;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    FSlotBase::AfterContentOrOwnerAssigned(this_01);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar20);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_618);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_5c0._Widget.SharedReferenceCount.ReferenceController);
    if (local_610.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_610.TextData.Reference + 0x10))();
    }
    STextBlock::FArguments::~FArguments(&local_5a8);
  }
  if (local_7e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_7e8.Data.AllocatorInstance.Data);
  }
  return;
}

// Construct @ 1469aaa10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall SListView<FName>::Construct(SListView<FName> *this,FArguments *param_1)

{
  TUniquePtr<UE::Slate::ItemsSource::IItemsSource<FName>,TDefaultDelete<UE::Slate::ItemsSource::IItemsSource<FName>_>_>
  *pTVar1;
  undefined1 *puVar2;
  longlong *plVar3;
  TReferenceControllerBase<1> *pTVar4;
  SWidget *pSVar5;
  IItemsSource<FName> *pIVar6;
  IItemsSource<FName> IVar7;
  FTableViewStyle *pFVar8;
  STextBlock *pSVar9;
  code *pcVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  char cVar14;
  bool bVar15;
  TSharedRef<SWidget,1> *pTVar16;
  TUniquePtr<UE::Slate::ItemsSource::IItemsSource<FName>,TDefaultDelete<UE::Slate::ItemsSource::IItemsSource<FName>_>_>
  TVar17;
  undefined8 *puVar18;
  ulong64 uVar19;
  undefined4 *puVar20;
  FArguments *pFVar21;
  FText *pFVar22;
  TSharedRef<STextBlock,1> *pTVar23;
  SScrollBar *pSVar24;
  TAttribute<EVisibility> *pTVar25;
  TReferenceControllerBase<1> *pTVar26;
  int iVar27;
  FMRSWRecursiveAccessDetector *this_00;
  FSlotBase *this_01;
  TReferenceControllerBase<1> *pTVar28;
  atomic<int> *paVar29;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res10 [2];
  undefined8 local_res18;
  FName local_res20;
  undefined1 local_8f8 [8];
  FDelegateAllocation local_8f0;
  undefined1 local_8e0 [8];
  ForAnyElementType local_8d8;
  int local_8d0;
  undefined1 local_8c8 [8];
  ForAnyElementType local_8c0;
  int local_8b8;
  undefined1 local_8b0 [8];
  ForAnyElementType local_8a8;
  int local_8a0;
  undefined1 local_898 [8];
  ForAnyElementType local_890;
  int local_888;
  FString local_880;
  undefined1 local_870 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_868;
  ForAnyElementType FStack_860;
  ulonglong local_858;
  undefined1 local_850 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_848;
  ForAnyElementType FStack_840;
  ulonglong local_838;
  undefined1 local_830 [16];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_820;
  ForAnyElementType FStack_818;
  ulonglong local_810;
  SWidget *local_808;
  TReferenceControllerBase<1> *local_800;
  STextBlock *local_7f8;
  TReferenceControllerBase<1> *pTStack_7f0;
  TSharedRef<ISlateMetaData,1> local_7e8;
  undefined1 local_7d8 [8];
  undefined1 local_7d0 [8];
  void *pvStack_7c8;
  undefined8 local_7c0;
  FMemScope local_7b8;
  TSharedRef<SWidget,1> local_7b0;
  FDestructionSentinel local_7a0;
  FDestructionSentinel local_788;
  FDestructionSentinel local_770;
  FDestructionSentinel local_758;
  FDestructionSentinel local_740;
  FDestructionSentinel local_728;
  FDestructionSentinel local_710;
  FDestructionSentinel local_6f8;
  FDestructionSentinel local_6e0;
  FDelegateAllocation *local_6c8;
  TAttribute<FText> local_6c0;
  FReadAccessScope local_690;
  FReadAccessScope local_678;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_660;
  TSharedRef<SWidget,1> local_648;
  FText local_638;
  TSharedRef<STextBlock,1> local_628;
  undefined1 local_618 [32];
  FReadAccessScope local_5f8;
  FReadAccessScope local_5e0;
  TAttribute<EVisibility> local_5c8;
  FArguments local_5a8;
  
  this->field_0x35 = *(undefined1 *)((longlong)&param_1->_padding_ + 2);
  pTVar28 = (TReferenceControllerBase<1> *)0x0;
  TDelegate<TSharedRef<ITableRow,1>___cdecl(FName,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
  ::operator=(&this->OnGenerateRow,&param_1->_OnGenerateRow);
  TDelegate<TSharedRef<ITableRow,1>___cdecl(FName,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
  ::operator=(&this->OnGeneratePinnedRow,&param_1->_OnGeneratePinnedRow);
  TDelegate<void___cdecl(FName),FDefaultDelegateUserPolicy>::operator=
            (&this->OnRefreshRow,&param_1->_OnRefreshRow);
  if (&param_1->_OnEntryInitialized != &this->OnEntryInitialized) {
    local_8e0 = (undefined1  [8])0x0;
    local_8d8.Data = (FScriptContainerElement *)0x0;
    local_8d0 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &param_1->_OnEntryInitialized,(FReadAccessScope *)(local_618 + 8));
    if ((*(int *)&(param_1->_OnEntryInitialized).field_0x10 != 0) &&
       (plVar3 = *(longlong **)&(param_1->_OnEntryInitialized).field_0x8, plVar3 != (longlong *)0x0)
       ) {
      (**(code **)(*plVar3 + 0x50))(plVar3,local_8e0);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_618 + 8));
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnEntryInitialized,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_8e0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_8e0,
               (FWriteAccessScope *)&local_7a0);
    if ((local_8d0 != 0) && (local_8d8.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_8d8.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_8d8,0,0,0x10);
      local_8d0 = 0;
    }
    if (local_7a0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_7a0.Accessor,&local_7a0);
    }
    if (local_8d8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_8d8.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_8e0);
  }
  TDelegate<void___cdecl(TSharedRef<ITableRow,1>_const_&),FDefaultDelegateUserPolicy>::operator=
            (&this->OnRowReleased,&param_1->_OnRowReleased);
  if (&param_1->_OnItemScrolledIntoView != &this->OnItemScrolledIntoView) {
    local_8c8 = (undefined1  [8])0x0;
    local_8c0.Data = (FScriptContainerElement *)0x0;
    local_8b8 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &param_1->_OnItemScrolledIntoView,&local_5f8);
    if ((*(int *)&(param_1->_OnItemScrolledIntoView).field_0x10 != 0) &&
       (plVar3 = *(longlong **)&(param_1->_OnItemScrolledIntoView).field_0x8,
       plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 0x50))(plVar3,local_8c8);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_5f8);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnItemScrolledIntoView,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_8c8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_8c8,
               (FWriteAccessScope *)&local_788);
    if ((local_8b8 != 0) && (local_8c0.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_8c0.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_8c0,0,0,0x10);
      local_8b8 = 0;
    }
    if (local_788.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_788.Accessor,&local_788);
    }
    if (local_8c0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_8c0.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_8c8);
  }
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->OnFinishedScrolling,&param_1->_OnFinishedScrolling);
  pTVar16 = TSharedFromThis<SWidget,1>::AsShared
                      ((TSharedFromThis<SWidget,1> *)&this->field_0x8,&local_7b0);
  pTVar4 = (pTVar16->SharedReferenceCount).ReferenceController;
  pSVar5 = pTVar16->Object;
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_7b0.SharedReferenceCount.ReferenceController);
  }
  else {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_7b0.SharedReferenceCount.ReferenceController);
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_808 = pSVar5;
  local_800 = pTVar4;
  TVar17 = FArguments::MakeListItemsSource(param_1,(TSharedRef<STableViewBase,1> *)local_618);
  if ((this->field_0x31 & 4) == 0) {
    pTVar1 = &this->ViewSource;
    if ((IItemsSource<FName> *)pTVar1 != TVar17.Ptr) {
      pIVar6 = pTVar1->Ptr;
      pTVar1->Ptr = (IItemsSource<FName> *)*TVar17.Ptr;
      *TVar17.Ptr = (IItemsSource<FName>)0x0;
      if (pIVar6 != (IItemsSource<FName> *)0x0) {
        (**(code **)*pIVar6)(pIVar6,1);
      }
    }
  }
  else {
    (**(code **)(*(longlong *)&this->field_0x588 + 0x30))();
    this->UserRequestingScrollIntoView = 0;
    (this->ItemToScrollIntoView).ComparisonIndex = 0;
    (this->ItemToScrollIntoView).Number = 0;
    this->bNavigateOnScrollIntoView = false;
    local_res18 = 0;
    STableViewBase::ClearWidgets((STableViewBase *)this);
    pTVar1 = &this->ViewSource;
    if ((IItemsSource<FName> *)pTVar1 != TVar17.Ptr) {
      pIVar6 = pTVar1->Ptr;
      pTVar1->Ptr = (IItemsSource<FName> *)*TVar17.Ptr;
      *TVar17.Ptr = (IItemsSource<FName>)0x0;
      if (pIVar6 != (IItemsSource<FName> *)0x0) {
        (**(code **)*pIVar6)(pIVar6,1);
      }
    }
    (**(code **)(*(longlong *)this + 0x250))(this);
  }
  IVar7 = *TVar17.Ptr;
  if (IVar7 != (IItemsSource<FName>)0x0) {
    (*(code *)**(undefined8 **)IVar7)(IVar7,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  TDelegate<TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>::operator=
            ((TDelegate<TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy> *)
             &this->field_0x3b8,&param_1->_OnContextMenuOpening);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&this->field_0x3d0,
             &param_1->_OnItemsRebuilt);
  TDelegate<void___cdecl(FName),FDefaultDelegateUserPolicy>::operator=
            (&this->OnClick,&param_1->_OnMouseButtonClick);
  TDelegate<void___cdecl(FName),FDefaultDelegateUserPolicy>::operator=
            (&this->OnDoubleClick,&param_1->_OnMouseButtonDoubleClick);
  TDelegate<void___cdecl(FName,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>::operator=
            (&this->OnSelectionChanged,&param_1->_OnSelectionChanged);
  if (&param_1->_OnIsSelectableOrNavigable != &this->OnIsSelectableOrNavigable) {
    local_8b0 = (undefined1  [8])0x0;
    local_8a8.Data = (FScriptContainerElement *)0x0;
    local_8a0 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &param_1->_OnIsSelectableOrNavigable,&local_5e0);
    if ((*(int *)&(param_1->_OnIsSelectableOrNavigable).field_0x10 != 0) &&
       (plVar3 = *(longlong **)&(param_1->_OnIsSelectableOrNavigable).field_0x8,
       plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 0x50))(plVar3,local_8b0);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_5e0);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnIsSelectableOrNavigable,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_8b0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_8b0,
               (FWriteAccessScope *)&local_770);
    if ((local_8a0 != 0) && (local_8a8.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_8a8.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_8a8,0,0,0x10);
      local_8a0 = 0;
    }
    if (local_770.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_770.Accessor,&local_770);
    }
    if (local_8a8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_8a8.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_8b0);
  }
  TAttribute<enum_ESelectionMode::Type>::operator=(&this->field_0x3e8,&param_1->_SelectionMode);
  this->bClearSelectionOnClick = param_1->_ClearSelectionOnClick;
  this->field_0x548 = param_1->_AllowOverscroll;
  this->field_0x549 = param_1->_ConsumeMouseWheel;
  *(float *)&this->field_0x444 = param_1->_WheelScrollMultiplier;
  this->NavigationScrollOffset = param_1->_NavigationScrollOffset;
  this->bHandleGamepadEvents = param_1->_HandleGamepadEvents;
  this->bHandleDirectionalNavigation = param_1->_HandleDirectionalNavigation;
  this->bHandleSpacebarSelection = param_1->_HandleSpacebarSelection;
  TAttribute<bool>::operator=(&this->IsFocusable,&param_1->_IsFocusable);
  this->bReturnFocusToSelection = param_1->_ReturnFocusToSelection;
  this->bClearScrollVelocityOnSelection = param_1->_ClearScrollVelocityOnSelection;
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
  this->ScrollIntoViewAlignment = param_1->_ScrollIntoViewAlignment;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &param_1->_OnItemToString_Debug,&local_690);
  if ((*(int *)&(param_1->_OnItemToString_Debug).field_0x10 == 0) ||
     (plVar3 = *(longlong **)&(param_1->_OnItemToString_Debug).field_0x8, plVar3 == (longlong *)0x0)
     ) {
LAB_1469ab079:
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_690);
    local_8f8 = (undefined1  [8])0x0;
    local_8f0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_8f0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_8f8,
               (FWriteAccessScope *)&local_6e0);
    local_6c8 = &local_8f0;
    puVar18 = UE::Core::Private::DelegateAllocate(0x20,&local_8f0);
    if (puVar18 != (undefined8 *)0x0) {
      *puVar18 = &
                 ___7__TCommonDelegateInstanceState___A6A_AVFString__VFName___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar19 = FDelegateHandle::GenerateNewID();
      puVar18[2] = uVar19;
      *puVar18 = &
                 ___7__TBaseStaticDelegateInstance___A6A_AVFString__VFName___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar18[3] = TListTypeTraits<FName,void>::DebugDump;
    }
    if (local_6e0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_6e0.Accessor,&local_6e0);
    }
    TDelegate<FString___cdecl(FName),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>
              (&this->OnItemToString_Debug,
               (TDelegate<FString___cdecl(FName),FDefaultDelegateUserPolicy> *)local_8f8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_8f8,
               (FWriteAccessScope *)&local_740);
    if ((local_8f0.DelegateSize != 0) &&
       (local_8f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_8f0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_8f0,0,0,0x10);
      local_8f0.DelegateSize = 0;
    }
    if (local_740.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_740.Accessor,&local_740);
    }
    if (local_8f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_8f0.DelegateAllocator);
    }
    this_00 = (FMRSWRecursiveAccessDetector *)local_8f8;
  }
  else {
    cVar14 = (**(code **)(*plVar3 + 0x38))();
    if (cVar14 == '\0') goto LAB_1469ab079;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_690);
    local_898 = (undefined1  [8])0x0;
    local_890.Data = (FScriptContainerElement *)0x0;
    local_888 = 0;
    TDelegate<FString___cdecl(FName),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<FString___cdecl(FName),FDefaultDelegateUserPolicy> *)local_898,
               &param_1->_OnItemToString_Debug);
    TDelegate<FString___cdecl(FName),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>
              (&this->OnItemToString_Debug,
               (TDelegate<FString___cdecl(FName),FDefaultDelegateUserPolicy> *)local_898);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_898,
               (FWriteAccessScope *)&local_758);
    if ((local_888 != 0) && (local_890.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_890.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_890,0,0,0x10);
      local_888 = 0;
    }
    if (local_758.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_758.Accessor,&local_758);
    }
    if (local_890.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_890.Data);
    }
    this_00 = (FMRSWRecursiveAccessDetector *)local_898;
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this_00);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->OnEnteredBadState,&param_1->_OnEnteredBadState);
  TDelegate<FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>::
  operator=(&this->OnKeyDownHandler,&param_1->_OnKeyDownHandler);
  pFVar8 = param_1->_ListViewStyle;
  this->Style = pFVar8;
  if (pFVar8 == (FTableViewStyle *)0x0) {
    local_830._0_8_ = FStyleDefaults::GetNoBrush();
  }
  else {
    local_830._0_8_ = &pFVar8->BackgroundBrush;
  }
  local_830[8] = true;
  local_810 = 0;
  local_820.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_818.Data = (FScriptContainerElement *)0x0;
  STableViewBase::SetBackgroundBrush
            ((STableViewBase *)this,(TAttribute<FSlateBrush_const_*> *)local_830);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_820,(FWriteAccessScope *)&local_728);
  if (((int)local_810 != 0) && (FStack_818.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_818.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_818,0,0,0x10);
    local_810 = local_810 & 0xffffffff00000000;
  }
  if (local_728.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_728.Accessor,&local_728);
  }
  if (FStack_818.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_818.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_820.AccessDetector);
  this->field_0x450 = param_1->_bEnableShadowBoxStyle;
  *(FScrollBoxStyle **)&this->field_0x458 = param_1->_ShadowBoxStyle;
  TAttribute<int>::operator=(&this->MaxPinnedItems,&param_1->_MaxPinnedItems);
  TAttribute<int>::operator=(&this->DefaultMaxPinnedItems,&param_1->_MaxPinnedItems);
  fVar11 = (param_1->_ScrollBarPadding).Top;
  fVar12 = (param_1->_ScrollBarPadding).Right;
  fVar13 = (param_1->_ScrollBarPadding).Bottom;
  local_880.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_880.Data.ArrayNum = 0;
  local_880.Data.ArrayMax = 0;
  *(float *)&this->field_0x2e8 = (param_1->_ScrollBarPadding).Left;
  *(float *)&this->field_0x2ec = fVar11;
  *(float *)&this->field_0x2f0 = fVar12;
  *(float *)&this->field_0x2f4 = fVar13;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnGenerateRow,
             &local_678);
  if ((*(int *)&(this->OnGenerateRow).field_0x10 != 0) &&
     (plVar3 = *(longlong **)&(this->OnGenerateRow).field_0x8, plVar3 != (longlong *)0x0)) {
    cVar14 = (**(code **)(*plVar3 + 0x38))();
    if (cVar14 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_678);
      goto LAB_1469ab32b;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_678);
  ::FString::AppendChars(&local_880,L"Please specify an OnGenerateRow. \n",0x22);
LAB_1469ab32b:
  if ((this->ViewSource).Ptr == (IItemsSource<FName> *)0x0) {
    ::FString::AppendChars(&local_880,L"Please specify a ListItemsSource. \n",0x23);
  }
  iVar27 = local_880.Data.ArrayNum + -1;
  if (local_880.Data.ArrayNum == 0) {
    iVar27 = 0;
  }
  if (iVar27 < 1) {
    local_7d8[0] = LeftAligned;
    local_7d8[1] = true;
    local_870._0_4_ = 0.0;
    local_850._0_4_ = 0.0;
    local_7d0 = (undefined1  [8])0x0;
    pvStack_7c8 = (void *)0x0;
    local_7c0 = 0;
    local_870[4] = true;
    local_868.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_860.Data = (FScriptContainerElement *)0x0;
    local_858 = 0;
    local_850[4] = true;
    local_848.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_840.Data = (FScriptContainerElement *)0x0;
    local_838 = 0;
    STableViewBase::ConstructChildren
              ((STableViewBase *)this,(TAttribute<float> *)local_850,(TAttribute<float> *)local_870,
               (TAttribute<EListItemAlignment> *)local_7d8,&param_1->_HeaderRow,
               &param_1->_ExternalScrollbar,param_1->_Orientation,&param_1->_OnListViewScrolled,
               param_1->_ScrollBarStyle,param_1->_PreventThrottling);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_848,(FWriteAccessScope *)&local_710);
    if (((int)local_838 != 0) && (FStack_840.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_840.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_840,0,0,0x10);
      local_838 = local_838 & 0xffffffff00000000;
    }
    if (local_710.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_710.Accessor,&local_710);
    }
    if (FStack_840.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_840.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_848.AccessDetector);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_868,(FWriteAccessScope *)&local_6f8);
    if (((int)local_858 != 0) && (FStack_860.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_860.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_860,0,0,0x10);
      local_858 = local_858 & 0xffffffff00000000;
    }
    if (local_6f8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_6f8.Accessor,&local_6f8);
    }
    if (FStack_860.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_860.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_868.AccessDetector);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_7d0);
    if (pvStack_7c8 != (void *)0x0) {
      FMemory::Free(pvStack_7c8);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_7d0);
    if (*(longlong *)&this->field_0x2d8 != 0) {
      pSVar24 = TSharedPtr<SScrollBar,1>::operator->((TSharedPtr<SScrollBar,1> *)&this->field_0x2d8)
      ;
      SScrollBar::SetDragFocusCause(pSVar24,param_1->_ScrollbarDragFocusCause);
      pSVar24 = TSharedPtr<SScrollBar,1>::operator->((TSharedPtr<SScrollBar,1> *)&this->field_0x2d8)
      ;
      pTVar25 = TAttribute<EVisibility>::TAttribute<EVisibility>
                          (&local_5c8,&param_1->_ScrollbarVisibility);
      SScrollBar::SetUserVisibility(pSVar24,pTVar25);
    }
    pTVar16 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->field_0x8,&local_648);
    pTVar4 = (pTVar16->SharedReferenceCount).ReferenceController;
    pSVar5 = pTVar16->Object;
    if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
      paVar29 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar29 = &pTVar4->SharedReferenceCount;
      LOCK();
      *paVar29 = (atomic<int>)((int)*paVar29 + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_648.SharedReferenceCount.ReferenceController);
    pTVar26 = ::operator_new(0x28);
    if (pTVar26 == (TReferenceControllerBase<1> *)0x0) {
      local_7e8.Object = (ISlateMetaData *)___xmm_00000000000000000000000000000010;
      local_7e8.SharedReferenceCount.ReferenceController = _UNK_150651568;
    }
    else {
      pTVar26->SharedReferenceCount = (atomic<int>)0x1;
      pTVar26->WeakReferenceCount = (atomic<int>)0x1;
      pTVar26->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_V__TTableViewMetadata_VFName_____00_SharedPointerInternals__6B_
      ;
      if (pSVar5 != (SWidget *)0x0) {
        pTVar28 = (TReferenceControllerBase<1> *)
                  &pSVar5[2].PersistentState.CachedElementHandle.Ptr.WeakReferenceCount;
      }
      if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
        pTVar26[1]._padding_ = (longlong)&___7__TTableViewMetadata_VFName____6B_;
        *(TReferenceControllerBase<1> **)&pTVar26[1].SharedReferenceCount = pTVar28;
        pTVar26[2]._padding_ = 0;
      }
      else {
        LOCK();
        *paVar29 = (atomic<int>)((int)*paVar29 + 1);
        UNLOCK();
        pTVar26[1]._padding_ = (longlong)&___7__TTableViewMetadata_VFName____6B_;
        *(TReferenceControllerBase<1> **)&pTVar26[1].SharedReferenceCount = pTVar28;
        pTVar26[2]._padding_ = (longlong)pTVar4;
        LOCK();
        pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      local_7e8.Object = (ISlateMetaData *)(pTVar26 + 1);
      if ((TReferenceControllerBase<1> *)local_7e8.Object == (TReferenceControllerBase<1> *)0x0) {
        bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("InObject != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x246,L"");
        if (bVar15) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
      }
      LOCK();
      pTVar26->SharedReferenceCount = (atomic<int>)((int)pTVar26->SharedReferenceCount + 1);
      UNLOCK();
      pTVar28 = pTVar26;
      local_7e8.SharedReferenceCount.ReferenceController = pTVar26;
    }
    SWidget::AddMetadataInternal((SWidget *)this,&local_7e8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_7e8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar28);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  }
  else {
    puVar2 = &this->field_0x268;
    *(undefined4 *)puVar2 = 2;
    puVar20 = (undefined4 *)&this->field_0x26c;
    if (puVar2 == (undefined1 *)0x0) {
      puVar20 = (undefined4 *)&DAT_00000054;
    }
    *puVar20 = 2;
    pFVar21 = STextBlock::FArguments::FArguments(&local_5a8);
    pFVar22 = FText::FromString(&local_638,&local_880);
    FText::FText(&local_6c0.Value,pFVar22);
    local_6c0.bIsSet = true;
    local_6c0.Getter._16_8_ = 0;
    local_6c0.Getter._0_8_ = 0;
    local_6c0.Getter._8_8_ = 0;
    pFVar21 = STextBlock::FArguments::Text(pFVar21,&local_6c0);
    FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_res20 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_7b8,&local_res20,true);
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
              (&local_660,"STextBlock",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\SListView.h"
               ,0x135,local_res8);
    FMemScope::~FMemScope(&local_7b8);
    FLLMScope::~FLLMScope(local_res10);
    pTVar23 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                        (&local_660,&local_628,pFVar21);
    this_01 = (FSlotBase *)&this->field_0x238;
    pTVar28 = (pTVar23->SharedReferenceCount).ReferenceController;
    pSVar9 = pTVar23->Object;
    if (pTVar28 == (TReferenceControllerBase<1> *)0x0) {
      if (puVar2 == (undefined1 *)0x0) {
        this_01 = (FSlotBase *)&DAT_00000020;
      }
      FSlotBase::DetatchParentFromContent(this_01);
    }
    else {
      LOCK();
      pTVar28->SharedReferenceCount = (atomic<int>)((int)pTVar28->SharedReferenceCount + 1);
      UNLOCK();
      if (puVar2 == (undefined1 *)0x0) {
        this_01 = (FSlotBase *)&DAT_00000020;
      }
      FSlotBase::DetatchParentFromContent(this_01);
      LOCK();
      pTVar28->SharedReferenceCount = (atomic<int>)((int)pTVar28->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar4 = (this_01->Widget).SharedReferenceCount.ReferenceController;
    (this_01->Widget).Object = (SWidget *)pSVar9;
    (this_01->Widget).SharedReferenceCount.ReferenceController = pTVar28;
    local_7f8 = pSVar9;
    pTStack_7f0 = pTVar28;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    FSlotBase::AfterContentOrOwnerAssigned(this_01);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar28);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_628.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_660._Widget.SharedReferenceCount.ReferenceController);
    if (local_638.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_638.TextData.Reference + 0x10))();
    }
    STextBlock::FArguments::~FArguments(&local_5a8);
  }
  if (local_880.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_880.Data.AllocatorInstance.Data);
  }
  return;
}

// CreateAccessibleWidget @ 1469b2680

TSharedRef<FSlateAccessibleWidget,1> * __thiscall
SListView<UObject_*>::CreateAccessibleWidget
          (SListView<UObject_*> *this,TSharedRef<FSlateAccessibleWidget,1> *__return_storage_ptr__)

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
           (longlong)
           &SListView<UObject*___ptr64>::FSlateAccessibleListView::
            _vftable__for__FSlateAccessibleWidget__;
      this_00[1]._padding_ =
           (longlong)
           &SListView<UObject*___ptr64>::FSlateAccessibleListView::_vftable__for__IAccessibleTable__
      ;
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
           (longlong)
           &SListView<UObject*___ptr64>::FSlateAccessibleListView::
            _vftable__for__FSlateAccessibleWidget__;
      this_00[1]._padding_ =
           (longlong)
           &SListView<UObject*___ptr64>::FSlateAccessibleListView::_vftable__for__IAccessibleTable__
      ;
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

// CreateAccessibleWidget @ 1469b2800

TSharedRef<FSlateAccessibleWidget,1> * __thiscall
SListView<FName>::CreateAccessibleWidget
          (SListView<FName> *this,TSharedRef<FSlateAccessibleWidget,1> *__return_storage_ptr__)

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
                       ((TSharedFromThis<SWidget,1> *)&this->field_0x8,&local_18);
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

// GenerateNewPinnedWidget @ 1469ca990

TSharedRef<ITableRow,1> * __thiscall
SListView<UObject_*>::GenerateNewPinnedWidget
          (SListView<UObject_*> *this,TSharedRef<ITableRow,1> *__return_storage_ptr__,
          UObject *param_1,int param_2,int param_3)

{
  SWidget *pSVar1;
  TReferenceControllerBase<1> *pTVar2;
  char cVar3;
  TSharedRef<SWidget,1> *pTVar4;
  FArguments *pFVar5;
  FArguments *pFVar6;
  FText *pFVar7;
  TSharedRef<STextBlock,1> *pTVar8;
  TSlateDecl<STableRow<UObject_*>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<UObject_*>,1>_&&>_>
  *this_00;
  TReferenceControllerBase<1> *pTVar9;
  longlong *plVar10;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_948 [2];
  FDestructionSentinel local_940;
  T1RequiredArgs<TSharedRef<SListView<UObject_*>,1>_&&> local_928;
  TReferenceControllerBase<1> *local_920;
  undefined1 local_918 [32];
  bool local_8f8;
  undefined1 local_8f0 [8];
  ForAnyElementType FStack_8e8;
  ulonglong local_8e0;
  FName local_8d8;
  FReadAccessScope local_8d0;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_8b8;
  TSharedRef<STextBlock,1> local_8a0;
  TSlateDecl<STableRow<UObject_*>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<UObject_*>,1>_&&>_>
  local_890;
  FArguments local_878;
  FArguments local_580;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnGeneratePinnedRow,
             &local_8d0);
  if (((*(int *)&(this->OnGeneratePinnedRow).field_0x10 == 0) ||
      (plVar10 = *(longlong **)&(this->OnGeneratePinnedRow).field_0x8, plVar10 == (longlong *)0x0))
     || (cVar3 = (**(code **)(*plVar10 + 0x38))(), cVar3 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_8d0);
    pFVar5 = STableRow<UObject_*>::FArguments::FArguments(&local_878);
    pFVar6 = STextBlock::FArguments::FArguments(&local_580);
    pFVar7 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)&local_8d0,L"SListView",L"OnGeneratePinnedRowNotAssignedMessage",
                        L"OnGeneratePinnedRow() not assigned.");
    FText::FText((FText *)(local_918 + 0x10),pFVar7);
    local_8f8 = true;
    local_8e0 = 0;
    local_8f0 = (undefined1  [8])0x0;
    FStack_8e8.Data = (FScriptContainerElement *)0x0;
    FText::operator=(&(pFVar6->_Text).Value,(FText *)(local_918 + 0x10));
    (pFVar6->_Text).bIsSet = local_8f8;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar6->_Text).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_8f0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_8f0,
               (FWriteAccessScope *)&local_940);
    if (((int)local_8e0 != 0) && (FStack_8e8.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_8e8.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_8e8,0,0,0x10);
      local_8e0 = local_8e0 & 0xffffffff00000000;
    }
    if (local_940.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_940.Accessor,&local_940);
    }
    if (FStack_8e8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_8e8.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_8f0);
    if ((longlong *)local_918._16_8_ != (longlong *)0x0) {
      (**(code **)(*(longlong *)local_918._16_8_ + 0x10))();
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
    pTVar8 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                       (&local_8b8,&local_8a0,pFVar6);
    pTVar9 = (pTVar8->SharedReferenceCount).ReferenceController;
    local_940._0_8_ = pTVar8->Object;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar2 = (pFVar5->_Content).Widget.SharedReferenceCount.ReferenceController;
    (pFVar5->_Content).Widget.Object = (SWidget *)local_940._0_8_;
    (pFVar5->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar9;
    local_940.Accessor = (FMRSWRecursiveAccessDetector *)pTVar9;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    pTVar4 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&this->_padding_,
                        (TSharedRef<SWidget,1> *)&local_940);
    local_918._0_8_ = pTVar4->Object;
    local_918._8_8_ = (pTVar4->SharedReferenceCount).ReferenceController;
    if ((TReferenceControllerBase<1> *)local_918._8_8_ != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      ((TReferenceControllerBase<1> *)local_918._8_8_)->SharedReferenceCount =
           (atomic<int>)
           ((int)((TReferenceControllerBase<1> *)local_918._8_8_)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_940.Accessor);
    local_928.Arg0 = (TSharedRef<SListView<UObject_*>,1> *)local_918;
    this_00 = MakeTDecl<STableRow<UObject_*>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<UObject_*>,1>_&&>_>
                        (&local_890,"STableRow<ItemType>",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\SListView.h"
                         ,0x68e,&local_928);
    TSlateDecl<STableRow<UObject_*>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<UObject_*>,1>_&&>_>
    ::operator<<=(this_00,(TSharedRef<STableRow<UObject_*>,1> *)&local_940,pFVar5);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_890._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_918._8_8_);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_8a0.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_8b8._Widget.SharedReferenceCount.ReferenceController);
    if ((ITextData *)local_8d0.DestructionSentinel._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_8d0.DestructionSentinel._0_8_ + 0x10))();
    }
    STextBlock::FArguments::~FArguments(&local_580);
    STableRow<UObject_*>::FArguments::~FArguments(&local_878);
    __return_storage_ptr__->Object = (ITableRow *)local_940._0_8_;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)local_940.Accessor;
    pTVar9 = (TReferenceControllerBase<1> *)local_940.Accessor;
    if ((TReferenceControllerBase<1> *)local_940.Accessor != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *(atomic<int> *)((longlong)local_940.Accessor + 8) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)local_940.Accessor + 8) + 1);
      UNLOCK();
    }
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_8d0);
    pTVar4 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&this->_padding_,
                        (TSharedRef<SWidget,1> *)local_918);
    pTVar9 = (pTVar4->SharedReferenceCount).ReferenceController;
    pSVar1 = pTVar4->Object;
    if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_918._8_8_);
    }
    else {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_918._8_8_);
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_928.Arg0 = (TSharedRef<SListView<UObject_*>,1> *)pSVar1;
    local_920 = pTVar9;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnGeneratePinnedRow,
               (FReadAccessScope *)&local_8b8);
    if (*(int *)&(this->OnGeneratePinnedRow).field_0x10 == 0) {
      plVar10 = (longlong *)0x0;
    }
    else {
      plVar10 = *(longlong **)&(this->OnGeneratePinnedRow).field_0x8;
    }
    (**(code **)(*plVar10 + 0x60))(plVar10,__return_storage_ptr__,param_1,&local_928);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_8b8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_920);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return __return_storage_ptr__;
}

// GenerateNewPinnedWidget @ 1469cad90

TSharedRef<ITableRow,1> * __thiscall
SListView<FName>::GenerateNewPinnedWidget
          (SListView<FName> *this,TSharedRef<ITableRow,1> *__return_storage_ptr__,FName param_1,
          int param_2,int param_3)

{
  SWidget *pSVar1;
  TReferenceControllerBase<1> *pTVar2;
  char cVar3;
  TSharedRef<SWidget,1> *pTVar4;
  FArguments *pFVar5;
  FArguments *pFVar6;
  FText *pFVar7;
  TSharedRef<STextBlock,1> *pTVar8;
  TSlateDecl<STableRow<FName>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<FName>,1>_&&>_>
  *this_00;
  TReferenceControllerBase<1> *pTVar9;
  longlong *plVar10;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_948 [2];
  FDestructionSentinel local_940;
  T1RequiredArgs<TSharedRef<SListView<FName>,1>_&&> local_928;
  TReferenceControllerBase<1> *local_920;
  undefined1 local_918 [32];
  bool local_8f8;
  undefined1 local_8f0 [8];
  ForAnyElementType FStack_8e8;
  ulonglong local_8e0;
  FName local_8d8;
  FReadAccessScope local_8d0;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_8b8;
  TSharedRef<STextBlock,1> local_8a0;
  TSlateDecl<STableRow<FName>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<FName>,1>_&&>_>
  local_890;
  FArguments local_878;
  FArguments local_580;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnGeneratePinnedRow,
             &local_8d0);
  if (((*(int *)&(this->OnGeneratePinnedRow).field_0x10 == 0) ||
      (plVar10 = *(longlong **)&(this->OnGeneratePinnedRow).field_0x8, plVar10 == (longlong *)0x0))
     || (cVar3 = (**(code **)(*plVar10 + 0x38))(), cVar3 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_8d0);
    pFVar5 = STableRow<FName>::FArguments::FArguments(&local_878);
    pFVar6 = STextBlock::FArguments::FArguments(&local_580);
    pFVar7 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)&local_8d0,L"SListView",L"OnGeneratePinnedRowNotAssignedMessage",
                        L"OnGeneratePinnedRow() not assigned.");
    FText::FText((FText *)(local_918 + 0x10),pFVar7);
    local_8f8 = true;
    local_8e0 = 0;
    local_8f0 = (undefined1  [8])0x0;
    FStack_8e8.Data = (FScriptContainerElement *)0x0;
    FText::operator=(&(pFVar6->_Text).Value,(FText *)(local_918 + 0x10));
    (pFVar6->_Text).bIsSet = local_8f8;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar6->_Text).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_8f0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_8f0,
               (FWriteAccessScope *)&local_940);
    if (((int)local_8e0 != 0) && (FStack_8e8.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_8e8.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_8e8,0,0,0x10);
      local_8e0 = local_8e0 & 0xffffffff00000000;
    }
    if (local_940.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_940.Accessor,&local_940);
    }
    if (FStack_8e8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_8e8.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_8f0);
    if ((longlong *)local_918._16_8_ != (longlong *)0x0) {
      (**(code **)(*(longlong *)local_918._16_8_ + 0x10))();
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
    pTVar8 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                       (&local_8b8,&local_8a0,pFVar6);
    pTVar9 = (pTVar8->SharedReferenceCount).ReferenceController;
    local_940._0_8_ = pTVar8->Object;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar2 = (pFVar5->_Content).Widget.SharedReferenceCount.ReferenceController;
    (pFVar5->_Content).Widget.Object = (SWidget *)local_940._0_8_;
    (pFVar5->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar9;
    local_940.Accessor = (FMRSWRecursiveAccessDetector *)pTVar9;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    pTVar4 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&this->field_0x8,
                        (TSharedRef<SWidget,1> *)&local_940);
    local_918._0_8_ = pTVar4->Object;
    local_918._8_8_ = (pTVar4->SharedReferenceCount).ReferenceController;
    if ((TReferenceControllerBase<1> *)local_918._8_8_ != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      ((TReferenceControllerBase<1> *)local_918._8_8_)->SharedReferenceCount =
           (atomic<int>)
           ((int)((TReferenceControllerBase<1> *)local_918._8_8_)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_940.Accessor);
    local_928.Arg0 = (TSharedRef<SListView<FName>,1> *)local_918;
    this_00 = MakeTDecl<STableRow<FName>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<FName>,1>_&&>_>
                        (&local_890,"STableRow<ItemType>",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\SListView.h"
                         ,0x68e,&local_928);
    TSlateDecl<STableRow<FName>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<FName>,1>_&&>_>::
    operator<<=(this_00,(TSharedRef<STableRow<FName>,1> *)&local_940,pFVar5);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_890._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_918._8_8_);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_8a0.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_8b8._Widget.SharedReferenceCount.ReferenceController);
    if ((ITextData *)local_8d0.DestructionSentinel._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_8d0.DestructionSentinel._0_8_ + 0x10))();
    }
    STextBlock::FArguments::~FArguments(&local_580);
    STableRow<FName>::FArguments::~FArguments(&local_878);
    __return_storage_ptr__->Object = (ITableRow *)local_940._0_8_;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)local_940.Accessor;
    pTVar9 = (TReferenceControllerBase<1> *)local_940.Accessor;
    if ((TReferenceControllerBase<1> *)local_940.Accessor != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *(atomic<int> *)((longlong)local_940.Accessor + 8) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)local_940.Accessor + 8) + 1);
      UNLOCK();
    }
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_8d0);
    pTVar4 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&this->field_0x8,
                        (TSharedRef<SWidget,1> *)local_918);
    pTVar9 = (pTVar4->SharedReferenceCount).ReferenceController;
    pSVar1 = pTVar4->Object;
    if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_918._8_8_);
    }
    else {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_918._8_8_);
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_928.Arg0 = (TSharedRef<SListView<FName>,1> *)pSVar1;
    local_920 = pTVar9;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnGeneratePinnedRow,
               (FReadAccessScope *)&local_8b8);
    if (*(int *)&(this->OnGeneratePinnedRow).field_0x10 == 0) {
      plVar10 = (longlong *)0x0;
    }
    else {
      plVar10 = *(longlong **)&(this->OnGeneratePinnedRow).field_0x8;
    }
    (**(code **)(*plVar10 + 0x60))(plVar10,__return_storage_ptr__,param_1,&local_928);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_8b8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_920);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return __return_storage_ptr__;
}

// GenerateNewWidget @ 1469cb190

TSharedRef<ITableRow,1> * __thiscall
SListView<UObject_*>::GenerateNewWidget
          (SListView<UObject_*> *this,TSharedRef<ITableRow,1> *__return_storage_ptr__,
          UObject *param_1)

{
  SWidget *pSVar1;
  TReferenceControllerBase<1> *pTVar2;
  char cVar3;
  TSharedRef<SWidget,1> *pTVar4;
  FArguments *pFVar5;
  FArguments *pFVar6;
  FText *pFVar7;
  TSharedRef<STextBlock,1> *pTVar8;
  TSlateDecl<STableRow<UObject_*>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<UObject_*>,1>_&&>_>
  *this_00;
  TReferenceControllerBase<1> *pTVar9;
  longlong *plVar10;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res20 [2];
  FDestructionSentinel local_948;
  T1RequiredArgs<TSharedRef<SListView<UObject_*>,1>_&&> local_930;
  TReferenceControllerBase<1> *local_928;
  undefined1 local_920 [32];
  bool local_900;
  undefined1 local_8f8 [8];
  ForAnyElementType FStack_8f0;
  ulonglong local_8e8;
  FName local_8e0;
  FReadAccessScope local_8d8;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_8c0;
  TSharedRef<STextBlock,1> local_8a8;
  TSlateDecl<STableRow<UObject_*>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<UObject_*>,1>_&&>_>
  local_898;
  FArguments local_880;
  FArguments local_588;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnGenerateRow,
             &local_8d8);
  if (((*(int *)&(this->OnGenerateRow).field_0x10 == 0) ||
      (plVar10 = *(longlong **)&(this->OnGenerateRow).field_0x8, plVar10 == (longlong *)0x0)) ||
     (cVar3 = (**(code **)(*plVar10 + 0x38))(), cVar3 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_8d8);
    pFVar5 = STableRow<UObject_*>::FArguments::FArguments(&local_880);
    pFVar6 = STextBlock::FArguments::FArguments(&local_588);
    pFVar7 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)&local_8d8,L"SListView",L"OnGenerateWidgetNotAssignedMessage",
                        L"OnGenerateWidget() not assigned.");
    FText::FText((FText *)(local_920 + 0x10),pFVar7);
    local_900 = true;
    local_8e8 = 0;
    local_8f8 = (undefined1  [8])0x0;
    FStack_8f0.Data = (FScriptContainerElement *)0x0;
    FText::operator=(&(pFVar6->_Text).Value,(FText *)(local_920 + 0x10));
    (pFVar6->_Text).bIsSet = local_900;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar6->_Text).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_8f8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_8f8,
               (FWriteAccessScope *)&local_948);
    if (((int)local_8e8 != 0) && (FStack_8f0.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_8f0.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_8f0,0,0,0x10);
      local_8e8 = local_8e8 & 0xffffffff00000000;
    }
    if (local_948.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_948.Accessor,&local_948);
    }
    if (FStack_8f0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_8f0.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_8f8);
    if ((longlong *)local_920._16_8_ != (longlong *)0x0) {
      (**(code **)(*(longlong *)local_920._16_8_ + 0x10))();
    }
    FLLMScope::FLLMScope(local_res20,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_8e0 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope((FMemScope *)&local_948,&local_8e0,true);
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
              (&local_8c0,"STextBlock",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\SListView.h"
               ,0x6ad,local_res8);
    FMemScope::~FMemScope((FMemScope *)&local_948);
    FLLMScope::~FLLMScope(local_res20);
    pTVar8 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                       (&local_8c0,&local_8a8,pFVar6);
    pTVar9 = (pTVar8->SharedReferenceCount).ReferenceController;
    local_948._0_8_ = pTVar8->Object;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar2 = (pFVar5->_Content).Widget.SharedReferenceCount.ReferenceController;
    (pFVar5->_Content).Widget.Object = (SWidget *)local_948._0_8_;
    (pFVar5->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar9;
    local_948.Accessor = (FMRSWRecursiveAccessDetector *)pTVar9;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    pTVar4 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&this->_padding_,
                        (TSharedRef<SWidget,1> *)&local_948);
    local_920._0_8_ = pTVar4->Object;
    local_920._8_8_ = (pTVar4->SharedReferenceCount).ReferenceController;
    if ((TReferenceControllerBase<1> *)local_920._8_8_ != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      ((TReferenceControllerBase<1> *)local_920._8_8_)->SharedReferenceCount =
           (atomic<int>)
           ((int)((TReferenceControllerBase<1> *)local_920._8_8_)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_948.Accessor);
    local_930.Arg0 = (TSharedRef<SListView<UObject_*>,1> *)local_920;
    this_00 = MakeTDecl<STableRow<UObject_*>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<UObject_*>,1>_&&>_>
                        (&local_898,"STableRow<ItemType>",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\SListView.h"
                         ,0x6aa,&local_930);
    TSlateDecl<STableRow<UObject_*>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<UObject_*>,1>_&&>_>
    ::operator<<=(this_00,(TSharedRef<STableRow<UObject_*>,1> *)&local_948,pFVar5);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_898._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_920._8_8_);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_8a8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_8c0._Widget.SharedReferenceCount.ReferenceController);
    if ((ITextData *)local_8d8.DestructionSentinel._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_8d8.DestructionSentinel._0_8_ + 0x10))();
    }
    STextBlock::FArguments::~FArguments(&local_588);
    STableRow<UObject_*>::FArguments::~FArguments(&local_880);
    __return_storage_ptr__->Object = (ITableRow *)local_948._0_8_;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)local_948.Accessor;
    pTVar9 = (TReferenceControllerBase<1> *)local_948.Accessor;
    if ((TReferenceControllerBase<1> *)local_948.Accessor != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *(atomic<int> *)((longlong)local_948.Accessor + 8) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)local_948.Accessor + 8) + 1);
      UNLOCK();
    }
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_8d8);
    pTVar4 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&this->_padding_,
                        (TSharedRef<SWidget,1> *)local_920);
    pTVar9 = (pTVar4->SharedReferenceCount).ReferenceController;
    pSVar1 = pTVar4->Object;
    if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_920._8_8_);
    }
    else {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_920._8_8_);
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_930.Arg0 = (TSharedRef<SListView<UObject_*>,1> *)pSVar1;
    local_928 = pTVar9;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnGenerateRow,
               (FReadAccessScope *)&local_8c0);
    if (*(int *)&(this->OnGenerateRow).field_0x10 == 0) {
      plVar10 = (longlong *)0x0;
    }
    else {
      plVar10 = *(longlong **)&(this->OnGenerateRow).field_0x8;
    }
    (**(code **)(*plVar10 + 0x60))(plVar10,__return_storage_ptr__,param_1,&local_930);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_8c0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_928);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return __return_storage_ptr__;
}

// GenerateNewWidget @ 1469cb590

TSharedRef<ITableRow,1> * __thiscall
SListView<FName>::GenerateNewWidget
          (SListView<FName> *this,TSharedRef<ITableRow,1> *__return_storage_ptr__,FName param_1)

{
  SWidget *pSVar1;
  TReferenceControllerBase<1> *pTVar2;
  char cVar3;
  TSharedRef<SWidget,1> *pTVar4;
  FArguments *pFVar5;
  FArguments *pFVar6;
  FText *pFVar7;
  TSharedRef<STextBlock,1> *pTVar8;
  TSlateDecl<STableRow<FName>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<FName>,1>_&&>_>
  *this_00;
  TReferenceControllerBase<1> *pTVar9;
  longlong *plVar10;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res20 [2];
  FDestructionSentinel local_948;
  T1RequiredArgs<TSharedRef<SListView<FName>,1>_&&> local_930;
  TReferenceControllerBase<1> *local_928;
  undefined1 local_920 [32];
  bool local_900;
  undefined1 local_8f8 [8];
  ForAnyElementType FStack_8f0;
  ulonglong local_8e8;
  FName local_8e0;
  FReadAccessScope local_8d8;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_8c0;
  TSharedRef<STextBlock,1> local_8a8;
  TSlateDecl<STableRow<FName>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<FName>,1>_&&>_>
  local_898;
  FArguments local_880;
  FArguments local_588;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnGenerateRow,
             &local_8d8);
  if (((*(int *)&(this->OnGenerateRow).field_0x10 == 0) ||
      (plVar10 = *(longlong **)&(this->OnGenerateRow).field_0x8, plVar10 == (longlong *)0x0)) ||
     (cVar3 = (**(code **)(*plVar10 + 0x38))(), cVar3 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_8d8);
    pFVar5 = STableRow<FName>::FArguments::FArguments(&local_880);
    pFVar6 = STextBlock::FArguments::FArguments(&local_588);
    pFVar7 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)&local_8d8,L"SListView",L"OnGenerateWidgetNotAssignedMessage",
                        L"OnGenerateWidget() not assigned.");
    FText::FText((FText *)(local_920 + 0x10),pFVar7);
    local_900 = true;
    local_8e8 = 0;
    local_8f8 = (undefined1  [8])0x0;
    FStack_8f0.Data = (FScriptContainerElement *)0x0;
    FText::operator=(&(pFVar6->_Text).Value,(FText *)(local_920 + 0x10));
    (pFVar6->_Text).bIsSet = local_900;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar6->_Text).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_8f8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_8f8,
               (FWriteAccessScope *)&local_948);
    if (((int)local_8e8 != 0) && (FStack_8f0.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_8f0.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_8f0,0,0,0x10);
      local_8e8 = local_8e8 & 0xffffffff00000000;
    }
    if (local_948.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_948.Accessor,&local_948);
    }
    if (FStack_8f0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_8f0.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_8f8);
    if ((longlong *)local_920._16_8_ != (longlong *)0x0) {
      (**(code **)(*(longlong *)local_920._16_8_ + 0x10))();
    }
    FLLMScope::FLLMScope(local_res20,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_8e0 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope((FMemScope *)&local_948,&local_8e0,true);
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
              (&local_8c0,"STextBlock",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\SListView.h"
               ,0x6ad,local_res8);
    FMemScope::~FMemScope((FMemScope *)&local_948);
    FLLMScope::~FLLMScope(local_res20);
    pTVar8 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                       (&local_8c0,&local_8a8,pFVar6);
    pTVar9 = (pTVar8->SharedReferenceCount).ReferenceController;
    local_948._0_8_ = pTVar8->Object;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar2 = (pFVar5->_Content).Widget.SharedReferenceCount.ReferenceController;
    (pFVar5->_Content).Widget.Object = (SWidget *)local_948._0_8_;
    (pFVar5->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar9;
    local_948.Accessor = (FMRSWRecursiveAccessDetector *)pTVar9;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    pTVar4 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&this->field_0x8,
                        (TSharedRef<SWidget,1> *)&local_948);
    local_920._0_8_ = pTVar4->Object;
    local_920._8_8_ = (pTVar4->SharedReferenceCount).ReferenceController;
    if ((TReferenceControllerBase<1> *)local_920._8_8_ != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      ((TReferenceControllerBase<1> *)local_920._8_8_)->SharedReferenceCount =
           (atomic<int>)
           ((int)((TReferenceControllerBase<1> *)local_920._8_8_)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_948.Accessor);
    local_930.Arg0 = (TSharedRef<SListView<FName>,1> *)local_920;
    this_00 = MakeTDecl<STableRow<FName>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<FName>,1>_&&>_>
                        (&local_898,"STableRow<ItemType>",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\SListView.h"
                         ,0x6aa,&local_930);
    TSlateDecl<STableRow<FName>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<FName>,1>_&&>_>::
    operator<<=(this_00,(TSharedRef<STableRow<FName>,1> *)&local_948,pFVar5);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_898._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_920._8_8_);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_8a8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_8c0._Widget.SharedReferenceCount.ReferenceController);
    if ((ITextData *)local_8d8.DestructionSentinel._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_8d8.DestructionSentinel._0_8_ + 0x10))();
    }
    STextBlock::FArguments::~FArguments(&local_588);
    STableRow<FName>::FArguments::~FArguments(&local_880);
    __return_storage_ptr__->Object = (ITableRow *)local_948._0_8_;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)local_948.Accessor;
    pTVar9 = (TReferenceControllerBase<1> *)local_948.Accessor;
    if ((TReferenceControllerBase<1> *)local_948.Accessor != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *(atomic<int> *)((longlong)local_948.Accessor + 8) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)local_948.Accessor + 8) + 1);
      UNLOCK();
    }
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_8d8);
    pTVar4 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&this->field_0x8,
                        (TSharedRef<SWidget,1> *)local_920);
    pTVar9 = (pTVar4->SharedReferenceCount).ReferenceController;
    pSVar1 = pTVar4->Object;
    if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_920._8_8_);
    }
    else {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_920._8_8_);
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_930.Arg0 = (TSharedRef<SListView<FName>,1> *)pSVar1;
    local_928 = pTVar9;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnGenerateRow,
               (FReadAccessScope *)&local_8c0);
    if (*(int *)&(this->OnGenerateRow).field_0x10 == 0) {
      plVar10 = (longlong *)0x0;
    }
    else {
      plVar10 = *(longlong **)&(this->OnGenerateRow).field_0x8;
    }
    (**(code **)(*plVar10 + 0x60))(plVar10,__return_storage_ptr__,param_1,&local_930);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_8c0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_928);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return __return_storage_ptr__;
}

// GeneratePinnedWidgetForItem @ 1469cbe90

void __thiscall
SListView<UObject_*>::GeneratePinnedWidgetForItem
          (SListView<UObject_*> *this,UObject **param_1,int param_2,int param_3,float param_4)

{
  code *pcVar1;
  bool bVar2;
  TSharedRef<ITableRow,1> *pTVar3;
  undefined8 *puVar4;
  FArguments *pFVar5;
  TSharedRef<SWidget,1> *pTVar6;
  TSharedRef<SListView<UObject_*>::SListViewPinnedRowWidget,1> *pTVar7;
  FLLMScope local_res8 [2];
  FName local_res10;
  int local_res18 [2];
  int local_res20 [2];
  TSharedPtr<ITableRow,1> local_308;
  TSharedRef<SWidget,1> local_2f8;
  FMemScope local_2e8;
  undefined8 local_2e0;
  FSharedReferencer<1> local_2d8;
  TSharedRef<SListView<UObject_*>,1> local_2d0;
  TSharedRef<ITableRow,1> local_2b8;
  T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<UObject_*>,1>_&&,int_&,int_&>
  local_2a8;
  undefined8 local_288;
  undefined8 local_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined1 local_268 [8];
  TReferenceControllerBase<1> *local_260;
  TSharedRef<SWidget,1> local_258;
  TSharedRef<SListView<UObject_*>::SListViewPinnedRowWidget,1> local_248;
  TSlateDecl<SListView<UObject_*>::SListViewPinnedRowWidget,RequiredArgs::T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<UObject_*>,1>_&&,int_&,int_&>_>
  local_238;
  FSlateBaseNamedArgs local_220;
  
  local_res18[0] = param_2;
  local_res20[0] = param_3;
  if ((*param_1 == (UObject *)0x0) &&
     (bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_8670646794247469468>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\SListView.h"
                         ,0x664,"TListTypeTraits<ItemType>::IsPtrValid(CurItem)"), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pTVar3 = TMapBase<UObject_*,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<ITableRow,1>,0>_>
           ::Find((TMapBase<UObject_*,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<ITableRow,1>,0>_>
                   *)&(this->PinnedWidgetGenerator).ItemToWidgetMap,*param_1);
  if (pTVar3 == (TSharedRef<ITableRow,1> *)0x0) {
    local_270 = 0;
    local_308.Object = (ITableRow *)0x0;
    local_308.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_278 = 0;
  }
  else {
    local_308.Object = pTVar3->Object;
    local_308.SharedReferenceCount.ReferenceController =
         (pTVar3->SharedReferenceCount).ReferenceController;
    if (local_308.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_308.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_308.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_280 = 0;
    local_288 = 0;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (local_308.Object == (ITableRow *)0x0) {
    puVar4 = (undefined8 *)
             (**(code **)(this->_padding_ + 0x2c0))
                       (this,local_268,*param_1,local_res18[0],local_res20[0]);
    local_2d8.ReferenceController = (TReferenceControllerBase<1> *)puVar4[1];
    local_308.Object = (ITableRow *)*puVar4;
    if (local_2d8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_2d8.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_2d8.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_2e0 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&local_308.SharedReferenceCount,&local_2d8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2d8.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_260);
    if ((local_308.Object == (ITableRow *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (**(code **)((longlong)*local_308.Object + 0x10))(local_308.Object,local_res18[0]);
  if ((local_308.Object == (ITableRow *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_2b8.Object = local_308.Object;
  local_2b8.SharedReferenceCount.ReferenceController =
       local_308.SharedReferenceCount.ReferenceController;
  if (local_308.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_308.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_308.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((local_308.Object == (ITableRow *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FWidgetGenerator::OnItemSeen(&this->PinnedWidgetGenerator,*param_1,&local_2b8);
  pFVar5 = SListViewPinnedRowWidget::FArguments::FArguments((FArguments *)&local_220);
  pTVar6 = TSharedFromThis<SWidget,1>::AsShared
                     ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_258);
  local_2d0.Object = (SListView<UObject_*> *)pTVar6->Object;
  local_2d0.SharedReferenceCount.ReferenceController =
       (pTVar6->SharedReferenceCount).ReferenceController;
  if (local_2d0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_2d0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_2d0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_258.SharedReferenceCount.ReferenceController);
  local_2a8.Arg0 = &local_308;
  local_2a8.Arg1 = &local_2d0;
  local_2a8.Arg2 = local_res18;
  local_2a8.Arg3 = local_res20;
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res10 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_2e8,&local_res10,true);
  TSlateDecl<SListView<UObject_*>::SListViewPinnedRowWidget,RequiredArgs::T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<UObject_*>,1>_&&,int_&,int_&>_>
  ::
  TSlateDecl<SListView<UObject_*>::SListViewPinnedRowWidget,RequiredArgs::T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<UObject_*>,1>_&&,int_&,int_&>_>
            (&local_238,"SListViewPinnedRowWidget",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\SListView.h"
             ,0x676,&local_2a8);
  FMemScope::~FMemScope(&local_2e8);
  FLLMScope::~FLLMScope(local_res8);
  pTVar7 = TSlateDecl<SListView<UObject_*>::SListViewPinnedRowWidget,RequiredArgs::T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<UObject_*>,1>_&&,int_&,int_&>_>
           ::operator<<=(&local_238,&local_248,pFVar5);
  local_2f8.Object = (SWidget *)pTVar7->Object;
  local_2f8.SharedReferenceCount.ReferenceController =
       (pTVar7->SharedReferenceCount).ReferenceController;
  if (local_2f8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_2f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_2f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_248.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_238._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2d0.SharedReferenceCount.ReferenceController);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs(&local_220);
  (local_2f8.Object)->field_0x30 = (byte)*(longlong *)&(local_2f8.Object)->field_0x30 | 0x80;
  SWidget::SlatePrepass(local_2f8.Object,param_4);
  STableViewBase::AppendPinnedWidget((STableViewBase *)this,&local_2f8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2f8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_308.SharedReferenceCount.ReferenceController);
  return;
}

// GenerateWidgetForItem @ 1469cc210

float __thiscall
SListView<UObject_*>::GenerateWidgetForItem
          (SListView<UObject_*> *this,UObject **param_1,int param_2,int param_3,float param_4)

{
  longlong *plVar1;
  UObject *pUVar2;
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
  int local_res20;
  ITableRow *local_128;
  FSharedReferencer<1> FStack_120;
  SWidget *local_118;
  TReferenceControllerBase<1> *local_110;
  undefined8 local_108;
  FSharedReferencer<1> local_100;
  TSharedRef<ITableRow,1> local_f8;
  TSharedRef<ITableRow,1> local_e8;
  TSharedRef<ITableRow,1> local_d8;
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
  local_res20 = param_3;
  if (*param_1 == (UObject *)0x0) {
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
  pTVar7 = TMapBase<UObject_*,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<ITableRow,1>,0>_>
           ::Find((TMapBase<UObject_*,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<ITableRow,1>,0>_>
                   *)&(this->WidgetGenerator).ItemToWidgetMap,*param_1);
  if (pTVar7 == (TSharedRef<ITableRow,1> *)0x0) {
    local_a0 = 0;
    FStack_120.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_a8 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    local_128 = pTVar7->Object;
    FStack_120.ReferenceController = (pTVar7->SharedReferenceCount).ReferenceController;
    if (FStack_120.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FStack_120.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FStack_120.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_b0 = 0;
    local_b8 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    if (local_128 != (ITableRow *)0x0) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnRefreshRow,
                 &local_88);
      if ((*(int *)&(this->OnRefreshRow).field_0x10 != 0) &&
         (plVar1 = *(longlong **)&(this->OnRefreshRow).field_0x8, plVar1 != (longlong *)0x0)) {
        cVar6 = (**(code **)(*plVar1 + 0x38))();
        if (cVar6 != '\0') {
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_88);
          pUVar2 = *param_1;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnRefreshRow,
                     local_70);
          if (*(int *)&(this->OnRefreshRow).field_0x10 != 0) {
            plVar11 = *(longlong **)&(this->OnRefreshRow).field_0x8;
          }
          (**(code **)(*plVar11 + 0x60))(plVar11,pUVar2);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(local_70);
          param_3 = local_res20;
          goto LAB_1469cc3c2;
        }
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_88);
      param_3 = local_res20;
      goto LAB_1469cc3c2;
    }
  }
  puVar8 = (undefined8 *)(**(code **)(this->_padding_ + 0x2c8))(this,local_98,*param_1);
  local_100.ReferenceController = (TReferenceControllerBase<1> *)puVar8[1];
  local_128 = (ITableRow *)*puVar8;
  if (local_100.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_100.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_100.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_108 = 0;
  SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_120,&local_100);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_100.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_90);
LAB_1469cc3c2:
  if (local_128 == (ITableRow *)0x0) {
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
  (**(code **)((longlong)*local_128 + 0x10))(local_128,param_2);
  if (local_128 == (ITableRow *)0x0) {
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
  local_d8.Object = local_128;
  local_d8.SharedReferenceCount.ReferenceController = FStack_120.ReferenceController;
  if (FStack_120.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FStack_120.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FStack_120.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (local_128 == (ITableRow *)0x0) {
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
  FWidgetGenerator::OnItemSeen(&this->WidgetGenerator,*param_1,&local_d8);
  if (local_128 == (ITableRow *)0x0) {
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
  (**(code **)((longlong)*local_128 + 0x58))(local_128,&local_118);
  local_118->bNeedsPrepass = '\x01';
  SWidget::SlatePrepass(local_118,param_4);
  if (param_2 < param_3) {
    if (local_128 == (ITableRow *)0x0) {
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
    local_e8.Object = local_128;
    local_e8.SharedReferenceCount.ReferenceController = FStack_120.ReferenceController;
    if (FStack_120.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FStack_120.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FStack_120.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (local_128 == (ITableRow *)0x0) {
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
    STableViewBase::InsertWidget((STableViewBase *)this,&local_e8);
    FVar10.ReferenceController = local_e8.SharedReferenceCount.ReferenceController;
  }
  else {
    if (local_128 == (ITableRow *)0x0) {
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
    local_f8.Object = local_128;
    local_f8.SharedReferenceCount.ReferenceController = FStack_120.ReferenceController;
    if (FStack_120.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FStack_120.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FStack_120.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (local_128 == (ITableRow *)0x0) {
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
    STableViewBase::AppendWidget((STableViewBase *)this,&local_f8);
    FVar10.ReferenceController = local_f8.SharedReferenceCount.ReferenceController;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar10.ReferenceController);
  if (((byte)local_118->VisibilityAttribute & 0x19) == 0) {
    dVar4 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._0_8_;
    dVar13 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._8_8_;
  }
  else {
    FVar9 = SWidget::GetDesiredSize(local_118);
    dVar4 = (double)*(float *)FVar9;
    dVar13 = (double)*(float *)((longlong)FVar9 + 4);
  }
  local_res8 = (float)dVar4;
  local_resc = (float)dVar13;
  FTableViewDimensions::FTableViewDimensions
            (&local_c8,*(EOrientation *)((longlong)&this->_padding_ + 4),
             (FDeprecateVector2DParameter *)&local_res8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_110);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_120.ReferenceController);
  return local_c8.ScrollAxis;
}

// GenerateWidgetForItem @ 1469cc6c0

float __thiscall
SListView<FName>::GenerateWidgetForItem
          (SListView<FName> *this,FName *param_1,int param_2,int param_3,float param_4)

{
  longlong *plVar1;
  FName FVar2;
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
  int local_res20;
  ITableRow *local_128;
  FSharedReferencer<1> FStack_120;
  SWidget *local_118;
  TReferenceControllerBase<1> *local_110;
  undefined8 local_108;
  FSharedReferencer<1> local_100;
  TSharedRef<ITableRow,1> local_f8;
  TSharedRef<ITableRow,1> local_e8;
  TSharedRef<ITableRow,1> local_d8;
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
  local_res20 = param_3;
  if (*param_1 == (FName)0x0) {
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
  pTVar7 = TMapBase<FName,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<ITableRow,1>,0>_>
           ::Find((TMapBase<FName,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<ITableRow,1>,0>_>
                   *)&(this->WidgetGenerator).ItemToWidgetMap,*param_1);
  if (pTVar7 == (TSharedRef<ITableRow,1> *)0x0) {
    local_a0 = 0;
    FStack_120.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_a8 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    local_128 = pTVar7->Object;
    FStack_120.ReferenceController = (pTVar7->SharedReferenceCount).ReferenceController;
    if (FStack_120.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FStack_120.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FStack_120.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_b0 = 0;
    local_b8 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    if (local_128 != (ITableRow *)0x0) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnRefreshRow,
                 &local_88);
      if ((*(int *)&(this->OnRefreshRow).field_0x10 != 0) &&
         (plVar1 = *(longlong **)&(this->OnRefreshRow).field_0x8, plVar1 != (longlong *)0x0)) {
        cVar6 = (**(code **)(*plVar1 + 0x38))();
        if (cVar6 != '\0') {
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_88);
          FVar2 = *param_1;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnRefreshRow,
                     local_70);
          if (*(int *)&(this->OnRefreshRow).field_0x10 != 0) {
            plVar11 = *(longlong **)&(this->OnRefreshRow).field_0x8;
          }
          (**(code **)(*plVar11 + 0x60))(plVar11,FVar2);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(local_70);
          param_3 = local_res20;
          goto LAB_1469cc869;
        }
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_88);
      goto LAB_1469cc869;
    }
  }
  puVar8 = (undefined8 *)(**(code **)(*(longlong *)this + 0x2c8))(this,local_98,*param_1);
  local_100.ReferenceController = (TReferenceControllerBase<1> *)puVar8[1];
  local_128 = (ITableRow *)*puVar8;
  if (local_100.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_100.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_100.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_108 = 0;
  SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_120,&local_100);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_100.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_90);
LAB_1469cc869:
  if (local_128 == (ITableRow *)0x0) {
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
  (**(code **)((longlong)*local_128 + 0x10))(local_128,param_2);
  if (local_128 == (ITableRow *)0x0) {
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
  local_d8.Object = local_128;
  local_d8.SharedReferenceCount.ReferenceController = FStack_120.ReferenceController;
  if (FStack_120.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FStack_120.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FStack_120.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (local_128 == (ITableRow *)0x0) {
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
  FWidgetGenerator::OnItemSeen(&this->WidgetGenerator,*param_1,&local_d8);
  if (local_128 == (ITableRow *)0x0) {
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
  (**(code **)((longlong)*local_128 + 0x58))(local_128,&local_118);
  local_118->bNeedsPrepass = '\x01';
  SWidget::SlatePrepass(local_118,param_4);
  if (param_2 < param_3) {
    if (local_128 == (ITableRow *)0x0) {
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
    local_e8.Object = local_128;
    local_e8.SharedReferenceCount.ReferenceController = FStack_120.ReferenceController;
    if (FStack_120.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FStack_120.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FStack_120.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (local_128 == (ITableRow *)0x0) {
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
    STableViewBase::InsertWidget((STableViewBase *)this,&local_e8);
    FVar10.ReferenceController = local_e8.SharedReferenceCount.ReferenceController;
  }
  else {
    if (local_128 == (ITableRow *)0x0) {
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
    local_f8.Object = local_128;
    local_f8.SharedReferenceCount.ReferenceController = FStack_120.ReferenceController;
    if (FStack_120.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FStack_120.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FStack_120.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (local_128 == (ITableRow *)0x0) {
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
    STableViewBase::AppendWidget((STableViewBase *)this,&local_f8);
    FVar10.ReferenceController = local_f8.SharedReferenceCount.ReferenceController;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar10.ReferenceController);
  if (((byte)local_118->VisibilityAttribute & 0x19) == 0) {
    dVar4 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._0_8_;
    dVar13 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._8_8_;
  }
  else {
    FVar9 = SWidget::GetDesiredSize(local_118);
    dVar4 = (double)*(float *)FVar9;
    dVar13 = (double)*(float *)((longlong)FVar9 + 4);
  }
  local_res8 = (float)dVar4;
  local_resc = (float)dVar13;
  FTableViewDimensions::FTableViewDimensions
            (&local_c8,*(EOrientation *)&this->field_0x44c,
             (FDeprecateVector2DParameter *)&local_res8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_110);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_120.ReferenceController);
  return local_c8.ScrollAxis;
}

// GetDefaultAccessibleText @ 1469ceef0

TOptional<FText> * __thiscall
SListView<UObject_*>::GetDefaultAccessibleText
          (SListView<UObject_*> *this,TOptional<FText> *__return_storage_ptr__,
          EAccessibleType param_1)

{
  code *pcVar1;
  bool bVar2;
  FText *pFVar3;
  TOptional<FText> *pTVar4;
  FText local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_struct_TOptional<FText>___cdecl_SListView<UObject*___ptr64>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_struct_TOptional<FText>___cdecl_SListView<UObject*___ptr64>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_struct_TOptional<FText>___cdecl_SListView<UObject*___ptr64>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FString::FString(&`public:_virtual_struct_TOptional<FText>___cdecl_SListView<UObject*___ptr64>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
                          ::__l2::Name,L"List");
      atexit(`SListView<UObject_*>::GetDefaultAccessibleText'::__l2::
             _dynamic_atexit_destructor_for__Name__);
      _Init_thread_footer(&`public:_virtual_struct_TOptional<FText>___cdecl_SListView<UObject*___ptr64>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pFVar3 = FText::FromString(&local_18,
                             &`public:_virtual_struct_TOptional<FText>___cdecl_SListView<UObject*___ptr64>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
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

// GetDefaultAccessibleText @ 1469cefd0

TOptional<FText> * __thiscall
SListView<FName>::GetDefaultAccessibleText
          (SListView<FName> *this,TOptional<FText> *__return_storage_ptr__,EAccessibleType param_1)

{
  code *pcVar1;
  bool bVar2;
  FText *pFVar3;
  TOptional<FText> *pTVar4;
  FText local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_struct_TOptional<FText>___cdecl_SListView<FName>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_struct_TOptional<FText>___cdecl_SListView<FName>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_struct_TOptional<FText>___cdecl_SListView<FName>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FString::FString(&`public:_virtual_struct_TOptional<FText>___cdecl_SListView<FName>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
                          ::__l2::Name,L"List");
      atexit(`SListView<FName>::GetDefaultAccessibleText'::__l2::
             _dynamic_atexit_destructor_for__Name__);
      _Init_thread_footer(&`public:_virtual_struct_TOptional<FText>___cdecl_SListView<FName>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pFVar3 = FText::FromString(&local_18,
                             &`public:_virtual_struct_TOptional<FText>___cdecl_SListView<FName>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
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

// GetNumItemsBeingObserved @ 1469d2020

int __thiscall SListView<UObject_*>::GetNumItemsBeingObserved(SListView<UObject_*> *this)

{
  IItemsSource<UObject_*> *pIVar1;
  longlong lVar2;
  undefined1 local_18 [24];
  
  pIVar1 = (this->ViewSource).Ptr;
  if (pIVar1 != (IItemsSource<UObject_*> *)0x0) {
    lVar2 = (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_18);
    return (int)*(undefined8 *)(lVar2 + 8);
  }
  return 0;
}

// GetNumItemsBeingObserved @ 1469d2070

int __thiscall SListView<FName>::GetNumItemsBeingObserved(SListView<FName> *this)

{
  IItemsSource<FName> *pIVar1;
  longlong lVar2;
  undefined1 local_18 [24];
  
  pIVar1 = (this->ViewSource).Ptr;
  if (pIVar1 != (IItemsSource<FName> *)0x0) {
    lVar2 = (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_18);
    return (int)*(undefined8 *)(lVar2 + 8);
  }
  return 0;
}

// GetReferencerName @ 1469d6bd0

FString * __thiscall
SListView<UObject_*>::GetReferencerName(SListView<UObject_*> *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"SListView");
  return __return_storage_ptr__;
}

// GetReferencerName @ 1469d6c00

FString * __thiscall
SListView<FName>::GetReferencerName(SListView<FName> *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"SListView");
  return __return_storage_ptr__;
}

// GetSelectedItems @ 1469d72a0

int __thiscall
SListView<UObject_*>::GetSelectedItems
          (SListView<UObject_*> *this,TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  undefined8 local_88;
  TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator> *local_80;
  int iStack_78;
  uint uStack_74;
  undefined1 *local_70;
  undefined4 uStack_68;
  int iStack_64;
  int local_60;
  int iStack_5c;
  TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator> *local_50;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_48;
  
  uVar9 = *(int *)&(this->SelectedItems).Elements.field_0x8 -
          *(int *)&(this->SelectedItems).Elements.field_0x34;
  if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
  }
  piVar1 = &param_1->ArrayMax;
  iVar8 = 0;
  param_1->ArrayNum = 0;
  if (*piVar1 != uVar9) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar9,&param_1->AllocatorInstance,0,piVar1);
  }
  local_80 = &this->SelectedItems;
  uStack_74 = 1;
  iVar3 = *(int *)&(this->SelectedItems).Elements.field_0x28;
  local_70 = &(this->SelectedItems).Elements.field_0x10;
  local_60 = 0;
  iStack_64 = 0;
  if (iVar3 != 0) {
    puVar10 = *(uint **)&(this->SelectedItems).Elements.field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)local_70;
    }
    uVar9 = *puVar10;
    while (uVar9 == 0) {
      lVar7 = (longlong)iVar8;
      local_60 = local_60 + 0x20;
      iVar8 = iVar8 + 1;
      iStack_64 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_1469d738e;
      uVar9 = puVar10[lVar7 + 1];
    }
    uStack_74 = -uVar9 & uVar9;
    uVar2 = (ulonglong)uStack_74 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iStack_64 = (int)lVar7 + -1 + local_60;
    if (iVar3 < iStack_64) {
      iStack_64 = iVar3;
    }
  }
LAB_1469d738e:
  TStack_48._padding_ = CONCAT44(uStack_74,iVar8);
  uStack_68 = 0xffffffff;
  TStack_48.UnvisitedBitMask = 0xffffffff;
  TStack_48._28_4_ = iStack_64;
  TStack_48.BaseBitIndex = local_60;
  iStack_78 = iVar8;
  iStack_5c = iStack_64;
  local_50 = local_80;
  TStack_48.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_70;
  TStack_48.CurrentBitIndex = iStack_64;
  if (iStack_64 < *(int *)&(this->SelectedItems).Elements.field_0x28) {
    do {
      local_88 = *(undefined8 *)
                  (*(longlong *)&local_50->Elements + (longlong)TStack_48.CurrentBitIndex * 0x10);
      pFVar4 = (param_1->AllocatorInstance).Data;
      if (((pFVar4 <= (FScriptContainerElement *)&local_88) &&
          ((FScriptContainerElement *)&local_88 < pFVar4 + (longlong)*piVar1 * 8)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        iVar8 = (*pcVar5)();
        return iVar8;
      }
      iVar8 = param_1->ArrayNum;
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar8 + 1;
      *(undefined8 *)((param_1->AllocatorInstance).Data + (longlong)iVar8 * 8) = local_88;
      TStack_48.UnvisitedBitMask = TStack_48.UnvisitedBitMask & ~TStack_48._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_48);
    } while (TStack_48.CurrentBitIndex < (TStack_48.Array)->NumBits);
  }
  return *(int *)&(this->SelectedItems).Elements.field_0x8 -
         *(int *)&(this->SelectedItems).Elements.field_0x34;
}

// GetSelectedItems @ 1469d7500

TArray<UObject_*,TSizedDefaultAllocator<32>_> * __thiscall
SListView<UObject_*>::GetSelectedItems
          (SListView<UObject_*> *this,
          TArray<UObject_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int *piVar1;
  ulonglong uVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *pTVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  longlong *plVar11;
  undefined8 local_88;
  longlong *local_80;
  int iStack_78;
  uint uStack_74;
  longlong *local_70;
  undefined4 uStack_68;
  int iStack_64;
  int local_60;
  int iStack_5c;
  longlong *local_50;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_48;
  
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar9 = 0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  uVar10 = (int)this->_padding_ - *(int *)((longlong)&this->_padding_ + 4);
  if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
  }
  if (uVar10 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar10,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
  }
  local_80 = &this->_padding_;
  uStack_74 = 1;
  iVar3 = (int)this->_padding_;
  local_70 = &this->_padding_;
  local_60 = iVar9;
  iStack_64 = 0;
  if (iVar3 != 0) {
    plVar11 = (longlong *)this->_padding_;
    if ((longlong *)this->_padding_ == (longlong *)0x0) {
      plVar11 = local_70;
    }
    uVar10 = (uint)*plVar11;
    local_60 = 0;
    iVar9 = 0;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar9;
      local_60 = local_60 + 0x20;
      iVar9 = iVar9 + 1;
      iStack_64 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar9) goto LAB_1469d75e1;
      uVar10 = *(uint *)((longlong)plVar11 + lVar8 * 4 + 4);
    }
    uStack_74 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uStack_74 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iStack_64 = local_60 + -1 + (int)lVar8;
    if (iVar3 < iStack_64) {
      iStack_64 = iVar3;
    }
  }
LAB_1469d75e1:
  uStack_68 = 0xffffffff;
  TStack_48._padding_ = CONCAT44(uStack_74,iVar9);
  TStack_48.UnvisitedBitMask = 0xffffffff;
  TStack_48._28_4_ = iStack_64;
  TStack_48.BaseBitIndex = local_60;
  iStack_78 = iVar9;
  iStack_5c = iStack_64;
  local_50 = local_80;
  TStack_48.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_70;
  TStack_48.CurrentBitIndex = iStack_64;
  if (iStack_64 < iVar3) {
    do {
      local_88 = *(undefined8 *)(*local_50 + (longlong)TStack_48.CurrentBitIndex * 0x10);
      pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
      if (((pFVar4 <= (FScriptContainerElement *)&local_88) &&
          ((FScriptContainerElement *)&local_88 < pFVar4 + (longlong)*piVar1 * 8)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        pTVar7 = (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
        return pTVar7;
      }
      iVar9 = __return_storage_ptr__->ArrayNum;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&__return_storage_ptr__->AllocatorInstance,piVar1);
      }
      __return_storage_ptr__->ArrayNum = iVar9 + 1;
      *(undefined8 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar9 * 8) =
           local_88;
      TStack_48.UnvisitedBitMask = TStack_48.UnvisitedBitMask & ~TStack_48._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_48);
    } while (TStack_48.CurrentBitIndex < (int)*(longlong *)&(TStack_48.Array)->NumBits);
  }
  return __return_storage_ptr__;
}

// GetSelectedItems @ 1469d7730

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
SListView<FName>::GetSelectedItems
          (SListView<FName> *this,TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int *piVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar8;
  longlong lVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  int iVar13;
  uint *puVar14;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_40;
  
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar10 = 0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  uVar12 = *(int *)&this->field_0x288 - *(int *)&this->field_0x2b4;
  if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
  }
  if (uVar12 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,uVar12,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
  }
  uVar12 = 1;
  iVar3 = *(int *)&this->field_0x2a8;
  TStack_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x290;
  iVar13 = iVar10;
  TStack_40.CurrentBitIndex = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&this->field_0x2a0;
    if (*(uint **)&this->field_0x2a0 == (uint *)0x0) {
      puVar14 = (uint *)TStack_40.Array;
    }
    uVar4 = *puVar14;
    iVar13 = 0;
    iVar10 = 0;
    while (uVar4 == 0) {
      lVar9 = (longlong)iVar10;
      iVar13 = iVar13 + 0x20;
      iVar10 = iVar10 + 1;
      TStack_40.CurrentBitIndex = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_1469d7811;
      uVar4 = puVar14[lVar9 + 1];
    }
    uVar12 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar12 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    TStack_40.CurrentBitIndex = (int)lVar9 + -1 + iVar13;
    if (iVar3 < TStack_40.CurrentBitIndex) {
      TStack_40.CurrentBitIndex = iVar3;
    }
  }
LAB_1469d7811:
  TStack_40._padding_ = CONCAT44(uVar12,iVar10);
  TStack_40.UnvisitedBitMask = 0xffffffff;
  TStack_40._28_4_ = TStack_40.CurrentBitIndex;
  TStack_40.BaseBitIndex = iVar13;
  if (TStack_40.CurrentBitIndex < iVar3) {
    do {
      pFVar5 = (__return_storage_ptr__->AllocatorInstance).Data;
      pFVar11 = (FScriptContainerElement *)
                ((longlong)TStack_40.CurrentBitIndex * 0x10 + *(longlong *)&this->field_0x280);
      if (((pFVar5 <= pFVar11) && (pFVar11 < pFVar5 + (longlong)*piVar1 * 8)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        pTVar8 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
        return pTVar8;
      }
      iVar10 = __return_storage_ptr__->ArrayNum;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x408,&__return_storage_ptr__->AllocatorInstance,piVar1);
      }
      __return_storage_ptr__->ArrayNum = iVar10 + 1;
      *(undefined8 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar10 * 8) =
           *(undefined8 *)pFVar11;
      TStack_40.UnvisitedBitMask = TStack_40.UnvisitedBitMask & ~TStack_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_40);
    } while (TStack_40.CurrentBitIndex < (TStack_40.Array)->NumBits);
  }
  return __return_storage_ptr__;
}

// GetTableViewMode @ 1469d8a90

Type __thiscall SListView<UObject_*>::GetTableViewMode(SListView<UObject_*> *this)

{
  return *(Type *)&this[-1].PinnedWidgetGenerator.WidgetMapToItem.field_0x40;
}

// GetTableViewMode @ 1469d8aa0

Type __thiscall SListView<FName>::GetTableViewMode(SListView<FName> *this)

{
  return *(Type *)&this[-1].PinnedWidgetGenerator.ItemsWithGeneratedWidgets.AllocatorInstance.Data;
}

// NavigationSelect @ 1469e46d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SListView<UObject_*>::NavigationSelect
          (SListView<UObject_*> *this,UObject **param_1,FInputEvent *param_2)

{
  FModifierKeysState *pFVar1;
  Type TVar2;
  uint uVar3;
  ushort uVar4;
  Type *pTVar5;
  ushort uVar6;
  longlong *plVar7;
  TOptional<UObject_*> local_18;
  
  Private_FindNextSelectableOrNavigable(this,&local_18,param_1);
  if (local_18.bIsSet == false) {
    return;
  }
  pTVar5 = TAttribute<enum_ESelectionMode::Type>::Get(&this->_padding_);
  TVar2 = *pTVar5;
  if (TVar2 == None) {
    return;
  }
  this->SelectorItem = local_18.TypedValue;
  uVar3 = param_2->UserIndex;
  this->bNavigateOnScrollIntoView = true;
  this->ItemToScrollIntoView = local_18.TypedValue;
  this->UserRequestingScrollIntoView = uVar3;
  STableViewBase::RequestLayoutRefresh((STableViewBase *)this);
  if (*(char *)((longlong)&this->_padding_ + 3) == '\0') {
    return;
  }
  if (TVar2 == Multi) {
    uVar4 = pFVar1->bIsRightShiftDown;
    uVar6 = pFVar1->bIsLeftShiftDown;
    if ((uVar6 == 0) && (uVar4 == 0)) {
      if (pFVar1->bIsLeftControlDown == 0 && pFVar1->bIsRightControlDown == 0) goto LAB_1469e476e;
    }
    else if ((uVar6 != 0) || (uVar4 != 0)) {
      plVar7 = &this->_padding_;
      if (pFVar1->bIsLeftControlDown == 0 && pFVar1->bIsRightControlDown == 0) {
        (**(code **)(*plVar7 + 0x30))(plVar7);
      }
      (**(code **)(*plVar7 + 0x38))(plVar7,local_18.TypedValue);
      (**(code **)(*plVar7 + 0x40))(plVar7,1);
      return;
    }
    plVar7 = &this->_padding_;
    (**(code **)(*plVar7 + 0x28))(plVar7,local_18.TypedValue,1);
    (**(code **)(*plVar7 + 0x40))(plVar7,1);
  }
  else {
LAB_1469e476e:
    Private_SetSelection(this,local_18.TypedValue,OnNavigation);
  }
  return;
}

// NavigationSelect @ 1469e4810

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SListView<UObject_*>::NavigationSelect
          (SListView<UObject_*> *this,UObject **param_1,FNavigationEvent *param_2)

{
  FInputEvent local_38;
  
  local_38._padding_ = (longlong)&___7FInputEvent__6B_;
  local_38.ModifierKeys = *(FModifierKeysState *)&param_2->_padding_;
  local_38.bIsRepeat = *(bool *)((longlong)&param_2->_padding_ + 2);
  local_38.UserIndex = *(uint *)((longlong)&param_2->_padding_ + 4);
  local_38.InputDeviceId.InternalId = (int)param_2->_padding_;
  local_38.EventPath = (FWidgetPath *)param_2->_padding_;
  local_38.EventTimestamp = param_2->_padding_;
  (**(code **)(this->_padding_ + 0x2d8))(this,param_1,&local_38);
  FInputEvent::~FInputEvent(&local_38);
  if (this->bNavigateOnScrollIntoView != false) {
    this->NavigationTypeOnScrollIntoView = param_2->NavigationType;
    return;
  }
  this->NavigationTypeOnScrollIntoView = Invalid;
  return;
}

// NavigationSelect @ 1469e48b0

/* WARNING: Removing unreachable block (ram,0x0001469e4902) */
/* WARNING: Removing unreachable block (ram,0x0001469e4927) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SListView<FName>::NavigationSelect(SListView<FName> *this,FName *param_1,FInputEvent *param_2)

{
  FModifierKeysState *pFVar1;
  Type TVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  ushort uVar6;
  Type *pTVar7;
  ushort uVar8;
  FNameEntryId FVar9;
  undefined1 *puVar10;
  FName local_res20;
  
  Private_FindNextSelectableOrNavigable(this,&local_res20);
  FVar9 = local_res20.ComparisonIndex.Value;
  if (FVar9.Value == 0xffffffff) {
    return;
  }
  pTVar7 = TAttribute<enum_ESelectionMode::Type>::Get(&this->field_0x3e8);
  TVar2 = *pTVar7;
  if (TVar2 == None) {
    return;
  }
  this->SelectorItem = local_res20;
  uVar3 = param_2->UserIndex;
  if ((FVar9.Value == 0xffffffff) &&
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
  this->bNavigateOnScrollIntoView = true;
  this->ItemToScrollIntoView = local_res20;
  this->UserRequestingScrollIntoView = uVar3;
  STableViewBase::RequestLayoutRefresh((STableViewBase *)this);
  if (this->field_0x32b == '\0') {
    return;
  }
  if (TVar2 == Multi) {
    uVar6 = pFVar1->bIsRightShiftDown;
    uVar8 = pFVar1->bIsLeftShiftDown;
    if ((uVar8 == 0) && (uVar6 == 0)) {
      if (pFVar1->bIsLeftControlDown == 0 && pFVar1->bIsRightControlDown == 0) goto LAB_1469e49b4;
    }
    else if ((uVar8 != 0) || (uVar6 != 0)) {
      puVar10 = &this->field_0x588;
      if (pFVar1->bIsLeftControlDown == 0 && pFVar1->bIsRightControlDown == 0) {
        (**(code **)(*(longlong *)puVar10 + 0x30))(puVar10);
      }
      pcVar4 = *(code **)(*(longlong *)puVar10 + 0x38);
      if ((FVar9.Value == 0xffffffff) &&
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
      (*pcVar4)(puVar10,local_res20);
      (**(code **)(*(longlong *)puVar10 + 0x40))(puVar10,1);
      return;
    }
    puVar10 = &this->field_0x588;
    pcVar4 = *(code **)(*(longlong *)puVar10 + 0x28);
    if ((FVar9.Value == 0xffffffff) &&
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
    (*pcVar4)(puVar10,local_res20,1);
    (**(code **)(*(longlong *)puVar10 + 0x40))(puVar10,1);
  }
  else {
LAB_1469e49b4:
    if ((FVar9.Value == 0xffffffff) &&
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
    Private_SetSelection(this,local_res20,OnNavigation);
  }
  return;
}

// NavigationSelect @ 1469e4ae0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SListView<FName>::NavigationSelect(SListView<FName> *this,FName *param_1,FNavigationEvent *param_2)

{
  FInputEvent local_38;
  
  local_38._padding_ = (longlong)&___7FInputEvent__6B_;
  local_38.ModifierKeys = *(FModifierKeysState *)&param_2->_padding_;
  local_38.bIsRepeat = *(bool *)((longlong)&param_2->_padding_ + 2);
  local_38.UserIndex = *(uint *)((longlong)&param_2->_padding_ + 4);
  local_38.InputDeviceId.InternalId = (int)param_2->_padding_;
  local_38.EventPath = (FWidgetPath *)param_2->_padding_;
  local_38.EventTimestamp = param_2->_padding_;
  (**(code **)(*(longlong *)this + 0x2e8))(this,param_1,&local_38);
  FInputEvent::~FInputEvent(&local_38);
  if (this->bNavigateOnScrollIntoView != false) {
    this->NavigationTypeOnScrollIntoView = param_2->NavigationType;
    return;
  }
  this->NavigationTypeOnScrollIntoView = Invalid;
  return;
}

// NotifyFinishedScrolling @ 1469e4bd0

void __thiscall SListView<UObject_*>::NotifyFinishedScrolling(SListView<UObject_*> *this)

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

// NotifyFinishedScrolling @ 1469e4c20

void __thiscall SListView<FName>::NotifyFinishedScrolling(SListView<FName> *this)

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

// NotifyItemScrolledIntoView @ 1469e4c90

void __thiscall SListView<UObject_*>::NotifyItemScrolledIntoView(SListView<UObject_*> *this)

{
  EUINavigation EVar1;
  UObject *pUVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TSharedRef<ITableRow,1> *pTVar6;
  undefined8 *puVar7;
  ITableRow *local_78;
  TReferenceControllerBase<1> *local_70;
  TSharedPtr<SWidget,1> local_68;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38 [8];
  TReferenceControllerBase<1> *local_30;
  FReadAccessScope local_28;
  
  pUVar2 = this->ItemToNotifyWhenInView;
  if (pUVar2 != (UObject *)0x0) {
    pTVar6 = TMapBase<UObject_*,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<ITableRow,1>,0>_>
             ::Find((TMapBase<UObject_*,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<ITableRow,1>,0>_>
                     *)&(this->WidgetGenerator).ItemToWidgetMap,pUVar2);
    if (pTVar6 == (TSharedRef<ITableRow,1> *)0x0) {
      local_40 = 0;
      local_78 = (ITableRow *)0x0;
      local_70 = (TReferenceControllerBase<1> *)0x0;
      local_48 = 0;
    }
    else {
      local_78 = pTVar6->Object;
      local_70 = (pTVar6->SharedReferenceCount).ReferenceController;
      if (local_70 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_70->SharedReferenceCount = (atomic<int>)((int)local_70->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_50 = 0;
      local_58 = 0;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    if (local_78 != (ITableRow *)0x0) {
      if (this->bNavigateOnScrollIntoView != false) {
        EVar1 = this->NavigationTypeOnScrollIntoView;
        this->SelectorItem = pUVar2;
        if ((local_78 == (ITableRow *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        puVar7 = (undefined8 *)(**(code **)((longlong)*local_78 + 0x58))(local_78,local_38);
        local_68.Object = (SWidget *)*puVar7;
        local_68.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)puVar7[1]
        ;
        if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        STableViewBase::NavigateToWidget
                  ((STableViewBase *)this,this->UserRequestingScrollIntoView,&local_68,FocusedWidget
                   ,EVar1);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_68.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_30);
        this->NavigationTypeOnScrollIntoView = Invalid;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this->OnItemScrolledIntoView,&local_28);
      if ((*(int *)&(this->OnItemScrolledIntoView).field_0x10 != 0) &&
         (plVar3 = *(longlong **)&(this->OnItemScrolledIntoView).field_0x8,
         plVar3 != (longlong *)0x0)) {
        (**(code **)(*plVar3 + 0x68))(plVar3,pUVar2,&local_78);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
    }
    this->bNavigateOnScrollIntoView = false;
    this->ItemToNotifyWhenInView = (UObject *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_70);
  }
  return;
}

// NotifyItemScrolledIntoView @ 1469e4e50

void __thiscall SListView<FName>::NotifyItemScrolledIntoView(SListView<FName> *this)

{
  EUINavigation EVar1;
  FName FVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TSharedRef<ITableRow,1> *pTVar6;
  undefined8 *puVar7;
  ITableRow *local_78;
  TReferenceControllerBase<1> *local_70;
  TSharedPtr<SWidget,1> local_68;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38 [8];
  TReferenceControllerBase<1> *local_30;
  FReadAccessScope local_28;
  
  FVar2 = this->ItemToNotifyWhenInView;
  if (FVar2 != (FName)0x0) {
    pTVar6 = TMapBase<FName,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<ITableRow,1>,0>_>
             ::Find((TMapBase<FName,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<ITableRow,1>,0>_>
                     *)&(this->WidgetGenerator).ItemToWidgetMap,FVar2);
    if (pTVar6 == (TSharedRef<ITableRow,1> *)0x0) {
      local_40 = 0;
      local_78 = (ITableRow *)0x0;
      local_70 = (TReferenceControllerBase<1> *)0x0;
      local_48 = 0;
    }
    else {
      local_78 = pTVar6->Object;
      local_70 = (pTVar6->SharedReferenceCount).ReferenceController;
      if (local_70 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_70->SharedReferenceCount = (atomic<int>)((int)local_70->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_50 = 0;
      local_58 = 0;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    if (local_78 != (ITableRow *)0x0) {
      if (this->bNavigateOnScrollIntoView != false) {
        EVar1 = this->NavigationTypeOnScrollIntoView;
        this->SelectorItem = FVar2;
        if ((local_78 == (ITableRow *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        puVar7 = (undefined8 *)(**(code **)((longlong)*local_78 + 0x58))(local_78,local_38);
        local_68.Object = (SWidget *)*puVar7;
        local_68.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)puVar7[1]
        ;
        if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        STableViewBase::NavigateToWidget
                  ((STableViewBase *)this,this->UserRequestingScrollIntoView,&local_68,FocusedWidget
                   ,EVar1);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_68.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_30);
        this->NavigationTypeOnScrollIntoView = Invalid;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this->OnItemScrolledIntoView,&local_28);
      if ((*(int *)&(this->OnItemScrolledIntoView).field_0x10 != 0) &&
         (plVar3 = *(longlong **)&(this->OnItemScrolledIntoView).field_0x8,
         plVar3 != (longlong *)0x0)) {
        (**(code **)(*plVar3 + 0x68))(plVar3,FVar2,&local_78);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
    }
    (this->ItemToNotifyWhenInView).ComparisonIndex = 0;
    (this->ItemToNotifyWhenInView).Number = 0;
    this->bNavigateOnScrollIntoView = false;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_70);
  }
  return;
}

// OnKeyDown @ 1469e9f10

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SListView<UObject_*>::OnKeyDown
          (SListView<UObject_*> *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FKeyEvent *param_2)

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

// OnKeyDown @ 1469ea030

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SListView<FName>::OnKeyDown
          (SListView<FName> *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FKeyEvent *param_2)

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

// OnKeyDown_Internal @ 1469ea800

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SListView<UObject_*>::OnKeyDown_Internal
          (SListView<UObject_*> *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FKeyEvent *param_2)

{
  IItemsSource<UObject_*> *pIVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  undefined8 *puVar8;
  FReply *pFVar9;
  UObject **ppUVar10;
  Type *pTVar11;
  TSharedRef<ITableRow,1> *pTVar12;
  TReferenceControllerBase<1> *pTVar13;
  ITableRow *pIVar14;
  uint uVar15;
  uint uVar16;
  UObject **ppUVar17;
  int iVar18;
  int iVar19;
  longlong *plVar20;
  longlong lVar21;
  bool bVar22;
  float fVar23;
  uint uStackX_c;
  UObject *local_98;
  UObject *local_90;
  TArrayView<UObject_*_const,int> local_88;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined8 local_68;
  TReferenceControllerBase<1> *local_60;
  undefined8 local_58;
  TReferenceControllerBase<1> *local_50;
  
  bVar6 = false;
  iVar18 = 0;
  pIVar1 = (this->ViewSource).Ptr;
  if (pIVar1 == (IItemsSource<UObject_*> *)0x0) {
    local_78 = 0;
    puVar8 = &local_78;
    uStack_70 = 0;
  }
  else {
    puVar8 = (undefined8 *)(**(code **)((longlong)*pIVar1 + 8))();
  }
  local_88.DataPtr = (UObject **)*puVar8;
  local_88._8_8_ = puVar8[1];
  iVar19 = (int)puVar8[1];
  if ((iVar19 < 1) || ((param_2->_padding_ & 0x30) != 0)) goto LAB_1469eaec1;
  pTVar13 = (param_2->Key).KeyDetails.SharedReferenceCount.ReferenceController;
  bVar4 = false;
  FVar2 = (param_2->Key).KeyName;
  if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar22 = FVar2 == EKeys::Home.KeyName;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  if (bVar22) {
    if ((iVar19 < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar9 = (FReply *)(*pcVar3)();
      return pFVar9;
    }
    local_90 = *local_88.DataPtr;
    ppUVar10 = local_88.DataPtr;
LAB_1469eabc2:
    bVar4 = true;
    if (local_90 != (UObject *)0x0) {
      (**(code **)(this->_padding_ + 0x2d8))(this,&local_90,param_2);
      FReply::FReply(__return_storage_ptr__,true);
      return __return_storage_ptr__;
    }
  }
  else {
    pTVar13 = (param_2->Key).KeyDetails.SharedReferenceCount.ReferenceController;
    FVar2 = (param_2->Key).KeyName;
    if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar22 = FVar2 == EKeys::End.KeyName;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
    if (bVar22) {
      ppUVar10 = TArrayView<UObject_*_const,int>::Last(&local_88,0);
      local_90 = *ppUVar10;
      ppUVar10 = local_88.DataPtr;
      goto LAB_1469eabc2;
    }
    pTVar13 = (param_2->Key).KeyDetails.SharedReferenceCount.ReferenceController;
    FVar2 = (param_2->Key).KeyName;
    if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar22 = FVar2 == EKeys::PageUp.KeyName;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
    ppUVar10 = local_88.DataPtr;
    if (bVar22) {
      if (this->SelectorItem != (UObject *)0x0) {
        for (ppUVar17 = local_88.DataPtr; ppUVar17 != local_88.DataPtr + iVar19;
            ppUVar17 = ppUVar17 + 1) {
          if (*ppUVar17 == this->SelectorItem) {
            iVar18 = (int)((longlong)ppUVar17 - (longlong)local_88.DataPtr >> 3);
            goto LAB_1469ea987;
          }
        }
        iVar18 = -1;
      }
LAB_1469ea987:
      fVar23 = (float)(**(code **)(this->_padding_ + 0x268))(this);
      iVar7 = (**(code **)(this->_padding_ + 0x270))(this);
      iVar7 = (int)fVar23 - (int)fVar23 % iVar7;
      if (iVar18 < iVar7) {
        if ((iVar19 < 1) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          pFVar9 = (FReply *)(*pcVar3)();
          return pFVar9;
        }
        local_90 = *ppUVar10;
      }
      else {
        uVar15 = iVar18 - iVar7;
        uVar16 = 0;
        if ((int)uVar15 < iVar19) {
          uVar16 = ~uVar15 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          pFVar9 = (FReply *)(*pcVar3)();
          return pFVar9;
        }
        local_90 = ppUVar10[(int)uVar15];
      }
      goto LAB_1469eabc2;
    }
    pTVar13 = (param_2->Key).KeyDetails.SharedReferenceCount.ReferenceController;
    FVar2 = (param_2->Key).KeyName;
    if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar22 = FVar2 == EKeys::PageDown.KeyName;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
    ppUVar10 = local_88.DataPtr;
    if (bVar22) {
      if (this->SelectorItem != (UObject *)0x0) {
        for (ppUVar17 = local_88.DataPtr; ppUVar17 != local_88.DataPtr + iVar19;
            ppUVar17 = ppUVar17 + 1) {
          if (*ppUVar17 == this->SelectorItem) {
            iVar18 = (int)((longlong)ppUVar17 - (longlong)local_88.DataPtr >> 3);
            goto LAB_1469eaacc;
          }
        }
        iVar18 = -1;
      }
LAB_1469eaacc:
      fVar23 = (float)(**(code **)(this->_padding_ + 0x268))(this);
      iVar7 = (**(code **)(this->_padding_ + 0x270))(this);
      iVar7 = (int)fVar23 - (int)fVar23 % iVar7;
      if (iVar18 < iVar19 - iVar7) {
        uVar15 = iVar18 + iVar7;
        uVar16 = 0;
        if ((int)uVar15 < iVar19) {
          uVar16 = ~uVar15 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          pFVar9 = (FReply *)(*pcVar3)();
          return pFVar9;
        }
        local_90 = ppUVar10[(int)uVar15];
      }
      else {
        uVar16 = 0;
        if ((int)(iVar19 - 1U) < iVar19) {
          uVar16 = ~(iVar19 - 1U) >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          pFVar9 = (FReply *)(*pcVar3)();
          return pFVar9;
        }
        local_90 = ppUVar10[iVar19 + -1];
      }
      goto LAB_1469eabc2;
    }
  }
  if ((this->bHandleSpacebarSelection == false) || (this->SelectorItem == (UObject *)0x0)) {
    pTVar13 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
LAB_1469eac37:
    bVar22 = false;
  }
  else {
    pTVar13 = (param_2->Key).KeyDetails.SharedReferenceCount.ReferenceController;
    FVar2 = (param_2->Key).KeyName;
    if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar6 = true;
    if (FVar2 != EKeys::SpaceBar.KeyName) goto LAB_1469eac37;
    bVar22 = true;
  }
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  }
  bVar6 = false;
  if (bVar22) {
    local_98 = this->SelectorItem;
    if (((param_2->_padding_ & 0xc) == 0) &&
       (pTVar11 = TAttribute<enum_ESelectionMode::Type>::Get(&this->_padding_),
       *pTVar11 != SingleToggle)) {
      plVar20 = &this->_padding_;
      cVar5 = (**(code **)(*plVar20 + 0x10))(plVar20,&local_98);
      if (cVar5 == '\0') {
        (**(code **)(*plVar20 + 0x28))(plVar20,local_98,1);
        lVar21 = *plVar20;
        goto LAB_1469eace6;
      }
      bVar4 = false;
    }
    else {
      lVar21 = this->_padding_;
      cVar5 = (**(code **)(lVar21 + 0x10))(&this->_padding_,&local_98);
      (**(code **)(lVar21 + 0x28))(&this->_padding_,local_98,cVar5 == '\0',1);
      lVar21 = this->_padding_;
LAB_1469eace6:
      (**(code **)(lVar21 + 0x40))(&this->_padding_,0);
      bVar4 = true;
    }
    this->RangeSelectionStart = this->SelectorItem;
    pTVar12 = TMapBase<UObject_*,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<ITableRow,1>,0>_>
              ::Find((TMapBase<UObject_*,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<ITableRow,1>,0>_>
                      *)&(this->WidgetGenerator).ItemToWidgetMap,local_98);
    if (pTVar12 == (TSharedRef<ITableRow,1> *)0x0) {
      bVar22 = false;
      bVar6 = true;
      puVar8 = &local_68;
      pIVar14 = (ITableRow *)0x0;
      local_60 = (TReferenceControllerBase<1> *)0x0;
    }
    else {
      pIVar14 = pTVar12->Object;
      bVar22 = true;
      bVar6 = false;
      local_50 = (pTVar12->SharedReferenceCount).ReferenceController;
      if (local_50 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_50->SharedReferenceCount = (atomic<int>)((int)local_50->SharedReferenceCount + 1);
        UNLOCK();
      }
      puVar8 = &local_58;
    }
    pTVar13 = (TReferenceControllerBase<1> *)puVar8[1];
    puVar8[1] = 0;
    *puVar8 = 0;
    if (bVar6) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_60);
    }
    if (bVar22) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_50);
    }
    if (pIVar14 == (ITableRow *)0x0) {
      uVar16 = *(uint *)((longlong)&param_2->_padding_ + 4);
      this->ItemToScrollIntoView = local_98;
      this->UserRequestingScrollIntoView = uVar16;
      STableViewBase::RequestLayoutRefresh((STableViewBase *)this);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  }
  else {
    lVar21 = param_2->_padding_;
    if ((((lVar21 & 3) == 0) && ((lVar21 & 0x30) == 0)) && ((lVar21 & 0xc) != 0)) {
      pTVar13 = (param_2->Key).KeyDetails.SharedReferenceCount.ReferenceController;
      bVar6 = true;
      FVar2 = (param_2->Key).KeyName;
      if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((FVar2 != EKeys::A.KeyName) ||
         (pTVar11 = TAttribute<enum_ESelectionMode::Type>::Get(&this->_padding_), *pTVar11 != Multi)
         ) goto LAB_1469eadfc;
      bVar22 = true;
    }
    else {
      pTVar13 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
LAB_1469eadfc:
      bVar22 = false;
    }
    if (bVar6) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
    }
    if (bVar22) {
      plVar20 = &this->_padding_;
      (**(code **)(*plVar20 + 0x30))(plVar20);
      uVar16 = 0;
      if (0 < iVar19) {
        lVar21 = 0;
        do {
          pcVar3 = *(code **)(*plVar20 + 0x28);
          uVar15 = 0;
          if ((int)uVar16 < iVar19) {
            uVar15 = ~uVar16 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar6)) {
            pcVar3 = (code *)swi(3);
            pFVar9 = (FReply *)(*pcVar3)();
            return pFVar9;
          }
          (*pcVar3)(plVar20,*(undefined8 *)(lVar21 + (longlong)ppUVar10),1,0);
          uVar16 = uVar16 + 1;
          lVar21 = lVar21 + 8;
        } while ((int)uVar16 < iVar19);
      }
      (**(code **)(*plVar20 + 0x40))(plVar20,0);
      FReply::FReply(__return_storage_ptr__,true);
      return __return_storage_ptr__;
    }
  }
  if (bVar4) {
    FReply::FReply(__return_storage_ptr__,true);
    return __return_storage_ptr__;
  }
LAB_1469eaec1:
  STableViewBase::OnKeyDown((STableViewBase *)this,__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// OnKeyDown_Internal @ 1469eaf00

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SListView<FName>::OnKeyDown_Internal
          (SListView<FName> *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FKeyEvent *param_2)

{
  IItemsSource<FName> *pIVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  FName *pFVar9;
  FReply *pFVar10;
  FName FVar11;
  Type *pTVar12;
  TSharedRef<ITableRow,1> *pTVar13;
  TReferenceControllerBase<1> *pTVar14;
  ITableRow *pIVar15;
  uint uVar16;
  uint uVar17;
  FName *pFVar18;
  int iVar19;
  undefined1 *puVar20;
  longlong lVar21;
  bool bVar22;
  float fVar23;
  uint uStackX_c;
  FName local_a8;
  FName local_a0;
  FName local_98;
  TArrayView<FName_const_,int> local_90;
  undefined8 local_80;
  undefined4 uStack_78;
  undefined8 local_70;
  TReferenceControllerBase<1> *local_68;
  undefined8 local_60;
  TReferenceControllerBase<1> *local_58;
  
  bVar5 = false;
  iVar7 = 0;
  iVar6 = 0;
  pIVar1 = (this->ViewSource).Ptr;
  if (pIVar1 == (IItemsSource<FName> *)0x0) {
    local_80 = 0;
    puVar8 = &local_80;
    uStack_78 = 0;
  }
  else {
    puVar8 = (undefined8 *)(**(code **)((longlong)*pIVar1 + 8))();
  }
  local_90.DataPtr = (FName *)*puVar8;
  local_90._8_8_ = puVar8[1];
  iVar19 = (int)puVar8[1];
  if ((iVar19 < 1) || ((param_2->_padding_ & 0x30) != 0)) goto LAB_1469eb5c1;
  pTVar14 = (param_2->Key).KeyDetails.SharedReferenceCount.ReferenceController;
  bVar3 = false;
  FVar11 = (param_2->Key).KeyName;
  local_a0.ComparisonIndex.Value = 0;
  local_a0.Number = 0;
  if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar22 = FVar11 == EKeys::Home.KeyName;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
  if (bVar22) {
    pFVar9 = local_90.DataPtr;
    if ((iVar19 < 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       pFVar9 = local_90.DataPtr, bVar3)) {
code_r0x0001469eb158:
      pcVar2 = (code *)swi(3);
      pFVar10 = (FReply *)(*pcVar2)();
      return pFVar10;
    }
LAB_1469eb161:
    bVar3 = true;
    FVar11 = *pFVar9;
  }
  else {
    pTVar14 = (param_2->Key).KeyDetails.SharedReferenceCount.ReferenceController;
    FVar11 = (param_2->Key).KeyName;
    if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar22 = FVar11 == EKeys::End.KeyName;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
    if (bVar22) {
      pFVar9 = TArrayView<FName_const_,int>::Last(&local_90,0);
      bVar3 = true;
      FVar11 = *pFVar9;
      pFVar9 = local_90.DataPtr;
    }
    else {
      pTVar14 = (param_2->Key).KeyDetails.SharedReferenceCount.ReferenceController;
      FVar11 = (param_2->Key).KeyName;
      if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
        UNLOCK();
      }
      bVar22 = FVar11 == EKeys::PageUp.KeyName;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
      pFVar9 = local_90.DataPtr;
      if (bVar22) {
        if (this->SelectorItem != (FName)0x0) {
          for (pFVar18 = local_90.DataPtr; pFVar18 != local_90.DataPtr + iVar19;
              pFVar18 = pFVar18 + 1) {
            if (*pFVar18 == this->SelectorItem) {
              iVar7 = (int)((longlong)pFVar18 - (longlong)local_90.DataPtr >> 3);
              goto LAB_1469eb087;
            }
          }
          iVar7 = -1;
        }
LAB_1469eb087:
        fVar23 = (float)(**(code **)(*(longlong *)this + 0x268))(this);
        iVar6 = (**(code **)(*(longlong *)this + 0x270))(this);
        iVar6 = (int)fVar23 - (int)fVar23 % iVar6;
        if (iVar7 < iVar6) {
          if ((iVar19 < 1) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar3)) goto code_r0x0001469eb158;
          goto LAB_1469eb161;
        }
        uVar16 = iVar7 - iVar6;
        uVar17 = 0;
        if ((int)uVar16 < iVar19) {
          uVar17 = ~uVar16 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          pFVar10 = (FReply *)(*pcVar2)();
          return pFVar10;
        }
        bVar3 = true;
        FVar11 = pFVar9[(int)uVar16];
      }
      else {
        pTVar14 = (param_2->Key).KeyDetails.SharedReferenceCount.ReferenceController;
        FVar11 = (param_2->Key).KeyName;
        if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
          UNLOCK();
        }
        bVar22 = FVar11 == EKeys::PageDown.KeyName;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14)
        ;
        pFVar9 = local_90.DataPtr;
        FVar11 = local_a0;
        if (bVar22) {
          if (this->SelectorItem != (FName)0x0) {
            for (pFVar18 = local_90.DataPtr; pFVar18 != local_90.DataPtr + iVar19;
                pFVar18 = pFVar18 + 1) {
              if (*pFVar18 == this->SelectorItem) {
                iVar6 = (int)((longlong)pFVar18 - (longlong)local_90.DataPtr >> 3);
                goto LAB_1469eb1cc;
              }
            }
            iVar6 = -1;
          }
LAB_1469eb1cc:
          fVar23 = (float)(**(code **)(*(longlong *)this + 0x268))(this);
          iVar7 = (**(code **)(*(longlong *)this + 0x270))(this);
          iVar7 = (int)fVar23 - (int)fVar23 % iVar7;
          if (iVar6 < iVar19 - iVar7) {
            uVar16 = iVar6 + iVar7;
            uVar17 = 0;
            if ((int)uVar16 < iVar19) {
              uVar17 = ~uVar16 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0x14f,
                                   L"Array index out of bounds: %lld from an array of size %lld"),
               bVar3)) {
              pcVar2 = (code *)swi(3);
              pFVar10 = (FReply *)(*pcVar2)();
              return pFVar10;
            }
            bVar3 = true;
            FVar11 = pFVar9[(int)uVar16];
          }
          else {
            uVar17 = 0;
            if ((int)(iVar19 - 1U) < iVar19) {
              uVar17 = ~(iVar19 - 1U) >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0x14f,
                                   L"Array index out of bounds: %lld from an array of size %lld"),
               bVar3)) {
              pcVar2 = (code *)swi(3);
              pFVar10 = (FReply *)(*pcVar2)();
              return pFVar10;
            }
            bVar3 = true;
            FVar11 = pFVar9[iVar19 + -1];
          }
        }
      }
    }
  }
  if (FVar11 == (FName)0x0) {
    if ((this->bHandleSpacebarSelection == false) || (this->SelectorItem == (FName)0x0)) {
      pTVar14 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
LAB_1469eb346:
      bVar22 = false;
    }
    else {
      pTVar14 = (param_2->Key).KeyDetails.SharedReferenceCount.ReferenceController;
      FVar11 = (param_2->Key).KeyName;
      if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
        UNLOCK();
      }
      bVar5 = true;
      if (FVar11 != EKeys::SpaceBar.KeyName) goto LAB_1469eb346;
      bVar22 = true;
    }
    if (bVar5) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
    }
    bVar5 = false;
    if (bVar22) {
      local_a8 = this->SelectorItem;
      if (((param_2->_padding_ & 0xc) == 0) &&
         (pTVar12 = TAttribute<enum_ESelectionMode::Type>::Get(&this->field_0x3e8),
         *pTVar12 != SingleToggle)) {
        puVar20 = &this->field_0x588;
        cVar4 = (**(code **)(*(longlong *)puVar20 + 0x10))(puVar20,&local_a8);
        if (cVar4 == '\0') {
          (**(code **)(*(longlong *)puVar20 + 0x28))(puVar20,local_a8,1);
          lVar21 = *(longlong *)puVar20;
          goto LAB_1469eb3f5;
        }
        bVar3 = false;
      }
      else {
        lVar21 = *(longlong *)&this->field_0x588;
        cVar4 = (**(code **)(lVar21 + 0x10))(&this->field_0x588,&local_a8);
        (**(code **)(lVar21 + 0x28))(&this->field_0x588,local_a8,cVar4 == '\0',1);
        lVar21 = *(longlong *)&this->field_0x588;
LAB_1469eb3f5:
        (**(code **)(lVar21 + 0x40))(&this->field_0x588,0);
        bVar3 = true;
      }
      this->RangeSelectionStart = this->SelectorItem;
      pTVar13 = TMapBase<FName,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<ITableRow,1>,0>_>
                ::Find((TMapBase<FName,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<ITableRow,1>,0>_>
                        *)&(this->WidgetGenerator).ItemToWidgetMap,local_a8);
      if (pTVar13 == (TSharedRef<ITableRow,1> *)0x0) {
        bVar22 = false;
        bVar5 = true;
        puVar8 = &local_70;
        pIVar15 = (ITableRow *)0x0;
        local_68 = (TReferenceControllerBase<1> *)0x0;
      }
      else {
        pIVar15 = pTVar13->Object;
        bVar22 = true;
        bVar5 = false;
        local_58 = (pTVar13->SharedReferenceCount).ReferenceController;
        if (local_58 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_58->SharedReferenceCount = (atomic<int>)((int)local_58->SharedReferenceCount + 1);
          UNLOCK();
        }
        puVar8 = &local_60;
      }
      pTVar14 = (TReferenceControllerBase<1> *)puVar8[1];
      puVar8[1] = 0;
      *puVar8 = 0;
      if (bVar5) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_68);
      }
      if (bVar22) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_58);
      }
      if (pIVar15 == (ITableRow *)0x0) {
        uVar17 = *(uint *)((longlong)&param_2->_padding_ + 4);
        this->ItemToScrollIntoView = local_a8;
        this->UserRequestingScrollIntoView = uVar17;
        STableViewBase::RequestLayoutRefresh((STableViewBase *)this);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
    }
    else {
      lVar21 = param_2->_padding_;
      if ((((lVar21 & 3) == 0) && ((lVar21 & 0x30) == 0)) && ((lVar21 & 0xc) != 0)) {
        pTVar14 = (param_2->Key).KeyDetails.SharedReferenceCount.ReferenceController;
        bVar5 = true;
        FVar11 = (param_2->Key).KeyName;
        if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
          UNLOCK();
        }
        if ((FVar11 != EKeys::A.KeyName) ||
           (pTVar12 = TAttribute<enum_ESelectionMode::Type>::Get(&this->field_0x3e8),
           *pTVar12 != Multi)) goto LAB_1469eb4f3;
        bVar22 = true;
      }
      else {
        pTVar14 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
LAB_1469eb4f3:
        bVar22 = false;
      }
      if (bVar5) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14)
        ;
      }
      if (bVar22) {
        puVar20 = &this->field_0x588;
        (**(code **)(*(longlong *)puVar20 + 0x30))(puVar20);
        uVar17 = 0;
        if (0 < iVar19) {
          lVar21 = 0;
          do {
            pcVar2 = *(code **)(*(longlong *)puVar20 + 0x28);
            uVar16 = 0;
            if ((int)uVar17 < iVar19) {
              uVar16 = ~uVar17 >> 0x1f;
            }
            if ((uVar16 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0x14f,
                                   L"Array index out of bounds: %lld from an array of size %lld"),
               bVar5)) {
              pcVar2 = (code *)swi(3);
              pFVar10 = (FReply *)(*pcVar2)();
              return pFVar10;
            }
            (*pcVar2)(puVar20,*(undefined8 *)((longlong)&(pFVar9->ComparisonIndex).Value + lVar21),1
                      ,0);
            uVar17 = uVar17 + 1;
            lVar21 = lVar21 + 8;
          } while ((int)uVar17 < iVar19);
        }
        (**(code **)(*(longlong *)puVar20 + 0x40))(puVar20,0);
        FReply::FReply(__return_storage_ptr__,true);
        return __return_storage_ptr__;
      }
    }
  }
  else {
    local_98 = FVar11;
    (**(code **)(*(longlong *)this + 0x2e8))(this,&local_98,param_2);
  }
  if (bVar3) {
    FReply::FReply(__return_storage_ptr__,true);
    return __return_storage_ptr__;
  }
LAB_1469eb5c1:
  STableViewBase::OnKeyDown((STableViewBase *)this,__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// OnMouseButtonDown @ 1469ec710

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SListView<UObject_*>::OnMouseButtonDown
          (SListView<UObject_*> *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

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
LAB_1469ec782:
    pTVar6 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar5 = TAttribute<enum_ESelectionMode::Type>::Get(&this->_padding_);
    if (*pTVar5 == None) goto LAB_1469ec782;
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
      goto LAB_1469ec78a;
    }
  }
  bVar3 = false;
LAB_1469ec78a:
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

// OnMouseButtonDown @ 1469ec810

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SListView<FName>::OnMouseButtonDown
          (SListView<FName> *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  undefined1 *puVar1;
  FName FVar2;
  bool bVar3;
  int iVar4;
  Type *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  uint uStackX_c;
  
  bVar7 = false;
  if (this->bClearSelectionOnClick == false) {
LAB_1469ec882:
    pTVar6 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar5 = TAttribute<enum_ESelectionMode::Type>::Get(&this->field_0x3e8);
    if (*pTVar5 == None) goto LAB_1469ec882;
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
      goto LAB_1469ec88a;
    }
  }
  bVar3 = false;
LAB_1469ec88a:
  if (bVar7) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
  if (bVar3) {
    puVar1 = &this->field_0x588;
    iVar4 = (**(code **)(*(longlong *)puVar1 + 0x70))(puVar1);
    if (0 < iVar4) {
      (**(code **)(*(longlong *)puVar1 + 0x30))(puVar1);
      (**(code **)(*(longlong *)puVar1 + 0x40))(puVar1,2);
    }
    FReply::FReply(__return_storage_ptr__,true);
  }
  else {
    STableViewBase::OnMouseButtonDown((STableViewBase *)this,__return_storage_ptr__,param_1,param_2)
    ;
  }
  return __return_storage_ptr__;
}

// OnMouseButtonUp @ 1469ed570

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SListView<UObject_*>::OnMouseButtonUp
          (SListView<UObject_*> *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

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
LAB_1469ed5ee:
    pTVar7 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar5 = TAttribute<enum_ESelectionMode::Type>::Get(&this->_padding_);
    if (*pTVar5 == None) goto LAB_1469ed5ee;
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
        goto LAB_1469ed5f6;
      }
    }
  }
  bVar3 = false;
LAB_1469ed5f6:
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

// OnMouseButtonUp @ 1469ed670

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SListView<FName>::OnMouseButtonUp
          (SListView<FName> *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  undefined1 *puVar1;
  FName FVar2;
  bool bVar3;
  int iVar4;
  Type *pTVar5;
  bool bVar6;
  TReferenceControllerBase<1> *pTVar7;
  uint uStackX_c;
  
  bVar6 = false;
  if (this->bClearSelectionOnClick == false) {
LAB_1469ed6ee:
    pTVar7 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar5 = TAttribute<enum_ESelectionMode::Type>::Get(&this->field_0x3e8);
    if (*pTVar5 == None) goto LAB_1469ed6ee;
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
        goto LAB_1469ed6f6;
      }
    }
  }
  bVar3 = false;
LAB_1469ed6f6:
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  }
  if (bVar3) {
    puVar1 = &this->field_0x588;
    iVar4 = (**(code **)(*(longlong *)puVar1 + 0x70))(puVar1);
    if (0 < iVar4) {
      (**(code **)(*(longlong *)puVar1 + 0x30))(puVar1);
      (**(code **)(*(longlong *)puVar1 + 0x40))(puVar1,2);
    }
  }
  STableViewBase::OnMouseButtonUp((STableViewBase *)this,__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// OnNavigation @ 1469eed70

FNavigationReply * __thiscall
SListView<UObject_*>::OnNavigation
          (SListView<UObject_*> *this,FNavigationReply *__return_storage_ptr__,FGeometry *param_1,
          FNavigationEvent *param_2)

{
  EUINavigation EVar1;
  int iVar2;
  IItemsSource<UObject_*> *pIVar3;
  code *pcVar4;
  undefined8 uVar5;
  longlong lVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  undefined8 *puVar11;
  FNavigationReply *pFVar12;
  longlong *plVar13;
  int iVar14;
  int iVar15;
  longlong *plVar16;
  uint uVar17;
  uint uVar18;
  ulonglong uVar19;
  longlong lVar20;
  FReadAccessScope local_d8;
  longlong local_c0;
  undefined4 uStack_b8;
  longlong local_b0;
  undefined1 local_a8;
  TSharedPtr<SWidget,1> local_a0;
  FReadAccessScope local_90;
  undefined1 local_78 [16];
  undefined1 local_68 [40];
  
  this->NavigationTypeOnScrollIntoView = Invalid;
  pIVar3 = (this->ViewSource).Ptr;
  if (((pIVar3 == (IItemsSource<UObject_*> *)0x0) || (this->bHandleDirectionalNavigation == false))
     || ((this->bHandleGamepadEvents == false && (param_2->NavigationGenesis == Controller))))
  goto LAB_1469ef156;
  puVar11 = (undefined8 *)(**(code **)((longlong)*pIVar3 + 8))(pIVar3,local_78);
  plVar13 = (longlong *)*puVar11;
  uVar5 = puVar11[1];
  iVar9 = (**(code **)(this->_padding_ + 0x270))(this);
  iVar14 = (int)uVar5;
  if (this->SelectorItem != (UObject *)0x0) {
    for (plVar16 = plVar13; plVar16 != plVar13 + iVar14; plVar16 = plVar16 + 1) {
      if ((UObject *)*plVar16 == this->SelectorItem) {
        iVar15 = (int)((longlong)plVar16 - (longlong)plVar13 >> 3);
        goto LAB_1469eee4a;
      }
    }
  }
  iVar15 = -1;
LAB_1469eee4a:
  iVar2 = *(int *)((longlong)&this->_padding_ + 4);
  EVar1 = param_2->NavigationType;
  if (iVar2 == 1) {
    if (EVar1 != Up) {
      if (EVar1 != Down) goto LAB_1469ef156;
      goto LAB_1469eee8e;
    }
LAB_1469eee7d:
    uVar19 = (ulonglong)(uint)(iVar15 - iVar9);
LAB_1469eef3a:
    if (((int)uVar19 < 0) || (iVar14 <= (int)uVar19)) goto LAB_1469ef156;
  }
  else {
    if (iVar2 != 0) goto LAB_1469ef156;
    if (EVar1 == Left) goto LAB_1469eee7d;
    if (EVar1 != Right) goto LAB_1469ef156;
LAB_1469eee8e:
    uVar17 = iVar15 + iVar9;
    uVar19 = (ulonglong)uVar17;
    if (((int)uVar17 < 0) || (iVar14 <= (int)uVar17)) {
      if (0 < iVar14) {
        if ((iVar9 < 1) &&
           (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_8670646794247470561>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\SListView.h"
                               ,0x21f,"NumItemsPerLine > 0"), bVar7)) {
          pcVar4 = (code *)swi(3);
          pFVar12 = (FNavigationReply *)(*pcVar4)();
          return pFVar12;
        }
        if (-((int)ROUND(__real_bf000000 - (float)(iVar15 + 1) * (__real_40000000 / (float)iVar9))
             >> 1) < -((int)ROUND(__real_bf000000 - ((float)iVar14 + (float)iVar14) / (float)iVar9)
                      >> 1)) {
          uVar19 = (ulonglong)(iVar14 - 1);
        }
      }
      goto LAB_1469eef3a;
    }
  }
  if (*(char *)((longlong)&this->_padding_ + 1) != '\0') {
    uVar18 = (uint)uVar19;
    uVar17 = 0;
    if ((int)uVar18 < iVar14) {
      uVar17 = ~uVar18 >> 0x1f;
    }
    if ((uVar17 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar7)) {
      pcVar4 = (code *)swi(3);
      pFVar12 = (FNavigationReply *)(*pcVar4)();
      return pFVar12;
    }
    lVar20 = plVar13[uVar19];
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnIsSelectableOrNavigable,&local_90);
    if (((*(int *)&(this->OnIsSelectableOrNavigable).field_0x10 == 0) ||
        (plVar13 = *(longlong **)&(this->OnIsSelectableOrNavigable).field_0x8,
        plVar13 == (longlong *)0x0)) || (cVar8 = (**(code **)(*plVar13 + 0x38))(), cVar8 == '\0')) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_90);
    }
    else {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_90);
      pIVar3 = (this->ViewSource).Ptr;
      if (pIVar3 == (IItemsSource<UObject_*> *)0x0) {
        local_c0 = 0;
        plVar13 = &local_c0;
        uStack_b8 = 0;
      }
      else {
        plVar13 = (longlong *)(**(code **)((longlong)*pIVar3 + 8))(pIVar3,local_68);
      }
      lVar6 = *plVar13;
      local_d8.DestructionSentinel.Accessor = (FMRSWRecursiveAccessDetector *)plVar13[1];
      iVar9 = (int)local_d8.DestructionSentinel.Accessor;
      local_d8.DestructionSentinel._0_8_ = lVar6;
      while( true ) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &this->OnIsSelectableOrNavigable,&local_d8);
        if (*(int *)&(this->OnIsSelectableOrNavigable).field_0x10 == 0) {
          plVar13 = (longlong *)0x0;
        }
        else {
          plVar13 = *(longlong **)&(this->OnIsSelectableOrNavigable).field_0x8;
        }
        cVar8 = (**(code **)(*plVar13 + 0x60))(plVar13,lVar20);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_d8);
        if (cVar8 != '\0') break;
        iVar14 = -1;
        if (iVar15 <= (int)uVar18) {
          iVar14 = 1;
        }
        uVar17 = (int)uVar19 + iVar14;
        uVar19 = (ulonglong)uVar17;
        if (((int)uVar17 < 0) || (iVar9 <= (int)uVar17)) goto LAB_1469ef156;
        uVar10 = 0;
        if ((int)uVar17 < iVar9) {
          uVar10 = ~uVar17 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          pFVar12 = (FNavigationReply *)(*pcVar4)();
          return pFVar12;
        }
        lVar20 = *(longlong *)(lVar6 + (longlong)(int)uVar17 * 8);
      }
    }
    local_a8 = 1;
    local_b0 = lVar20;
    (**(code **)(this->_padding_ + 0x2d0))(this,&local_b0,param_2);
    local_a0.Object = (SWidget *)0x0;
    local_a0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    FNavigationReply::Explicit(__return_storage_ptr__,&local_a0);
    return __return_storage_ptr__;
  }
LAB_1469ef156:
  SWidget::OnNavigation((SWidget *)this,__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// OnNavigation @ 1469ef190

/* WARNING: Removing unreachable block (ram,0x0001469ef419) */
/* WARNING: Removing unreachable block (ram,0x0001469ef43e) */

FNavigationReply * __thiscall
SListView<FName>::OnNavigation
          (SListView<FName> *this,FNavigationReply *__return_storage_ptr__,FGeometry *param_1,
          FNavigationEvent *param_2)

{
  EUINavigation EVar1;
  IItemsSource<FName> *pIVar2;
  code *pcVar3;
  FName *pFVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  undefined8 *puVar9;
  FNavigationReply *pFVar10;
  int iVar11;
  FName *pFVar12;
  int iVar13;
  uint uVar14;
  FName local_res8;
  TSharedPtr<SWidget,1> local_68;
  undefined1 local_58 [32];
  
  this->NavigationTypeOnScrollIntoView = Invalid;
  pIVar2 = (this->ViewSource).Ptr;
  if (((pIVar2 == (IItemsSource<FName> *)0x0) || (this->bHandleDirectionalNavigation == false)) ||
     ((this->bHandleGamepadEvents == false && (param_2->NavigationGenesis == Controller))))
  goto LAB_1469ef26f;
  puVar9 = (undefined8 *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_58);
  pFVar4 = (FName *)*puVar9;
  uVar5 = puVar9[1];
  iVar7 = (**(code **)(*(longlong *)this + 0x270))(this);
  iVar13 = (int)uVar5;
  if (this->SelectorItem != (FName)0x0) {
    for (pFVar12 = pFVar4; pFVar12 != pFVar4 + iVar13; pFVar12 = pFVar12 + 1) {
      if (*pFVar12 == this->SelectorItem) {
        iVar11 = (int)((longlong)pFVar12 - (longlong)pFVar4 >> 3);
        goto LAB_1469ef257;
      }
    }
  }
  iVar11 = -1;
LAB_1469ef257:
  EVar1 = param_2->NavigationType;
  if (*(int *)&this->field_0x44c == 1) {
    if (EVar1 != Up) {
      if (EVar1 != Down) goto LAB_1469ef26f;
      goto LAB_1469ef2bf;
    }
LAB_1469ef2b1:
    uVar14 = iVar11 - iVar7;
LAB_1469ef36e:
    if (((int)uVar14 < 0) || (iVar13 <= (int)uVar14)) goto LAB_1469ef26f;
  }
  else {
    if (*(int *)&this->field_0x44c != 0) goto LAB_1469ef26f;
    if (EVar1 == Left) goto LAB_1469ef2b1;
    if (EVar1 != Right) goto LAB_1469ef26f;
LAB_1469ef2bf:
    uVar14 = iVar11 + iVar7;
    if (((int)uVar14 < 0) || (iVar13 <= (int)uVar14)) {
      if (0 < iVar13) {
        if ((iVar7 < 1) &&
           (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_8670646794247470561>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\SListView.h"
                               ,0x21f,"NumItemsPerLine > 0"), bVar6)) {
          pcVar3 = (code *)swi(3);
          pFVar10 = (FNavigationReply *)(*pcVar3)();
          return pFVar10;
        }
        if (-((int)ROUND(__real_bf000000 - (float)(iVar11 + 1) * (__real_40000000 / (float)iVar7))
             >> 1) < -((int)ROUND(__real_bf000000 - ((float)iVar13 + (float)iVar13) / (float)iVar7)
                      >> 1)) {
          uVar14 = iVar13 - 1;
        }
      }
      goto LAB_1469ef36e;
    }
  }
  if (this->field_0x449 != '\0') {
    uVar8 = 0;
    if ((int)uVar14 < iVar13) {
      uVar8 = ~uVar14 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar6)) {
      pcVar3 = (code *)swi(3);
      pFVar10 = (FNavigationReply *)(*pcVar3)();
      return pFVar10;
    }
    Private_FindNextSelectableOrNavigableWithIndexAndDirection
              (this,&local_res8,(int)pFVar4 + uVar14 * 8,SUB41(uVar14,0));
    if (local_res8.ComparisonIndex.Value != 0xffffffff) {
      (**(code **)(*(longlong *)this + 0x2e0))(this,&local_res8,param_2);
      local_68.Object = (SWidget *)0x0;
      local_68.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      FNavigationReply::Explicit(__return_storage_ptr__,&local_68);
      return __return_storage_ptr__;
    }
  }
LAB_1469ef26f:
  SWidget::OnNavigation((SWidget *)this,__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// Private_ClearHighlightedItems @ 1469f41c0

void __thiscall SListView<UObject_*>::Private_ClearHighlightedItems(SListView<UObject_*> *this)

{
  int *piVar1;
  longlong *this_00;
  int iVar2;
  bool bVar3;
  
  this_00 = &this->_padding_;
  bVar3 = 1 < (int)this->_padding_;
  if (!bVar3) {
    TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::
    UnhashElements((TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>
                    *)this_00);
  }
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  *(undefined4 *)&this->_padding_ = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)this_00,0,piVar1);
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
    TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::Rehash
              ((TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>
                *)this_00);
  }
  return;
}

// Private_ClearHighlightedItems @ 1469f4270

void __thiscall SListView<FName>::Private_ClearHighlightedItems(SListView<FName> *this)

{
  undefined1 *this_00;
  bool bVar1;
  
  this_00 = &this->field_0x2e0;
  bVar1 = 1 < *(int *)&this->field_0x328;
  if (!bVar1) {
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::UnhashElements
              ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)this_00);
  }
  *(undefined4 *)&this->field_0x2e8 = 0;
  if (*(int *)&this->field_0x2ec != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)this_00,0,(int *)&this->field_0x2ec);
  }
  *(undefined4 *)&this->field_0x310 = 0xffffffff;
  *(undefined4 *)&this->field_0x314 = 0;
  *(undefined4 *)&this->field_0x308 = 0;
  if ((*(int *)&this->field_0x30c < 0) || (0x80 < *(int *)&this->field_0x30c)) {
    *(undefined4 *)&this->field_0x30c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x2f0,0);
  }
  if (bVar1) {
    *(undefined4 *)&this->field_0x328 = 1;
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Rehash
              ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)this_00);
  }
  return;
}

// Private_ClearSelection @ 1469f4320

void __thiscall SListView<UObject_*>::Private_ClearSelection(SListView<UObject_*> *this)

{
  int *piVar1;
  longlong *this_00;
  int iVar2;
  bool bVar3;
  
  this_00 = &this->_padding_;
  bVar3 = 1 < (int)this->_padding_;
  if (!bVar3) {
    TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::
    UnhashElements((TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>
                    *)this_00);
  }
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  *(undefined4 *)&this->_padding_ = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)this_00,0,piVar1);
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
    TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::Rehash
              ((TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>
                *)this_00);
  }
  if (*(char *)((longlong)&this->_padding_ + 1) != '\0') {
    FInertialScrollManager::ClearScrollVelocity
              ((FInertialScrollManager *)&this[-1].RangeSelectionStart,false);
  }
  return;
}

// Private_ClearSelection @ 1469f4400

void __thiscall SListView<FName>::Private_ClearSelection(SListView<FName> *this)

{
  undefined1 *this_00;
  bool bVar1;
  
  this_00 = &this->field_0x280;
  bVar1 = 1 < *(int *)&this->field_0x2c8;
  if (!bVar1) {
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::UnhashElements
              ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)this_00);
  }
  *(undefined4 *)&this->field_0x288 = 0;
  if (*(int *)&this->field_0x28c != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)this_00,0,(int *)&this->field_0x28c);
  }
  *(undefined4 *)&this->field_0x2b0 = 0xffffffff;
  *(undefined4 *)&this->field_0x2b4 = 0;
  *(undefined4 *)&this->field_0x2a8 = 0;
  if ((*(int *)&this->field_0x2ac < 0) || (0x80 < *(int *)&this->field_0x2ac)) {
    *(undefined4 *)&this->field_0x2ac = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x290,0);
  }
  if (bVar1) {
    *(undefined4 *)&this->field_0x2c8 = 1;
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Rehash
              ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)this_00);
  }
  if (this->field_0x3f1 != '\0') {
    FInertialScrollManager::ClearScrollVelocity
              ((FInertialScrollManager *)&this[-1].HighlightedItems.Elements.field_0x8,false);
  }
  return;
}

// Private_DoesItemHaveChildren @ 1469f44e0

bool __thiscall
SListView<UObject_*>::Private_DoesItemHaveChildren(SListView<UObject_*> *this,int param_1)

{
  return false;
}

// Private_DoesItemHaveChildren @ 1469f44f0

bool __thiscall SListView<FName>::Private_DoesItemHaveChildren(SListView<FName> *this,int param_1)

{
  return false;
}

// Private_FindNextSelectableOrNavigable @ 1469f45a0

TOptional<UObject_*> * __thiscall
SListView<UObject_*>::Private_FindNextSelectableOrNavigable
          (SListView<UObject_*> *this,TOptional<UObject_*> *__return_storage_ptr__,UObject **param_1
          )

{
  TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *this_00;
  int iVar1;
  IItemsSource<UObject_*> *pIVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  longlong *plVar10;
  TOptional<UObject_*> *pTVar11;
  uint uVar12;
  uint uVar13;
  UObject *pUVar14;
  longlong lVar15;
  longlong local_c8;
  undefined4 local_c0;
  FReadAccessScope local_b8;
  FReadAccessScope local_a0;
  FReadAccessScope local_88;
  undefined1 local_70 [16];
  TIterator local_60;
  
  pUVar14 = *param_1;
  this_00 = &this->OnIsSelectableOrNavigable;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_b8);
  if (((*(int *)&(this->OnIsSelectableOrNavigable).field_0x10 == 0) ||
      (plVar10 = *(longlong **)&(this->OnIsSelectableOrNavigable).field_0x8,
      plVar10 == (longlong *)0x0)) || (cVar6 = (**(code **)(*plVar10 + 0x38))(), cVar6 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_b8);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_b8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_a0);
    plVar10 = (longlong *)0x0;
    if (*(int *)&(this->OnIsSelectableOrNavigable).field_0x10 != 0) {
      plVar10 = *(longlong **)&(this->OnIsSelectableOrNavigable).field_0x8;
    }
    cVar6 = (**(code **)(*plVar10 + 0x60))(plVar10,pUVar14);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_a0);
    if (cVar6 == '\0') {
      pIVar2 = (this->ViewSource).Ptr;
      if (pIVar2 == (IItemsSource<UObject_*> *)0x0) {
        local_c8 = 0;
        plVar10 = &local_c8;
        local_c0 = 0;
      }
      else {
        plVar10 = (longlong *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_70);
      }
      plVar3 = (longlong *)*plVar10;
      iVar1 = (int)plVar10[1];
      for (plVar10 = plVar3; plVar10 != plVar3 + iVar1; plVar10 = plVar10 + 1) {
        if ((UObject *)*plVar10 == pUVar14) {
          lVar15 = (longlong)plVar10 - (longlong)plVar3 >> 3;
          goto LAB_1469f46a7;
        }
      }
      lVar15 = 0xffffffff;
LAB_1469f46a7:
      uVar13 = 1;
      if (*(int *)&(this->SelectedItems).Elements.field_0x8 -
          *(int *)&(this->SelectedItems).Elements.field_0x34 == 1) {
        TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::
        TIterator::TIterator(&local_60,&this->SelectedItems);
        lVar4 = *(longlong *)
                 (*(longlong *)local_60._padding_ + (longlong)local_60._padding_._4_4_ * 0x10);
        uVar13 = 1;
        plVar10 = plVar3;
        if (lVar4 != 0) {
          for (; plVar10 != plVar3 + iVar1; plVar10 = plVar10 + 1) {
            if (*plVar10 == lVar4) {
              iVar8 = (int)((longlong)plVar10 - (longlong)plVar3 >> 3);
              goto LAB_1469f4717;
            }
          }
          iVar8 = -1;
LAB_1469f4717:
          uVar13 = (uint)(iVar8 < (int)lVar15);
        }
      }
      do {
        uVar12 = (int)lVar15 + -1 + uVar13 * 2;
        lVar15 = (longlong)(int)uVar12;
        if (((int)uVar12 < 0) || (iVar1 <= (int)uVar12)) {
          __return_storage_ptr__->bIsSet = false;
          return __return_storage_ptr__;
        }
        uVar9 = 0;
        if ((int)uVar12 < iVar1) {
          uVar9 = ~uVar12 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TOptional<UObject_*> *)(*pcVar5)();
          return pTVar11;
        }
        pUVar14 = (UObject *)plVar3[lVar15];
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_88);
        if (*(int *)&(this->OnIsSelectableOrNavigable).field_0x10 == 0) {
          plVar10 = (longlong *)0x0;
        }
        else {
          plVar10 = *(longlong **)&(this->OnIsSelectableOrNavigable).field_0x8;
        }
        cVar6 = (**(code **)(*plVar10 + 0x60))(plVar10,pUVar14);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_88);
      } while (cVar6 == '\0');
    }
  }
  __return_storage_ptr__->TypedValue = pUVar14;
  __return_storage_ptr__->bIsSet = true;
  return __return_storage_ptr__;
}

// Private_FindNextSelectableOrNavigable @ 1469f4830

TOptional<FName> __thiscall
SListView<FName>::Private_FindNextSelectableOrNavigable(SListView<FName> *this,FName *param_1)

{
  TDelegate<bool___cdecl(FName),FDefaultDelegateUserPolicy> *this_00;
  int iVar1;
  IItemsSource<FName> *pIVar2;
  FName *pFVar3;
  code *pcVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  longlong *plVar9;
  TOptional<FName> TVar10;
  uint uVar11;
  uint uVar12;
  FName FVar13;
  FName *pFVar14;
  longlong lVar15;
  FName *in_R8;
  longlong local_c8;
  undefined4 local_c0;
  FReadAccessScope local_b8;
  FReadAccessScope local_a0;
  FReadAccessScope local_88;
  undefined1 local_70 [16];
  TIterator local_60;
  
  FVar13 = *in_R8;
  this_00 = &this->OnIsSelectableOrNavigable;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_b8);
  if (((*(int *)&(this->OnIsSelectableOrNavigable).field_0x10 == 0) ||
      (plVar9 = *(longlong **)&(this->OnIsSelectableOrNavigable).field_0x8,
      plVar9 == (longlong *)0x0)) || (cVar5 = (**(code **)(*plVar9 + 0x38))(), cVar5 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_b8);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_b8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_a0);
    plVar9 = (longlong *)0x0;
    if (*(int *)&(this->OnIsSelectableOrNavigable).field_0x10 != 0) {
      plVar9 = *(longlong **)&(this->OnIsSelectableOrNavigable).field_0x8;
    }
    cVar5 = (**(code **)(*plVar9 + 0x60))(plVar9,FVar13);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_a0);
    if (cVar5 == '\0') {
      pIVar2 = (this->ViewSource).Ptr;
      if (pIVar2 == (IItemsSource<FName> *)0x0) {
        local_c8 = 0;
        plVar9 = &local_c8;
        local_c0 = 0;
      }
      else {
        plVar9 = (longlong *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_70);
      }
      pFVar3 = (FName *)*plVar9;
      iVar1 = (int)plVar9[1];
      for (pFVar14 = pFVar3; pFVar14 != pFVar3 + iVar1; pFVar14 = pFVar14 + 1) {
        if (*pFVar14 == FVar13) {
          lVar15 = (longlong)pFVar14 - (longlong)pFVar3 >> 3;
          goto LAB_1469f4938;
        }
      }
      lVar15 = 0xffffffff;
LAB_1469f4938:
      uVar12 = 1;
      if (*(int *)&(this->SelectedItems).Elements.field_0x8 -
          *(int *)&(this->SelectedItems).Elements.field_0x34 == 1) {
        TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::TIterator::TIterator
                  (&local_60,&this->SelectedItems);
        FVar13 = *(FName *)(*(longlong *)local_60._padding_ +
                           (longlong)local_60._padding_._4_4_ * 0x10);
        uVar12 = 1;
        pFVar14 = pFVar3;
        if (FVar13 != (FName)0x0) {
          for (; pFVar14 != pFVar3 + iVar1; pFVar14 = pFVar14 + 1) {
            if (*pFVar14 == FVar13) {
              iVar7 = (int)((longlong)pFVar14 - (longlong)pFVar3 >> 3);
              goto LAB_1469f49a7;
            }
          }
          iVar7 = -1;
LAB_1469f49a7:
          uVar12 = (uint)(iVar7 < (int)lVar15);
        }
      }
      do {
        uVar11 = (int)lVar15 + -1 + uVar12 * 2;
        lVar15 = (longlong)(int)uVar11;
        if (((int)uVar11 < 0) || (iVar1 <= (int)uVar11)) {
          (param_1->ComparisonIndex).Value = 0xffffffff;
          param_1->Number = 0;
          return (TOptional<FName>)(TOptional<FName>_u_0)param_1;
        }
        uVar8 = 0;
        if ((int)uVar11 < iVar1) {
          uVar8 = ~uVar11 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          TVar10.field0_0x0 = (TOptional<FName>_u_0)(*pcVar4)();
          return (TOptional<FName>)TVar10.field0_0x0;
        }
        FVar13 = pFVar3[lVar15];
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_88);
        if (*(int *)&(this->OnIsSelectableOrNavigable).field_0x10 == 0) {
          plVar9 = (longlong *)0x0;
        }
        else {
          plVar9 = *(longlong **)&(this->OnIsSelectableOrNavigable).field_0x8;
        }
        cVar5 = (**(code **)(*plVar9 + 0x60))(plVar9,FVar13);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_88);
      } while (cVar5 == '\0');
    }
  }
  *param_1 = FVar13;
  if ((FVar13.ComparisonIndex.Value.Value == 0xffffffff) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        ), bVar6)) {
    pcVar4 = (code *)swi(3);
    TVar10.field0_0x0 = (TOptional<FName>_u_0)(*pcVar4)();
    return (TOptional<FName>)TVar10.field0_0x0;
  }
  return (TOptional<FName>)(TOptional<FName>_u_0)param_1;
}

// Private_FindNextSelectableOrNavigableWithIndexAndDirection @ 1469f4af0

TOptional<FName> __thiscall
SListView<FName>::Private_FindNextSelectableOrNavigableWithIndexAndDirection
          (SListView<FName> *this,FName *param_1,int param_2,bool param_3)

{
  IItemsSource<FName> *pIVar1;
  code *pcVar2;
  longlong lVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  longlong *plVar8;
  TOptional<FName> TVar9;
  FName FVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined4 in_register_00000084;
  undefined7 in_register_00000089;
  byte in_stack_00000028;
  longlong local_78;
  undefined4 uStack_70;
  FReadAccessScope local_68;
  undefined1 local_50 [16];
  FReadAccessScope local_40;
  
  FVar10 = *(FName *)CONCAT44(in_register_00000084,param_2);
  uVar12 = CONCAT71(in_register_00000089,param_3) & 0xffffffff;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnIsSelectableOrNavigable,&local_40);
  if (((*(int *)&(this->OnIsSelectableOrNavigable).field_0x10 == 0) ||
      (plVar8 = *(longlong **)&(this->OnIsSelectableOrNavigable).field_0x8,
      plVar8 == (longlong *)0x0)) || (cVar5 = (**(code **)(*plVar8 + 0x38))(), cVar5 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_40);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_40);
    pIVar1 = (this->ViewSource).Ptr;
    if (pIVar1 == (IItemsSource<FName> *)0x0) {
      local_78 = 0;
      plVar8 = &local_78;
      uStack_70 = 0;
    }
    else {
      plVar8 = (longlong *)(**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_50);
    }
    lVar3 = *plVar8;
    local_68.DestructionSentinel.Accessor = (FMRSWRecursiveAccessDetector *)plVar8[1];
    iVar4 = (int)local_68.DestructionSentinel.Accessor;
    local_68.DestructionSentinel._0_8_ = lVar3;
    while( true ) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this->OnIsSelectableOrNavigable,&local_68);
      if (*(int *)&(this->OnIsSelectableOrNavigable).field_0x10 == 0) {
        plVar8 = (longlong *)0x0;
      }
      else {
        plVar8 = *(longlong **)&(this->OnIsSelectableOrNavigable).field_0x8;
      }
      cVar5 = (**(code **)(*plVar8 + 0x60))(plVar8,FVar10);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_68);
      if (cVar5 != '\0') break;
      uVar11 = ((int)uVar12 + (uint)in_stack_00000028 * 2) - 1;
      uVar12 = (ulonglong)uVar11;
      if (((int)uVar11 < 0) || (iVar4 <= (int)uVar11)) {
        (param_1->ComparisonIndex).Value = 0xffffffff;
        param_1->Number = 0;
        return (TOptional<FName>)(TOptional<FName>_u_0)param_1;
      }
      uVar7 = 0;
      if ((int)uVar11 < iVar4) {
        uVar7 = ~uVar11 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar2 = (code *)swi(3);
        TVar9.field0_0x0 = (TOptional<FName>_u_0)(*pcVar2)();
        return (TOptional<FName>)TVar9.field0_0x0;
      }
      FVar10 = *(FName *)(lVar3 + (longlong)(int)uVar11 * 8);
    }
  }
  *param_1 = FVar10;
  if ((FVar10.ComparisonIndex.Value.Value == 0xffffffff) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        ), bVar6)) {
    pcVar2 = (code *)swi(3);
    TVar9.field0_0x0 = (TOptional<FName>_u_0)(*pcVar2)();
    return (TOptional<FName>)TVar9.field0_0x0;
  }
  return (TOptional<FName>)(TOptional<FName>_u_0)param_1;
}

// Private_GetNestingDepth @ 1469f4cc0

int __thiscall SListView<UObject_*>::Private_GetNestingDepth(SListView<UObject_*> *this,int param_1)

{
  return 0;
}

// Private_GetNestingDepth @ 1469f4cd0

int __thiscall SListView<FName>::Private_GetNestingDepth(SListView<FName> *this,int param_1)

{
  return 0;
}

// Private_GetNumSelectedItems @ 1469f4d80

int __thiscall SListView<UObject_*>::Private_GetNumSelectedItems(SListView<UObject_*> *this)

{
  return (int)this->_padding_ - *(int *)((longlong)&this->_padding_ + 4);
}

// Private_GetNumSelectedItems @ 1469f4da0

int __thiscall SListView<FName>::Private_GetNumSelectedItems(SListView<FName> *this)

{
  return *(int *)&this->field_0x288 - *(int *)&this->field_0x2b4;
}

// Private_GetOrientation @ 1469f4dc0

EOrientation __thiscall SListView<UObject_*>::Private_GetOrientation(SListView<UObject_*> *this)

{
  return *(EOrientation *)&this[-1].HighlightedItems.Elements.field_0x2c;
}

// Private_GetOrientation @ 1469f4dd0

EOrientation __thiscall SListView<FName>::Private_GetOrientation(SListView<FName> *this)

{
  return this[-1].HighlightedItems.Hash._padding_;
}

// Private_GetSelectionMode @ 1469f4de0

Type __thiscall SListView<UObject_*>::Private_GetSelectionMode(SListView<UObject_*> *this)

{
  Type *pTVar1;
  
  pTVar1 = TAttribute<enum_ESelectionMode::Type>::Get(&this[-1].SelectedItems.Elements.field_0x28);
  return *pTVar1;
}

// Private_GetSelectionMode @ 1469f4e00

Type __thiscall SListView<FName>::Private_GetSelectionMode(SListView<FName> *this)

{
  Type *pTVar1;
  
  pTVar1 = TAttribute<enum_ESelectionMode::Type>::Get(&this[-1].SelectedItems.Hash);
  return *pTVar1;
}

// Private_GetWiresNeededByDepth @ 1469f4e20

TBitArray<FDefaultBitArrayAllocator> * __thiscall
SListView<UObject_*>::Private_GetWiresNeededByDepth(SListView<UObject_*> *this,int param_1)

{
  return &EmptyBitArray;
}

// Private_GetWiresNeededByDepth @ 1469f4e30

TBitArray<FDefaultBitArrayAllocator> * __thiscall
SListView<FName>::Private_GetWiresNeededByDepth(SListView<FName> *this,int param_1)

{
  return &EmptyBitArray;
}

// Private_HasSelectorFocus @ 1469f4ee0

bool __thiscall
SListView<UObject_*>::Private_HasSelectorFocus(SListView<UObject_*> *this,UObject **param_1)

{
  return (UObject *)this->_padding_ == *param_1;
}

// Private_HasSelectorFocus @ 1469f4f00

bool __thiscall SListView<FName>::Private_HasSelectorFocus(SListView<FName> *this,FName *param_1)

{
  FName FVar1;
  
  FVar1.ComparisonIndex.Value = *(uint *)&this->field_0x2d0;
  FVar1.Number = *(uint *)&this->field_0x2d4;
  return FVar1 == *param_1;
}

// Private_IsItemExpanded @ 1469f4f20

bool __thiscall
SListView<UObject_*>::Private_IsItemExpanded(SListView<UObject_*> *this,UObject **param_1)

{
  return false;
}

// Private_IsItemExpanded @ 1469f4f30

bool __thiscall SListView<FName>::Private_IsItemExpanded(SListView<FName> *this,FName *param_1)

{
  return false;
}

// Private_IsItemHighlighted @ 1469f4f80

bool __thiscall
SListView<UObject_*>::Private_IsItemHighlighted(SListView<UObject_*> *this,UObject **param_1)

{
  UObject *pUVar1;
  TObjectPtr<UObject> *pTVar2;
  UObject *local_res8;
  
  pUVar1 = *param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  local_res8 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  pTVar2 = TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::
           Find((TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>
                 *)&this->_padding_,(TObjectPtr<UObject_const_>)&local_res8);
  return pTVar2 != (TObjectPtr<UObject> *)0x0;
}

// Private_IsItemHighlighted @ 1469f4ff0

bool __thiscall SListView<FName>::Private_IsItemHighlighted(SListView<FName> *this,FName *param_1)

{
  FName *pFVar1;
  
  pFVar1 = TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Find
                     ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)
                      &this->field_0x2e0,*param_1);
  return pFVar1 != (FName *)0x0;
}

// Private_IsItemSelectableOrNavigable @ 1469f5020

bool __thiscall
SListView<UObject_*>::Private_IsItemSelectableOrNavigable
          (SListView<UObject_*> *this,UObject **param_1)

{
  UObject *pUVar1;
  char cVar2;
  undefined1 uVar3;
  longlong *plVar4;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_padding_,&local_28);
  if (((int)this->_padding_ != 0) && ((longlong *)this->_padding_ != (longlong *)0x0)) {
    cVar2 = (**(code **)(*(longlong *)this->_padding_ + 0x38))();
    if (cVar2 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      pUVar1 = *param_1;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_padding_,
                 &local_28);
      if ((int)this->_padding_ == 0) {
        plVar4 = (longlong *)0x0;
      }
      else {
        plVar4 = (longlong *)this->_padding_;
      }
      uVar3 = (**(code **)(*plVar4 + 0x60))(plVar4,pUVar1);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      return (bool)uVar3;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return true;
}

// Private_IsItemSelectableOrNavigable @ 1469f50d0

bool __thiscall
SListView<FName>::Private_IsItemSelectableOrNavigable(SListView<FName> *this,FName *param_1)

{
  FName FVar1;
  char cVar2;
  undefined1 uVar3;
  longlong *plVar4;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->field_0x368,&local_28)
  ;
  if ((*(int *)&this->field_0x378 != 0) && (*(longlong **)&this->field_0x370 != (longlong *)0x0)) {
    cVar2 = (**(code **)(**(longlong **)&this->field_0x370 + 0x38))();
    if (cVar2 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      FVar1 = *param_1;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->field_0x368,
                 &local_28);
      if (*(int *)&this->field_0x378 == 0) {
        plVar4 = (longlong *)0x0;
      }
      else {
        plVar4 = *(longlong **)&this->field_0x370;
      }
      uVar3 = (**(code **)(*plVar4 + 0x60))(plVar4,FVar1);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      return (bool)uVar3;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return true;
}

// Private_IsItemSelected @ 1469f5180

bool __thiscall
SListView<UObject_*>::Private_IsItemSelected(SListView<UObject_*> *this,UObject **param_1)

{
  UObject *pUVar1;
  TObjectPtr<UObject> *pTVar2;
  UObject *local_res8;
  
  pUVar1 = *param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  local_res8 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  pTVar2 = TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::
           Find((TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>
                 *)&this->_padding_,(TObjectPtr<UObject_const_>)&local_res8);
  return pTVar2 != (TObjectPtr<UObject> *)0x0;
}

// Private_IsItemSelected @ 1469f51f0

bool __thiscall SListView<FName>::Private_IsItemSelected(SListView<FName> *this,FName *param_1)

{
  FName *pFVar1;
  
  pFVar1 = TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Find
                     ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)
                      &this->field_0x280,*param_1);
  return pFVar1 != (FName *)0x0;
}

// Private_IsLastChild @ 1469f5220

bool __thiscall SListView<UObject_*>::Private_IsLastChild(SListView<UObject_*> *this,int param_1)

{
  return false;
}

// Private_IsLastChild @ 1469f5230

bool __thiscall SListView<FName>::Private_IsLastChild(SListView<FName> *this,int param_1)

{
  return false;
}

// Private_IsPendingRefresh @ 1469f52e0

bool __thiscall SListView<UObject_*>::Private_IsPendingRefresh(SListView<UObject_*> *this)

{
  bool bVar1;
  
  bVar1 = STableViewBase::IsPendingRefresh((STableViewBase *)&this[-1]._padding_);
  return bVar1;
}

// Private_IsPendingRefresh @ 1469f5300

bool __thiscall SListView<FName>::Private_IsPendingRefresh(SListView<FName> *this)

{
  bool bVar1;
  
  bVar1 = STableViewBase::IsPendingRefresh((STableViewBase *)&this[-1].field_0x458);
  return bVar1;
}

// Private_ItemFromWidget @ 1469f5320

TObjectPtr<UObject> * __thiscall
SListView<UObject_*>::Private_ItemFromWidget(SListView<UObject_*> *this,ITableRow *param_1)

{
  TObjectPtr<UObject> *pTVar1;
  
  pTVar1 = TMapBase<ITableRow_const_*,TObjectPtr<UObject>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TObjectPtr<UObject>,0>_>
           ::Find((TMapBase<ITableRow_const_*,TObjectPtr<UObject>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TObjectPtr<UObject>,0>_>
                   *)&this->_padding_,param_1);
  if (pTVar1 == (TObjectPtr<UObject> *)0x0) {
    pTVar1 = TMapBase<ITableRow_const_*,TObjectPtr<UObject>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TObjectPtr<UObject>,0>_>
             ::Find((TMapBase<ITableRow_const_*,TObjectPtr<UObject>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TObjectPtr<UObject>,0>_>
                     *)&this->_padding_,param_1);
  }
  return pTVar1;
}

// Private_ItemFromWidget @ 1469f5360

FName * __thiscall
SListView<FName>::Private_ItemFromWidget(SListView<FName> *this,ITableRow *param_1)

{
  FName *pFVar1;
  
  pFVar1 = TMapBase<ITableRow_const_*,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ITableRow_const_*,FName,0>_>
           ::Find((TMapBase<ITableRow_const_*,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ITableRow_const_*,FName,0>_>
                   *)&this->field_0x60,param_1);
  if (pFVar1 == (FName *)0x0) {
    pFVar1 = TMapBase<ITableRow_const_*,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ITableRow_const_*,FName,0>_>
             ::Find((TMapBase<ITableRow_const_*,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ITableRow_const_*,FName,0>_>
                     *)&this->field_0x130,param_1);
  }
  return pFVar1;
}

// Private_OnExpanderArrowShiftClicked @ 1469f53a0

void __thiscall
SListView<UObject_*>::Private_OnExpanderArrowShiftClicked
          (SListView<UObject_*> *this,UObject *param_1,bool param_2)

{
  return;
}

// Private_OnExpanderArrowShiftClicked @ 1469f53b0

void __thiscall
SListView<FName>::Private_OnExpanderArrowShiftClicked
          (SListView<FName> *this,FName param_1,bool param_2)

{
  return;
}

// Private_OnItemClicked @ 1469f5740

bool __thiscall
SListView<UObject_*>::Private_OnItemClicked(SListView<UObject_*> *this,UObject *param_1)

{
  longlong *plVar1;
  char cVar2;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_padding_,&local_28);
  if (((int)this->_padding_ != 0) &&
     (plVar1 = (longlong *)this->_padding_, plVar1 != (longlong *)0x0)) {
    cVar2 = (**(code **)(*plVar1 + 0x68))(plVar1,param_1);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    return cVar2 != '\0';
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return false;
}

// Private_OnItemClicked @ 1469f57c0

bool __thiscall SListView<FName>::Private_OnItemClicked(SListView<FName> *this,FName param_1)

{
  longlong *plVar1;
  char cVar2;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->field_0x380,&local_28)
  ;
  if ((*(int *)&this->field_0x390 != 0) &&
     (plVar1 = *(longlong **)&this->field_0x388, plVar1 != (longlong *)0x0)) {
    cVar2 = (**(code **)(*plVar1 + 0x68))(plVar1,param_1);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    return cVar2 != '\0';
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return false;
}

// Private_OnItemDoubleClicked @ 1469f5840

bool __thiscall
SListView<UObject_*>::Private_OnItemDoubleClicked(SListView<UObject_*> *this,UObject *param_1)

{
  longlong *plVar1;
  char cVar2;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_padding_,&local_28);
  if (((int)this->_padding_ != 0) &&
     (plVar1 = (longlong *)this->_padding_, plVar1 != (longlong *)0x0)) {
    cVar2 = (**(code **)(*plVar1 + 0x68))(plVar1,param_1);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    return cVar2 != '\0';
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return false;
}

// Private_OnItemDoubleClicked @ 1469f58c0

bool __thiscall SListView<FName>::Private_OnItemDoubleClicked(SListView<FName> *this,FName param_1)

{
  longlong *plVar1;
  char cVar2;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->field_0x398,&local_28)
  ;
  if ((*(int *)&this->field_0x3a8 != 0) &&
     (plVar1 = *(longlong **)&this->field_0x3a0, plVar1 != (longlong *)0x0)) {
    cVar2 = (**(code **)(*plVar1 + 0x68))(plVar1,param_1);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    return cVar2 != '\0';
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return false;
}

// Private_OnItemRightClicked @ 1469f5940

void __thiscall
SListView<UObject_*>::Private_OnItemRightClicked
          (SListView<UObject_*> *this,UObject *param_1,FPointerEvent *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001469f594d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this[-1]._padding_ + 0x288))(&this[-1]._padding_,param_2);
  return;
}

// Private_OnItemRightClicked @ 1469f5960

void __thiscall
SListView<FName>::Private_OnItemRightClicked
          (SListView<FName> *this,FName param_1,FPointerEvent *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001469f596d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)&this[-1].field_0x458 + 0x288))(&this[-1].field_0x458,param_2);
  return;
}

// Private_SelectRangeFromCurrentTo @ 1469f5980

void __thiscall
SListView<UObject_*>::Private_SelectRangeFromCurrentTo(SListView<UObject_*> *this,UObject *param_1)

{
  code *pcVar1;
  uint uVar2;
  longlong *plVar3;
  bool bVar4;
  Type *pTVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  TObjectPtr<UObject> local_res18;
  TObjectPtr<UObject> local_res20;
  UObject *local_88;
  longlong local_80;
  longlong local_78;
  UObject *local_70;
  longlong *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  
  pTVar5 = TAttribute<enum_ESelectionMode::Type>::Get(&this[-1].SelectedItems.Elements.field_0x28);
  if (*pTVar5 != None) {
    uVar14 = 0;
    if ((longlong *)this->_padding_ == (longlong *)0x0) {
      local_58 = 0;
      puVar6 = &local_58;
      uStack_50 = 0;
    }
    else {
      puVar6 = (undefined8 *)(**(code **)(*(longlong *)this->_padding_ + 8))();
    }
    plVar3 = (longlong *)*puVar6;
    uStack_60 = puVar6[1];
    iVar10 = (int)puVar6[1];
    local_68 = plVar3;
    if (iVar10 != 0) {
      uVar9 = uVar14;
      if (this->_padding_ != 0) {
        for (plVar7 = plVar3; plVar7 != plVar3 + iVar10; plVar7 = plVar7 + 1) {
          if (*plVar7 == this->_padding_) {
            uVar9 = (uint)((longlong)plVar7 - (longlong)plVar3 >> 3);
            goto LAB_1469f5a57;
          }
        }
        uVar9 = 0xffffffff;
      }
LAB_1469f5a57:
      local_78 = (longlong)iVar10;
      for (plVar7 = plVar3; plVar7 != plVar3 + local_78; plVar7 = plVar7 + 1) {
        if ((UObject *)*plVar7 == param_1) {
          uVar12 = (uint)((longlong)plVar7 - (longlong)plVar3 >> 3);
          goto LAB_1469f5a85;
        }
      }
      uVar12 = 0xffffffff;
LAB_1469f5a85:
      uVar8 = iVar10 - 1;
      uVar2 = uVar8;
      if ((int)uVar9 < (int)uVar8) {
        uVar2 = uVar9;
      }
      uVar9 = 0;
      if (0 < (int)uVar2) {
        uVar9 = uVar2;
      }
      lVar11 = (longlong)(int)uVar9;
      if ((int)uVar12 < (int)uVar8) {
        uVar8 = uVar12;
      }
      uVar12 = uVar14;
      if (0 < (int)uVar8) {
        uVar12 = uVar8;
      }
      local_80 = (longlong)(int)uVar12;
      iVar13 = -1;
      if ((int)uVar9 < (int)uVar12) {
        iVar13 = 1;
      }
      if (lVar11 != local_80) {
        do {
          uVar12 = uVar14;
          if ((int)uVar9 < iVar10) {
            uVar12 = ~uVar9 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar4)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          local_88 = (UObject *)plVar3[lVar11];
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_88 != (UObject *)0x0))
          {
            UE::GC::MarkAsReachable(local_88);
          }
          TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::
          Emplace<TObjectPtr<UObject>_>
                    ((TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>
                      *)&this->_padding_,&local_res18,(bool *)&local_88);
          uVar9 = uVar9 + iVar13;
          lVar11 = lVar11 + iVar13;
        } while (lVar11 != local_80);
      }
      uVar14 = 0;
      if ((int)uVar9 < iVar10) {
        uVar14 = ~uVar9 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      local_70 = (UObject *)plVar3[(int)uVar9];
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_70 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_70);
      }
      TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::
      Emplace<TObjectPtr<UObject>_>
                ((TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>
                  *)&this->_padding_,&local_res20,(bool *)&local_70);
    }
    if (*(char *)((longlong)&this->_padding_ + 1) != '\0') {
      FInertialScrollManager::ClearScrollVelocity
                ((FInertialScrollManager *)&this[-1].RangeSelectionStart,false);
    }
  }
  return;
}

// Private_SelectRangeFromCurrentTo @ 1469f5c70

void __thiscall
SListView<FName>::Private_SelectRangeFromCurrentTo(SListView<FName> *this,FName param_1)

{
  FName FVar1;
  code *pcVar2;
  FName *pFVar3;
  bool bVar4;
  Type *pTVar5;
  undefined8 *puVar6;
  FName *pFVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  FName local_res18;
  FName local_res20;
  undefined8 local_58;
  undefined4 uStack_50;
  
  pTVar5 = TAttribute<enum_ESelectionMode::Type>::Get(&this[-1].SelectedItems.Hash);
  if (*pTVar5 != None) {
    uVar9 = 0;
    if (*(longlong **)&this->field_0x448 == (longlong *)0x0) {
      local_58 = 0;
      puVar6 = &local_58;
      uStack_50 = 0;
    }
    else {
      puVar6 = (undefined8 *)(**(code **)(**(longlong **)&this->field_0x448 + 8))();
    }
    pFVar3 = (FName *)*puVar6;
    iVar10 = (int)puVar6[1];
    if (iVar10 != 0) {
      FVar1.ComparisonIndex.Value = *(uint *)&this->field_0x2d8;
      FVar1.Number = *(uint *)&this->field_0x2dc;
      if (FVar1 != (FName)0x0) {
        for (pFVar7 = pFVar3; pFVar7 != pFVar3 + iVar10; pFVar7 = pFVar7 + 1) {
          if (*pFVar7 == FVar1) {
            uVar9 = (uint)((longlong)pFVar7 - (longlong)pFVar3 >> 3);
            goto LAB_1469f5d38;
          }
        }
        uVar9 = 0xffffffff;
      }
LAB_1469f5d38:
      local_res18 = (FName)(longlong)iVar10;
      for (pFVar7 = pFVar3; pFVar7 != pFVar3 + (longlong)local_res18; pFVar7 = pFVar7 + 1) {
        if (*pFVar7 == param_1) {
          uVar11 = (uint)((longlong)pFVar7 - (longlong)pFVar3 >> 3);
          goto LAB_1469f5d65;
        }
      }
      uVar11 = 0xffffffff;
LAB_1469f5d65:
      uVar8 = iVar10 - 1;
      uVar13 = uVar8;
      if ((int)uVar9 < (int)uVar8) {
        uVar13 = uVar9;
      }
      uVar9 = 0;
      if (0 < (int)uVar13) {
        uVar9 = uVar13;
      }
      if ((int)uVar11 < (int)uVar8) {
        uVar8 = uVar11;
      }
      uVar13 = 0;
      uVar11 = uVar13;
      if (0 < (int)uVar8) {
        uVar11 = uVar8;
      }
      iVar12 = -1;
      if ((int)uVar9 < (int)uVar11) {
        iVar12 = 1;
      }
      while (uVar11 != uVar9) {
        uVar8 = uVar13;
        if ((int)uVar9 < iVar10) {
          uVar8 = ~uVar9 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
                  ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)&this->field_0x280,
                   &local_res18,(bool *)(pFVar3 + (int)uVar9));
        uVar9 = uVar9 + iVar12;
      }
      if ((int)uVar9 < iVar10) {
        uVar13 = ~uVar9 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
                ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)&this->field_0x280,
                 &local_res20,(bool *)(pFVar3 + (int)uVar9));
    }
    if (this->field_0x3f1 != '\0') {
      FInertialScrollManager::ClearScrollVelocity
                ((FInertialScrollManager *)&this[-1].HighlightedItems.Elements.field_0x8,false);
    }
  }
  return;
}

// Private_SetItemExpansion @ 1469f5f00

void __thiscall
SListView<UObject_*>::Private_SetItemExpansion
          (SListView<UObject_*> *this,UObject *param_1,bool param_2)

{
  return;
}

// Private_SetItemExpansion @ 1469f5f10

void __thiscall
SListView<FName>::Private_SetItemExpansion(SListView<FName> *this,FName param_1,bool param_2)

{
  return;
}

// Private_SetItemHighlighted @ 1469f6040

void __thiscall
SListView<UObject_*>::Private_SetItemHighlighted
          (SListView<UObject_*> *this,UObject *param_1,bool param_2)

{
  TObjectPtr<UObject> local_res18;
  UObject *local_res20;
  
  local_res20 = param_1;
  if (param_2) {
    if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(param_1);
    }
    TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::
    Emplace<TObjectPtr<UObject>_>
              ((TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>
                *)&this->_padding_,&local_res18,(bool *)&local_res20);
    return;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::Remove
            ((TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>
              *)&this->_padding_,(TObjectPtr<UObject_const_>)&local_res20);
  return;
}

// Private_SetItemHighlighted @ 1469f60c0

void __thiscall
SListView<FName>::Private_SetItemHighlighted(SListView<FName> *this,FName param_1,bool param_2)

{
  FName local_res10;
  FName local_res18 [2];
  
  local_res10 = param_1;
  if (param_2) {
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
              ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)&this->field_0x2e0,
               local_res18,(bool *)&local_res10);
    return;
  }
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Remove
            ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)&this->field_0x2e0,param_1
            );
  return;
}

// Private_SetItemSelection @ 1469f6100

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
SListView<UObject_*>::Private_SetItemSelection
          (SListView<UObject_*> *this,UObject *param_1,bool param_2,bool param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  FSlateAccessibleMessageHandler *this_00;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  Type *pTVar6;
  FSlateApplicationBase *pFVar7;
  FVariant *pFVar8;
  FVariant *pFVar9;
  atomic<int> *paVar10;
  TObjectPtr<UObject> local_res8;
  UObject *local_res10;
  longlong *local_d8;
  TReferenceControllerBase<1> *local_d0;
  UObject *local_c8;
  UObject *local_c0;
  SWidget *local_b8;
  TReferenceControllerBase<1> *local_b0;
  FSlateWidgetAccessibleEventArgs local_a8;
  FVariant local_58;
  FVariant local_40;
  
  local_res10 = param_1;
  pTVar6 = TAttribute<enum_ESelectionMode::Type>::Get(&this[-1].SelectedItems.Elements.field_0x28);
  if (*pTVar6 != None) {
    if (param_2) {
      local_c8 = local_res10;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_res10);
      }
      TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::
      Emplace<TObjectPtr<UObject>_>
                ((TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>
                  *)&this->_padding_,&local_res8,(bool *)&local_c8);
    }
    else {
      local_c0 = local_res10;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_res10);
      }
      TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::Remove
                ((TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>
                  *)&this->_padding_,(TObjectPtr<UObject_const_>)&local_c0);
    }
    if (((param_3) ||
        (pTVar6 = TAttribute<enum_ESelectionMode::Type>::Get
                            (&this[-1].SelectedItems.Elements.field_0x28), *pTVar6 == Single)) ||
       (pTVar6 = TAttribute<enum_ESelectionMode::Type>::Get
                           (&this[-1].SelectedItems.Elements.field_0x28), *pTVar6 == SingleToggle))
    {
      this->_padding_ = (longlong)local_res10;
      this->_padding_ = (longlong)local_res10;
    }
    if (*(char *)((longlong)&this->_padding_ + 1) != '\0') {
      FInertialScrollManager::ClearScrollVelocity
                ((FInertialScrollManager *)&this[-1].RangeSelectionStart,false);
    }
    if (param_2) {
      (**(code **)(this->_padding_ + 0xd8))(this,&local_d8,&local_res10);
      if (local_d8 != (longlong *)0x0) {
        if ((local_d8 == (longlong *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        (**(code **)(*local_d8 + 0x58))(local_d8,&local_b8);
        pFVar7 = FSlateApplicationBase::Get();
        pTVar1 = (pFVar7->AccessibleMessageHandler).SharedReferenceCount.ReferenceController;
        this_00 = (pFVar7->AccessibleMessageHandler).Object;
        if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
          UNLOCK();
        }
        pFVar8 = FVariant::FVariant<bool>(&local_58,true);
        pFVar9 = FVariant::FVariant<bool>(&local_40,false);
        pTVar4 = local_b0;
        if (local_b0 == (TReferenceControllerBase<1> *)0x0) {
          paVar10 = (atomic<int> *)&DAT_00000008;
        }
        else {
          paVar10 = &local_b0->SharedReferenceCount;
          LOCK();
          *paVar10 = (atomic<int>)((int)*paVar10 + 1);
          UNLOCK();
        }
        local_a8.Widget.Object = local_b8;
        local_a8.Widget.SharedReferenceCount.ReferenceController = local_b0;
        if (local_b0 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          *paVar10 = (atomic<int>)((int)*paVar10 + 1);
          UNLOCK();
        }
        local_a8.Event = FocusChange;
        FVariant::FVariant(&local_a8.OldValue,pFVar9);
        FVariant::FVariant(&local_a8.NewValue,pFVar8);
        local_a8.SlateUserIndex = 0;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
        pFVar2 = (pFVar9->Value).AllocatorInstance.Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        pFVar2 = (pFVar8->Value).AllocatorInstance.Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
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
                  (local_b0);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_d0);
    }
  }
  return;
}

// Private_SetItemSelection @ 1469f6370

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
SListView<FName>::Private_SetItemSelection
          (SListView<FName> *this,FName param_1,bool param_2,bool param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  FSlateAccessibleMessageHandler *this_00;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  Type *pTVar6;
  FSlateApplicationBase *pFVar7;
  FVariant *pFVar8;
  FVariant *pFVar9;
  atomic<int> *paVar10;
  FName local_res8;
  FName local_res10;
  longlong *local_c8;
  TReferenceControllerBase<1> *local_c0;
  SWidget *local_b8;
  TReferenceControllerBase<1> *local_b0;
  FSlateWidgetAccessibleEventArgs local_a8;
  FVariant local_58;
  FVariant local_40;
  
  local_res10 = param_1;
  pTVar6 = TAttribute<enum_ESelectionMode::Type>::Get(&this[-1].SelectedItems.Hash);
  if (*pTVar6 != None) {
    if (param_2) {
      TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
                ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)&this->field_0x280,
                 &local_res8,(bool *)&local_res10);
    }
    else {
      TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Remove
                ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)&this->field_0x280,
                 local_res10);
    }
    if (((param_3) ||
        (pTVar6 = TAttribute<enum_ESelectionMode::Type>::Get(&this[-1].SelectedItems.Hash),
        *pTVar6 == Single)) ||
       (pTVar6 = TAttribute<enum_ESelectionMode::Type>::Get(&this[-1].SelectedItems.Hash),
       *pTVar6 == SingleToggle)) {
      *(uint *)&this->field_0x2d0 = local_res10.ComparisonIndex.Value;
      *(uint *)&this->field_0x2d4 = local_res10.Number;
      *(uint *)&this->field_0x2d8 = local_res10.ComparisonIndex.Value;
      *(uint *)&this->field_0x2dc = local_res10.Number;
    }
    if (this->field_0x3f1 != '\0') {
      FInertialScrollManager::ClearScrollVelocity
                ((FInertialScrollManager *)&this[-1].HighlightedItems.Elements.field_0x8,false);
    }
    if (param_2) {
      (**(code **)(*(longlong *)this + 0xd8))(this,&local_c8,&local_res10);
      if (local_c8 != (longlong *)0x0) {
        if ((local_c8 == (longlong *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        (**(code **)(*local_c8 + 0x58))(local_c8,&local_b8);
        pFVar7 = FSlateApplicationBase::Get();
        pTVar1 = (pFVar7->AccessibleMessageHandler).SharedReferenceCount.ReferenceController;
        this_00 = (pFVar7->AccessibleMessageHandler).Object;
        if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
          UNLOCK();
        }
        pFVar8 = FVariant::FVariant<bool>(&local_58,true);
        pFVar9 = FVariant::FVariant<bool>(&local_40,false);
        pTVar4 = local_b0;
        if (local_b0 == (TReferenceControllerBase<1> *)0x0) {
          paVar10 = (atomic<int> *)&DAT_00000008;
        }
        else {
          paVar10 = &local_b0->SharedReferenceCount;
          LOCK();
          *paVar10 = (atomic<int>)((int)*paVar10 + 1);
          UNLOCK();
        }
        local_a8.Widget.Object = local_b8;
        local_a8.Widget.SharedReferenceCount.ReferenceController = local_b0;
        if (local_b0 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          *paVar10 = (atomic<int>)((int)*paVar10 + 1);
          UNLOCK();
        }
        local_a8.Event = FocusChange;
        FVariant::FVariant(&local_a8.OldValue,pFVar9);
        FVariant::FVariant(&local_a8.NewValue,pFVar8);
        local_a8.SlateUserIndex = 0;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
        pFVar2 = (pFVar9->Value).AllocatorInstance.Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        pFVar2 = (pFVar8->Value).AllocatorInstance.Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
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
                  (local_b0);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_c0);
    }
  }
  return;
}

// Private_SetSelection @ 1469f65a0

void __thiscall
SListView<UObject_*>::Private_SetSelection(SListView<UObject_*> *this,UObject *param_1,Type param_2)

{
  undefined1 *puVar1;
  TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator> *this_00;
  int iVar2;
  bool bVar3;
  Type *pTVar4;
  
  this_00 = &this->SelectedItems;
  bVar3 = 1 < (this->SelectedItems).HashSize;
  if (!bVar3) {
    TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::
    UnhashElements(this_00);
  }
  puVar1 = &(this->SelectedItems).Elements.field_0xc;
  *(undefined4 *)&(this->SelectedItems).Elements.field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
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
  if (bVar3) {
    (this->SelectedItems).HashSize = 1;
    TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::Rehash
              (this_00);
  }
  pTVar4 = TAttribute<enum_ESelectionMode::Type>::Get(&this->_padding_);
  if (*pTVar4 != None) {
    (**(code **)(this->_padding_ + 0x28))(&this->_padding_,param_1,1,param_2 != Direct);
    (**(code **)(this->_padding_ + 0x40))(&this->_padding_,param_2);
  }
  return;
}

// Private_SetSelection @ 1469f66c0

void __thiscall
SListView<FName>::Private_SetSelection(SListView<FName> *this,FName param_1,Type param_2)

{
  undefined1 *puVar1;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *this_00;
  int iVar2;
  bool bVar3;
  Type *pTVar4;
  
  this_00 = &this->SelectedItems;
  bVar3 = 1 < (this->SelectedItems).HashSize;
  if (!bVar3) {
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::UnhashElements(this_00);
  }
  puVar1 = &(this->SelectedItems).Elements.field_0xc;
  *(undefined4 *)&(this->SelectedItems).Elements.field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
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
  if (bVar3) {
    (this->SelectedItems).HashSize = 1;
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Rehash(this_00);
  }
  pTVar4 = TAttribute<enum_ESelectionMode::Type>::Get(&this->field_0x3e8);
  if (*pTVar4 != None) {
    (**(code **)(*(longlong *)&this->field_0x588 + 0x28))
              (&this->field_0x588,param_1,1,param_2 != Direct);
    (**(code **)(*(longlong *)&this->field_0x588 + 0x40))(&this->field_0x588,param_2);
  }
  return;
}

// Private_SignalSelectionChanged @ 1469f67e0

void __thiscall
SListView<UObject_*>::Private_SignalSelectionChanged(SListView<UObject_*> *this,Type param_1)

{
  bool bVar1;
  char cVar2;
  Type *pTVar3;
  TIterator *pTVar4;
  UObject *pUVar5;
  TIterator local_38;
  
  pTVar3 = TAttribute<enum_ESelectionMode::Type>::Get(&this[-1].SelectedItems.Elements.field_0x28);
  if (*pTVar3 == None) {
    return;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_padding_,
             (FReadAccessScope *)&local_38);
  if ((((int)this->_padding_ == 0) || ((longlong *)this->_padding_ == (longlong *)0x0)) ||
     (cVar2 = (**(code **)(*(longlong *)this->_padding_ + 0x38))(), cVar2 == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_38);
  if (!bVar1) {
    return;
  }
  if ((int)this->_padding_ - *(int *)((longlong)&this->_padding_ + 4) < 1) {
    pUVar5 = (UObject *)0x0;
  }
  else {
    pTVar4 = TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::
             TIterator::TIterator
                       (&local_38,
                        (TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>
                         *)&this->_padding_);
    pUVar5 = *(UObject **)
              (*(longlong *)pTVar4->_padding_ +
              (longlong)*(int *)((longlong)&pTVar4->_padding_ + 4) * 0x10);
    if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_1469f68b9;
    if (pUVar5 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(pUVar5);
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
LAB_1469f68b9:
  TDelegate<void___cdecl(UObject_*,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>::
  ExecuteIfBound(&this->_padding_,pUVar5,param_1);
  return;
}

// Private_SignalSelectionChanged @ 1469f68e0

void __thiscall
SListView<FName>::Private_SignalSelectionChanged(SListView<FName> *this,Type param_1)

{
  bool bVar1;
  char cVar2;
  Type *pTVar3;
  TIterator *pTVar4;
  FName FVar5;
  TIterator local_38;
  
  pTVar3 = TAttribute<enum_ESelectionMode::Type>::Get(&this[-1].SelectedItems.Hash);
  if (*pTVar3 != None) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->field_0x350,
               (FReadAccessScope *)&local_38);
    if (((*(int *)&this->field_0x360 == 0) || (*(longlong **)&this->field_0x358 == (longlong *)0x0))
       || (cVar2 = (**(code **)(**(longlong **)&this->field_0x358 + 0x38))(), cVar2 == '\0')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_38);
    if (bVar1) {
      if (*(int *)&this->field_0x288 - *(int *)&this->field_0x2b4 < 1) {
        FVar5.ComparisonIndex.Value = 0;
        FVar5.Number = 0;
      }
      else {
        pTVar4 = TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::TIterator::TIterator
                           (&local_38,
                            (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)
                            &this->field_0x280);
        FVar5 = *(FName *)(*(longlong *)pTVar4->_padding_ +
                          (longlong)*(int *)((longlong)&pTVar4->_padding_ + 4) * 0x10);
      }
      TDelegate<void___cdecl(FName,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>::
      ExecuteIfBound(&this->field_0x350,FVar5,param_1);
    }
  }
  return;
}

// Private_UsesSelectorFocus @ 1469f6e00

bool __thiscall SListView<UObject_*>::Private_UsesSelectorFocus(SListView<UObject_*> *this)

{
  return true;
}

// Private_UsesSelectorFocus @ 1469f6e10

bool __thiscall SListView<FName>::Private_UsesSelectorFocus(SListView<FName> *this)

{
  return true;
}

// ReGenerateItems @ 1469f79c0

FReGenerateResults * __thiscall
SListView<UObject_*>::ReGenerateItems
          (SListView<UObject_*> *this,FReGenerateResults *__return_storage_ptr__,FGeometry *param_1)

{
  FWidgetGenerator *this_00;
  int *piVar1;
  float fVar2;
  IItemsSource<UObject_*> *pIVar3;
  bool bVar4;
  code *pcVar5;
  longlong lVar6;
  float fVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  longlong *plVar12;
  FReGenerateResults *pFVar13;
  uint uVar14;
  ulonglong uVar15;
  int iVar16;
  UObject **ppUVar17;
  uint uVar18;
  ulonglong uVar19;
  float fVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar23;
  undefined1 in_XMM2 [16];
  double dVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float local_138;
  FTableViewDimensions local_130;
  uint local_120;
  FDeprecateSlateVector2D local_11c;
  ulonglong local_110;
  longlong local_108;
  longlong lStack_100;
  longlong local_f8;
  undefined4 uStack_f0;
  undefined1 local_e8 [176];
  
  STableViewBase::ClearWidgets((STableViewBase *)this);
  this_00 = &this->WidgetGenerator;
  TArray<UObject_*,TSizedDefaultAllocator<32>_>::operator=
            (&(this->WidgetGenerator).ItemsToBeCleanedUp,
             (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)
             &(this->WidgetGenerator).ItemsWithGeneratedWidgets);
  piVar1 = &(this->WidgetGenerator).ItemsWithGeneratedWidgets.ArrayMax;
  (this->WidgetGenerator).ItemsWithGeneratedWidgets.ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->WidgetGenerator).ItemsWithGeneratedWidgets.AllocatorInstance,0,piVar1);
  }
  pIVar3 = (this->ViewSource).Ptr;
  if (pIVar3 == (IItemsSource<UObject_*> *)0x0) {
    local_f8 = 0;
    plVar12 = &local_f8;
    uStack_f0 = 0;
  }
  else {
    plVar12 = (longlong *)(**(code **)((longlong)*pIVar3 + 8))(pIVar3,local_e8);
  }
  lVar6 = *plVar12;
  lStack_100 = plVar12[1];
  iVar16 = (int)plVar12[1];
  local_108 = lVar6;
  if (iVar16 < 1) {
    __return_storage_ptr__->NewScrollOffset = 0.0;
    __return_storage_ptr__->LengthOfGeneratedItems = 0.0;
    __return_storage_ptr__->ExactNumLinesOnScreen = 0.0;
    __return_storage_ptr__->bGeneratedPastLastItem = false;
    FWidgetGenerator::ProcessItemCleanUp(this_00);
    FWidgetGenerator::ValidateWidgetGeneration(this_00);
  }
  else {
    auVar21._8_8_ = 0;
    auVar21._0_8_ = this->_padding_;
    local_120 = iVar16 - 1;
    fVar25 = 0.0;
    fVar26 = 0.0;
    fVar28 = 0.0;
    auVar21 = roundpd(auVar21,auVar21,1);
    fVar2 = param_1->Scale;
    uVar18 = local_120;
    if ((int)auVar21._0_8_ < (int)local_120) {
      uVar18 = (int)auVar21._0_8_;
    }
    local_138 = 0.0;
    uVar10 = 0;
    if (0 < (int)uVar18) {
      uVar10 = uVar18;
    }
    bVar4 = false;
    bVar9 = false;
    local_11c = param_1->Size;
    FTableViewDimensions::FTableViewDimensions
              (&local_130,*(EOrientation *)((longlong)&this->_padding_ + 4),
               (FDeprecateVector2DParameter *)&local_11c);
    fVar7 = __real_3f800000;
    uVar15 = (ulonglong)(int)uVar10;
    ppUVar17 = (UObject **)(lVar6 + uVar15 * 8);
    uVar19 = uVar15;
    uVar18 = uVar10;
    local_110 = uVar15;
    fVar20 = local_130.ScrollAxis;
    do {
      if (iVar16 <= (int)uVar18) break;
      uVar11 = 0;
      if ((int)uVar18 < iVar16) {
        uVar11 = ~uVar18 >> 0x1f;
      }
      if (uVar11 == 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          pFVar13 = (FReGenerateResults *)(*pcVar5)();
          return pFVar13;
        }
        uVar15 = (ulonglong)uVar10;
        fVar20 = local_130.ScrollAxis;
      }
      if (*ppUVar17 != (UObject *)0x0) {
        fVar20 = GenerateWidgetForItem(this,ppUVar17,uVar18,(int)uVar15,fVar2);
        uVar15 = (ulonglong)uVar10;
        if (uVar18 == uVar10) {
          auVar22._8_8_ = 0;
          auVar22._0_8_ = this->_padding_;
          auVar21 = roundpd(in_XMM2,auVar22,3);
          dVar24 = (double)this->_padding_ - auVar21._0_8_;
          if (dVar24 <= __real_0000000000000000) {
            dVar24 = __real_0000000000000000;
          }
          fVar23 = fVar7 - (float)dVar24;
          in_XMM2 = ZEXT416((uint)fVar23);
          fVar27 = local_130.ScrollAxis / (fVar23 * fVar20);
          if (fVar23 <= fVar27) {
            fVar27 = fVar23;
          }
          fVar26 = fVar27 + fVar26;
          fVar27 = fVar26 * fVar20;
          local_138 = fVar20;
        }
        else {
          fVar27 = fVar7;
          if (local_130.ScrollAxis < fVar20 + fVar28) {
            fVar27 = (local_130.ScrollAxis - fVar28) / fVar20;
          }
          fVar26 = fVar27 + fVar26;
          fVar27 = fVar20;
        }
        fVar25 = fVar20 + fVar25;
        fVar28 = fVar28 + fVar27;
        bVar9 = (int)local_120 <= (int)uVar18;
        fVar20 = local_130.ScrollAxis;
        if ((uVar19 == local_110) && (local_130.ScrollAxis <= fVar28)) {
          bVar4 = true;
          break;
        }
        bVar4 = local_130.ScrollAxis + __real_3a83126f <= fVar28;
      }
      uVar18 = uVar18 + 1;
      uVar19 = uVar19 + 1;
      ppUVar17 = ppUVar17 + 1;
    } while (!bVar4);
    if ((!bVar9) || (bVar4)) {
      __return_storage_ptr__->NewScrollOffset = (double)this->_padding_;
      dVar24 = (double)fVar26;
      __return_storage_ptr__->bGeneratedPastLastItem = false;
    }
    else {
      uVar18 = (int)uVar15 - 1;
      dVar24 = (double)((fVar25 - fVar20) / local_138) + (double)(int)uVar15;
      if (fVar25 < fVar20) {
        ppUVar17 = (UObject **)(local_108 + (longlong)(int)uVar18 * 8);
        do {
          if ((int)uVar18 < 0) break;
          uVar11 = 0;
          if ((int)uVar18 < iVar16) {
            uVar11 = ~uVar18 >> 0x1f;
          }
          uVar14 = (uint)uVar15;
          if ((uVar11 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             uVar14 = uVar10, fVar20 = local_130.ScrollAxis, bVar9)) {
            pcVar5 = (code *)swi(3);
            pFVar13 = (FReGenerateResults *)(*pcVar5)();
            return pFVar13;
          }
          if (*ppUVar17 != (UObject *)0x0) {
            fVar26 = GenerateWidgetForItem(this,ppUVar17,uVar18,uVar14,fVar2);
            fVar25 = fVar26 + fVar25;
            fVar20 = local_130.ScrollAxis;
            if ((local_130.ScrollAxis < fVar25) && (0.0 < fVar26)) {
              dVar24 = (double)((fVar25 - local_130.ScrollAxis) / fVar26) + (double)(int)uVar18;
            }
          }
          uVar15 = (ulonglong)uVar10;
          uVar18 = uVar18 - 1;
          ppUVar17 = ppUVar17 + -1;
        } while (fVar25 < fVar20);
      }
      __return_storage_ptr__->bGeneratedPastLastItem = true;
      __return_storage_ptr__->NewScrollOffset = dVar24;
      dVar24 = (double)iVar16 - dVar24;
    }
    __return_storage_ptr__->ExactNumLinesOnScreen = dVar24;
    __return_storage_ptr__->LengthOfGeneratedItems = (double)fVar25;
    FWidgetGenerator::ProcessItemCleanUp(this_00);
    FWidgetGenerator::ValidateWidgetGeneration(this_00);
  }
  return __return_storage_ptr__;
}

// ReGenerateItems @ 1469f7f30

FReGenerateResults * __thiscall
SListView<FName>::ReGenerateItems
          (SListView<FName> *this,FReGenerateResults *__return_storage_ptr__,FGeometry *param_1)

{
  FWidgetGenerator *this_00;
  int *piVar1;
  float fVar2;
  IItemsSource<FName> *pIVar3;
  bool bVar4;
  code *pcVar5;
  longlong lVar6;
  float fVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  longlong *plVar12;
  FReGenerateResults *pFVar13;
  uint uVar14;
  ulonglong uVar15;
  int iVar16;
  FName *pFVar17;
  uint uVar18;
  ulonglong uVar19;
  float fVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar23;
  undefined1 in_XMM2 [16];
  double dVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float local_138;
  FTableViewDimensions local_130;
  uint local_120;
  FDeprecateSlateVector2D local_11c;
  ulonglong local_110;
  longlong local_108;
  longlong lStack_100;
  longlong local_f8;
  undefined4 uStack_f0;
  undefined1 local_e8 [176];
  
  STableViewBase::ClearWidgets((STableViewBase *)this);
  this_00 = &this->WidgetGenerator;
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=
            (&(this->WidgetGenerator).ItemsToBeCleanedUp,
             &(this->WidgetGenerator).ItemsWithGeneratedWidgets);
  piVar1 = &(this->WidgetGenerator).ItemsWithGeneratedWidgets.ArrayMax;
  (this->WidgetGenerator).ItemsWithGeneratedWidgets.ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&(this->WidgetGenerator).ItemsWithGeneratedWidgets.AllocatorInstance,0,piVar1);
  }
  pIVar3 = (this->ViewSource).Ptr;
  if (pIVar3 == (IItemsSource<FName> *)0x0) {
    local_f8 = 0;
    plVar12 = &local_f8;
    uStack_f0 = 0;
  }
  else {
    plVar12 = (longlong *)(**(code **)((longlong)*pIVar3 + 8))(pIVar3,local_e8);
  }
  lVar6 = *plVar12;
  lStack_100 = plVar12[1];
  iVar16 = (int)plVar12[1];
  local_108 = lVar6;
  if (iVar16 < 1) {
    __return_storage_ptr__->NewScrollOffset = 0.0;
    __return_storage_ptr__->LengthOfGeneratedItems = 0.0;
    __return_storage_ptr__->ExactNumLinesOnScreen = 0.0;
    __return_storage_ptr__->bGeneratedPastLastItem = false;
    FWidgetGenerator::ProcessItemCleanUp(this_00);
    FWidgetGenerator::ValidateWidgetGeneration(this_00);
  }
  else {
    auVar21._8_8_ = 0;
    auVar21._0_8_ = *(ulonglong *)&this->field_0x330;
    local_120 = iVar16 - 1;
    fVar25 = 0.0;
    fVar26 = 0.0;
    fVar28 = 0.0;
    auVar21 = roundpd(auVar21,auVar21,1);
    fVar2 = param_1->Scale;
    uVar18 = local_120;
    if ((int)auVar21._0_8_ < (int)local_120) {
      uVar18 = (int)auVar21._0_8_;
    }
    local_138 = 0.0;
    uVar10 = 0;
    if (0 < (int)uVar18) {
      uVar10 = uVar18;
    }
    bVar4 = false;
    bVar9 = false;
    local_11c = param_1->Size;
    FTableViewDimensions::FTableViewDimensions
              (&local_130,*(EOrientation *)&this->field_0x44c,
               (FDeprecateVector2DParameter *)&local_11c);
    fVar7 = __real_3f800000;
    uVar15 = (ulonglong)(int)uVar10;
    pFVar17 = (FName *)(lVar6 + uVar15 * 8);
    uVar19 = uVar15;
    uVar18 = uVar10;
    local_110 = uVar15;
    fVar20 = local_130.ScrollAxis;
    do {
      if (iVar16 <= (int)uVar18) break;
      uVar11 = 0;
      if ((int)uVar18 < iVar16) {
        uVar11 = ~uVar18 >> 0x1f;
      }
      if (uVar11 == 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          pFVar13 = (FReGenerateResults *)(*pcVar5)();
          return pFVar13;
        }
        uVar15 = (ulonglong)uVar10;
        fVar20 = local_130.ScrollAxis;
      }
      if (*pFVar17 != (FName)0x0) {
        fVar20 = GenerateWidgetForItem(this,pFVar17,uVar18,(int)uVar15,fVar2);
        uVar15 = (ulonglong)uVar10;
        if (uVar18 == uVar10) {
          auVar22._8_8_ = 0;
          auVar22._0_8_ = *(double *)&this->field_0x330;
          auVar21 = roundpd(in_XMM2,auVar22,3);
          dVar24 = *(double *)&this->field_0x330 - auVar21._0_8_;
          if (dVar24 <= __real_0000000000000000) {
            dVar24 = __real_0000000000000000;
          }
          fVar23 = fVar7 - (float)dVar24;
          in_XMM2 = ZEXT416((uint)fVar23);
          fVar27 = local_130.ScrollAxis / (fVar23 * fVar20);
          if (fVar23 <= fVar27) {
            fVar27 = fVar23;
          }
          fVar26 = fVar27 + fVar26;
          fVar27 = fVar26 * fVar20;
          local_138 = fVar20;
        }
        else {
          fVar27 = fVar7;
          if (local_130.ScrollAxis < fVar20 + fVar28) {
            fVar27 = (local_130.ScrollAxis - fVar28) / fVar20;
          }
          fVar26 = fVar27 + fVar26;
          fVar27 = fVar20;
        }
        fVar25 = fVar20 + fVar25;
        fVar28 = fVar28 + fVar27;
        bVar9 = (int)local_120 <= (int)uVar18;
        fVar20 = local_130.ScrollAxis;
        if ((uVar19 == local_110) && (local_130.ScrollAxis <= fVar28)) {
          bVar4 = true;
          break;
        }
        bVar4 = local_130.ScrollAxis + __real_3a83126f <= fVar28;
      }
      uVar18 = uVar18 + 1;
      uVar19 = uVar19 + 1;
      pFVar17 = pFVar17 + 1;
    } while (!bVar4);
    if ((!bVar9) || (bVar4)) {
      __return_storage_ptr__->NewScrollOffset = *(double *)&this->field_0x330;
      dVar24 = (double)fVar26;
      __return_storage_ptr__->bGeneratedPastLastItem = false;
    }
    else {
      uVar18 = (int)uVar15 - 1;
      dVar24 = (double)((fVar25 - fVar20) / local_138) + (double)(int)uVar15;
      if (fVar25 < fVar20) {
        pFVar17 = (FName *)(local_108 + (longlong)(int)uVar18 * 8);
        do {
          if ((int)uVar18 < 0) break;
          uVar11 = 0;
          if ((int)uVar18 < iVar16) {
            uVar11 = ~uVar18 >> 0x1f;
          }
          uVar14 = (uint)uVar15;
          if ((uVar11 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             uVar14 = uVar10, fVar20 = local_130.ScrollAxis, bVar9)) {
            pcVar5 = (code *)swi(3);
            pFVar13 = (FReGenerateResults *)(*pcVar5)();
            return pFVar13;
          }
          if (*pFVar17 != (FName)0x0) {
            fVar26 = GenerateWidgetForItem(this,pFVar17,uVar18,uVar14,fVar2);
            fVar25 = fVar26 + fVar25;
            fVar20 = local_130.ScrollAxis;
            if ((local_130.ScrollAxis < fVar25) && (0.0 < fVar26)) {
              dVar24 = (double)((fVar25 - local_130.ScrollAxis) / fVar26) + (double)(int)uVar18;
            }
          }
          uVar15 = (ulonglong)uVar10;
          uVar18 = uVar18 - 1;
          pFVar17 = pFVar17 + -1;
        } while (fVar25 < fVar20);
      }
      __return_storage_ptr__->bGeneratedPastLastItem = true;
      __return_storage_ptr__->NewScrollOffset = dVar24;
      dVar24 = (double)iVar16 - dVar24;
    }
    __return_storage_ptr__->ExactNumLinesOnScreen = dVar24;
    __return_storage_ptr__->LengthOfGeneratedItems = (double)fVar25;
    FWidgetGenerator::ProcessItemCleanUp(this_00);
    FWidgetGenerator::ValidateWidgetGeneration(this_00);
  }
  return __return_storage_ptr__;
}

// ReGeneratePinnedItems @ 1469f8990

void __thiscall
SListView<UObject_*>::ReGeneratePinnedItems
          (SListView<UObject_*> *this,TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_1,
          FGeometry *param_2,int param_3)

{
  float fVar1;
  IItemsSource<UObject_*> *pIVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  undefined1 local_48 [32];
  
  fVar1 = param_2->Scale;
  STableViewBase::ClearPinnedWidgets((STableViewBase *)this);
  TArray<UObject_*,TSizedDefaultAllocator<32>_>::operator=
            (&(this->PinnedWidgetGenerator).ItemsToBeCleanedUp,
             (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)
             &(this->PinnedWidgetGenerator).ItemsWithGeneratedWidgets);
  piVar6 = &(this->PinnedWidgetGenerator).ItemsWithGeneratedWidgets.ArrayMax;
  (this->PinnedWidgetGenerator).ItemsWithGeneratedWidgets.ArrayNum = 0;
  if (*piVar6 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->PinnedWidgetGenerator).ItemsWithGeneratedWidgets.AllocatorInstance,0,
               piVar6);
  }
  if (param_3 == -1) {
    TAttribute<int>::operator=(&this->MaxPinnedItems,&this->DefaultMaxPinnedItems);
  }
  else {
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->MaxPinnedItems).Getter);
    (this->MaxPinnedItems).Value = param_3;
    (this->MaxPinnedItems).bIsSet = true;
  }
  piVar6 = TAttribute<int>::Get(&this->MaxPinnedItems);
  this->bIsHierarchyCollapsed = *piVar6 < param_1->ArrayNum;
  pIVar2 = (this->ViewSource).Ptr;
  if (pIVar2 != (IItemsSource<UObject_*> *)0x0) {
    (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_48);
  }
  iVar7 = param_1->ArrayNum;
  uVar8 = 0;
  if (0 < iVar7) {
    lVar9 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar8 < iVar7) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      GeneratePinnedWidgetForItem
                (this,(UObject **)((param_1->AllocatorInstance).Data + (longlong)(int)uVar8 * 8),
                 uVar8,iVar7,fVar1);
      if (this->SelectorItem != (UObject *)0x0) {
        uVar5 = 0;
        if ((int)uVar8 < param_1->ArrayNum) {
          uVar5 = ~uVar8 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (*(UObject **)((param_1->AllocatorInstance).Data + lVar9) == this->SelectorItem) {
          this->SelectorItem = (UObject *)0x0;
        }
      }
      iVar7 = param_1->ArrayNum;
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 8;
    } while ((int)uVar8 < iVar7);
  }
  FWidgetGenerator::ProcessItemCleanUp(&this->PinnedWidgetGenerator);
  FWidgetGenerator::ValidateWidgetGeneration(&this->PinnedWidgetGenerator);
  return;
}

// RebuildList @ 1469f8bb0

void __thiscall SListView<UObject_*>::RebuildList(SListView<UObject_*> *this)

{
  FWidgetGenerator::Clear(&this->WidgetGenerator);
  FWidgetGenerator::Clear(&this->PinnedWidgetGenerator);
                    /* WARNING: Could not recover jumptable at 0x0001469f8bdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x248))(this);
  return;
}

// RebuildList @ 1469f8bf0

void __thiscall SListView<FName>::RebuildList(SListView<FName> *this)

{
  FWidgetGenerator::Clear(&this->WidgetGenerator);
  FWidgetGenerator::Clear(&this->PinnedWidgetGenerator);
                    /* WARNING: Could not recover jumptable at 0x0001469f8c1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x248))(this);
  return;
}

// ScrollBy @ 146a0ddf0

float __thiscall
SListView<UObject_*>::ScrollBy
          (SListView<UObject_*> *this,FGeometry *param_1,float param_2,EAllowOverscroll param_3)

{
  float fVar1;
  IItemsSource<UObject_*> *pIVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  double dVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  undefined1 (*pauVar12) [16];
  TSharedRef<ITableRow,1> *pTVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  FDeprecateSlateVector2D FVar16;
  uint uVar17;
  FSharedReferencer<1> FVar18;
  undefined8 *puVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar26;
  double dVar27;
  float fVar28;
  ITableRow *local_1a8;
  FSharedReferencer<1> FStack_1a0;
  FDeprecateVector2DParameter local_198;
  FTableViewDimensions local_190;
  undefined8 local_180;
  FSharedReferencer<1> local_178;
  undefined8 local_170;
  undefined4 uStack_168;
  longlong local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  TReferenceControllerBase<1> *local_148;
  undefined8 local_140;
  TReferenceControllerBase<1> *local_138;
  TSharedRef<ITableRow,1> local_128;
  undefined1 local_110 [8];
  TReferenceControllerBase<1> *local_108;
  undefined1 local_100 [8];
  TReferenceControllerBase<1> *local_f8;
  undefined1 local_f0 [8];
  TReferenceControllerBase<1> *local_e8;
  undefined1 local_e0 [184];
  
  uVar7 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  bVar6 = false;
  bVar5 = false;
  if ((param_3 != No) ||
     (((__real_3f1a36e2e0000000 < (double)this->_padding_ ||
        __real_3f1a36e2e0000000 == (double)this->_padding_ || (0.0 <= param_2)) &&
      (((char)this->_padding_ == '\0' || (param_2 <= 0.0)))))) {
    dVar27 = (double)this->_padding_;
    auVar23._8_8_ = 0;
    auVar23._0_8_ = dVar27;
    uVar17 = (uint)(double)this->_padding_;
    fVar28 = (float)((uint)param_2 & __xmm_7fffffff7fffffff7fffffff7fffffff);
    if ((dVar27 == 0.0) && ((char)this->_padding_ != '\0')) {
      bVar10 = true;
    }
    else {
      bVar10 = false;
    }
    if ((param_3 == Yes) &&
       (bVar9 = FOverscroll::ShouldApplyOverscroll
                          ((FOverscroll *)((longlong)&this->_padding_ + 4),dVar27 == 0.0,
                           SUB81(this->_padding_,0),param_2), bVar9)) {
      fVar26 = __real_3f800000;
      if ((param_2 <= 0.0) && (fVar26 = __real_bf800000, 0.0 <= param_2)) {
        fVar26 = 0.0;
      }
      fVar28 = FOverscroll::ScrollBy
                         ((FOverscroll *)((longlong)&this->_padding_ + 4),param_1,fVar26 * fVar28);
      if (fVar28 == 0.0) {
        return fVar28;
      }
      STableViewBase::RequestLayoutRefresh((STableViewBase *)this);
      return fVar28;
    }
    if (!bVar10) {
      pIVar2 = (this->ViewSource).Ptr;
      if (pIVar2 == (IItemsSource<UObject_*> *)0x0) {
        local_170 = 0;
        pauVar12 = (undefined1 (*) [16])&local_170;
        uStack_168 = 0;
      }
      else {
        pauVar12 = (undefined1 (*) [16])(**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_e0);
      }
      dVar8 = __real_bff0000000000000;
      fVar26 = __real_3f800000;
      dVar4 = __real_3ff0000000000000;
      uStack_158 = *(undefined8 *)(*pauVar12 + 8);
      local_160 = SUB168(*pauVar12,0);
      if ((0 < (int)uStack_158) && (fVar1 = param_1->Scale, param_2 != 0.0)) {
        puVar19 = (undefined8 *)(local_160 + (longlong)(int)uVar17 * 8);
        do {
          dVar27 = auVar23._0_8_;
          if (((int)uStack_158 <= (int)uVar17) || ((int)uVar17 < 0)) break;
          local_1a8 = (ITableRow *)0x0;
          uVar11 = 0;
          if ((int)uVar17 < (int)uStack_158) {
            uVar11 = ~uVar17 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar10)) {
            pcVar3 = (code *)swi(3);
            fVar28 = (float)(*pcVar3)();
            return fVar28;
          }
          if ((UObject *)*puVar19 != (UObject *)0x0) {
            pTVar13 = TMapBase<UObject_*,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<ITableRow,1>,0>_>
                      ::Find((TMapBase<UObject_*,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<ITableRow,1>,0>_>
                              *)&(this->WidgetGenerator).ItemToWidgetMap,(UObject *)*puVar19);
            if (pTVar13 == (TSharedRef<ITableRow,1> *)0x0) {
              bVar5 = true;
              local_148 = (TReferenceControllerBase<1> *)0x0;
              puVar15 = &local_150;
            }
            else {
              local_1a8 = pTVar13->Object;
              bVar6 = true;
              local_138 = (pTVar13->SharedReferenceCount).ReferenceController;
              if (local_138 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                local_138->SharedReferenceCount =
                     (atomic<int>)((int)local_138->SharedReferenceCount + 1);
                UNLOCK();
              }
              puVar15 = &local_140;
            }
            FVar18.ReferenceController = (TReferenceControllerBase<1> *)puVar15[1];
            puVar15[1] = 0;
            *puVar15 = 0;
            FStack_1a0.ReferenceController = FVar18.ReferenceController;
            if (bVar5) {
              bVar5 = false;
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_148);
            }
            if (bVar6) {
              bVar6 = false;
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_138);
            }
            if (local_1a8 == (ITableRow *)0x0) {
              plVar14 = (longlong *)(**(code **)(this->_padding_ + 0x2c8))(this,local_110,*puVar19);
              local_178.ReferenceController = (TReferenceControllerBase<1> *)plVar14[1];
              local_1a8 = (ITableRow *)*plVar14;
              if (local_178.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                (local_178.ReferenceController)->SharedReferenceCount =
                     (atomic<int>)((int)(local_178.ReferenceController)->SharedReferenceCount + 1);
                UNLOCK();
              }
              local_180 = 0;
              SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_1a0,&local_178);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_178.ReferenceController);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_108);
              if ((local_1a8 == (ITableRow *)0x0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar10)) {
                pcVar3 = (code *)swi(3);
                fVar28 = (float)(*pcVar3)();
                return fVar28;
              }
              (**(code **)((longlong)*local_1a8 + 0x10))(local_1a8,uVar17);
              if ((local_1a8 == (ITableRow *)0x0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x408,L""), bVar10)) {
                pcVar3 = (code *)swi(3);
                fVar28 = (float)(*pcVar3)();
                return fVar28;
              }
              FVar18.ReferenceController = FStack_1a0.ReferenceController;
              local_128.SharedReferenceCount.ReferenceController = FStack_1a0.ReferenceController;
              if (FStack_1a0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                (FStack_1a0.ReferenceController)->SharedReferenceCount =
                     (atomic<int>)((int)(FStack_1a0.ReferenceController)->SharedReferenceCount + 1);
                UNLOCK();
              }
              local_128.Object = local_1a8;
              if ((local_1a8 == (ITableRow *)0x0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x25d,L""), bVar10)) {
                pcVar3 = (code *)swi(3);
                fVar28 = (float)(*pcVar3)();
                return fVar28;
              }
              FWidgetGenerator::OnItemSeen(&this->WidgetGenerator,(UObject *)*puVar19,&local_128);
              if ((local_1a8 == (ITableRow *)0x0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar10)) {
                pcVar3 = (code *)swi(3);
                fVar28 = (float)(*pcVar3)();
                return fVar28;
              }
              puVar15 = (undefined8 *)
                        (**(code **)((longlong)*local_1a8 + 0x58))(local_1a8,local_100);
              SWidget::SlatePrepass((SWidget *)*puVar15,fVar1);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_f8);
              if ((local_1a8 == (ITableRow *)0x0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar10)) {
                pcVar3 = (code *)swi(3);
                fVar28 = (float)(*pcVar3)();
                return fVar28;
              }
            }
            puVar15 = (undefined8 *)(**(code **)((longlong)*local_1a8 + 0x58))(local_1a8,local_f0);
            FVar16 = SWidget::GetDesiredSize((SWidget *)*puVar15);
            local_198 = *(FDeprecateVector2DParameter *)FVar16;
            FTableViewDimensions::FTableViewDimensions
                      (&local_190,*(EOrientation *)((longlong)&this->_padding_ + 4),&local_198);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_e8);
            if (param_2 <= 0.0) {
              fVar20 = (float)truncf();
              fVar21 = (float)dVar27 - fVar20;
              if ((float)((uint)((float)dVar27 - fVar20) & uVar7) <= __real_322bcc77) {
                auVar23._0_8_ = dVar27 + dVar8;
                fVar21 = fVar26;
              }
              fVar21 = fVar21 * local_190.ScrollAxis;
              dVar27 = auVar23._0_8_;
              if (fVar28 <= fVar21) {
                auVar25._8_8_ = 0;
                auVar25._0_8_ = dVar27;
                if (fVar28 == fVar21) {
                  auVar23 = roundpd(auVar23,auVar25,3);
                  dVar27 = auVar23._0_8_;
                }
                else {
                  dVar27 = (double)((float)(int)dVar27 + (fVar21 - fVar28) / local_190.ScrollAxis);
                }
              }
              else {
                if (uVar17 != 0) {
                  auVar24._8_8_ = 0;
                  auVar24._0_8_ = dVar27;
                  uVar17 = uVar17 - 1;
                  auVar23 = roundpd(auVar23,auVar24,3);
                  puVar19 = puVar19 + -1;
                  goto LAB_146a0e399;
                }
                dVar27 = 0.0;
              }
            }
            else {
              auVar22._8_8_ = 0;
              auVar22._0_8_ = dVar27;
              auVar23 = roundpd(auVar22,auVar22,3);
              fVar21 = (float)(dVar4 - (dVar27 - auVar23._0_8_)) * local_190.ScrollAxis;
              if (fVar21 < fVar28) {
                uVar17 = uVar17 + 1;
                puVar19 = puVar19 + 1;
                auVar23._0_8_ = (double)(int)dVar27 + dVar4;
                auVar23._8_8_ = 0;
LAB_146a0e399:
                fVar28 = fVar28 - fVar21;
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (FVar18.ReferenceController);
                goto LAB_146a0e3a1;
              }
              if (fVar28 != fVar21) {
                dVar4 = dVar4 - (double)((fVar21 - fVar28) / local_190.ScrollAxis);
              }
              dVar27 = (double)(int)dVar27 + dVar4;
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (FVar18.ReferenceController);
            break;
          }
          uVar17 = uVar17 + 1;
          puVar19 = puVar19 + 1;
LAB_146a0e3a1:
          dVar27 = auVar23._0_8_;
        } while (fVar28 != 0.0);
      }
      fVar28 = (float)(**(code **)(this->_padding_ + 0x260))(this,(float)dVar27);
      return fVar28;
    }
  }
  return 0.0;
}

// ScrollBy @ 146a0e490

float __thiscall
SListView<FName>::ScrollBy
          (SListView<FName> *this,FGeometry *param_1,float param_2,EAllowOverscroll param_3)

{
  float fVar1;
  IItemsSource<FName> *pIVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  double dVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  undefined1 (*pauVar12) [16];
  TSharedRef<ITableRow,1> *pTVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  FDeprecateSlateVector2D FVar16;
  uint uVar17;
  FSharedReferencer<1> FVar18;
  FName *pFVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar26;
  double dVar27;
  float fVar28;
  ITableRow *local_1a8;
  FSharedReferencer<1> FStack_1a0;
  FDeprecateVector2DParameter local_198;
  FTableViewDimensions local_190;
  undefined8 local_180;
  FSharedReferencer<1> local_178;
  undefined8 local_170;
  undefined4 uStack_168;
  longlong local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  TReferenceControllerBase<1> *local_148;
  undefined8 local_140;
  TReferenceControllerBase<1> *local_138;
  TSharedRef<ITableRow,1> local_128;
  undefined1 local_110 [8];
  TReferenceControllerBase<1> *local_108;
  undefined1 local_100 [8];
  TReferenceControllerBase<1> *local_f8;
  undefined1 local_f0 [8];
  TReferenceControllerBase<1> *local_e8;
  undefined1 local_e0 [184];
  
  uVar7 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  bVar6 = false;
  bVar5 = false;
  if ((param_3 != No) ||
     (((__real_3f1a36e2e0000000 < *(double *)&this->field_0x338 ||
        __real_3f1a36e2e0000000 == *(double *)&this->field_0x338 || (0.0 <= param_2)) &&
      ((this->field_0x378 == '\0' || (param_2 <= 0.0)))))) {
    dVar27 = *(double *)&this->field_0x338;
    auVar23._8_8_ = 0;
    auVar23._0_8_ = dVar27;
    uVar17 = (uint)*(double *)&this->field_0x330;
    fVar28 = (float)((uint)param_2 & __xmm_7fffffff7fffffff7fffffff7fffffff);
    if ((dVar27 == 0.0) && (this->field_0x378 != '\0')) {
      bVar10 = true;
    }
    else {
      bVar10 = false;
    }
    if ((param_3 == Yes) &&
       (bVar9 = FOverscroll::ShouldApplyOverscroll
                          ((FOverscroll *)&this->field_0x544,dVar27 == 0.0,(bool)this->field_0x378,
                           param_2), bVar9)) {
      fVar26 = __real_3f800000;
      if ((param_2 <= 0.0) && (fVar26 = __real_bf800000, 0.0 <= param_2)) {
        fVar26 = 0.0;
      }
      fVar28 = FOverscroll::ScrollBy((FOverscroll *)&this->field_0x544,param_1,fVar26 * fVar28);
      if (fVar28 == 0.0) {
        return fVar28;
      }
      STableViewBase::RequestLayoutRefresh((STableViewBase *)this);
      return fVar28;
    }
    if (!bVar10) {
      pIVar2 = (this->ViewSource).Ptr;
      if (pIVar2 == (IItemsSource<FName> *)0x0) {
        local_170 = 0;
        pauVar12 = (undefined1 (*) [16])&local_170;
        uStack_168 = 0;
      }
      else {
        pauVar12 = (undefined1 (*) [16])(**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_e0);
      }
      dVar8 = __real_bff0000000000000;
      fVar26 = __real_3f800000;
      dVar4 = __real_3ff0000000000000;
      uStack_158 = *(undefined8 *)(*pauVar12 + 8);
      local_160 = SUB168(*pauVar12,0);
      if ((0 < (int)uStack_158) && (fVar1 = param_1->Scale, param_2 != 0.0)) {
        pFVar19 = (FName *)(local_160 + (longlong)(int)uVar17 * 8);
        do {
          dVar27 = auVar23._0_8_;
          if (((int)uStack_158 <= (int)uVar17) || ((int)uVar17 < 0)) break;
          local_1a8 = (ITableRow *)0x0;
          uVar11 = 0;
          if ((int)uVar17 < (int)uStack_158) {
            uVar11 = ~uVar17 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar10)) {
            pcVar3 = (code *)swi(3);
            fVar28 = (float)(*pcVar3)();
            return fVar28;
          }
          if (*pFVar19 != (FName)0x0) {
            pTVar13 = TMapBase<FName,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<ITableRow,1>,0>_>
                      ::Find((TMapBase<FName,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<ITableRow,1>,0>_>
                              *)&(this->WidgetGenerator).ItemToWidgetMap,*pFVar19);
            if (pTVar13 == (TSharedRef<ITableRow,1> *)0x0) {
              bVar5 = true;
              local_148 = (TReferenceControllerBase<1> *)0x0;
              puVar15 = &local_150;
            }
            else {
              local_1a8 = pTVar13->Object;
              bVar6 = true;
              local_138 = (pTVar13->SharedReferenceCount).ReferenceController;
              if (local_138 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                local_138->SharedReferenceCount =
                     (atomic<int>)((int)local_138->SharedReferenceCount + 1);
                UNLOCK();
              }
              puVar15 = &local_140;
            }
            FVar18.ReferenceController = (TReferenceControllerBase<1> *)puVar15[1];
            puVar15[1] = 0;
            *puVar15 = 0;
            FStack_1a0.ReferenceController = FVar18.ReferenceController;
            if (bVar5) {
              bVar5 = false;
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_148);
            }
            if (bVar6) {
              bVar6 = false;
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_138);
            }
            if (local_1a8 == (ITableRow *)0x0) {
              plVar14 = (longlong *)
                        (**(code **)(*(longlong *)this + 0x2c8))(this,local_110,*pFVar19);
              local_178.ReferenceController = (TReferenceControllerBase<1> *)plVar14[1];
              local_1a8 = (ITableRow *)*plVar14;
              if (local_178.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                (local_178.ReferenceController)->SharedReferenceCount =
                     (atomic<int>)((int)(local_178.ReferenceController)->SharedReferenceCount + 1);
                UNLOCK();
              }
              local_180 = 0;
              SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_1a0,&local_178);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_178.ReferenceController);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_108);
              if ((local_1a8 == (ITableRow *)0x0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar10)) {
                pcVar3 = (code *)swi(3);
                fVar28 = (float)(*pcVar3)();
                return fVar28;
              }
              (**(code **)((longlong)*local_1a8 + 0x10))(local_1a8,uVar17);
              if ((local_1a8 == (ITableRow *)0x0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x408,L""), bVar10)) {
                pcVar3 = (code *)swi(3);
                fVar28 = (float)(*pcVar3)();
                return fVar28;
              }
              FVar18.ReferenceController = FStack_1a0.ReferenceController;
              local_128.SharedReferenceCount.ReferenceController = FStack_1a0.ReferenceController;
              if (FStack_1a0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                (FStack_1a0.ReferenceController)->SharedReferenceCount =
                     (atomic<int>)((int)(FStack_1a0.ReferenceController)->SharedReferenceCount + 1);
                UNLOCK();
              }
              local_128.Object = local_1a8;
              if ((local_1a8 == (ITableRow *)0x0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x25d,L""), bVar10)) {
                pcVar3 = (code *)swi(3);
                fVar28 = (float)(*pcVar3)();
                return fVar28;
              }
              FWidgetGenerator::OnItemSeen(&this->WidgetGenerator,*pFVar19,&local_128);
              if ((local_1a8 == (ITableRow *)0x0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar10)) {
                pcVar3 = (code *)swi(3);
                fVar28 = (float)(*pcVar3)();
                return fVar28;
              }
              puVar15 = (undefined8 *)
                        (**(code **)((longlong)*local_1a8 + 0x58))(local_1a8,local_100);
              SWidget::SlatePrepass((SWidget *)*puVar15,fVar1);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_f8);
              if ((local_1a8 == (ITableRow *)0x0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar10)) {
                pcVar3 = (code *)swi(3);
                fVar28 = (float)(*pcVar3)();
                return fVar28;
              }
            }
            puVar15 = (undefined8 *)(**(code **)((longlong)*local_1a8 + 0x58))(local_1a8,local_f0);
            FVar16 = SWidget::GetDesiredSize((SWidget *)*puVar15);
            local_198 = *(FDeprecateVector2DParameter *)FVar16;
            FTableViewDimensions::FTableViewDimensions
                      (&local_190,*(EOrientation *)&this->field_0x44c,&local_198);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_e8);
            if (param_2 <= 0.0) {
              fVar20 = (float)truncf();
              fVar21 = (float)dVar27 - fVar20;
              if ((float)((uint)((float)dVar27 - fVar20) & uVar7) <= __real_322bcc77) {
                auVar23._0_8_ = dVar27 + dVar8;
                fVar21 = fVar26;
              }
              fVar21 = fVar21 * local_190.ScrollAxis;
              dVar27 = auVar23._0_8_;
              if (fVar28 <= fVar21) {
                auVar25._8_8_ = 0;
                auVar25._0_8_ = dVar27;
                if (fVar28 == fVar21) {
                  auVar23 = roundpd(auVar23,auVar25,3);
                  dVar27 = auVar23._0_8_;
                }
                else {
                  dVar27 = (double)((float)(int)dVar27 + (fVar21 - fVar28) / local_190.ScrollAxis);
                }
              }
              else {
                if (uVar17 != 0) {
                  auVar24._8_8_ = 0;
                  auVar24._0_8_ = dVar27;
                  uVar17 = uVar17 - 1;
                  auVar23 = roundpd(auVar23,auVar24,3);
                  pFVar19 = pFVar19 + -1;
                  goto LAB_146a0ea39;
                }
                dVar27 = 0.0;
              }
            }
            else {
              auVar22._8_8_ = 0;
              auVar22._0_8_ = dVar27;
              auVar23 = roundpd(auVar22,auVar22,3);
              fVar21 = (float)(dVar4 - (dVar27 - auVar23._0_8_)) * local_190.ScrollAxis;
              if (fVar21 < fVar28) {
                uVar17 = uVar17 + 1;
                pFVar19 = pFVar19 + 1;
                auVar23._0_8_ = (double)(int)dVar27 + dVar4;
                auVar23._8_8_ = 0;
LAB_146a0ea39:
                fVar28 = fVar28 - fVar21;
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (FVar18.ReferenceController);
                goto LAB_146a0ea41;
              }
              if (fVar28 != fVar21) {
                dVar4 = dVar4 - (double)((fVar21 - fVar28) / local_190.ScrollAxis);
              }
              dVar27 = (double)(int)dVar27 + dVar4;
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (FVar18.ReferenceController);
            break;
          }
          uVar17 = uVar17 + 1;
          pFVar19 = pFVar19 + 1;
LAB_146a0ea41:
          dVar27 = auVar23._0_8_;
        } while (fVar28 != 0.0);
      }
      fVar28 = (float)(**(code **)(*(longlong *)this + 0x260))(this,(float)dVar27);
      return fVar28;
    }
  }
  return 0.0;
}

// ScrollIntoView @ 146a0ed00

/* WARNING: Type propagation algorithm not settling */

EScrollIntoViewResult __thiscall
SListView<UObject_*>::ScrollIntoView(SListView<UObject_*> *this,FGeometry *param_1)

{
  EScrollIntoViewAlignment EVar1;
  IItemsSource<UObject_*> *pIVar2;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  FScriptContainerElement *pFVar7;
  bool bVar8;
  uint uVar9;
  EScrollIntoViewResult EVar10;
  undefined8 *puVar11;
  FGeometry *pFVar12;
  TSharedRef<ITableRow,1> *pTVar13;
  longlong *plVar14;
  longlong *plVar15;
  ITableRow *pIVar16;
  uint uVar17;
  int iVar19;
  FScriptContainerElement *pFVar20;
  float fVar21;
  double dVar22;
  double dVar23;
  undefined1 auVar24 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  double dVar27;
  undefined1 in_XMM5 [16];
  undefined1 auVar28 [16];
  float fVar29;
  double dVar30;
  float fVar31;
  float fVar32;
  ulonglong local_res8;
  undefined8 local_res18;
  longlong *local_188;
  TReferenceControllerBase<1> *local_180;
  FDeprecateVector2DParameter local_178;
  FDeprecateVector2DParameter local_170;
  FDeprecateVector2DParameter local_168;
  FDeprecateVector2DParameter local_160;
  FDeprecateVector2DParameter local_158;
  FScriptContainerElement *local_150;
  UObject *local_148;
  undefined8 local_140;
  TReferenceControllerBase<1> *local_138;
  undefined8 local_130;
  TReferenceControllerBase<1> *local_128;
  FTableViewDimensions local_120;
  FTableViewDimensions local_110;
  FTableViewDimensions local_100;
  FTableViewDimensions local_f0;
  FTableViewDimensions local_e0;
  longlong *local_d0;
  undefined8 uStack_c8;
  undefined1 local_c0 [8];
  TReferenceControllerBase<1> *local_b8;
  undefined1 local_b0 [8];
  TReferenceControllerBase<1> *local_a8;
  undefined1 local_a0 [8];
  TReferenceControllerBase<1> *local_98;
  ITableRow *pIVar18;
  
  local_res8 = local_res8 & 0xffffffff00000000;
  pIVar2 = (this->ViewSource).Ptr;
  if ((pIVar2 == (IItemsSource<UObject_*> *)0x0) || (this->ItemToScrollIntoView == (UObject *)0x0))
  goto LAB_146a0f459;
  puVar11 = (undefined8 *)(**(code **)((longlong)*pIVar2 + 8))();
  plVar14 = (longlong *)*puVar11;
  uStack_c8 = puVar11[1];
  iVar19 = (int)puVar11[1];
  local_res8 = (ulonglong)iVar19;
  for (plVar15 = plVar14; local_d0 = plVar14, plVar15 != plVar14 + local_res8; plVar15 = plVar15 + 1
      ) {
    if ((UObject *)*plVar15 == this->ItemToScrollIntoView) {
      uVar17 = (uint)((longlong)plVar15 - (longlong)plVar14 >> 3);
      if (uVar17 != 0xffffffff) {
        fVar21 = (float)(**(code **)(this->_padding_ + 0x268))(this);
        dVar23 = (double)fVar21;
        if (((dVar23 == 0.0) &&
            (bVar8 = STableViewBase::IsPendingRefresh((STableViewBase *)this), bVar8)) &&
           (dVar23 = (double)this->_padding_, dVar23 == 0.0)) {
          return Deferred;
        }
        STableViewBase::EndInertialScrolling((STableViewBase *)this,false);
        dVar22 = (double)this->_padding_;
        auVar25._0_8_ = dVar22 + dVar23;
        auVar25._8_8_ = 0;
        auVar25 = roundpd(in_XMM2,auVar25,1);
        auVar28._8_8_ = 0;
        auVar28._0_8_ = dVar22;
        auVar28 = roundpd(in_XMM5,auVar28,2);
        auVar26._8_8_ = auVar25._8_8_;
        dVar27 = auVar28._0_8_;
        auVar26._0_8_ = auVar25._0_8_ - dVar27;
        auVar24._0_8_ = (double)(int)auVar26._0_8_ + dVar22;
        auVar24._8_8_ = 0;
        if (this->bNavigateOnScrollIntoView == false) {
          auVar25 = roundpd(auVar24,auVar24,1);
          dVar22 = auVar25._0_8_;
        }
        else {
          auVar6._8_8_ = 0;
          auVar6._0_8_ = dVar22;
          auVar25 = roundpd(auVar26,auVar6,1);
          dVar27 = auVar25._0_8_;
          auVar25 = roundpd(auVar24,auVar24,2);
          dVar22 = auVar25._0_8_;
        }
        dVar30 = (double)(int)uVar17;
        if (((dVar27 <= dVar30) && (dVar30 <= dVar22)) &&
           ((this->ScrollIntoViewAlignment != TopOrLeft &&
            (this->ScrollIntoViewAlignment != BottomOrRight)))) {
          if (this->bNavigateOnScrollIntoView == false) goto LAB_146a0f434;
          pcVar3 = *(code **)(this->_padding_ + 0xd8);
          uVar9 = 0;
          if ((int)uVar17 < iVar19) {
            uVar9 = ~uVar17 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar8)) {
            pcVar3 = (code *)swi(3);
            EVar10 = (*pcVar3)();
            return EVar10;
          }
          (*pcVar3)(&this->_padding_,&local_188,plVar14 + (int)uVar17);
          if (local_188 == (longlong *)0x0) goto LAB_146a0f3bf;
          if ((local_188 == (longlong *)0x0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar8)) {
            pcVar3 = (code *)swi(3);
            EVar10 = (*pcVar3)();
            return EVar10;
          }
          puVar11 = (undefined8 *)(**(code **)(*local_188 + 0x58))(local_188,local_c0);
          pFVar12 = SWidget::GetCachedGeometry((SWidget *)*puVar11);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_b8);
          local_res18._0_4_ = SUB84(pFVar12->Size,0);
          local_res18._4_4_ = SUB84(pFVar12->Size,4);
          local_178._4_4_ =
               (float)UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.X * (float)local_res18
               * (pFVar12->AccumulatedRenderTransform).M.M[0][1] +
               (float)UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.Y * local_res18._4_4_ *
               (pFVar12->AccumulatedRenderTransform).M.M[1][1] +
               (pFVar12->AccumulatedRenderTransform).Trans.field0_0x0._s_0.Y;
          local_178._0_4_ =
               (float)UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.Y * local_res18._4_4_ *
               (pFVar12->AccumulatedRenderTransform).M.M[1][0] +
               (float)UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.X * (float)local_res18
               * (pFVar12->AccumulatedRenderTransform).M.M[0][0] +
               (pFVar12->AccumulatedRenderTransform).Trans.field0_0x0._s_0.X;
          FTableViewDimensions::FTableViewDimensions
                    (&local_120,*(EOrientation *)((longlong)&this->_padding_ + 4),&local_178);
          local_res18._0_4_ = SUB84(param_1->Size,0);
          local_res18._4_4_ = SUB84(param_1->Size,4);
          local_170._4_4_ =
               (float)UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.X * (float)local_res18
               * (param_1->AccumulatedRenderTransform).M.M[0][1] +
               (float)UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.Y * local_res18._4_4_ *
               (param_1->AccumulatedRenderTransform).M.M[1][1] +
               (param_1->AccumulatedRenderTransform).Trans.field0_0x0._s_0.Y;
          local_170._0_4_ =
               (float)UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.Y * local_res18._4_4_ *
               (param_1->AccumulatedRenderTransform).M.M[1][0] +
               (float)UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.X * (float)local_res18
               * (param_1->AccumulatedRenderTransform).M.M[0][0] +
               (param_1->AccumulatedRenderTransform).Trans.field0_0x0._s_0.X;
          FTableViewDimensions::FTableViewDimensions
                    (&local_110,*(EOrientation *)((longlong)&this->_padding_ + 4),&local_170);
          dVar23 = (double)this->_padding_;
          if (local_120.ScrollAxis < local_110.ScrollAxis) {
            dVar23 = dVar30 - (double)this->NavigationScrollOffset;
            goto LAB_146a0f3b0;
          }
          local_res18._0_4_ = SUB84(pFVar12->Size,0);
          local_res18._4_4_ = SUB84(pFVar12->Size,4);
          fVar21 = local_res18._4_4_ * (pFVar12->AccumulatedRenderTransform).M.M[1][0];
          local_res18._4_4_ =
               (float)local_res18 * (pFVar12->AccumulatedRenderTransform).M.M[0][1] +
               local_res18._4_4_ * (pFVar12->AccumulatedRenderTransform).M.M[1][1] +
               (pFVar12->AccumulatedRenderTransform).Trans.field0_0x0._s_0.Y;
          local_res18._0_4_ =
               (float)local_res18 * (pFVar12->AccumulatedRenderTransform).M.M[0][0] + fVar21 +
               (pFVar12->AccumulatedRenderTransform).Trans.field0_0x0._s_0.X;
          local_168 = local_res18;
          FTableViewDimensions::FTableViewDimensions
                    (&local_100,*(EOrientation *)((longlong)&this->_padding_ + 4),&local_168);
          local_res18._0_4_ = SUB84(param_1->Size,0);
          local_res18._4_4_ = SUB84(param_1->Size,4);
          fVar21 = local_res18._4_4_ * (param_1->AccumulatedRenderTransform).M.M[1][0];
          local_res18._4_4_ =
               (float)local_res18 * (param_1->AccumulatedRenderTransform).M.M[0][1] +
               local_res18._4_4_ * (param_1->AccumulatedRenderTransform).M.M[1][1] +
               (param_1->AccumulatedRenderTransform).Trans.field0_0x0._s_0.Y;
          local_res18._0_4_ =
               fVar21 + (float)local_res18 * (param_1->AccumulatedRenderTransform).M.M[0][0] +
               (param_1->AccumulatedRenderTransform).Trans.field0_0x0._s_0.X;
          local_160 = local_res18;
          FTableViewDimensions::FTableViewDimensions
                    (&local_f0,*(EOrientation *)((longlong)&this->_padding_ + 4),&local_160);
          fVar21 = __real_3f800000;
          if (local_100.ScrollAxis <= local_f0.ScrollAxis) goto LAB_146a0f3b0;
          pFVar20 = (this->WidgetGenerator).ItemsWithGeneratedWidgets.AllocatorInstance.Data;
          fVar31 = 0.0;
          iVar19 = (this->WidgetGenerator).ItemsWithGeneratedWidgets.ArrayNum;
          fVar32 = 0.0;
          local_150 = pFVar20 + (longlong)iVar19 * 8;
          pIVar18 = (ITableRow *)0x0;
          fVar29 = local_100.ScrollAxis;
          goto LAB_146a0f207;
        }
        EVar1 = this->ScrollIntoViewAlignment;
        if (EVar1 == IntoView) {
          if (dVar22 < dVar30) {
LAB_146a0f3fe:
            dVar30 = dVar30 - (dVar23 - __real_3ff0000000000000);
          }
        }
        else if (EVar1 != TopOrLeft) {
          if (EVar1 == CenterAligned) {
            dVar30 = dVar30 + dVar23 * __real_bfe0000000000000;
          }
          else if (EVar1 == BottomOrRight) goto LAB_146a0f3fe;
        }
        dVar23 = (double)iVar19 - dVar23;
        if (dVar23 <= 0.0) {
          dVar23 = 0.0;
        }
        if (dVar30 <= dVar23) {
          dVar23 = dVar30;
        }
        if (dVar23 <= 0.0) {
          dVar23 = 0.0;
        }
        STableViewBase::SetScrollOffset((STableViewBase *)this,(float)dVar23);
        goto LAB_146a0f434;
      }
      break;
    }
  }
  goto LAB_146a0f452;
LAB_146a0f207:
  pFVar7 = local_150;
  fVar29 = fVar29 - local_f0.ScrollAxis;
  if ((this->WidgetGenerator).ItemsWithGeneratedWidgets.ArrayNum != iVar19) {
    local_res8 = local_res8 & 0xffffffffffffff00;
    `TCheckedPointerIterator<TObjectPtr<UObject>,int,0>::operator!='::__l2::<lambda_1>::operator()
              (&local_res8);
  }
  if (pFVar20 == pFVar7) goto LAB_146a0f37d;
  pTVar13 = TMapBase<UObject_*,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<ITableRow,1>,0>_>
            ::Find((TMapBase<UObject_*,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<ITableRow,1>,0>_>
                    *)&(this->WidgetGenerator).ItemToWidgetMap,*(UObject **)pFVar20);
  if (pTVar13 == (TSharedRef<ITableRow,1> *)0x0) {
    uVar17 = (uint)pIVar18 | 2;
    local_138 = (TReferenceControllerBase<1> *)0x0;
    puVar11 = &local_140;
    pIVar16 = (ITableRow *)0x0;
  }
  else {
    pIVar16 = pTVar13->Object;
    uVar17 = (uint)pIVar18 | 1;
    local_128 = (pTVar13->SharedReferenceCount).ReferenceController;
    if (local_128 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_128->SharedReferenceCount = (atomic<int>)((int)local_128->SharedReferenceCount + 1);
      UNLOCK();
    }
    puVar11 = &local_130;
  }
  pTVar4 = (TReferenceControllerBase<1> *)puVar11[1];
  puVar11[1] = 0;
  *puVar11 = 0;
  if ((uVar17 & 2) != 0) {
    uVar17 = uVar17 & 0xfffffffd;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_138);
  }
  if ((uVar17 & 1) != 0) {
    uVar17 = uVar17 & 0xfffffffe;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_128);
  }
  pIVar18 = (ITableRow *)(ulonglong)uVar17;
  if ((pIVar16 == (ITableRow *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar3 = (code *)swi(3);
    EVar10 = (*pcVar3)();
    return EVar10;
  }
  puVar11 = (undefined8 *)(**(code **)((longlong)*pIVar16 + 0x58))(pIVar16,local_b0);
  pFVar12 = SWidget::GetCachedGeometry((SWidget *)*puVar11);
  local_res18._4_4_ = SUB84(pFVar12->Size,4);
  local_res18._0_4_ = SUB84(pFVar12->Size,0);
  local_158._4_4_ =
       (float)local_res18 * (pFVar12->AccumulatedRenderTransform).M.M[0][1] +
       local_res18._4_4_ * (pFVar12->AccumulatedRenderTransform).M.M[1][1];
  local_158._0_4_ =
       local_res18._4_4_ * (pFVar12->AccumulatedRenderTransform).M.M[1][0] +
       (float)local_res18 * (pFVar12->AccumulatedRenderTransform).M.M[0][0];
  FTableViewDimensions::FTableViewDimensions
            (&local_e0,*(EOrientation *)((longlong)&this->_padding_ + 4),&local_158);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_a8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  if (fVar29 <= local_e0.ScrollAxis) goto LAB_146a0f375;
  fVar31 = fVar31 + fVar21;
  pFVar20 = pFVar20 + 8;
  local_f0.ScrollAxis = local_e0.ScrollAxis;
  goto LAB_146a0f207;
LAB_146a0f375:
  fVar31 = fVar31 + fVar29 / local_e0.ScrollAxis;
LAB_146a0f37d:
  if ((char)this->_padding_ == '\0') {
    fVar32 = this->NavigationScrollOffset;
  }
  dVar23 = (double)fVar31 + (double)this->_padding_ + (double)fVar32;
LAB_146a0f3b0:
  STableViewBase::SetScrollOffset((STableViewBase *)this,(float)dVar23);
LAB_146a0f3bf:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_180);
LAB_146a0f434:
  STableViewBase::RequestLayoutRefresh((STableViewBase *)this);
  this->ItemToNotifyWhenInView = this->ItemToScrollIntoView;
LAB_146a0f452:
  this->ItemToScrollIntoView = (UObject *)0x0;
LAB_146a0f459:
  local_148 = this->ItemToNotifyWhenInView;
  if (local_148 == (UObject *)0x0) {
    EVar10 = Failure;
  }
  else if ((char)this->_padding_ == '\0') {
    EVar10 = Success;
  }
  else {
    plVar14 = (longlong *)
              (**(code **)(this->_padding_ + 0xd8))(&this->_padding_,local_a0,&local_148);
    lVar5 = *plVar14;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_98);
    EVar10 = (EScrollIntoViewResult)(lVar5 == 0);
  }
  return EVar10;
}

// ScrollIntoView @ 146a0f4e0

/* WARNING: Type propagation algorithm not settling */

EScrollIntoViewResult __thiscall
SListView<FName>::ScrollIntoView(SListView<FName> *this,FGeometry *param_1)

{
  EScrollIntoViewAlignment EVar1;
  IItemsSource<FName> *pIVar2;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  bool bVar7;
  uint uVar8;
  EScrollIntoViewResult EVar9;
  undefined8 *puVar10;
  FGeometry *pFVar11;
  TSharedRef<ITableRow,1> *pTVar12;
  longlong *plVar13;
  FName *pFVar14;
  ITableRow *pIVar15;
  uint uVar16;
  int iVar18;
  FName *pFVar19;
  float fVar20;
  double dVar21;
  double dVar22;
  undefined1 auVar23 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  double dVar26;
  undefined1 in_XMM5 [16];
  undefined1 auVar27 [16];
  float fVar28;
  double dVar29;
  float fVar30;
  float fVar31;
  ulonglong local_res8;
  undefined8 local_res18;
  longlong *local_180;
  TReferenceControllerBase<1> *local_178;
  FDeprecateVector2DParameter local_170;
  FDeprecateVector2DParameter local_168;
  FDeprecateVector2DParameter local_160;
  FDeprecateVector2DParameter local_158;
  FDeprecateVector2DParameter local_150;
  FName *local_148;
  FName local_140;
  undefined8 local_138;
  TReferenceControllerBase<1> *local_130;
  undefined8 local_128;
  TReferenceControllerBase<1> *local_120;
  FTableViewDimensions local_118;
  FTableViewDimensions local_108;
  FTableViewDimensions local_f8;
  FTableViewDimensions local_e8;
  FTableViewDimensions local_d8;
  FName *local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8 [8];
  TReferenceControllerBase<1> *local_b0;
  undefined1 local_a8 [8];
  TReferenceControllerBase<1> *local_a0;
  undefined1 local_98 [8];
  TReferenceControllerBase<1> *local_90;
  ITableRow *pIVar17;
  
  local_res8 = local_res8 & 0xffffffff00000000;
  pIVar2 = (this->ViewSource).Ptr;
  if ((pIVar2 == (IItemsSource<FName> *)0x0) || (this->ItemToScrollIntoView == (FName)0x0))
  goto LAB_146a0fc4b;
  puVar10 = (undefined8 *)(**(code **)((longlong)*pIVar2 + 8))();
  pFVar19 = (FName *)*puVar10;
  uStack_c0 = puVar10[1];
  iVar18 = (int)uStack_c0;
  local_res8 = (ulonglong)iVar18;
  for (pFVar14 = pFVar19; local_c8 = pFVar19, pFVar14 != pFVar19 + local_res8; pFVar14 = pFVar14 + 1
      ) {
    if (*pFVar14 == this->ItemToScrollIntoView) {
      uVar16 = (uint)((longlong)pFVar14 - (longlong)pFVar19 >> 3);
      if (uVar16 != 0xffffffff) {
        fVar20 = (float)(**(code **)(*(longlong *)this + 0x268))(this);
        dVar22 = (double)fVar20;
        if (((dVar22 == 0.0) &&
            (bVar7 = STableViewBase::IsPendingRefresh((STableViewBase *)this), bVar7)) &&
           (dVar22 = *(double *)&this->field_0x368, dVar22 == 0.0)) {
          return Deferred;
        }
        STableViewBase::EndInertialScrolling((STableViewBase *)this,false);
        dVar21 = *(double *)&this->field_0x330;
        auVar24._0_8_ = dVar21 + dVar22;
        auVar24._8_8_ = 0;
        auVar24 = roundpd(in_XMM2,auVar24,1);
        auVar27._8_8_ = 0;
        auVar27._0_8_ = dVar21;
        auVar27 = roundpd(in_XMM5,auVar27,2);
        auVar25._8_8_ = auVar24._8_8_;
        dVar26 = auVar27._0_8_;
        auVar25._0_8_ = auVar24._0_8_ - dVar26;
        auVar23._0_8_ = (double)(int)auVar25._0_8_ + dVar21;
        auVar23._8_8_ = 0;
        if (this->bNavigateOnScrollIntoView == false) {
          auVar24 = roundpd(auVar23,auVar23,1);
          dVar21 = auVar24._0_8_;
        }
        else {
          auVar6._8_8_ = 0;
          auVar6._0_8_ = dVar21;
          auVar24 = roundpd(auVar25,auVar6,1);
          dVar26 = auVar24._0_8_;
          auVar24 = roundpd(auVar23,auVar23,2);
          dVar21 = auVar24._0_8_;
        }
        dVar29 = (double)(int)uVar16;
        if (((dVar26 <= dVar29) && (dVar29 <= dVar21)) &&
           ((this->ScrollIntoViewAlignment != TopOrLeft &&
            (this->ScrollIntoViewAlignment != BottomOrRight)))) {
          if (this->bNavigateOnScrollIntoView == false) goto LAB_146a0fc1e;
          pcVar3 = *(code **)(*(longlong *)&this->field_0x588 + 0xd8);
          uVar8 = 0;
          if ((int)uVar16 < iVar18) {
            uVar8 = ~uVar16 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar7)) {
            pcVar3 = (code *)swi(3);
            EVar9 = (*pcVar3)();
            return EVar9;
          }
          (*pcVar3)(&this->field_0x588,&local_180,pFVar19 + (int)uVar16);
          if (local_180 == (longlong *)0x0) goto LAB_146a0fba9;
          if ((local_180 == (longlong *)0x0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar7)) {
            pcVar3 = (code *)swi(3);
            EVar9 = (*pcVar3)();
            return EVar9;
          }
          puVar10 = (undefined8 *)(**(code **)(*local_180 + 0x58))(local_180,local_b8);
          pFVar11 = SWidget::GetCachedGeometry((SWidget *)*puVar10);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_b0);
          local_res18._0_4_ = SUB84(pFVar11->Size,0);
          local_res18._4_4_ = SUB84(pFVar11->Size,4);
          local_170._4_4_ =
               (float)UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.X * (float)local_res18
               * (pFVar11->AccumulatedRenderTransform).M.M[0][1] +
               (float)UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.Y * local_res18._4_4_ *
               (pFVar11->AccumulatedRenderTransform).M.M[1][1] +
               (pFVar11->AccumulatedRenderTransform).Trans.field0_0x0._s_0.Y;
          local_170._0_4_ =
               (float)UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.Y * local_res18._4_4_ *
               (pFVar11->AccumulatedRenderTransform).M.M[1][0] +
               (float)UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.X * (float)local_res18
               * (pFVar11->AccumulatedRenderTransform).M.M[0][0] +
               (pFVar11->AccumulatedRenderTransform).Trans.field0_0x0._s_0.X;
          FTableViewDimensions::FTableViewDimensions
                    (&local_118,*(EOrientation *)&this->field_0x44c,&local_170);
          local_res18._4_4_ = SUB84(param_1->Size,4);
          local_res18._0_4_ = SUB84(param_1->Size,0);
          local_168._4_4_ =
               (float)UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.Y * local_res18._4_4_ *
               (param_1->AccumulatedRenderTransform).M.M[1][1] +
               (float)UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.X * (float)local_res18
               * (param_1->AccumulatedRenderTransform).M.M[0][1] +
               (param_1->AccumulatedRenderTransform).Trans.field0_0x0._s_0.Y;
          local_168._0_4_ =
               (float)UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.X * (float)local_res18
               * (param_1->AccumulatedRenderTransform).M.M[0][0] +
               (float)UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.Y * local_res18._4_4_ *
               (param_1->AccumulatedRenderTransform).M.M[1][0] +
               (param_1->AccumulatedRenderTransform).Trans.field0_0x0._s_0.X;
          FTableViewDimensions::FTableViewDimensions
                    (&local_108,*(EOrientation *)&this->field_0x44c,&local_168);
          dVar22 = *(double *)&this->field_0x338;
          if (local_118.ScrollAxis < local_108.ScrollAxis) {
            dVar22 = dVar29 - (double)this->NavigationScrollOffset;
            goto LAB_146a0fb9a;
          }
          local_res18._0_4_ = SUB84(pFVar11->Size,0);
          local_res18._4_4_ = SUB84(pFVar11->Size,4);
          fVar20 = local_res18._4_4_ * (pFVar11->AccumulatedRenderTransform).M.M[1][0];
          local_res18._4_4_ =
               local_res18._4_4_ * (pFVar11->AccumulatedRenderTransform).M.M[1][1] +
               (float)local_res18 * (pFVar11->AccumulatedRenderTransform).M.M[0][1] +
               (pFVar11->AccumulatedRenderTransform).Trans.field0_0x0._s_0.Y;
          local_res18._0_4_ =
               fVar20 + (float)local_res18 * (pFVar11->AccumulatedRenderTransform).M.M[0][0] +
               (pFVar11->AccumulatedRenderTransform).Trans.field0_0x0._s_0.X;
          local_160 = local_res18;
          FTableViewDimensions::FTableViewDimensions
                    (&local_f8,*(EOrientation *)&this->field_0x44c,&local_160);
          local_res18._0_4_ = SUB84(param_1->Size,0);
          local_res18._4_4_ = SUB84(param_1->Size,4);
          fVar20 = local_res18._4_4_ * (param_1->AccumulatedRenderTransform).M.M[1][0];
          local_res18._4_4_ =
               local_res18._4_4_ * (param_1->AccumulatedRenderTransform).M.M[1][1] +
               (float)local_res18 * (param_1->AccumulatedRenderTransform).M.M[0][1] +
               (param_1->AccumulatedRenderTransform).Trans.field0_0x0._s_0.Y;
          local_res18._0_4_ =
               (float)local_res18 * (param_1->AccumulatedRenderTransform).M.M[0][0] + fVar20 +
               (param_1->AccumulatedRenderTransform).Trans.field0_0x0._s_0.X;
          local_158 = local_res18;
          FTableViewDimensions::FTableViewDimensions
                    (&local_e8,*(EOrientation *)&this->field_0x44c,&local_158);
          fVar20 = __real_3f800000;
          if (local_f8.ScrollAxis <= local_e8.ScrollAxis) goto LAB_146a0fb9a;
          pFVar19 = (FName *)(this->WidgetGenerator).ItemsWithGeneratedWidgets.AllocatorInstance.
                             Data;
          fVar30 = 0.0;
          iVar18 = (this->WidgetGenerator).ItemsWithGeneratedWidgets.ArrayNum;
          fVar31 = 0.0;
          local_148 = pFVar19 + iVar18;
          pIVar17 = (ITableRow *)0x0;
          fVar28 = local_f8.ScrollAxis;
          goto LAB_146a0f9f2;
        }
        EVar1 = this->ScrollIntoViewAlignment;
        if (EVar1 == IntoView) {
          if (dVar21 < dVar29) {
LAB_146a0fbe8:
            dVar29 = dVar29 - (dVar22 - __real_3ff0000000000000);
          }
        }
        else if (EVar1 != TopOrLeft) {
          if (EVar1 == CenterAligned) {
            dVar29 = dVar29 + dVar22 * __real_bfe0000000000000;
          }
          else if (EVar1 == BottomOrRight) goto LAB_146a0fbe8;
        }
        dVar22 = (double)iVar18 - dVar22;
        if (dVar22 <= 0.0) {
          dVar22 = 0.0;
        }
        if (dVar29 <= dVar22) {
          dVar22 = dVar29;
        }
        if (dVar22 <= 0.0) {
          dVar22 = 0.0;
        }
        STableViewBase::SetScrollOffset((STableViewBase *)this,(float)dVar22);
        goto LAB_146a0fc1e;
      }
      break;
    }
  }
  goto LAB_146a0fc3c;
LAB_146a0f9f2:
  pFVar14 = local_148;
  fVar28 = fVar28 - local_e8.ScrollAxis;
  if ((this->WidgetGenerator).ItemsWithGeneratedWidgets.ArrayNum != iVar18) {
    local_res8 = local_res8 & 0xffffffffffffff00;
    `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_res8);
  }
  if (pFVar19 == pFVar14) goto LAB_146a0fb67;
  pTVar12 = TMapBase<FName,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<ITableRow,1>,0>_>
            ::Find((TMapBase<FName,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<ITableRow,1>,0>_>
                    *)&(this->WidgetGenerator).ItemToWidgetMap,*pFVar19);
  if (pTVar12 == (TSharedRef<ITableRow,1> *)0x0) {
    uVar16 = (uint)pIVar17 | 2;
    local_130 = (TReferenceControllerBase<1> *)0x0;
    puVar10 = &local_138;
    pIVar15 = (ITableRow *)0x0;
  }
  else {
    pIVar15 = pTVar12->Object;
    uVar16 = (uint)pIVar17 | 1;
    local_120 = (pTVar12->SharedReferenceCount).ReferenceController;
    if (local_120 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_120->SharedReferenceCount = (atomic<int>)((int)local_120->SharedReferenceCount + 1);
      UNLOCK();
    }
    puVar10 = &local_128;
  }
  pTVar4 = (TReferenceControllerBase<1> *)puVar10[1];
  puVar10[1] = 0;
  *puVar10 = 0;
  if ((uVar16 & 2) != 0) {
    uVar16 = uVar16 & 0xfffffffd;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_130);
  }
  if ((uVar16 & 1) != 0) {
    uVar16 = uVar16 & 0xfffffffe;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_120);
  }
  pIVar17 = (ITableRow *)(ulonglong)uVar16;
  if ((pIVar15 == (ITableRow *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    EVar9 = (*pcVar3)();
    return EVar9;
  }
  puVar10 = (undefined8 *)(**(code **)((longlong)*pIVar15 + 0x58))(pIVar15,local_a8);
  pFVar11 = SWidget::GetCachedGeometry((SWidget *)*puVar10);
  local_res18._4_4_ = SUB84(pFVar11->Size,4);
  local_res18._0_4_ = SUB84(pFVar11->Size,0);
  local_150._4_4_ =
       (float)local_res18 * (pFVar11->AccumulatedRenderTransform).M.M[0][1] +
       local_res18._4_4_ * (pFVar11->AccumulatedRenderTransform).M.M[1][1];
  local_150._0_4_ =
       local_res18._4_4_ * (pFVar11->AccumulatedRenderTransform).M.M[1][0] +
       (float)local_res18 * (pFVar11->AccumulatedRenderTransform).M.M[0][0];
  FTableViewDimensions::FTableViewDimensions
            (&local_d8,*(EOrientation *)&this->field_0x44c,&local_150);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_a0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  if (fVar28 <= local_d8.ScrollAxis) goto LAB_146a0fb5f;
  fVar30 = fVar30 + fVar20;
  pFVar19 = pFVar19 + 1;
  local_e8.ScrollAxis = local_d8.ScrollAxis;
  goto LAB_146a0f9f2;
LAB_146a0fb5f:
  fVar30 = fVar30 + fVar28 / local_d8.ScrollAxis;
LAB_146a0fb67:
  if (this->field_0x318 == '\0') {
    fVar31 = this->NavigationScrollOffset;
  }
  dVar22 = (double)fVar30 + *(double *)&this->field_0x338 + (double)fVar31;
LAB_146a0fb9a:
  STableViewBase::SetScrollOffset((STableViewBase *)this,(float)dVar22);
LAB_146a0fba9:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_178);
LAB_146a0fc1e:
  STableViewBase::RequestLayoutRefresh((STableViewBase *)this);
  this->ItemToNotifyWhenInView = this->ItemToScrollIntoView;
LAB_146a0fc3c:
  (this->ItemToScrollIntoView).ComparisonIndex = 0;
  (this->ItemToScrollIntoView).Number = 0;
LAB_146a0fc4b:
  local_140 = this->ItemToNotifyWhenInView;
  if (local_140 == (FName)0x0) {
    EVar9 = Failure;
  }
  else if (this->field_0x320 == '\0') {
    EVar9 = Success;
  }
  else {
    plVar13 = (longlong *)
              (**(code **)(*(longlong *)&this->field_0x588 + 0xd8))
                        (&this->field_0x588,local_98,&local_140);
    lVar5 = *plVar13;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_90);
    EVar9 = (EScrollIntoViewResult)(lVar5 == 0);
  }
  return EVar9;
}

// SetItemsSource @ 146a16350

void __thiscall
SListView<UObject_*>::SetItemsSource
          (SListView<UObject_*> *this,
          TUniquePtr<UE::Slate::ItemsSource::IItemsSource<UObject_*>,TDefaultDelete<UE::Slate::ItemsSource::IItemsSource<UObject_*>_>_>
          param_1)

{
  TUniquePtr<UE::Slate::ItemsSource::IItemsSource<UObject_*>,TDefaultDelete<UE::Slate::ItemsSource::IItemsSource<UObject_*>_>_>
  *pTVar1;
  IItemsSource<UObject_*> *pIVar2;
  IItemsSource<UObject_*> IVar3;
  
  pTVar1 = &this->ViewSource;
  if ((this->_padding_ & 0x400) == 0) {
    if ((IItemsSource<UObject_*> *)pTVar1 != param_1.Ptr) {
      pIVar2 = pTVar1->Ptr;
      pTVar1->Ptr = (IItemsSource<UObject_*> *)*param_1.Ptr;
      *param_1.Ptr = (IItemsSource<UObject_*>)0x0;
      if (pIVar2 != (IItemsSource<UObject_*> *)0x0) {
        (**(code **)*pIVar2)(pIVar2,1);
      }
    }
  }
  else {
    (**(code **)(this->_padding_ + 0x30))();
    this->UserRequestingScrollIntoView = 0;
    this->bNavigateOnScrollIntoView = false;
    this->ItemToScrollIntoView = (UObject *)0x0;
    STableViewBase::ClearWidgets((STableViewBase *)this);
    if ((IItemsSource<UObject_*> *)pTVar1 != param_1.Ptr) {
      pIVar2 = pTVar1->Ptr;
      pTVar1->Ptr = (IItemsSource<UObject_*> *)*param_1.Ptr;
      *param_1.Ptr = (IItemsSource<UObject_*>)0x0;
      if (pIVar2 != (IItemsSource<UObject_*> *)0x0) {
        (**(code **)*pIVar2)(pIVar2,1);
      }
    }
    (**(code **)(this->_padding_ + 0x250))(this);
  }
  IVar3 = *param_1.Ptr;
  if (IVar3 != (IItemsSource<UObject_*>)0x0) {
    (*(code *)**(undefined8 **)IVar3)(IVar3,1);
  }
  return;
}

// SetSelection @ 146a1aa90

void __thiscall
SListView<UObject_*>::SetSelection(SListView<UObject_*> *this,UObject *param_1,Type param_2)

{
  UObject *local_res10 [3];
  TOptional<UObject_*> local_18;
  
  local_res10[0] = param_1;
  Private_FindNextSelectableOrNavigable(this,&local_18,local_res10);
  if (local_18.bIsSet != false) {
    Private_SetSelection(this,local_18.TypedValue,param_2);
  }
  return;
}

// SetSelection @ 146a1aae0

/* WARNING: Removing unreachable block (ram,0x000146a1ab1a) */
/* WARNING: Removing unreachable block (ram,0x000146a1ab3f) */

void __thiscall SListView<FName>::SetSelection(SListView<FName> *this,FName param_1,Type param_2)

{
  FName local_res20;
  
  Private_FindNextSelectableOrNavigable(this,&local_res20);
  if (local_res20.ComparisonIndex.Value.Value != 0xffffffff) {
    Private_SetSelection(this,local_res20,param_2);
  }
  return;
}

// SupportsKeyboardFocus @ 146a1f620

bool __thiscall SListView<UObject_*>::SupportsKeyboardFocus(SListView<UObject_*> *this)

{
  bool *pbVar1;
  
  pbVar1 = TAttribute<bool>::Get(&this->IsFocusable);
  return *pbVar1;
}

// SupportsKeyboardFocus @ 146a1f640

bool __thiscall SListView<FName>::SupportsKeyboardFocus(SListView<FName> *this)

{
  bool *pbVar1;
  
  pbVar1 = TAttribute<bool>::Get(&this->IsFocusable);
  return *pbVar1;
}

// UpdateSelectionSet @ 146a2bac0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall SListView<UObject_*>::UpdateSelectionSet(SListView<UObject_*> *this)

{
  int iVar1;
  IItemsSource<UObject_*> *pIVar2;
  TObjectPtr<UObject_const_>_u_0 TVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  undefined8 *puVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  TObjectPtr<UObject_const_>_u_0 *pTVar11;
  ulonglong uVar12;
  undefined1 auStack_148 [32];
  ulonglong local_128;
  longlong local_120;
  TObjectPtr<UObject> local_118;
  TObjectPtr<UObject_const_>_u_0 local_110;
  TObjectPtr<UObject_const_>_u_0 local_108 [2];
  TObjectPtr<UObject_const_>_u_0 *local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [16];
  TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator> local_d8;
  TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator> local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_148;
  if ((int)this->_padding_ != 2) {
    pIVar2 = (this->ViewSource).Ptr;
    if (pIVar2 == (IItemsSource<UObject_*> *)0x0) {
      (**(code **)(this->_padding_ + 0x30))(&this->_padding_);
    }
    else {
      uVar9 = 0;
      local_d8.Elements._44_4_ = 0x80;
      local_d8.Elements._0_8_ = 0;
      local_d8.Elements._8_8_ = 0;
      local_d8.Elements._32_8_ = 0;
      local_d8.Elements._40_4_ = 0;
      local_d8.Elements._52_4_ = 0;
      local_d8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_d8.HashSize = 0;
      local_d8.Elements._48_4_ = 0xffffffff;
      puVar7 = (undefined8 *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_e8);
      pTVar11 = (TObjectPtr<UObject_const_>_u_0 *)*puVar7;
      uStack_f0 = puVar7[1];
      iVar1 = *(int *)(puVar7 + 1);
      uVar12 = uVar9;
      local_f8 = pTVar11;
      if (0 < iVar1) {
        do {
          uVar10 = (uint)uVar9;
          uVar8 = 0;
          if ((int)uVar10 < iVar1) {
            uVar8 = ~uVar10 >> 0x1f;
          }
          if (uVar8 == 0) {
            local_120 = (longlong)iVar1;
            local_128 = uVar12;
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
            ;
            if (bVar5) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          TVar3 = (TObjectPtr<UObject_const_>_u_0)pTVar11->DebugPtr;
          local_110 = TVar3;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            if (TVar3.DebugPtr != (UObject *)0x0) {
              UE::GC::MarkAsReachable(TVar3.DebugPtr);
            }
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (TVar3.DebugPtr != (UObject *)0x0)) {
              UE::GC::MarkAsReachable(TVar3.DebugPtr);
            }
          }
          uVar8 = ((uint)((ulonglong)TVar3.DebugPtr >> 0x14) & 0xffff ^
                  (uint)((ulonglong)TVar3.DebugPtr >> 4)) * -0x7a143595;
          uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
          iVar6 = TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>
                  ::FindIndexByHash<TObjectPtr<UObject_const_>_>
                            (&this->SelectedItems,uVar8 >> 0x10 ^ uVar8,
                             (TObjectPtr<UObject_const_> *)&local_110.ObjectPtr);
          if ((iVar6 != -1) &&
             ((longlong)iVar6 * 0x10 + *(longlong *)&(this->SelectedItems).Elements != 0)) {
            local_108[0] = TVar3;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (TVar3.DebugPtr != (UObject *)0x0)) {
              UE::GC::MarkAsReachable(TVar3.DebugPtr);
            }
            TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::
            Emplace<TObjectPtr<UObject>_>(&local_d8,&local_118,(bool *)local_108);
          }
          uVar9 = (ulonglong)(uVar10 + 1);
          pTVar11 = pTVar11 + 1;
          uVar12 = uVar12 + 1;
        } while ((int)(uVar10 + 1) < iVar1);
      }
      TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::
      Difference(&this->SelectedItems,&local_88,&local_d8);
      TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::
      operator=(&this->SelectedItems,&local_d8);
      local_88.HashSize = 0;
      if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_88.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TObjectPtr<UObject>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TObjectPtr<UObject>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_88.Elements);
      local_d8.HashSize = 0;
      if (local_d8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_d8.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TObjectPtr<UObject>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TObjectPtr<UObject>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_d8.Elements);
      if ((int)(local_88.Elements._8_4_ - local_88.Elements._52_4_) < 1) {
        return;
      }
    }
    (**(code **)(this->_padding_ + 0x40))(&this->_padding_,3);
  }
  return;
}

// UpdateSelectionSet @ 146a2bd80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __thiscall SListView<FName>::UpdateSelectionSet(SListView<FName> *this)

{
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *this_00;
  uint *puVar1;
  int iVar2;
  IItemsSource<FName> *pIVar3;
  ForElementType<FSetElementId> FVar4;
  undefined8 uVar5;
  void *pvVar6;
  code *pcVar7;
  undefined4 uVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  byte bVar15;
  longlong *plVar16;
  ForAnyElementType FVar17;
  ForElementType<FSetElementId> FVar18;
  ForElementType<unsigned_int> FVar19;
  ulonglong uVar20;
  uint uVar21;
  longlong *plVar22;
  FScriptContainerElement *pFVar23;
  longlong lVar24;
  void *pvVar25;
  uint uVar26;
  ulonglong uVar27;
  undefined1 auStackY_1a8 [32];
  uint local_174;
  int local_170;
  uint uStack_16c;
  int iStack_15c;
  int iStack_158;
  undefined4 uStack_154;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_128;
  FSparseArrayAllocationInfo local_108;
  longlong *local_f8;
  undefined8 uStack_f0;
  undefined1 local_d8 [32];
  ForElementType<unsigned_int> local_b8;
  int local_b0;
  uint local_ac;
  int local_a8;
  int local_a4;
  FScriptContainerElement local_a0 [8];
  ForAnyElementType local_98;
  uint local_90;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  if (*(int *)&this->field_0x2b0 == 2) {
    return;
  }
  pIVar3 = (this->ViewSource).Ptr;
  if (pIVar3 == (IItemsSource<FName> *)0x0) {
    (**(code **)(*(longlong *)&this->field_0x588 + 0x30))();
    goto LAB_146a2c5aa;
  }
  local_d8._0_8_ = (FScriptContainerElement *)0x0;
  local_d8._8_8_ = 0;
  local_b8 = (ForElementType<unsigned_int>)0x0;
  local_b0 = 0;
  local_ac = 0x80;
  local_a8 = -1;
  local_a4 = 0;
  local_98.Data = (FScriptContainerElement *)0x0;
  local_90 = 0;
  puVar13 = (undefined8 *)(**(code **)((longlong)*pIVar3 + 8))();
  local_174 = 0;
  iVar2 = *(int *)(puVar13 + 1);
  plVar22 = (longlong *)*puVar13;
  uStack_f0 = puVar13[1];
  local_f8 = plVar22;
  if (0 < iVar2) {
LAB_146a2be80:
    uVar10 = 0;
    if ((int)local_174 < iVar2) {
      uVar10 = ~local_174 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    lVar24 = *plVar22;
    uVar10 = ::GetTypeHash((FNameEntryId)(uint)lVar24);
    if (*(int *)&(this->SelectedItems).Elements.field_0x8 !=
        *(int *)&(this->SelectedItems).Elements.field_0x34) {
      FVar4 = (this->SelectedItems).Hash.SecondaryData;
      FVar18 = (ForElementType<FSetElementId>)&(this->SelectedItems).Hash;
      if (FVar4 != (ForElementType<FSetElementId>)0x0) {
        FVar18 = FVar4;
      }
      iVar11 = *(int *)((longlong)FVar18 +
                       (ulonglong)
                       ((this->SelectedItems).HashSize - 1U &
                       (int)((ulonglong)lVar24 >> 0x20) + uVar10) * 4);
      if (iVar11 != -1) {
        do {
          plVar16 = (longlong *)
                    ((longlong)iVar11 * 0x10 + *(longlong *)&(this->SelectedItems).Elements);
          if (*plVar16 == lVar24) {
            if (plVar16 != (longlong *)0x0) {
              if (local_a4 == 0) {
                iVar11 = UE::Core::Private::
                         ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x10,4,1,(ForAnyElementType *)local_d8,(int *)(local_d8 + 8),
                                    (int *)(local_d8 + 0xc));
                iVar12 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                                   ((TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x10),1);
                FVar19 = (ForElementType<unsigned_int>)((longlong)local_d8 + 0x10);
                if (local_b8 != (ForElementType<unsigned_int>)0x0) {
                  FVar19 = local_b8;
                }
                bVar15 = (byte)iVar12 & 0x1f;
                if (iVar12 < 0) {
                  iVar12 = iVar12 + 0x1f;
                  bVar15 = bVar15 - 0x20;
                }
                puVar1 = (uint *)((longlong)FVar19 + (longlong)(iVar12 >> 5) * 4);
                *puVar1 = *puVar1 & ~(1 << (bVar15 & 0x1f));
                iVar12 = local_a8;
              }
              else {
                local_a4 = local_a4 + -1;
                iVar12 = *(int *)(local_d8._0_8_ + (longlong)local_a8 * 0x10 + 4);
                iVar11 = local_a8;
                if (local_a4 != 0) {
                  *(undefined4 *)(local_d8._0_8_ + (longlong)iVar12 * 0x10) = 0xffffffff;
                }
              }
              local_a8 = iVar12;
              TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::AllocateIndex((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                               *)local_d8,&local_108,iVar11);
              pvVar25 = local_108.Pointer;
              iVar11 = local_108.Index;
              if (local_108.Pointer != (longlong *)0x0) {
                *(longlong *)local_108.Pointer = lVar24;
                *(undefined4 *)((longlong)local_108.Pointer + 8) = 0xffffffff;
              }
              lVar24 = *(longlong *)local_108.Pointer;
              uVar10 = ::GetTypeHash((FNameEntryId)(uint)lVar24);
              uVar10 = uVar10 + (int)((ulonglong)lVar24 >> 0x20);
              if ((local_d8._8_4_ - local_a4 == 1) || (local_d8._8_4_ == local_a4))
              goto LAB_146a2c0e2;
              FVar17.Data = local_a0;
              if (local_98.Data != (FScriptContainerElement *)0x0) {
                FVar17.Data = local_98.Data;
              }
              iVar12 = *(int *)(FVar17.Data + (ulonglong)(local_90 - 1 & uVar10) * 4);
              if (iVar12 == -1) goto LAB_146a2c0e2;
              goto LAB_146a2c080;
            }
            break;
          }
          iVar11 = (int)plVar16[1];
        } while (iVar11 != -1);
      }
    }
    goto LAB_146a2c337;
  }
LAB_146a2c36c:
  this_00 = &this->SelectedItems;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Difference
            (this_00,&local_88,(TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_d8
            );
  uVar10 = local_90;
  if (this_00 != (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_d8) {
    lVar24 = (longlong)(int)local_90;
    uVar21 = local_90;
    if (local_90 < 2) {
      if ((this->SelectedItems).Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        uVar21 = 0;
        goto LAB_146a2c3b6;
      }
    }
    else {
LAB_146a2c3b6:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&(this->SelectedItems).Hash.SecondaryData,0,uVar21,4);
    }
    FVar17.Data = local_a0;
    if (local_98.Data != (FScriptContainerElement *)0x0) {
      FVar17.Data = local_98.Data;
    }
    FVar4 = (this->SelectedItems).Hash.SecondaryData;
    FVar18 = (ForElementType<FSetElementId>)&(this->SelectedItems).Hash;
    if (FVar4 != (ForElementType<FSetElementId>)0x0) {
      FVar18 = FVar4;
    }
    if (uVar10 != 0) {
      memcpy((void *)FVar18,FVar17.Data,lVar24 << 2);
    }
    uVar8 = local_d8._8_4_;
    lVar24 = (longlong)(int)local_d8._8_4_;
    (this->SelectedItems).HashSize = uVar10;
    TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty(&this_00->Elements,local_d8._8_4_);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,uVar8,(ForAnyElementType *)this_00,
               (int *)&(this->SelectedItems).Elements.field_0x8,
               (int *)&(this->SelectedItems).Elements.field_0xc);
    pvVar25 = &(this->SelectedItems).Elements.field_0x10;
    *(int *)&(this->SelectedItems).Elements.field_0x30 = local_a8;
    *(int *)&(this->SelectedItems).Elements.field_0x34 = local_a4;
    if (pvVar25 != local_d8 + 0x10) {
      iVar2 = *(int *)&(this->SelectedItems).Elements.field_0x2c;
      *(undefined4 *)&(this->SelectedItems).Elements.field_0x28 = 0;
      uVar10 = local_b0 + 0x1fU & 0xffffffe0;
      if ((iVar2 < (int)uVar10) || (0x80 < iVar2)) {
        uVar21 = 0x80;
        if (0x80 < (int)uVar10) {
          uVar21 = uVar10;
        }
        *(uint *)&(this->SelectedItems).Elements.field_0x2c = uVar21;
        TBitArray<FDefaultBitArrayAllocator>::Realloc(pvVar25,0);
      }
      *(int *)&(this->SelectedItems).Elements.field_0x28 = local_b0;
      if (local_b0 != 0) {
        FVar19 = (ForElementType<unsigned_int>)((longlong)local_d8 + 0x10);
        if (local_b8 != (ForElementType<unsigned_int>)0x0) {
          FVar19 = local_b8;
        }
        pvVar6 = *(void **)&(this->SelectedItems).Elements.field_0x20;
        if (pvVar6 != (void *)0x0) {
          pvVar25 = pvVar6;
        }
        memcpy(pvVar25,(void *)FVar19,(ulonglong)(local_b0 + 0x1fU >> 5) << 2);
      }
    }
    if (uVar8 != 0) {
      memcpy(*(void **)&this_00->Elements,(void *)local_d8._0_8_,lVar24 << 4);
    }
  }
  local_88.HashSize = 0;
  if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_88.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_88.Elements);
  local_90 = 0;
  if (local_98.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data);
  }
  bVar9 = local_d8._12_4_ != 0;
  local_d8._8_8_ = (ulonglong)(uint)local_d8._12_4_ << 0x20;
  if (bVar9) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)local_d8,0,(int *)(local_d8 + 0xc));
  }
  local_a8 = -1;
  local_a4 = 0;
  local_b0 = 0;
  if (0x80 < local_ac) {
    local_ac = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x10),0);
  }
  if (local_b8 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_b8);
  }
  if ((FScriptContainerElement *)local_d8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_d8._0_8_);
  }
  if ((int)(local_88.Elements._8_4_ - local_88.Elements._52_4_) < 1) {
    return;
  }
LAB_146a2c5aa:
  (**(code **)(*(longlong *)&this->field_0x588 + 0x40))(&this->field_0x588,3);
  return;
  while (iVar12 = *(int *)(local_d8._0_8_ + (longlong)iVar12 * 0x10 + 8), iVar12 != -1) {
LAB_146a2c080:
    if (*(longlong *)(local_d8._0_8_ + (longlong)iVar12 * 0x10) == *(longlong *)pvVar25) {
      if (iVar12 != -1) {
        *(longlong *)(local_d8._0_8_ + (longlong)iVar12 * 0x10) = *(longlong *)pvVar25;
        TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::RemoveAtUninitialized
                  ((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)local_d8,iVar11,1);
        goto LAB_146a2c337;
      }
      break;
    }
  }
LAB_146a2c0e2:
  uVar26 = local_d8._8_4_ - local_a4;
  uVar21 = 1;
  if (3 < uVar26) {
    uVar20 = (ulonglong)((uVar26 >> 1) + 7) * 2 + 1;
    lVar24 = 0x3f;
    if (uVar20 != 0) {
      for (; uVar20 >> lVar24 == 0; lVar24 = lVar24 + -1) {
      }
    }
    uVar21 = 1 << ((byte)lVar24 & 0x1f);
  }
  if (((int)uVar26 < 1) || ((int)uVar21 <= (int)local_90)) {
    uVar10 = local_90 - 1 & uVar10;
    *(uint *)((longlong)pvVar25 + 0xc) = uVar10;
    FVar17.Data = local_a0;
    if (local_98.Data != (FScriptContainerElement *)0x0) {
      FVar17.Data = local_98.Data;
    }
    uVar20 = (longlong)(int)local_90 - 1U & (longlong)(int)uVar10;
    *(undefined4 *)((longlong)pvVar25 + 8) = *(undefined4 *)(FVar17.Data + uVar20 * 4);
    *(int *)(FVar17.Data + uVar20 * 4) = iVar11;
    goto LAB_146a2c337;
  }
  local_90 = uVar21;
  if (local_98.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_98,0,0,4);
  }
  if (uVar21 != 0) {
    uVar10 = uVar21;
    if (uVar21 < 2) {
      if (local_98.Data != (FScriptContainerElement *)0x0) {
        uVar10 = 0;
        goto LAB_146a2c152;
      }
    }
    else {
LAB_146a2c152:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_98,0,uVar10,4);
    }
    if (0 < (int)uVar21) {
      uVar27 = (ulonglong)uVar21;
      uVar20 = 0;
      do {
        FVar17.Data = local_a0;
        if (local_98.Data != (FScriptContainerElement *)0x0) {
          FVar17.Data = local_98.Data;
        }
        uVar14 = uVar20 & (longlong)(int)uVar21 - 1U;
        uVar20 = uVar20 + 1;
        *(undefined4 *)(FVar17.Data + uVar14 * 4) = 0xffffffff;
        uVar27 = uVar27 - 1;
      } while (uVar27 != 0);
    }
  }
  if (local_90 != 0) {
    local_128.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x10);
    uStack_16c = 1;
    local_170 = 0;
    iStack_15c = 0;
    iStack_158 = 0;
    if (local_b0 != 0) {
      FVar19 = (ForElementType<unsigned_int>)((longlong)local_d8 + 0x10);
      if (local_b8 != (ForElementType<unsigned_int>)0x0) {
        FVar19 = local_b8;
      }
      uVar10 = *(uint *)FVar19;
      while (uVar10 == 0) {
        iStack_158 = iStack_158 + 0x20;
        lVar24 = (longlong)local_170;
        local_170 = local_170 + 1;
        if ((int)(local_b0 + -1 + (local_b0 + -1 >> 0x1f & 0x1fU)) >> 5 < local_170)
        goto LAB_146a2c261;
        uVar10 = ((uint *)((longlong)FVar19 + 4))[lVar24];
      }
      uStack_16c = -uVar10 & uVar10;
      uVar20 = (ulonglong)uStack_16c * 2 + 1;
      lVar24 = 0x3f;
      if (uVar20 != 0) {
        for (; uVar20 >> lVar24 == 0; lVar24 = lVar24 + -1) {
        }
      }
      iStack_15c = (int)lVar24 + -1 + iStack_158;
      if (local_b0 < iStack_15c) {
LAB_146a2c261:
        iStack_15c = local_b0;
      }
    }
    local_128._padding_ = CONCAT44(uStack_16c,local_170);
    local_128.CurrentBitIndex = iStack_15c;
    local_128.UnvisitedBitMask = 0xffffffff;
    local_128._28_4_ = uStack_154;
    local_128.BaseBitIndex = iStack_158;
    if (iStack_15c < local_b0) {
      do {
        pFVar23 = (FScriptContainerElement *)(local_d8._0_8_ + (longlong)iStack_15c * 0x10);
        uVar5 = *(undefined8 *)pFVar23;
        uVar10 = ::GetTypeHash((FNameEntryId)(uint)uVar5);
        uVar10 = local_90 - 1 & uVar10 + (int)((ulonglong)uVar5 >> 0x20);
        *(uint *)(pFVar23 + 0xc) = uVar10;
        FVar17.Data = local_a0;
        if (local_98.Data != (FScriptContainerElement *)0x0) {
          FVar17.Data = local_98.Data;
        }
        uVar20 = (longlong)(int)local_90 - 1U & (longlong)(int)uVar10;
        *(undefined4 *)(pFVar23 + 8) = *(undefined4 *)(FVar17.Data + uVar20 * 4);
        *(int *)(FVar17.Data + uVar20 * 4) = iStack_15c;
        local_128.UnvisitedBitMask = local_128.UnvisitedBitMask & ~local_128._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_128);
        iStack_15c = local_128.CurrentBitIndex;
      } while (local_128.CurrentBitIndex < (local_128.Array)->NumBits);
    }
  }
LAB_146a2c337:
  local_174 = local_174 + 1;
  plVar22 = plVar22 + 1;
  if (iVar2 <= (int)local_174) goto LAB_146a2c36c;
  goto LAB_146a2be80;
}

// WidgetFromItem @ 146a2dc60

/* WARNING: Removing unreachable block (ram,0x000146a2dd6b) */

TSharedPtr<ITableRow,1> * __thiscall
SListView<UObject_*>::WidgetFromItem
          (SListView<UObject_*> *this,TSharedPtr<ITableRow,1> *__return_storage_ptr__,
          UObject **param_1)

{
  ITableRow *pIVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> **ppTVar3;
  bool bVar4;
  bool bVar5;
  TSharedRef<ITableRow,1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *local_40 [2];
  TReferenceControllerBase<1> *local_30;
  
  pTVar7 = (TReferenceControllerBase<1> *)0x0;
  pTVar6 = TMapBase<UObject_*,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<ITableRow,1>,0>_>
           ::Find((TMapBase<UObject_*,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<ITableRow,1>,0>_>
                   *)&this->_padding_,*param_1);
  if (pTVar6 == (TSharedRef<ITableRow,1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    pTVar8 = pTVar7;
  }
  else {
    pTVar8 = (pTVar6->SharedReferenceCount).ReferenceController;
    pIVar1 = pTVar6->Object;
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
      goto LAB_146a2dd78;
    }
  }
  pTVar6 = TMapBase<UObject_*,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<ITableRow,1>,0>_>
           ::Find((TMapBase<UObject_*,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<ITableRow,1>,0>_>
                   *)&this->_padding_,*param_1);
  if (pTVar6 == (TSharedRef<ITableRow,1> *)0x0) {
    local_40[0] = (TReferenceControllerBase<1> *)0x0;
    ppTVar3 = local_40;
    bVar5 = false;
    bVar4 = true;
  }
  else {
    pTVar7 = (TReferenceControllerBase<1> *)pTVar6->Object;
    local_30 = (pTVar6->SharedReferenceCount).ReferenceController;
    if (local_30 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_30->SharedReferenceCount = (atomic<int>)((int)local_30->SharedReferenceCount + 1);
      UNLOCK();
    }
    ppTVar3 = &local_30;
    bVar5 = true;
    bVar4 = false;
  }
  pTVar2 = *ppTVar3;
  *ppTVar3 = (TReferenceControllerBase<1> *)0x0;
  ppTVar3[-1] = (TReferenceControllerBase<1> *)0x0;
  if (bVar4) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40[0])
    ;
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
  }
  __return_storage_ptr__->Object = (ITableRow *)pTVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
LAB_146a2dd78:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return __return_storage_ptr__;
}

// WidgetFromItem @ 146a2ddb0

/* WARNING: Removing unreachable block (ram,0x000146a2debb) */

TSharedPtr<ITableRow,1> * __thiscall
SListView<FName>::WidgetFromItem
          (SListView<FName> *this,TSharedPtr<ITableRow,1> *__return_storage_ptr__,FName *param_1)

{
  ITableRow *pIVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> **ppTVar3;
  bool bVar4;
  bool bVar5;
  TSharedRef<ITableRow,1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *local_40 [2];
  TReferenceControllerBase<1> *local_30;
  
  pTVar7 = (TReferenceControllerBase<1> *)0x0;
  pTVar6 = TMapBase<FName,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<ITableRow,1>,0>_>
           ::Find((TMapBase<FName,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<ITableRow,1>,0>_>
                   *)&this->field_0x10,*param_1);
  if (pTVar6 == (TSharedRef<ITableRow,1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    pTVar8 = pTVar7;
  }
  else {
    pTVar8 = (pTVar6->SharedReferenceCount).ReferenceController;
    pIVar1 = pTVar6->Object;
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
      goto LAB_146a2dec8;
    }
  }
  pTVar6 = TMapBase<FName,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<ITableRow,1>,0>_>
           ::Find((TMapBase<FName,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<ITableRow,1>,0>_>
                   *)&this->field_0xe0,*param_1);
  if (pTVar6 == (TSharedRef<ITableRow,1> *)0x0) {
    local_40[0] = (TReferenceControllerBase<1> *)0x0;
    ppTVar3 = local_40;
    bVar5 = false;
    bVar4 = true;
  }
  else {
    pTVar7 = (TReferenceControllerBase<1> *)pTVar6->Object;
    local_30 = (pTVar6->SharedReferenceCount).ReferenceController;
    if (local_30 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_30->SharedReferenceCount = (atomic<int>)((int)local_30->SharedReferenceCount + 1);
      UNLOCK();
    }
    ppTVar3 = &local_30;
    bVar5 = true;
    bVar4 = false;
  }
  pTVar2 = *ppTVar3;
  *ppTVar3 = (TReferenceControllerBase<1> *)0x0;
  ppTVar3[-1] = (TReferenceControllerBase<1> *)0x0;
  if (bVar4) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40[0])
    ;
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
  }
  __return_storage_ptr__->Object = (ITableRow *)pTVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
LAB_146a2dec8:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return __return_storage_ptr__;
}

// operator() @ 1504f6d10

bool __thiscall `SListView<UObject_*>::SetItemsSource'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8670646794247469381>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8670646794247469381>,
                       &`public:___cdecl_`public:_void___cdecl_SListView<UObject*___ptr64>::SetItemsSource(TArray<UObject*___ptr64,TSizedDefaultAllocator<32>_>_const*___ptr64)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

