// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TranslationEditor
// Functions: 59

// SListView<TSharedPtr<FTranslationPickerTextItem,1>_> @ 146b963a0

/* WARNING: Enum "Type": Some values do not have unique names */

SListView<TSharedPtr<FTranslationPickerTextItem,1>_> * __thiscall
SListView<TSharedPtr<FTranslationPickerTextItem,1>_>::
SListView<TSharedPtr<FTranslationPickerTextItem,1>_>
          (SListView<TSharedPtr<FTranslationPickerTextItem,1>_> *this,Type param_1)

{
  byte *pbVar1;
  
  STableViewBase::STableViewBase((STableViewBase *)this,param_1);
  (this->WidgetGenerator).OwnerList = this;
  this->_padding_ = (longlong)&_vftable__for__SCompoundWidget__;
  this->_padding_ = (longlong)&_vftable__for__IScrollableWidget__;
  this->_padding_ = (longlong)&___7__SListView_V__TSharedPtr_UFTranslationPickerTextItem___00____6B_
  ;
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
  (this->SelectorItem).Object = (FTranslationPickerTextItem *)0x0;
  (this->SelectorItem).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  (this->RangeSelectionStart).Object = (FTranslationPickerTextItem *)0x0;
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
  (this->ItemToScrollIntoView).Object = (FTranslationPickerTextItem *)0x0;
  (this->ItemToScrollIntoView).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ItemToNotifyWhenInView).Object = (FTranslationPickerTextItem *)0x0;
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
  this->ItemsSource =
       (TArray<TSharedPtr<FTranslationPickerTextItem,1>,TSizedDefaultAllocator<32>_> *)0x0;
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
  (this->ViewSource).Ptr = (IItemsSource<TSharedPtr<FTranslationPickerTextItem,1>_> *)0x0;
  *(undefined1 *)((longlong)&this->_padding_ + 3) = 1;
  return this;
}

// ~SListView<TSharedPtr<FTranslationPickerTextItem,1>_> @ 146b987e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SListView<TSharedPtr<FTranslationPickerTextItem,1>_>::
~SListView<TSharedPtr<FTranslationPickerTextItem,1>_>
          (SListView<TSharedPtr<FTranslationPickerTextItem,1>_> *this)

{
  IItemsSource<TSharedPtr<FTranslationPickerTextItem,1>_> *pIVar1;
  ForElementType<FSetElementId> FVar2;
  
  pIVar1 = (this->ViewSource).Ptr;
  if (pIVar1 != (IItemsSource<TSharedPtr<FTranslationPickerTextItem,1>_> *)0x0) {
    (**(code **)*pIVar1)(pIVar1,1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->DefaultMaxPinnedItems).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->MaxPinnedItems).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->IsFocusable).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnKeyDownHandler);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnDoubleClick);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnClick);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnIsSelectableOrNavigable);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnSelectionChanged);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ItemToNotifyWhenInView).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ItemToScrollIntoView).SharedReferenceCount.ReferenceController);
  (this->HighlightedItems).HashSize = 0;
  FVar2 = (this->HighlightedItems).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<TSharedPtr<FTranslationPickerTextItem,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TSharedPtr<FTranslationPickerTextItem,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->HighlightedItems).Elements);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->RangeSelectionStart).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SelectorItem).SharedReferenceCount.ReferenceController);
  (this->SelectedItems).HashSize = 0;
  FVar2 = (this->SelectedItems).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<TSharedPtr<FTranslationPickerTextItem,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TSharedPtr<FTranslationPickerTextItem,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->SelectedItems).Elements);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnFinishedScrolling);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnItemScrolledIntoView);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnRowReleased);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnEnteredBadState);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnItemToString_Debug);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnRefreshRow);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnGeneratePinnedRow);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnGenerateRow);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnEntryInitialized);
  FWidgetGenerator::~FWidgetGenerator(&this->PinnedWidgetGenerator);
  FWidgetGenerator::~FWidgetGenerator(&this->WidgetGenerator);
  STableViewBase::~STableViewBase((STableViewBase *)this);
  return;
}

// AddReferencedObjects @ 146b9c9c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SListView<TSharedPtr<FTranslationPickerTextItem,1>_>::AddReferencedObjects
          (SListView<TSharedPtr<FTranslationPickerTextItem,1>_> *this,FReferenceCollector *param_1)

{
  return;
}

// AsWidget @ 146b9ca50

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
SListView<TSharedPtr<FTranslationPickerTextItem,1>_>::AsWidget
          (SListView<TSharedPtr<FTranslationPickerTextItem,1>_> *this,
          TSharedRef<SWidget,1> *__return_storage_ptr__)

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

// Construct @ 146b9d4f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SListView<TSharedPtr<FTranslationPickerTextItem,1>_>::Construct
          (SListView<TSharedPtr<FTranslationPickerTextItem,1>_> *this,FArguments *param_1)

{
  TUniquePtr<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<FTranslationPickerTextItem,1>_>,TDefaultDelete<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<FTranslationPickerTextItem,1>_>_>_>
  *pTVar1;
  TDelegate<ESelectionMode::Type___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *this_01;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *this_02;
  TReferenceControllerBase<1> *pTVar2;
  SWidget *pSVar3;
  IItemsSource<TSharedPtr<FTranslationPickerTextItem,1>_> *pIVar4;
  IItemsSource<TSharedPtr<FTranslationPickerTextItem,1>_> IVar5;
  FTableViewStyle *pFVar6;
  STextBlock *pSVar7;
  code *pcVar8;
  longlong lVar9;
  char cVar10;
  bool bVar11;
  TSharedRef<SWidget,1> *pTVar12;
  TUniquePtr<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<FTranslationPickerTextItem,1>_>,TDefaultDelete<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<FTranslationPickerTextItem,1>_>_>_>
  TVar13;
  undefined8 *puVar14;
  ulong64 uVar15;
  undefined4 *puVar16;
  FArguments *pFVar17;
  FText *pFVar18;
  TSharedRef<STextBlock,1> *pTVar19;
  SScrollBar *pSVar20;
  TReferenceControllerBase<1> *pTVar21;
  int iVar22;
  FSlotBase *this_03;
  longlong *plVar23;
  TReferenceControllerBase<1> *pTVar24;
  atomic<int> *paVar25;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res10 [2];
  FName local_res18;
  FMemScope local_res20;
  undefined1 local_a68 [8];
  FDelegateAllocation local_a60;
  undefined1 local_a50 [8];
  ForAnyElementType local_a48;
  int local_a40;
  undefined1 local_a38 [8];
  ForAnyElementType local_a30;
  int local_a28;
  undefined1 local_a20 [8];
  ForAnyElementType local_a18;
  int local_a10;
  undefined1 local_a08 [8];
  ForAnyElementType local_a00;
  int local_9f8;
  undefined1 local_9f0 [8];
  ForAnyElementType local_9e8;
  int local_9e0;
  undefined1 local_9d8 [8];
  ForAnyElementType local_9d0;
  int local_9c8;
  undefined1 local_9c0 [8];
  ForAnyElementType local_9b8;
  int local_9b0;
  undefined1 local_9a8 [8];
  ForAnyElementType local_9a0;
  int local_998;
  undefined1 local_990 [8];
  ForAnyElementType local_988;
  int local_980;
  FString local_978;
  undefined1 local_968 [16];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_958;
  ForAnyElementType FStack_950;
  ulonglong local_948;
  SWidget *local_940;
  TReferenceControllerBase<1> *local_938;
  STextBlock *local_930;
  TReferenceControllerBase<1> *pTStack_928;
  TSharedRef<ISlateMetaData,1> local_920;
  uchar local_910;
  bool local_90f;
  TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> local_908;
  undefined8 local_8f0;
  FSharedReferencer<1> FStack_8e8;
  TAttribute<EListItemAlignment> local_8e0;
  TAttribute<float> local_8c0;
  TAttribute<float> local_8a0;
  TDelegate<FString___cdecl(TSharedPtr<FTranslationPickerTextItem,1>),FDefaultDelegateUserPolicy>
  local_880;
  TSharedRef<SWidget,1> local_868;
  FDestructionSentinel local_858;
  FDestructionSentinel local_840;
  FDestructionSentinel local_828;
  FDestructionSentinel local_810;
  FDestructionSentinel local_7f8;
  FDestructionSentinel local_7e0;
  FDestructionSentinel local_7c8;
  FDestructionSentinel local_7b0;
  FDestructionSentinel local_798;
  FDestructionSentinel local_780;
  FDestructionSentinel local_768;
  FDestructionSentinel local_750;
  FDelegateAllocation *local_738;
  TAttribute<FText> local_730;
  FReadAccessScope local_700;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_6e8;
  undefined1 local_6d0 [16];
  TReferenceControllerBase<1> *local_6c0;
  FText local_6b8;
  TSharedRef<STextBlock,1> local_6a8;
  FReadAccessScope local_698;
  FReadAccessScope local_680;
  FReadAccessScope local_668;
  FReadAccessScope local_650;
  FReadAccessScope local_638;
  FReadAccessScope local_620;
  FReadAccessScope local_608;
  FReadAccessScope local_5f0;
  FReadAccessScope local_5d8;
  FReadAccessScope local_5c0;
  FArguments local_5a8;
  
  *(undefined1 *)((longlong)&this->_padding_ + 5) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 2);
  pTVar24 = (TReferenceControllerBase<1> *)0x0;
  TDelegate<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FTranslationPickerTextItem,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
  ::operator=(&this->OnGenerateRow,&param_1->_OnGenerateRow);
  TDelegate<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FTranslationPickerTextItem,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
  ::operator=(&this->OnGeneratePinnedRow,&param_1->_OnGeneratePinnedRow);
  TDelegate<void___cdecl(TSharedPtr<FTranslationPickerTextItem,1>),FDefaultDelegateUserPolicy>::
  operator=(&this->OnRefreshRow,&param_1->_OnRefreshRow);
  if (&param_1->_OnEntryInitialized != &this->OnEntryInitialized) {
    local_a38 = (undefined1  [8])0x0;
    local_a30.Data = (FScriptContainerElement *)0x0;
    local_a28 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &param_1->_OnEntryInitialized,&local_680);
    if ((*(int *)&(param_1->_OnEntryInitialized).field_0x10 != 0) &&
       (plVar23 = *(longlong **)&(param_1->_OnEntryInitialized).field_0x8,
       plVar23 != (longlong *)0x0)) {
      (**(code **)(*plVar23 + 0x50))(plVar23,local_a38);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_680);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnEntryInitialized,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_a38);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a38,
               (FWriteAccessScope *)&local_768);
    if ((local_a28 != 0) && (local_a30.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_a30.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_a30,0,0,0x10);
      local_a28 = 0;
    }
    if (local_768.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_768.Accessor,&local_768);
    }
    if (local_a30.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a30.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_a38);
  }
  if (&param_1->_OnRowReleased != &this->OnRowReleased) {
    local_a50 = (undefined1  [8])0x0;
    local_a48.Data = (FScriptContainerElement *)0x0;
    local_a40 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->_OnRowReleased,
               &local_668);
    if ((*(int *)&(param_1->_OnRowReleased).field_0x10 != 0) &&
       (plVar23 = *(longlong **)&(param_1->_OnRowReleased).field_0x8, plVar23 != (longlong *)0x0)) {
      (**(code **)(*plVar23 + 0x50))(plVar23,local_a50);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_668);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnRowReleased,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_a50);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a50,
               (FWriteAccessScope *)&local_858);
    if ((local_a40 != 0) && (local_a48.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_a48.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_a48,0,0,0x10);
      local_a40 = 0;
    }
    if (local_858.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_858.Accessor,&local_858);
    }
    if (local_a48.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a48.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_a50);
  }
  if (&param_1->_OnItemScrolledIntoView != &this->OnItemScrolledIntoView) {
    local_a20 = (undefined1  [8])0x0;
    local_a18.Data = (FScriptContainerElement *)0x0;
    local_a10 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &param_1->_OnItemScrolledIntoView,&local_650);
    if ((*(int *)&(param_1->_OnItemScrolledIntoView).field_0x10 != 0) &&
       (plVar23 = *(longlong **)&(param_1->_OnItemScrolledIntoView).field_0x8,
       plVar23 != (longlong *)0x0)) {
      (**(code **)(*plVar23 + 0x50))(plVar23,local_a20);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_650);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnItemScrolledIntoView,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_a20);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a20,
               (FWriteAccessScope *)&local_840);
    if ((local_a10 != 0) && (local_a18.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_a18.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_a18,0,0,0x10);
      local_a10 = 0;
    }
    if (local_840.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_840.Accessor,&local_840);
    }
    if (local_a18.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a18.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_a20);
  }
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::operator=
            (&this->OnFinishedScrolling,&param_1->_OnFinishedScrolling);
  pTVar12 = TSharedFromThis<SWidget,1>::AsShared
                      ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_868);
  pTVar2 = (pTVar12->SharedReferenceCount).ReferenceController;
  pSVar3 = pTVar12->Object;
  if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_868.SharedReferenceCount.ReferenceController);
  }
  else {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_868.SharedReferenceCount.ReferenceController);
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_940 = pSVar3;
  local_938 = pTVar2;
  TVar13 = FArguments::MakeListItemsSource(param_1,(TSharedRef<STableViewBase,1> *)local_6d0);
  if ((this->_padding_ & 0x400) == 0) {
    pTVar1 = &this->ViewSource;
    if ((IItemsSource<TSharedPtr<FTranslationPickerTextItem,1>_> *)pTVar1 != TVar13.Ptr) {
      pIVar4 = pTVar1->Ptr;
      pTVar1->Ptr = (IItemsSource<TSharedPtr<FTranslationPickerTextItem,1>_> *)*TVar13.Ptr;
      *TVar13.Ptr = (IItemsSource<TSharedPtr<FTranslationPickerTextItem,1>_>)0x0;
      if (pIVar4 != (IItemsSource<TSharedPtr<FTranslationPickerTextItem,1>_> *)0x0) {
        (**(code **)*pIVar4)(pIVar4,1);
      }
    }
  }
  else {
    (**(code **)(this->_padding_ + 0x30))();
    this->UserRequestingScrollIntoView = 0;
    this->bNavigateOnScrollIntoView = false;
    local_8f0 = 0;
    FStack_8e8.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&this->ItemToScrollIntoView != (TSharedPtr<FTranslationPickerTextItem,1> *)&local_8f0) {
      (this->ItemToScrollIntoView).Object = (FTranslationPickerTextItem *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->ItemToScrollIntoView).SharedReferenceCount,&FStack_8e8);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_8e8.ReferenceController);
    STableViewBase::ClearWidgets((STableViewBase *)this);
    pTVar1 = &this->ViewSource;
    if ((IItemsSource<TSharedPtr<FTranslationPickerTextItem,1>_> *)pTVar1 != TVar13.Ptr) {
      pIVar4 = pTVar1->Ptr;
      pTVar1->Ptr = (IItemsSource<TSharedPtr<FTranslationPickerTextItem,1>_> *)*TVar13.Ptr;
      *TVar13.Ptr = (IItemsSource<TSharedPtr<FTranslationPickerTextItem,1>_>)0x0;
      if (pIVar4 != (IItemsSource<TSharedPtr<FTranslationPickerTextItem,1>_> *)0x0) {
        (**(code **)*pIVar4)(pIVar4,1);
      }
    }
    (**(code **)(this->_padding_ + 0x250))(this);
  }
  IVar5 = *TVar13.Ptr;
  if (IVar5 != (IItemsSource<TSharedPtr<FTranslationPickerTextItem,1>_>)0x0) {
    (*(code *)**(undefined8 **)IVar5)(IVar5,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (&param_1->_OnContextMenuOpening !=
      (TDelegate<TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy> *)&this->_padding_)
  {
    local_a08 = (undefined1  [8])0x0;
    local_a00.Data = (FScriptContainerElement *)0x0;
    local_9f8 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &param_1->_OnContextMenuOpening,&local_638);
    if ((*(int *)&(param_1->_OnContextMenuOpening).field_0x10 != 0) &&
       (plVar23 = *(longlong **)&(param_1->_OnContextMenuOpening).field_0x8,
       plVar23 != (longlong *)0x0)) {
      (**(code **)(*plVar23 + 0x50))(plVar23,local_a08);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_638);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_padding_,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_a08);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a08,
               (FWriteAccessScope *)&local_828);
    if ((local_9f8 != 0) && (local_a00.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_a00.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_a00,0,0,0x10);
      local_9f8 = 0;
    }
    if (local_828.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_828.Accessor,&local_828);
    }
    if (local_a00.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a00.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_a08);
  }
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::operator=
            ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&this->_padding_,
             &param_1->_OnItemsRebuilt);
  TDelegate<void___cdecl(TSharedPtr<FTranslationPickerTextItem,1>),FDefaultDelegateUserPolicy>::
  operator=(&this->OnClick,&param_1->_OnMouseButtonClick);
  TDelegate<void___cdecl(TSharedPtr<FTranslationPickerTextItem,1>),FDefaultDelegateUserPolicy>::
  operator=(&this->OnDoubleClick,&param_1->_OnMouseButtonDoubleClick);
  if (&param_1->_OnSelectionChanged != &this->OnSelectionChanged) {
    local_9f0 = (undefined1  [8])0x0;
    local_9e8.Data = (FScriptContainerElement *)0x0;
    local_9e0 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &param_1->_OnSelectionChanged,&local_5c0);
    if ((*(int *)&(param_1->_OnSelectionChanged).field_0x10 != 0) &&
       (plVar23 = *(longlong **)&(param_1->_OnSelectionChanged).field_0x8,
       plVar23 != (longlong *)0x0)) {
      (**(code **)(*plVar23 + 0x50))(plVar23,local_9f0);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_5c0);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnSelectionChanged,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_9f0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_9f0,
               (FWriteAccessScope *)&local_810);
    if ((local_9e0 != 0) && (local_9e8.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_9e8.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_9e8,0,0,0x10);
      local_9e0 = 0;
    }
    if (local_810.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_810.Accessor,&local_810);
    }
    if (local_9e8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_9e8.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_9f0);
  }
  if (&param_1->_OnIsSelectableOrNavigable != &this->OnIsSelectableOrNavigable) {
    local_9d8 = (undefined1  [8])0x0;
    local_9d0.Data = (FScriptContainerElement *)0x0;
    local_9c8 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &param_1->_OnIsSelectableOrNavigable,&local_620);
    if ((*(int *)&(param_1->_OnIsSelectableOrNavigable).field_0x10 != 0) &&
       (plVar23 = *(longlong **)&(param_1->_OnIsSelectableOrNavigable).field_0x8,
       plVar23 != (longlong *)0x0)) {
      (**(code **)(*plVar23 + 0x50))(plVar23,local_9d8);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_620);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnIsSelectableOrNavigable,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_9d8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_9d8,
               (FWriteAccessScope *)&local_7f8);
    if ((local_9c8 != 0) && (local_9d0.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_9d0.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_9d0,0,0,0x10);
      local_9c8 = 0;
    }
    if (local_7f8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_7f8.Accessor,&local_7f8);
    }
    if (local_9d0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_9d0.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_9d8);
  }
  this_00 = &(param_1->_SelectionMode).Getter;
  *(Type *)&this->_padding_ = (param_1->_SelectionMode).Value;
  *(bool *)((longlong)&this->_padding_ + 4) = (param_1->_SelectionMode).bIsSet;
  if (this_00 !=
      (TDelegate<ESelectionMode::Type___cdecl(void),FDefaultDelegateUserPolicy> *)&this->_padding_)
  {
    local_9c0 = (undefined1  [8])0x0;
    local_9b8.Data = (FScriptContainerElement *)0x0;
    local_9b0 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_608);
    if ((*(int *)&(param_1->_SelectionMode).Getter.field_0x10 != 0) &&
       (plVar23 = *(longlong **)&(param_1->_SelectionMode).Getter.field_0x8,
       plVar23 != (longlong *)0x0)) {
      (**(code **)(*plVar23 + 0x50))(plVar23,local_9c0);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_608);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_padding_,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_9c0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_9c0,
               (FWriteAccessScope *)&local_7e0);
    if ((local_9b0 != 0) && (local_9b8.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_9b8.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_9b8,0,0,0x10);
      local_9b0 = 0;
    }
    if (local_7e0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_7e0.Accessor,&local_7e0);
    }
    if (local_9b8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_9b8.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_9c0);
  }
  this_01 = &(param_1->_IsFocusable).Getter;
  this->bClearSelectionOnClick = param_1->_ClearSelectionOnClick;
  this_02 = &(this->IsFocusable).Getter;
  *(EAllowOverscroll *)&this->_padding_ = param_1->_AllowOverscroll;
  *(EConsumeMouseWheel *)((longlong)&this->_padding_ + 1) = param_1->_ConsumeMouseWheel;
  *(float *)((longlong)&this->_padding_ + 4) = param_1->_WheelScrollMultiplier;
  this->NavigationScrollOffset = param_1->_NavigationScrollOffset;
  this->bHandleGamepadEvents = param_1->_HandleGamepadEvents;
  this->bHandleDirectionalNavigation = param_1->_HandleDirectionalNavigation;
  this->bHandleSpacebarSelection = param_1->_HandleSpacebarSelection;
  (this->IsFocusable).Value = (param_1->_IsFocusable).Value;
  (this->IsFocusable).bIsSet = (param_1->_IsFocusable).bIsSet;
  if (this_01 != this_02) {
    local_9a8 = (undefined1  [8])0x0;
    local_9a0.Data = (FScriptContainerElement *)0x0;
    local_998 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_01,&local_5f0);
    if ((*(int *)&(param_1->_IsFocusable).Getter.field_0x10 != 0) &&
       (plVar23 = *(longlong **)&(param_1->_IsFocusable).Getter.field_0x8,
       plVar23 != (longlong *)0x0)) {
      (**(code **)(*plVar23 + 0x50))(plVar23,local_9a8);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_5f0);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_02,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_9a8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_9a8,
               (FWriteAccessScope *)&local_7c8);
    if ((local_998 != 0) && (local_9a0.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_9a0.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_9a0,0,0,0x10);
      local_998 = 0;
    }
    if (local_7c8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_7c8.Accessor,&local_7c8);
    }
    if (local_9a0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_9a0.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_9a8);
  }
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
             &param_1->_OnItemToString_Debug,&local_698);
  if ((*(int *)&(param_1->_OnItemToString_Debug).field_0x10 == 0) ||
     (plVar23 = *(longlong **)&(param_1->_OnItemToString_Debug).field_0x8,
     plVar23 == (longlong *)0x0)) {
LAB_146b9df29:
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_698);
    local_a68 = (undefined1  [8])0x0;
    local_a60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_a60.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a68,
               (FWriteAccessScope *)&local_750);
    local_738 = &local_a60;
    puVar14 = UE::Core::Private::DelegateAllocate(0x20,&local_a60);
    if (puVar14 != (undefined8 *)0x0) {
      *puVar14 = &
                 ___7__TCommonDelegateInstanceState___A6A_AVFString__V__TSharedPtr_UFTranslationPickerTextItem___00___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar15 = FDelegateHandle::GenerateNewID();
      puVar14[2] = uVar15;
      *puVar14 = &
                 ___7__TBaseStaticDelegateInstance___A6A_AVFString__V__TSharedPtr_UFTranslationPickerTextItem___00___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar14[3] = TListTypeTraits<TSharedPtr<FTranslationPickerTextItem,1>,void>::DebugDump;
    }
    if (local_750.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_750.Accessor,&local_750);
    }
    TDelegate<FString___cdecl(TSharedPtr<FTranslationPickerTextItem,1>),FDefaultDelegateUserPolicy>
    ::CopyFrom<FDefaultDelegateUserPolicy>
              (&this->OnItemToString_Debug,
               (TDelegate<FString___cdecl(TSharedPtr<FTranslationPickerTextItem,1>),FDefaultDelegateUserPolicy>
                *)local_a68);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a68,
               (FWriteAccessScope *)&local_7b0);
    if ((local_a60.DelegateSize != 0) &&
       (local_a60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_a60.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_a60,0,0,0x10);
      local_a60.DelegateSize = 0;
    }
    if (local_7b0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_7b0.Accessor,&local_7b0);
    }
    if (local_a60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_a60.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_a68);
  }
  else {
    cVar10 = (**(code **)(*plVar23 + 0x38))();
    if (cVar10 == '\0') goto LAB_146b9df29;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_698);
    local_880._0_8_ = 0;
    local_880._8_8_ = 0;
    local_880._16_4_ = 0;
    TDelegate<FString___cdecl(TSharedPtr<FTranslationPickerTextItem,1>),FDefaultDelegateUserPolicy>
    ::CopyFrom<FDefaultDelegateUserPolicy>(&local_880,&param_1->_OnItemToString_Debug);
    TDelegate<FString___cdecl(TSharedPtr<FTranslationPickerTextItem,1>),FDefaultDelegateUserPolicy>
    ::CopyFrom<FDefaultDelegateUserPolicy>(&this->OnItemToString_Debug,&local_880);
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_880);
  }
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::operator=
            (&this->OnEnteredBadState,&param_1->_OnEnteredBadState);
  if (&param_1->_OnKeyDownHandler != &this->OnKeyDownHandler) {
    local_990 = (undefined1  [8])0x0;
    local_988.Data = (FScriptContainerElement *)0x0;
    local_980 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->_OnKeyDownHandler
               ,&local_5d8);
    if ((*(int *)&(param_1->_OnKeyDownHandler).field_0x10 != 0) &&
       (plVar23 = *(longlong **)&(param_1->_OnKeyDownHandler).field_0x8, plVar23 != (longlong *)0x0)
       ) {
      (**(code **)(*plVar23 + 0x50))(plVar23,local_990);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_5d8);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnKeyDownHandler,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_990);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_990,
               (FWriteAccessScope *)&local_798);
    if ((local_980 != 0) && (local_988.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_988.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_988,0,0,0x10);
      local_980 = 0;
    }
    if (local_798.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_798.Accessor,&local_798);
    }
    if (local_988.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_988.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_990);
  }
  pFVar6 = param_1->_ListViewStyle;
  this->Style = pFVar6;
  if (pFVar6 == (FTableViewStyle *)0x0) {
    local_968._0_8_ = FStyleDefaults::GetNoBrush();
  }
  else {
    local_968._0_8_ = &pFVar6->BackgroundBrush;
  }
  local_968[8] = true;
  local_948 = 0;
  local_958.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_950.Data = (FScriptContainerElement *)0x0;
  STableViewBase::SetBackgroundBrush
            ((STableViewBase *)this,(TAttribute<FSlateBrush_const_*> *)local_968);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_958,(FWriteAccessScope *)&local_780);
  if (((int)local_948 != 0) && (FStack_950.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_950.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_950,0,0,0x10);
    local_948 = local_948 & 0xffffffff00000000;
  }
  if (local_780.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_780.Accessor,&local_780);
  }
  if (FStack_950.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_950.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_958.AccessDetector);
  *(bool *)&this->_padding_ = param_1->_bEnableShadowBoxStyle;
  this->_padding_ = (longlong)param_1->_ShadowBoxStyle;
  TAttribute<int>::operator=(&this->MaxPinnedItems,&param_1->_MaxPinnedItems);
  TAttribute<int>::operator=(&this->DefaultMaxPinnedItems,&param_1->_MaxPinnedItems);
  lVar9 = *(longlong *)&(param_1->_ScrollBarPadding).Right;
  local_978.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_978.Data.ArrayNum = 0;
  local_978.Data.ArrayMax = 0;
  this->_padding_ = *(longlong *)&param_1->_ScrollBarPadding;
  this->_padding_ = lVar9;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnGenerateRow,
             &local_700);
  if ((*(int *)&(this->OnGenerateRow).field_0x10 != 0) &&
     (plVar23 = *(longlong **)&(this->OnGenerateRow).field_0x8, plVar23 != (longlong *)0x0)) {
    cVar10 = (**(code **)(*plVar23 + 0x38))();
    if (cVar10 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_700);
      goto LAB_146b9e29c;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_700);
  ::FString::AppendChars(&local_978,L"Please specify an OnGenerateRow. \n",0x22);
LAB_146b9e29c:
  if ((this->ViewSource).Ptr == (IItemsSource<TSharedPtr<FTranslationPickerTextItem,1>_> *)0x0) {
    ::FString::AppendChars(&local_978,L"Please specify a ListItemsSource. \n",0x23);
  }
  iVar22 = local_978.Data.ArrayNum + -1;
  if (local_978.Data.ArrayNum == 0) {
    iVar22 = 0;
  }
  if (iVar22 < 1) {
    local_8e0.Value = LeftAligned;
    local_8e0.bIsSet = true;
    local_8c0.Value = 0.0;
    local_8a0.Value = 0.0;
    local_8e0.Getter._0_8_ = 0;
    local_8e0.Getter._8_8_ = 0;
    local_8e0.Getter._16_8_ = 0;
    local_8c0.bIsSet = true;
    local_8c0.Getter._0_8_ = 0;
    local_8c0.Getter._8_8_ = 0;
    local_8c0.Getter._16_8_ = 0;
    local_8a0.bIsSet = true;
    local_8a0.Getter._0_8_ = 0;
    local_8a0.Getter._8_8_ = 0;
    local_8a0.Getter._16_8_ = 0;
    STableViewBase::ConstructChildren
              ((STableViewBase *)this,&local_8a0,&local_8c0,&local_8e0,&param_1->_HeaderRow,
               &param_1->_ExternalScrollbar,param_1->_Orientation,&param_1->_OnListViewScrolled,
               param_1->_ScrollBarStyle,param_1->_PreventThrottling);
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_8a0.Getter);
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_8c0.Getter);
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_8e0.Getter);
    if (this->_padding_ != 0) {
      pSVar20 = TSharedPtr<SScrollBar,1>::operator->((TSharedPtr<SScrollBar,1> *)&this->_padding_);
      SScrollBar::SetDragFocusCause(pSVar20,param_1->_ScrollbarDragFocusCause);
      pSVar20 = TSharedPtr<SScrollBar,1>::operator->((TSharedPtr<SScrollBar,1> *)&this->_padding_);
      local_910 = (param_1->_ScrollbarVisibility).Value.Value.Value;
      local_90f = (param_1->_ScrollbarVisibility).bIsSet;
      local_908._0_8_ = 0;
      local_908._8_8_ = 0;
      local_908._16_4_ = 0;
      TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
      CopyFrom<FDefaultDelegateUserPolicy>(&local_908,&(param_1->_ScrollbarVisibility).Getter);
      (pSVar20->UserVisibility).Value.Value.Value = local_910;
      (pSVar20->UserVisibility).bIsSet = local_90f;
      TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
      CopyFrom<FDefaultDelegateUserPolicy>(&(pSVar20->UserVisibility).Getter,&local_908);
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_908);
    }
    pTVar12 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,
                         (TSharedRef<SWidget,1> *)(local_6d0 + 8));
    pTVar2 = (pTVar12->SharedReferenceCount).ReferenceController;
    pSVar3 = pTVar12->Object;
    if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
      paVar25 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar25 = &pTVar2->SharedReferenceCount;
      LOCK();
      *paVar25 = (atomic<int>)((int)*paVar25 + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_6c0);
    pTVar21 = ::operator_new(0x28);
    if (pTVar21 == (TReferenceControllerBase<1> *)0x0) {
      local_920.Object = (ISlateMetaData *)___xmm_00000000000000000000000000000010;
      local_920.SharedReferenceCount.ReferenceController = _UNK_150651568;
    }
    else {
      pTVar21->SharedReferenceCount = (atomic<int>)0x1;
      pTVar21->WeakReferenceCount = (atomic<int>)0x1;
      pTVar21->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_V__TTableViewMetadata_V__TSharedPtr_UFTranslationPickerTextItem___00_____00_SharedPointerInternals__6B_
      ;
      if (pSVar3 != (SWidget *)0x0) {
        pTVar24 = (TReferenceControllerBase<1> *)
                  &pSVar3[2].PersistentState.CachedElementHandle.Ptr.WeakReferenceCount;
      }
      if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
        pTVar21[1]._padding_ =
             (longlong)
             &___7__TTableViewMetadata_V__TSharedPtr_UFTranslationPickerTextItem___00____6B_;
        *(TReferenceControllerBase<1> **)&pTVar21[1].SharedReferenceCount = pTVar24;
        pTVar21[2]._padding_ = 0;
      }
      else {
        LOCK();
        *paVar25 = (atomic<int>)((int)*paVar25 + 1);
        UNLOCK();
        pTVar21[1]._padding_ =
             (longlong)
             &___7__TTableViewMetadata_V__TSharedPtr_UFTranslationPickerTextItem___00____6B_;
        *(TReferenceControllerBase<1> **)&pTVar21[1].SharedReferenceCount = pTVar24;
        pTVar21[2]._padding_ = (longlong)pTVar2;
        LOCK();
        pTVar2->WeakReferenceCount = (atomic<int>)((int)pTVar2->WeakReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      local_920.Object = (ISlateMetaData *)(pTVar21 + 1);
      if ((TReferenceControllerBase<1> *)local_920.Object == (TReferenceControllerBase<1> *)0x0) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("InObject != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x246,L"");
        if (bVar11) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      LOCK();
      pTVar21->SharedReferenceCount = (atomic<int>)((int)pTVar21->SharedReferenceCount + 1);
      UNLOCK();
      pTVar24 = pTVar21;
      local_920.SharedReferenceCount.ReferenceController = pTVar21;
    }
    SWidget::AddMetadataInternal((SWidget *)this,&local_920);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_920.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar24);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  }
  else {
    plVar23 = &this->_padding_;
    *(undefined4 *)plVar23 = 2;
    puVar16 = (undefined4 *)((longlong)&this->_padding_ + 4);
    if (plVar23 == (longlong *)0x0) {
      puVar16 = (undefined4 *)&DAT_00000054;
    }
    *puVar16 = 2;
    pFVar17 = STextBlock::FArguments::FArguments(&local_5a8);
    pFVar18 = FText::FromString(&local_6b8,&local_978);
    FText::FText(&local_730.Value,pFVar18);
    local_730.bIsSet = true;
    local_730.Getter._16_8_ = 0;
    local_730.Getter._0_8_ = 0;
    local_730.Getter._8_8_ = 0;
    pFVar17 = STextBlock::FArguments::Text(pFVar17,&local_730);
    FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_res18 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_res20,&local_res18,true);
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
              (&local_6e8,"STextBlock",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\SListView.h"
               ,0x135,local_res8);
    FMemScope::~FMemScope(&local_res20);
    FLLMScope::~FLLMScope(local_res10);
    pTVar19 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                        (&local_6e8,&local_6a8,pFVar17);
    this_03 = (FSlotBase *)&this->_padding_;
    pTVar24 = (pTVar19->SharedReferenceCount).ReferenceController;
    pSVar7 = pTVar19->Object;
    if (pTVar24 == (TReferenceControllerBase<1> *)0x0) {
      if (plVar23 == (longlong *)0x0) {
        this_03 = (FSlotBase *)&DAT_00000020;
      }
      FSlotBase::DetatchParentFromContent(this_03);
    }
    else {
      LOCK();
      pTVar24->SharedReferenceCount = (atomic<int>)((int)pTVar24->SharedReferenceCount + 1);
      UNLOCK();
      if (plVar23 == (longlong *)0x0) {
        this_03 = (FSlotBase *)&DAT_00000020;
      }
      FSlotBase::DetatchParentFromContent(this_03);
      LOCK();
      pTVar24->SharedReferenceCount = (atomic<int>)((int)pTVar24->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar2 = (this_03->Widget).SharedReferenceCount.ReferenceController;
    (this_03->Widget).Object = (SWidget *)pSVar7;
    (this_03->Widget).SharedReferenceCount.ReferenceController = pTVar24;
    local_930 = pSVar7;
    pTStack_928 = pTVar24;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    FSlotBase::AfterContentOrOwnerAssigned(this_03);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar24);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_6a8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_6e8._Widget.SharedReferenceCount.ReferenceController);
    if (local_6b8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_6b8.TextData.Reference + 0x10))();
    }
    STextBlock::FArguments::~FArguments(&local_5a8);
  }
  if (local_978.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_978.Data.AllocatorInstance.Data);
  }
  return;
}

// CreateAccessibleWidget @ 146ba6960

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<FSlateAccessibleWidget,1> * __thiscall
SListView<TSharedPtr<FTranslationPickerTextItem,1>_>::CreateAccessibleWidget
          (SListView<TSharedPtr<FTranslationPickerTextItem,1>_> *this,
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

// GenerateNewPinnedWidget @ 146bab0b0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<ITableRow,1> * __thiscall
SListView<TSharedPtr<FTranslationPickerTextItem,1>_>::GenerateNewPinnedWidget
          (SListView<TSharedPtr<FTranslationPickerTextItem,1>_> *this,
          TSharedRef<ITableRow,1> *__return_storage_ptr__,
          TSharedPtr<FTranslationPickerTextItem,1> *param_1,int param_2,int param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  SWidget *pSVar2;
  TReferenceControllerBase<1> *pTVar3;
  SListView<TSharedPtr<FTranslationPickerTextItem,1>_> *pSVar4;
  char cVar5;
  TSharedRef<SWidget,1> *pTVar6;
  FArguments *pFVar7;
  FArguments *pFVar8;
  FText *pFVar9;
  TSharedRef<STextBlock,1> *pTVar10;
  TSlateDecl<STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FTranslationPickerTextItem,1>_>,1>_&&>_>
  *this_00;
  longlong *plVar11;
  T0RequiredArgs local_res8 [8];
  TSharedRef<STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>,1> local_948;
  FLLMScope local_938 [2];
  TSharedRef<SListView<TSharedPtr<FTranslationPickerTextItem,1>_>,1> local_930;
  T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FTranslationPickerTextItem,1>_>,1>_&&> local_920;
  TReferenceControllerBase<1> *local_918;
  FName local_910;
  FReadAccessScope local_908;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_8f0;
  TAttribute<FText> local_8d8;
  TSharedRef<STextBlock,1> local_8a8;
  TSlateDecl<STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FTranslationPickerTextItem,1>_>,1>_&&>_>
  local_898;
  FArguments local_880;
  FArguments local_588;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnGeneratePinnedRow,
             &local_908);
  if (((*(int *)&(this->OnGeneratePinnedRow).field_0x10 == 0) ||
      (plVar11 = *(longlong **)&(this->OnGeneratePinnedRow).field_0x8, plVar11 == (longlong *)0x0))
     || (cVar5 = (**(code **)(*plVar11 + 0x38))(), cVar5 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_908);
    pFVar7 = STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>::FArguments::FArguments
                       (&local_880);
    pFVar8 = STextBlock::FArguments::FArguments(&local_588);
    pFVar9 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)&local_908,L"SListView",L"OnGeneratePinnedRowNotAssignedMessage",
                        L"OnGeneratePinnedRow() not assigned.");
    FText::FText(&local_8d8.Value,pFVar9);
    local_8d8.bIsSet = true;
    local_8d8.Getter._16_8_ = 0;
    local_8d8.Getter._0_8_ = 0;
    local_8d8.Getter._8_8_ = 0;
    pFVar8 = STextBlock::FArguments::Text(pFVar8,&local_8d8);
    FLLMScope::FLLMScope(local_938,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_910 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope((FMemScope *)&local_948,&local_910,true);
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
              (&local_8f0,"STextBlock",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\SListView.h"
               ,0x691,local_res8);
    FMemScope::~FMemScope((FMemScope *)&local_948);
    FLLMScope::~FLLMScope(local_938);
    pTVar10 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                        (&local_8f0,&local_8a8,pFVar8);
    pTVar1 = (pTVar10->SharedReferenceCount).ReferenceController;
    local_948.Object = (STableRow<TSharedPtr<FTranslationPickerTextItem,1>_> *)pTVar10->Object;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar3 = (pFVar7->_Content).Widget.SharedReferenceCount.ReferenceController;
    (pFVar7->_Content).Widget.Object = (SWidget *)local_948.Object;
    (pFVar7->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar1;
    local_948.SharedReferenceCount.ReferenceController = pTVar1;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    pTVar6 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&this->_padding_,
                        (TSharedRef<SWidget,1> *)&local_948);
    local_930.Object = (SListView<TSharedPtr<FTranslationPickerTextItem,1>_> *)pTVar6->Object;
    local_930.SharedReferenceCount.ReferenceController =
         (pTVar6->SharedReferenceCount).ReferenceController;
    if (local_930.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_930.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_930.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_948.SharedReferenceCount.ReferenceController);
    local_920.Arg0 = &local_930;
    this_00 = MakeTDecl<STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FTranslationPickerTextItem,1>_>,1>_&&>_>
                        (&local_898,"STableRow<ItemType>",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\SListView.h"
                         ,0x68e,&local_920);
    TSlateDecl<STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FTranslationPickerTextItem,1>_>,1>_&&>_>
    ::operator<<=(this_00,&local_948,pFVar7);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_898._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_930.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_8a8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_8f0._Widget.SharedReferenceCount.ReferenceController);
    if ((ITextData *)local_908.DestructionSentinel._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_908.DestructionSentinel._0_8_ + 0x10))();
    }
    STextBlock::FArguments::~FArguments(&local_588);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_880._Content.Widget.SharedReferenceCount.ReferenceController);
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_880._Padding.Getter);
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_880._OnDrop);
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_880._OnDragLeave);
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_880._OnDragEnter);
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_880._OnDragDetected);
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_880._OnPaintDropIndicator);
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_880._OnAcceptDrop);
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_880._OnCanAcceptDrop);
    FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_880);
    __return_storage_ptr__->Object = (ITableRow *)local_948.Object;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         local_948.SharedReferenceCount.ReferenceController;
    if (local_948.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_948.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_948.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_948.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_908);
    pTVar6 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&this->_padding_,
                        (TSharedRef<SWidget,1> *)&local_930);
    pTVar1 = (pTVar6->SharedReferenceCount).ReferenceController;
    pSVar2 = pTVar6->Object;
    if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_930.SharedReferenceCount.ReferenceController);
    }
    else {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_930.SharedReferenceCount.ReferenceController);
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
    pSVar4 = (SListView<TSharedPtr<FTranslationPickerTextItem,1>_> *)param_1->Object;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_920.Arg0 = (TSharedRef<SListView<TSharedPtr<FTranslationPickerTextItem,1>_>,1> *)pSVar2;
    local_918 = pTVar1;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnGeneratePinnedRow,
               (FReadAccessScope *)&local_8f0);
    if (*(int *)&(this->OnGeneratePinnedRow).field_0x10 == 0) {
      plVar11 = (longlong *)0x0;
    }
    else {
      plVar11 = *(longlong **)&(this->OnGeneratePinnedRow).field_0x8;
    }
    local_930.Object = pSVar4;
    local_930.SharedReferenceCount.ReferenceController = pTVar3;
    (**(code **)(*plVar11 + 0x60))(plVar11,__return_storage_ptr__,&local_930,&local_920);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_8f0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_918);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
  }
  return __return_storage_ptr__;
}

// GenerateNewWidget @ 146bab4d0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<ITableRow,1> * __thiscall
SListView<TSharedPtr<FTranslationPickerTextItem,1>_>::GenerateNewWidget
          (SListView<TSharedPtr<FTranslationPickerTextItem,1>_> *this,
          TSharedRef<ITableRow,1> *__return_storage_ptr__,
          TSharedPtr<FTranslationPickerTextItem,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  SWidget *pSVar2;
  TReferenceControllerBase<1> *pTVar3;
  SListView<TSharedPtr<FTranslationPickerTextItem,1>_> *pSVar4;
  char cVar5;
  TSharedRef<SWidget,1> *pTVar6;
  FArguments *pFVar7;
  FArguments *pFVar8;
  FText *pFVar9;
  TSharedRef<STextBlock,1> *pTVar10;
  TSlateDecl<STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FTranslationPickerTextItem,1>_>,1>_&&>_>
  *this_00;
  longlong *plVar11;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res20 [2];
  TSharedRef<STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>,1> local_948;
  TSharedRef<SListView<TSharedPtr<FTranslationPickerTextItem,1>_>,1> local_938;
  T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FTranslationPickerTextItem,1>_>,1>_&&> local_928;
  TReferenceControllerBase<1> *local_920;
  FName local_918;
  FReadAccessScope local_910;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_8f8;
  TAttribute<FText> local_8e0;
  TSharedRef<STextBlock,1> local_8b0;
  TSlateDecl<STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FTranslationPickerTextItem,1>_>,1>_&&>_>
  local_8a0;
  FArguments local_888;
  FArguments local_590;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnGenerateRow,
             &local_910);
  if (((*(int *)&(this->OnGenerateRow).field_0x10 == 0) ||
      (plVar11 = *(longlong **)&(this->OnGenerateRow).field_0x8, plVar11 == (longlong *)0x0)) ||
     (cVar5 = (**(code **)(*plVar11 + 0x38))(), cVar5 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_910);
    pFVar7 = STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>::FArguments::FArguments
                       (&local_888);
    pFVar8 = STextBlock::FArguments::FArguments(&local_590);
    pFVar9 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)&local_910,L"SListView",L"OnGenerateWidgetNotAssignedMessage",
                        L"OnGenerateWidget() not assigned.");
    FText::FText(&local_8e0.Value,pFVar9);
    local_8e0.bIsSet = true;
    local_8e0.Getter._16_8_ = 0;
    local_8e0.Getter._0_8_ = 0;
    local_8e0.Getter._8_8_ = 0;
    pFVar8 = STextBlock::FArguments::Text(pFVar8,&local_8e0);
    FLLMScope::FLLMScope(local_res20,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_918 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope((FMemScope *)&local_948,&local_918,true);
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
              (&local_8f8,"STextBlock",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\SListView.h"
               ,0x6ad,local_res8);
    FMemScope::~FMemScope((FMemScope *)&local_948);
    FLLMScope::~FLLMScope(local_res20);
    pTVar10 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                        (&local_8f8,&local_8b0,pFVar8);
    pTVar1 = (pTVar10->SharedReferenceCount).ReferenceController;
    local_948.Object = (STableRow<TSharedPtr<FTranslationPickerTextItem,1>_> *)pTVar10->Object;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar3 = (pFVar7->_Content).Widget.SharedReferenceCount.ReferenceController;
    (pFVar7->_Content).Widget.Object = (SWidget *)local_948.Object;
    (pFVar7->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar1;
    local_948.SharedReferenceCount.ReferenceController = pTVar1;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    pTVar6 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&this->_padding_,
                        (TSharedRef<SWidget,1> *)&local_948);
    local_938.Object = (SListView<TSharedPtr<FTranslationPickerTextItem,1>_> *)pTVar6->Object;
    local_938.SharedReferenceCount.ReferenceController =
         (pTVar6->SharedReferenceCount).ReferenceController;
    if (local_938.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_938.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_938.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_948.SharedReferenceCount.ReferenceController);
    local_928.Arg0 = &local_938;
    this_00 = MakeTDecl<STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FTranslationPickerTextItem,1>_>,1>_&&>_>
                        (&local_8a0,"STableRow<ItemType>",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\SListView.h"
                         ,0x6aa,&local_928);
    TSlateDecl<STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FTranslationPickerTextItem,1>_>,1>_&&>_>
    ::operator<<=(this_00,&local_948,pFVar7);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_8a0._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_938.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_8b0.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_8f8._Widget.SharedReferenceCount.ReferenceController);
    if ((ITextData *)local_910.DestructionSentinel._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_910.DestructionSentinel._0_8_ + 0x10))();
    }
    STextBlock::FArguments::~FArguments(&local_590);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_888._Content.Widget.SharedReferenceCount.ReferenceController);
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_888._Padding.Getter);
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_888._OnDrop);
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_888._OnDragLeave);
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_888._OnDragEnter);
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_888._OnDragDetected);
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_888._OnPaintDropIndicator);
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_888._OnAcceptDrop);
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_888._OnCanAcceptDrop);
    FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_888);
    __return_storage_ptr__->Object = (ITableRow *)local_948.Object;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         local_948.SharedReferenceCount.ReferenceController;
    if (local_948.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_948.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_948.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_948.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_910);
    pTVar6 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&this->_padding_,
                        (TSharedRef<SWidget,1> *)&local_938);
    pTVar1 = (pTVar6->SharedReferenceCount).ReferenceController;
    pSVar2 = pTVar6->Object;
    if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_938.SharedReferenceCount.ReferenceController);
    }
    else {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_938.SharedReferenceCount.ReferenceController);
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
    pSVar4 = (SListView<TSharedPtr<FTranslationPickerTextItem,1>_> *)param_1->Object;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_928.Arg0 = (TSharedRef<SListView<TSharedPtr<FTranslationPickerTextItem,1>_>,1> *)pSVar2;
    local_920 = pTVar1;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnGenerateRow,
               (FReadAccessScope *)&local_8f8);
    if (*(int *)&(this->OnGenerateRow).field_0x10 == 0) {
      plVar11 = (longlong *)0x0;
    }
    else {
      plVar11 = *(longlong **)&(this->OnGenerateRow).field_0x8;
    }
    local_938.Object = pSVar4;
    local_938.SharedReferenceCount.ReferenceController = pTVar3;
    (**(code **)(*plVar11 + 0x60))(plVar11,__return_storage_ptr__,&local_938,&local_928);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_8f8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_920);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
  }
  return __return_storage_ptr__;
}

// GenerateWidgetForItem @ 146bab8e0

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall
SListView<TSharedPtr<FTranslationPickerTextItem,1>_>::GenerateWidgetForItem
          (SListView<TSharedPtr<FTranslationPickerTextItem,1>_> *this,
          TSharedPtr<FTranslationPickerTextItem,1> *param_1,int param_2,int param_3,float param_4)

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
  TSharedPtr<FTranslationPickerTextItem_const_,1> local_158;
  SWidget *local_148;
  TReferenceControllerBase<1> *local_140;
  undefined8 local_138;
  FSharedReferencer<1> local_130;
  TSharedRef<ITableRow,1> local_128;
  TSharedRef<ITableRow,1> local_118;
  FTranslationPickerTextItem *local_108;
  TReferenceControllerBase<1> *local_100;
  FTranslationPickerTextItem *local_f8;
  TReferenceControllerBase<1> *local_f0;
  TSharedRef<ITableRow,1> local_e8;
  TSharedPtr<FTranslationPickerTextItem,1> local_d8;
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
  if (param_1->Object == (FTranslationPickerTextItem *)0x0) {
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
  pTVar7 = TMapBase<TSharedPtr<FTranslationPickerTextItem,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<FTranslationPickerTextItem,1>,TSharedRef<ITableRow,1>,0>_>
           ::Find((TMapBase<TSharedPtr<FTranslationPickerTextItem,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<FTranslationPickerTextItem,1>,TSharedRef<ITableRow,1>,0>_>
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
          goto LAB_146babaf3;
        }
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_88);
      goto LAB_146babaf3;
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
LAB_146babaf3:
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

// GetDefaultAccessibleText @ 146bac480

/* WARNING: Enum "Type": Some values do not have unique names */

TOptional<FText> * __thiscall
SListView<TSharedPtr<FTranslationPickerTextItem,1>_>::GetDefaultAccessibleText
          (SListView<TSharedPtr<FTranslationPickerTextItem,1>_> *this,
          TOptional<FText> *__return_storage_ptr__,EAccessibleType param_1)

{
  code *pcVar1;
  bool bVar2;
  FText *pFVar3;
  TOptional<FText> *pTVar4;
  FText local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_struct_TOptional<FText>___cdecl_SListView<TSharedPtr<FTranslationPickerTextItem,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_struct_TOptional<FText>___cdecl_SListView<TSharedPtr<FTranslationPickerTextItem,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_struct_TOptional<FText>___cdecl_SListView<TSharedPtr<FTranslationPickerTextItem,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FString::FString(&`public:_virtual_struct_TOptional<FText>___cdecl_SListView<TSharedPtr<FTranslationPickerTextItem,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
                          ::__l2::Name,L"List");
      atexit(`SListView<TSharedPtr<FTranslationPickerTextItem,1>_>::GetDefaultAccessibleText'::__l2
             ::_dynamic_atexit_destructor_for__Name__);
      _Init_thread_footer(&`public:_virtual_struct_TOptional<FText>___cdecl_SListView<TSharedPtr<FTranslationPickerTextItem,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pFVar3 = FText::FromString(&local_18,
                             &`public:_virtual_struct_TOptional<FText>___cdecl_SListView<TSharedPtr<FTranslationPickerTextItem,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
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

// GetNumItemsBeingObserved @ 146baee50

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
SListView<TSharedPtr<FTranslationPickerTextItem,1>_>::GetNumItemsBeingObserved
          (SListView<TSharedPtr<FTranslationPickerTextItem,1>_> *this)

{
  IItemsSource<TSharedPtr<FTranslationPickerTextItem,1>_> *pIVar1;
  longlong lVar2;
  undefined1 local_18 [24];
  
  pIVar1 = (this->ViewSource).Ptr;
  if (pIVar1 != (IItemsSource<TSharedPtr<FTranslationPickerTextItem,1>_> *)0x0) {
    lVar2 = (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_18);
    return (int)*(undefined8 *)(lVar2 + 8);
  }
  return 0;
}

// GetReferencerName @ 146bafb50

/* WARNING: Enum "Type": Some values do not have unique names */

FString * __thiscall
SListView<TSharedPtr<FTranslationPickerTextItem,1>_>::GetReferencerName
          (SListView<TSharedPtr<FTranslationPickerTextItem,1>_> *this,
          FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"SListView");
  return __return_storage_ptr__;
}

// GetSelectedItems @ 146bafbd0

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<TSharedPtr<FTranslationPickerTextItem,1>,TSizedDefaultAllocator<32>_> * __thiscall
SListView<TSharedPtr<FTranslationPickerTextItem,1>_>::GetSelectedItems
          (SListView<TSharedPtr<FTranslationPickerTextItem,1>_> *this,
          TArray<TSharedPtr<FTranslationPickerTextItem,1>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  bool bVar7;
  TArray<TSharedPtr<FTranslationPickerTextItem,1>,TSizedDefaultAllocator<32>_> *pTVar8;
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
  DestructItems<TSharedPtr<FTranslationPickerTextItem,1>,int>
            ((TSharedPtr<FTranslationPickerTextItem,1> *)0x0,0);
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
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_146bafcc1;
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
LAB_146bafcc1:
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
        pTVar8 = (TArray<TSharedPtr<FTranslationPickerTextItem,1>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar6)();
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

// GetTableViewMode @ 146bb03b0

/* WARNING: Enum "Type": Some values do not have unique names */

Type __thiscall
SListView<TSharedPtr<FTranslationPickerTextItem,1>_>::GetTableViewMode
          (SListView<TSharedPtr<FTranslationPickerTextItem,1>_> *this)

{
  return this[-1].PinnedWidgetGenerator.ItemsToBeCleanedUp.ArrayNum;
}

// NavigationSelect @ 146bb4660

/* WARNING: Removing unreachable block (ram,0x000146bb46c9) */
/* WARNING: Removing unreachable block (ram,0x000146bb46ee) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SListView<TSharedPtr<FTranslationPickerTextItem,1>_>::NavigationSelect
          (SListView<TSharedPtr<FTranslationPickerTextItem,1>_> *this,
          TSharedPtr<FTranslationPickerTextItem,1> *param_1,FInputEvent *param_2)

{
  FModifierKeysState *pFVar1;
  undefined1 *puVar2;
  TSet<TSharedPtr<FTranslationPickerTextItem,1>,DefaultKeyFuncs<TSharedPtr<FTranslationPickerTextItem,1>,0>,FDefaultSetAllocator>
  *this_00;
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
  TOptional<TSharedPtr<FTranslationPickerTextItem,1>_>_u_0 local_98;
  FTranslationPickerTextItem *local_88;
  TReferenceControllerBase<1> *pTStack_80;
  TSharedPtr<FTranslationPickerTextItem,1> local_78;
  FTranslationPickerTextItem *local_68;
  FSharedReferencer<1> FStack_60;
  FTranslationPickerTextItem *local_58;
  FSharedReferencer<1> FStack_50;
  FTranslationPickerTextItem *local_48;
  FSharedReferencer<1> FStack_40;
  
  Private_FindNextSelectableOrNavigable
            (this,(TOptional<TSharedPtr<FTranslationPickerTextItem,1>_> *)&local_98.TypedValue,
             param_1);
  uVar13 = local_98.TypedValue.Object;
  if (local_98.TypedValue.Object == (FTranslationPickerTextItem *)0xffffffffffffffff) {
    return;
  }
  pTVar10 = TAttribute<enum_ESelectionMode::Type>::Get(&this->_padding_);
  TVar3 = *pTVar10;
  if (TVar3 == None) goto LAB_146bb4a2d;
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
  (this->SelectorItem).Object = (FTranslationPickerTextItem *)uVar13;
  (this->SelectorItem).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)local_98.TypedValue.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_80);
  uVar13 = local_98.TypedValue.Object;
  uVar4 = param_2->UserIndex;
  if ((local_98.TypedValue.Object == (FTranslationPickerTextItem *)0xffffffffffffffff) &&
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
  if (*(char *)((longlong)&this->_padding_ + 3) == '\0') goto LAB_146bb4a2d;
  if (TVar3 == Multi) {
    uVar9 = pFVar1->bIsRightShiftDown;
    uVar12 = pFVar1->bIsLeftShiftDown;
    if ((uVar12 == 0) && (uVar9 == 0)) {
      if (pFVar1->bIsLeftControlDown == 0 && pFVar1->bIsRightControlDown == 0) goto LAB_146bb47d7;
    }
    else if ((uVar12 != 0) || (uVar9 != 0)) {
      plVar14 = &this->_padding_;
      if (pFVar1->bIsLeftControlDown == 0 && pFVar1->bIsRightControlDown == 0) {
        (**(code **)(*plVar14 + 0x30))(plVar14);
      }
      pcVar7 = *(code **)(*plVar14 + 0x38);
      if (((FTranslationPickerTextItem *)uVar13 == (FTranslationPickerTextItem *)0xffffffffffffffff)
         && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
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
      goto LAB_146bb4a2d;
    }
    plVar14 = &this->_padding_;
    pcVar7 = *(code **)(*plVar14 + 0x28);
    if (((FTranslationPickerTextItem *)uVar13 == (FTranslationPickerTextItem *)0xffffffffffffffff)
       && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
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
LAB_146bb47d7:
    if (((FTranslationPickerTextItem *)uVar13 == (FTranslationPickerTextItem *)0xffffffffffffffff)
       && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
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
      TSet<TSharedPtr<FTranslationPickerTextItem,1>,DefaultKeyFuncs<TSharedPtr<FTranslationPickerTextItem,1>,0>,FDefaultSetAllocator>
      ::UnhashElements(this_00);
    }
    TSparseArray<TSparseSetElement<TSharedPtr<FTranslationPickerTextItem,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
      TSet<TSharedPtr<FTranslationPickerTextItem,1>,DefaultKeyFuncs<TSharedPtr<FTranslationPickerTextItem,1>,0>,FDefaultSetAllocator>
      ::Rehash(this_00);
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
LAB_146bb4a2d:
  if ((FTranslationPickerTextItem *)uVar13 != (FTranslationPickerTextItem *)0xffffffffffffffff) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)
               local_98.TypedValue.SharedReferenceCount.ReferenceController);
  }
  return;
}

// NavigationSelect @ 146bb4a70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SListView<TSharedPtr<FTranslationPickerTextItem,1>_>::NavigationSelect
          (SListView<TSharedPtr<FTranslationPickerTextItem,1>_> *this,
          TSharedPtr<FTranslationPickerTextItem,1> *param_1,FNavigationEvent *param_2)

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

// NotifyFinishedScrolling @ 146bb4b10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SListView<TSharedPtr<FTranslationPickerTextItem,1>_>::NotifyFinishedScrolling
          (SListView<TSharedPtr<FTranslationPickerTextItem,1>_> *this)

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

// NotifyItemScrolledIntoView @ 146bb4b60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SListView<TSharedPtr<FTranslationPickerTextItem,1>_>::NotifyItemScrolledIntoView
          (SListView<TSharedPtr<FTranslationPickerTextItem,1>_> *this)

{
  FSharedReferencer<1> *this_00;
  EUINavigation EVar1;
  FTranslationPickerTextItem *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  TSharedRef<ITableRow,1> *pTVar7;
  undefined8 *puVar8;
  TReferenceControllerBase<1> *pTVar9;
  ITableRow *local_d8;
  TReferenceControllerBase<1> *local_d0;
  TSharedPtr<FTranslationPickerTextItem_const_,1> local_c8;
  TSharedPtr<SWidget,1> local_b8;
  undefined8 local_a8;
  FSharedReferencer<1> FStack_a0;
  FTranslationPickerTextItem *local_98;
  TReferenceControllerBase<1> *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  FTranslationPickerTextItem *local_68;
  TReferenceControllerBase<1> *pTStack_60;
  undefined1 local_58 [8];
  TReferenceControllerBase<1> *local_50;
  FReadAccessScope local_48;
  
  pFVar2 = (this->ItemToNotifyWhenInView).Object;
  if (pFVar2 != (FTranslationPickerTextItem *)0x0) {
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
    pTVar7 = TMapBase<TSharedPtr<FTranslationPickerTextItem,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<FTranslationPickerTextItem,1>,TSharedRef<ITableRow,1>,0>_>
             ::Find((TMapBase<TSharedPtr<FTranslationPickerTextItem,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<FTranslationPickerTextItem,1>,TSharedRef<ITableRow,1>,0>_>
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
    if (&this->ItemToNotifyWhenInView != (TSharedPtr<FTranslationPickerTextItem,1> *)&local_a8) {
      (this->ItemToNotifyWhenInView).Object = (FTranslationPickerTextItem *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(this_00,&FStack_a0);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_a0.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_d0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  return;
}

// OnKeyDown @ 146bb5a00

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SListView<TSharedPtr<FTranslationPickerTextItem,1>_>::OnKeyDown
          (SListView<TSharedPtr<FTranslationPickerTextItem,1>_> *this,FReply *__return_storage_ptr__
          ,FGeometry *param_1,FKeyEvent *param_2)

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

// OnKeyDown_Internal @ 146bb5b20

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SListView<TSharedPtr<FTranslationPickerTextItem,1>_>::OnKeyDown_Internal
          (SListView<TSharedPtr<FTranslationPickerTextItem,1>_> *this,FReply *__return_storage_ptr__
          ,FGeometry *param_1,FKeyEvent *param_2)

{
  IItemsSource<TSharedPtr<FTranslationPickerTextItem,1>_> *pIVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  longlong *plVar8;
  FReply *pFVar9;
  TSharedPtr<FTranslationPickerTextItem,1> *pTVar10;
  TSharedPtr<FTranslationPickerTextItem,1> *pTVar11;
  Type *pTVar12;
  TSharedRef<ITableRow,1> *pTVar13;
  undefined8 *puVar14;
  TReferenceControllerBase<1> *pTVar15;
  ITableRow *pIVar16;
  uint uVar17;
  FTranslationPickerTextItem *pFVar18;
  int iVar19;
  TReferenceControllerBase<1> *pTVar20;
  TReferenceControllerBase<1> *pTVar21;
  int iVar22;
  longlong lVar23;
  bool bVar24;
  float fVar25;
  undefined4 local_res8;
  undefined4 uStackX_c;
  TArrayView<TSharedPtr<FTranslationPickerTextItem,1>_const_,int> local_100;
  FTranslationPickerTextItem *local_e8;
  TReferenceControllerBase<1> *pTStack_e0;
  TSharedPtr<FTranslationPickerTextItem_const_,1> local_d8;
  FTranslationPickerTextItem *local_c8;
  TReferenceControllerBase<1> *local_c0;
  longlong local_b8;
  undefined4 uStack_b0;
  undefined8 local_a8;
  TReferenceControllerBase<1> *local_a0;
  undefined8 local_98;
  TReferenceControllerBase<1> *local_90;
  undefined8 local_88;
  longlong local_80;
  FTranslationPickerTextItem *local_78;
  TReferenceControllerBase<1> *pTStack_70;
  FTranslationPickerTextItem *local_68;
  TReferenceControllerBase<1> *pTStack_60;
  TSharedPtr<FTranslationPickerTextItem,1> local_58 [2];
  
  pTVar21 = (TReferenceControllerBase<1> *)0x0;
  pIVar1 = (this->ViewSource).Ptr;
  iVar22 = 0;
  if (pIVar1 == (IItemsSource<TSharedPtr<FTranslationPickerTextItem,1>_> *)0x0) {
    local_b8 = 0;
    plVar8 = &local_b8;
    uStack_b0 = 0;
  }
  else {
    plVar8 = (longlong *)(**(code **)((longlong)*pIVar1 + 8))();
  }
  local_100.DataPtr = (TSharedPtr<FTranslationPickerTextItem,1> *)*plVar8;
  local_100._8_8_ = plVar8[1];
  iVar19 = (int)plVar8[1];
  if ((iVar19 < 1) || ((param_2->_padding_ & 0x30) != 0)) {
LAB_146bb622f:
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
code_r0x000146bb5c00:
          pcVar3 = (code *)swi(3);
          pFVar9 = (FReply *)(*pcVar3)();
          return pFVar9;
        }
      }
LAB_146bb5c0b:
      pFVar18 = pTVar10->Object;
      pTVar20 = (pTVar10->SharedReferenceCount).ReferenceController;
LAB_146bb5e30:
      if (pTVar20 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar20->SharedReferenceCount = (atomic<int>)((int)pTVar20->SharedReferenceCount + 1);
        UNLOCK();
      }
LAB_146bb5e3b:
      local_res8 = 1;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      if (pFVar18 == (FTranslationPickerTextItem *)0x0) goto LAB_146bb5e80;
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
        pTVar10 = TArrayView<TSharedPtr<FTranslationPickerTextItem,1>_const_,int>::Last
                            (&local_100,0);
        pTVar20 = (pTVar10->SharedReferenceCount).ReferenceController;
        pFVar18 = pTVar10->Object;
        pTVar10 = local_100.DataPtr;
        if (pTVar20 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar20->SharedReferenceCount = (atomic<int>)((int)pTVar20->SharedReferenceCount + 1);
          UNLOCK();
        }
        goto LAB_146bb5e3b;
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
        if (pFVar18 != (FTranslationPickerTextItem *)0x0) {
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
              goto LAB_146bb5cd5;
            }
          }
          iVar22 = -1;
LAB_146bb5cd5:
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
            if (bVar24) goto code_r0x000146bb5c00;
          }
          goto LAB_146bb5c0b;
        }
        pTVar11 = TArrayView<TSharedPtr<FTranslationPickerTextItem,1>_const_,int>::operator[]
                            (&local_100,iVar22 - iVar6);
LAB_146bb5e29:
        pFVar18 = pTVar11->Object;
        pTVar20 = (pTVar11->SharedReferenceCount).ReferenceController;
        goto LAB_146bb5e30;
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
        if (pFVar18 != (FTranslationPickerTextItem *)0x0) {
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
              goto LAB_146bb5dd5;
            }
          }
          iVar22 = -1;
LAB_146bb5dd5:
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar20);
        }
        fVar25 = (float)(**(code **)(this->_padding_ + 0x268))(this);
        iVar6 = (**(code **)(this->_padding_ + 0x270))(this);
        iVar6 = (int)fVar25 - (int)fVar25 % iVar6;
        if (iVar22 < iVar19 - iVar6) {
          pTVar11 = TArrayView<TSharedPtr<FTranslationPickerTextItem,1>_const_,int>::operator[]
                              (&local_100,iVar6 + iVar22);
        }
        else {
          pTVar11 = TArrayView<TSharedPtr<FTranslationPickerTextItem,1>_const_,int>::Last
                              (&local_100,0);
        }
        goto LAB_146bb5e29;
      }
LAB_146bb5e80:
      if ((this->bHandleSpacebarSelection == false) ||
         ((this->SelectorItem).Object == (FTranslationPickerTextItem *)0x0)) {
        pTVar15 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_c,local_res8);
LAB_146bb5ec0:
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
        if (FVar2 != EKeys::SpaceBar.KeyName) goto LAB_146bb5ec0;
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
            goto LAB_146bb5fd2;
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
LAB_146bb5fd2:
          (**(code **)(lVar23 + 0x40))(&this->_padding_,0);
          local_res8 = 1;
        }
        TSharedPtr<FTranslationPickerTextItem,1>::operator=
                  (&this->RangeSelectionStart,&this->SelectorItem);
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
        pTVar13 = TMapBase<TSharedPtr<FTranslationPickerTextItem,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<FTranslationPickerTextItem,1>,TSharedRef<ITableRow,1>,0>_>
                  ::Find((TMapBase<TSharedPtr<FTranslationPickerTextItem,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<FTranslationPickerTextItem,1>,TSharedRef<ITableRow,1>,0>_>
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
             *pTVar12 != Multi)) goto LAB_146bb613b;
          bVar24 = true;
        }
        else {
          pTVar21 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_c,local_res8);
LAB_146bb613b:
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
          goto LAB_146bb60d4;
        }
      }
      if ((char)local_res8 == '\0') {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar20)
        ;
        goto LAB_146bb622f;
      }
    }
LAB_146bb60d4:
    FReply::FReply(__return_storage_ptr__,true);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar20);
  }
  return __return_storage_ptr__;
}

// OnMouseButtonDown @ 146bb6420

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SListView<TSharedPtr<FTranslationPickerTextItem,1>_>::OnMouseButtonDown
          (SListView<TSharedPtr<FTranslationPickerTextItem,1>_> *this,FReply *__return_storage_ptr__
          ,FGeometry *param_1,FPointerEvent *param_2)

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
LAB_146bb6492:
    pTVar6 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar5 = TAttribute<enum_ESelectionMode::Type>::Get(&this->_padding_);
    if (*pTVar5 == None) goto LAB_146bb6492;
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
      goto LAB_146bb649a;
    }
  }
  bVar3 = false;
LAB_146bb649a:
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

// OnMouseButtonUp @ 146bb6960

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SListView<TSharedPtr<FTranslationPickerTextItem,1>_>::OnMouseButtonUp
          (SListView<TSharedPtr<FTranslationPickerTextItem,1>_> *this,FReply *__return_storage_ptr__
          ,FGeometry *param_1,FPointerEvent *param_2)

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
LAB_146bb69de:
    pTVar7 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar5 = TAttribute<enum_ESelectionMode::Type>::Get(&this->_padding_);
    if (*pTVar5 == None) goto LAB_146bb69de;
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
        goto LAB_146bb69e6;
      }
    }
  }
  bVar3 = false;
LAB_146bb69e6:
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

// OnNavigation @ 146bb7260

/* WARNING: Removing unreachable block (ram,0x000146bb74b2) */
/* WARNING: Removing unreachable block (ram,0x000146bb74d7) */
/* WARNING: Removing unreachable block (ram,0x000146bb7542) */
/* WARNING: Enum "Type": Some values do not have unique names */

FNavigationReply * __thiscall
SListView<TSharedPtr<FTranslationPickerTextItem,1>_>::OnNavigation
          (SListView<TSharedPtr<FTranslationPickerTextItem,1>_> *this,
          FNavigationReply *__return_storage_ptr__,FGeometry *param_1,FNavigationEvent *param_2)

{
  EUINavigation EVar1;
  IItemsSource<TSharedPtr<FTranslationPickerTextItem,1>_> *pIVar2;
  FTranslationPickerTextItem *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  longlong lVar6;
  bool bVar7;
  int iVar8;
  longlong *plVar9;
  FNavigationReply *pFVar10;
  TSharedPtr<FTranslationPickerTextItem,1> *pTVar11;
  int iVar12;
  TSharedPtr<FTranslationPickerTextItem,1> *pTVar13;
  int iVar14;
  int iVar15;
  TOptional<TSharedPtr<FTranslationPickerTextItem,1>_>_u_0 local_88;
  TArrayView<TSharedPtr<FTranslationPickerTextItem,1>_const_,int> local_78;
  SWidget *local_68;
  TReferenceControllerBase<1> *pTStack_60;
  undefined1 local_58 [32];
  
  this->NavigationTypeOnScrollIntoView = Invalid;
  pIVar2 = (this->ViewSource).Ptr;
  if (((pIVar2 == (IItemsSource<TSharedPtr<FTranslationPickerTextItem,1>_> *)0x0) ||
      (this->bHandleDirectionalNavigation == false)) ||
     ((this->bHandleGamepadEvents == false && (param_2->NavigationGenesis == Controller))))
  goto LAB_146bb754c;
  plVar9 = (longlong *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_58);
  pTVar11 = (TSharedPtr<FTranslationPickerTextItem,1> *)*plVar9;
  lVar6 = plVar9[1];
  local_78.DataPtr = pTVar11;
  local_78._8_8_ = lVar6;
  iVar8 = (**(code **)(this->_padding_ + 0x270))(this);
  pFVar3 = (this->SelectorItem).Object;
  iVar14 = (int)lVar6;
  if (pFVar3 == (FTranslationPickerTextItem *)0x0) {
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
        goto LAB_146bb734b;
      }
    }
    iVar12 = -1;
LAB_146bb734b:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  }
  iVar15 = *(int *)((longlong)&this->_padding_ + 4);
  EVar1 = param_2->NavigationType;
  if (iVar15 == 1) {
    if (EVar1 != Up) {
      if (EVar1 != Down) goto LAB_146bb754c;
      goto LAB_146bb7399;
    }
LAB_146bb7387:
    iVar15 = iVar12 - iVar8;
LAB_146bb7450:
    if ((iVar15 < 0) || (iVar14 <= iVar15)) goto LAB_146bb754c;
  }
  else {
    if (iVar15 != 0) goto LAB_146bb754c;
    if (EVar1 == Left) goto LAB_146bb7387;
    if (EVar1 != Right) goto LAB_146bb754c;
LAB_146bb7399:
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
      goto LAB_146bb7450;
    }
  }
  if (*(char *)((longlong)&this->_padding_ + 1) != '\0') {
    pTVar11 = TArrayView<TSharedPtr<FTranslationPickerTextItem,1>_const_,int>::operator[]
                        (&local_78,iVar15);
    Private_FindNextSelectableOrNavigableWithIndexAndDirection
              (this,(TOptional<TSharedPtr<FTranslationPickerTextItem,1>_> *)&local_88.TypedValue,
               pTVar11,iVar15,iVar12 <= iVar15);
    if (local_88.TypedValue.Object != (FTranslationPickerTextItem *)0xffffffffffffffff) {
      (**(code **)(this->_padding_ + 0x2e0))(this,&local_88,param_2);
      (__return_storage_ptr__->EventHandler).Object = (SWidget *)0x0;
      (__return_storage_ptr__->EventHandler).SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      (__return_storage_ptr__->FocusRecipient).Object = (SWidget *)0x0;
      (__return_storage_ptr__->FocusRecipient).SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      *(undefined8 *)&(__return_storage_ptr__->FocusDelegate).field_0x10 = 0;
      *(undefined8 *)&__return_storage_ptr__->FocusDelegate = 0;
      *(undefined8 *)&(__return_storage_ptr__->FocusDelegate).field_0x8 = 0;
      __return_storage_ptr__->BoundaryRule = Explicit;
      local_68 = (__return_storage_ptr__->FocusRecipient).Object;
      pTStack_60 = (__return_storage_ptr__->FocusRecipient).SharedReferenceCount.ReferenceController
      ;
      (__return_storage_ptr__->FocusRecipient).Object = (SWidget *)0x0;
      (__return_storage_ptr__->FocusRecipient).SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_60);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      if (local_88.TypedValue.Object == (FTranslationPickerTextItem *)0xffffffffffffffff) {
        return __return_storage_ptr__;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)
                 local_88.TypedValue.SharedReferenceCount.ReferenceController);
      return __return_storage_ptr__;
    }
  }
LAB_146bb754c:
  SWidget::OnNavigation((SWidget *)this,__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// Private_ClearHighlightedItems @ 146bb9a00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SListView<TSharedPtr<FTranslationPickerTextItem,1>_>::Private_ClearHighlightedItems
          (SListView<TSharedPtr<FTranslationPickerTextItem,1>_> *this)

{
  int *piVar1;
  longlong *this_00;
  int iVar2;
  bool bVar3;
  
  this_00 = &this->_padding_;
  bVar3 = 1 < (int)this->_padding_;
  if (!bVar3) {
    TSet<TSharedPtr<FTranslationPickerTextItem,1>,DefaultKeyFuncs<TSharedPtr<FTranslationPickerTextItem,1>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TSharedPtr<FTranslationPickerTextItem,1>,DefaultKeyFuncs<TSharedPtr<FTranslationPickerTextItem,1>,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  TSparseArray<TSparseSetElement<TSharedPtr<FTranslationPickerTextItem,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TSharedPtr<FTranslationPickerTextItem,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
    TSet<TSharedPtr<FTranslationPickerTextItem,1>,DefaultKeyFuncs<TSharedPtr<FTranslationPickerTextItem,1>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TSharedPtr<FTranslationPickerTextItem,1>,DefaultKeyFuncs<TSharedPtr<FTranslationPickerTextItem,1>,0>,FDefaultSetAllocator>
              *)this_00);
  }
  return;
}

// Private_ClearSelection @ 146bb9ac0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SListView<TSharedPtr<FTranslationPickerTextItem,1>_>::Private_ClearSelection
          (SListView<TSharedPtr<FTranslationPickerTextItem,1>_> *this)

{
  int *piVar1;
  longlong *this_00;
  int iVar2;
  bool bVar3;
  
  this_00 = &this->_padding_;
  bVar3 = 1 < (int)this->_padding_;
  if (!bVar3) {
    TSet<TSharedPtr<FTranslationPickerTextItem,1>,DefaultKeyFuncs<TSharedPtr<FTranslationPickerTextItem,1>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TSharedPtr<FTranslationPickerTextItem,1>,DefaultKeyFuncs<TSharedPtr<FTranslationPickerTextItem,1>,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  TSparseArray<TSparseSetElement<TSharedPtr<FTranslationPickerTextItem,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TSharedPtr<FTranslationPickerTextItem,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
    TSet<TSharedPtr<FTranslationPickerTextItem,1>,DefaultKeyFuncs<TSharedPtr<FTranslationPickerTextItem,1>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TSharedPtr<FTranslationPickerTextItem,1>,DefaultKeyFuncs<TSharedPtr<FTranslationPickerTextItem,1>,0>,FDefaultSetAllocator>
              *)this_00);
  }
  if (*(char *)((longlong)&this->_padding_ + 1) != '\0') {
    FInertialScrollManager::ClearScrollVelocity
              ((FInertialScrollManager *)&this[-1].HighlightedItems.Elements.field_0x18,false);
  }
  return;
}

// Private_DoesItemHaveChildren @ 146bb9ba0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
SListView<TSharedPtr<FTranslationPickerTextItem,1>_>::Private_DoesItemHaveChildren
          (SListView<TSharedPtr<FTranslationPickerTextItem,1>_> *this,int param_1)

{
  return false;
}

// Private_FindNextSelectableOrNavigable @ 146bb9bb0

/* WARNING: Enum "Type": Some values do not have unique names */

TOptional<TSharedPtr<FTranslationPickerTextItem,1>_> * __thiscall
SListView<TSharedPtr<FTranslationPickerTextItem,1>_>::Private_FindNextSelectableOrNavigable
          (SListView<TSharedPtr<FTranslationPickerTextItem,1>_> *this,
          TOptional<TSharedPtr<FTranslationPickerTextItem,1>_> *__return_storage_ptr__,
          TSharedPtr<FTranslationPickerTextItem,1> *param_1)

{
  TDelegate<bool___cdecl(TSharedPtr<FTranslationPickerTextItem,1>),FDefaultDelegateUserPolicy>
  *this_00;
  uint uVar1;
  IItemsSource<TSharedPtr<FTranslationPickerTextItem,1>_> *pIVar2;
  longlong lVar3;
  code *pcVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  longlong *plVar8;
  atomic<int> *paVar9;
  TOptional<TSharedPtr<FTranslationPickerTextItem,1>_> *pTVar10;
  uint uVar11;
  longlong *plVar12;
  int iVar13;
  FTranslationPickerTextItem *pFVar14;
  TReferenceControllerBase<1> *pTVar15;
  TReferenceControllerBase<1> *pTVar16;
  longlong lVar17;
  ulonglong uVar18;
  uint uVar19;
  TSharedPtr<FTranslationPickerTextItem,1> local_e0;
  longlong local_d0;
  undefined4 local_c8;
  FTranslationPickerTextItem *local_c0;
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
    bVar6 = TDelegate<bool___cdecl(TSharedPtr<FTranslationPickerTextItem,1>),FDefaultDelegateUserPolicy>
            ::Execute(this_00,&local_e0);
    if (!bVar6) {
      pIVar2 = (this->ViewSource).Ptr;
      if (pIVar2 == (IItemsSource<TSharedPtr<FTranslationPickerTextItem,1>_> *)0x0) {
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
        if ((FTranslationPickerTextItem *)*plVar12 == pFVar14) {
          lVar17 = (longlong)plVar12 - (longlong)plVar8 >> 4;
          goto LAB_146bb9cc9;
        }
      }
      lVar17 = 0xffffffff;
LAB_146bb9cc9:
      uVar19 = 1;
      if (*(int *)&(this->SelectedItems).Elements.field_0x8 -
          *(int *)&(this->SelectedItems).Elements.field_0x34 == 1) {
        TSet<TSharedPtr<FTranslationPickerTextItem,1>,DefaultKeyFuncs<TSharedPtr<FTranslationPickerTextItem,1>,0>,FDefaultSetAllocator>
        ::TIterator::TIterator(&local_70,&this->SelectedItems);
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
              goto LAB_146bb9d67;
            }
          }
          iVar13 = -1;
LAB_146bb9d67:
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
          pTVar10 = (TOptional<TSharedPtr<FTranslationPickerTextItem,1>_> *)(*pcVar4)();
          return pTVar10;
        }
        pTVar16 = (TReferenceControllerBase<1> *)plVar8[lVar17 * 2 + 1];
        pFVar14 = (FTranslationPickerTextItem *)plVar8[lVar17 * 2];
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
        if (cVar5 != '\0') goto LAB_146bb9ebf;
        uVar18 = (ulonglong)uVar1;
        pTVar15 = pTVar16;
      }
      (__return_storage_ptr__->field0_0x0).TypedValue.Object =
           (FTranslationPickerTextItem *)0xffffffffffffffff;
      (__return_storage_ptr__->field0_0x0).TypedValue.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      goto LAB_146bb9efe;
    }
  }
LAB_146bb9ebf:
  (__return_storage_ptr__->field0_0x0).TypedValue.Object = pFVar14;
  *(TReferenceControllerBase<1> **)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = pTVar16;
  if (pTVar16 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar16->SharedReferenceCount = (atomic<int>)((int)pTVar16->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar15 = pTVar16;
  if (((__return_storage_ptr__->field0_0x0).TypedValue.Object ==
       (FTranslationPickerTextItem *)0xffffffffffffffff) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        ), bVar6)) {
    pcVar4 = (code *)swi(3);
    pTVar10 = (TOptional<TSharedPtr<FTranslationPickerTextItem,1>_> *)(*pcVar4)();
    return pTVar10;
  }
LAB_146bb9efe:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
  return __return_storage_ptr__;
}

// Private_FindNextSelectableOrNavigableWithIndexAndDirection @ 146bb9f40

/* WARNING: Enum "Type": Some values do not have unique names */

TOptional<TSharedPtr<FTranslationPickerTextItem,1>_> * __thiscall
SListView<TSharedPtr<FTranslationPickerTextItem,1>_>::
Private_FindNextSelectableOrNavigableWithIndexAndDirection
          (SListView<TSharedPtr<FTranslationPickerTextItem,1>_> *this,
          TOptional<TSharedPtr<FTranslationPickerTextItem,1>_> *__return_storage_ptr__,
          TSharedPtr<FTranslationPickerTextItem,1> *param_1,int param_2,bool param_3)

{
  IItemsSource<TSharedPtr<FTranslationPickerTextItem,1>_> *pIVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  FTranslationPickerTextItem *pFVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  uint uVar8;
  longlong *plVar9;
  TOptional<TSharedPtr<FTranslationPickerTextItem,1>_> *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  FTranslationPickerTextItem *pFVar12;
  longlong local_88;
  undefined4 uStack_80;
  FTranslationPickerTextItem *local_78;
  TReferenceControllerBase<1> *pTStack_70;
  undefined1 local_68 [16];
  FReadAccessScope local_58;
  FReadAccessScope local_40;
  
  pTVar11 = (param_1->SharedReferenceCount).ReferenceController;
  pFVar12 = param_1->Object;
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
      if (pIVar1 == (IItemsSource<TSharedPtr<FTranslationPickerTextItem,1>_> *)0x0) {
        local_88 = 0;
        plVar9 = &local_88;
        uStack_80 = 0;
      }
      else {
        plVar9 = (longlong *)(**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_68);
      }
      pFVar4 = (FTranslationPickerTextItem *)*plVar9;
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
        if (cVar6 != '\0') goto LAB_146bba105;
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
            pTVar10 = (TOptional<TSharedPtr<FTranslationPickerTextItem,1>_> *)(*pcVar3)();
            return pTVar10;
          }
        }
        pTVar2 = (TReferenceControllerBase<1> *)(&pFVar4->_padding_)[(longlong)param_2 * 2];
        pFVar12 = (FTranslationPickerTextItem *)(&pFVar4->_padding_)[(longlong)param_2 * 2];
        if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11)
        ;
        pTVar11 = pTVar2;
      }
      (__return_storage_ptr__->field0_0x0).TypedValue.Object =
           (FTranslationPickerTextItem *)0xffffffffffffffff;
      (__return_storage_ptr__->field0_0x0).TypedValue.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      goto LAB_146bba141;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_58);
LAB_146bba105:
  (__return_storage_ptr__->field0_0x0).TypedValue.Object = pFVar12;
  *(TReferenceControllerBase<1> **)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = pTVar11;
  if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((__return_storage_ptr__->field0_0x0).TypedValue.Object ==
      (FTranslationPickerTextItem *)0xffffffffffffffff) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      pTVar10 = (TOptional<TSharedPtr<FTranslationPickerTextItem,1>_> *)(*pcVar3)();
      return pTVar10;
    }
  }
LAB_146bba141:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  return __return_storage_ptr__;
}

// Private_GetNestingDepth @ 146bba180

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
SListView<TSharedPtr<FTranslationPickerTextItem,1>_>::Private_GetNestingDepth
          (SListView<TSharedPtr<FTranslationPickerTextItem,1>_> *this,int param_1)

{
  return 0;
}

// Private_GetNumSelectedItems @ 146bba190

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
SListView<TSharedPtr<FTranslationPickerTextItem,1>_>::Private_GetNumSelectedItems
          (SListView<TSharedPtr<FTranslationPickerTextItem,1>_> *this)

{
  return (int)this->_padding_ - *(int *)((longlong)&this->_padding_ + 4);
}

// Private_GetOrientation @ 146bba1b0

/* WARNING: Enum "Type": Some values do not have unique names */

EOrientation __thiscall
SListView<TSharedPtr<FTranslationPickerTextItem,1>_>::Private_GetOrientation
          (SListView<TSharedPtr<FTranslationPickerTextItem,1>_> *this)

{
  return *(EOrientation *)&this[-1].HighlightedItems.field_0x4c;
}

// Private_GetSelectionMode @ 146bba1c0

/* WARNING: Enum "Type": Some values do not have unique names */

Type __thiscall
SListView<TSharedPtr<FTranslationPickerTextItem,1>_>::Private_GetSelectionMode
          (SListView<TSharedPtr<FTranslationPickerTextItem,1>_> *this)

{
  Type *pTVar1;
  
  pTVar1 = TAttribute<enum_ESelectionMode::Type>::Get(&this[-1].SelectorItem.SharedReferenceCount);
  return *pTVar1;
}

// Private_GetWiresNeededByDepth @ 146bba1e0

/* WARNING: Enum "Type": Some values do not have unique names */

TBitArray<FDefaultBitArrayAllocator> * __thiscall
SListView<TSharedPtr<FTranslationPickerTextItem,1>_>::Private_GetWiresNeededByDepth
          (SListView<TSharedPtr<FTranslationPickerTextItem,1>_> *this,int param_1)

{
  return &EmptyBitArray;
}

// Private_HasSelectorFocus @ 146bba1f0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
SListView<TSharedPtr<FTranslationPickerTextItem,1>_>::Private_HasSelectorFocus
          (SListView<TSharedPtr<FTranslationPickerTextItem,1>_> *this,
          TSharedPtr<FTranslationPickerTextItem,1> *param_1)

{
  return (FTranslationPickerTextItem *)this->_padding_ == param_1->Object;
}

// Private_IsItemExpanded @ 146bba210

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
SListView<TSharedPtr<FTranslationPickerTextItem,1>_>::Private_IsItemExpanded
          (SListView<TSharedPtr<FTranslationPickerTextItem,1>_> *this,
          TSharedPtr<FTranslationPickerTextItem,1> *param_1)

{
  return false;
}

// Private_IsItemHighlighted @ 146bba220

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
SListView<TSharedPtr<FTranslationPickerTextItem,1>_>::Private_IsItemHighlighted
          (SListView<TSharedPtr<FTranslationPickerTextItem,1>_> *this,
          TSharedPtr<FTranslationPickerTextItem,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TSharedPtr<FTranslationPickerTextItem,1> *pTVar2;
  TSharedPtr<FTranslationPickerTextItem_const_,1> local_18;
  
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
  pTVar2 = TSet<TSharedPtr<FTranslationPickerTextItem,1>,DefaultKeyFuncs<TSharedPtr<FTranslationPickerTextItem,1>,0>,FDefaultSetAllocator>
           ::Find((TSet<TSharedPtr<FTranslationPickerTextItem,1>,DefaultKeyFuncs<TSharedPtr<FTranslationPickerTextItem,1>,0>,FDefaultSetAllocator>
                   *)&this->_padding_,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return pTVar2 != (TSharedPtr<FTranslationPickerTextItem,1> *)0x0;
}

// Private_IsItemSelectableOrNavigable @ 146bba280

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
SListView<TSharedPtr<FTranslationPickerTextItem,1>_>::Private_IsItemSelectableOrNavigable
          (SListView<TSharedPtr<FTranslationPickerTextItem,1>_> *this,
          TSharedPtr<FTranslationPickerTextItem,1> *param_1)

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
      bVar2 = TDelegate<bool___cdecl(TSharedPtr<FTranslationPickerTextItem,1>),FDefaultDelegateUserPolicy>
              ::Execute((TDelegate<bool___cdecl(TSharedPtr<FTranslationPickerTextItem,1>),FDefaultDelegateUserPolicy>
                         *)&this->_padding_,(TSharedPtr<FTranslationPickerTextItem,1> *)&local_28);
      return bVar2;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return true;
}

// Private_IsItemSelected @ 146bba320

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
SListView<TSharedPtr<FTranslationPickerTextItem,1>_>::Private_IsItemSelected
          (SListView<TSharedPtr<FTranslationPickerTextItem,1>_> *this,
          TSharedPtr<FTranslationPickerTextItem,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TSharedPtr<FTranslationPickerTextItem,1> *pTVar2;
  TSharedPtr<FTranslationPickerTextItem_const_,1> local_18;
  
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
  pTVar2 = TSet<TSharedPtr<FTranslationPickerTextItem,1>,DefaultKeyFuncs<TSharedPtr<FTranslationPickerTextItem,1>,0>,FDefaultSetAllocator>
           ::Find((TSet<TSharedPtr<FTranslationPickerTextItem,1>,DefaultKeyFuncs<TSharedPtr<FTranslationPickerTextItem,1>,0>,FDefaultSetAllocator>
                   *)&this->_padding_,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return pTVar2 != (TSharedPtr<FTranslationPickerTextItem,1> *)0x0;
}

// Private_IsLastChild @ 146bba380

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
SListView<TSharedPtr<FTranslationPickerTextItem,1>_>::Private_IsLastChild
          (SListView<TSharedPtr<FTranslationPickerTextItem,1>_> *this,int param_1)

{
  return false;
}

// Private_IsPendingRefresh @ 146bba390

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
SListView<TSharedPtr<FTranslationPickerTextItem,1>_>::Private_IsPendingRefresh
          (SListView<TSharedPtr<FTranslationPickerTextItem,1>_> *this)

{
  bool bVar1;
  
  bVar1 = STableViewBase::IsPendingRefresh((STableViewBase *)&this[-1]._padding_);
  return bVar1;
}

// Private_ItemFromWidget @ 146bba3b0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FTranslationPickerTextItem,1> * __thiscall
SListView<TSharedPtr<FTranslationPickerTextItem,1>_>::Private_ItemFromWidget
          (SListView<TSharedPtr<FTranslationPickerTextItem,1>_> *this,ITableRow *param_1)

{
  TSharedPtr<FTranslationPickerTextItem,1> *pTVar1;
  
  pTVar1 = TMapBase<ITableRow_const_*,TSharedPtr<FTranslationPickerTextItem,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedPtr<FTranslationPickerTextItem,1>,0>_>
           ::Find((TMapBase<ITableRow_const_*,TSharedPtr<FTranslationPickerTextItem,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedPtr<FTranslationPickerTextItem,1>,0>_>
                   *)&this->_padding_,param_1);
  if (pTVar1 == (TSharedPtr<FTranslationPickerTextItem,1> *)0x0) {
    pTVar1 = TMapBase<ITableRow_const_*,TSharedPtr<FTranslationPickerTextItem,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedPtr<FTranslationPickerTextItem,1>,0>_>
             ::Find((TMapBase<ITableRow_const_*,TSharedPtr<FTranslationPickerTextItem,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedPtr<FTranslationPickerTextItem,1>,0>_>
                     *)&this->_padding_,param_1);
  }
  return pTVar1;
}

// Private_OnExpanderArrowShiftClicked @ 146bba3f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SListView<TSharedPtr<FTranslationPickerTextItem,1>_>::Private_OnExpanderArrowShiftClicked
          (SListView<TSharedPtr<FTranslationPickerTextItem,1>_> *this,
          TSharedPtr<FTranslationPickerTextItem,1> *param_1,bool param_2)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// Private_OnItemClicked @ 146bba580

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
SListView<TSharedPtr<FTranslationPickerTextItem,1>_>::Private_OnItemClicked
          (SListView<TSharedPtr<FTranslationPickerTextItem,1>_> *this,
          TSharedPtr<FTranslationPickerTextItem,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  bool bVar2;
  TSharedPtr<FTranslationPickerTextItem,1> local_18;
  
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
  bVar2 = TDelegate<void___cdecl(TSharedPtr<FTranslationPickerTextItem,1>),FDefaultDelegateUserPolicy>
          ::ExecuteIfBound((TDelegate<void___cdecl(TSharedPtr<FTranslationPickerTextItem,1>),FDefaultDelegateUserPolicy>
                            *)&this->_padding_,&local_18);
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (bVar2) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    return true;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return false;
}

// Private_OnItemDoubleClicked @ 146bba5e0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
SListView<TSharedPtr<FTranslationPickerTextItem,1>_>::Private_OnItemDoubleClicked
          (SListView<TSharedPtr<FTranslationPickerTextItem,1>_> *this,
          TSharedPtr<FTranslationPickerTextItem,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  bool bVar2;
  TSharedPtr<FTranslationPickerTextItem,1> local_18;
  
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
  bVar2 = TDelegate<void___cdecl(TSharedPtr<FTranslationPickerTextItem,1>),FDefaultDelegateUserPolicy>
          ::ExecuteIfBound((TDelegate<void___cdecl(TSharedPtr<FTranslationPickerTextItem,1>),FDefaultDelegateUserPolicy>
                            *)&this->_padding_,&local_18);
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (bVar2) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    return true;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return false;
}

// Private_OnItemRightClicked @ 146bba640

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SListView<TSharedPtr<FTranslationPickerTextItem,1>_>::Private_OnItemRightClicked
          (SListView<TSharedPtr<FTranslationPickerTextItem,1>_> *this,
          TSharedPtr<FTranslationPickerTextItem,1> *param_1,FPointerEvent *param_2)

{
  (**(code **)(this[-1]._padding_ + 0x288))(&this[-1]._padding_,param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// Private_SelectRangeFromCurrentTo @ 146bba670

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SListView<TSharedPtr<FTranslationPickerTextItem,1>_>::Private_SelectRangeFromCurrentTo
          (SListView<TSharedPtr<FTranslationPickerTextItem,1>_> *this,
          TSharedPtr<FTranslationPickerTextItem,1> *param_1)

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
  TSharedPtr<FTranslationPickerTextItem,1> local_res18;
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
            goto LAB_146bba755;
          }
        }
        uVar11 = 0xffffffff;
LAB_146bba755:
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      }
      local_res18.Object = (FTranslationPickerTextItem *)(longlong)iVar12;
      if (plVar4 != plVar4 + (longlong)local_res18.Object * 2) {
        plVar10 = plVar4;
        do {
          if ((FTranslationPickerTextItem *)*plVar10 == param_1->Object) {
            uVar9 = (uint)((longlong)plVar10 - (longlong)plVar4 >> 4);
            goto LAB_146bba795;
          }
          plVar10 = plVar10 + 2;
        } while (plVar10 != plVar4 + (longlong)local_res18.Object * 2);
      }
      uVar9 = 0xffffffff;
LAB_146bba795:
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
        TSet<TSharedPtr<FTranslationPickerTextItem,1>,DefaultKeyFuncs<TSharedPtr<FTranslationPickerTextItem,1>,0>,FDefaultSetAllocator>
        ::Emplace<TSharedPtr<FTranslationPickerTextItem,1>_const_&>
                  ((TSet<TSharedPtr<FTranslationPickerTextItem,1>,DefaultKeyFuncs<TSharedPtr<FTranslationPickerTextItem,1>,0>,FDefaultSetAllocator>
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
      TSet<TSharedPtr<FTranslationPickerTextItem,1>,DefaultKeyFuncs<TSharedPtr<FTranslationPickerTextItem,1>,0>,FDefaultSetAllocator>
      ::Emplace<TSharedPtr<FTranslationPickerTextItem,1>_const_&>
                ((TSet<TSharedPtr<FTranslationPickerTextItem,1>,DefaultKeyFuncs<TSharedPtr<FTranslationPickerTextItem,1>,0>,FDefaultSetAllocator>
                  *)&this->_padding_,
                 (TSharedPtr<FTranslationPickerTextItem,1> *)&local_res18.SharedReferenceCount,
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

// Private_SetItemExpansion @ 146bba940

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SListView<TSharedPtr<FTranslationPickerTextItem,1>_>::Private_SetItemExpansion
          (SListView<TSharedPtr<FTranslationPickerTextItem,1>_> *this,
          TSharedPtr<FTranslationPickerTextItem,1> *param_1,bool param_2)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// Private_SetItemHighlighted @ 146bba950

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SListView<TSharedPtr<FTranslationPickerTextItem,1>_>::Private_SetItemHighlighted
          (SListView<TSharedPtr<FTranslationPickerTextItem,1>_> *this,
          TSharedPtr<FTranslationPickerTextItem,1> *param_1,bool param_2)

{
  TSharedPtr<FTranslationPickerTextItem,1> local_res18;
  TSharedPtr<FTranslationPickerTextItem_const_,1> local_18;
  
  if (param_2) {
    TSet<TSharedPtr<FTranslationPickerTextItem,1>,DefaultKeyFuncs<TSharedPtr<FTranslationPickerTextItem,1>,0>,FDefaultSetAllocator>
    ::Emplace<TSharedPtr<FTranslationPickerTextItem,1>_const_&>
              ((TSet<TSharedPtr<FTranslationPickerTextItem,1>,DefaultKeyFuncs<TSharedPtr<FTranslationPickerTextItem,1>,0>,FDefaultSetAllocator>
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
  TSet<TSharedPtr<FTranslationPickerTextItem,1>,DefaultKeyFuncs<TSharedPtr<FTranslationPickerTextItem,1>,0>,FDefaultSetAllocator>
  ::Remove((TSet<TSharedPtr<FTranslationPickerTextItem,1>,DefaultKeyFuncs<TSharedPtr<FTranslationPickerTextItem,1>,0>,FDefaultSetAllocator>
            *)&this->_padding_,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// Private_SetItemSelection @ 146bba9c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
SListView<TSharedPtr<FTranslationPickerTextItem,1>_>::Private_SetItemSelection
          (SListView<TSharedPtr<FTranslationPickerTextItem,1>_> *this,
          TSharedPtr<FTranslationPickerTextItem,1> *param_1,bool param_2,bool param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  FTranslationPickerTextItem *pFVar2;
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
  TSharedPtr<FTranslationPickerTextItem_const_,1> local_d8;
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
      TSet<TSharedPtr<FTranslationPickerTextItem,1>,DefaultKeyFuncs<TSharedPtr<FTranslationPickerTextItem,1>,0>,FDefaultSetAllocator>
      ::Emplace<TSharedPtr<FTranslationPickerTextItem,1>_const_&>
                ((TSet<TSharedPtr<FTranslationPickerTextItem,1>,DefaultKeyFuncs<TSharedPtr<FTranslationPickerTextItem,1>,0>,FDefaultSetAllocator>
                  *)&this->_padding_,(TSharedPtr<FTranslationPickerTextItem,1> *)&stack0x00000008,
                 (bool *)param_1);
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
      TSet<TSharedPtr<FTranslationPickerTextItem,1>,DefaultKeyFuncs<TSharedPtr<FTranslationPickerTextItem,1>,0>,FDefaultSetAllocator>
      ::Remove((TSet<TSharedPtr<FTranslationPickerTextItem,1>,DefaultKeyFuncs<TSharedPtr<FTranslationPickerTextItem,1>,0>,FDefaultSetAllocator>
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

// Private_SignalSelectionChanged @ 146bbace0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SListView<TSharedPtr<FTranslationPickerTextItem,1>_>::Private_SignalSelectionChanged
          (SListView<TSharedPtr<FTranslationPickerTextItem,1>_> *this,Type param_1)

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
        pTVar5 = TSet<TSharedPtr<FTranslationPickerTextItem,1>,DefaultKeyFuncs<TSharedPtr<FTranslationPickerTextItem,1>,0>,FDefaultSetAllocator>
                 ::TIterator::TIterator
                           (&local_48,
                            (TSet<TSharedPtr<FTranslationPickerTextItem,1>,DefaultKeyFuncs<TSharedPtr<FTranslationPickerTextItem,1>,0>,FDefaultSetAllocator>
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

// Private_UsesSelectorFocus @ 146bbae40

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
SListView<TSharedPtr<FTranslationPickerTextItem,1>_>::Private_UsesSelectorFocus
          (SListView<TSharedPtr<FTranslationPickerTextItem,1>_> *this)

{
  return true;
}

// ReGenerateItems @ 146bbb490

/* WARNING: Enum "Type": Some values do not have unique names */

FReGenerateResults * __thiscall
SListView<TSharedPtr<FTranslationPickerTextItem,1>_>::ReGenerateItems
          (SListView<TSharedPtr<FTranslationPickerTextItem,1>_> *this,
          FReGenerateResults *__return_storage_ptr__,FGeometry *param_1)

{
  int *piVar1;
  FWidgetGenerator *this_00;
  TArray<TSharedPtr<FTranslationPickerTextItem,1>,TSizedDefaultAllocator<32>_> *pTVar2;
  float fVar3;
  IItemsSource<TSharedPtr<FTranslationPickerTextItem,1>_> *pIVar4;
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
  TSharedPtr<FTranslationPickerTextItem,1> *pTVar19;
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
  TArray<TSharedPtr<FTranslationPickerTextItem,1>,TSizedDefaultAllocator<32>_>::operator=
            (&(this->WidgetGenerator).ItemsToBeCleanedUp,pTVar2);
  DestructItems<TSharedPtr<FTranslationPickerTextItem,1>,int>
            ((TSharedPtr<FTranslationPickerTextItem,1> *)(pTVar2->AllocatorInstance).Data,
             (this->WidgetGenerator).ItemsWithGeneratedWidgets.ArrayNum);
  piVar1 = &(this->WidgetGenerator).ItemsWithGeneratedWidgets.ArrayMax;
  (this->WidgetGenerator).ItemsWithGeneratedWidgets.ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  pIVar4 = (this->ViewSource).Ptr;
  if (pIVar4 == (IItemsSource<TSharedPtr<FTranslationPickerTextItem,1>_> *)0x0) {
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
    pTVar19 = (TSharedPtr<FTranslationPickerTextItem,1> *)(uVar17 * 0x10 + lVar7);
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
      if (pTVar19->Object != (FTranslationPickerTextItem *)0x0) {
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
        pTVar19 = (TSharedPtr<FTranslationPickerTextItem,1> *)
                  ((longlong)(int)uVar20 * 0x10 + local_110);
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
          if (pTVar19->Object != (FTranslationPickerTextItem *)0x0) {
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

// RebuildList @ 146bbbcc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SListView<TSharedPtr<FTranslationPickerTextItem,1>_>::RebuildList
          (SListView<TSharedPtr<FTranslationPickerTextItem,1>_> *this)

{
  FWidgetGenerator::Clear(&this->WidgetGenerator);
  FWidgetGenerator::Clear(&this->PinnedWidgetGenerator);
                    /* WARNING: Could not recover jumptable at 0x000146bbbcec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x248))(this);
  return;
}

// RequestScrollIntoView @ 146bbcce0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SListView<TSharedPtr<FTranslationPickerTextItem,1>_>::RequestScrollIntoView
          (SListView<TSharedPtr<FTranslationPickerTextItem,1>_> *this,
          TSharedPtr<FTranslationPickerTextItem,1> *param_1,uint param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FTranslationPickerTextItem *pFVar2;
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

// ScrollBy @ 146bbf4e0

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall
SListView<TSharedPtr<FTranslationPickerTextItem,1>_>::ScrollBy
          (SListView<TSharedPtr<FTranslationPickerTextItem,1>_> *this,FGeometry *param_1,
          float param_2,EAllowOverscroll param_3)

{
  float fVar1;
  IItemsSource<TSharedPtr<FTranslationPickerTextItem,1>_> *pIVar2;
  FTranslationPickerTextItem *pFVar3;
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
  TSharedPtr<FTranslationPickerTextItem_const_,1> local_1c8;
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
  TSharedPtr<FTranslationPickerTextItem,1> local_128;
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
      if (pIVar2 == (IItemsSource<TSharedPtr<FTranslationPickerTextItem,1>_> *)0x0) {
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
          pFVar3 = (FTranslationPickerTextItem *)*plVar22;
          if (pFVar3 != (FTranslationPickerTextItem *)0x0) {
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
            pTVar15 = TMapBase<TSharedPtr<FTranslationPickerTextItem,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<FTranslationPickerTextItem,1>,TSharedRef<ITableRow,1>,0>_>
                      ::Find((TMapBase<TSharedPtr<FTranslationPickerTextItem,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<FTranslationPickerTextItem,1>,TSharedRef<ITableRow,1>,0>_>
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
              local_128.Object = (FTranslationPickerTextItem *)*plVar22;
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
                  goto LAB_146bbfae8;
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
LAB_146bbfae8:
                fVar31 = fVar31 - fVar24;
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (FVar21.ReferenceController);
                goto LAB_146bbfaf0;
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
LAB_146bbfaf0:
          dVar30 = auVar26._0_8_;
        } while (fVar31 != 0.0);
      }
      fVar31 = (float)(**(code **)(this->_padding_ + 0x260))(this,(float)dVar30);
      return fVar31;
    }
  }
  return 0.0;
}

// ScrollIntoView @ 146bbfbe0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

EScrollIntoViewResult __thiscall
SListView<TSharedPtr<FTranslationPickerTextItem,1>_>::ScrollIntoView
          (SListView<TSharedPtr<FTranslationPickerTextItem,1>_> *this,FGeometry *param_1)

{
  EScrollIntoViewAlignment EVar1;
  uint uVar2;
  IItemsSource<TSharedPtr<FTranslationPickerTextItem,1>_> *pIVar3;
  TReferenceControllerBase<1> *pTVar4;
  FTranslationPickerTextItem *pFVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  bool bVar8;
  EScrollIntoViewResult EVar9;
  longlong *plVar10;
  TSharedPtr<FTranslationPickerTextItem,1> *pTVar11;
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
  TSharedPtr<FTranslationPickerTextItem_const_,1> local_1b0;
  longlong *local_1a0;
  TReferenceControllerBase<1> *local_198;
  FDeprecateVector2DParameter local_190;
  FDeprecateVector2DParameter local_188;
  FDeprecateVector2DParameter local_180;
  FDeprecateVector2DParameter local_178;
  FDeprecateVector2DParameter local_170;
  undefined8 local_168;
  FSharedReferencer<1> FStack_160;
  FTranslationPickerTextItem *local_158;
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
  TArrayView<TSharedPtr<FTranslationPickerTextItem,1>_const_,int> local_d8;
  undefined1 local_c8 [8];
  TReferenceControllerBase<1> *local_c0;
  undefined1 local_b8 [8];
  TReferenceControllerBase<1> *local_b0;
  FTranslationPickerTextItem *local_a8;
  TReferenceControllerBase<1> *pTStack_a0;
  undefined1 local_98 [8];
  TReferenceControllerBase<1> *local_90;
  undefined1 local_88 [80];
  ITableRow *pIVar21;
  
  local_res8[0] = 0;
  pIVar3 = (this->ViewSource).Ptr;
  if ((pIVar3 == (IItemsSource<TSharedPtr<FTranslationPickerTextItem,1>_> *)0x0) ||
     ((this->ItemToScrollIntoView).Object == (FTranslationPickerTextItem *)0x0)) goto LAB_146bbfcc4;
  plVar10 = (longlong *)(**(code **)((longlong)*pIVar3 + 8))(pIVar3,local_88);
  pTVar4 = (this->ItemToScrollIntoView).SharedReferenceCount.ReferenceController;
  pFVar5 = (this->ItemToScrollIntoView).Object;
  local_d8.DataPtr = (TSharedPtr<FTranslationPickerTextItem,1> *)*plVar10;
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
      if (iVar22 == -1) goto LAB_146bbfc9b;
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
        if (this->bNavigateOnScrollIntoView == false) goto LAB_146bc03a2;
        pcVar6 = *(code **)(this->_padding_ + 0xd8);
        pTVar11 = TArrayView<TSharedPtr<FTranslationPickerTextItem,1>_const_,int>::operator[]
                            (&local_d8,iVar22);
        (*pcVar6)(&this->_padding_,&local_1a0,pTVar11);
        if (local_1a0 == (longlong *)0x0) goto LAB_146bc0327;
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
          goto LAB_146bc0318;
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
        if (local_108.ScrollAxis <= local_f8.ScrollAxis) goto LAB_146bc0318;
        uVar2 = (this->WidgetGenerator).ItemsWithGeneratedWidgets.ArrayNum;
        uVar14 = (ulonglong)(int)uVar2;
        fVar34 = 0.0;
        pFVar18 = (this->WidgetGenerator).ItemsWithGeneratedWidgets.AllocatorInstance.Data;
        pFVar19 = pFVar18 + uVar14 * 0x10;
        fVar35 = 0.0;
        pIVar21 = (ITableRow *)0x0;
        fVar32 = local_108.ScrollAxis;
        goto LAB_146bc0146;
      }
      EVar1 = this->ScrollIntoViewAlignment;
      if (EVar1 == IntoView) {
        if (dVar25 < dVar33) {
LAB_146bc036d:
          dVar33 = dVar33 - (dVar26 - __real_3ff0000000000000);
        }
      }
      else if (EVar1 != TopOrLeft) {
        if (EVar1 == CenterAligned) {
          dVar33 = dVar33 + dVar26 * __real_bfe0000000000000;
        }
        else if (EVar1 == BottomOrRight) goto LAB_146bc036d;
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
      goto LAB_146bc03a2;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  goto LAB_146bbfc9b;
LAB_146bc0146:
  fVar32 = fVar32 - local_f8.ScrollAxis;
  if ((this->WidgetGenerator).ItemsWithGeneratedWidgets.ArrayNum != (int)uVar14) {
    local_res8[0] = local_res8[0] & 0xffffff00;
    `TCheckedPointerIterator<TSharedPtr<FTranslationPickerTextItem,1>,int,0>::operator!='::__l2::
    <lambda_1>::operator()(local_res8);
  }
  if (pFVar18 == pFVar19) goto LAB_146bc02e5;
  pTVar4 = *(TReferenceControllerBase<1> **)(pFVar18 + 8);
  local_1b0.Object = *(FTranslationPickerTextItem **)pFVar18;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1b0.SharedReferenceCount.ReferenceController = pTVar4;
  pTVar15 = TMapBase<TSharedPtr<FTranslationPickerTextItem,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<FTranslationPickerTextItem,1>,TSharedRef<ITableRow,1>,0>_>
            ::Find((TMapBase<TSharedPtr<FTranslationPickerTextItem,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<FTranslationPickerTextItem,1>,TSharedRef<ITableRow,1>,0>_>
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
  if (fVar32 <= local_e8.ScrollAxis) goto LAB_146bc02dd;
  uVar14 = (ulonglong)uVar2;
  fVar34 = fVar34 + fVar24;
  pFVar18 = pFVar18 + 0x10;
  local_f8.ScrollAxis = local_e8.ScrollAxis;
  goto LAB_146bc0146;
LAB_146bc02dd:
  fVar34 = fVar34 + fVar32 / local_e8.ScrollAxis;
LAB_146bc02e5:
  if ((char)this->_padding_ == '\0') {
    fVar35 = this->NavigationScrollOffset;
  }
  dVar26 = (double)fVar34 + (double)this->_padding_ + (double)fVar35;
LAB_146bc0318:
  STableViewBase::SetScrollOffset((STableViewBase *)this,(float)dVar26);
LAB_146bc0327:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_198);
LAB_146bc03a2:
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
LAB_146bbfc9b:
  local_168 = 0;
  FStack_160.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->ItemToScrollIntoView != (TSharedPtr<FTranslationPickerTextItem,1> *)&local_168) {
    (this->ItemToScrollIntoView).Object = (FTranslationPickerTextItem *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ItemToScrollIntoView).SharedReferenceCount,&FStack_160);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_160.ReferenceController);
LAB_146bbfcc4:
  local_158 = (this->ItemToNotifyWhenInView).Object;
  if (local_158 == (FTranslationPickerTextItem *)0x0) {
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

// SupportsKeyboardFocus @ 146bc0a10

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
SListView<TSharedPtr<FTranslationPickerTextItem,1>_>::SupportsKeyboardFocus
          (SListView<TSharedPtr<FTranslationPickerTextItem,1>_> *this)

{
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  char cVar1;
  bool bVar2;
  longlong *plVar3;
  FReadAccessScope local_28;
  
  this_00 = &(this->IsFocusable).Getter;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_28);
  if ((*(int *)&(this->IsFocusable).Getter.field_0x10 != 0) &&
     (plVar3 = *(longlong **)&(this->IsFocusable).Getter.field_0x8, plVar3 != (longlong *)0x0)) {
    cVar1 = (**(code **)(*plVar3 + 0x38))();
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_28);
      if (*(int *)&(this->IsFocusable).Getter.field_0x10 == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)&(this->IsFocusable).Getter.field_0x8;
      }
      bVar2 = (bool)(**(code **)(*plVar3 + 0x60))();
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      (this->IsFocusable).Value = bVar2;
      return bVar2;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return (this->IsFocusable).Value;
}

// UpdateSelectionSet @ 146bc3050

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SListView<TSharedPtr<FTranslationPickerTextItem,1>_>::UpdateSelectionSet
          (SListView<TSharedPtr<FTranslationPickerTextItem,1>_> *this)

{
  TSet<TSharedPtr<FTranslationPickerTextItem,1>,DefaultKeyFuncs<TSharedPtr<FTranslationPickerTextItem,1>,0>,FDefaultSetAllocator>
  *this_00;
  int iVar1;
  IItemsSource<TSharedPtr<FTranslationPickerTextItem,1>_> *pIVar2;
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
  SListView<TSharedPtr<FTranslationPickerTextItem,1>_> *local_110;
  FTranslationPickerTextItem *local_108;
  TReferenceControllerBase<1> *local_100;
  ulonglong *local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [16];
  TSet<TSharedPtr<FTranslationPickerTextItem,1>,DefaultKeyFuncs<TSharedPtr<FTranslationPickerTextItem,1>,0>,FDefaultSetAllocator>
  local_d8;
  TSet<TSharedPtr<FTranslationPickerTextItem,1>,DefaultKeyFuncs<TSharedPtr<FTranslationPickerTextItem,1>,0>,FDefaultSetAllocator>
  local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_158;
  if ((int)this->_padding_ != 2) {
    pIVar2 = (this->ViewSource).Ptr;
    local_110 = this;
    if (pIVar2 == (IItemsSource<TSharedPtr<FTranslationPickerTextItem,1>_> *)0x0) {
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
          local_108 = (FTranslationPickerTextItem *)local_128._8_8_;
          local_100 = pTVar3;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar3);
          iVar7 = TSet<TSharedPtr<FTranslationPickerTextItem,1>,DefaultKeyFuncs<TSharedPtr<FTranslationPickerTextItem,1>,0>,FDefaultSetAllocator>
                  ::FindIndexByHash<TSharedPtr<FTranslationPickerTextItem_const_,1>_>
                            (this_00,uVar9 >> 0x10 ^ uVar9,
                             (TSharedPtr<FTranslationPickerTextItem_const_,1> *)(local_128 + 8));
          if (iVar7 == -1) {
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar3);
          }
          else {
            lVar4 = *(longlong *)&this_00->Elements;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar3);
            if (lVar4 + (longlong)iVar7 * 0x18 != 0) {
              TSet<TSharedPtr<FTranslationPickerTextItem,1>,DefaultKeyFuncs<TSharedPtr<FTranslationPickerTextItem,1>,0>,FDefaultSetAllocator>
              ::Emplace<TSharedPtr<FTranslationPickerTextItem,1>_const_&>
                        (&local_d8,(TSharedPtr<FTranslationPickerTextItem,1> *)local_128,
                         (bool *)&local_108);
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
      TSet<TSharedPtr<FTranslationPickerTextItem,1>,DefaultKeyFuncs<TSharedPtr<FTranslationPickerTextItem,1>,0>,FDefaultSetAllocator>
      ::Difference(&this->SelectedItems,&local_88,&local_d8);
      TSet<TSharedPtr<FTranslationPickerTextItem,1>,DefaultKeyFuncs<TSharedPtr<FTranslationPickerTextItem,1>,0>,FDefaultSetAllocator>
      ::operator=(&this->SelectedItems,&local_d8);
      local_88.HashSize = 0;
      if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_88.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TSharedPtr<FTranslationPickerTextItem,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TSharedPtr<FTranslationPickerTextItem,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_88.Elements);
      local_d8.HashSize = 0;
      if (local_d8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_d8.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TSharedPtr<FTranslationPickerTextItem,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TSharedPtr<FTranslationPickerTextItem,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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

// WidgetFromItem @ 146bc3b80

/* WARNING: Removing unreachable block (ram,0x000146bc3ce9) */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<ITableRow,1> * __thiscall
SListView<TSharedPtr<FTranslationPickerTextItem,1>_>::WidgetFromItem
          (SListView<TSharedPtr<FTranslationPickerTextItem,1>_> *this,
          TSharedPtr<ITableRow,1> *__return_storage_ptr__,
          TSharedPtr<FTranslationPickerTextItem,1> *param_1)

{
  ITableRow *pIVar1;
  TReferenceControllerBase<1> *pTVar2;
  bool bVar3;
  bool bVar4;
  TSharedRef<ITableRow,1> *pTVar5;
  TSharedPtr<FTranslationPickerTextItem_const_,1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  TSharedPtr<FTranslationPickerTextItem_const_,1> local_48;
  TSharedPtr<FTranslationPickerTextItem_const_,1> local_38;
  
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
  pTVar5 = TMapBase<TSharedPtr<FTranslationPickerTextItem,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<FTranslationPickerTextItem,1>,TSharedRef<ITableRow,1>,0>_>
           ::Find((TMapBase<TSharedPtr<FTranslationPickerTextItem,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<FTranslationPickerTextItem,1>,TSharedRef<ITableRow,1>,0>_>
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
      goto LAB_146bc3cf6;
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
  pTVar5 = TMapBase<TSharedPtr<FTranslationPickerTextItem,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<FTranslationPickerTextItem,1>,TSharedRef<ITableRow,1>,0>_>
           ::Find((TMapBase<TSharedPtr<FTranslationPickerTextItem,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<FTranslationPickerTextItem,1>,TSharedRef<ITableRow,1>,0>_>
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
  pTVar6->Object = (FTranslationPickerTextItem *)0x0;
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
LAB_146bc3cf6:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return __return_storage_ptr__;
}

