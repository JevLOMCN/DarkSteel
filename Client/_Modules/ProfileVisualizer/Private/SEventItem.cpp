// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProfileVisualizer
// Functions: 4

// ~SEventItem @ 148d58890

void __thiscall SEventItem::~SEventItem(SEventItem *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->EventDuration).Getter);
  pvVar1 = *(void **)&(this->EventDuration).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->EventDuration).Getter);
  pFVar2 = (this->EventName).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&this->_padding_ = 0;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<SWidget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<SWidget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<SWidget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->_padding_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  STableRow<TSharedPtr<FVisualizerEvent,1>_>::~STableRow<TSharedPtr<FVisualizerEvent,1>_>
            ((STableRow<TSharedPtr<FVisualizerEvent,1>_> *)this);
  return;
}

// Construct @ 148d62c60

void __thiscall
SEventItem::Construct(SEventItem *this,FArguments *param_1,TSharedRef<STableViewBase,1> *param_2)

{
  TDelegate<double___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  longlong *plVar1;
  FArguments *pFVar2;
  TDelegate<double___cdecl(void),FDefaultDelegateUserPolicy> *this_01;
  undefined1 local_338 [8];
  ForAnyElementType local_330;
  int local_328;
  FDestructionSentinel local_320;
  FArguments local_308;
  
  ::FString::operator=(&this->EventName,&param_1->_EventName);
  this_00 = &(this->EventDuration).Getter;
  (this->EventDuration).Value = (param_1->_EventDuration).Value;
  this_01 = &(param_1->_EventDuration).Getter;
  (this->EventDuration).bIsSet = (param_1->_EventDuration).bIsSet;
  if (this_01 != this_00) {
    local_338 = (undefined1  [8])0x0;
    local_330.Data = (FScriptContainerElement *)0x0;
    local_328 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_01,
               (FReadAccessScope *)&local_320);
    if ((*(int *)&(param_1->_EventDuration).Getter.field_0x10 != 0) &&
       (plVar1 = *(longlong **)&(param_1->_EventDuration).Getter.field_0x8,
       plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x50))(plVar1,local_338);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_320);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_338);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_338,
               (FWriteAccessScope *)&local_320);
    if ((local_328 != 0) && (local_330.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_330.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_330,0,0,0x10);
      local_328 = 0;
    }
    if (local_320.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_320.Accessor,&local_320);
    }
    if (local_330.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_330.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_338);
  }
  pFVar2 = STableRow<TSharedPtr<FVisualizerEvent,1>_>::FArguments::FArguments(&local_308);
  SMultiColumnTableRow<TSharedPtr<FVisualizerEvent,1>_>::Construct
            ((SMultiColumnTableRow<TSharedPtr<FVisualizerEvent,1>_> *)this,pFVar2,param_2);
  STableRow<TSharedPtr<FVisualizerEvent,1>_>::FArguments::~FArguments(&local_308);
  return;
}

// GenerateWidgetForColumn @ 148d797e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
SEventItem::GenerateWidgetForColumn
          (SEventItem *this,TSharedRef<SWidget,1> *__return_storage_ptr__,FName *param_1)

{
  FSlotArguments *pFVar1;
  T1RequiredArgs<TSharedRef<SEventItem,1>_&&> TVar2;
  TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<SEventItem,1>_&&>_> *this_00;
  TSharedRef<SExpanderArrow,1> *pTVar3;
  FText *pFVar4;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> *pTVar5;
  TSharedRef<STextBlock,1> *pTVar6;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> *this_01;
  TSharedRef<SHorizontalBox,1> *pTVar7;
  longlong lVar8;
  FName *pFVar9;
  code **ppcVar10;
  undefined1 *puVar11;
  longlong *plVar12;
  TReferenceControllerBase<1> *pTVar13;
  atomic<int> *paVar14;
  pmf_8f5c8254 *ppVar15;
  T0RequiredArgs local_1996;
  T0RequiredArgs local_1995;
  undefined1 local_1994;
  undefined1 local_1993;
  T0RequiredArgs local_1992;
  T0RequiredArgs local_1991;
  FStaticCastTag local_1990;
  uint local_198c;
  uint local_1988;
  longlong local_1980;
  longlong local_1978;
  TReferenceControllerBase<1> local_1970;
  FName local_1960;
  longlong local_1958;
  longlong local_1950;
  longlong *local_1948;
  TSharedRef<SWidget,1> *local_1940;
  FArguments *local_1938;
  FSlotArguments *local_1930;
  FSlotArguments *local_1928;
  FArguments *local_1920;
  TAttribute<FText> *local_1918;
  TAttribute<FText> *local_1910;
  FArguments *local_1908;
  FArguments *local_1900;
  FSlotArguments *local_18f8;
  FSlotArguments *local_18f0;
  FArguments *local_18e8;
  FArguments *local_18e0;
  FName local_18d8;
  longlong local_18d0;
  longlong local_18c8;
  FArguments *local_18c0;
  FArguments *local_18b8;
  FText *local_18b0;
  FTextFormat *local_18a8;
  FText *local_18a0;
  FTextFormat *local_1898;
  TAttribute<FText> *local_1890;
  TAttribute<FText> *local_1888;
  FArguments *local_1880;
  FArguments *local_1878;
  code *local_1870;
  undefined4 local_1868;
  TSharedRef<SWidget,1> local_1860;
  TSharedRef<SWidget,1> local_1850;
  TSharedRef<SEventItem,1> local_1840;
  longlong *local_1830;
  longlong *local_1828;
  TSharedRef<SEventItem,1> local_1820;
  atomic<int> *local_1810;
  TSharedRef<SWidget,1> local_1808;
  TSharedRef<SHorizontalBox,1> local_17f8;
  TSharedRef<STextBlock,1> local_17e8;
  FText local_17d8;
  TSharedRef<SExpanderArrow,1> local_17c8;
  undefined1 local_17b8 [16];
  pmf_8f5c8254 local_17a8;
  TSharedRef<STextBlock,1> local_1798;
  TSharedRef<STextBlock,1> local_1788;
  FText local_1778;
  FText local_1768;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_1758;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_1740;
  TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<SEventItem,1>_&&>_> local_1728;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_1710;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_16f8;
  FText local_16e0;
  FTextFormat local_16d0;
  TAttribute<FText> local_16c0;
  TAttribute<FText> local_1690;
  FSlotArguments local_1660;
  FSlotArguments local_1578;
  FArguments local_1490;
  FArguments local_1288;
  FArguments local_1028;
  FArguments local_ad0;
  FArguments local_578;
  undefined8 uStack_18;
  
  uStack_18 = 0x148d797fb;
  local_1960 = SEventsTree::NAME_NameColumn;
  local_1980 = 0;
  pFVar9 = param_1;
  plVar12 = &local_1980;
  for (lVar8 = 8; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(char *)plVar12 = (char)(pFVar9->ComparisonIndex).Value;
    pFVar9 = (FName *)((longlong)&(pFVar9->ComparisonIndex).Value + 1);
    plVar12 = (longlong *)((longlong)plVar12 + 1);
  }
  local_1830 = &local_1980;
  local_1958 = local_1980;
  local_1978 = 0;
  pFVar9 = &local_1960;
  plVar12 = &local_1978;
  for (lVar8 = 8; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(char *)plVar12 = (char)(pFVar9->ComparisonIndex).Value;
    pFVar9 = (FName *)((longlong)&(pFVar9->ComparisonIndex).Value + 1);
    plVar12 = (longlong *)((longlong)plVar12 + 1);
  }
  local_1828 = &local_1978;
  local_1950 = local_1978;
  local_198c = (uint)(local_1958 == local_1978);
  if (local_1958 == local_1978) {
    local_1920 = SHorizontalBox::FArguments::FArguments(&local_1490);
    pFVar1 = SHorizontalBox::Slot(&local_1578);
    local_1930 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar1);
    local_1938 = SExpanderArrow::FArguments::FArguments(&local_1288);
    local_1948 = &this->_padding_;
    local_1940 = TSharedFromThis<SWidget,1>::AsShared
                           ((TSharedFromThis<SWidget,1> *)local_1948,&local_1808);
    TSharedRef<SEventItem,1>::TSharedRef<SEventItem,1><SWidget>(&local_1840,local_1940,local_1990);
    TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_1808);
    TVar2 = RequiredArgs::MakeRequiredArgs<TSharedRef<SEventItem,1>_>(&local_1820);
    this_00 = MakeTDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<SEventItem,1>_&&>_>
                        (&local_1728,"SExpanderArrow",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ProfileVisualizer\\Private\\SEventsTree.cpp"
                         ,0x21,(T1RequiredArgs<TSharedRef<SEventItem,1>_&&> *)TVar2.Arg0);
    pTVar3 = TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<SEventItem,1>_&&>_>::
             operator<<=(this_00,&local_17c8,local_1938);
    TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SExpanderArrow>(&local_1850,pTVar3);
    local_1928 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                           ((FSlotArguments *)local_1930,&local_1850);
    local_18e8 = SHorizontalBox::FArguments::operator+(local_1920,local_1928);
    pFVar1 = SHorizontalBox::Slot(&local_1660);
    local_18f8 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar1);
    local_1908 = STextBlock::FArguments::FArguments(&local_1028);
    local_1918 = &local_16c0;
    pFVar4 = FText::FromString(&local_17d8,&this->EventName);
    local_1910 = TAttribute<FText>::TAttribute<FText>(local_1918,pFVar4);
    local_1900 = STextBlock::FArguments::Text(local_1908,local_1910);
    RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_1996);
    pTVar5 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                       (&local_1740,"STextBlock",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ProfileVisualizer\\Private\\SEventsTree.cpp"
                        ,0x26,&local_1996);
    pTVar6 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                       (pTVar5,&local_17e8,local_1900);
    TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_1860,pTVar6);
    local_18f0 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                           ((FSlotArguments *)local_18f8,&local_1860);
    local_18e0 = SHorizontalBox::FArguments::operator+(local_18e8,local_18f0);
    RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_1995);
    this_01 = MakeTDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
                        (&local_1758,"SHorizontalBox",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ProfileVisualizer\\Private\\SEventsTree.cpp"
                         ,0x1d,&local_1995);
    pTVar7 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                       (this_01,&local_17f8,local_18e0);
    TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SHorizontalBox>(__return_storage_ptr__,pTVar7);
    SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
              (&local_17f8.SharedReferenceCount);
    TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
    ~TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>(&local_1758);
    TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_1860);
    TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_17e8);
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
    ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_1740);
    FText::~FText(&local_17d8);
    STextBlock::FArguments::~FArguments(&local_1028);
    SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_1660);
    TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_1850);
    SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
              (&local_17c8.SharedReferenceCount);
    SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
              (&local_1728._Widget.SharedReferenceCount);
    SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
              (&local_1840.SharedReferenceCount);
    SExpanderArrow::FArguments::~FArguments(&local_1288);
    SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_1578);
    TArray<SHorizontalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>::
    ~TArray<SHorizontalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>(&local_1490._Slots);
    TSlateBaseNamedArgs<SHorizontalBox>::~TSlateBaseNamedArgs<SHorizontalBox>
              ((TSlateBaseNamedArgs<SHorizontalBox> *)&local_1490);
  }
  else {
    local_18d8 = SEventsTree::NAME_DurationColumn;
    local_1970._padding_ = 0;
    pFVar9 = param_1;
    pTVar13 = &local_1970;
    for (lVar8 = 8; lVar8 != 0; lVar8 = lVar8 + -1) {
      *(char *)&pTVar13->_padding_ = (char)(pFVar9->ComparisonIndex).Value;
      pFVar9 = (FName *)((longlong)&(pFVar9->ComparisonIndex).Value + 1);
      pTVar13 = (TReferenceControllerBase<1> *)((longlong)&pTVar13->_padding_ + 1);
    }
    local_1820.SharedReferenceCount.ReferenceController = &local_1970;
    local_18d0 = local_1970._padding_;
    local_1970.SharedReferenceCount = (atomic<int>)0x0;
    local_1970.WeakReferenceCount = (atomic<int>)0x0;
    pFVar9 = &local_18d8;
    paVar14 = &local_1970.SharedReferenceCount;
    for (lVar8 = 8; lVar8 != 0; lVar8 = lVar8 + -1) {
      *(char *)paVar14 = (char)(pFVar9->ComparisonIndex).Value;
      pFVar9 = (FName *)((longlong)&(pFVar9->ComparisonIndex).Value + 1);
      paVar14 = (atomic<int> *)&paVar14->field_0x1;
    }
    local_1810 = &local_1970.SharedReferenceCount;
    local_18c8._0_4_ = local_1970.SharedReferenceCount;
    local_18c8._4_4_ = local_1970.WeakReferenceCount;
    local_1994 = local_18d0 == local_1970._8_8_;
    local_1988 = (uint)(byte)local_1994;
    local_1993 = local_1994;
    if ((bool)local_1994) {
      local_18c0 = STextBlock::FArguments::FArguments(&local_ad0);
      local_1870 = GetDurationText;
      local_1868 = 0;
      ppcVar10 = &local_1870;
      puVar11 = local_17b8;
      for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
        *puVar11 = *(undefined1 *)ppcVar10;
        ppcVar10 = (code **)((longlong)ppcVar10 + 1);
        puVar11 = puVar11 + 1;
      }
      puVar11 = local_17b8;
      ppVar15 = &local_17a8;
      for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
        *(undefined1 *)ppVar15 = *puVar11;
        puVar11 = puVar11 + 1;
        ppVar15 = (pmf_8f5c8254 *)&ppVar15->field_0x1;
      }
      local_18b8 = STextBlock::FArguments::Text<SEventItem>(local_18c0,this,&local_17a8);
      RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_1992);
      pTVar5 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                         (&local_1710,"STextBlock",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ProfileVisualizer\\Private\\SEventsTree.cpp"
                          ,0x2c,&local_1992);
      pTVar6 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                         (pTVar5,&local_1798,local_18b8);
      TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(__return_storage_ptr__,pTVar6);
      TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_1798);
      TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
      ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_1710);
      STextBlock::FArguments::~FArguments(&local_ad0);
    }
    else {
      local_1880 = STextBlock::FArguments::FArguments(&local_578);
      local_1890 = &local_1690;
      local_18b0 = &local_16e0;
      local_18a0 = FText::FromName(local_18b0,param_1);
      local_18a8 = &local_16d0;
      pFVar4 = FText::AsLocalizable_Advanced_LocText
                         (&local_1768,L"SEventsTree",L"UnsupportedColumnFmt",
                          L"Unsupported Column: {0}");
      local_1898 = FTextFormat::FTextFormat(local_18a8,pFVar4,Default);
      pFVar4 = FText::Format<FText>(&local_1778,local_1898,local_18a0);
      local_1888 = TAttribute<FText>::TAttribute<FText>(local_1890,pFVar4);
      local_1878 = STextBlock::FArguments::Text(local_1880,local_1888);
      RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_1991);
      pTVar5 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                         (&local_16f8,"STextBlock",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ProfileVisualizer\\Private\\SEventsTree.cpp"
                          ,0x32,&local_1991);
      pTVar6 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                         (pTVar5,&local_1788,local_1878);
      TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(__return_storage_ptr__,pTVar6);
      TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_1788);
      TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
      ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_16f8);
      FText::~FText(&local_1778);
      FText::~FText(&local_1768);
      STextBlock::FArguments::~FArguments(&local_578);
    }
  }
  return __return_storage_ptr__;
}

// GetDurationText @ 148d7af90

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FText * __thiscall SEventItem::GetDurationText(SEventItem *this,FText *__return_storage_ptr__)

{
  TDelegate<double___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  double dVar1;
  char cVar2;
  FNumberFormattingOptions *pFVar3;
  longlong *plVar4;
  TSharedPtr<FCulture,1> local_48;
  FNumberFormattingOptions local_38 [2];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_class_FText___cdecl_SEventItem::GetDurationText(void)const___ptr64'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_class_FText___cdecl_SEventItem::GetDurationText(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_class_FText___cdecl_SEventItem::GetDurationText(void)const___ptr64'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      pFVar3 = FNumberFormattingOptions::FNumberFormattingOptions(local_38);
      pFVar3->MinimumFractionalDigits = 2;
      pFVar3->MaximumFractionalDigits = 2;
      `private:_class_FText___cdecl_SEventItem::GetDurationText(void)const___ptr64'::__l2::
      DurationFormatOptions.AlwaysSign = pFVar3->AlwaysSign;
      `private:_class_FText___cdecl_SEventItem::GetDurationText(void)const___ptr64'::__l2::
      DurationFormatOptions.UseGrouping = pFVar3->UseGrouping;
      `private:_class_FText___cdecl_SEventItem::GetDurationText(void)const___ptr64'::__l2::
      DurationFormatOptions.IndicateNearlyInteger = pFVar3->IndicateNearlyInteger;
      `private:_class_FText___cdecl_SEventItem::GetDurationText(void)const___ptr64'::__l2::
      DurationFormatOptions._3_1_ = pFVar3->field_0x3;
      `private:_class_FText___cdecl_SEventItem::GetDurationText(void)const___ptr64'::__l2::
      DurationFormatOptions.RoundingMode = pFVar3->RoundingMode;
      `private:_class_FText___cdecl_SEventItem::GetDurationText(void)const___ptr64'::__l2::
      DurationFormatOptions.MinimumIntegralDigits = pFVar3->MinimumIntegralDigits;
      `private:_class_FText___cdecl_SEventItem::GetDurationText(void)const___ptr64'::__l2::
      DurationFormatOptions.MaximumIntegralDigits = pFVar3->MaximumIntegralDigits;
      `private:_class_FText___cdecl_SEventItem::GetDurationText(void)const___ptr64'::__l2::
      DurationFormatOptions.MinimumFractionalDigits = pFVar3->MinimumFractionalDigits;
      `private:_class_FText___cdecl_SEventItem::GetDurationText(void)const___ptr64'::__l2::
      DurationFormatOptions.MaximumFractionalDigits = pFVar3->MaximumFractionalDigits;
      _Init_thread_footer(&`private:_class_FText___cdecl_SEventItem::GetDurationText(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  this_00 = &(this->EventDuration).Getter;
  local_48.Object = (FCulture *)0x0;
  local_48.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
             (FReadAccessScope *)local_38);
  if ((*(int *)&(this->EventDuration).Getter.field_0x10 != 0) &&
     (plVar4 = *(longlong **)&(this->EventDuration).Getter.field_0x8, plVar4 != (longlong *)0x0)) {
    cVar2 = (**(code **)(*plVar4 + 0x38))();
    if (cVar2 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)local_38);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
                 (FReadAccessScope *)local_38);
      if (*(int *)&(this->EventDuration).Getter.field_0x10 == 0) {
        plVar4 = (longlong *)0x0;
      }
      else {
        plVar4 = *(longlong **)&(this->EventDuration).Getter.field_0x8;
      }
      dVar1 = (double)(**(code **)(*plVar4 + 0x60))();
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)local_38);
      (this->EventDuration).Value = dVar1;
      goto LAB_148d7b059;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)local_38);
LAB_148d7b059:
  FText::AsNumber(__return_storage_ptr__,(this->EventDuration).Value,
                  &`private:_class_FText___cdecl_SEventItem::GetDurationText(void)const___ptr64'::
                   __l2::DurationFormatOptions,&local_48);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

