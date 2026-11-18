// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MessageLog
// Functions: 7

// ~SMessageLog @ 142bccfa0

void __thiscall SMessageLog::~SMessageLog(SMessageLog *this)

{
  code *pcVar1;
  bool bVar2;
  
  this->_padding_ = (longlong)&___7SMessageLog__6B_;
  if ((this->ViewModel).Object == (FMessageLogViewModel *)0x0) {
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
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &((this->ViewModel).Object)->SelectionChangedEvent,this);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ViewModel).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->LogListing).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CurrentListingDisplay).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CategoriesListView).SharedReferenceCount.ReferenceController);
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  return;
}

// Construct @ 142bda430

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Removing unreachable block (ram,0x000142bdb1c1) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SMessageLog::Construct
          (SMessageLog *this,FArguments *param_1,TSharedRef<FMessageLogViewModel,1> *param_2)

{
  code *pcVar1;
  bool bVar2;
  FName *pFVar3;
  FMargin *pFVar4;
  FMessageLogViewModel *pFVar5;
  FText *pFVar6;
  TSlateDecl<SHeaderRow,RequiredArgs::T0RequiredArgs> *this_00;
  TSharedRef<SHeaderRow,1> *pTVar7;
  TSlateDecl<SListView<TSharedPtr<IMessageLogListing,1>_>,RequiredArgs::T0RequiredArgs> *this_01;
  TSharedRef<SListView<TSharedPtr<IMessageLogListing,1>_>,1> *pTVar8;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> *pTVar9;
  TSharedRef<SBorder,1> *pTVar10;
  TSlateDecl<SSplitter,RequiredArgs::T0RequiredArgs> *this_02;
  TSharedRef<SSplitter,1> *pTVar11;
  TSharedPtr<FMessageLogListingViewModel,1> *pTVar12;
  longlong lVar13;
  code **ppcVar14;
  undefined1 *puVar15;
  pmf_9965c4e0 *ppVar16;
  pmf_1bda0bfe *ppVar17;
  undefined1 *puVar18;
  T0RequiredArgs local_2317;
  T0RequiredArgs local_2316;
  T0RequiredArgs local_2315;
  T0RequiredArgs local_2314;
  T0RequiredArgs local_2313;
  T0RequiredArgs local_2312;
  undefined1 local_2311;
  undefined1 local_2310 [4];
  uint local_230c;
  undefined4 local_2308;
  TArray<TSharedPtr<IMessageLogListing,1>,TSizedDefaultAllocator<32>_> *local_2300;
  float local_22f8;
  Type local_22f4;
  float local_22f0;
  int local_22ec;
  int local_22e8;
  ISlateStyle *local_22e0;
  ISlateStyle *local_22d8;
  ISlateStyle *local_22d0;
  FScriptContainerElement *local_22c8;
  FString local_22c0;
  FName local_22b0;
  code *local_22a8;
  FSlateBrush *local_22a0;
  TAttribute<FSlateBrush_const_*> *local_2298;
  TAttribute<FSlateBrush_const_*> *local_2290;
  FArguments *local_2288;
  TAttribute<FMargin> *local_2280;
  TAttribute<FMargin> *local_2278;
  FArguments *local_2270;
  FArguments *local_2268;
  FName local_2260;
  ISlateStyle *local_2258;
  FArguments *local_2250;
  FArguments *local_2248;
  TAttribute<float> *local_2240;
  TAttribute<float> *local_2238;
  FSlotArguments *local_2230;
  FName *local_2228;
  FName local_2220;
  code *local_2218;
  FSlateBrush *local_2210;
  TAttribute<FSlateBrush_const_*> *local_2208;
  TAttribute<FSlateBrush_const_*> *local_2200;
  FArguments *local_21f8;
  TAttribute<FMargin> *local_21f0;
  TAttribute<FMargin> *local_21e8;
  FArguments *local_21e0;
  TArray<TSharedPtr<IMessageLogListing,1>,TSizedDefaultAllocator<32>_> *local_21d8;
  FArguments *local_21d0;
  FArguments *local_21c8;
  FArguments *local_21c0;
  undefined1 *local_21b8;
  TAttribute<ESelectionMode::Type> *local_21b0;
  FArguments *local_21a8;
  TAttribute<EVisibility> *local_21a0;
  TAttribute<EVisibility> *local_2198;
  FArguments *local_2190;
  FName local_2188;
  TAttribute<FText> *local_2180;
  TAttribute<FText> *local_2178;
  FArguments *local_2170;
  double local_2168;
  TAttribute<float> *local_2160;
  TAttribute<float> *local_2158;
  FArguments *local_2150;
  FArguments *local_2148;
  FArguments *local_2140;
  FArguments *local_2138;
  TSharedPtr<SHeaderRow,1> *local_2130;
  TSharedPtr<SHeaderRow,1> *local_2128;
  FArguments *local_2120;
  TSlateDecl<SListView<TSharedPtr<IMessageLogListing,1>_>,RequiredArgs::T0RequiredArgs> *local_2118;
  FArguments *local_2110;
  FArguments *local_2108;
  FArguments *local_2100;
  FSlotArguments *local_20f8;
  FSlotArguments *local_20f0;
  FArguments *local_20e8;
  TAttribute<float> *local_20e0;
  TAttribute<float> *local_20d8;
  FSlotArguments *local_20d0;
  FName *local_20c8;
  FName local_20c0;
  code *local_20b8;
  FSlateBrush *local_20b0;
  TAttribute<FSlateBrush_const_*> *local_20a8;
  TAttribute<FSlateBrush_const_*> *local_20a0;
  FArguments *local_2098;
  FArguments *local_2090;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> *local_2088;
  FArguments *local_2080;
  FSlotArguments *local_2078;
  FSlotArguments *local_2070;
  FArguments *local_2068;
  FArguments *local_2060;
  FArguments *local_2058;
  FArguments *local_2050;
  TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *local_2048;
  undefined4 local_2040;
  undefined4 local_203c;
  TSharedPtr<IMessageLogListing,1> *local_2038;
  TSharedPtr<IMessageLogListing,1> *local_2030;
  TSharedPtr<IMessageLogListing,1> *local_2028;
  TSharedPtr<IMessageLogListing,1> *local_2020;
  FScriptContainerElement *local_2018;
  FScriptContainerElement *local_2010;
  FScriptContainerElement *local_2008;
  FScriptContainerElement *local_2000;
  FName *local_1ff8;
  FMessageLogViewModel *local_1ff0;
  TSharedPtr<IMessageLogListing,1> *local_1fe8;
  TSharedPtr<IMessageLogListing,1> *local_1fe0;
  SListView<TSharedPtr<IMessageLogListing,1>_> *local_1fd8;
  FOnSelectionChangedEvent *local_1fd0;
  FChangedEvent *local_1fc8;
  FName *local_1fc0;
  TSharedPtr<IMessageLogListing,1> local_1fb8;
  TSharedPtr<IMessageLogListing,1> local_1fa8;
  code *local_1f98;
  undefined4 local_1f90;
  TSharedRef<SWidget,1> local_1f88;
  TSharedRef<SWidget,1> local_1f78;
  TSharedRef<SWidget,1> local_1f68;
  TSharedRef<SWidget,1> local_1f58;
  code *local_1f48;
  undefined4 local_1f40;
  TSharedPtr<FMessageLogViewModel,1> local_1f38;
  code *local_1f28;
  undefined4 local_1f20;
  code *local_1f18;
  undefined4 local_1f10;
  TSharedRef<SWidget,1> local_1f08;
  undefined1 local_1ef8 [16];
  FName local_1ee8;
  FName local_1ee0;
  FName local_1ed8;
  FName local_1ed0;
  undefined1 local_1ec8 [16];
  pmf_9965c4e0 local_1eb8;
  undefined1 local_1ea8 [16];
  pmf_1bda0bfe local_1e98;
  TSharedRef<SBorder,1> local_1e88;
  TSharedRef<SSplitter,1> local_1e78;
  TSharedRef<SBorder,1> local_1e68;
  TSharedRef<SBorder,1> local_1e58;
  TSharedRef<SListView<TSharedPtr<IMessageLogListing,1>_>,1> local_1e48;
  TSharedRef<SHeaderRow,1> local_1e38;
  FText local_1e28;
  TSharedPtr<FMessageLogListingViewModel,1> local_1e18;
  undefined1 local_1e08 [16];
  undefined1 local_1df8 [16];
  undefined1 local_1de8 [16];
  undefined1 local_1dd8 [16];
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_1dc8;
  TSlateDecl<SSplitter,RequiredArgs::T0RequiredArgs> local_1db0;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_1d98;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_1d80;
  TSlateDecl<SListView<TSharedPtr<IMessageLogListing,1>_>,RequiredArgs::T0RequiredArgs> local_1d68;
  TSlateDecl<SHeaderRow,RequiredArgs::T0RequiredArgs> local_1d50;
  FMargin local_1d38;
  FMargin local_1d28;
  TSharedPtr<SHeaderRow,1> local_1d18;
  TSharedPtr<IMessageLogListing,1> local_1d08;
  TAttribute<float> local_1cf8;
  undefined1 local_1cd8 [32];
  TAttribute<EVisibility> local_1cb8;
  TAttribute<float> local_1c98;
  TAttribute<float> local_1c78;
  TAttribute<FSlateBrush_const_*> local_1c58;
  TAttribute<FSlateBrush_const_*> local_1c30;
  TAttribute<FSlateBrush_const_*> local_1c08;
  TAttribute<FMargin> local_1be0;
  TAttribute<FMargin> local_1bb0;
  TAttribute<FText> local_1b80;
  FSlotArguments local_1b50;
  FSlotArguments local_1ab8;
  FArguments local_1a20;
  FArguments local_17a8;
  FArguments local_1518;
  FArguments local_1138;
  FArguments local_d58;
  FArguments local_978;
  FArguments local_500;
  undefined8 uStack_18;
  
  uStack_18 = 0x142bda44b;
  TSharedPtr<FMessageLogViewModel,1>::TSharedPtr<FMessageLogViewModel,1><FMessageLogViewModel>
            (&local_1f38,param_2);
  TSharedPtr<FMessageLogViewModel,1>::operator=(&this->ViewModel,&local_1f38);
  TSharedPtr<FMessageLogViewModel,1>::~TSharedPtr<FMessageLogViewModel,1>(&local_1f38);
  local_2048 = (TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *)
               &this->_padding_;
  local_2288 = SBorder::FArguments::FArguments(&local_d58);
  local_2298 = &local_1c58;
  local_22e0 = FAppStyle::Get();
  local_22a8 = *(code **)((longlong)*local_22e0 + 0x50);
  local_1fc0 = &local_1ee8;
  pFVar3 = ::FName::FName(local_1fc0,"Brushes.Panel");
  local_22b0 = *pFVar3;
  local_22a0 = (FSlateBrush *)(*local_22a8)(local_22e0,local_22b0,0);
  local_2290 = TAttribute<FSlateBrush_const_*>::TAttribute<FSlateBrush_const_*>
                         (local_2298,&local_22a0);
  local_2270 = SBorder::FArguments::BorderImage(local_2288,local_2290);
  local_2280 = &local_1be0;
  pFVar4 = FMargin::FMargin(&local_1d38,__real_4034000000000000,__real_402bf0a3e0000000,
                            __real_4030000000000000,__real_4030000000000000);
  local_2278 = TAttribute<FMargin>::TAttribute<FMargin>(local_2280,pFVar4);
  local_2058 = SBorder::FArguments::Padding(local_2270,local_2278);
  local_2268 = SSplitter::FArguments::FArguments(&local_17a8);
  local_2250 = SSplitter::FArguments::Orientation(local_2268,Orient_Horizontal);
  ::FName::FName(&local_2260,"SplitterPanel");
  local_2258 = FAppStyle::Get();
  local_2248 = SSplitter::FArguments::Style(local_2250,local_2258,&local_2260,(char *)0x0);
  local_20e8 = SSplitter::FArguments::PhysicalSplitterHandleSize(local_2248,__real_41200000);
  local_2230 = SSplitter::Slot(&local_1ab8);
  local_2240 = &local_1cf8;
  local_22f8 = __real_3e8f5c29;
  local_2238 = TAttribute<float>::TAttribute<float>(local_2240,&local_22f8);
  local_20f8 = SSplitter::FSlot::FSlotArguments::Value(local_2230,local_2238);
  local_21f8 = SBorder::FArguments::FArguments(&local_1138);
  local_2208 = &local_1c30;
  local_22d8 = FAppStyle::Get();
  local_2218 = *(code **)((longlong)*local_22d8 + 0x50);
  local_2228 = &local_1ee0;
  pFVar3 = ::FName::FName(local_2228,"Brushes.Recessed");
  local_2220 = *pFVar3;
  local_2210 = (FSlateBrush *)(*local_2218)(local_22d8,local_2220,0,0);
  local_2200 = TAttribute<FSlateBrush_const_*>::TAttribute<FSlateBrush_const_*>
                         (local_2208,&local_2210);
  local_21e0 = SBorder::FArguments::BorderImage(local_21f8,local_2200);
  local_21f0 = &local_1bb0;
  pFVar4 = FMargin::FMargin(&local_1d28,__real_4030000000000000,__real_4020000000000000,0.0,0.0);
  local_21e8 = TAttribute<FMargin>::TAttribute<FMargin>(local_21f0,pFVar4);
  local_2108 = SBorder::FArguments::Padding(local_21e0,local_21e8);
  local_21d0 = SListView<TSharedPtr<IMessageLogListing,1>_>::FArguments::FArguments(&local_500);
  pFVar5 = TSharedPtr<FMessageLogViewModel,1>::operator->(&this->ViewModel);
  local_21d8 = FMessageLogViewModel::GetLogListingViewModels(pFVar5);
  local_21c8 = SListView<TSharedPtr<IMessageLogListing,1>_>::FArguments::ListItemsSource
                         (local_21d0,local_21d8);
  local_1f98 = HandleCategoriesListGenerateRow;
  local_1f90 = 0;
  ppcVar14 = &local_1f98;
  puVar15 = local_1ec8;
  for (lVar13 = 0x10; lVar13 != 0; lVar13 = lVar13 + -1) {
    *puVar15 = *(undefined1 *)ppcVar14;
    ppcVar14 = (code **)((longlong)ppcVar14 + 1);
    puVar15 = puVar15 + 1;
  }
  puVar15 = local_1ec8;
  ppVar16 = &local_1eb8;
  for (lVar13 = 0x10; lVar13 != 0; lVar13 = lVar13 + -1) {
    *(undefined1 *)ppVar16 = *puVar15;
    puVar15 = puVar15 + 1;
    ppVar16 = (pmf_9965c4e0 *)&ppVar16->field_0x1;
  }
  local_21c0 = SListView<TSharedPtr<IMessageLogListing,1>_>::FArguments::OnGenerateRow<SMessageLog>
                         (local_21c8,this,&local_1eb8);
  local_1f18 = HandleCategoriesListSelectionChanged;
  local_1f10 = 0;
  ppcVar14 = &local_1f18;
  puVar15 = local_1ea8;
  for (lVar13 = 0x10; lVar13 != 0; lVar13 = lVar13 + -1) {
    *puVar15 = *(undefined1 *)ppcVar14;
    ppcVar14 = (code **)((longlong)ppcVar14 + 1);
    puVar15 = puVar15 + 1;
  }
  puVar15 = local_1ea8;
  ppVar17 = &local_1e98;
  for (lVar13 = 0x10; lVar13 != 0; lVar13 = lVar13 + -1) {
    *(undefined1 *)ppVar17 = *puVar15;
    puVar15 = puVar15 + 1;
    ppVar17 = (pmf_1bda0bfe *)&ppVar17->field_0x1;
  }
  local_21a8 = SListView<TSharedPtr<IMessageLogListing,1>_>::FArguments::
               OnSelectionChanged<SMessageLog>(local_21c0,this,&local_1e98);
  local_21b8 = local_1cd8;
  local_22f4 = Single;
  local_21b0 = TAttribute<enum_ESelectionMode::Type>::TAttribute<enum_ESelectionMode::Type>
                         (local_21b8,&local_22f4);
  local_2120 = SListView<TSharedPtr<IMessageLogListing,1>_>::FArguments::SelectionMode
                         (local_21a8,local_21b0);
  local_2130 = &local_1d18;
  local_2190 = SHeaderRow::FArguments::FArguments(&local_1a20);
  local_21a0 = &local_1cb8;
  local_2198 = TAttribute<EVisibility>::TAttribute<EVisibility><EVisibility>
                         (local_21a0,&EVisibility::Collapsed);
  local_2140 = TSlateBaseNamedArgs<SHeaderRow>::Visibility
                         ((TSlateBaseNamedArgs<SHeaderRow> *)local_2190,local_2198);
  ::FName::FName(&local_2188,"Name");
  local_2170 = SHeaderRow::Column(&local_978,&local_2188);
  local_2180 = &local_1b80;
  pFVar6 = FText::AsLocalizable_Advanced_LocText
                     (&local_1e28,L"SMessageLog",L"CategoriesListNameColumnHeader",L"Category");
  local_2178 = TAttribute<FText>::TAttribute<FText>(local_2180,pFVar6);
  local_2150 = SHeaderRow::FColumn::FArguments::DefaultLabel(local_2170,local_2178);
  local_2160 = &local_1c98;
  local_2168 = __real_3ff0000000000000;
  local_2158 = TAttribute<float>::TAttribute<float><double>(local_2160,&local_2168);
  local_2148 = SHeaderRow::FColumn::FArguments::FillWidth(local_2150,local_2158);
  local_2138 = SHeaderRow::FArguments::operator+(local_2140,local_2148);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_2317);
  this_00 = MakeTDecl<SHeaderRow,RequiredArgs::T0RequiredArgs>
                      (&local_1d50,"SHeaderRow",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MessageLog\\Private\\UserInterface\\SMessageLog.cpp"
                       ,0x38,&local_2317);
  pTVar7 = TSlateDecl<SHeaderRow,RequiredArgs::T0RequiredArgs>::operator<<=
                     (this_00,&local_1e38,local_2138);
  local_2128 = TSharedPtr<SHeaderRow,1>::TSharedPtr<SHeaderRow,1><SHeaderRow>(local_2130,pTVar7);
  local_2110 = SListView<TSharedPtr<IMessageLogListing,1>_>::FArguments::HeaderRow
                         (local_2120,local_2128);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_2316);
  local_2118 = MakeTDecl<SListView<TSharedPtr<IMessageLogListing,1>_>,RequiredArgs::T0RequiredArgs>
                         (&local_1d68,"SListView<IMessageLogListingPtr>",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MessageLog\\Private\\UserInterface\\SMessageLog.cpp"
                          ,0x31,&local_2316);
  this_01 = TSlateDecl<SListView<TSharedPtr<IMessageLogListing,1>_>,RequiredArgs::T0RequiredArgs>::
            Expose<SListView<TSharedPtr<IMessageLogListing,1>_>_>
                      (local_2118,&this->CategoriesListView);
  pTVar8 = TSlateDecl<SListView<TSharedPtr<IMessageLogListing,1>_>,RequiredArgs::T0RequiredArgs>::
           operator<<=(this_01,&local_1e48,local_2110);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SListView<TSharedPtr<IMessageLogListing,1>_>_>
            (&local_1f58,pTVar8);
  local_2100 = SBorder::FArguments::operator[](local_2108,&local_1f58);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_2315);
  pTVar9 = MakeTDecl<SBorder,RequiredArgs::T0RequiredArgs>
                     (&local_1d80,"SBorder",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MessageLog\\Private\\UserInterface\\SMessageLog.cpp"
                      ,0x2c,&local_2315);
  pTVar10 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar9,&local_1e58,local_2100);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SBorder>(&local_1f68,pTVar10);
  local_20f0 = TSlotBase<SSplitter::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_20f8,&local_1f68);
  local_2068 = SSplitter::FArguments::operator+(local_20e8,local_20f0);
  local_20d0 = SSplitter::Slot(&local_1b50);
  local_20e0 = &local_1c78;
  local_22f0 = __real_3f3851ec;
  local_20d8 = TAttribute<float>::TAttribute<float>(local_20e0,&local_22f0);
  local_2078 = SSplitter::FSlot::FSlotArguments::Value(local_20d0,local_20d8);
  local_2098 = SBorder::FArguments::FArguments(&local_1518);
  local_20a8 = &local_1c08;
  local_22d0 = FAppStyle::Get();
  local_20b8 = *(code **)((longlong)*local_22d0 + 0x50);
  local_20c8 = &local_1ed8;
  pFVar3 = ::FName::FName(local_20c8,"Brushes.Recessed");
  local_20c0 = *pFVar3;
  local_20b0 = (FSlateBrush *)(*local_20b8)(local_22d0,local_20c0,0,0);
  local_20a0 = TAttribute<FSlateBrush_const_*>::TAttribute<FSlateBrush_const_*>
                         (local_20a8,&local_20b0);
  local_2090 = SBorder::FArguments::BorderImage(local_2098,local_20a0);
  local_2080 = SBorder::FArguments::Padding(local_2090,0.0);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_2314);
  local_2088 = MakeTDecl<SBorder,RequiredArgs::T0RequiredArgs>
                         (&local_1d98,"SBorder",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MessageLog\\Private\\UserInterface\\SMessageLog.cpp"
                          ,0x45,&local_2314);
  pTVar9 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::Expose<SBorder>
                     (local_2088,&this->CurrentListingDisplay);
  pTVar10 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar9,&local_1e68,local_2080);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SBorder>(&local_1f78,pTVar10);
  local_2070 = TSlotBase<SSplitter::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_2078,&local_1f78);
  local_2060 = SSplitter::FArguments::operator+(local_2068,local_2070);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_2313);
  this_02 = MakeTDecl<SSplitter,RequiredArgs::T0RequiredArgs>
                      (&local_1db0,"SSplitter",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MessageLog\\Private\\UserInterface\\SMessageLog.cpp"
                       ,0x24,&local_2313);
  pTVar11 = TSlateDecl<SSplitter,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_02,&local_1e78,local_2060);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SSplitter>(&local_1f88,pTVar11);
  local_2050 = SBorder::FArguments::operator[](local_2058,&local_1f88);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_2312);
  pTVar9 = MakeTDecl<SBorder,RequiredArgs::T0RequiredArgs>
                     (&local_1dc8,"SBorder",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MessageLog\\Private\\UserInterface\\SMessageLog.cpp"
                      ,0x20,&local_2312);
  pTVar10 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar9,&local_1e88,local_2050);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SBorder>(&local_1f08,pTVar10);
  TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>::operator[]
            (local_2048,&local_1f08);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_1f08);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_1e88.SharedReferenceCount);
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>(&local_1dc8);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_1f88);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_1e78.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_1db0._Widget.SharedReferenceCount);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_1f78);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_1e68.SharedReferenceCount);
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>(&local_1d98);
  SBorder::FArguments::~FArguments(&local_1518);
  SSplitter::FSlot::FSlotArguments::~FSlotArguments(&local_1b50);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_1f68);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_1e58.SharedReferenceCount);
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>(&local_1d80);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_1f58);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_1e48.SharedReferenceCount);
  TSharedPtr<SListView<TSharedPtr<IMessageLogListing,1>_>,1>::
  ~TSharedPtr<SListView<TSharedPtr<IMessageLogListing,1>_>,1>(&local_1d68._Widget);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_1e38.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_1d50._Widget.SharedReferenceCount);
  FText::~FText(&local_1e28);
  SHeaderRow::FColumn::FArguments::~FArguments(&local_978);
  SHeaderRow::FArguments::~FArguments(&local_1a20);
  SListView<TSharedPtr<IMessageLogListing,1>_>::FArguments::~FArguments(&local_500);
  SBorder::FArguments::~FArguments(&local_1138);
  SSplitter::FSlot::FSlotArguments::~FSlotArguments(&local_1ab8);
  SSplitter::FArguments::~FArguments(&local_17a8);
  SBorder::FArguments::~FArguments(&local_d58);
  pFVar5 = TSharedPtr<FMessageLogViewModel,1>::operator->(&this->ViewModel);
  local_2300 = FMessageLogViewModel::GetLogListingViewModels(pFVar5);
  local_22ec = local_2300->ArrayNum;
  if (0 < local_22ec) {
    local_2308 = 1;
    local_230c = (uint)(0 < local_2300->ArrayNum);
    if (local_230c == 0) {
      local_2040 = 0;
      local_203c = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_2038 = (TSharedPtr<IMessageLogListing,1> *)(local_2300->AllocatorInstance).Data;
    local_2030 = local_2038;
    local_2028 = local_2038;
    local_2020 = local_2038;
    TSharedPtr<IMessageLogListing,1>::TSharedPtr<IMessageLogListing,1>(&local_1fa8,local_2038);
    bVar2 = FPaths::FileExists(&GEditorPerProjectIni);
    if (bVar2) {
      ::FString::FString(&local_22c0);
      bVar2 = FConfigCacheIni::GetString
                        (GConfig,L"MessageLog",L"LastLogListing",&local_22c0,&GEditorPerProjectIni);
      if (bVar2) {
        local_1ff0 = TSharedPtr<FMessageLogViewModel,1>::operator->(&this->ViewModel);
        local_22e8 = local_22c0.Data.ArrayNum;
        if (local_22c0.Data.ArrayNum == 0) {
          local_22c8 = (FScriptContainerElement *)
                       `FString::operator*'::__l2::<lambda_1>::operator()(local_2310);
        }
        else {
          local_2018 = local_22c0.Data.AllocatorInstance.Data;
          local_2010 = local_22c0.Data.AllocatorInstance.Data;
          local_2008 = local_22c0.Data.AllocatorInstance.Data;
          local_22c8 = local_22c0.Data.AllocatorInstance.Data;
        }
        local_2000 = local_22c8;
        local_1ff8 = ::FName::FName(&local_1ed0,(wchar_t *)local_22c8);
        pTVar12 = FMessageLogViewModel::FindLogListingViewModel(local_1ff0,&local_1e18,local_1ff8);
        TSharedPtr<IMessageLogListing,1>::
        TSharedPtr<IMessageLogListing,1><FMessageLogListingViewModel>(&local_1fb8,pTVar12);
        TSharedPtr<FMessageLogListingViewModel,1>::~TSharedPtr<FMessageLogListingViewModel,1>
                  (&local_1e18);
        local_2311 = local_1fb8.Object != (IMessageLogListing *)0x0;
        if ((bool)local_2311) {
          TSharedPtr<IMessageLogListing,1>::operator=(&local_1fa8,&local_1fb8);
        }
        TSharedPtr<IMessageLogListing,1>::~TSharedPtr<IMessageLogListing,1>(&local_1fb8);
      }
      ::FString::~FString(&local_22c0);
    }
    local_1fd8 = TSharedPtr<SListView<TSharedPtr<IMessageLogListing,1>_>,1>::operator->
                           (&this->CategoriesListView);
    local_1fe8 = &local_1d08;
    local_1fe0 = TSharedPtr<IMessageLogListing,1>::TSharedPtr<IMessageLogListing,1>
                           (local_1fe8,&local_1fa8);
    SListView<TSharedPtr<IMessageLogListing,1>_>::SetSelection(local_1fd8,local_1fe0,Direct);
    TSharedPtr<IMessageLogListing,1>::~TSharedPtr<IMessageLogListing,1>(&local_1fa8);
  }
  pFVar5 = TSharedPtr<FMessageLogViewModel,1>::operator->(&this->ViewModel);
  local_1fd0 = FMessageLogViewModel::OnSelectionChanged(pFVar5);
  local_1f28 = HandleSelectionUpdated;
  local_1f20 = 0;
  ppcVar14 = &local_1f28;
  puVar15 = local_1e08;
  for (lVar13 = 0x10; lVar13 != 0; lVar13 = lVar13 + -1) {
    *puVar15 = *(undefined1 *)ppcVar14;
    ppcVar14 = (code **)((longlong)ppcVar14 + 1);
    puVar15 = puVar15 + 1;
  }
  puVar15 = local_1e08;
  puVar18 = local_1df8;
  for (lVar13 = 0x10; lVar13 != 0; lVar13 = lVar13 + -1) {
    *puVar18 = *puVar15;
    puVar15 = puVar15 + 1;
    puVar18 = puVar18 + 1;
  }
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::AddSP<SMessageLog>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             local_1fd0,(SMessageLog *)local_1ef8,(pmf_7082397c *)this);
  pFVar5 = TSharedPtr<FMessageLogViewModel,1>::operator->(&this->ViewModel);
  local_1fc8 = FMessageLogViewModel::OnChanged(pFVar5);
  local_1f48 = RefreshCategoryList;
  local_1f40 = 0;
  ppcVar14 = &local_1f48;
  puVar15 = local_1de8;
  for (lVar13 = 0x10; lVar13 != 0; lVar13 = lVar13 + -1) {
    *puVar15 = *(undefined1 *)ppcVar14;
    ppcVar14 = (code **)((longlong)ppcVar14 + 1);
    puVar15 = puVar15 + 1;
  }
  puVar15 = local_1de8;
  puVar18 = local_1dd8;
  for (lVar13 = 0x10; lVar13 != 0; lVar13 = lVar13 + -1) {
    *puVar18 = *puVar15;
    puVar15 = puVar15 + 1;
    puVar18 = puVar18 + 1;
  }
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::AddSP<SMessageLog>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             local_1fc8,(SMessageLog *)(local_1ef8 + 8),(pmf_7082397c *)this);
  return;
}

// HandleCategoriesListGenerateRow @ 142c02350

TSharedRef<ITableRow,1> * __thiscall
SMessageLog::HandleCategoriesListGenerateRow
          (SMessageLog *this,TSharedRef<ITableRow,1> *__return_storage_ptr__,
          TSharedPtr<IMessageLogListing,1> *param_1,TSharedRef<STableViewBase,1> *param_2)

{
  code *pcVar1;
  SMessageLogCategoryListRow *pSVar2;
  bool bVar3;
  FArguments *pFVar4;
  TSharedRef<ITableRow,1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSharedRef<SMessageLogCategoryListRow,1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  FLLMScope local_res10 [2];
  FName local_res18;
  FMemScope local_res20;
  TSlateDecl<SMessageLogCategoryListRow,RequiredArgs::T2RequiredArgs<TSharedRef<IMessageLogListing,1>_&&,TSharedRef<STableViewBase,1>_const_&>_>
  local_298;
  TSharedRef<IMessageLogListing,1> local_280;
  undefined8 local_270;
  FSharedReferencer<1> local_268;
  T2RequiredArgs<TSharedRef<IMessageLogListing,1>_&&,TSharedRef<STableViewBase,1>_const_&> local_260
  ;
  TSharedRef<SMessageLogCategoryListRow,1> local_250;
  TSharedRef<SMessageLogCategoryListRow,1> local_240;
  FSlateBaseNamedArgs local_230;
  
  pFVar4 = SMessageLogCategoryListRow::FArguments::FArguments((FArguments *)&local_230);
  if ((param_1->Object == (IMessageLogListing *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<ITableRow,1> *)(*pcVar1)();
    return pTVar5;
  }
  local_280.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  local_280.Object = param_1->Object;
  if (local_280.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_280.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_280.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((local_280.Object == (IMessageLogListing *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<ITableRow,1> *)(*pcVar1)();
    return pTVar5;
  }
  local_260.Arg0 = &local_280;
  local_260.Arg1 = param_2;
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_res20,&local_res18,true);
  local_298._RequiredArgs = &local_260;
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  local_298._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar6 = ::operator_new(0x478);
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VSMessageLogCategoryListRow___00_SharedPointerInternals__6B_
    ;
    memset(pTVar6 + 1,0,0x468);
    STableRow<TSharedPtr<IMessageLogListing,1>_>::STableRow<TSharedPtr<IMessageLogListing,1>_>
              ((STableRow<TSharedPtr<IMessageLogListing,1>_> *)(pTVar6 + 1));
    pTVar6[0x40].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x40].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x41]._padding_ = 0;
    pTVar6[0x41].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x41].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x42]._padding_ = 0;
    pTVar6[0x43].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x43].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar6[0x44]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar6[0x44]._padding_ + 4) = 0x80;
    pTVar6[0x44].SharedReferenceCount = (atomic<int>)0xffffffff;
    pTVar6[0x44].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x45].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x45].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar6[0x46]._padding_ = 0;
    pTVar6[1]._padding_ = (longlong)&SMessageLogCategoryListRow::_vftable__for__ITableRow__;
    *(undefined ***)&pTVar6[1].SharedReferenceCount =
         &SMessageLogCategoryListRow::_vftable__for__SBorder__;
    pTVar6[0x46].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x46].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x47]._padding_ = 0;
    pTVar8 = pTVar6;
  }
  TSharedRef<SMessageLogCategoryListRow,1>::TSharedRef<SMessageLogCategoryListRow,1>
            (&local_250,(SMessageLogCategoryListRow *)(pTVar8 + 1),pTVar8);
  local_268.ReferenceController = local_250.SharedReferenceCount.ReferenceController;
  if (local_250.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_250.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_250.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_298._Widget.Object = local_250.Object;
  local_270 = 0;
  SharedPointerInternals::FSharedReferencer<1>::operator=
            (&local_298._Widget.SharedReferenceCount,&local_268);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_268.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_250.SharedReferenceCount.ReferenceController);
  pSVar2 = local_298._Widget.Object;
  if ((local_298._Widget.Object == (SMessageLogCategoryListRow *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<ITableRow,1> *)(*pcVar1)();
    return pTVar5;
  }
  SWidget::SetDebugInfo
            ((SWidget *)&pSVar2->_padding_,"SMessageLogCategoryListRow",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MessageLog\\Private\\UserInterface\\SMessageLog.cpp"
             ,0x92,0x468);
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res10);
  pTVar7 = TSlateDecl<SMessageLogCategoryListRow,RequiredArgs::T2RequiredArgs<TSharedRef<IMessageLogListing,1>_&&,TSharedRef<STableViewBase,1>_const_&>_>
           ::operator<<=(&local_298,&local_240,pFVar4);
  __return_storage_ptr__->Object = (ITableRow *)pTVar7->Object;
  pTVar8 = (pTVar7->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar8;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_240.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_298._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_280.SharedReferenceCount.ReferenceController);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs(&local_230);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// HandleCategoriesListSelectionChanged @ 142c02660

void __thiscall
SMessageLog::HandleCategoriesListSelectionChanged
          (SMessageLog *this,TSharedPtr<IMessageLogListing,1> *param_1,Type param_2)

{
  byte *pbVar1;
  SBorder *pSVar2;
  code *pcVar3;
  SMessageLogListing *pSVar4;
  FSharedReferencer<1> FVar5;
  bool bVar6;
  char cVar7;
  byte bVar8;
  FSlateBaseNamedArgs *pFVar9;
  FLLMScope local_res10 [2];
  FName local_res20;
  TSlateDecl<SMessageLogListing,RequiredArgs::T1RequiredArgs<TSharedRef<IMessageLogListing,1>_&&>_>
  local_288;
  TSharedRef<IMessageLogListing,1> local_270;
  T1RequiredArgs<TSharedRef<IMessageLogListing,1>_&&> local_260;
  FMemScope local_258;
  SMessageLogListing *local_250;
  TReferenceControllerBase<1> *local_248;
  SWidget *local_240;
  TReferenceControllerBase<1> *local_238;
  SMessageLogListing *local_230;
  TReferenceControllerBase<1> *pTStack_228;
  FSlateBaseNamedArgs local_220;
  
  pSVar2 = (this->CurrentListingDisplay).Object;
  if (param_1->Object == (IMessageLogListing *)0x0) {
    if (pSVar2 == (SBorder *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pSVar2 = (this->CurrentListingDisplay).Object;
    pcVar3 = *(code **)(pSVar2->_padding_ + 0x248);
    local_240 = SNullWidget::NullWidget.Object;
    local_238 = SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
    if (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    (*pcVar3)(pSVar2,&local_240);
    goto LAB_142c02a2a;
  }
  if (pSVar2 == (SBorder *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pSVar2 = (this->CurrentListingDisplay).Object;
  pcVar3 = *(code **)(pSVar2->_padding_ + 0x248);
  pFVar9 = (FSlateBaseNamedArgs *)
           SMessageLogListing::FArguments::FArguments((FArguments *)&local_220);
  if (param_1->Object == (IMessageLogListing *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_270.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  local_270.Object = param_1->Object;
  if (local_270.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_270.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_270.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (local_270.Object == (IMessageLogListing *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_260.Arg0 = &local_270;
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res20 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_258,&local_res20,true);
  TSlateDecl<SMessageLogListing,RequiredArgs::T1RequiredArgs<TSharedRef<IMessageLogListing,1>_&&>_>
  ::
  TSlateDecl<SMessageLogListing,RequiredArgs::T1RequiredArgs<TSharedRef<IMessageLogListing,1>_&&>_>
            (&local_288,"SMessageLogListing",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MessageLog\\Private\\UserInterface\\SMessageLog.cpp"
             ,0x9a,&local_260);
  FMemScope::~FMemScope(&local_258);
  FLLMScope::~FLLMScope(local_res10);
  if (local_288._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_288._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_288._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_230 = (this->LogListing).Object;
  pTStack_228 = (this->LogListing).SharedReferenceCount.ReferenceController;
  (this->LogListing).Object = local_288._Widget.Object;
  (this->LogListing).SharedReferenceCount.ReferenceController =
       local_288._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_228);
  pSVar4 = local_288._Widget.Object;
  if (local_288._Widget.Object == (SMessageLogListing *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)local_288._Widget.Object,pFVar9);
  SMessageLogListing::Construct
            (local_288._Widget.Object,(FArguments *)pFVar9,(local_288._RequiredArgs)->Arg0);
  if (local_288._Widget.Object == (SMessageLogListing *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (((local_288._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar7 = (**(code **)((local_288._Widget.Object)->_padding_ + 0x228))(local_288._Widget.Object);
    bVar8 = 0;
    if (cVar7 != '\0') goto LAB_142c028b5;
  }
  else {
LAB_142c028b5:
    bVar8 = 0x20;
  }
  *(byte *)&(local_288._Widget.Object)->_padding_ =
       (byte)(local_288._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_288._Widget.Object)->_padding_ =
       (byte)(local_288._Widget.Object)->_padding_ | bVar8;
  if (local_288._Widget.Object == (SMessageLogListing *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pbVar1 = (byte *)((longlong)&(local_288._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if (local_288._Widget.Object == (SMessageLogListing *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FVar5.ReferenceController = local_288._Widget.SharedReferenceCount.ReferenceController;
  local_288._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_288._Widget.Object = (SMessageLogListing *)0x0;
  if (pSVar4 == (SMessageLogListing *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_250 = pSVar4;
  local_248 = FVar5.ReferenceController;
  if (FVar5.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar5.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar5.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  (*pcVar3)(pSVar2,&local_250);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar5.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_270.SharedReferenceCount.ReferenceController);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs(&local_220);
LAB_142c02a2a:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// HandleSelectionUpdated @ 142c02e20

void __thiscall SMessageLog::HandleSelectionUpdated(SMessageLog *this)

{
  TSharedPtr<SListView<TSharedPtr<IMessageLogListing,1>_>,1> *pTVar1;
  longlong *plVar2;
  FMessageLogViewModel *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  FMessageLogListingViewModel *pFVar5;
  SListView<TSharedPtr<IMessageLogListing,1>_> *pSVar6;
  code *pcVar7;
  bool bVar8;
  char cVar9;
  Type *pTVar10;
  FMessageLogListingViewModel *local_28;
  TReferenceControllerBase<1> *local_20;
  TSharedPtr<IMessageLogListing,1> local_18;
  
  if (((this->ViewModel).Object == (FMessageLogViewModel *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar3 = (this->ViewModel).Object;
  pTVar4 = (pFVar3->SelectedLogListingViewModel).SharedReferenceCount.ReferenceController;
  pFVar5 = (pFVar3->SelectedLogListingViewModel).Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pFVar5 != (FMessageLogListingViewModel *)0x0) {
    if (((this->CategoriesListView).Object == (SListView<TSharedPtr<IMessageLogListing,1>_> *)0x0)
       && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pTVar1 = &this->CategoriesListView;
    pSVar6 = pTVar1->Object;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_28 = pFVar5;
    local_20 = pTVar4;
    pTVar10 = TAttribute<enum_ESelectionMode::Type>::Get(&pSVar6->_padding_);
    if (*pTVar10 == None) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
    }
    else {
      plVar2 = &pSVar6->_padding_;
      cVar9 = (**(code **)(*plVar2 + 0x10))(plVar2,&local_28);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
      if (cVar9 != '\0') goto LAB_142c02f8e;
    }
    if ((pTVar1->Object == (SListView<TSharedPtr<IMessageLogListing,1>_> *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pSVar6 = pTVar1->Object;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_18.Object = (IMessageLogListing *)pFVar5;
    local_18.SharedReferenceCount.ReferenceController = pTVar4;
    SListView<TSharedPtr<IMessageLogListing,1>_>::SetSelection(pSVar6,&local_18,Direct);
  }
LAB_142c02f8e:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// OnKeyDown @ 142c0f950

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SMessageLog::OnKeyDown
          (SMessageLog *this,FReply *__return_storage_ptr__,FGeometry *param_1,FKeyEvent *param_2)

{
  SMessageLogListing *pSVar1;
  FUICommandList *this_00;
  TReferenceControllerBase<1> *pTVar2;
  bool bVar3;
  FReply *this_01;
  FReply local_178;
  FReply local_c0;
  
  pSVar1 = (this->LogListing).Object;
  if (pSVar1 == (SMessageLogListing *)0x0) {
    FReply::FReply(__return_storage_ptr__,false);
  }
  else {
    this_00 = (pSVar1->UICommandList).Object;
    pTVar2 = (pSVar1->UICommandList).SharedReferenceCount.ReferenceController;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar3 = FUICommandList::ProcessCommandBindings(this_00,param_2);
    this_01 = &local_178;
    if (bVar3) {
      this_01 = &local_c0;
    }
    FReply::FReply(this_01,bVar3);
    FReply::FReply(__return_storage_ptr__,this_01);
    if ((!bVar3 + 1U & 2) != 0) {
      FReply::~FReply(&local_178);
    }
    if (bVar3) {
      FReply::~FReply(&local_c0);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  }
  return __return_storage_ptr__;
}

// RefreshCategoryList @ 142c1f9c0

void __thiscall SMessageLog::RefreshCategoryList(SMessageLog *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->CategoriesListView).Object == (SListView<TSharedPtr<IMessageLogListing,1>_> *)0x0) {
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
                    /* WARNING: Could not recover jumptable at 0x000142c1fa08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(((this->CategoriesListView).Object)->_padding_ + 0x248))();
  return;
}

