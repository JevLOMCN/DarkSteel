// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DrawPrimitiveDebugger
// Functions: 43

// ~SPrimitiveDebuggerDetailView @ 146d04ba0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
SPrimitiveDebuggerDetailView::~SPrimitiveDebuggerDetailView(SPrimitiveDebuggerDetailView *this)

{
  this->_padding_ = (longlong)&___7SPrimitiveDebuggerDetailView__6B_;
  FText::~FText(&this->SelectedPrimitiveType);
  FText::~FText(&this->SelectedActorClassPath);
  FText::~FText(&this->SelectedActorClassName);
  FText::~FText(&this->SelectedActorPath);
  FText::~FText(&this->SelectedActorName);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&(this->SkeletalMeshDetailsWidget).SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&(this->AdvancedOptionsWidget).SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&(this->MaterialsWidget).SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&(this->DetailPropertiesWidget).SharedReferenceCount);
  TWeakPtr<SDrawPrimitiveDebugger,1>::~TWeakPtr<SDrawPrimitiveDebugger,1>(&this->PrimitiveDebugger);
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  return;
}

// Construct @ 146d0ca50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
SPrimitiveDebuggerDetailView::Construct(SPrimitiveDebuggerDetailView *this,FArguments *param_1)

{
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> *this_00;
  TSharedRef<SVerticalBox,1> *pTVar1;
  TSlateDecl<SScrollBox,RequiredArgs::T0RequiredArgs> *this_01;
  TSharedRef<SScrollBox,1> *pTVar2;
  FScopedWidgetSlotArguments<SVerticalBox::FSlot> *pFVar3;
  FSlotArguments *pFVar4;
  FText *pFVar5;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> *pTVar6;
  TSharedRef<STextBlock,1> *pTVar7;
  TSlateDecl<SExpandableArea,RequiredArgs::T0RequiredArgs> *pTVar8;
  TSharedRef<SExpandableArea,1> *pTVar9;
  longlong lVar10;
  undefined8 *puVar11;
  code **ppcVar12;
  undefined1 *puVar13;
  pmf_b3a9d206 *ppVar14;
  pmf_da1fa645 *ppVar15;
  T0RequiredArgs local_2778;
  T0RequiredArgs local_2777;
  T0RequiredArgs local_2776;
  T0RequiredArgs local_2775;
  T0RequiredArgs local_2774;
  T0RequiredArgs local_2773 [3];
  FArguments *local_2770;
  FArguments *local_2768;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> *local_2760;
  FArguments *local_2758;
  FSlotArguments *local_2750;
  FSlotArguments *local_2748;
  FArguments *local_2740;
  FArguments *local_2738;
  TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *local_2730;
  FText *local_2728;
  FText *local_2720;
  FText *local_2718;
  FText *local_2710;
  FText *local_2708;
  FText *local_2700;
  FText *local_26f8;
  FText *local_26f0;
  FText *local_26e8;
  FText *local_26e0;
  FText *local_26d8;
  FText *local_26d0;
  SVerticalBox *local_26c8;
  TAttribute<FMargin> *local_26c0;
  TAttribute<FMargin> *local_26b8;
  longlong *local_26b0;
  TAttribute<FMargin> *local_26a8;
  TAttribute<FMargin> *local_26a0;
  FArguments *local_2698;
  FArguments *local_2690;
  TAttribute<FText> *local_2688;
  TAttribute<FText> *local_2680;
  FArguments *local_2678;
  FArguments *local_2670;
  NamedSlotProperty<SExpandableArea::FArguments> *local_2668;
  FArguments *local_2660;
  NamedSlotProperty<SExpandableArea::FArguments> *local_2658;
  FArguments *local_2650;
  FSlotArguments *local_2648;
  SVerticalBox *local_2640;
  TAttribute<FMargin> *local_2638;
  TAttribute<FMargin> *local_2630;
  longlong *local_2628;
  TAttribute<FMargin> *local_2620;
  TAttribute<FMargin> *local_2618;
  FArguments *local_2610;
  FArguments *local_2608;
  FArguments *local_2600;
  TAttribute<FText> *local_25f8;
  TAttribute<FText> *local_25f0;
  FArguments *local_25e8;
  FArguments *local_25e0;
  NamedSlotProperty<SExpandableArea::FArguments> *local_25d8;
  FArguments *local_25d0;
  NamedSlotProperty<SExpandableArea::FArguments> *local_25c8;
  FArguments *local_25c0;
  FSlotArguments *local_25b8;
  TSharedRef<SWidget,1> local_25b0;
  TSharedRef<SWidget,1> local_25a0;
  code *local_2590;
  undefined4 local_2588;
  undefined8 local_2580;
  undefined4 local_2578;
  code *local_2570;
  undefined4 local_2568;
  code *local_2560;
  undefined4 local_2558;
  undefined8 local_2550;
  undefined4 local_2548;
  code *local_2540;
  undefined4 local_2538;
  code *local_2530;
  undefined4 local_2528;
  undefined8 local_2520;
  undefined4 local_2518;
  code *local_2510;
  undefined4 local_2508;
  code *local_2500;
  undefined4 local_24f8;
  undefined8 local_24f0;
  undefined4 local_24e8;
  code *local_24e0;
  undefined4 local_24d8;
  undefined8 local_24d0;
  undefined4 local_24c8;
  undefined8 local_24c0;
  undefined4 local_24b8;
  code *local_24b0;
  undefined4 local_24a8;
  undefined8 local_24a0;
  undefined4 local_2498;
  code *local_2490;
  undefined4 local_2488;
  code *local_2480;
  undefined4 local_2478;
  undefined8 local_2470;
  undefined4 local_2468;
  code *local_2460;
  undefined4 local_2458;
  code *local_2450;
  undefined4 local_2448;
  undefined8 local_2440;
  undefined4 local_2438;
  code *local_2430;
  undefined4 local_2428;
  code *local_2420;
  undefined4 local_2418;
  undefined8 local_2410;
  undefined4 local_2408;
  code *local_2400;
  undefined4 local_23f8;
  code *local_23f0;
  undefined4 local_23e8;
  undefined8 local_23e0;
  undefined4 local_23d8;
  code *local_23d0;
  undefined4 local_23c8;
  code *local_23c0;
  undefined4 local_23b8;
  undefined8 local_23b0;
  undefined4 local_23a8;
  code *local_23a0;
  undefined4 local_2398;
  code *local_2390;
  undefined4 local_2388;
  undefined8 local_2380;
  undefined4 local_2378;
  code *local_2370;
  undefined4 local_2368;
  code *local_2360;
  undefined4 local_2358;
  TSharedRef<SWidget,1> local_2350;
  TSharedRef<SWidget,1> local_2340;
  TSharedRef<SWidget,1> local_2330;
  TSharedRef<SWidget,1> local_2320;
  TSharedRef<SWidget,1> local_2310;
  TSharedRef<SWidget,1> local_2300;
  TSharedRef<SScrollBox,1> local_22f0;
  TSharedRef<SVerticalBox,1> local_22e0;
  undefined1 local_22d0 [16];
  undefined1 local_22c0 [16];
  undefined1 local_22b0 [24];
  pmf_da1fa645 local_2298;
  pmf_b3a9d206 local_2288;
  pmf_da1fa645 local_2278;
  FText local_2268;
  undefined1 local_2258 [16];
  undefined1 local_2248 [16];
  undefined1 local_2238 [16];
  pmf_da1fa645 local_2228;
  pmf_b3a9d206 local_2218;
  pmf_da1fa645 local_2208;
  FText local_21f8;
  undefined1 local_21e8 [16];
  undefined1 local_21d8 [16];
  undefined1 local_21c8 [16];
  pmf_da1fa645 local_21b8;
  pmf_b3a9d206 local_21a8;
  pmf_da1fa645 local_2198;
  FText local_2188;
  undefined1 local_2178 [16];
  undefined1 local_2168 [16];
  undefined1 local_2158 [16];
  pmf_da1fa645 local_2148;
  pmf_b3a9d206 local_2138;
  pmf_da1fa645 local_2128;
  FText local_2118;
  undefined1 local_2108 [16];
  undefined1 local_20f8 [16];
  undefined1 local_20e8 [16];
  pmf_da1fa645 local_20d8;
  pmf_b3a9d206 local_20c8;
  pmf_da1fa645 local_20b8;
  FText local_20a8;
  undefined1 local_2098 [16];
  undefined1 local_2088 [16];
  undefined1 local_2078 [16];
  pmf_da1fa645 local_2068;
  pmf_b3a9d206 local_2058;
  pmf_da1fa645 local_2048;
  FText local_2038;
  undefined1 local_2028 [16];
  undefined1 local_2018 [16];
  undefined1 local_2008 [16];
  pmf_da1fa645 local_1ff8;
  pmf_b3a9d206 local_1fe8;
  pmf_da1fa645 local_1fd8;
  FText local_1fc8;
  undefined1 local_1fb8 [16];
  undefined1 local_1fa8 [16];
  undefined1 local_1f98 [16];
  pmf_da1fa645 local_1f88;
  pmf_b3a9d206 local_1f78;
  pmf_da1fa645 local_1f68;
  FText local_1f58;
  undefined1 local_1f48 [16];
  undefined1 local_1f38 [16];
  undefined1 local_1f28 [16];
  pmf_da1fa645 local_1f18;
  pmf_b3a9d206 local_1f08;
  pmf_da1fa645 local_1ef8;
  FText local_1ee8;
  undefined1 local_1ed8 [16];
  undefined1 local_1ec8 [16];
  undefined1 local_1eb8 [16];
  pmf_da1fa645 local_1ea8;
  pmf_b3a9d206 local_1e98;
  pmf_da1fa645 local_1e88;
  FText local_1e78;
  undefined1 local_1e68 [16];
  undefined1 local_1e58 [16];
  undefined1 local_1e48 [16];
  pmf_da1fa645 local_1e38;
  pmf_b3a9d206 local_1e28;
  pmf_da1fa645 local_1e18;
  FText local_1e08;
  undefined1 local_1df8 [16];
  undefined1 local_1de8 [16];
  undefined1 local_1dd8 [16];
  pmf_da1fa645 local_1dc8;
  pmf_b3a9d206 local_1db8;
  pmf_da1fa645 local_1da8;
  FText local_1d98;
  TSharedRef<SExpandableArea,1> local_1d88;
  TSharedRef<SVerticalBox,1> local_1d78;
  TSharedRef<STextBlock,1> local_1d68;
  FText local_1d58;
  TSharedRef<SExpandableArea,1> local_1d48;
  TSharedRef<SVerticalBox,1> local_1d38;
  TSharedRef<STextBlock,1> local_1d28;
  FText local_1d18;
  TSlateDecl<SScrollBox,RequiredArgs::T0RequiredArgs> local_1d08;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_1cf0;
  TSlateDecl<SExpandableArea,RequiredArgs::T0RequiredArgs> local_1cd8;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_1cc0;
  TSlateDecl<SExpandableArea,RequiredArgs::T0RequiredArgs> local_1ca8;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_1c90;
  NamedSlotProperty<SExpandableArea::FArguments> local_1c78;
  NamedSlotProperty<SExpandableArea::FArguments> local_1c68;
  NamedSlotProperty<SExpandableArea::FArguments> local_1c58;
  NamedSlotProperty<SExpandableArea::FArguments> local_1c48;
  TAttribute<FMargin> local_1c38;
  TAttribute<FMargin> local_1c08;
  TAttribute<FText> local_1bd8;
  TAttribute<FMargin> local_1ba8;
  TAttribute<FMargin> local_1b78;
  TAttribute<FText> local_1b48;
  FSlotArguments local_1b18;
  FScopedWidgetSlotArguments<SVerticalBox::FSlot> local_1a30;
  FScopedWidgetSlotArguments<SVerticalBox::FSlot> local_1930;
  FArguments local_1830;
  FArguments local_1628;
  FArguments local_1360;
  FArguments local_f18;
  FArguments local_ad0;
  FArguments local_578;
  undefined8 uStack_18;
  
  uStack_18 = 0x146d0ca66;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FMargin::FMargin(&Margin,__real_4014000000000000,__real_4000000000000000,
                       __real_4014000000000000,__real_4000000000000000);
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS1) {
    _Init_thread_header(&::_TSS1);
    if (::_TSS1 == -1) {
      FMargin::FMargin(&MarginInterior,__real_4014000000000000,__real_4000000000000000,0.0,
                       __real_4000000000000000);
      _Init_thread_footer(&::_TSS1);
    }
  }
  TWeakPtr<SDrawPrimitiveDebugger,1>::operator=
            (&this->PrimitiveDebugger,&param_1->_PrimitiveDebugger);
  local_2730 = (TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *)
               &this->_padding_;
  local_2770 = SScrollBox::FArguments::FArguments(&local_1628);
  local_2768 = SScrollBox::FArguments::Orientation(local_2770,Orient_Vertical);
  local_2740 = SScrollBox::FArguments::ConsumeMouseWheel(local_2768,Always);
  local_2750 = SScrollBox::Slot(&local_1b18);
  local_2758 = SVerticalBox::FArguments::FArguments(&local_1830);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_2778);
  local_2760 = MakeTDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
                         (&local_1cf0,"SVerticalBox",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\DrawPrimitiveDebugger\\Private\\SDrawPrimitiveDebugger.cpp"
                          ,0x3f,&local_2778);
  this_00 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::Expose<SVerticalBox>
                      (local_2760,&this->DetailPropertiesWidget);
  pTVar1 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                     (this_00,&local_22e0,local_2758);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SVerticalBox>(&local_25a0,pTVar1);
  local_2748 = TSlotBase<SScrollBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_2750,&local_25a0);
  local_2738 = SScrollBox::FArguments::operator+(local_2740,local_2748);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_2777);
  this_01 = MakeTDecl<SScrollBox,RequiredArgs::T0RequiredArgs>
                      (&local_1d08,"SScrollBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\DrawPrimitiveDebugger\\Private\\SDrawPrimitiveDebugger.cpp"
                       ,0x3a,&local_2777);
  pTVar2 = TSlateDecl<SScrollBox,RequiredArgs::T0RequiredArgs>::operator<<=
                     (this_01,&local_22f0,local_2738);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SScrollBox>(&local_25b0,pTVar2);
  TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>::operator[]
            (local_2730,&local_25b0);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_25b0);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_22f0.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_1d08._Widget.SharedReferenceCount);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_25a0);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_22e0.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_1cf0._Widget.SharedReferenceCount);
  TArray<SVerticalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>::
  ~TArray<SVerticalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>(&local_1830._Slots);
  TSlateBaseNamedArgs<SVerticalBox>::~TSlateBaseNamedArgs<SVerticalBox>
            ((TSlateBaseNamedArgs<SVerticalBox> *)&local_1830);
  SScrollBox::FSlot::FSlotArguments::~FSlotArguments(&local_1b18);
  SScrollBox::FArguments::~FArguments(&local_1628);
  local_2590 = GetSelectedPrimitiveName;
  local_2588 = 0;
  ppcVar12 = &local_2590;
  puVar13 = local_22d0;
  for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *puVar13 = *(undefined1 *)ppcVar12;
    ppcVar12 = (code **)((longlong)ppcVar12 + 1);
    puVar13 = puVar13 + 1;
  }
  local_2580 = 0;
  local_2578 = 0;
  puVar11 = &local_2580;
  puVar13 = local_22c0;
  for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *puVar13 = *(undefined1 *)puVar11;
    puVar11 = (undefined8 *)((longlong)puVar11 + 1);
    puVar13 = puVar13 + 1;
  }
  local_2570 = GetSelectedPrimitiveName;
  local_2568 = 0;
  ppcVar12 = &local_2570;
  puVar13 = local_22b0;
  for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *puVar13 = *(undefined1 *)ppcVar12;
    ppcVar12 = (code **)((longlong)ppcVar12 + 1);
    puVar13 = puVar13 + 1;
  }
  local_2728 = FText::AsLocalizable_Advanced_LocText
                         (&local_2268,L"PRIMITIVE_DEBUGGER",L"DetailPanel_NameLabel",L"Name:");
  puVar13 = local_22d0;
  ppVar15 = &local_2298;
  for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *(undefined1 *)ppVar15 = *puVar13;
    puVar13 = puVar13 + 1;
    ppVar15 = (pmf_da1fa645 *)&ppVar15->field_0x1;
  }
  puVar13 = local_22c0;
  ppVar14 = &local_2288;
  for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *(undefined1 *)ppVar14 = *puVar13;
    puVar13 = puVar13 + 1;
    ppVar14 = (pmf_b3a9d206 *)&ppVar14->field_0x1;
  }
  puVar13 = local_22b0;
  ppVar15 = &local_2278;
  for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *(undefined1 *)ppVar15 = *puVar13;
    puVar13 = puVar13 + 1;
    ppVar15 = (pmf_da1fa645 *)&ppVar15->field_0x1;
  }
  GenerateDetailPanelEntry(this,local_2728,&local_2278,&local_2288,&local_2298,true);
  FText::~FText(&local_2268);
  local_2560 = GetSelectedPrimitiveType;
  local_2558 = 0;
  ppcVar12 = &local_2560;
  puVar13 = local_2258;
  for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *puVar13 = *(undefined1 *)ppcVar12;
    ppcVar12 = (code **)((longlong)ppcVar12 + 1);
    puVar13 = puVar13 + 1;
  }
  local_2550 = 0;
  local_2548 = 0;
  puVar11 = &local_2550;
  puVar13 = local_2248;
  for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *puVar13 = *(undefined1 *)puVar11;
    puVar11 = (undefined8 *)((longlong)puVar11 + 1);
    puVar13 = puVar13 + 1;
  }
  local_2540 = GetSelectedPrimitiveType;
  local_2538 = 0;
  ppcVar12 = &local_2540;
  puVar13 = local_2238;
  for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *puVar13 = *(undefined1 *)ppcVar12;
    ppcVar12 = (code **)((longlong)ppcVar12 + 1);
    puVar13 = puVar13 + 1;
  }
  local_2720 = FText::AsLocalizable_Advanced_LocText
                         (&local_21f8,L"PRIMITIVE_DEBUGGER",L"DetailPanel_TypeLabel",L"Type:");
  puVar13 = local_2258;
  ppVar15 = &local_2228;
  for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *(undefined1 *)ppVar15 = *puVar13;
    puVar13 = puVar13 + 1;
    ppVar15 = (pmf_da1fa645 *)&ppVar15->field_0x1;
  }
  puVar13 = local_2248;
  ppVar14 = &local_2218;
  for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *(undefined1 *)ppVar14 = *puVar13;
    puVar13 = puVar13 + 1;
    ppVar14 = (pmf_b3a9d206 *)&ppVar14->field_0x1;
  }
  puVar13 = local_2238;
  ppVar15 = &local_2208;
  for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *(undefined1 *)ppVar15 = *puVar13;
    puVar13 = puVar13 + 1;
    ppVar15 = (pmf_da1fa645 *)&ppVar15->field_0x1;
  }
  GenerateDetailPanelEntry(this,local_2720,&local_2208,&local_2218,&local_2228,true);
  FText::~FText(&local_21f8);
  local_2530 = GetSelectedActorToolTip;
  local_2528 = 0;
  ppcVar12 = &local_2530;
  puVar13 = local_21e8;
  for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *puVar13 = *(undefined1 *)ppcVar12;
    ppcVar12 = (code **)((longlong)ppcVar12 + 1);
    puVar13 = puVar13 + 1;
  }
  local_2520 = 0;
  local_2518 = 0;
  puVar11 = &local_2520;
  puVar13 = local_21d8;
  for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *puVar13 = *(undefined1 *)puVar11;
    puVar11 = (undefined8 *)((longlong)puVar11 + 1);
    puVar13 = puVar13 + 1;
  }
  local_2510 = GetSelectedActorName;
  local_2508 = 0;
  ppcVar12 = &local_2510;
  puVar13 = local_21c8;
  for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *puVar13 = *(undefined1 *)ppcVar12;
    ppcVar12 = (code **)((longlong)ppcVar12 + 1);
    puVar13 = puVar13 + 1;
  }
  local_2718 = FText::AsLocalizable_Advanced_LocText
                         (&local_2188,L"PRIMITIVE_DEBUGGER",L"DetailPanel_ActorLabel",L"Actor:");
  puVar13 = local_21e8;
  ppVar15 = &local_21b8;
  for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *(undefined1 *)ppVar15 = *puVar13;
    puVar13 = puVar13 + 1;
    ppVar15 = (pmf_da1fa645 *)&ppVar15->field_0x1;
  }
  puVar13 = local_21d8;
  ppVar14 = &local_21a8;
  for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *(undefined1 *)ppVar14 = *puVar13;
    puVar13 = puVar13 + 1;
    ppVar14 = (pmf_b3a9d206 *)&ppVar14->field_0x1;
  }
  puVar13 = local_21c8;
  ppVar15 = &local_2198;
  for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *(undefined1 *)ppVar15 = *puVar13;
    puVar13 = puVar13 + 1;
    ppVar15 = (pmf_da1fa645 *)&ppVar15->field_0x1;
  }
  GenerateDetailPanelEntry(this,local_2718,&local_2198,&local_21a8,&local_21b8,true);
  FText::~FText(&local_2188);
  local_2500 = GetSelectedActorClassToolTip;
  local_24f8 = 0;
  ppcVar12 = &local_2500;
  puVar13 = local_2178;
  for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *puVar13 = *(undefined1 *)ppcVar12;
    ppcVar12 = (code **)((longlong)ppcVar12 + 1);
    puVar13 = puVar13 + 1;
  }
  local_24f0 = 0;
  local_24e8 = 0;
  puVar11 = &local_24f0;
  puVar13 = local_2168;
  for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *puVar13 = *(undefined1 *)puVar11;
    puVar11 = (undefined8 *)((longlong)puVar11 + 1);
    puVar13 = puVar13 + 1;
  }
  local_24e0 = GetSelectedActorClassName;
  local_24d8 = 0;
  ppcVar12 = &local_24e0;
  puVar13 = local_2158;
  for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *puVar13 = *(undefined1 *)ppcVar12;
    ppcVar12 = (code **)((longlong)ppcVar12 + 1);
    puVar13 = puVar13 + 1;
  }
  local_2710 = FText::AsLocalizable_Advanced_LocText
                         (&local_2118,L"PRIMITIVE_DEBUGGER",L"DetailPanel_ActorClassLabel",
                          L"Actor Class:");
  puVar13 = local_2178;
  ppVar15 = &local_2148;
  for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *(undefined1 *)ppVar15 = *puVar13;
    puVar13 = puVar13 + 1;
    ppVar15 = (pmf_da1fa645 *)&ppVar15->field_0x1;
  }
  puVar13 = local_2168;
  ppVar14 = &local_2138;
  for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *(undefined1 *)ppVar14 = *puVar13;
    puVar13 = puVar13 + 1;
    ppVar14 = (pmf_b3a9d206 *)&ppVar14->field_0x1;
  }
  puVar13 = local_2158;
  ppVar15 = &local_2128;
  for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *(undefined1 *)ppVar15 = *puVar13;
    puVar13 = puVar13 + 1;
    ppVar15 = (pmf_da1fa645 *)&ppVar15->field_0x1;
  }
  GenerateDetailPanelEntry(this,local_2710,&local_2128,&local_2138,&local_2148,true);
  FText::~FText(&local_2118);
  local_24d0 = 0;
  local_24c8 = 0;
  puVar11 = &local_24d0;
  puVar13 = local_2108;
  for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *puVar13 = *(undefined1 *)puVar11;
    puVar11 = (undefined8 *)((longlong)puVar11 + 1);
    puVar13 = puVar13 + 1;
  }
  local_24c0 = 0;
  local_24b8 = 0;
  puVar11 = &local_24c0;
  puVar13 = local_20f8;
  for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *puVar13 = *(undefined1 *)puVar11;
    puVar11 = (undefined8 *)((longlong)puVar11 + 1);
    puVar13 = puVar13 + 1;
  }
  local_24b0 = GetSelectedLocation;
  local_24a8 = 0;
  ppcVar12 = &local_24b0;
  puVar13 = local_20e8;
  for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *puVar13 = *(undefined1 *)ppcVar12;
    ppcVar12 = (code **)((longlong)ppcVar12 + 1);
    puVar13 = puVar13 + 1;
  }
  local_2708 = FText::AsLocalizable_Advanced_LocText
                         (&local_20a8,L"PRIMITIVE_DEBUGGER",L"DetailPanel_LocationLabel",
                          L"Location:");
  puVar13 = local_2108;
  ppVar15 = &local_20d8;
  for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *(undefined1 *)ppVar15 = *puVar13;
    puVar13 = puVar13 + 1;
    ppVar15 = (pmf_da1fa645 *)&ppVar15->field_0x1;
  }
  puVar13 = local_20f8;
  ppVar14 = &local_20c8;
  for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *(undefined1 *)ppVar14 = *puVar13;
    puVar13 = puVar13 + 1;
    ppVar14 = (pmf_b3a9d206 *)&ppVar14->field_0x1;
  }
  puVar13 = local_20e8;
  ppVar15 = &local_20b8;
  for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *(undefined1 *)ppVar15 = *puVar13;
    puVar13 = puVar13 + 1;
    ppVar15 = (pmf_da1fa645 *)&ppVar15->field_0x1;
  }
  GenerateDetailPanelEntry(this,local_2708,&local_20b8,&local_20c8,&local_20d8,false);
  FText::~FText(&local_20a8);
  local_24a0 = 0;
  local_2498 = 0;
  puVar11 = &local_24a0;
  puVar13 = local_2098;
  for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *puVar13 = *(undefined1 *)puVar11;
    puVar11 = (undefined8 *)((longlong)puVar11 + 1);
    puVar13 = puVar13 + 1;
  }
  local_2490 = StaticMeshDataVisibility;
  local_2488 = 0;
  ppcVar12 = &local_2490;
  puVar13 = local_2088;
  for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *puVar13 = *(undefined1 *)ppcVar12;
    ppcVar12 = (code **)((longlong)ppcVar12 + 1);
    puVar13 = puVar13 + 1;
  }
  local_2480 = GetSelectedPrimitiveSupportsNanite;
  local_2478 = 0;
  ppcVar12 = &local_2480;
  puVar13 = local_2078;
  for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *puVar13 = *(undefined1 *)ppcVar12;
    ppcVar12 = (code **)((longlong)ppcVar12 + 1);
    puVar13 = puVar13 + 1;
  }
  local_2700 = FText::AsLocalizable_Advanced_LocText
                         (&local_2038,L"PRIMITIVE_DEBUGGER",L"DetailPanel_NaniteSupportLabel",
                          L"Supports Nanite:");
  puVar13 = local_2098;
  ppVar15 = &local_2068;
  for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *(undefined1 *)ppVar15 = *puVar13;
    puVar13 = puVar13 + 1;
    ppVar15 = (pmf_da1fa645 *)&ppVar15->field_0x1;
  }
  puVar13 = local_2088;
  ppVar14 = &local_2058;
  for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *(undefined1 *)ppVar14 = *puVar13;
    puVar13 = puVar13 + 1;
    ppVar14 = (pmf_b3a9d206 *)&ppVar14->field_0x1;
  }
  puVar13 = local_2078;
  ppVar15 = &local_2048;
  for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *(undefined1 *)ppVar15 = *puVar13;
    puVar13 = puVar13 + 1;
    ppVar15 = (pmf_da1fa645 *)&ppVar15->field_0x1;
  }
  GenerateDetailPanelEntry(this,local_2700,&local_2048,&local_2058,&local_2068,false);
  FText::~FText(&local_2038);
  local_2470 = 0;
  local_2468 = 0;
  puVar11 = &local_2470;
  puVar13 = local_2028;
  for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *puVar13 = *(undefined1 *)puVar11;
    puVar11 = (undefined8 *)((longlong)puVar11 + 1);
    puVar13 = puVar13 + 1;
  }
  local_2460 = StaticMeshDataVisibility;
  local_2458 = 0;
  ppcVar12 = &local_2460;
  puVar13 = local_2018;
  for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *puVar13 = *(undefined1 *)ppcVar12;
    ppcVar12 = (code **)((longlong)ppcVar12 + 1);
    puVar13 = puVar13 + 1;
  }
  local_2450 = GetSelectedPrimitiveNaniteEnabled;
  local_2448 = 0;
  ppcVar12 = &local_2450;
  puVar13 = local_2008;
  for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *puVar13 = *(undefined1 *)ppcVar12;
    ppcVar12 = (code **)((longlong)ppcVar12 + 1);
    puVar13 = puVar13 + 1;
  }
  local_26f8 = FText::AsLocalizable_Advanced_LocText
                         (&local_1fc8,L"PRIMITIVE_DEBUGGER",L"DetailPanel_NaniteEnabledLabel",
                          L"Nanite Enabled:");
  puVar13 = local_2028;
  ppVar15 = &local_1ff8;
  for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *(undefined1 *)ppVar15 = *puVar13;
    puVar13 = puVar13 + 1;
    ppVar15 = (pmf_da1fa645 *)&ppVar15->field_0x1;
  }
  puVar13 = local_2018;
  ppVar14 = &local_1fe8;
  for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *(undefined1 *)ppVar14 = *puVar13;
    puVar13 = puVar13 + 1;
    ppVar14 = (pmf_b3a9d206 *)&ppVar14->field_0x1;
  }
  puVar13 = local_2008;
  ppVar15 = &local_1fd8;
  for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *(undefined1 *)ppVar15 = *puVar13;
    puVar13 = puVar13 + 1;
    ppVar15 = (pmf_da1fa645 *)&ppVar15->field_0x1;
  }
  GenerateDetailPanelEntry(this,local_26f8,&local_1fd8,&local_1fe8,&local_1ff8,false);
  FText::~FText(&local_1fc8);
  local_2440 = 0;
  local_2438 = 0;
  puVar11 = &local_2440;
  puVar13 = local_1fb8;
  for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *puVar13 = *(undefined1 *)puVar11;
    puVar11 = (undefined8 *)((longlong)puVar11 + 1);
    puVar13 = puVar13 + 1;
  }
  local_2430 = NonNaniteDataVisibility;
  local_2428 = 0;
  ppcVar12 = &local_2430;
  puVar13 = local_1fa8;
  for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *puVar13 = *(undefined1 *)ppcVar12;
    ppcVar12 = (code **)((longlong)ppcVar12 + 1);
    puVar13 = puVar13 + 1;
  }
  local_2420 = GetSelectedLOD;
  local_2418 = 0;
  ppcVar12 = &local_2420;
  puVar13 = local_1f98;
  for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *puVar13 = *(undefined1 *)ppcVar12;
    ppcVar12 = (code **)((longlong)ppcVar12 + 1);
    puVar13 = puVar13 + 1;
  }
  local_26f0 = FText::AsLocalizable_Advanced_LocText
                         (&local_1f58,L"PRIMITIVE_DEBUGGER",L"DetailPanel_CurrentLODLabel",
                          L"Current LOD:");
  puVar13 = local_1fb8;
  ppVar15 = &local_1f88;
  for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *(undefined1 *)ppVar15 = *puVar13;
    puVar13 = puVar13 + 1;
    ppVar15 = (pmf_da1fa645 *)&ppVar15->field_0x1;
  }
  puVar13 = local_1fa8;
  ppVar14 = &local_1f78;
  for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *(undefined1 *)ppVar14 = *puVar13;
    puVar13 = puVar13 + 1;
    ppVar14 = (pmf_b3a9d206 *)&ppVar14->field_0x1;
  }
  puVar13 = local_1f98;
  ppVar15 = &local_1f68;
  for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *(undefined1 *)ppVar15 = *puVar13;
    puVar13 = puVar13 + 1;
    ppVar15 = (pmf_da1fa645 *)&ppVar15->field_0x1;
  }
  GenerateDetailPanelEntry(this,local_26f0,&local_1f68,&local_1f78,&local_1f88,false);
  FText::~FText(&local_1f58);
  local_2410 = 0;
  local_2408 = 0;
  puVar11 = &local_2410;
  puVar13 = local_1f48;
  for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *puVar13 = *(undefined1 *)puVar11;
    puVar11 = (undefined8 *)((longlong)puVar11 + 1);
    puVar13 = puVar13 + 1;
  }
  local_2400 = NonNaniteDataVisibility;
  local_23f8 = 0;
  ppcVar12 = &local_2400;
  puVar13 = local_1f38;
  for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *puVar13 = *(undefined1 *)ppcVar12;
    ppcVar12 = (code **)((longlong)ppcVar12 + 1);
    puVar13 = puVar13 + 1;
  }
  local_23f0 = GetSelectedNumLODs;
  local_23e8 = 0;
  ppcVar12 = &local_23f0;
  puVar13 = local_1f28;
  for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *puVar13 = *(undefined1 *)ppcVar12;
    ppcVar12 = (code **)((longlong)ppcVar12 + 1);
    puVar13 = puVar13 + 1;
  }
  local_26e8 = FText::AsLocalizable_Advanced_LocText
                         (&local_1ee8,L"PRIMITIVE_DEBUGGER",L"DetailPanel_AvailableLODsLabel",
                          L"Available LODs:");
  puVar13 = local_1f48;
  ppVar15 = &local_1f18;
  for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *(undefined1 *)ppVar15 = *puVar13;
    puVar13 = puVar13 + 1;
    ppVar15 = (pmf_da1fa645 *)&ppVar15->field_0x1;
  }
  puVar13 = local_1f38;
  ppVar14 = &local_1f08;
  for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *(undefined1 *)ppVar14 = *puVar13;
    puVar13 = puVar13 + 1;
    ppVar14 = (pmf_b3a9d206 *)&ppVar14->field_0x1;
  }
  puVar13 = local_1f28;
  ppVar15 = &local_1ef8;
  for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *(undefined1 *)ppVar15 = *puVar13;
    puVar13 = puVar13 + 1;
    ppVar15 = (pmf_da1fa645 *)&ppVar15->field_0x1;
  }
  GenerateDetailPanelEntry(this,local_26e8,&local_1ef8,&local_1f08,&local_1f18,false);
  FText::~FText(&local_1ee8);
  local_23e0 = 0;
  local_23d8 = 0;
  puVar11 = &local_23e0;
  puVar13 = local_1ed8;
  for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *puVar13 = *(undefined1 *)puVar11;
    puVar11 = (undefined8 *)((longlong)puVar11 + 1);
    puVar13 = puVar13 + 1;
  }
  local_23d0 = NonNaniteDataVisibility;
  local_23c8 = 0;
  ppcVar12 = &local_23d0;
  puVar13 = local_1ec8;
  for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *puVar13 = *(undefined1 *)ppcVar12;
    ppcVar12 = (code **)((longlong)ppcVar12 + 1);
    puVar13 = puVar13 + 1;
  }
  local_23c0 = GetSelectedDrawCallCount;
  local_23b8 = 0;
  ppcVar12 = &local_23c0;
  puVar13 = local_1eb8;
  for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *puVar13 = *(undefined1 *)ppcVar12;
    ppcVar12 = (code **)((longlong)ppcVar12 + 1);
    puVar13 = puVar13 + 1;
  }
  local_26e0 = FText::AsLocalizable_Advanced_LocText
                         (&local_1e78,L"PRIMITIVE_DEBUGGER",L"DetailPanel_DrawCallsLabel",
                          L"Draw Calls:");
  puVar13 = local_1ed8;
  ppVar15 = &local_1ea8;
  for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *(undefined1 *)ppVar15 = *puVar13;
    puVar13 = puVar13 + 1;
    ppVar15 = (pmf_da1fa645 *)&ppVar15->field_0x1;
  }
  puVar13 = local_1ec8;
  ppVar14 = &local_1e98;
  for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *(undefined1 *)ppVar14 = *puVar13;
    puVar13 = puVar13 + 1;
    ppVar14 = (pmf_b3a9d206 *)&ppVar14->field_0x1;
  }
  puVar13 = local_1eb8;
  ppVar15 = &local_1e88;
  for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *(undefined1 *)ppVar15 = *puVar13;
    puVar13 = puVar13 + 1;
    ppVar15 = (pmf_da1fa645 *)&ppVar15->field_0x1;
  }
  GenerateDetailPanelEntry(this,local_26e0,&local_1e88,&local_1e98,&local_1ea8,false);
  FText::~FText(&local_1e78);
  local_23b0 = 0;
  local_23a8 = 0;
  puVar11 = &local_23b0;
  puVar13 = local_1e68;
  for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *puVar13 = *(undefined1 *)puVar11;
    puVar11 = (undefined8 *)((longlong)puVar11 + 1);
    puVar13 = puVar13 + 1;
  }
  local_23a0 = NonNaniteDataVisibility;
  local_2398 = 0;
  ppcVar12 = &local_23a0;
  puVar13 = local_1e58;
  for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *puVar13 = *(undefined1 *)ppcVar12;
    ppcVar12 = (code **)((longlong)ppcVar12 + 1);
    puVar13 = puVar13 + 1;
  }
  local_2390 = GetSelectedTriangleCount;
  local_2388 = 0;
  ppcVar12 = &local_2390;
  puVar13 = local_1e48;
  for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *puVar13 = *(undefined1 *)ppcVar12;
    ppcVar12 = (code **)((longlong)ppcVar12 + 1);
    puVar13 = puVar13 + 1;
  }
  local_26d8 = FText::AsLocalizable_Advanced_LocText
                         (&local_1e08,L"PRIMITIVE_DEBUGGER",L"DetailPanel_TrianglesLabel",
                          L"Triangles:");
  puVar13 = local_1e68;
  ppVar15 = &local_1e38;
  for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *(undefined1 *)ppVar15 = *puVar13;
    puVar13 = puVar13 + 1;
    ppVar15 = (pmf_da1fa645 *)&ppVar15->field_0x1;
  }
  puVar13 = local_1e58;
  ppVar14 = &local_1e28;
  for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *(undefined1 *)ppVar14 = *puVar13;
    puVar13 = puVar13 + 1;
    ppVar14 = (pmf_b3a9d206 *)&ppVar14->field_0x1;
  }
  puVar13 = local_1e48;
  ppVar15 = &local_1e18;
  for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *(undefined1 *)ppVar15 = *puVar13;
    puVar13 = puVar13 + 1;
    ppVar15 = (pmf_da1fa645 *)&ppVar15->field_0x1;
  }
  GenerateDetailPanelEntry(this,local_26d8,&local_1e18,&local_1e28,&local_1e38,false);
  FText::~FText(&local_1e08);
  local_2380 = 0;
  local_2378 = 0;
  puVar11 = &local_2380;
  puVar13 = local_1df8;
  for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *puVar13 = *(undefined1 *)puVar11;
    puVar11 = (undefined8 *)((longlong)puVar11 + 1);
    puVar13 = puVar13 + 1;
  }
  local_2370 = SkeletalMeshDataVisibility;
  local_2368 = 0;
  ppcVar12 = &local_2370;
  puVar13 = local_1de8;
  for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *puVar13 = *(undefined1 *)ppcVar12;
    ppcVar12 = (code **)((longlong)ppcVar12 + 1);
    puVar13 = puVar13 + 1;
  }
  local_2360 = GetSelectedBoneCount;
  local_2358 = 0;
  ppcVar12 = &local_2360;
  puVar13 = local_1dd8;
  for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *puVar13 = *(undefined1 *)ppcVar12;
    ppcVar12 = (code **)((longlong)ppcVar12 + 1);
    puVar13 = puVar13 + 1;
  }
  local_26d0 = FText::AsLocalizable_Advanced_LocText
                         (&local_1d98,L"PRIMITIVE_DEBUGGER",L"DetailPanel_BonesLabel",L"Bones:");
  puVar13 = local_1df8;
  ppVar15 = &local_1dc8;
  for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *(undefined1 *)ppVar15 = *puVar13;
    puVar13 = puVar13 + 1;
    ppVar15 = (pmf_da1fa645 *)&ppVar15->field_0x1;
  }
  puVar13 = local_1de8;
  ppVar14 = &local_1db8;
  for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *(undefined1 *)ppVar14 = *puVar13;
    puVar13 = puVar13 + 1;
    ppVar14 = (pmf_b3a9d206 *)&ppVar14->field_0x1;
  }
  puVar13 = local_1dd8;
  ppVar15 = &local_1da8;
  for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *(undefined1 *)ppVar15 = *puVar13;
    puVar13 = puVar13 + 1;
    ppVar15 = (pmf_da1fa645 *)&ppVar15->field_0x1;
  }
  GenerateDetailPanelEntry(this,local_26d0,&local_1da8,&local_1db8,&local_1dc8,false);
  FText::~FText(&local_1d98);
  local_26c8 = TSharedPtr<SVerticalBox,1>::operator->(&this->DetailPropertiesWidget);
  pFVar3 = SVerticalBox::AddSlot(local_26c8,&local_1a30);
  local_26b0 = &pFVar3->_padding_;
  local_26c0 = &local_1c38;
  local_26b8 = TAttribute<FMargin>::TAttribute<FMargin><FMargin>(local_26c0,&Margin);
  pFVar4 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                     ((FSlotArgumentsMixin *)local_26b0,local_26b8);
  local_2648 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar4);
  local_2698 = SExpandableArea::FArguments::FArguments(&local_1360);
  local_26a8 = &local_1c08;
  local_26a0 = TAttribute<FMargin>::TAttribute<FMargin><FMargin>(local_26a8,&MarginInterior);
  local_2690 = SExpandableArea::FArguments::Padding(local_2698,local_26a0);
  local_2668 = SExpandableArea::FArguments::HeaderContent(local_2690,&local_1c78);
  local_2678 = STextBlock::FArguments::FArguments(&local_ad0);
  local_2688 = &local_1bd8;
  pFVar5 = FText::AsLocalizable_Advanced_LocText
                     (&local_1d58,L"PRIMITIVE_DEBUGGER",L"DetailPanel_MaterialsLabel",L"Materials");
  local_2680 = TAttribute<FText>::TAttribute<FText>(local_2688,pFVar5);
  local_2670 = STextBlock::FArguments::Text(local_2678,local_2680);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_2776);
  pTVar6 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                     (&local_1cc0,"STextBlock",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\DrawPrimitiveDebugger\\Private\\SDrawPrimitiveDebugger.cpp"
                      ,0x62,&local_2776);
  pTVar7 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar6,&local_1d68,local_2670);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_2330,pTVar7);
  local_2660 = NamedSlotProperty<SExpandableArea::FArguments>::operator[](local_2668,&local_2330);
  local_2658 = SExpandableArea::FArguments::BodyContent(local_2660,&local_1c68);
  pTVar1 = GetSelectedMaterialsWidget(this,&local_1d78);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SVerticalBox>(&local_2340,pTVar1);
  local_2650 = NamedSlotProperty<SExpandableArea::FArguments>::operator[](local_2658,&local_2340);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_2775);
  pTVar8 = MakeTDecl<SExpandableArea,RequiredArgs::T0RequiredArgs>
                     (&local_1cd8,"SExpandableArea",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\DrawPrimitiveDebugger\\Private\\SDrawPrimitiveDebugger.cpp"
                      ,0x5e,&local_2775);
  pTVar9 = TSlateDecl<SExpandableArea,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar8,&local_1d88,local_2650);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SExpandableArea>(&local_2350,pTVar9);
  TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
            ((FSlotArguments *)local_2648,&local_2350);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_2350);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_1d88.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_1cd8._Widget.SharedReferenceCount);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_2340);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_1d78.SharedReferenceCount);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_2330);
  TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_1d68);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_1cc0);
  FText::~FText(&local_1d58);
  STextBlock::FArguments::~FArguments(&local_ad0);
  SExpandableArea::FArguments::~FArguments(&local_1360);
  SBoxPanel::FScopedWidgetSlotArguments<SVerticalBox::FSlot>::
  ~FScopedWidgetSlotArguments<SVerticalBox::FSlot>(&local_1a30);
  local_2640 = TSharedPtr<SVerticalBox,1>::operator->(&this->DetailPropertiesWidget);
  pFVar3 = SVerticalBox::AddSlot(local_2640,&local_1930);
  local_2628 = &pFVar3->_padding_;
  local_2638 = &local_1ba8;
  local_2630 = TAttribute<FMargin>::TAttribute<FMargin><FMargin>(local_2638,&Margin);
  pFVar4 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                     ((FSlotArgumentsMixin *)local_2628,local_2630);
  local_25b8 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar4);
  local_2610 = SExpandableArea::FArguments::FArguments(&local_f18);
  local_2620 = &local_1b78;
  local_2618 = TAttribute<FMargin>::TAttribute<FMargin><FMargin>(local_2620,&MarginInterior);
  local_2608 = SExpandableArea::FArguments::Padding(local_2610,local_2618);
  local_2600 = SExpandableArea::FArguments::InitiallyCollapsed(local_2608,false);
  local_25d8 = SExpandableArea::FArguments::HeaderContent(local_2600,&local_1c58);
  local_25e8 = STextBlock::FArguments::FArguments(&local_578);
  local_25f8 = &local_1b48;
  pFVar5 = FText::AsLocalizable_Advanced_LocText
                     (&local_1d18,L"PRIMITIVE_DEBUGGER",L"DetailPanel_AdvancedOptionsLabel",
                      L"Advanced");
  local_25f0 = TAttribute<FText>::TAttribute<FText>(local_25f8,pFVar5);
  local_25e0 = STextBlock::FArguments::Text(local_25e8,local_25f0);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_2774);
  pTVar6 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                     (&local_1c90,"STextBlock",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\DrawPrimitiveDebugger\\Private\\SDrawPrimitiveDebugger.cpp"
                      ,0x74,&local_2774);
  pTVar7 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar6,&local_1d28,local_25e0);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_2300,pTVar7);
  local_25d0 = NamedSlotProperty<SExpandableArea::FArguments>::operator[](local_25d8,&local_2300);
  local_25c8 = SExpandableArea::FArguments::BodyContent(local_25d0,&local_1c48);
  pTVar1 = GetAdvancedOptionsWidget(this,&local_1d38);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SVerticalBox>(&local_2310,pTVar1);
  local_25c0 = NamedSlotProperty<SExpandableArea::FArguments>::operator[](local_25c8,&local_2310);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(local_2773);
  pTVar8 = MakeTDecl<SExpandableArea,RequiredArgs::T0RequiredArgs>
                     (&local_1ca8,"SExpandableArea",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\DrawPrimitiveDebugger\\Private\\SDrawPrimitiveDebugger.cpp"
                      ,0x6f,local_2773);
  pTVar9 = TSlateDecl<SExpandableArea,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar8,&local_1d48,local_25c0);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SExpandableArea>(&local_2320,pTVar9);
  TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
            ((FSlotArguments *)local_25b8,&local_2320);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_2320);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_1d48.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_1ca8._Widget.SharedReferenceCount);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_2310);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_1d38.SharedReferenceCount);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_2300);
  TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_1d28);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_1c90);
  FText::~FText(&local_1d18);
  STextBlock::FArguments::~FArguments(&local_578);
  SExpandableArea::FArguments::~FArguments(&local_f18);
  SBoxPanel::FScopedWidgetSlotArguments<SVerticalBox::FSlot>::
  ~FScopedWidgetSlotArguments<SVerticalBox::FSlot>(&local_1930);
  return;
}

// CreateMaterialEntry @ 146d12a30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
SPrimitiveDebuggerDetailView::CreateMaterialEntry
          (SPrimitiveDebuggerDetailView *this,UMaterialInterface *param_1,int param_2,bool param_3)

{
  code *pcVar1;
  bool bVar2;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> *pTVar3;
  longlong lVar4;
  FString *pFVar5;
  FScopedWidgetSlotArguments<SVerticalBox::FSlot> *pFVar6;
  FSlotArguments *pFVar7;
  FSlotArguments *pFVar8;
  FText *pFVar9;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> *pTVar10;
  TSharedRef<STextBlock,1> *pTVar11;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> *pTVar12;
  TSharedRef<SHorizontalBox,1> *pTVar13;
  TSlateDecl<SExpandableArea,RequiredArgs::T0RequiredArgs> *pTVar14;
  TSharedRef<SExpandableArea,1> *pTVar15;
  TSharedRef<SVerticalBox,1> *pTVar16;
  code **ppcVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  pmf_0141a4eb *ppVar20;
  int local_3eb8;
  T0RequiredArgs local_3eb0;
  Type local_3eaf;
  char local_3eae;
  ETextOverflowPolicy local_3ead;
  T0RequiredArgs local_3eac;
  T0RequiredArgs local_3eab;
  T0RequiredArgs local_3eaa;
  T0RequiredArgs local_3ea9;
  ETextOverflowPolicy local_3ea8;
  T0RequiredArgs local_3ea7;
  T0RequiredArgs local_3ea6;
  T0RequiredArgs local_3ea5;
  T0RequiredArgs local_3ea4;
  T0RequiredArgs local_3ea3;
  T0RequiredArgs local_3ea2 [2];
  EShaderPlatform local_3ea0 [4];
  TArray<UTexture_*,TSizedDefaultAllocator<32>_> local_3e98;
  uint local_3e88;
  int local_3e84;
  int local_3e80;
  uint local_3e7c;
  uint local_3e78;
  undefined4 local_3e74;
  uint local_3e70;
  uint local_3e6c;
  uint local_3e68;
  undefined1 local_3e64 [2];
  undefined1 local_3e62 [2];
  int local_3e60;
  int local_3e5c;
  int local_3e58;
  int local_3e54;
  int local_3e50;
  int local_3e4c;
  Type local_3e48;
  int local_3e44;
  int local_3e40;
  int local_3e3c;
  int local_3e38;
  Type local_3e34 [3];
  undefined1 local_3e28 [8];
  FText *local_3e20;
  UObject *local_3e18;
  FString local_3e10;
  FString local_3e00;
  TSharedRef<SVerticalBox,1> local_3df0;
  FName *local_3de0;
  UObjectBaseUtility *local_3dd8;
  FString *local_3dd0;
  undefined1 *local_3dc8;
  undefined1 *local_3dc0;
  TOptional<EShaderPlatform> *local_3db8;
  TOptional<EMaterialQualityLevel::Type> *local_3db0;
  code *local_3da8;
  undefined4 local_3da0;
  undefined4 local_3d9c;
  FScriptContainerElement *local_3d98;
  FScriptContainerElement *local_3d90;
  FScriptContainerElement *local_3d88;
  undefined4 local_3d80;
  undefined4 local_3d7c;
  FScriptContainerElement *local_3d78;
  FScriptContainerElement *local_3d70;
  FScriptContainerElement *local_3d68;
  longlong local_3d60;
  FName local_3d58;
  FName *local_3d50;
  SVerticalBox *local_3d48;
  TAttribute<FMargin> *local_3d40;
  TAttribute<FMargin> *local_3d38;
  longlong *local_3d30;
  undefined1 *local_3d28;
  TAttribute<FText> *local_3d20;
  TAttribute<FText> *local_3d18;
  FArguments *local_3d10;
  undefined1 *local_3d08;
  TAttribute<ETextJustify::Type> *local_3d00;
  FArguments *local_3cf8;
  undefined4 local_3cf0;
  undefined4 local_3cec;
  FScriptContainerElement *local_3ce8;
  FScriptContainerElement *local_3ce0;
  FScriptContainerElement *local_3cd8;
  UObjectBaseUtility *local_3cd0;
  FString *local_3cc8;
  TAttribute<FText> *local_3cc0;
  TAttribute<FText> *local_3cb8;
  FArguments *local_3cb0;
  undefined1 *local_3ca8;
  TOptional<ETextOverflowPolicy> *local_3ca0;
  FArguments *local_3c98;
  TWeakPtr<SDrawPrimitiveDebugger,1> *local_3c90;
  SDrawPrimitiveDebugger *local_3c88;
  SDrawPrimitiveDebugger *local_3c80;
  FArguments *local_3c78;
  FArguments *local_3c70;
  FSlotArguments *local_3c68;
  FSlotArguments *local_3c60;
  FArguments *local_3c58;
  FArguments *local_3c50;
  FSlotArguments *local_3c48;
  SVerticalBox *local_3c40;
  TAttribute<FMargin> *local_3c38;
  TAttribute<FMargin> *local_3c30;
  longlong *local_3c28;
  TAttribute<FText> *local_3c20;
  TAttribute<FText> *local_3c18;
  FArguments *local_3c10;
  undefined1 *local_3c08;
  TAttribute<ETextJustify::Type> *local_3c00;
  FArguments *local_3bf8;
  FArguments *local_3bf0;
  FSlotArguments *local_3be8;
  SVerticalBox *local_3be0;
  TAttribute<FMargin> *local_3bd8;
  TAttribute<FMargin> *local_3bd0;
  longlong *local_3bc8;
  TAttribute<FMargin> *local_3bc0;
  TAttribute<FMargin> *local_3bb8;
  FArguments *local_3bb0;
  FArguments *local_3ba8;
  FArguments *local_3ba0;
  undefined1 *local_3b98;
  TAttribute<float> *local_3b90;
  TAttribute<float> *local_3b88;
  FSlotArguments *local_3b80;
  FText *local_3b78;
  TAttribute<FText> *local_3b70;
  TAttribute<FText> *local_3b68;
  FArguments *local_3b60;
  undefined1 *local_3b58;
  TAttribute<ETextJustify::Type> *local_3b50;
  FArguments *local_3b48;
  FArguments *local_3b40;
  FSlotArguments *local_3b38;
  FSlotArguments *local_3b30;
  FArguments *local_3b28;
  undefined1 *local_3b20;
  TAttribute<float> *local_3b18;
  TAttribute<float> *local_3b10;
  FSlotArguments *local_3b08;
  TAttribute<FText> *local_3b00;
  TAttribute<FText> *local_3af8;
  FArguments *local_3af0;
  undefined1 *local_3ae8;
  TAttribute<ETextJustify::Type> *local_3ae0;
  FArguments *local_3ad8;
  TAttribute<FText> *local_3ad0;
  TAttribute<FText> *local_3ac8;
  FArguments *local_3ac0;
  undefined1 *local_3ab8;
  TOptional<ETextOverflowPolicy> *local_3ab0;
  FArguments *local_3aa8;
  TWeakPtr<SDrawPrimitiveDebugger,1> *local_3aa0;
  SDrawPrimitiveDebugger *local_3a98;
  SDrawPrimitiveDebugger *local_3a90;
  FArguments *local_3a88;
  FArguments *local_3a80;
  FSlotArguments *local_3a78;
  FSlotArguments *local_3a70;
  FArguments *local_3a68;
  FArguments *local_3a60;
  NamedSlotProperty<SExpandableArea::FArguments> *local_3a58;
  FArguments *local_3a50;
  TAttribute<FMargin> *local_3a48;
  TAttribute<FMargin> *local_3a40;
  FSlotArgumentsMixin *local_3a38;
  TAttribute<FMargin> *local_3a30;
  TAttribute<FMargin> *local_3a28;
  FArguments *local_3a20;
  FArguments *local_3a18;
  FArguments *local_3a10;
  TAttribute<FText> *local_3a08;
  TAttribute<FText> *local_3a00;
  FArguments *local_39f8;
  FArguments *local_39f0;
  NamedSlotProperty<SExpandableArea::FArguments> *local_39e8;
  FArguments *local_39e0;
  NamedSlotProperty<SExpandableArea::FArguments> *local_39d8;
  FArguments *local_39d0;
  FSlotArguments *local_39c8;
  FSlotArguments *local_39c0;
  FArguments *local_39b8;
  FArguments *local_39b0;
  NamedSlotProperty<SExpandableArea::FArguments> *local_39a8;
  FArguments *local_39a0;
  FSlotArguments *local_3998;
  undefined1 local_3990 [8];
  FArguments *local_3988;
  longlong local_3980;
  FName local_3978;
  FString local_3970;
  FString local_3960;
  code *local_3950;
  undefined4 local_3948;
  TSharedRef<SWidget,1> local_3940;
  TSharedRef<SWidget,1> local_3930;
  TSharedPtr<SDrawPrimitiveDebugger,1> local_3920;
  TSharedRef<SWidget,1> local_3910;
  code *local_3900;
  undefined4 local_38f8;
  TSharedRef<SWidget,1> local_38f0;
  TSharedRef<SWidget,1> local_38e0;
  TSharedRef<SWidget,1> local_38d0;
  TSharedRef<SWidget,1> local_38c0;
  TSharedRef<SWidget,1> local_38b0;
  TSharedRef<SWidget,1> local_38a0;
  TSharedRef<SWidget,1> local_3890;
  TSharedPtr<SDrawPrimitiveDebugger,1> local_3880;
  TSharedRef<SWidget,1> local_3870;
  FString local_3860;
  FString local_3850;
  undefined1 local_3840 [16];
  undefined1 local_3830 [24];
  pmf_0141a4eb local_3818;
  TSharedRef<SHorizontalBox,1> local_3808;
  TSharedRef<STextBlock,1> local_37f8;
  FText local_37e8;
  FString local_37d8;
  FString local_37c8;
  FText local_37b8;
  TSharedRef<STextBlock,1> local_37a8;
  undefined1 local_3798 [16];
  undefined1 local_3788 [16];
  pmf_0141a4eb local_3778;
  TSharedRef<SExpandableArea,1> local_3768;
  TSharedRef<SVerticalBox,1> local_3758;
  TSharedRef<SExpandableArea,1> local_3748;
  TSharedRef<STextBlock,1> local_3738;
  FText local_3728;
  TSharedRef<SHorizontalBox,1> local_3718;
  TSharedRef<STextBlock,1> local_3708;
  FText local_36f8;
  FText local_36e8;
  TSharedRef<STextBlock,1> local_36d8;
  FText local_36c8;
  FString local_36b8;
  FText local_36a8;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_3698;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_3680;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_3668;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_3650;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_3638;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_3620;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_3608;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_35f0;
  TSlateDecl<SExpandableArea,RequiredArgs::T0RequiredArgs> local_35d8;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_35c0;
  TSlateDecl<SExpandableArea,RequiredArgs::T0RequiredArgs> local_35a8;
  NamedSlotProperty<SExpandableArea::FArguments> local_3590;
  NamedSlotProperty<SExpandableArea::FArguments> local_3580;
  NamedSlotProperty<SExpandableArea::FArguments> local_3570;
  NamedSlotProperty<SExpandableArea::FArguments> local_3560;
  undefined1 local_3550 [32];
  undefined1 local_3530 [32];
  TAttribute<float> local_3510;
  undefined1 local_34f0 [32];
  TAttribute<float> local_34d0;
  undefined1 local_34b0 [32];
  TAttribute<FMargin> local_3490;
  TAttribute<FText> local_3460;
  TAttribute<FText> local_3430;
  TAttribute<FMargin> local_3400;
  TAttribute<FText> local_33d0;
  TAttribute<FMargin> local_33a0;
  TAttribute<FMargin> local_3370;
  TAttribute<FText> local_3340;
  TAttribute<FText> local_3310;
  TAttribute<FText> local_32e0;
  TAttribute<FMargin> local_32b0;
  TAttribute<FMargin> local_3280;
  TAttribute<FText> local_3250;
  FSlotArguments local_3220;
  FSlotArguments local_3138;
  FSlotArguments local_3050;
  FSlotArguments local_2f68;
  FScopedWidgetSlotArguments<SVerticalBox::FSlot> local_2e80;
  FScopedWidgetSlotArguments<SVerticalBox::FSlot> local_2d80;
  FScopedWidgetSlotArguments<SVerticalBox::FSlot> local_2c80;
  FArguments local_2b80;
  FArguments local_2978;
  FArguments local_2770;
  FArguments local_2568;
  FArguments local_2360;
  FArguments local_1f18;
  FArguments local_1ad0;
  FArguments local_1578;
  FArguments local_1020;
  FArguments local_ac8;
  FArguments local_570;
  undefined8 uStack_18;
  
  uStack_18 = 0x146d12a50;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    FMargin::FMargin(&Margin,__real_4014000000000000,__real_4000000000000000,__real_4014000000000000
                     ,__real_4000000000000000);
    _Init_thread_footer(&::_TSS0);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    FMargin::FMargin(&MarginInterior,__real_4024000000000000,__real_4000000000000000,0.0,
                     __real_4000000000000000);
    _Init_thread_footer(&::_TSS1);
  }
  ::FString::FString(&local_3e10,"NULL");
  ::FString::FString(&local_3970,"NULL");
  local_3988 = SVerticalBox::FArguments::FArguments(&local_2b80);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_3eb0);
  pTVar3 = MakeTDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
                     (&local_3638,"SVerticalBox",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\DrawPrimitiveDebugger\\Private\\SDrawPrimitiveDebugger.cpp"
                      ,0x218,&local_3eb0);
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=(pTVar3,&local_3df0,local_3988);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_3638._Widget.SharedReferenceCount);
  TArray<SVerticalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>::
  ~TArray<SVerticalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>(&local_2b80._Slots);
  TSlateBaseNamedArgs<SVerticalBox>::~TSlateBaseNamedArgs<SVerticalBox>
            ((TSlateBaseNamedArgs<SVerticalBox> *)&local_2b80);
  if ((param_1 != (UMaterialInterface *)0x0) &&
     (lVar4 = (**(code **)(param_1->_padding_ + 0x2d0))(param_1), lVar4 != 0)) {
    local_3980 = (**(code **)(param_1->_padding_ + 0x2d0))(param_1);
    local_3978 = *(FName *)(local_3980 + 0x18);
    local_3de0 = &local_3978;
    ::FName::ToString(local_3de0,&local_3960);
    ::FString::operator=(&local_3e10,&local_3960);
    ::FString::~FString(&local_3960);
    local_3dd8 = (UObjectBaseUtility *)(**(code **)(param_1->_padding_ + 0x2d0))(param_1);
    local_3dd0 = UObjectBaseUtility::GetPathName(local_3dd8,&local_3850,(UObject *)0x0);
    local_3e60 = local_3e10.Data.ArrayNum;
    if (local_3e10.Data.ArrayNum == 0) {
      local_3e80 = 0;
    }
    else {
      local_3e5c = local_3e10.Data.ArrayNum;
      local_3e80 = local_3e10.Data.ArrayNum + -1;
    }
    local_3e58 = local_3e80;
    local_3e54 = local_3e80 + 1;
    pFVar5 = ::FString::LeftChop(local_3dd0,&local_3860,local_3e54);
    ::FString::operator=(&local_3970,pFVar5);
    ::FString::~FString(&local_3860);
    ::FString::~FString(&local_3850);
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
              (&local_3e98.AllocatorInstance);
    local_3e98.ArrayNum = 0;
    local_3e98.ArrayMax =
         TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                   (&local_3e98.AllocatorInstance);
    local_3da8 = *(code **)(param_1->_padding_ + 0x330);
    local_3dc8 = local_3990;
    local_3ea0[0] = GetMaxShaderPlatformChecked();
    local_3db8 = TOptional<enum_EShaderPlatform>::TOptional<enum_EShaderPlatform>
                           (local_3dc8,local_3ea0);
    local_3dc0 = local_3e64;
    local_3eaf = GetCurrentMaterialQualityLevelChecked();
    local_3db0 = TOptional<enum_EMaterialQualityLevel::Type>::
                 TOptional<enum_EMaterialQualityLevel::Type>(local_3dc0,&local_3eaf);
    (*local_3da8)(param_1,&local_3e98,local_3db0,local_3db8);
    local_3e50 = local_3e98.ArrayNum;
    local_3e4c = local_3e98.ArrayNum;
    for (local_3eb8 = 0; local_3eb8 < local_3e4c; local_3eb8 = local_3eb8 + 1) {
      local_3e78 = (uint)(-1 < local_3eb8);
      local_3e7c = (uint)(local_3eb8 < local_3e98.ArrayNum);
      if (-1 >= local_3eb8 || local_3eb8 >= local_3e98.ArrayNum) {
        local_3da0 = 0;
        local_3d9c = 0;
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
      local_3d98 = local_3e98.AllocatorInstance.Data;
      local_3d90 = local_3e98.AllocatorInstance.Data;
      local_3d88 = local_3e98.AllocatorInstance.Data + (longlong)local_3eb8 * 8;
      local_3e18 = *(UObject **)local_3d88;
      if ((local_3e18 == (UObject *)0x0) ||
         (bVar2 = FInternalUObjectBaseUtilityIsValidFlagsChecker::CheckObjectValidBasedOnItsFlags
                            (local_3e18), !bVar2)) {
        local_3e74 = 0;
      }
      else {
        local_3e74 = 1;
      }
      local_3eae = (char)local_3e74;
      if ((char)local_3e74 == '\0') {
        local_3c40 = TSharedRef<SVerticalBox,1>::operator->(&local_3df0);
        pFVar6 = SVerticalBox::AddSlot(local_3c40,&local_2d80);
        local_3c28 = &pFVar6->_padding_;
        local_3c38 = &local_3400;
        local_3c30 = TAttribute<FMargin>::TAttribute<FMargin><FMargin>(local_3c38,&Margin);
        pFVar7 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                           ((FSlotArgumentsMixin *)local_3c28,local_3c30);
        local_3be8 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar7);
        local_3c10 = STextBlock::FArguments::FArguments(&local_1578);
        local_3c20 = &local_33d0;
        local_3c18 = TAttribute<FText>::TAttribute<FText><FText>(local_3c20,&InvalidTextValue);
        local_3bf8 = STextBlock::FArguments::Text(local_3c10,local_3c18);
        local_3c08 = local_3530;
        local_3e34[0] = Left;
        local_3c00 = TAttribute<enum_ETextJustify::Type>::TAttribute<enum_ETextJustify::Type>
                               (local_3c08,local_3e34);
        local_3bf0 = STextBlock::FArguments::Justification(local_3bf8,local_3c00);
        RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_3eaa);
        pTVar10 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                            (&local_35f0,"STextBlock",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\DrawPrimitiveDebugger\\Private\\SDrawPrimitiveDebugger.cpp"
                             ,0x23f,&local_3eaa);
        pTVar11 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                            (pTVar10,&local_37a8,local_3bf0);
        TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_3910,pTVar11);
        TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                  ((FSlotArguments *)local_3be8,&local_3910);
        TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_3910);
        TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_37a8);
        TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
        ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_35f0);
        STextBlock::FArguments::~FArguments(&local_1578);
        SBoxPanel::FScopedWidgetSlotArguments<SVerticalBox::FSlot>::
        ~FScopedWidgetSlotArguments<SVerticalBox::FSlot>(&local_2d80);
      }
      else {
        local_3e6c = (uint)(-1 < local_3eb8);
        local_3e70 = (uint)(local_3eb8 < local_3e98.ArrayNum);
        if (-1 >= local_3eb8 || local_3eb8 >= local_3e98.ArrayNum) {
          local_3d80 = 0;
          local_3d7c = 0;
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
        local_3d78 = local_3e98.AllocatorInstance.Data;
        local_3d70 = local_3e98.AllocatorInstance.Data;
        local_3d68 = local_3e98.AllocatorInstance.Data + (longlong)local_3eb8 * 8;
        local_3d60 = *(longlong *)local_3d68;
        local_3d58 = *(FName *)(local_3d60 + 0x18);
        local_3d50 = &local_3d58;
        ::FName::ToString(local_3d50,&local_3e00);
        local_3d48 = TSharedRef<SVerticalBox,1>::operator->(&local_3df0);
        pFVar6 = SVerticalBox::AddSlot(local_3d48,&local_2e80);
        local_3d30 = &pFVar6->_padding_;
        local_3d40 = &local_3490;
        local_3d38 = TAttribute<FMargin>::TAttribute<FMargin><FMargin>(local_3d40,&Margin);
        pFVar7 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                           ((FSlotArgumentsMixin *)local_3d30,local_3d38);
        local_3c48 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar7);
        local_3c58 = SHorizontalBox::FArguments::FArguments(&local_2978);
        pFVar8 = SHorizontalBox::Slot(&local_3220);
        local_3d28 = &pFVar8->field_0x48;
        local_3c68 = TAlignmentWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::HAlign
                               ((FSlotArgumentsMixin *)local_3d28,HAlign_Right);
        local_3d10 = STextBlock::FArguments::FArguments(&local_1ad0);
        local_3d20 = &local_3460;
        pFVar9 = FText::FromString(&local_37b8,&local_3e00);
        local_3d18 = TAttribute<FText>::TAttribute<FText>(local_3d20,pFVar9);
        local_3cf8 = STextBlock::FArguments::Text(local_3d10,local_3d18);
        local_3d08 = local_3550;
        local_3e48 = Right;
        local_3d00 = TAttribute<enum_ETextJustify::Type>::TAttribute<enum_ETextJustify::Type>
                               (local_3d08,&local_3e48);
        local_3cb0 = STextBlock::FArguments::Justification(local_3cf8,local_3d00);
        local_3cc0 = &local_3430;
        local_3e88 = (uint)(-1 < local_3eb8);
        local_3e68 = (uint)(local_3eb8 < local_3e98.ArrayNum);
        if (-1 >= local_3eb8 || local_3eb8 >= local_3e98.ArrayNum) {
          local_3cf0 = 0;
          local_3cec = 0;
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
        local_3ce8 = local_3e98.AllocatorInstance.Data;
        local_3ce0 = local_3e98.AllocatorInstance.Data;
        local_3cd8 = local_3e98.AllocatorInstance.Data + (longlong)local_3eb8 * 8;
        local_3cd0 = *(UObjectBaseUtility **)local_3cd8;
        local_3cc8 = UObjectBaseUtility::GetPathName(local_3cd0,&local_37c8,(UObject *)0x0);
        local_3e44 = local_3e00.Data.ArrayNum;
        if (local_3e00.Data.ArrayNum == 0) {
          local_3e84 = 0;
        }
        else {
          local_3e40 = local_3e00.Data.ArrayNum;
          local_3e84 = local_3e00.Data.ArrayNum + -1;
        }
        local_3e3c = local_3e84;
        local_3e38 = local_3e84 + 1;
        pFVar5 = ::FString::LeftChop(local_3cc8,&local_37d8,local_3e38);
        pFVar9 = FText::FromString(&local_37e8,pFVar5);
        local_3cb8 = TAttribute<FText>::TAttribute<FText>(local_3cc0,pFVar9);
        local_3c98 = TSlateBaseNamedArgs<STextBlock>::ToolTipText
                               ((TSlateBaseNamedArgs<STextBlock> *)local_3cb0,local_3cb8);
        local_3ca8 = local_3e62;
        local_3ead = Ellipsis;
        local_3ca0 = TOptional<enum_ETextOverflowPolicy>::TOptional<enum_ETextOverflowPolicy>
                               (local_3ca8,&local_3ead);
        local_3c78 = STextBlock::FArguments::OverflowPolicy(local_3c98,SUB82(local_3ca0,0));
        local_3950 = SDrawPrimitiveDebugger::GetFilterText;
        local_3948 = 0;
        ppcVar17 = &local_3950;
        puVar18 = local_3840;
        for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
          *puVar18 = *(undefined1 *)ppcVar17;
          ppcVar17 = (code **)((longlong)ppcVar17 + 1);
          puVar18 = puVar18 + 1;
        }
        puVar18 = local_3840;
        puVar19 = local_3830;
        for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
          *puVar19 = *puVar18;
          puVar18 = puVar18 + 1;
          puVar19 = puVar19 + 1;
        }
        local_3c90 = &this->PrimitiveDebugger;
        TSharedPtr<SDrawPrimitiveDebugger,1>::
        TSharedPtr<SDrawPrimitiveDebugger,1><SDrawPrimitiveDebugger>(&local_3920,local_3c90);
        local_3c88 = local_3920.Object;
        local_3c80 = local_3920.Object;
        puVar18 = local_3830;
        ppVar20 = &local_3818;
        for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
          *(undefined1 *)ppVar20 = *puVar18;
          puVar18 = puVar18 + 1;
          ppVar20 = (pmf_0141a4eb *)&ppVar20->field_0x1;
        }
        local_3c70 = STextBlock::FArguments::HighlightText<SDrawPrimitiveDebugger>
                               (local_3c78,local_3920.Object,&local_3818);
        RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_3eac);
        pTVar10 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                            (&local_3608,"STextBlock",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\DrawPrimitiveDebugger\\Private\\SDrawPrimitiveDebugger.cpp"
                             ,0x230,&local_3eac);
        pTVar11 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                            (pTVar10,&local_37f8,local_3c70);
        TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_3930,pTVar11);
        local_3c60 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                               ((FSlotArguments *)local_3c68,&local_3930);
        local_3c50 = SHorizontalBox::FArguments::operator+(local_3c58,local_3c60);
        RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_3eab);
        pTVar12 = MakeTDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
                            (&local_3620,"SHorizontalBox",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\DrawPrimitiveDebugger\\Private\\SDrawPrimitiveDebugger.cpp"
                             ,0x22c,&local_3eab);
        pTVar13 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                            (pTVar12,&local_3808,local_3c50);
        TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SHorizontalBox>(&local_3940,pTVar13);
        TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                  ((FSlotArguments *)local_3c48,&local_3940);
        TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_3940);
        SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
                  (&local_3808.SharedReferenceCount);
        TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
        ~TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>(&local_3620);
        TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_3930);
        TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_37f8);
        TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
        ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_3608);
        TSharedPtr<SDrawPrimitiveDebugger,1>::~TSharedPtr<SDrawPrimitiveDebugger,1>(&local_3920);
        FText::~FText(&local_37e8);
        ::FString::~FString(&local_37d8);
        ::FString::~FString(&local_37c8);
        FText::~FText(&local_37b8);
        STextBlock::FArguments::~FArguments(&local_1ad0);
        SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_3220);
        TArray<SHorizontalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>::
        ~TArray<SHorizontalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>
                  (&local_2978._Slots);
        TSlateBaseNamedArgs<SHorizontalBox>::~TSlateBaseNamedArgs<SHorizontalBox>
                  ((TSlateBaseNamedArgs<SHorizontalBox> *)&local_2978);
        SBoxPanel::FScopedWidgetSlotArguments<SVerticalBox::FSlot>::
        ~FScopedWidgetSlotArguments<SVerticalBox::FSlot>(&local_2e80);
        ::FString::~FString(&local_3e00);
      }
    }
    TArray<UTexture_*,TSizedDefaultAllocator<32>_>::~TArray<UTexture_*,TSizedDefaultAllocator<32>_>
              (&local_3e98);
  }
  local_3be0 = TSharedPtr<SVerticalBox,1>::operator->(&this->MaterialsWidget);
  pFVar6 = SVerticalBox::AddSlot(local_3be0,&local_2c80);
  local_3bc8 = &pFVar6->_padding_;
  local_3bd8 = &local_33a0;
  local_3bd0 = TAttribute<FMargin>::TAttribute<FMargin><FMargin>(local_3bd8,&MarginInterior);
  pFVar7 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                     ((FSlotArgumentsMixin *)local_3bc8,local_3bd0);
  local_3998 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar7);
  local_3bb0 = SExpandableArea::FArguments::FArguments(&local_1f18);
  local_3bc0 = &local_3370;
  local_3bb8 = TAttribute<FMargin>::TAttribute<FMargin><FMargin>(local_3bc0,&MarginInterior);
  local_3ba8 = SExpandableArea::FArguments::Padding(local_3bb0,local_3bb8);
  local_3ba0 = SExpandableArea::FArguments::InitiallyCollapsed(local_3ba8,true);
  local_3a58 = SExpandableArea::FArguments::HeaderContent(local_3ba0,&local_3590);
  local_3b28 = SHorizontalBox::FArguments::FArguments(&local_2568);
  pFVar8 = SHorizontalBox::Slot(&local_2f68);
  local_3b98 = &pFVar8->field_0x48;
  local_3b80 = TAlignmentWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::HAlign
                         ((FSlotArgumentsMixin *)local_3b98,HAlign_Left);
  local_3b90 = &local_3510;
  local_3b88 = TAttribute<float>::TAttribute<float><int>(local_3b90,&LabelColumnWidth);
  local_3b38 = SHorizontalBox::FSlot::FSlotArguments::FillWidth(local_3b80,local_3b88);
  local_3b60 = STextBlock::FArguments::FArguments(&local_570);
  local_3b70 = &local_3340;
  if (!param_3) {
    pFVar5 = ::FString::FromInt(&local_36b8,param_2);
    local_3e20 = FText::FromString(&local_36c8,pFVar5);
  }
  else {
    local_3e20 = FText::AsLocalizable_Advanced_LocText
                           (&local_36a8,L"PRIMITIVE_DEBUGGER",L"DetailPanel_OverlayLabel",L"Overlay"
                           );
  }
  local_3b78 = local_3e20;
  local_3b68 = TAttribute<FText>::TAttribute<FText>(local_3b70,local_3e20);
  local_3b48 = STextBlock::FArguments::Text(local_3b60,local_3b68);
  local_3b58 = local_34f0;
  local_3e34[1] = 0;
  local_3b50 = TAttribute<enum_ETextJustify::Type>::TAttribute<enum_ETextJustify::Type>
                         (local_3b58,local_3e34 + 1);
  local_3b40 = STextBlock::FArguments::Justification(local_3b48,local_3b50);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_3ea9);
  pTVar10 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                      (&local_3650,"STextBlock",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\DrawPrimitiveDebugger\\Private\\SDrawPrimitiveDebugger.cpp"
                       ,0x254,&local_3ea9);
  pTVar11 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar10,&local_36d8,local_3b40);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_3870,pTVar11);
  local_3b30 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_3b38,&local_3870);
  local_3a68 = SHorizontalBox::FArguments::operator+(local_3b28,local_3b30);
  pFVar8 = SHorizontalBox::Slot(&local_3050);
  local_3b20 = &pFVar8->field_0x48;
  local_3b08 = TAlignmentWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::HAlign
                         ((FSlotArgumentsMixin *)local_3b20,HAlign_Right);
  local_3b18 = &local_34d0;
  local_3b10 = TAttribute<float>::TAttribute<float><int>(local_3b18,&ValueColumnWidth);
  local_3a78 = SHorizontalBox::FSlot::FSlotArguments::FillWidth(local_3b08,local_3b10);
  local_3af0 = STextBlock::FArguments::FArguments(&local_ac8);
  local_3b00 = &local_3310;
  pFVar9 = FText::FromString(&local_36e8,&local_3e10);
  local_3af8 = TAttribute<FText>::TAttribute<FText>(local_3b00,pFVar9);
  local_3ad8 = STextBlock::FArguments::Text(local_3af0,local_3af8);
  local_3ae8 = local_34b0;
  local_3e34[2] = 0;
  local_3ae0 = TAttribute<enum_ETextJustify::Type>::TAttribute<enum_ETextJustify::Type>
                         (local_3ae8,local_3e34 + 2);
  local_3ac0 = STextBlock::FArguments::Justification(local_3ad8,local_3ae0);
  local_3ad0 = &local_32e0;
  pFVar9 = FText::FromString(&local_36f8,&local_3970);
  local_3ac8 = TAttribute<FText>::TAttribute<FText>(local_3ad0,pFVar9);
  local_3aa8 = TSlateBaseNamedArgs<STextBlock>::ToolTipText
                         ((TSlateBaseNamedArgs<STextBlock> *)local_3ac0,local_3ac8);
  local_3ab8 = local_3e28;
  local_3ea8 = Ellipsis;
  local_3ab0 = TOptional<enum_ETextOverflowPolicy>::TOptional<enum_ETextOverflowPolicy>
                         (local_3ab8,&local_3ea8);
  local_3a88 = STextBlock::FArguments::OverflowPolicy(local_3aa8,SUB82(local_3ab0,0));
  local_3900 = SDrawPrimitiveDebugger::GetFilterText;
  local_38f8 = 0;
  ppcVar17 = &local_3900;
  puVar18 = local_3798;
  for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar18 = *(undefined1 *)ppcVar17;
    ppcVar17 = (code **)((longlong)ppcVar17 + 1);
    puVar18 = puVar18 + 1;
  }
  puVar18 = local_3798;
  puVar19 = local_3788;
  for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar19 = *puVar18;
    puVar18 = puVar18 + 1;
    puVar19 = puVar19 + 1;
  }
  local_3aa0 = &this->PrimitiveDebugger;
  TSharedPtr<SDrawPrimitiveDebugger,1>::TSharedPtr<SDrawPrimitiveDebugger,1><SDrawPrimitiveDebugger>
            (&local_3880,local_3aa0);
  local_3a98 = local_3880.Object;
  local_3a90 = local_3880.Object;
  puVar18 = local_3788;
  ppVar20 = &local_3778;
  for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
    *(undefined1 *)ppVar20 = *puVar18;
    puVar18 = puVar18 + 1;
    ppVar20 = (pmf_0141a4eb *)&ppVar20->field_0x1;
  }
  local_3a80 = STextBlock::FArguments::HighlightText<SDrawPrimitiveDebugger>
                         (local_3a88,local_3880.Object,&local_3778);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_3ea7);
  pTVar10 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                      (&local_3668,"STextBlock",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\DrawPrimitiveDebugger\\Private\\SDrawPrimitiveDebugger.cpp"
                       ,0x25c,&local_3ea7);
  pTVar11 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar10,&local_3708,local_3a80);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_3890,pTVar11);
  local_3a70 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_3a78,&local_3890);
  local_3a60 = SHorizontalBox::FArguments::operator+(local_3a68,local_3a70);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_3ea6);
  pTVar12 = MakeTDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
                      (&local_3680,"SHorizontalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\DrawPrimitiveDebugger\\Private\\SDrawPrimitiveDebugger.cpp"
                       ,0x24f,&local_3ea6);
  pTVar13 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar12,&local_3718,local_3a60);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SHorizontalBox>(&local_38a0,pTVar13);
  local_3a50 = NamedSlotProperty<SExpandableArea::FArguments>::operator[](local_3a58,&local_38a0);
  local_39a8 = SExpandableArea::FArguments::BodyContent(local_3a50,&local_3580);
  local_39b8 = SVerticalBox::FArguments::FArguments(&local_2770);
  pFVar7 = SVerticalBox::Slot(&local_3138);
  local_3a38 = (FSlotArgumentsMixin *)&pFVar7->field_0x18;
  local_3a48 = &local_32b0;
  local_3a40 = TAttribute<FMargin>::TAttribute<FMargin><FMargin>(local_3a48,&MarginInterior);
  pFVar7 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                     (local_3a38,local_3a40);
  local_39c8 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar7);
  local_3a20 = SExpandableArea::FArguments::FArguments(&local_2360);
  local_3a30 = &local_3280;
  local_3a28 = TAttribute<FMargin>::TAttribute<FMargin><FMargin>(local_3a30,&MarginInterior);
  local_3a18 = SExpandableArea::FArguments::Padding(local_3a20,local_3a28);
  local_3a10 = SExpandableArea::FArguments::InitiallyCollapsed(local_3a18,true);
  local_39e8 = SExpandableArea::FArguments::HeaderContent(local_3a10,&local_3570);
  local_39f8 = STextBlock::FArguments::FArguments(&local_1020);
  local_3a08 = &local_3250;
  pFVar9 = FText::AsLocalizable_Advanced_LocText
                     (&local_3728,L"PRIMITIVE_DEBUGGER",L"DetailPanel_TexturesLabel",L"Textures");
  local_3a00 = TAttribute<FText>::TAttribute<FText>(local_3a08,pFVar9);
  local_39f0 = STextBlock::FArguments::Text(local_39f8,local_3a00);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_3ea5);
  pTVar10 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                      (&local_3698,"STextBlock",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\DrawPrimitiveDebugger\\Private\\SDrawPrimitiveDebugger.cpp"
                       ,0x270,&local_3ea5);
  pTVar11 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar10,&local_3738,local_39f0);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_38b0,pTVar11);
  local_39e0 = NamedSlotProperty<SExpandableArea::FArguments>::operator[](local_39e8,&local_38b0);
  local_39d8 = SExpandableArea::FArguments::BodyContent(local_39e0,&local_3560);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SVerticalBox>(&local_38c0,&local_3df0);
  local_39d0 = NamedSlotProperty<SExpandableArea::FArguments>::operator[](local_39d8,&local_38c0);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_3ea4);
  pTVar14 = MakeTDecl<SExpandableArea,RequiredArgs::T0RequiredArgs>
                      (&local_35a8,"SExpandableArea",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\DrawPrimitiveDebugger\\Private\\SDrawPrimitiveDebugger.cpp"
                       ,0x26b,&local_3ea4);
  pTVar15 = TSlateDecl<SExpandableArea,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar14,&local_3748,local_39d0);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SExpandableArea>(&local_38d0,pTVar15);
  local_39c0 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_39c8,&local_38d0);
  local_39b0 = SVerticalBox::FArguments::operator+(local_39b8,local_39c0);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_3ea3);
  pTVar3 = MakeTDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
                     (&local_35c0,"SVerticalBox",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\DrawPrimitiveDebugger\\Private\\SDrawPrimitiveDebugger.cpp"
                      ,0x266,&local_3ea3);
  pTVar16 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar3,&local_3758,local_39b0);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SVerticalBox>(&local_38e0,pTVar16);
  local_39a0 = NamedSlotProperty<SExpandableArea::FArguments>::operator[](local_39a8,&local_38e0);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(local_3ea2);
  pTVar14 = MakeTDecl<SExpandableArea,RequiredArgs::T0RequiredArgs>
                      (&local_35d8,"SExpandableArea",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\DrawPrimitiveDebugger\\Private\\SDrawPrimitiveDebugger.cpp"
                       ,0x24a,local_3ea2);
  pTVar15 = TSlateDecl<SExpandableArea,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar14,&local_3768,local_39a0);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SExpandableArea>(&local_38f0,pTVar15);
  TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
            ((FSlotArguments *)local_3998,&local_38f0);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_38f0);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_3768.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_35d8._Widget.SharedReferenceCount);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_38e0);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_3758.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_35c0._Widget.SharedReferenceCount);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_38d0);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_3748.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_35a8._Widget.SharedReferenceCount);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_38c0);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_38b0);
  TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_3738);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_3698);
  FText::~FText(&local_3728);
  STextBlock::FArguments::~FArguments(&local_1020);
  SExpandableArea::FArguments::~FArguments(&local_2360);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_3138);
  TArray<SVerticalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>::
  ~TArray<SVerticalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>(&local_2770._Slots);
  TSlateBaseNamedArgs<SVerticalBox>::~TSlateBaseNamedArgs<SVerticalBox>
            ((TSlateBaseNamedArgs<SVerticalBox> *)&local_2770);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_38a0);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_3718.SharedReferenceCount);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>(&local_3680);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_3890);
  TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_3708);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_3668);
  TSharedPtr<SDrawPrimitiveDebugger,1>::~TSharedPtr<SDrawPrimitiveDebugger,1>(&local_3880);
  FText::~FText(&local_36f8);
  FText::~FText(&local_36e8);
  STextBlock::FArguments::~FArguments(&local_ac8);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_3050);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_3870);
  TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_36d8);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_3650);
  if (!param_3) {
    FText::~FText(&local_36c8);
    ::FString::~FString(&local_36b8);
  }
  else {
    FText::~FText(&local_36a8);
  }
  STextBlock::FArguments::~FArguments(&local_570);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_2f68);
  TArray<SHorizontalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>::
  ~TArray<SHorizontalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>(&local_2568._Slots);
  TSlateBaseNamedArgs<SHorizontalBox>::~TSlateBaseNamedArgs<SHorizontalBox>
            ((TSlateBaseNamedArgs<SHorizontalBox> *)&local_2568);
  SExpandableArea::FArguments::~FArguments(&local_1f18);
  SBoxPanel::FScopedWidgetSlotArguments<SVerticalBox::FSlot>::
  ~FScopedWidgetSlotArguments<SVerticalBox::FSlot>(&local_2c80);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_3df0.SharedReferenceCount);
  ::FString::~FString(&local_3970);
  ::FString::~FString(&local_3e10);
  return;
}

// ForceDisableNaniteState @ 146d18530

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

ECheckBoxState __thiscall
SPrimitiveDebuggerDetailView::ForceDisableNaniteState(SPrimitiveDebuggerDetailView *this)

{
  bool bVar1;
  UObject *pUVar2;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->SelectedAsStaticMesh).WeakPtr);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->SelectedAsStaticMesh).WeakPtr);
    bVar1 = ((byte)pUVar2[0x24].field_0xc >> 2 & 1) != 0;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

// ForceLODState @ 146d185c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

ECheckBoxState __thiscall
SPrimitiveDebuggerDetailView::ForceLODState(SPrimitiveDebuggerDetailView *this)

{
  bool bVar1;
  ECheckBoxState EVar2;
  int iVar3;
  FWeakReferencer<1> *pFVar4;
  SDrawPrimitiveDebugger *pSVar5;
  FPrimitiveComponentId local_4c;
  TSharedPtr<SDrawPrimitiveDebugger,1> local_18;
  
  if ((this->PrimitiveDebugger).Object != (SDrawPrimitiveDebugger *)0x0) {
    pFVar4 = &(this->PrimitiveDebugger).WeakReferenceCount;
    if ((pFVar4->ReferenceController == (TReferenceControllerBase<1> *)0x0) ||
       (iVar3 = SharedPointerInternals::TReferenceControllerBase<1>::GetSharedReferenceCount
                          (pFVar4->ReferenceController), iVar3 < 1)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      bVar1 = true;
      goto LAB_146d18644;
    }
  }
  bVar1 = false;
LAB_146d18644:
  if (bVar1) {
    TSharedPtr<SDrawPrimitiveDebugger,1>::
    TSharedPtr<SDrawPrimitiveDebugger,1><SDrawPrimitiveDebugger>(&local_18,&this->PrimitiveDebugger)
    ;
    pSVar5 = TSharedPtr<SDrawPrimitiveDebugger,1>::operator->(&local_18);
    SDrawPrimitiveDebugger::GetCurrentSelectionId(pSVar5);
    pSVar5 = TSharedPtr<SDrawPrimitiveDebugger,1>::operator->(&local_18);
    EVar2 = SDrawPrimitiveDebugger::DoesEntryHaveForcedLOD(pSVar5,local_4c);
    TSharedPtr<SDrawPrimitiveDebugger,1>::~TSharedPtr<SDrawPrimitiveDebugger,1>(&local_18);
  }
  else {
    EVar2 = Undetermined;
  }
  return EVar2;
}

// GenerateDetailPanelEntry @ 146d19820

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
SPrimitiveDebuggerDetailView::GenerateDetailPanelEntry
          (SPrimitiveDebuggerDetailView *this,FText *param_1,pmf_da1fa645 *param_2,
          pmf_b3a9d206 *param_3,pmf_da1fa645 *param_4,bool param_5)

{
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> *pTVar1;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *pTVar2;
  FSlotArguments *pFVar3;
  TSharedRef<STextBlock,1> *pTVar4;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> *this_00;
  TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *pTVar5;
  FScopedWidgetSlotArguments<SVerticalBox::FSlot> *pFVar6;
  FSlotArguments *this_01;
  longlong lVar7;
  code **ppcVar8;
  undefined1 *puVar9;
  pmf_da1fa645 *ppVar10;
  pmf_0141a4eb *ppVar11;
  pmf_b3a9d206 *ppVar12;
  ETextOverflowPolicy local_1478;
  T0RequiredArgs local_1477;
  T0RequiredArgs local_1476;
  T0RequiredArgs local_1475;
  int local_1474;
  int local_1470;
  undefined1 local_146c [4];
  Type local_1468 [2];
  TSharedRef<STextBlock,1> local_1460;
  FArguments *local_1450;
  undefined1 *local_1448;
  TAttribute<ETextJustify::Type> *local_1440;
  FArguments *local_1438;
  undefined1 *local_1430;
  TOptional<ETextOverflowPolicy> *local_1428;
  FArguments *local_1420;
  FArguments *local_1418;
  STextBlock *local_1410;
  TWeakPtr<SDrawPrimitiveDebugger,1> *local_1408;
  SDrawPrimitiveDebugger *local_1400;
  SDrawPrimitiveDebugger *local_13f8;
  TAttribute<FText> *local_13f0;
  TAttribute<FText> *local_13e8;
  STextBlock *local_13e0;
  undefined1 *local_13d8;
  TAttribute<float> *local_13d0;
  TAttribute<float> *local_13c8;
  FSlotArguments *local_13c0;
  TAttribute<FText> *local_13b8;
  TAttribute<FText> *local_13b0;
  FArguments *local_13a8;
  undefined1 *local_13a0;
  TAttribute<ETextJustify::Type> *local_1398;
  FArguments *local_1390;
  FArguments *local_1388;
  FSlotArguments *local_1380;
  FSlotArguments *local_1378;
  FArguments *local_1370;
  undefined1 *local_1368;
  TAttribute<float> *local_1360;
  TAttribute<float> *local_1358;
  FSlotArguments *local_1350;
  FSlotArguments *local_1348;
  FSlotArguments *local_1340;
  FArguments *local_1338;
  FArguments *local_1330;
  TAttribute<EVisibility> *local_1328;
  TAttribute<EVisibility> *local_1320;
  SHorizontalBox *local_1318;
  SVerticalBox *local_1310;
  TAttribute<FMargin> *local_1308;
  TAttribute<FMargin> *local_1300;
  longlong *local_12f8;
  FSlotArguments *local_12f0;
  undefined4 local_12e8;
  undefined8 local_12e0;
  undefined4 local_12d8;
  undefined8 local_12d0;
  undefined4 local_12c8;
  TSharedRef<SHorizontalBox,1> local_12c0;
  code *local_12b0;
  undefined4 local_12a8;
  TSharedPtr<SDrawPrimitiveDebugger,1> local_12a0;
  TSharedRef<SWidget,1> local_1290;
  TSharedRef<SWidget,1> local_1280;
  TSharedRef<SWidget,1> local_1270;
  undefined1 local_1260 [24];
  pmf_da1fa645 local_1248;
  pmf_da1fa645 local_1238;
  undefined1 local_1228 [16];
  pmf_0141a4eb local_1218;
  TSharedRef<STextBlock,1> local_1208;
  pmf_b3a9d206 local_11f8;
  TAttribute<EVisibility> local_11e8;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> local_11c8;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> local_11b0;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_1198;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_1180;
  TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> local_1168;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_1150;
  TAttribute<FText> local_1138;
  TAttribute<FText> local_1108;
  undefined1 local_10d8 [32];
  TAttribute<float> local_10b8;
  undefined1 local_1098 [32];
  TAttribute<float> local_1078;
  TAttribute<EVisibility> local_1058;
  TAttribute<FText> local_1038;
  TAttribute<FText> local_1008;
  TAttribute<FMargin> local_fd8;
  FSlotArguments local_fa8;
  FSlotArguments local_ec0;
  FScopedWidgetSlotArguments<SVerticalBox::FSlot> local_dd8;
  FArguments local_cd8;
  FArguments local_ad0;
  FArguments local_578;
  undefined8 uStack_18;
  
  uStack_18 = 0x146d19840;
  local_12e8 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FMargin::FMargin(&Margin,__real_4014000000000000,__real_4000000000000000,
                       __real_4014000000000000,__real_4000000000000000);
      _Init_thread_footer(&::_TSS0);
    }
  }
  local_1450 = STextBlock::FArguments::FArguments(&local_ad0);
  puVar9 = local_1260;
  for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar9 = *(undefined1 *)param_2;
    param_2 = (pmf_da1fa645 *)&param_2->field_0x1;
    puVar9 = puVar9 + 1;
  }
  puVar9 = local_1260;
  ppVar10 = &local_1248;
  for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
    *(undefined1 *)ppVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    ppVar10 = (pmf_da1fa645 *)&ppVar10->field_0x1;
  }
  local_1438 = STextBlock::FArguments::Text<SPrimitiveDebuggerDetailView_const_>
                         (local_1450,this,&local_1248);
  local_1448 = local_10d8;
  local_1468[0] = Left;
  local_1440 = TAttribute<enum_ETextJustify::Type>::TAttribute<enum_ETextJustify::Type>
                         (local_1448,local_1468);
  local_1420 = STextBlock::FArguments::Justification(local_1438,local_1440);
  local_1430 = local_146c;
  local_1478 = Ellipsis;
  local_1428 = TOptional<enum_ETextOverflowPolicy>::TOptional<enum_ETextOverflowPolicy>
                         (local_1430,&local_1478);
  local_1418 = STextBlock::FArguments::OverflowPolicy(local_1420,SUB82(local_1428,0));
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_1477);
  pTVar1 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                     (&local_1150,"STextBlock",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\DrawPrimitiveDebugger\\Private\\SDrawPrimitiveDebugger.cpp"
                      ,0x1b4,&local_1477);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=(pTVar1,&local_1460,local_1418);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_1150);
  STextBlock::FArguments::~FArguments(&local_ad0);
  local_12e0 = 0;
  local_12d8 = 0;
  if ((*(longlong *)param_4 == 0) &&
     ((*(longlong *)param_4 == 0 || (*(int *)&param_4->field_0x8 == 0)))) {
    local_1474 = 0;
  }
  else {
    local_1474 = 1;
  }
  if (local_1474 != 0) {
    ppVar10 = &local_1238;
    for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
      *(undefined1 *)ppVar10 = *(undefined1 *)param_4;
      param_4 = (pmf_da1fa645 *)&param_4->field_0x1;
      ppVar10 = (pmf_da1fa645 *)&ppVar10->field_0x1;
    }
    pTVar2 = TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::
             CreateSP<SPrimitiveDebuggerDetailView>(&local_11c8,this,&local_1238);
    TAttribute<FText>::Create(&local_1138,pTVar2);
    TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::
    ~TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>(&local_11c8);
    local_1410 = TSharedRef<STextBlock,1>::operator->(&local_1460);
    SWidget::SetToolTipText((SWidget *)local_1410,&local_1138);
    TAttribute<FText>::~TAttribute<FText>(&local_1138);
  }
  if (param_5) {
    local_12b0 = SDrawPrimitiveDebugger::GetFilterText;
    local_12a8 = 0;
    ppcVar8 = &local_12b0;
    puVar9 = local_1228;
    for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
      *puVar9 = *(undefined1 *)ppcVar8;
      ppcVar8 = (code **)((longlong)ppcVar8 + 1);
      puVar9 = puVar9 + 1;
    }
    local_1408 = &this->PrimitiveDebugger;
    TSharedPtr<SDrawPrimitiveDebugger,1>::
    TSharedPtr<SDrawPrimitiveDebugger,1><SDrawPrimitiveDebugger>(&local_12a0,local_1408);
    local_1400 = local_12a0.Object;
    local_13f8 = local_12a0.Object;
    puVar9 = local_1228;
    ppVar11 = &local_1218;
    for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
      *(undefined1 *)ppVar11 = *puVar9;
      puVar9 = puVar9 + 1;
      ppVar11 = (pmf_0141a4eb *)&ppVar11->field_0x1;
    }
    pTVar2 = TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::
             CreateSP<SDrawPrimitiveDebugger>(&local_11b0,local_12a0.Object,&local_1218);
    TAttribute<FText>::Create(&local_1108,pTVar2);
    TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::
    ~TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>(&local_11b0);
    TSharedPtr<SDrawPrimitiveDebugger,1>::~TSharedPtr<SDrawPrimitiveDebugger,1>(&local_12a0);
    local_13e0 = TSharedRef<STextBlock,1>::operator->(&local_1460);
    local_13f0 = &local_1038;
    local_13e8 = TAttribute<FText>::TAttribute<FText>(local_13f0,&local_1108);
    STextBlock::SetHighlightText(local_13e0,local_13e8);
    TAttribute<FText>::~TAttribute<FText>(&local_1108);
  }
  local_1370 = SHorizontalBox::FArguments::FArguments(&local_cd8);
  pFVar3 = SHorizontalBox::Slot(&local_ec0);
  local_13d8 = &pFVar3->field_0x48;
  local_13c0 = TAlignmentWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::HAlign
                         ((FSlotArgumentsMixin *)local_13d8,HAlign_Left);
  local_13d0 = &local_10b8;
  local_13c8 = TAttribute<float>::TAttribute<float><int>(local_13d0,&LabelColumnWidth);
  local_1380 = SHorizontalBox::FSlot::FSlotArguments::FillWidth(local_13c0,local_13c8);
  local_13a8 = STextBlock::FArguments::FArguments(&local_578);
  local_13b8 = &local_1008;
  local_13b0 = TAttribute<FText>::TAttribute<FText><FText>(local_13b8,param_1);
  local_1390 = STextBlock::FArguments::Text(local_13a8,local_13b0);
  local_13a0 = local_1098;
  local_1468[1] = 0;
  local_1398 = TAttribute<enum_ETextJustify::Type>::TAttribute<enum_ETextJustify::Type>
                         (local_13a0,local_1468 + 1);
  local_1388 = STextBlock::FArguments::Justification(local_1390,local_1398);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_1476);
  pTVar1 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                     (&local_1180,"STextBlock",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\DrawPrimitiveDebugger\\Private\\SDrawPrimitiveDebugger.cpp"
                      ,0x1c9,&local_1476);
  pTVar4 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar1,&local_1208,local_1388);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_1280,pTVar4);
  local_1378 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_1380,&local_1280);
  local_1338 = SHorizontalBox::FArguments::operator+(local_1370,local_1378);
  pFVar3 = SHorizontalBox::Slot(&local_fa8);
  local_1368 = &pFVar3->field_0x48;
  local_1350 = TAlignmentWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::HAlign
                         ((FSlotArgumentsMixin *)local_1368,HAlign_Right);
  local_1360 = &local_1078;
  local_1358 = TAttribute<float>::TAttribute<float><int>(local_1360,&ValueColumnWidth);
  local_1348 = SHorizontalBox::FSlot::FSlotArguments::FillWidth(local_1350,local_1358);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_1290,&local_1460);
  local_1340 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_1348,&local_1290);
  local_1330 = SHorizontalBox::FArguments::operator+(local_1338,local_1340);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_1475);
  this_00 = MakeTDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
                      (&local_1198,"SHorizontalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\DrawPrimitiveDebugger\\Private\\SDrawPrimitiveDebugger.cpp"
                       ,0x1c4,&local_1475);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
            (this_00,&local_12c0,local_1330);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>(&local_1198);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_1290);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_fa8);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_1280);
  TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_1208);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_1180);
  STextBlock::FArguments::~FArguments(&local_578);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_ec0);
  TArray<SHorizontalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>::
  ~TArray<SHorizontalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>(&local_cd8._Slots);
  TSlateBaseNamedArgs<SHorizontalBox>::~TSlateBaseNamedArgs<SHorizontalBox>
            ((TSlateBaseNamedArgs<SHorizontalBox> *)&local_cd8);
  local_12d0 = 0;
  local_12c8 = 0;
  if ((*(longlong *)param_3 == 0) &&
     ((*(longlong *)param_3 == 0 || (*(int *)&param_3->field_0x8 == 0)))) {
    local_1470 = 0;
  }
  else {
    local_1470 = 1;
  }
  if (local_1470 != 0) {
    ppVar12 = &local_11f8;
    for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
      *(undefined1 *)ppVar12 = *(undefined1 *)param_3;
      param_3 = (pmf_b3a9d206 *)&param_3->field_0x1;
      ppVar12 = (pmf_b3a9d206 *)&ppVar12->field_0x1;
    }
    pTVar5 = TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
             CreateSP<SPrimitiveDebuggerDetailView>(&local_1168,this,&local_11f8);
    TAttribute<EVisibility>::Create(&local_11e8,pTVar5);
    TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
    ~TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>(&local_1168);
    local_1318 = TSharedRef<SHorizontalBox,1>::operator->(&local_12c0);
    local_1328 = &local_1058;
    local_1320 = TAttribute<EVisibility>::TAttribute<EVisibility>(local_1328,&local_11e8);
    SPanel::SetVisibility((SPanel *)local_1318,local_1320);
    TAttribute<EVisibility>::~TAttribute<EVisibility>(&local_11e8);
  }
  local_1310 = TSharedPtr<SVerticalBox,1>::operator->(&this->DetailPropertiesWidget);
  pFVar6 = SVerticalBox::AddSlot(local_1310,&local_dd8);
  local_12f8 = &pFVar6->_padding_;
  local_1308 = &local_fd8;
  local_1300 = TAttribute<FMargin>::TAttribute<FMargin><FMargin>(local_1308,&Margin);
  this_01 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)local_12f8,local_1300);
  local_12f0 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(this_01);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SHorizontalBox>(&local_1270,&local_12c0);
  TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
            ((FSlotArguments *)local_12f0,&local_1270);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_1270);
  SBoxPanel::FScopedWidgetSlotArguments<SVerticalBox::FSlot>::
  ~FScopedWidgetSlotArguments<SVerticalBox::FSlot>(&local_dd8);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_12c0.SharedReferenceCount);
  TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_1460);
  return;
}

// GetAdvancedOptionsWidget @ 146d1b000

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

TSharedRef<SVerticalBox,1> * __thiscall
SPrimitiveDebuggerDetailView::GetAdvancedOptionsWidget
          (SPrimitiveDebuggerDetailView *this,TSharedRef<SVerticalBox,1> *__return_storage_ptr__)

{
  bool bVar1;
  int iVar2;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> *this_00;
  SBoxPanel *this_01;
  FPrimitiveInfo *this_02;
  FScopedWidgetSlotArguments<SVerticalBox::FSlot> *pFVar3;
  FSlotArguments *pFVar4;
  FSlotArguments *pFVar5;
  FText *pFVar6;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> *pTVar7;
  TSharedRef<STextBlock,1> *pTVar8;
  TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs> *pTVar9;
  TSharedRef<SCheckBox,1> *pTVar10;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> *pTVar11;
  TSharedRef<SHorizontalBox,1> *pTVar12;
  TSlateDecl<SNumericEntryBox<int>,RequiredArgs::T0RequiredArgs> *this_03;
  TSharedRef<SNumericEntryBox<int>,1> *pTVar13;
  longlong lVar14;
  code **ppcVar15;
  undefined1 *puVar16;
  pmf_213a92dc *ppVar17;
  pmf_6ca5fcb7 *ppVar18;
  pmf_d4321e53 *ppVar19;
  pmf_b3a9d206 *ppVar20;
  pmf_04c88d14 *ppVar21;
  pmf_ce3dd58c *ppVar22;
  char local_60a7;
  T0RequiredArgs local_60a4;
  char local_60a3;
  char local_60a2;
  undefined1 local_60a1;
  T0RequiredArgs local_60a0;
  T0RequiredArgs local_609f;
  T0RequiredArgs local_609e;
  T0RequiredArgs local_609d;
  T0RequiredArgs local_609c;
  T0RequiredArgs local_609b;
  T0RequiredArgs local_609a;
  T0RequiredArgs local_6099;
  T0RequiredArgs local_6098;
  T0RequiredArgs local_6097;
  T0RequiredArgs local_6096;
  T0RequiredArgs local_6095;
  T0RequiredArgs local_6094;
  T0RequiredArgs local_6093;
  T0RequiredArgs local_6092 [2];
  undefined4 local_6090;
  Type local_608c [13];
  TWeakPtr<SDrawPrimitiveDebugger,1> *local_6058;
  FWeakReferencer<1> *local_6050;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> *local_6048;
  FArguments *local_6040;
  TSharedPtr<SVerticalBox,1> *local_6038;
  TWeakPtr<SDrawPrimitiveDebugger,1> *local_6030;
  SDrawPrimitiveDebugger *local_6028;
  SVerticalBox *local_6020;
  TAttribute<FMargin> *local_6018;
  TAttribute<FMargin> *local_6010;
  longlong *local_6008;
  undefined1 *local_6000;
  TAttribute<float> *local_5ff8;
  TAttribute<float> *local_5ff0;
  FSlotArguments *local_5fe8;
  TAttribute<FText> *local_5fe0;
  TAttribute<FText> *local_5fd8;
  FArguments *local_5fd0;
  undefined1 *local_5fc8;
  TAttribute<ETextJustify::Type> *local_5fc0;
  FArguments *local_5fb8;
  TAttribute<FText> *local_5fb0;
  TAttribute<FText> *local_5fa8;
  FArguments *local_5fa0;
  FArguments *local_5f98;
  FSlotArguments *local_5f90;
  FSlotArguments *local_5f88;
  FArguments *local_5f80;
  undefined1 *local_5f78;
  TAttribute<float> *local_5f70;
  TAttribute<float> *local_5f68;
  FSlotArguments *local_5f60;
  FArguments *local_5f58;
  FArguments *local_5f50;
  TAttribute<FText> *local_5f48;
  TAttribute<FText> *local_5f40;
  FArguments *local_5f38;
  FArguments *local_5f30;
  FSlotArguments *local_5f28;
  FSlotArguments *local_5f20;
  FArguments *local_5f18;
  FArguments *local_5f10;
  FSlotArguments *local_5f08;
  SVerticalBox *local_5f00;
  TAttribute<FMargin> *local_5ef8;
  TAttribute<FMargin> *local_5ef0;
  longlong *local_5ee8;
  FArguments *local_5ee0;
  undefined1 *local_5ed8;
  TAttribute<float> *local_5ed0;
  TAttribute<float> *local_5ec8;
  FSlotArguments *local_5ec0;
  TAttribute<FText> *local_5eb8;
  TAttribute<FText> *local_5eb0;
  FArguments *local_5ea8;
  undefined1 *local_5ea0;
  TAttribute<ETextJustify::Type> *local_5e98;
  FArguments *local_5e90;
  TAttribute<FText> *local_5e88;
  TAttribute<FText> *local_5e80;
  FArguments *local_5e78;
  FArguments *local_5e70;
  FSlotArguments *local_5e68;
  FSlotArguments *local_5e60;
  FArguments *local_5e58;
  undefined1 *local_5e50;
  TAttribute<float> *local_5e48;
  TAttribute<float> *local_5e40;
  FSlotArguments *local_5e38;
  FArguments *local_5e30;
  FArguments *local_5e28;
  TAttribute<FText> *local_5e20;
  TAttribute<FText> *local_5e18;
  FArguments *local_5e10;
  FArguments *local_5e08;
  FSlotArguments *local_5e00;
  FSlotArguments *local_5df8;
  FArguments *local_5df0;
  FArguments *local_5de8;
  FSlotArguments *local_5de0;
  SVerticalBox *local_5dd8;
  TAttribute<FMargin> *local_5dd0;
  TAttribute<FMargin> *local_5dc8;
  longlong *local_5dc0;
  FArguments *local_5db8;
  undefined1 *local_5db0;
  TAttribute<float> *local_5da8;
  TAttribute<float> *local_5da0;
  FSlotArguments *local_5d98;
  TAttribute<FText> *local_5d90;
  TAttribute<FText> *local_5d88;
  FArguments *local_5d80;
  undefined1 *local_5d78;
  TAttribute<ETextJustify::Type> *local_5d70;
  FArguments *local_5d68;
  TAttribute<FText> *local_5d60;
  TAttribute<FText> *local_5d58;
  FArguments *local_5d50;
  FArguments *local_5d48;
  FSlotArguments *local_5d40;
  FSlotArguments *local_5d38;
  FArguments *local_5d30;
  undefined1 *local_5d28;
  TAttribute<float> *local_5d20;
  TAttribute<float> *local_5d18;
  FSlotArguments *local_5d10;
  FArguments *local_5d08;
  FArguments *local_5d00;
  TAttribute<FText> *local_5cf8;
  TAttribute<FText> *local_5cf0;
  FArguments *local_5ce8;
  FArguments *local_5ce0;
  FSlotArguments *local_5cd8;
  FSlotArguments *local_5cd0;
  FArguments *local_5cc8;
  FArguments *local_5cc0;
  FSlotArguments *local_5cb8;
  SVerticalBox *local_5cb0;
  TAttribute<FMargin> *local_5ca8;
  TAttribute<FMargin> *local_5ca0;
  longlong *local_5c98;
  FArguments *local_5c90;
  undefined1 *local_5c88;
  TAttribute<float> *local_5c80;
  TAttribute<float> *local_5c78;
  FSlotArguments *local_5c70;
  TAttribute<FText> *local_5c68;
  TAttribute<FText> *local_5c60;
  FArguments *local_5c58;
  undefined1 *local_5c50;
  TAttribute<ETextJustify::Type> *local_5c48;
  FArguments *local_5c40;
  TAttribute<FText> *local_5c38;
  TAttribute<FText> *local_5c30;
  FArguments *local_5c28;
  FArguments *local_5c20;
  FSlotArguments *local_5c18;
  FSlotArguments *local_5c10;
  FArguments *local_5c08;
  undefined1 *local_5c00;
  TAttribute<float> *local_5bf8;
  TAttribute<float> *local_5bf0;
  FSlotArguments *local_5be8;
  FArguments *local_5be0;
  TAttribute<TOptional<int>_> *local_5bd8;
  TAttribute<TOptional<int>_> *local_5bd0;
  FArguments *local_5bc8;
  FArguments *local_5bc0;
  TAttribute<TOptional<int>_> *local_5bb8;
  TAttribute<TOptional<int>_> *local_5bb0;
  FArguments *local_5ba8;
  FArguments *local_5ba0;
  TAttribute<int> *local_5b98;
  TAttribute<int> *local_5b90;
  FArguments *local_5b88;
  FArguments *local_5b80;
  FArguments *local_5b78;
  TAttribute<TOptional<int>_> *local_5b70;
  TAttribute<TOptional<int>_> *local_5b68;
  FArguments *local_5b60;
  FText *local_5b58;
  FText *local_5b50;
  FArguments *local_5b48;
  FArguments *local_5b40;
  FArguments *local_5b38;
  TAttribute<FText> *local_5b30;
  TAttribute<FText> *local_5b28;
  FArguments *local_5b20;
  undefined1 *local_5b18;
  TAttribute<ETextJustify::Type> *local_5b10;
  FArguments *local_5b08;
  FArguments *local_5b00;
  FSlotArguments *local_5af8;
  FSlotArguments *local_5af0;
  FArguments *local_5ae8;
  FArguments *local_5ae0;
  FSlotArguments *local_5ad8;
  SVerticalBox *local_5ad0;
  TAttribute<FMargin> *local_5ac8;
  TAttribute<FMargin> *local_5ac0;
  longlong *local_5ab8;
  FArguments *local_5ab0;
  undefined1 *local_5aa8;
  TAttribute<float> *local_5aa0;
  TAttribute<float> *local_5a98;
  FSlotArguments *local_5a90;
  TAttribute<FText> *local_5a88;
  TAttribute<FText> *local_5a80;
  FArguments *local_5a78;
  undefined1 *local_5a70;
  TAttribute<ETextJustify::Type> *local_5a68;
  FArguments *local_5a60;
  TAttribute<FText> *local_5a58;
  TAttribute<FText> *local_5a50;
  FArguments *local_5a48;
  FArguments *local_5a40;
  FSlotArguments *local_5a38;
  FSlotArguments *local_5a30;
  FArguments *local_5a28;
  undefined1 *local_5a20;
  TAttribute<float> *local_5a18;
  TAttribute<float> *local_5a10;
  FSlotArguments *local_5a08;
  FArguments *local_5a00;
  FArguments *local_59f8;
  TAttribute<FText> *local_59f0;
  TAttribute<FText> *local_59e8;
  FArguments *local_59e0;
  FArguments *local_59d8;
  FSlotArguments *local_59d0;
  FSlotArguments *local_59c8;
  FArguments *local_59c0;
  FArguments *local_59b8;
  FSlotArguments *local_59b0;
  TSharedPtr<SVerticalBox,1> *local_59a8;
  FText local_59a0;
  FText local_5990;
  FText local_5980;
  FText local_5970;
  FText local_5960;
  TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> local_5950;
  TSharedPtr<SDrawPrimitiveDebugger,1> local_5940;
  code *local_5930;
  undefined4 local_5928;
  code *local_5920;
  undefined4 local_5918;
  TSharedRef<SWidget,1> local_5910;
  TSharedRef<SWidget,1> local_5900;
  TSharedRef<SWidget,1> local_58f0;
  code *local_58e0;
  undefined4 local_58d8;
  code *local_58d0;
  undefined4 local_58c8;
  code *local_58c0;
  undefined4 local_58b8;
  TSharedRef<SWidget,1> local_58b0;
  TSharedRef<SWidget,1> local_58a0;
  TSharedRef<SWidget,1> local_5890;
  code *local_5880;
  undefined4 local_5878;
  code *local_5870;
  undefined4 local_5868;
  code *local_5860;
  undefined4 local_5858;
  TSharedRef<SWidget,1> local_5850;
  TSharedRef<SWidget,1> local_5840;
  TSharedRef<SWidget,1> local_5830;
  code *local_5820;
  undefined4 local_5818;
  code *local_5810;
  undefined4 local_5808;
  code *local_5800;
  undefined4 local_57f8;
  code *local_57f0;
  undefined4 local_57e8;
  code *local_57e0;
  undefined4 local_57d8;
  code *local_57d0;
  undefined4 local_57c8;
  TSharedRef<SWidget,1> local_57c0;
  TSharedRef<SWidget,1> local_57b0;
  TSharedRef<SWidget,1> local_57a0;
  code *local_5790;
  undefined4 local_5788;
  code *local_5780;
  undefined4 local_5778;
  code *local_5770;
  undefined4 local_5768;
  TSharedRef<SWidget,1> local_5760;
  TSharedRef<SWidget,1> local_5750;
  TSharedRef<SWidget,1> local_5740;
  TSharedRef<SVerticalBox,1> local_5730;
  undefined1 local_5720 [24];
  pmf_04c88d14 local_5708;
  undefined1 local_56f8 [16];
  pmf_ce3dd58c local_56e8;
  TSharedRef<SHorizontalBox,1> local_56d8;
  TSharedRef<SCheckBox,1> local_56c8;
  TSharedRef<STextBlock,1> local_56b8;
  FText local_56a8;
  undefined1 local_5698 [16];
  pmf_b3a9d206 local_5688;
  undefined1 local_5678 [16];
  pmf_04c88d14 local_5668;
  undefined1 local_5658 [16];
  pmf_ce3dd58c local_5648;
  TSharedRef<SHorizontalBox,1> local_5638;
  TSharedRef<SCheckBox,1> local_5628;
  TSharedRef<STextBlock,1> local_5618;
  FText local_5608;
  undefined1 local_55f8 [16];
  pmf_b3a9d206 local_55e8;
  undefined1 local_55d8 [16];
  pmf_04c88d14 local_55c8;
  undefined1 local_55b8 [16];
  pmf_ce3dd58c local_55a8;
  TSharedRef<SHorizontalBox,1> local_5598;
  TSharedRef<SCheckBox,1> local_5588;
  TSharedRef<STextBlock,1> local_5578;
  FText local_5568;
  undefined1 local_5558 [16];
  pmf_b3a9d206 local_5548;
  undefined1 local_5538 [16];
  pmf_213a92dc local_5528;
  undefined1 local_5518 [16];
  pmf_213a92dc local_5508;
  undefined1 local_54f8 [16];
  pmf_213a92dc local_54e8;
  undefined1 local_54d8 [16];
  pmf_6ca5fcb7 local_54c8;
  undefined1 local_54b8 [16];
  pmf_d4321e53 local_54a8;
  TSharedRef<SHorizontalBox,1> local_5498;
  TSharedRef<SNumericEntryBox<int>,1> local_5488;
  TSharedRef<STextBlock,1> local_5478;
  FText local_5468;
  undefined1 local_5458 [16];
  pmf_b3a9d206 local_5448;
  undefined1 local_5438 [16];
  pmf_04c88d14 local_5428;
  undefined1 local_5418 [16];
  pmf_ce3dd58c local_5408;
  TSharedRef<SHorizontalBox,1> local_53f8;
  TSharedRef<SCheckBox,1> local_53e8;
  TSharedRef<STextBlock,1> local_53d8;
  FText local_53c8;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_53b8;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_53a0;
  TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs> local_5388;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_5370;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_5358;
  TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs> local_5340;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_5328;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_5310;
  TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs> local_52f8;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_52e0;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_52c8;
  TSlateDecl<SNumericEntryBox<int>,RequiredArgs::T0RequiredArgs> local_52b0;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_5298;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_5280;
  TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs> local_5268;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_5250;
  FText local_5238;
  TAttribute<float> local_5228;
  undefined1 local_5208 [32];
  TAttribute<float> local_51e8;
  TAttribute<float> local_51c8;
  undefined1 local_51a8 [32];
  TAttribute<float> local_5188;
  TAttribute<float> local_5168;
  undefined1 local_5148 [32];
  TAttribute<float> local_5128;
  TAttribute<float> local_5108;
  undefined1 local_50e8 [32];
  TAttribute<float> local_50c8;
  TAttribute<int> local_50a8;
  undefined1 local_5088 [32];
  TAttribute<float> local_5068;
  undefined1 local_5048 [32];
  TAttribute<float> local_5028;
  TAttribute<TOptional<int>_> local_5008;
  TAttribute<TOptional<int>_> local_4fe0;
  TAttribute<TOptional<int>_> local_4fb8;
  TAttribute<FMargin> local_4f90;
  TAttribute<FText> local_4f60;
  TAttribute<FText> local_4f30;
  TAttribute<FText> local_4f00;
  TAttribute<FMargin> local_4ed0;
  TAttribute<FText> local_4ea0;
  TAttribute<FText> local_4e70;
  TAttribute<FText> local_4e40;
  TAttribute<FMargin> local_4e10;
  TAttribute<FText> local_4de0;
  TAttribute<FText> local_4db0;
  TAttribute<FText> local_4d80;
  TAttribute<FMargin> local_4d50;
  TAttribute<FText> local_4d20;
  TAttribute<FText> local_4cf0;
  TAttribute<FText> local_4cc0;
  TAttribute<FMargin> local_4c90;
  TAttribute<FText> local_4c60;
  TAttribute<FText> local_4c30;
  TAttribute<FText> local_4c00;
  FSlotArguments local_4bd0;
  FSlotArguments local_4ae8;
  FSlotArguments local_4a00;
  FSlotArguments local_4918;
  FSlotArguments local_4830;
  FSlotArguments local_4748;
  FSlotArguments local_4660;
  FSlotArguments local_4578;
  FSlotArguments local_4490;
  FSlotArguments local_43a8;
  FScopedWidgetSlotArguments<SVerticalBox::FSlot> local_42c0;
  FScopedWidgetSlotArguments<SVerticalBox::FSlot> local_41c0;
  FScopedWidgetSlotArguments<SVerticalBox::FSlot> local_40c0;
  FScopedWidgetSlotArguments<SVerticalBox::FSlot> local_3fc0;
  FScopedWidgetSlotArguments<SVerticalBox::FSlot> local_3ec0;
  FArguments local_3dc0;
  FArguments local_3bb8;
  FArguments local_39b0;
  FArguments local_37a8;
  FArguments local_35a0;
  FArguments local_3398;
  FArguments local_3190;
  FArguments local_2db0;
  FArguments local_29d0;
  FArguments local_25f0;
  FArguments local_2210;
  FArguments local_1cb8;
  FArguments local_1760;
  FArguments local_1208;
  FArguments local_cb0;
  FArguments local_758;
  undefined8 uStack_18;
  
  uStack_18 = 0x146d1b016;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    FMargin::FMargin(&Margin,__real_4014000000000000,__real_4000000000000000,__real_4014000000000000
                     ,__real_4000000000000000);
    _Init_thread_footer(&::_TSS0);
  }
  if ((this->AdvancedOptionsWidget).Object == (SVerticalBox *)0x0) {
    local_6040 = SVerticalBox::FArguments::FArguments(&local_3dc0);
    RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_60a4);
    local_6048 = MakeTDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
                           (&local_53b8,"SVerticalBox",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\DrawPrimitiveDebugger\\Private\\SDrawPrimitiveDebugger.cpp"
                            ,0x282,&local_60a4);
    this_00 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::Expose<SVerticalBox>
                        (local_6048,&this->AdvancedOptionsWidget);
    TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
              (this_00,&local_5730,local_6040);
    SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
              (&local_5730.SharedReferenceCount);
    SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
              (&local_53b8._Widget.SharedReferenceCount);
    TArray<SVerticalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>::
    ~TArray<SVerticalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>(&local_3dc0._Slots);
    TSlateBaseNamedArgs<SVerticalBox>::~TSlateBaseNamedArgs<SVerticalBox>
              ((TSlateBaseNamedArgs<SVerticalBox> *)&local_3dc0);
  }
  else {
    this_01 = (SBoxPanel *)TSharedPtr<SVerticalBox,1>::operator->(&this->AdvancedOptionsWidget);
    SBoxPanel::ClearChildren(this_01);
  }
  local_6058 = &this->PrimitiveDebugger;
  if (local_6058->Object != (SDrawPrimitiveDebugger *)0x0) {
    local_6050 = &(this->PrimitiveDebugger).WeakReferenceCount;
    if ((local_6050->ReferenceController == (TReferenceControllerBase<1> *)0x0) ||
       (iVar2 = SharedPointerInternals::TReferenceControllerBase<1>::GetSharedReferenceCount
                          (local_6050->ReferenceController), iVar2 < 1)) {
      local_60a7 = '\0';
    }
    else {
      local_60a7 = '\x01';
    }
    local_60a3 = local_60a7;
    if (local_60a7 != '\0') {
      local_6090 = 1;
      goto LAB_146d1b241;
    }
  }
  local_6090 = 0;
LAB_146d1b241:
  local_60a2 = (char)local_6090;
  if ((char)local_6090 == '\0') {
    local_6038 = &this->AdvancedOptionsWidget;
    TSharedPtr<SVerticalBox,1>::ToSharedRef(local_6038,__return_storage_ptr__);
  }
  else {
    local_6030 = &this->PrimitiveDebugger;
    TSharedPtr<SDrawPrimitiveDebugger,1>::
    TSharedPtr<SDrawPrimitiveDebugger,1><SDrawPrimitiveDebugger>(&local_5940,local_6030);
    local_6028 = TSharedPtr<SDrawPrimitiveDebugger,1>::operator->(&local_5940);
    SDrawPrimitiveDebugger::GetCurrentSelection(local_6028,&local_5950);
    TSharedPtr<SDrawPrimitiveDebugger,1>::~TSharedPtr<SDrawPrimitiveDebugger,1>(&local_5940);
    local_60a1 = local_5950.Object != (FPrimitiveInfo *)0x0;
    if ((bool)local_60a1) {
      this_02 = TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::operator->(&local_5950);
      bVar1 = FViewDebugInfo::FPrimitiveInfo::IsPrimitiveValid(this_02);
      if (bVar1) {
        FText::AsLocalizable_Advanced_LocText
                  (&local_5960,L"PRIMITIVE_DEBUGGER",L"DetailPanel_ShowBoundsTooltip",
                   L"Should a debug box of this mesh\'s bounds be displayed? DEVELOPMENT BUILDS ONLY"
                  );
        FText::AsLocalizable_Advanced_LocText
                  (&local_5970,L"PRIMITIVE_DEBUGGER",L"DetailPanel_ShowBonesTooltip",
                   L"Should a debug display of this mesh\'s skeleton be displayed? DEVELOPMENT BUILDS ONLY"
                  );
        FText::AsLocalizable_Advanced_LocText
                  (&local_5980,L"PRIMITIVE_DEBUGGER",L"DetailPanel_ForcedLODTooltip",
                   L"Should a specific LOD level be forced on this primitive?.");
        FText::AsLocalizable_Advanced_LocText
                  (&local_5990,L"PRIMITIVE_DEBUGGER",L"DetailPanel_ForcedLODIndexTooltip",
                   L"Controls the forced LOD level of this primitive.");
        FText::AsLocalizable_Advanced_LocText
                  (&local_59a0,L"PRIMITIVE_DEBUGGER",L"DetailPanel_ForcedDisableNaniteTooltip",
                   L"Should nanite be force disabled on this component?");
        local_6020 = TSharedPtr<SVerticalBox,1>::operator->(&this->AdvancedOptionsWidget);
        pFVar3 = SVerticalBox::AddSlot(local_6020,&local_42c0);
        local_6008 = &pFVar3->_padding_;
        local_6018 = &local_4f90;
        local_6010 = TAttribute<FMargin>::TAttribute<FMargin><FMargin>(local_6018,&Margin);
        pFVar4 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                           ((FSlotArgumentsMixin *)local_6008,local_6010);
        local_5f08 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar4);
        local_5f80 = SHorizontalBox::FArguments::FArguments(&local_3bb8);
        pFVar5 = SHorizontalBox::Slot(&local_4ae8);
        local_6000 = &pFVar5->field_0x48;
        local_5fe8 = TAlignmentWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::HAlign
                               ((FSlotArgumentsMixin *)local_6000,HAlign_Left);
        local_5ff8 = &local_5228;
        local_5ff0 = TAttribute<float>::TAttribute<float><int>(local_5ff8,&LabelColumnWidth);
        local_5f90 = SHorizontalBox::FSlot::FSlotArguments::FillWidth(local_5fe8,local_5ff0);
        local_5fd0 = STextBlock::FArguments::FArguments(&local_2210);
        local_5fe0 = &local_4f60;
        pFVar6 = FText::AsLocalizable_Advanced_LocText
                           (&local_56a8,L"PRIMITIVE_DEBUGGER",L"DetailPanel_ShowBoundsLabel",
                            L"Show Bounds");
        local_5fd8 = TAttribute<FText>::TAttribute<FText>(local_5fe0,pFVar6);
        local_5fb8 = STextBlock::FArguments::Text(local_5fd0,local_5fd8);
        local_5fc8 = local_5208;
        local_608c[0] = Left;
        local_5fc0 = TAttribute<enum_ETextJustify::Type>::TAttribute<enum_ETextJustify::Type>
                               (local_5fc8,local_608c);
        local_5fa0 = STextBlock::FArguments::Justification(local_5fb8,local_5fc0);
        local_5fb0 = &local_4f30;
        local_5fa8 = TAttribute<FText>::TAttribute<FText><FText>(local_5fb0,&local_5960);
        local_5f98 = TSlateBaseNamedArgs<STextBlock>::ToolTipText
                               ((TSlateBaseNamedArgs<STextBlock> *)local_5fa0,local_5fa8);
        RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_60a0);
        pTVar7 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                           (&local_5370,"STextBlock",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\DrawPrimitiveDebugger\\Private\\SDrawPrimitiveDebugger.cpp"
                            ,0x2a2,&local_60a0);
        pTVar8 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                           (pTVar7,&local_56b8,local_5f98);
        TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_58f0,pTVar8);
        local_5f88 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                               ((FSlotArguments *)local_5f90,&local_58f0);
        local_5f18 = SHorizontalBox::FArguments::operator+(local_5f80,local_5f88);
        pFVar5 = SHorizontalBox::Slot(&local_4bd0);
        local_5f78 = &pFVar5->field_0x48;
        local_5f60 = TAlignmentWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::HAlign
                               ((FSlotArgumentsMixin *)local_5f78,HAlign_Right);
        local_5f70 = &local_51e8;
        local_5f68 = TAttribute<float>::TAttribute<float><int>(local_5f70,&ValueColumnWidth);
        local_5f28 = SHorizontalBox::FSlot::FSlotArguments::FillWidth(local_5f60,local_5f68);
        local_5f58 = SCheckBox::FArguments::FArguments(&local_3190);
        local_5930 = ShowDebugBoundsState;
        local_5928 = 0;
        ppcVar15 = &local_5930;
        puVar16 = local_5720;
        for (lVar14 = 0x10; lVar14 != 0; lVar14 = lVar14 + -1) {
          *puVar16 = *(undefined1 *)ppcVar15;
          ppcVar15 = (code **)((longlong)ppcVar15 + 1);
          puVar16 = puVar16 + 1;
        }
        puVar16 = local_5720;
        ppVar21 = &local_5708;
        for (lVar14 = 0x10; lVar14 != 0; lVar14 = lVar14 + -1) {
          *(undefined1 *)ppVar21 = *puVar16;
          puVar16 = puVar16 + 1;
          ppVar21 = (pmf_04c88d14 *)&ppVar21->field_0x1;
        }
        local_5f50 = SCheckBox::FArguments::IsChecked<SPrimitiveDebuggerDetailView>
                               (local_5f58,this,&local_5708);
        local_5920 = OnToggleDebugBounds;
        local_5918 = 0;
        ppcVar15 = &local_5920;
        puVar16 = local_56f8;
        for (lVar14 = 0x10; lVar14 != 0; lVar14 = lVar14 + -1) {
          *puVar16 = *(undefined1 *)ppcVar15;
          ppcVar15 = (code **)((longlong)ppcVar15 + 1);
          puVar16 = puVar16 + 1;
        }
        puVar16 = local_56f8;
        ppVar22 = &local_56e8;
        for (lVar14 = 0x10; lVar14 != 0; lVar14 = lVar14 + -1) {
          *(undefined1 *)ppVar22 = *puVar16;
          puVar16 = puVar16 + 1;
          ppVar22 = (pmf_ce3dd58c *)&ppVar22->field_0x1;
        }
        local_5f38 = SCheckBox::FArguments::OnCheckStateChanged<SPrimitiveDebuggerDetailView>
                               (local_5f50,this,&local_56e8);
        local_5f48 = &local_4f00;
        local_5f40 = TAttribute<FText>::TAttribute<FText><FText>(local_5f48,&local_5960);
        local_5f30 = TSlateBaseNamedArgs<SCheckBox>::ToolTipText
                               ((TSlateBaseNamedArgs<SCheckBox> *)local_5f38,local_5f40);
        RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_609f);
        pTVar9 = MakeTDecl<SCheckBox,RequiredArgs::T0RequiredArgs>
                           (&local_5388,"SCheckBox",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\DrawPrimitiveDebugger\\Private\\SDrawPrimitiveDebugger.cpp"
                            ,0x2ab,&local_609f);
        pTVar10 = TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>::operator<<=
                            (pTVar9,&local_56c8,local_5f30);
        TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SCheckBox>(&local_5900,pTVar10);
        local_5f20 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                               ((FSlotArguments *)local_5f28,&local_5900);
        local_5f10 = SHorizontalBox::FArguments::operator+(local_5f18,local_5f20);
        RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_609e);
        pTVar11 = MakeTDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
                            (&local_53a0,"SHorizontalBox",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\DrawPrimitiveDebugger\\Private\\SDrawPrimitiveDebugger.cpp"
                             ,0x29a,&local_609e);
        pTVar12 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                            (pTVar11,&local_56d8,local_5f10);
        TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SHorizontalBox>(&local_5910,pTVar12);
        TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                  ((FSlotArguments *)local_5f08,&local_5910);
        TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_5910);
        SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
                  (&local_56d8.SharedReferenceCount);
        TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
        ~TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>(&local_53a0);
        TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_5900);
        SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
                  (&local_56c8.SharedReferenceCount);
        TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>::
        ~TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>(&local_5388);
        SCheckBox::FArguments::~FArguments(&local_3190);
        SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_4bd0);
        TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_58f0);
        TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_56b8);
        TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
        ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_5370);
        FText::~FText(&local_56a8);
        STextBlock::FArguments::~FArguments(&local_2210);
        SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_4ae8);
        TArray<SHorizontalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>::
        ~TArray<SHorizontalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>
                  (&local_3bb8._Slots);
        TSlateBaseNamedArgs<SHorizontalBox>::~TSlateBaseNamedArgs<SHorizontalBox>
                  ((TSlateBaseNamedArgs<SHorizontalBox> *)&local_3bb8);
        SBoxPanel::FScopedWidgetSlotArguments<SVerticalBox::FSlot>::
        ~FScopedWidgetSlotArguments<SVerticalBox::FSlot>(&local_42c0);
        local_5f00 = TSharedPtr<SVerticalBox,1>::operator->(&this->AdvancedOptionsWidget);
        pFVar3 = SVerticalBox::AddSlot(local_5f00,&local_41c0);
        local_5ee8 = &pFVar3->_padding_;
        local_5ef8 = &local_4ed0;
        local_5ef0 = TAttribute<FMargin>::TAttribute<FMargin><FMargin>(local_5ef8,&Margin);
        pFVar4 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                           ((FSlotArgumentsMixin *)local_5ee8,local_5ef0);
        local_5de0 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar4);
        local_5ee0 = SHorizontalBox::FArguments::FArguments(&local_39b0);
        local_58e0 = SkeletalMeshDataVisibility;
        local_58d8 = 0;
        ppcVar15 = &local_58e0;
        puVar16 = local_5698;
        for (lVar14 = 0x10; lVar14 != 0; lVar14 = lVar14 + -1) {
          *puVar16 = *(undefined1 *)ppcVar15;
          ppcVar15 = (code **)((longlong)ppcVar15 + 1);
          puVar16 = puVar16 + 1;
        }
        puVar16 = local_5698;
        ppVar20 = &local_5688;
        for (lVar14 = 0x10; lVar14 != 0; lVar14 = lVar14 + -1) {
          *(undefined1 *)ppVar20 = *puVar16;
          puVar16 = puVar16 + 1;
          ppVar20 = (pmf_b3a9d206 *)&ppVar20->field_0x1;
        }
        local_5e58 = TSlateBaseNamedArgs<SHorizontalBox>::Visibility<SPrimitiveDebuggerDetailView>
                               ((TSlateBaseNamedArgs<SHorizontalBox> *)local_5ee0,this,&local_5688);
        pFVar5 = SHorizontalBox::Slot(&local_4918);
        local_5ed8 = &pFVar5->field_0x48;
        local_5ec0 = TAlignmentWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::HAlign
                               ((FSlotArgumentsMixin *)local_5ed8,HAlign_Left);
        local_5ed0 = &local_51c8;
        local_5ec8 = TAttribute<float>::TAttribute<float><int>(local_5ed0,&LabelColumnWidth);
        local_5e68 = SHorizontalBox::FSlot::FSlotArguments::FillWidth(local_5ec0,local_5ec8);
        local_5ea8 = STextBlock::FArguments::FArguments(&local_1cb8);
        local_5eb8 = &local_4ea0;
        pFVar6 = FText::AsLocalizable_Advanced_LocText
                           (&local_5608,L"PRIMITIVE_DEBUGGER",L"DetailPanel_ShowBonesLabel",
                            L"Show Bones");
        local_5eb0 = TAttribute<FText>::TAttribute<FText>(local_5eb8,pFVar6);
        local_5e90 = STextBlock::FArguments::Text(local_5ea8,local_5eb0);
        local_5ea0 = local_51a8;
        local_608c[1] = 0;
        local_5e98 = TAttribute<enum_ETextJustify::Type>::TAttribute<enum_ETextJustify::Type>
                               (local_5ea0,local_608c + 1);
        local_5e78 = STextBlock::FArguments::Justification(local_5e90,local_5e98);
        local_5e88 = &local_4e70;
        local_5e80 = TAttribute<FText>::TAttribute<FText><FText>(local_5e88,&local_5970);
        local_5e70 = TSlateBaseNamedArgs<STextBlock>::ToolTipText
                               ((TSlateBaseNamedArgs<STextBlock> *)local_5e78,local_5e80);
        RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_609d);
        pTVar7 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                           (&local_5328,"STextBlock",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\DrawPrimitiveDebugger\\Private\\SDrawPrimitiveDebugger.cpp"
                            ,0x2be,&local_609d);
        pTVar8 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                           (pTVar7,&local_5618,local_5e70);
        TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_5890,pTVar8);
        local_5e60 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                               ((FSlotArguments *)local_5e68,&local_5890);
        local_5df0 = SHorizontalBox::FArguments::operator+(local_5e58,local_5e60);
        pFVar5 = SHorizontalBox::Slot(&local_4a00);
        local_5e50 = &pFVar5->field_0x48;
        local_5e38 = TAlignmentWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::HAlign
                               ((FSlotArgumentsMixin *)local_5e50,HAlign_Right);
        local_5e48 = &local_5188;
        local_5e40 = TAttribute<float>::TAttribute<float><int>(local_5e48,&ValueColumnWidth);
        local_5e00 = SHorizontalBox::FSlot::FSlotArguments::FillWidth(local_5e38,local_5e40);
        local_5e30 = SCheckBox::FArguments::FArguments(&local_2db0);
        local_58d0 = ShowDebugBonesState;
        local_58c8 = 0;
        ppcVar15 = &local_58d0;
        puVar16 = local_5678;
        for (lVar14 = 0x10; lVar14 != 0; lVar14 = lVar14 + -1) {
          *puVar16 = *(undefined1 *)ppcVar15;
          ppcVar15 = (code **)((longlong)ppcVar15 + 1);
          puVar16 = puVar16 + 1;
        }
        puVar16 = local_5678;
        ppVar21 = &local_5668;
        for (lVar14 = 0x10; lVar14 != 0; lVar14 = lVar14 + -1) {
          *(undefined1 *)ppVar21 = *puVar16;
          puVar16 = puVar16 + 1;
          ppVar21 = (pmf_04c88d14 *)&ppVar21->field_0x1;
        }
        local_5e28 = SCheckBox::FArguments::IsChecked<SPrimitiveDebuggerDetailView>
                               (local_5e30,this,&local_5668);
        local_58c0 = OnToggleDebugBones;
        local_58b8 = 0;
        ppcVar15 = &local_58c0;
        puVar16 = local_5658;
        for (lVar14 = 0x10; lVar14 != 0; lVar14 = lVar14 + -1) {
          *puVar16 = *(undefined1 *)ppcVar15;
          ppcVar15 = (code **)((longlong)ppcVar15 + 1);
          puVar16 = puVar16 + 1;
        }
        puVar16 = local_5658;
        ppVar22 = &local_5648;
        for (lVar14 = 0x10; lVar14 != 0; lVar14 = lVar14 + -1) {
          *(undefined1 *)ppVar22 = *puVar16;
          puVar16 = puVar16 + 1;
          ppVar22 = (pmf_ce3dd58c *)&ppVar22->field_0x1;
        }
        local_5e10 = SCheckBox::FArguments::OnCheckStateChanged<SPrimitiveDebuggerDetailView>
                               (local_5e28,this,&local_5648);
        local_5e20 = &local_4e40;
        local_5e18 = TAttribute<FText>::TAttribute<FText><FText>(local_5e20,&local_5970);
        local_5e08 = TSlateBaseNamedArgs<SCheckBox>::ToolTipText
                               ((TSlateBaseNamedArgs<SCheckBox> *)local_5e10,local_5e18);
        RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_609c);
        pTVar9 = MakeTDecl<SCheckBox,RequiredArgs::T0RequiredArgs>
                           (&local_5340,"SCheckBox",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\DrawPrimitiveDebugger\\Private\\SDrawPrimitiveDebugger.cpp"
                            ,0x2c7,&local_609c);
        pTVar10 = TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>::operator<<=
                            (pTVar9,&local_5628,local_5e08);
        TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SCheckBox>(&local_58a0,pTVar10);
        local_5df8 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                               ((FSlotArguments *)local_5e00,&local_58a0);
        local_5de8 = SHorizontalBox::FArguments::operator+(local_5df0,local_5df8);
        RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_609b);
        pTVar11 = MakeTDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
                            (&local_5358,"SHorizontalBox",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\DrawPrimitiveDebugger\\Private\\SDrawPrimitiveDebugger.cpp"
                             ,0x2b5,&local_609b);
        pTVar12 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                            (pTVar11,&local_5638,local_5de8);
        TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SHorizontalBox>(&local_58b0,pTVar12);
        TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                  ((FSlotArguments *)local_5de0,&local_58b0);
        TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_58b0);
        SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
                  (&local_5638.SharedReferenceCount);
        TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
        ~TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>(&local_5358);
        TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_58a0);
        SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
                  (&local_5628.SharedReferenceCount);
        TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>::
        ~TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>(&local_5340);
        SCheckBox::FArguments::~FArguments(&local_2db0);
        SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_4a00);
        TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_5890);
        TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_5618);
        TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
        ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_5328);
        FText::~FText(&local_5608);
        STextBlock::FArguments::~FArguments(&local_1cb8);
        SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_4918);
        TArray<SHorizontalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>::
        ~TArray<SHorizontalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>
                  (&local_39b0._Slots);
        TSlateBaseNamedArgs<SHorizontalBox>::~TSlateBaseNamedArgs<SHorizontalBox>
                  ((TSlateBaseNamedArgs<SHorizontalBox> *)&local_39b0);
        SBoxPanel::FScopedWidgetSlotArguments<SVerticalBox::FSlot>::
        ~FScopedWidgetSlotArguments<SVerticalBox::FSlot>(&local_41c0);
        local_5dd8 = TSharedPtr<SVerticalBox,1>::operator->(&this->AdvancedOptionsWidget);
        pFVar3 = SVerticalBox::AddSlot(local_5dd8,&local_40c0);
        local_5dc0 = &pFVar3->_padding_;
        local_5dd0 = &local_4e10;
        local_5dc8 = TAttribute<FMargin>::TAttribute<FMargin><FMargin>(local_5dd0,&Margin);
        pFVar4 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                           ((FSlotArgumentsMixin *)local_5dc0,local_5dc8);
        local_5cb8 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar4);
        local_5db8 = SHorizontalBox::FArguments::FArguments(&local_37a8);
        local_5880 = OptionVisibilityForceLOD;
        local_5878 = 0;
        ppcVar15 = &local_5880;
        puVar16 = local_55f8;
        for (lVar14 = 0x10; lVar14 != 0; lVar14 = lVar14 + -1) {
          *puVar16 = *(undefined1 *)ppcVar15;
          ppcVar15 = (code **)((longlong)ppcVar15 + 1);
          puVar16 = puVar16 + 1;
        }
        puVar16 = local_55f8;
        ppVar20 = &local_55e8;
        for (lVar14 = 0x10; lVar14 != 0; lVar14 = lVar14 + -1) {
          *(undefined1 *)ppVar20 = *puVar16;
          puVar16 = puVar16 + 1;
          ppVar20 = (pmf_b3a9d206 *)&ppVar20->field_0x1;
        }
        local_5d30 = TSlateBaseNamedArgs<SHorizontalBox>::Visibility<SPrimitiveDebuggerDetailView>
                               ((TSlateBaseNamedArgs<SHorizontalBox> *)local_5db8,this,&local_55e8);
        pFVar5 = SHorizontalBox::Slot(&local_4748);
        local_5db0 = &pFVar5->field_0x48;
        local_5d98 = TAlignmentWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::HAlign
                               ((FSlotArgumentsMixin *)local_5db0,HAlign_Left);
        local_5da8 = &local_5168;
        local_5da0 = TAttribute<float>::TAttribute<float><int>(local_5da8,&LabelColumnWidth);
        local_5d40 = SHorizontalBox::FSlot::FSlotArguments::FillWidth(local_5d98,local_5da0);
        local_5d80 = STextBlock::FArguments::FArguments(&local_1760);
        local_5d90 = &local_4de0;
        pFVar6 = FText::AsLocalizable_Advanced_LocText
                           (&local_5568,L"PRIMITIVE_DEBUGGER",L"DetailPanel_ForceLODLabel",
                            L"Force LOD");
        local_5d88 = TAttribute<FText>::TAttribute<FText>(local_5d90,pFVar6);
        local_5d68 = STextBlock::FArguments::Text(local_5d80,local_5d88);
        local_5d78 = local_5148;
        local_608c[2] = 0;
        local_5d70 = TAttribute<enum_ETextJustify::Type>::TAttribute<enum_ETextJustify::Type>
                               (local_5d78,local_608c + 2);
        local_5d50 = STextBlock::FArguments::Justification(local_5d68,local_5d70);
        local_5d60 = &local_4db0;
        local_5d58 = TAttribute<FText>::TAttribute<FText><FText>(local_5d60,&local_5980);
        local_5d48 = TSlateBaseNamedArgs<STextBlock>::ToolTipText
                               ((TSlateBaseNamedArgs<STextBlock> *)local_5d50,local_5d58);
        RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_609a);
        pTVar7 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                           (&local_52e0,"STextBlock",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\DrawPrimitiveDebugger\\Private\\SDrawPrimitiveDebugger.cpp"
                            ,0x2d7,&local_609a);
        pTVar8 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                           (pTVar7,&local_5578,local_5d48);
        TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_5830,pTVar8);
        local_5d38 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                               ((FSlotArguments *)local_5d40,&local_5830);
        local_5cc8 = SHorizontalBox::FArguments::operator+(local_5d30,local_5d38);
        pFVar5 = SHorizontalBox::Slot(&local_4830);
        local_5d28 = &pFVar5->field_0x48;
        local_5d10 = TAlignmentWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::HAlign
                               ((FSlotArgumentsMixin *)local_5d28,HAlign_Right);
        local_5d20 = &local_5128;
        local_5d18 = TAttribute<float>::TAttribute<float><int>(local_5d20,&ValueColumnWidth);
        local_5cd8 = SHorizontalBox::FSlot::FSlotArguments::FillWidth(local_5d10,local_5d18);
        local_5d08 = SCheckBox::FArguments::FArguments(&local_29d0);
        local_5870 = ForceLODState;
        local_5868 = 0;
        ppcVar15 = &local_5870;
        puVar16 = local_55d8;
        for (lVar14 = 0x10; lVar14 != 0; lVar14 = lVar14 + -1) {
          *puVar16 = *(undefined1 *)ppcVar15;
          ppcVar15 = (code **)((longlong)ppcVar15 + 1);
          puVar16 = puVar16 + 1;
        }
        puVar16 = local_55d8;
        ppVar21 = &local_55c8;
        for (lVar14 = 0x10; lVar14 != 0; lVar14 = lVar14 + -1) {
          *(undefined1 *)ppVar21 = *puVar16;
          puVar16 = puVar16 + 1;
          ppVar21 = (pmf_04c88d14 *)&ppVar21->field_0x1;
        }
        local_5d00 = SCheckBox::FArguments::IsChecked<SPrimitiveDebuggerDetailView>
                               (local_5d08,this,&local_55c8);
        local_5860 = OnToggleForceLOD;
        local_5858 = 0;
        ppcVar15 = &local_5860;
        puVar16 = local_55b8;
        for (lVar14 = 0x10; lVar14 != 0; lVar14 = lVar14 + -1) {
          *puVar16 = *(undefined1 *)ppcVar15;
          ppcVar15 = (code **)((longlong)ppcVar15 + 1);
          puVar16 = puVar16 + 1;
        }
        puVar16 = local_55b8;
        ppVar22 = &local_55a8;
        for (lVar14 = 0x10; lVar14 != 0; lVar14 = lVar14 + -1) {
          *(undefined1 *)ppVar22 = *puVar16;
          puVar16 = puVar16 + 1;
          ppVar22 = (pmf_ce3dd58c *)&ppVar22->field_0x1;
        }
        local_5ce8 = SCheckBox::FArguments::OnCheckStateChanged<SPrimitiveDebuggerDetailView>
                               (local_5d00,this,&local_55a8);
        local_5cf8 = &local_4d80;
        local_5cf0 = TAttribute<FText>::TAttribute<FText><FText>(local_5cf8,&local_5980);
        local_5ce0 = TSlateBaseNamedArgs<SCheckBox>::ToolTipText
                               ((TSlateBaseNamedArgs<SCheckBox> *)local_5ce8,local_5cf0);
        RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_6099);
        pTVar9 = MakeTDecl<SCheckBox,RequiredArgs::T0RequiredArgs>
                           (&local_52f8,"SCheckBox",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\DrawPrimitiveDebugger\\Private\\SDrawPrimitiveDebugger.cpp"
                            ,0x2e0,&local_6099);
        pTVar10 = TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>::operator<<=
                            (pTVar9,&local_5588,local_5ce0);
        TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SCheckBox>(&local_5840,pTVar10);
        local_5cd0 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                               ((FSlotArguments *)local_5cd8,&local_5840);
        local_5cc0 = SHorizontalBox::FArguments::operator+(local_5cc8,local_5cd0);
        RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_6098);
        pTVar11 = MakeTDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
                            (&local_5310,"SHorizontalBox",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\DrawPrimitiveDebugger\\Private\\SDrawPrimitiveDebugger.cpp"
                             ,0x2d1,&local_6098);
        pTVar12 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                            (pTVar11,&local_5598,local_5cc0);
        TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SHorizontalBox>(&local_5850,pTVar12);
        TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                  ((FSlotArguments *)local_5cb8,&local_5850);
        TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_5850);
        SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
                  (&local_5598.SharedReferenceCount);
        TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
        ~TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>(&local_5310);
        TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_5840);
        SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
                  (&local_5588.SharedReferenceCount);
        TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>::
        ~TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>(&local_52f8);
        SCheckBox::FArguments::~FArguments(&local_29d0);
        SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_4830);
        TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_5830);
        TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_5578);
        TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
        ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_52e0);
        FText::~FText(&local_5568);
        STextBlock::FArguments::~FArguments(&local_1760);
        SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_4748);
        SHorizontalBox::FArguments::~FArguments(&local_37a8);
        SBoxPanel::FScopedWidgetSlotArguments<SVerticalBox::FSlot>::
        ~FScopedWidgetSlotArguments<SVerticalBox::FSlot>(&local_40c0);
        local_5cb0 = TSharedPtr<SVerticalBox,1>::operator->(&this->AdvancedOptionsWidget);
        pFVar3 = SVerticalBox::AddSlot(local_5cb0,&local_3fc0);
        local_5c98 = &pFVar3->_padding_;
        local_5ca8 = &local_4d50;
        local_5ca0 = TAttribute<FMargin>::TAttribute<FMargin><FMargin>(local_5ca8,&Margin);
        pFVar4 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                           ((FSlotArgumentsMixin *)local_5c98,local_5ca0);
        local_5ad8 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar4);
        local_5c90 = SHorizontalBox::FArguments::FArguments(&local_35a0);
        local_5820 = OptionVisibilityForceLOD;
        local_5818 = 0;
        ppcVar15 = &local_5820;
        puVar16 = local_5558;
        for (lVar14 = 0x10; lVar14 != 0; lVar14 = lVar14 + -1) {
          *puVar16 = *(undefined1 *)ppcVar15;
          ppcVar15 = (code **)((longlong)ppcVar15 + 1);
          puVar16 = puVar16 + 1;
        }
        puVar16 = local_5558;
        ppVar20 = &local_5548;
        for (lVar14 = 0x10; lVar14 != 0; lVar14 = lVar14 + -1) {
          *(undefined1 *)ppVar20 = *puVar16;
          puVar16 = puVar16 + 1;
          ppVar20 = (pmf_b3a9d206 *)&ppVar20->field_0x1;
        }
        local_5c08 = TSlateBaseNamedArgs<SHorizontalBox>::Visibility<SPrimitiveDebuggerDetailView>
                               ((TSlateBaseNamedArgs<SHorizontalBox> *)local_5c90,this,&local_5548);
        pFVar5 = SHorizontalBox::Slot(&local_4578);
        local_5c88 = &pFVar5->field_0x48;
        local_5c70 = TAlignmentWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::HAlign
                               ((FSlotArgumentsMixin *)local_5c88,HAlign_Left);
        local_5c80 = &local_5108;
        local_608c[3] = 2;
        local_5c78 = TAttribute<float>::TAttribute<float><int>(local_5c80,(int *)(local_608c + 3));
        local_5c18 = SHorizontalBox::FSlot::FSlotArguments::FillWidth(local_5c70,local_5c78);
        local_5c58 = STextBlock::FArguments::FArguments(&local_1208);
        local_5c68 = &local_4d20;
        pFVar6 = FText::AsLocalizable_Advanced_LocText
                           (&local_5468,L"PRIMITIVE_DEBUGGER",L"DetailPanel_ForcedLODIndexLabel",
                            L"Forced LOD Index");
        local_5c60 = TAttribute<FText>::TAttribute<FText>(local_5c68,pFVar6);
        local_5c40 = STextBlock::FArguments::Text(local_5c58,local_5c60);
        local_5c50 = local_50e8;
        local_608c[4] = 0;
        local_5c48 = TAttribute<enum_ETextJustify::Type>::TAttribute<enum_ETextJustify::Type>
                               (local_5c50,local_608c + 4);
        local_5c28 = STextBlock::FArguments::Justification(local_5c40,local_5c48);
        local_5c38 = &local_4cf0;
        local_5c30 = TAttribute<FText>::TAttribute<FText><FText>(local_5c38,&local_5990);
        local_5c20 = TSlateBaseNamedArgs<STextBlock>::ToolTipText
                               ((TSlateBaseNamedArgs<STextBlock> *)local_5c28,local_5c30);
        RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_6097);
        pTVar7 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                           (&local_5298,"STextBlock",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\DrawPrimitiveDebugger\\Private\\SDrawPrimitiveDebugger.cpp"
                            ,0x2f0,&local_6097);
        pTVar8 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                           (pTVar7,&local_5478,local_5c20);
        TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_57a0,pTVar8);
        local_5c10 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                               ((FSlotArguments *)local_5c18,&local_57a0);
        local_5ae8 = SHorizontalBox::FArguments::operator+(local_5c08,local_5c10);
        pFVar5 = SHorizontalBox::Slot(&local_4660);
        local_5c00 = &pFVar5->field_0x48;
        local_5be8 = TAlignmentWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::HAlign
                               ((FSlotArgumentsMixin *)local_5c00,HAlign_Fill);
        local_5bf8 = &local_50c8;
        local_608c[5] = 1;
        local_5bf0 = TAttribute<float>::TAttribute<float><int>(local_5bf8,(int *)(local_608c + 5));
        local_5af8 = SHorizontalBox::FSlot::FSlotArguments::FillWidth(local_5be8,local_5bf0);
        local_5be0 = SNumericEntryBox<int>::FArguments::FArguments(&local_758);
        local_5810 = GetSelectedForcedLODValue;
        local_5808 = 0;
        ppcVar15 = &local_5810;
        puVar16 = local_5538;
        for (lVar14 = 0x10; lVar14 != 0; lVar14 = lVar14 + -1) {
          *puVar16 = *(undefined1 *)ppcVar15;
          ppcVar15 = (code **)((longlong)ppcVar15 + 1);
          puVar16 = puVar16 + 1;
        }
        puVar16 = local_5538;
        ppVar17 = &local_5528;
        for (lVar14 = 0x10; lVar14 != 0; lVar14 = lVar14 + -1) {
          *(undefined1 *)ppVar17 = *puVar16;
          puVar16 = puVar16 + 1;
          ppVar17 = (pmf_213a92dc *)&ppVar17->field_0x1;
        }
        local_5bc8 = SNumericEntryBox<int>::FArguments::Value<SPrimitiveDebuggerDetailView>
                               (local_5be0,this,&local_5528);
        local_5bd8 = &local_5008;
        local_608c[6] = 0;
        local_5bd0 = TAttribute<TOptional<int>_>::TAttribute<TOptional<int>_><int>
                               (local_5bd8,(int *)(local_608c + 6));
        local_5bc0 = SNumericEntryBox<int>::FArguments::MinValue(local_5bc8,local_5bd0);
        local_5800 = GetSelectedForcedLODSliderMaxValue;
        local_57f8 = 0;
        ppcVar15 = &local_5800;
        puVar16 = local_5518;
        for (lVar14 = 0x10; lVar14 != 0; lVar14 = lVar14 + -1) {
          *puVar16 = *(undefined1 *)ppcVar15;
          ppcVar15 = (code **)((longlong)ppcVar15 + 1);
          puVar16 = puVar16 + 1;
        }
        puVar16 = local_5518;
        ppVar17 = &local_5508;
        for (lVar14 = 0x10; lVar14 != 0; lVar14 = lVar14 + -1) {
          *(undefined1 *)ppVar17 = *puVar16;
          puVar16 = puVar16 + 1;
          ppVar17 = (pmf_213a92dc *)&ppVar17->field_0x1;
        }
        local_5ba8 = SNumericEntryBox<int>::FArguments::MaxValue<SPrimitiveDebuggerDetailView>
                               (local_5bc0,this,&local_5508);
        local_5bb8 = &local_4fe0;
        local_608c[7] = 0;
        local_5bb0 = TAttribute<TOptional<int>_>::TAttribute<TOptional<int>_><int>
                               (local_5bb8,(int *)(local_608c + 7));
        local_5ba0 = SNumericEntryBox<int>::FArguments::MinSliderValue(local_5ba8,local_5bb0);
        local_57f0 = GetSelectedForcedLODSliderMaxValue;
        local_57e8 = 0;
        ppcVar15 = &local_57f0;
        puVar16 = local_54f8;
        for (lVar14 = 0x10; lVar14 != 0; lVar14 = lVar14 + -1) {
          *puVar16 = *(undefined1 *)ppcVar15;
          ppcVar15 = (code **)((longlong)ppcVar15 + 1);
          puVar16 = puVar16 + 1;
        }
        puVar16 = local_54f8;
        ppVar17 = &local_54e8;
        for (lVar14 = 0x10; lVar14 != 0; lVar14 = lVar14 + -1) {
          *(undefined1 *)ppVar17 = *puVar16;
          puVar16 = puVar16 + 1;
          ppVar17 = (pmf_213a92dc *)&ppVar17->field_0x1;
        }
        local_5b88 = SNumericEntryBox<int>::FArguments::MaxSliderValue<SPrimitiveDebuggerDetailView>
                               (local_5ba0,this,&local_54e8);
        local_5b98 = &local_50a8;
        local_608c[8] = 1;
        local_5b90 = TAttribute<int>::TAttribute<int>(local_5b98,(int *)(local_608c + 8));
        local_5b80 = SNumericEntryBox<int>::FArguments::Delta(local_5b88,local_5b90);
        local_5b78 = SNumericEntryBox<int>::FArguments::AllowSpin(local_5b80,true);
        local_5b60 = SNumericEntryBox<int>::FArguments::AllowWheel(local_5b78,true);
        local_5b70 = &local_4fb8;
        local_608c[9] = 1;
        local_5b68 = TAttribute<TOptional<int>_>::TAttribute<TOptional<int>_><int>
                               (local_5b70,(int *)(local_608c + 9));
        local_5b48 = SNumericEntryBox<int>::FArguments::WheelStep(local_5b60,local_5b68);
        local_5b58 = &local_5238;
        local_5b50 = FText::AsLocalizable_Advanced_LocText
                               (local_5b58,L"PRIMITIVE_DEBUGGER",
                                L"DetailPanel_AutomaticLODPlaceholder",L"Auto");
        local_5b40 = SNumericEntryBox<int>::FArguments::UndeterminedString(local_5b48,local_5b50);
        local_57e0 = IsForceLODIndexSliderEnabled;
        local_57d8 = 0;
        ppcVar15 = &local_57e0;
        puVar16 = local_54d8;
        for (lVar14 = 0x10; lVar14 != 0; lVar14 = lVar14 + -1) {
          *puVar16 = *(undefined1 *)ppcVar15;
          ppcVar15 = (code **)((longlong)ppcVar15 + 1);
          puVar16 = puVar16 + 1;
        }
        puVar16 = local_54d8;
        ppVar18 = &local_54c8;
        for (lVar14 = 0x10; lVar14 != 0; lVar14 = lVar14 + -1) {
          *(undefined1 *)ppVar18 = *puVar16;
          puVar16 = puVar16 + 1;
          ppVar18 = (pmf_6ca5fcb7 *)&ppVar18->field_0x1;
        }
        local_5b38 = TSlateBaseNamedArgs<SNumericEntryBox<int>_>::
                     IsEnabled<SPrimitiveDebuggerDetailView>
                               ((TSlateBaseNamedArgs<SNumericEntryBox<int>_> *)local_5b40,this,
                                &local_54c8);
        local_57d0 = HandleForceLOD;
        local_57c8 = 0;
        ppcVar15 = &local_57d0;
        puVar16 = local_54b8;
        for (lVar14 = 0x10; lVar14 != 0; lVar14 = lVar14 + -1) {
          *puVar16 = *(undefined1 *)ppcVar15;
          ppcVar15 = (code **)((longlong)ppcVar15 + 1);
          puVar16 = puVar16 + 1;
        }
        puVar16 = local_54b8;
        ppVar19 = &local_54a8;
        for (lVar14 = 0x10; lVar14 != 0; lVar14 = lVar14 + -1) {
          *(undefined1 *)ppVar19 = *puVar16;
          puVar16 = puVar16 + 1;
          ppVar19 = (pmf_d4321e53 *)&ppVar19->field_0x1;
        }
        local_5b20 = SNumericEntryBox<int>::FArguments::OnValueChanged<SPrimitiveDebuggerDetailView>
                               (local_5b38,this,&local_54a8);
        local_5b30 = &local_4cc0;
        local_5b28 = TAttribute<FText>::TAttribute<FText><FText>(local_5b30,&local_5990);
        local_5b08 = TSlateBaseNamedArgs<SNumericEntryBox<int>_>::ToolTipText
                               ((TSlateBaseNamedArgs<SNumericEntryBox<int>_> *)local_5b20,local_5b28
                               );
        local_5b18 = local_5088;
        local_608c[10] = 2;
        local_5b10 = TAttribute<enum_ETextJustify::Type>::TAttribute<enum_ETextJustify::Type>
                               (local_5b18,local_608c + 10);
        local_5b00 = SNumericEntryBox<int>::FArguments::Justification(local_5b08,local_5b10);
        RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_6096);
        this_03 = MakeTDecl<SNumericEntryBox<int>,RequiredArgs::T0RequiredArgs>
                            (&local_52b0,"SNumericEntryBox<int>",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\DrawPrimitiveDebugger\\Private\\SDrawPrimitiveDebugger.cpp"
                             ,0x2f9,&local_6096);
        pTVar13 = TSlateDecl<SNumericEntryBox<int>,RequiredArgs::T0RequiredArgs>::operator<<=
                            (this_03,&local_5488,local_5b00);
        TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SNumericEntryBox<int>_>(&local_57b0,pTVar13);
        local_5af0 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                               ((FSlotArguments *)local_5af8,&local_57b0);
        local_5ae0 = SHorizontalBox::FArguments::operator+(local_5ae8,local_5af0);
        RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_6095);
        pTVar11 = MakeTDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
                            (&local_52c8,"SHorizontalBox",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\DrawPrimitiveDebugger\\Private\\SDrawPrimitiveDebugger.cpp"
                             ,0x2ea,&local_6095);
        pTVar12 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                            (pTVar11,&local_5498,local_5ae0);
        TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SHorizontalBox>(&local_57c0,pTVar12);
        TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                  ((FSlotArguments *)local_5ad8,&local_57c0);
        TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_57c0);
        TSharedRef<SHorizontalBox,1>::~TSharedRef<SHorizontalBox,1>(&local_5498);
        TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
        ~TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>(&local_52c8);
        TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_57b0);
        TSharedRef<SNumericEntryBox<int>,1>::~TSharedRef<SNumericEntryBox<int>,1>(&local_5488);
        TSlateDecl<SNumericEntryBox<int>,RequiredArgs::T0RequiredArgs>::
        ~TSlateDecl<SNumericEntryBox<int>,RequiredArgs::T0RequiredArgs>(&local_52b0);
        SNumericEntryBox<int>::FArguments::~FArguments(&local_758);
        SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_4660);
        TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_57a0);
        TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_5478);
        TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
        ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_5298);
        FText::~FText(&local_5468);
        STextBlock::FArguments::~FArguments(&local_1208);
        SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_4578);
        SHorizontalBox::FArguments::~FArguments(&local_35a0);
        SBoxPanel::FScopedWidgetSlotArguments<SVerticalBox::FSlot>::
        ~FScopedWidgetSlotArguments<SVerticalBox::FSlot>(&local_3fc0);
        local_5ad0 = TSharedPtr<SVerticalBox,1>::operator->(&this->AdvancedOptionsWidget);
        pFVar3 = SVerticalBox::AddSlot(local_5ad0,&local_3ec0);
        local_5ab8 = &pFVar3->_padding_;
        local_5ac8 = &local_4c90;
        local_5ac0 = TAttribute<FMargin>::TAttribute<FMargin><FMargin>(local_5ac8,&Margin);
        pFVar4 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                           ((FSlotArgumentsMixin *)local_5ab8,local_5ac0);
        local_59b0 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar4);
        local_5ab0 = SHorizontalBox::FArguments::FArguments(&local_3398);
        local_5790 = OptionVisibilityForceDisableNanite;
        local_5788 = 0;
        ppcVar15 = &local_5790;
        puVar16 = local_5458;
        for (lVar14 = 0x10; lVar14 != 0; lVar14 = lVar14 + -1) {
          *puVar16 = *(undefined1 *)ppcVar15;
          ppcVar15 = (code **)((longlong)ppcVar15 + 1);
          puVar16 = puVar16 + 1;
        }
        puVar16 = local_5458;
        ppVar20 = &local_5448;
        for (lVar14 = 0x10; lVar14 != 0; lVar14 = lVar14 + -1) {
          *(undefined1 *)ppVar20 = *puVar16;
          puVar16 = puVar16 + 1;
          ppVar20 = (pmf_b3a9d206 *)&ppVar20->field_0x1;
        }
        local_5a28 = TSlateBaseNamedArgs<SHorizontalBox>::Visibility<SPrimitiveDebuggerDetailView>
                               ((TSlateBaseNamedArgs<SHorizontalBox> *)local_5ab0,this,&local_5448);
        pFVar5 = SHorizontalBox::Slot(&local_43a8);
        local_5aa8 = &pFVar5->field_0x48;
        local_5a90 = TAlignmentWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::HAlign
                               ((FSlotArgumentsMixin *)local_5aa8,HAlign_Left);
        local_5aa0 = &local_5068;
        local_5a98 = TAttribute<float>::TAttribute<float><int>(local_5aa0,&LabelColumnWidth);
        local_5a38 = SHorizontalBox::FSlot::FSlotArguments::FillWidth(local_5a90,local_5a98);
        local_5a78 = STextBlock::FArguments::FArguments(&local_cb0);
        local_5a88 = &local_4c60;
        pFVar6 = FText::AsLocalizable_Advanced_LocText
                           (&local_53c8,L"PRIMITIVE_DEBUGGER",L"DetailPanel_ForceDisableNaniteLabel"
                            ,L"Force Disable Nanite");
        local_5a80 = TAttribute<FText>::TAttribute<FText>(local_5a88,pFVar6);
        local_5a60 = STextBlock::FArguments::Text(local_5a78,local_5a80);
        local_5a70 = local_5048;
        local_608c[0xb] = 0;
        local_5a68 = TAttribute<enum_ETextJustify::Type>::TAttribute<enum_ETextJustify::Type>
                               (local_5a70,local_608c + 0xb);
        local_5a48 = STextBlock::FArguments::Justification(local_5a60,local_5a68);
        local_5a58 = &local_4c30;
        local_5a50 = TAttribute<FText>::TAttribute<FText><FText>(local_5a58,&local_59a0);
        local_5a40 = TSlateBaseNamedArgs<STextBlock>::ToolTipText
                               ((TSlateBaseNamedArgs<STextBlock> *)local_5a48,local_5a50);
        RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_6094);
        pTVar7 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                           (&local_5250,"STextBlock",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\DrawPrimitiveDebugger\\Private\\SDrawPrimitiveDebugger.cpp"
                            ,0x314,&local_6094);
        pTVar8 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                           (pTVar7,&local_53d8,local_5a40);
        TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_5740,pTVar8);
        local_5a30 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                               ((FSlotArguments *)local_5a38,&local_5740);
        local_59c0 = SHorizontalBox::FArguments::operator+(local_5a28,local_5a30);
        pFVar5 = SHorizontalBox::Slot(&local_4490);
        local_5a20 = &pFVar5->field_0x48;
        local_5a08 = TAlignmentWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::HAlign
                               ((FSlotArgumentsMixin *)local_5a20,HAlign_Right);
        local_5a18 = &local_5028;
        local_5a10 = TAttribute<float>::TAttribute<float><int>(local_5a18,&ValueColumnWidth);
        local_59d0 = SHorizontalBox::FSlot::FSlotArguments::FillWidth(local_5a08,local_5a10);
        local_5a00 = SCheckBox::FArguments::FArguments(&local_25f0);
        local_5780 = ForceDisableNaniteState;
        local_5778 = 0;
        ppcVar15 = &local_5780;
        puVar16 = local_5438;
        for (lVar14 = 0x10; lVar14 != 0; lVar14 = lVar14 + -1) {
          *puVar16 = *(undefined1 *)ppcVar15;
          ppcVar15 = (code **)((longlong)ppcVar15 + 1);
          puVar16 = puVar16 + 1;
        }
        puVar16 = local_5438;
        ppVar21 = &local_5428;
        for (lVar14 = 0x10; lVar14 != 0; lVar14 = lVar14 + -1) {
          *(undefined1 *)ppVar21 = *puVar16;
          puVar16 = puVar16 + 1;
          ppVar21 = (pmf_04c88d14 *)&ppVar21->field_0x1;
        }
        local_59f8 = SCheckBox::FArguments::IsChecked<SPrimitiveDebuggerDetailView>
                               (local_5a00,this,&local_5428);
        local_5770 = OnToggleForceDisableNanite;
        local_5768 = 0;
        ppcVar15 = &local_5770;
        puVar16 = local_5418;
        for (lVar14 = 0x10; lVar14 != 0; lVar14 = lVar14 + -1) {
          *puVar16 = *(undefined1 *)ppcVar15;
          ppcVar15 = (code **)((longlong)ppcVar15 + 1);
          puVar16 = puVar16 + 1;
        }
        puVar16 = local_5418;
        ppVar22 = &local_5408;
        for (lVar14 = 0x10; lVar14 != 0; lVar14 = lVar14 + -1) {
          *(undefined1 *)ppVar22 = *puVar16;
          puVar16 = puVar16 + 1;
          ppVar22 = (pmf_ce3dd58c *)&ppVar22->field_0x1;
        }
        local_59e0 = SCheckBox::FArguments::OnCheckStateChanged<SPrimitiveDebuggerDetailView>
                               (local_59f8,this,&local_5408);
        local_59f0 = &local_4c00;
        local_59e8 = TAttribute<FText>::TAttribute<FText><FText>(local_59f0,&local_59a0);
        local_59d8 = TSlateBaseNamedArgs<SCheckBox>::ToolTipText
                               ((TSlateBaseNamedArgs<SCheckBox> *)local_59e0,local_59e8);
        RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_6093);
        pTVar9 = MakeTDecl<SCheckBox,RequiredArgs::T0RequiredArgs>
                           (&local_5268,"SCheckBox",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\DrawPrimitiveDebugger\\Private\\SDrawPrimitiveDebugger.cpp"
                            ,0x31d,&local_6093);
        pTVar10 = TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>::operator<<=
                            (pTVar9,&local_53e8,local_59d8);
        TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SCheckBox>(&local_5750,pTVar10);
        local_59c8 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                               ((FSlotArguments *)local_59d0,&local_5750);
        local_59b8 = SHorizontalBox::FArguments::operator+(local_59c0,local_59c8);
        RequiredArgs::T0RequiredArgs::T0RequiredArgs(local_6092);
        pTVar11 = MakeTDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
                            (&local_5280,"SHorizontalBox",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\DrawPrimitiveDebugger\\Private\\SDrawPrimitiveDebugger.cpp"
                             ,0x30e,local_6092);
        pTVar12 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                            (pTVar11,&local_53f8,local_59b8);
        TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SHorizontalBox>(&local_5760,pTVar12);
        TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                  ((FSlotArguments *)local_59b0,&local_5760);
        TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_5760);
        TSharedRef<SHorizontalBox,1>::~TSharedRef<SHorizontalBox,1>(&local_53f8);
        TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
        ~TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>(&local_5280);
        TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_5750);
        TSharedRef<SCheckBox,1>::~TSharedRef<SCheckBox,1>(&local_53e8);
        TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>::
        ~TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>(&local_5268);
        SCheckBox::FArguments::~FArguments(&local_25f0);
        SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_4490);
        TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_5740);
        TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_53d8);
        TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
        ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_5250);
        FText::~FText(&local_53c8);
        STextBlock::FArguments::~FArguments(&local_cb0);
        SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_43a8);
        SHorizontalBox::FArguments::~FArguments(&local_3398);
        SBoxPanel::FScopedWidgetSlotArguments<SVerticalBox::FSlot>::
        ~FScopedWidgetSlotArguments<SVerticalBox::FSlot>(&local_3ec0);
        FText::~FText(&local_59a0);
        FText::~FText(&local_5990);
        FText::~FText(&local_5980);
        FText::~FText(&local_5970);
        FText::~FText(&local_5960);
      }
    }
    local_59a8 = &this->AdvancedOptionsWidget;
    TSharedPtr<SVerticalBox,1>::ToSharedRef(local_59a8,__return_storage_ptr__);
    TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::
    ~TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>(&local_5950);
  }
  return __return_storage_ptr__;
}

// GetSelectedActorClassName @ 146d1f5e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FText * __thiscall
SPrimitiveDebuggerDetailView::GetSelectedActorClassName
          (SPrimitiveDebuggerDetailView *this,FText *__return_storage_ptr__)

{
  bool bVar1;
  int iVar2;
  FWeakReferencer<1> *pFVar3;
  FText *pFVar4;
  
  if ((this->PrimitiveDebugger).Object != (SDrawPrimitiveDebugger *)0x0) {
    pFVar3 = &(this->PrimitiveDebugger).WeakReferenceCount;
    if (pFVar3->ReferenceController == (TReferenceControllerBase<1> *)0x0) {
LAB_146d1f63a:
      bVar1 = false;
    }
    else {
      iVar2 = SharedPointerInternals::TReferenceControllerBase<1>::GetSharedReferenceCount
                        (pFVar3->ReferenceController);
      if (iVar2 < 1) goto LAB_146d1f63a;
      bVar1 = true;
    }
    if (bVar1) {
      bVar1 = true;
      goto LAB_146d1f666;
    }
  }
  bVar1 = false;
LAB_146d1f666:
  if (bVar1) {
    FText::FText(__return_storage_ptr__,&this->SelectedActorClassName);
  }
  else {
    pFVar4 = FText::GetEmpty();
    FText::FText(__return_storage_ptr__,pFVar4);
  }
  return __return_storage_ptr__;
}

// GetSelectedActorClassToolTip @ 146d1f6c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FText * __thiscall
SPrimitiveDebuggerDetailView::GetSelectedActorClassToolTip
          (SPrimitiveDebuggerDetailView *this,FText *__return_storage_ptr__)

{
  bool bVar1;
  int iVar2;
  FWeakReferencer<1> *pFVar3;
  FText *pFVar4;
  
  if ((this->PrimitiveDebugger).Object != (SDrawPrimitiveDebugger *)0x0) {
    pFVar3 = &(this->PrimitiveDebugger).WeakReferenceCount;
    if (pFVar3->ReferenceController == (TReferenceControllerBase<1> *)0x0) {
LAB_146d1f71a:
      bVar1 = false;
    }
    else {
      iVar2 = SharedPointerInternals::TReferenceControllerBase<1>::GetSharedReferenceCount
                        (pFVar3->ReferenceController);
      if (iVar2 < 1) goto LAB_146d1f71a;
      bVar1 = true;
    }
    if (bVar1) {
      bVar1 = true;
      goto LAB_146d1f746;
    }
  }
  bVar1 = false;
LAB_146d1f746:
  if (bVar1) {
    FText::FText(__return_storage_ptr__,&this->SelectedActorClassPath);
  }
  else {
    pFVar4 = FText::GetEmpty();
    FText::FText(__return_storage_ptr__,pFVar4);
  }
  return __return_storage_ptr__;
}

// GetSelectedActorName @ 146d1f7a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FText * __thiscall
SPrimitiveDebuggerDetailView::GetSelectedActorName
          (SPrimitiveDebuggerDetailView *this,FText *__return_storage_ptr__)

{
  bool bVar1;
  int iVar2;
  FWeakReferencer<1> *pFVar3;
  FText *pFVar4;
  
  if ((this->PrimitiveDebugger).Object != (SDrawPrimitiveDebugger *)0x0) {
    pFVar3 = &(this->PrimitiveDebugger).WeakReferenceCount;
    if (pFVar3->ReferenceController == (TReferenceControllerBase<1> *)0x0) {
LAB_146d1f7fa:
      bVar1 = false;
    }
    else {
      iVar2 = SharedPointerInternals::TReferenceControllerBase<1>::GetSharedReferenceCount
                        (pFVar3->ReferenceController);
      if (iVar2 < 1) goto LAB_146d1f7fa;
      bVar1 = true;
    }
    if (bVar1) {
      bVar1 = true;
      goto LAB_146d1f826;
    }
  }
  bVar1 = false;
LAB_146d1f826:
  if (bVar1) {
    FText::FText(__return_storage_ptr__,&this->SelectedActorName);
  }
  else {
    pFVar4 = FText::GetEmpty();
    FText::FText(__return_storage_ptr__,pFVar4);
  }
  return __return_storage_ptr__;
}

// GetSelectedActorToolTip @ 146d1f880

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FText * __thiscall
SPrimitiveDebuggerDetailView::GetSelectedActorToolTip
          (SPrimitiveDebuggerDetailView *this,FText *__return_storage_ptr__)

{
  bool bVar1;
  int iVar2;
  FWeakReferencer<1> *pFVar3;
  FText *pFVar4;
  
  if ((this->PrimitiveDebugger).Object != (SDrawPrimitiveDebugger *)0x0) {
    pFVar3 = &(this->PrimitiveDebugger).WeakReferenceCount;
    if (pFVar3->ReferenceController == (TReferenceControllerBase<1> *)0x0) {
LAB_146d1f8da:
      bVar1 = false;
    }
    else {
      iVar2 = SharedPointerInternals::TReferenceControllerBase<1>::GetSharedReferenceCount
                        (pFVar3->ReferenceController);
      if (iVar2 < 1) goto LAB_146d1f8da;
      bVar1 = true;
    }
    if (bVar1) {
      bVar1 = true;
      goto LAB_146d1f906;
    }
  }
  bVar1 = false;
LAB_146d1f906:
  if (bVar1) {
    FText::FText(__return_storage_ptr__,&this->SelectedActorPath);
  }
  else {
    pFVar4 = FText::GetEmpty();
    FText::FText(__return_storage_ptr__,pFVar4);
  }
  return __return_storage_ptr__;
}

// GetSelectedBoneCount @ 146d1f960

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FText * __thiscall
SPrimitiveDebuggerDetailView::GetSelectedBoneCount
          (SPrimitiveDebuggerDetailView *this,FText *__return_storage_ptr__)

{
  bool bVar1;
  int iVar2;
  FWeakReferencer<1> *pFVar3;
  FText *pFVar4;
  USkinnedMeshComponent *this_00;
  FString *pFVar5;
  FText *local_58;
  FText local_38;
  FText local_28;
  FString local_18;
  
  if ((this->PrimitiveDebugger).Object != (SDrawPrimitiveDebugger *)0x0) {
    pFVar3 = &(this->PrimitiveDebugger).WeakReferenceCount;
    if ((pFVar3->ReferenceController == (TReferenceControllerBase<1> *)0x0) ||
       (iVar2 = SharedPointerInternals::TReferenceControllerBase<1>::GetSharedReferenceCount
                          (pFVar3->ReferenceController), iVar2 < 1)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      bVar1 = true;
      goto LAB_146d1f9f4;
    }
  }
  bVar1 = false;
LAB_146d1f9f4:
  if (bVar1) {
    bVar1 = FWeakObjectPtr::IsValid(&(this->SelectedAsSkinnedMesh).WeakPtr);
    if (!bVar1) {
      local_58 = FText::FText(&local_38,&PlaceholderValue);
    }
    else {
      this_00 = (USkinnedMeshComponent *)FWeakObjectPtr::Get(&(this->SelectedAsSkinnedMesh).WeakPtr)
      ;
      iVar2 = USkinnedMeshComponent::GetNumBones(this_00);
      pFVar5 = ::FString::FromInt(&local_18,iVar2);
      local_58 = FText::FromString(&local_28,pFVar5);
    }
    FText::FText(__return_storage_ptr__,local_58);
    if (!bVar1) {
      FText::~FText(&local_38);
    }
    else {
      FText::~FText(&local_28);
      ::FString::~FString(&local_18);
    }
  }
  else {
    pFVar4 = FText::GetEmpty();
    FText::FText(__return_storage_ptr__,pFVar4);
  }
  return __return_storage_ptr__;
}

// GetSelectedDrawCallCount @ 146d1fb60

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FText * __thiscall
SPrimitiveDebuggerDetailView::GetSelectedDrawCallCount
          (SPrimitiveDebuggerDetailView *this,FText *__return_storage_ptr__)

{
  int iVar1;
  FString *pFVar2;
  FString local_18;
  
  if (this->CurrentLOD == (FPrimitiveLODStats *)0x0) {
    FText::FText(__return_storage_ptr__,&PlaceholderValue);
  }
  else {
    iVar1 = FPrimitiveLODStats::GetDrawCount(this->CurrentLOD);
    pFVar2 = ::FString::FromInt(&local_18,iVar1);
    FText::FromString(__return_storage_ptr__,pFVar2);
    ::FString::~FString(&local_18);
  }
  return __return_storage_ptr__;
}

// GetSelectedForcedLODSliderMaxValue @ 146d1fbe0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TOptional<int> __thiscall
SPrimitiveDebuggerDetailView::GetSelectedForcedLODSliderMaxValue(SPrimitiveDebuggerDetailView *this)

{
  bool bVar1;
  int iVar2;
  FPrimitiveInfo *this_00;
  TOptional<int> in_RDX;
  int local_5c;
  int local_58 [2];
  TWeakPtr<SDrawPrimitiveDebugger,1> *local_50;
  FWeakReferencer<1> *local_48;
  TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> local_40;
  TWeakPtr<SDrawPrimitiveDebugger,1> *local_30;
  SDrawPrimitiveDebugger *local_28;
  TSharedPtr<SDrawPrimitiveDebugger,1> local_20 [2];
  
  local_50 = &this->PrimitiveDebugger;
  if (local_50->Object != (SDrawPrimitiveDebugger *)0x0) {
    local_48 = &(this->PrimitiveDebugger).WeakReferenceCount;
    if ((local_48->ReferenceController == (TReferenceControllerBase<1> *)0x0) ||
       (iVar2 = SharedPointerInternals::TReferenceControllerBase<1>::GetSharedReferenceCount
                          (local_48->ReferenceController), iVar2 < 1)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      bVar1 = true;
      goto LAB_146d1fc6c;
    }
  }
  bVar1 = false;
LAB_146d1fc6c:
  if (bVar1) {
    local_30 = &this->PrimitiveDebugger;
    TSharedPtr<SDrawPrimitiveDebugger,1>::
    TSharedPtr<SDrawPrimitiveDebugger,1><SDrawPrimitiveDebugger>(local_20,local_30);
    local_28 = TSharedPtr<SDrawPrimitiveDebugger,1>::operator->(local_20);
    SDrawPrimitiveDebugger::GetCurrentSelection(local_28,&local_40);
    TSharedPtr<SDrawPrimitiveDebugger,1>::~TSharedPtr<SDrawPrimitiveDebugger,1>(local_20);
    if (local_40.Object == (FPrimitiveInfo *)0x0) {
      local_58[1] = 0;
      TOptional<int>::TOptional<int>((TOptional<int> *)in_RDX,local_58 + 1);
      TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::
      ~TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>(&local_40);
    }
    else {
      this_00 = TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::operator->(&local_40);
      local_58[0] = FViewDebugInfo::FPrimitiveInfo::GetNumLODs(this_00);
      local_58[0] = local_58[0] + -1;
      TOptional<int>::TOptional<int>((TOptional<int> *)in_RDX,local_58);
      TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::
      ~TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>(&local_40);
    }
  }
  else {
    local_5c = 0;
    TOptional<int>::TOptional<int>((TOptional<int> *)in_RDX,&local_5c);
  }
  return in_RDX;
}

// GetSelectedForcedLODValue @ 146d1fda0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TOptional<int> __thiscall
SPrimitiveDebuggerDetailView::GetSelectedForcedLODValue(SPrimitiveDebuggerDetailView *this)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  TOptional<int> in_RDX;
  int local_c0;
  int local_a8;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  TWeakPtr<SDrawPrimitiveDebugger,1> *local_80;
  FWeakReferencer<1> *local_78;
  TWeakPtr<SDrawPrimitiveDebugger,1> *local_70;
  SDrawPrimitiveDebugger *local_68;
  UObject *local_60;
  UObject *local_58;
  USkinnedMeshComponent *local_50;
  USkinnedMeshComponent *local_48;
  TOptional<int> local_40;
  TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> local_38;
  TSharedPtr<SDrawPrimitiveDebugger,1> local_28 [2];
  
  local_80 = &this->PrimitiveDebugger;
  if (local_80->Object != (SDrawPrimitiveDebugger *)0x0) {
    local_78 = &(this->PrimitiveDebugger).WeakReferenceCount;
    if ((local_78->ReferenceController == (TReferenceControllerBase<1> *)0x0) ||
       (iVar2 = SharedPointerInternals::TReferenceControllerBase<1>::GetSharedReferenceCount
                          (local_78->ReferenceController), iVar2 < 1)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      bVar1 = true;
      goto LAB_146d1fe2c;
    }
  }
  bVar1 = false;
LAB_146d1fe2c:
  if (bVar1) {
    local_70 = &this->PrimitiveDebugger;
    TSharedPtr<SDrawPrimitiveDebugger,1>::
    TSharedPtr<SDrawPrimitiveDebugger,1><SDrawPrimitiveDebugger>(local_28,local_70);
    local_68 = TSharedPtr<SDrawPrimitiveDebugger,1>::operator->(local_28);
    SDrawPrimitiveDebugger::GetCurrentSelection(local_68,&local_38);
    TSharedPtr<SDrawPrimitiveDebugger,1>::~TSharedPtr<SDrawPrimitiveDebugger,1>(local_28);
    if (local_38.Object != (FPrimitiveInfo *)0x0) {
      local_c0 = 0;
      bVar1 = FWeakObjectPtr::IsValid(&(this->SelectedAsStaticMesh).WeakPtr);
      if (bVar1) {
        local_60 = FWeakObjectPtr::Get(&(this->SelectedAsStaticMesh).WeakPtr);
        local_c0 = *(int *)&local_60[0x23].field_0x18;
        local_58 = local_60;
      }
      bVar1 = FWeakObjectPtr::IsValid(&(this->SelectedAsSkinnedMesh).WeakPtr);
      if (bVar1) {
        local_50 = (USkinnedMeshComponent *)
                   FWeakObjectPtr::Get(&(this->SelectedAsSkinnedMesh).WeakPtr);
        local_48 = local_50;
        local_c0 = USkinnedMeshComponent::GetForcedLOD(local_50);
      }
      if (0 < local_c0) {
        local_40 = GetSelectedNumLODsValue(this);
        local_94 = 0;
        piVar3 = TOptional<int>::Get((TOptional<int> *)local_40,&local_94);
        local_a8 = *piVar3 + -1;
        if (local_c0 + -1 < local_a8) {
          local_a8 = local_c0 + -1;
        }
        local_90 = local_a8;
        if (local_a8 < 1) {
          local_98 = 0;
        }
        else {
          local_98 = local_a8;
        }
        local_8c = local_98;
        local_88 = local_98;
        local_84 = local_98;
        TOptional<int>::TOptional<int>((TOptional<int> *)in_RDX,&local_84);
        TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::
        ~TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>(&local_38);
        return in_RDX;
      }
    }
    TOptional<int>::TOptional<int>((TOptional<int> *)in_RDX);
    TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::
    ~TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>(&local_38);
  }
  else {
    TOptional<int>::TOptional<int>((TOptional<int> *)in_RDX);
  }
  return in_RDX;
}

// GetSelectedLOD @ 146d20830

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FText * __thiscall
SPrimitiveDebuggerDetailView::GetSelectedLOD
          (SPrimitiveDebuggerDetailView *this,FText *__return_storage_ptr__)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int *piVar4;
  FString *pFVar5;
  TOptional<int> local_50;
  FText *local_48;
  FText *local_40;
  FText local_38;
  FText local_28;
  FString local_18;
  
  GetSelectedLODValue(this);
  bVar3 = TOptional<int>::IsSet(&local_50);
  if (bVar3) {
    piVar4 = TOptional<int>::GetValue(&local_50);
    if (-1 < *piVar4) {
      bVar2 = true;
      bVar1 = false;
      bVar3 = true;
      piVar4 = TOptional<int>::GetValue(&local_50);
      pFVar5 = ::FString::FromInt(&local_18,*piVar4);
      local_48 = FText::FromString(&local_28,pFVar5);
      goto LAB_146d208c8;
    }
  }
  bVar3 = false;
  bVar2 = false;
  bVar1 = true;
  local_48 = FText::FText(&local_38,&PlaceholderValue);
LAB_146d208c8:
  local_40 = local_48;
  FText::FText(__return_storage_ptr__,local_48);
  if (bVar1) {
    FText::~FText(&local_38);
  }
  if (bVar2) {
    FText::~FText(&local_28);
  }
  if (bVar3) {
    ::FString::~FString(&local_18);
  }
  return __return_storage_ptr__;
}

// GetSelectedLODValue @ 146d20950

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TOptional<int> __thiscall
SPrimitiveDebuggerDetailView::GetSelectedLODValue(SPrimitiveDebuggerDetailView *this)

{
  TOptional<int> in_RDX;
  
  if (this->CurrentLOD == (FPrimitiveLODStats *)0x0) {
    TOptional<int>::TOptional<int>((TOptional<int> *)in_RDX);
  }
  else {
    TOptional<int>::TOptional<int>((TOptional<int> *)in_RDX,&this->CurrentLOD->LODIndex);
  }
  return in_RDX;
}

// GetSelectedLocation @ 146d209b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FText * __thiscall
SPrimitiveDebuggerDetailView::GetSelectedLocation
          (SPrimitiveDebuggerDetailView *this,FText *__return_storage_ptr__)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  FWeakReferencer<1> *pFVar5;
  FText *pFVar6;
  FPrimitiveInfo *this_00;
  TVector<double> *pTVar7;
  FText *local_d0;
  TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> local_c8;
  TWeakPtr<SDrawPrimitiveDebugger,1> *local_b8;
  SDrawPrimitiveDebugger *local_b0;
  FPrimitiveInfo *local_a8;
  wchar_t *local_a0;
  wchar_t *local_98;
  wchar_t *local_90;
  double local_88;
  double local_80;
  double local_78;
  wchar_t *local_70;
  FText *local_68;
  TSharedPtr<SDrawPrimitiveDebugger,1> local_60;
  FString local_50;
  FText local_40;
  FText local_30;
  TVector<double> local_20;
  
  if ((this->PrimitiveDebugger).Object == (SDrawPrimitiveDebugger *)0x0) {
LAB_146d20a3c:
    bVar3 = false;
  }
  else {
    pFVar5 = &(this->PrimitiveDebugger).WeakReferenceCount;
    if ((pFVar5->ReferenceController == (TReferenceControllerBase<1> *)0x0) ||
       (iVar4 = SharedPointerInternals::TReferenceControllerBase<1>::GetSharedReferenceCount
                          (pFVar5->ReferenceController), iVar4 < 1)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_146d20a3c;
    bVar3 = true;
  }
  if (!bVar3) {
    pFVar6 = FText::GetEmpty();
    FText::FText(__return_storage_ptr__,pFVar6);
    return __return_storage_ptr__;
  }
  local_b8 = &this->PrimitiveDebugger;
  TSharedPtr<SDrawPrimitiveDebugger,1>::TSharedPtr<SDrawPrimitiveDebugger,1><SDrawPrimitiveDebugger>
            (&local_60,local_b8);
  local_b0 = TSharedPtr<SDrawPrimitiveDebugger,1>::operator->(&local_60);
  SDrawPrimitiveDebugger::GetCurrentSelection(local_b0,&local_c8);
  TSharedPtr<SDrawPrimitiveDebugger,1>::~TSharedPtr<SDrawPrimitiveDebugger,1>(&local_60);
  if (local_c8.Object != (FPrimitiveInfo *)0x0) {
    this_00 = TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::operator->(&local_c8);
    bVar3 = FViewDebugInfo::FPrimitiveInfo::IsPrimitiveValid(this_00);
    if (bVar3) {
      local_a8 = TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::operator->(&local_c8);
      pTVar7 = FViewDebugInfo::FPrimitiveInfo::GetPrimitiveLocation(local_a8,&local_20);
      bVar2 = true;
      bVar1 = false;
      bVar3 = true;
      local_88 = (pTVar7->field0_0x0)._s_0.Z;
      local_80 = (pTVar7->field0_0x0)._s_0.Y;
      local_78 = (pTVar7->field0_0x0)._s_0.X;
      local_a0 = L"X=%3.3f Y=%3.3f Z=%3.3f";
      local_98 = L"X=%3.3f Y=%3.3f Z=%3.3f";
      local_90 = L"X=%3.3f Y=%3.3f Z=%3.3f";
      local_70 = L"X=%3.3f Y=%3.3f Z=%3.3f";
      ::FString::Printf<double,double,double>
                (&local_50,(TCheckedFormatStringPrivate<wchar_t,double,double,double>)0x15067f6c0,
                 local_78,local_80,local_88);
      local_d0 = FText::FromString(&local_30,&local_50);
      goto LAB_146d20c38;
    }
  }
  bVar2 = false;
  bVar1 = true;
  bVar3 = false;
  local_d0 = FText::FText(&local_40,&PlaceholderValue);
LAB_146d20c38:
  local_68 = local_d0;
  FText::FText(__return_storage_ptr__,local_d0);
  if (bVar1) {
    FText::~FText(&local_40);
  }
  if (bVar2) {
    FText::~FText(&local_30);
  }
  if (bVar3) {
    ::FString::~FString(&local_50);
  }
  TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::
  ~TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>(&local_c8);
  return __return_storage_ptr__;
}

// GetSelectedMaterialsWidget @ 146d20ce0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TSharedRef<SVerticalBox,1> * __thiscall
SPrimitiveDebuggerDetailView::GetSelectedMaterialsWidget
          (SPrimitiveDebuggerDetailView *this,TSharedRef<SVerticalBox,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> *this_00;
  SBoxPanel *this_01;
  TSharedRef<SVerticalBox,1> *pTVar4;
  UMaterialInterface *pUVar5;
  FPrimitiveInfo *pFVar6;
  char local_387;
  int local_384;
  int local_380;
  T0RequiredArgs local_37b;
  char local_37a;
  char local_379;
  undefined1 local_378;
  undefined1 local_377;
  undefined1 local_376;
  ushort local_374;
  undefined4 local_370;
  uint local_36c;
  uint local_368;
  uint local_364;
  uint local_360;
  TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> local_358;
  int local_348;
  int local_344;
  int local_340;
  int local_33c;
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> *local_338;
  TArray<TWeakObjectPtr<UMaterialInterface,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *local_330;
  TWeakPtr<SDrawPrimitiveDebugger,1> *local_328;
  FWeakReferencer<1> *local_320;
  FArguments *local_318;
  TSharedPtr<SVerticalBox,1> *local_310;
  TWeakPtr<SDrawPrimitiveDebugger,1> *local_308;
  SDrawPrimitiveDebugger *local_300;
  undefined4 local_2f8;
  undefined4 local_2f4;
  FScriptContainerElement *local_2f0;
  FScriptContainerElement *local_2e8;
  FScriptContainerElement *local_2e0;
  FScriptContainerElement *local_2d8;
  FPrimitiveInfo *local_2d0;
  TWeakObjectPtr<UMaterialInterface,FWeakObjectPtr> *local_2c8;
  TWeakObjectPtr<UMaterialInterface,FWeakObjectPtr> *local_2c0;
  UMaterialInterface *local_2b8;
  TArray<TWeakObjectPtr<UMaterialInterface,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *local_2b0;
  undefined4 local_2a8;
  undefined4 local_2a4;
  FScriptContainerElement *local_2a0;
  FScriptContainerElement *local_298;
  FWeakObjectPtr *local_290;
  FWeakObjectPtr *local_288;
  UMaterialInterface *local_280;
  TWeakObjectPtr<UMaterialInterface,FWeakObjectPtr> *local_278;
  TWeakObjectPtr<UMaterialInterface,FWeakObjectPtr> *local_270;
  UMaterialInterface *local_268;
  TSharedPtr<SVerticalBox,1> *local_260;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> *local_258;
  TSharedPtr<SDrawPrimitiveDebugger,1> local_250;
  TSharedRef<SVerticalBox,1> local_240;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_230;
  FArguments local_218;
  
  if ((this->MaterialsWidget).Object == (SVerticalBox *)0x0) {
    local_318 = SVerticalBox::FArguments::FArguments(&local_218);
    RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_37b);
    local_258 = MakeTDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
                          (&local_230,"SVerticalBox",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\DrawPrimitiveDebugger\\Private\\SDrawPrimitiveDebugger.cpp"
                           ,0x1e4,&local_37b);
    this_00 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::Expose<SVerticalBox>
                        (local_258,&this->MaterialsWidget);
    TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=(this_00,&local_240,local_318)
    ;
    SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
              (&local_240.SharedReferenceCount);
    SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
              (&local_230._Widget.SharedReferenceCount);
    TArray<SVerticalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>::
    ~TArray<SVerticalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>(&local_218._Slots);
    TSlateBaseNamedArgs<SVerticalBox>::~TSlateBaseNamedArgs<SVerticalBox>
              ((TSlateBaseNamedArgs<SVerticalBox> *)&local_218);
  }
  else {
    this_01 = (SBoxPanel *)TSharedPtr<SVerticalBox,1>::operator->(&this->MaterialsWidget);
    SBoxPanel::ClearChildren(this_01);
  }
  local_328 = &this->PrimitiveDebugger;
  if (local_328->Object != (SDrawPrimitiveDebugger *)0x0) {
    local_320 = &(this->PrimitiveDebugger).WeakReferenceCount;
    if ((local_320->ReferenceController == (TReferenceControllerBase<1> *)0x0) ||
       (iVar3 = SharedPointerInternals::TReferenceControllerBase<1>::GetSharedReferenceCount
                          (local_320->ReferenceController), iVar3 < 1)) {
      local_387 = '\0';
    }
    else {
      local_387 = '\x01';
    }
    local_37a = local_387;
    if (local_387 != '\0') {
      local_370 = 1;
      goto LAB_146d20ea0;
    }
  }
  local_370 = 0;
LAB_146d20ea0:
  local_379 = (char)local_370;
  if ((char)local_370 == '\0') {
    local_310 = &this->MaterialsWidget;
    TSharedPtr<SVerticalBox,1>::ToSharedRef(local_310,__return_storage_ptr__);
  }
  else {
    local_308 = &this->PrimitiveDebugger;
    TSharedPtr<SDrawPrimitiveDebugger,1>::
    TSharedPtr<SDrawPrimitiveDebugger,1><SDrawPrimitiveDebugger>(&local_250,local_308);
    local_300 = TSharedPtr<SDrawPrimitiveDebugger,1>::operator->(&local_250);
    SDrawPrimitiveDebugger::GetCurrentSelection(local_300,&local_358);
    TSharedPtr<SDrawPrimitiveDebugger,1>::~TSharedPtr<SDrawPrimitiveDebugger,1>(&local_250);
    local_378 = local_358.Object != (FPrimitiveInfo *)0x0;
    if ((bool)local_378) {
      if (this->CurrentLOD == (FPrimitiveLODStats *)0x0) {
        if (this->bSelectionIsNaniteEnabledThisFrame != false) {
          pFVar6 = TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::operator->(&local_358);
          local_2b0 = &pFVar6->Materials;
          local_340 = (pFVar6->Materials).ArrayNum;
          local_33c = local_340;
          for (local_380 = 0; local_380 < local_33c; local_380 = local_380 + 1) {
            pFVar6 = TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::operator->(&local_358);
            local_330 = &pFVar6->Materials;
            local_360 = (uint)(-1 < local_380);
            bVar2 = local_380 < (pFVar6->Materials).ArrayNum;
            local_364 = (uint)bVar2;
            if (-1 >= local_380 || !bVar2) {
              local_2a8 = 0;
              local_2a4 = 0;
              UE::Core::Private::FormatStringSan::
              AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
              bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar2) {
                pcVar1 = (code *)swi(3);
                pTVar4 = (TSharedRef<SVerticalBox,1> *)(*pcVar1)();
                return pTVar4;
              }
            }
            local_2a0 = (local_330->AllocatorInstance).Data;
            local_290 = (FWeakObjectPtr *)(local_2a0 + (longlong)local_380 * 8);
            local_298 = local_2a0;
            local_288 = local_290;
            local_280 = (UMaterialInterface *)FWeakObjectPtr::Get(local_290);
            CreateMaterialEntry(this,local_280,local_380,false);
          }
          pFVar6 = TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::operator->(&local_358);
          local_278 = &pFVar6->OverlayMaterial;
          local_376 = FWeakObjectPtr::IsValid(&local_278->WeakPtr);
          if ((bool)local_376) {
            pFVar6 = TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::operator->(&local_358);
            local_270 = &pFVar6->OverlayMaterial;
            local_268 = (UMaterialInterface *)FWeakObjectPtr::Get(&local_270->WeakPtr);
            CreateMaterialEntry(this,local_268,-1,true);
          }
        }
      }
      else {
        local_348 = (this->CurrentLOD->MaterialIndices).ArrayNum;
        local_344 = local_348;
        for (local_384 = 0; local_384 < local_344; local_384 = local_384 + 1) {
          local_2d0 = TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::operator->(&local_358);
          local_338 = &this->CurrentLOD->MaterialIndices;
          local_368 = (uint)(-1 < local_384);
          bVar2 = local_384 < (this->CurrentLOD->MaterialIndices).ArrayNum;
          local_36c = (uint)bVar2;
          if (-1 >= local_384 || !bVar2) {
            local_2f8 = 0;
            local_2f4 = 0;
            UE::Core::Private::FormatStringSan::
            AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
            bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar2) {
              pcVar1 = (code *)swi(3);
              pTVar4 = (TSharedRef<SVerticalBox,1> *)(*pcVar1)();
              return pTVar4;
            }
          }
          local_2f0 = (local_338->AllocatorInstance).Data;
          local_2e0 = local_2f0 + (longlong)local_384 * 2;
          local_374 = *(ushort *)local_2e0;
          local_2e8 = local_2f0;
          local_2d8 = local_2e0;
          pUVar5 = FViewDebugInfo::FPrimitiveInfo::GetMaterial(local_2d0,local_374);
          CreateMaterialEntry(this,pUVar5,local_384,false);
        }
        pFVar6 = TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::operator->(&local_358);
        local_2c8 = &pFVar6->OverlayMaterial;
        local_377 = FWeakObjectPtr::IsValid(&local_2c8->WeakPtr);
        if ((bool)local_377) {
          pFVar6 = TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::operator->(&local_358);
          local_2c0 = &pFVar6->OverlayMaterial;
          local_2b8 = (UMaterialInterface *)FWeakObjectPtr::Get(&local_2c0->WeakPtr);
          CreateMaterialEntry(this,local_2b8,-1,true);
        }
      }
    }
    local_260 = &this->MaterialsWidget;
    TSharedPtr<SVerticalBox,1>::ToSharedRef(local_260,__return_storage_ptr__);
    TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::
    ~TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>(&local_358);
  }
  return __return_storage_ptr__;
}

// GetSelectedNumLODs @ 146d21450

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FText * __thiscall
SPrimitiveDebuggerDetailView::GetSelectedNumLODs
          (SPrimitiveDebuggerDetailView *this,FText *__return_storage_ptr__)

{
  bool bVar1;
  int iVar2;
  FWeakReferencer<1> *pFVar3;
  FText *pFVar4;
  SDrawPrimitiveDebugger *this_00;
  FPrimitiveInfo *this_01;
  FString *pFVar5;
  FText *local_78;
  TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> local_58;
  TSharedPtr<SDrawPrimitiveDebugger,1> local_48;
  FText local_38;
  FText local_28;
  FString local_18;
  
  if ((this->PrimitiveDebugger).Object != (SDrawPrimitiveDebugger *)0x0) {
    pFVar3 = &(this->PrimitiveDebugger).WeakReferenceCount;
    if ((pFVar3->ReferenceController == (TReferenceControllerBase<1> *)0x0) ||
       (iVar2 = SharedPointerInternals::TReferenceControllerBase<1>::GetSharedReferenceCount
                          (pFVar3->ReferenceController), iVar2 < 1)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      bVar1 = true;
      goto LAB_146d214e4;
    }
  }
  bVar1 = false;
LAB_146d214e4:
  if (bVar1) {
    TSharedPtr<SDrawPrimitiveDebugger,1>::
    TSharedPtr<SDrawPrimitiveDebugger,1><SDrawPrimitiveDebugger>(&local_48,&this->PrimitiveDebugger)
    ;
    this_00 = TSharedPtr<SDrawPrimitiveDebugger,1>::operator->(&local_48);
    SDrawPrimitiveDebugger::GetCurrentSelection(this_00,&local_58);
    TSharedPtr<SDrawPrimitiveDebugger,1>::~TSharedPtr<SDrawPrimitiveDebugger,1>(&local_48);
    if (local_58.Object == (FPrimitiveInfo *)0x0) {
      local_78 = FText::FText(&local_38,&PlaceholderValue);
    }
    else {
      this_01 = TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::operator->(&local_58);
      iVar2 = FViewDebugInfo::FPrimitiveInfo::GetNumLODs(this_01);
      pFVar5 = ::FString::FromInt(&local_18,iVar2);
      local_78 = FText::FromString(&local_28,pFVar5);
    }
    FText::FText(__return_storage_ptr__,local_78);
    if (local_58.Object == (FPrimitiveInfo *)0x0) {
      FText::~FText(&local_38);
    }
    else {
      FText::~FText(&local_28);
      ::FString::~FString(&local_18);
    }
    TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::
    ~TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>(&local_58);
  }
  else {
    pFVar4 = FText::GetEmpty();
    FText::FText(__return_storage_ptr__,pFVar4);
  }
  return __return_storage_ptr__;
}

// GetSelectedNumLODsValue @ 146d21690

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TOptional<int> __thiscall
SPrimitiveDebuggerDetailView::GetSelectedNumLODsValue(SPrimitiveDebuggerDetailView *this)

{
  bool bVar1;
  int iVar2;
  FPrimitiveInfo *this_00;
  TOptional<int> in_RDX;
  int local_5c;
  int local_58 [2];
  TWeakPtr<SDrawPrimitiveDebugger,1> *local_50;
  FWeakReferencer<1> *local_48;
  TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> local_40;
  TWeakPtr<SDrawPrimitiveDebugger,1> *local_30;
  SDrawPrimitiveDebugger *local_28;
  TSharedPtr<SDrawPrimitiveDebugger,1> local_20 [2];
  
  local_50 = &this->PrimitiveDebugger;
  if (local_50->Object != (SDrawPrimitiveDebugger *)0x0) {
    local_48 = &(this->PrimitiveDebugger).WeakReferenceCount;
    if ((local_48->ReferenceController == (TReferenceControllerBase<1> *)0x0) ||
       (iVar2 = SharedPointerInternals::TReferenceControllerBase<1>::GetSharedReferenceCount
                          (local_48->ReferenceController), iVar2 < 1)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      bVar1 = true;
      goto LAB_146d2171c;
    }
  }
  bVar1 = false;
LAB_146d2171c:
  if (bVar1) {
    local_30 = &this->PrimitiveDebugger;
    TSharedPtr<SDrawPrimitiveDebugger,1>::
    TSharedPtr<SDrawPrimitiveDebugger,1><SDrawPrimitiveDebugger>(local_20,local_30);
    local_28 = TSharedPtr<SDrawPrimitiveDebugger,1>::operator->(local_20);
    SDrawPrimitiveDebugger::GetCurrentSelection(local_28,&local_40);
    TSharedPtr<SDrawPrimitiveDebugger,1>::~TSharedPtr<SDrawPrimitiveDebugger,1>(local_20);
    if (local_40.Object == (FPrimitiveInfo *)0x0) {
      local_58[1] = 0;
      TOptional<int>::TOptional<int>((TOptional<int> *)in_RDX,local_58 + 1);
      TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::
      ~TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>(&local_40);
    }
    else {
      this_00 = TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::operator->(&local_40);
      local_58[0] = FViewDebugInfo::FPrimitiveInfo::GetNumLODs(this_00);
      TOptional<int>::TOptional<int>((TOptional<int> *)in_RDX,local_58);
      TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::
      ~TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>(&local_40);
    }
  }
  else {
    local_5c = 0;
    TOptional<int>::TOptional<int>((TOptional<int> *)in_RDX,&local_5c);
  }
  return in_RDX;
}

// GetSelectedPrimitiveName @ 146d21850

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FText * __thiscall
SPrimitiveDebuggerDetailView::GetSelectedPrimitiveName
          (SPrimitiveDebuggerDetailView *this,FText *__return_storage_ptr__)

{
  bool bVar1;
  int iVar2;
  FWeakReferencer<1> *pFVar3;
  FText *pFVar4;
  SDrawPrimitiveDebugger *this_00;
  FPrimitiveInfo *pFVar5;
  FText *local_68;
  TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> local_48;
  TSharedPtr<SDrawPrimitiveDebugger,1> local_38;
  FText local_28;
  FText local_18;
  
  if ((this->PrimitiveDebugger).Object != (SDrawPrimitiveDebugger *)0x0) {
    pFVar3 = &(this->PrimitiveDebugger).WeakReferenceCount;
    if ((pFVar3->ReferenceController == (TReferenceControllerBase<1> *)0x0) ||
       (iVar2 = SharedPointerInternals::TReferenceControllerBase<1>::GetSharedReferenceCount
                          (pFVar3->ReferenceController), iVar2 < 1)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      bVar1 = true;
      goto LAB_146d218e4;
    }
  }
  bVar1 = false;
LAB_146d218e4:
  if (bVar1) {
    TSharedPtr<SDrawPrimitiveDebugger,1>::
    TSharedPtr<SDrawPrimitiveDebugger,1><SDrawPrimitiveDebugger>(&local_38,&this->PrimitiveDebugger)
    ;
    this_00 = TSharedPtr<SDrawPrimitiveDebugger,1>::operator->(&local_38);
    SDrawPrimitiveDebugger::GetCurrentSelection(this_00,&local_48);
    TSharedPtr<SDrawPrimitiveDebugger,1>::~TSharedPtr<SDrawPrimitiveDebugger,1>(&local_38);
    if (local_48.Object == (FPrimitiveInfo *)0x0) {
      local_68 = FText::FText(&local_28,&PlaceholderValue);
    }
    else {
      pFVar5 = TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::operator->(&local_48);
      local_68 = FText::FromString(&local_18,&pFVar5->Name);
    }
    FText::FText(__return_storage_ptr__,local_68);
    if (local_48.Object == (FPrimitiveInfo *)0x0) {
      FText::~FText(&local_28);
    }
    else {
      FText::~FText(&local_18);
    }
    TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::
    ~TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>(&local_48);
  }
  else {
    pFVar4 = FText::GetEmpty();
    FText::FText(__return_storage_ptr__,pFVar4);
  }
  return __return_storage_ptr__;
}

// GetSelectedPrimitiveNaniteEnabled @ 146d21a60

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FText * __thiscall
SPrimitiveDebuggerDetailView::GetSelectedPrimitiveNaniteEnabled
          (SPrimitiveDebuggerDetailView *this,FText *__return_storage_ptr__)

{
  bool bVar1;
  int iVar2;
  FWeakReferencer<1> *pFVar3;
  FText *pFVar4;
  FText *local_20;
  
  if ((this->PrimitiveDebugger).Object != (SDrawPrimitiveDebugger *)0x0) {
    pFVar3 = &(this->PrimitiveDebugger).WeakReferenceCount;
    if (pFVar3->ReferenceController == (TReferenceControllerBase<1> *)0x0) {
LAB_146d21aba:
      bVar1 = false;
    }
    else {
      iVar2 = SharedPointerInternals::TReferenceControllerBase<1>::GetSharedReferenceCount
                        (pFVar3->ReferenceController);
      if (iVar2 < 1) goto LAB_146d21aba;
      bVar1 = true;
    }
    if (bVar1) {
      bVar1 = true;
      goto LAB_146d21ae6;
    }
  }
  bVar1 = false;
LAB_146d21ae6:
  if (bVar1) {
    if (this->bSelectionIsNaniteEnabledThisFrame == false) {
      local_20 = &FalseTextValue;
    }
    else {
      local_20 = &TrueTextValue;
    }
    FText::FText(__return_storage_ptr__,local_20);
  }
  else {
    pFVar4 = FText::GetEmpty();
    FText::FText(__return_storage_ptr__,pFVar4);
  }
  return __return_storage_ptr__;
}

// GetSelectedPrimitiveSupportsNanite @ 146d21b70

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FText * __thiscall
SPrimitiveDebuggerDetailView::GetSelectedPrimitiveSupportsNanite
          (SPrimitiveDebuggerDetailView *this,FText *__return_storage_ptr__)

{
  bool bVar1;
  int iVar2;
  FWeakReferencer<1> *pFVar3;
  FText *pFVar4;
  FText *local_20;
  
  if ((this->PrimitiveDebugger).Object != (SDrawPrimitiveDebugger *)0x0) {
    pFVar3 = &(this->PrimitiveDebugger).WeakReferenceCount;
    if (pFVar3->ReferenceController == (TReferenceControllerBase<1> *)0x0) {
LAB_146d21bca:
      bVar1 = false;
    }
    else {
      iVar2 = SharedPointerInternals::TReferenceControllerBase<1>::GetSharedReferenceCount
                        (pFVar3->ReferenceController);
      if (iVar2 < 1) goto LAB_146d21bca;
      bVar1 = true;
    }
    if (bVar1) {
      bVar1 = true;
      goto LAB_146d21bf6;
    }
  }
  bVar1 = false;
LAB_146d21bf6:
  if (bVar1) {
    if (this->bSelectionSupportsNanite == false) {
      local_20 = &FalseTextValue;
    }
    else {
      local_20 = &TrueTextValue;
    }
    FText::FText(__return_storage_ptr__,local_20);
  }
  else {
    pFVar4 = FText::GetEmpty();
    FText::FText(__return_storage_ptr__,pFVar4);
  }
  return __return_storage_ptr__;
}

// GetSelectedPrimitiveType @ 146d21c80

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FText * __thiscall
SPrimitiveDebuggerDetailView::GetSelectedPrimitiveType
          (SPrimitiveDebuggerDetailView *this,FText *__return_storage_ptr__)

{
  bool bVar1;
  int iVar2;
  FWeakReferencer<1> *pFVar3;
  FText *pFVar4;
  
  if ((this->PrimitiveDebugger).Object != (SDrawPrimitiveDebugger *)0x0) {
    pFVar3 = &(this->PrimitiveDebugger).WeakReferenceCount;
    if (pFVar3->ReferenceController == (TReferenceControllerBase<1> *)0x0) {
LAB_146d21cda:
      bVar1 = false;
    }
    else {
      iVar2 = SharedPointerInternals::TReferenceControllerBase<1>::GetSharedReferenceCount
                        (pFVar3->ReferenceController);
      if (iVar2 < 1) goto LAB_146d21cda;
      bVar1 = true;
    }
    if (bVar1) {
      bVar1 = true;
      goto LAB_146d21d06;
    }
  }
  bVar1 = false;
LAB_146d21d06:
  if (bVar1) {
    FText::FText(__return_storage_ptr__,&this->SelectedPrimitiveType);
  }
  else {
    pFVar4 = FText::GetEmpty();
    FText::FText(__return_storage_ptr__,pFVar4);
  }
  return __return_storage_ptr__;
}

// GetSelectedTriangleCount @ 146d21d60

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FText * __thiscall
SPrimitiveDebuggerDetailView::GetSelectedTriangleCount
          (SPrimitiveDebuggerDetailView *this,FText *__return_storage_ptr__)

{
  FString *pFVar1;
  FString local_18;
  
  if (this->CurrentLOD == (FPrimitiveLODStats *)0x0) {
    FText::FText(__return_storage_ptr__,&PlaceholderValue);
  }
  else {
    pFVar1 = ::FString::FromInt(&local_18,this->CurrentLOD->Triangles);
    FText::FromString(__return_storage_ptr__,pFVar1);
    ::FString::~FString(&local_18);
  }
  return __return_storage_ptr__;
}

// HandleForceLOD @ 146d22e30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
SPrimitiveDebuggerDetailView::HandleForceLOD(SPrimitiveDebuggerDetailView *this,int param_1)

{
  bool bVar1;
  int iVar2;
  FWeakReferencer<1> *pFVar3;
  SDrawPrimitiveDebugger *pSVar4;
  FPrimitiveComponentId local_50;
  TSharedPtr<SDrawPrimitiveDebugger,1> local_20 [2];
  
  if ((this->PrimitiveDebugger).Object != (SDrawPrimitiveDebugger *)0x0) {
    pFVar3 = &(this->PrimitiveDebugger).WeakReferenceCount;
    if ((pFVar3->ReferenceController == (TReferenceControllerBase<1> *)0x0) ||
       (iVar2 = SharedPointerInternals::TReferenceControllerBase<1>::GetSharedReferenceCount
                          (pFVar3->ReferenceController), iVar2 < 1)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      bVar1 = true;
      goto LAB_146d22eb8;
    }
  }
  bVar1 = false;
LAB_146d22eb8:
  if (bVar1) {
    TSharedPtr<SDrawPrimitiveDebugger,1>::
    TSharedPtr<SDrawPrimitiveDebugger,1><SDrawPrimitiveDebugger>(local_20,&this->PrimitiveDebugger);
    pSVar4 = TSharedPtr<SDrawPrimitiveDebugger,1>::operator->(local_20);
    SDrawPrimitiveDebugger::GetCurrentSelectionId(pSVar4);
    pSVar4 = TSharedPtr<SDrawPrimitiveDebugger,1>::operator->(local_20);
    SDrawPrimitiveDebugger::SetForcedLODForEntry(pSVar4,local_50,param_1 + 1);
    TSharedPtr<SDrawPrimitiveDebugger,1>::~TSharedPtr<SDrawPrimitiveDebugger,1>(local_20);
  }
  return;
}

// IsForceLODIndexSliderEnabled @ 146d23cf0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
SPrimitiveDebuggerDetailView::IsForceLODIndexSliderEnabled(SPrimitiveDebuggerDetailView *this)

{
  bool bVar1;
  SDrawPrimitiveDebugger *pSVar2;
  FPrimitiveComponentId local_44;
  TSharedPtr<SDrawPrimitiveDebugger,1> local_20 [2];
  
  TSharedPtr<SDrawPrimitiveDebugger,1>::TSharedPtr<SDrawPrimitiveDebugger,1><SDrawPrimitiveDebugger>
            (local_20,&this->PrimitiveDebugger);
  pSVar2 = TSharedPtr<SDrawPrimitiveDebugger,1>::operator->(local_20);
  SDrawPrimitiveDebugger::GetCurrentSelectionId(pSVar2);
  pSVar2 = TSharedPtr<SDrawPrimitiveDebugger,1>::operator->(local_20);
  bVar1 = SDrawPrimitiveDebugger::DoesEntryHaveForcedLOD(pSVar2,local_44);
  TSharedPtr<SDrawPrimitiveDebugger,1>::~TSharedPtr<SDrawPrimitiveDebugger,1>(local_20);
  return bVar1;
}

// NaniteDataVisibility @ 146d278e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

EVisibility __thiscall
SPrimitiveDebuggerDetailView::NaniteDataVisibility(SPrimitiveDebuggerDetailView *this)

{
  uchar *in_RDX;
  EVisibility *local_18;
  
  if ((this->bSelectionSupportsNanite == false) ||
     (this->bSelectionIsNaniteEnabledThisFrame == false)) {
    local_18 = &EVisibility::Collapsed;
  }
  else {
    local_18 = &EVisibility::Visible;
  }
  *in_RDX = (local_18->Value).Value;
  return (EVisibility)SUB81(in_RDX,0);
}

// NonNaniteDataVisibility @ 146d27e00

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

EVisibility __thiscall
SPrimitiveDebuggerDetailView::NonNaniteDataVisibility(SPrimitiveDebuggerDetailView *this)

{
  uchar *in_RDX;
  EVisibility *local_18;
  
  if ((this->bSelectionSupportsNanite == false) ||
     (this->bSelectionIsNaniteEnabledThisFrame == false)) {
    local_18 = &EVisibility::Visible;
  }
  else {
    local_18 = &EVisibility::Collapsed;
  }
  *in_RDX = (local_18->Value).Value;
  return (EVisibility)SUB81(in_RDX,0);
}

// OnToggleDebugBones @ 146d2b450

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
SPrimitiveDebuggerDetailView::OnToggleDebugBones
          (SPrimitiveDebuggerDetailView *this,ECheckBoxState param_1)

{
  bool bVar1;
  int iVar2;
  FWeakReferencer<1> *pFVar3;
  SDrawPrimitiveDebugger *pSVar4;
  FPrimitiveComponentId local_50;
  TSharedPtr<SDrawPrimitiveDebugger,1> local_20 [2];
  
  if ((this->PrimitiveDebugger).Object != (SDrawPrimitiveDebugger *)0x0) {
    pFVar3 = &(this->PrimitiveDebugger).WeakReferenceCount;
    if ((pFVar3->ReferenceController == (TReferenceControllerBase<1> *)0x0) ||
       (iVar2 = SharedPointerInternals::TReferenceControllerBase<1>::GetSharedReferenceCount
                          (pFVar3->ReferenceController), iVar2 < 1)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      bVar1 = true;
      goto LAB_146d2b4d8;
    }
  }
  bVar1 = false;
LAB_146d2b4d8:
  if (bVar1) {
    TSharedPtr<SDrawPrimitiveDebugger,1>::
    TSharedPtr<SDrawPrimitiveDebugger,1><SDrawPrimitiveDebugger>(local_20,&this->PrimitiveDebugger);
    pSVar4 = TSharedPtr<SDrawPrimitiveDebugger,1>::operator->(local_20);
    SDrawPrimitiveDebugger::GetCurrentSelectionId(pSVar4);
    if (param_1 != Undetermined) {
      pSVar4 = TSharedPtr<SDrawPrimitiveDebugger,1>::operator->(local_20);
      SDrawPrimitiveDebugger::SetShowDebugBonesForEntry(pSVar4,local_50,param_1 == Checked);
    }
    TSharedPtr<SDrawPrimitiveDebugger,1>::~TSharedPtr<SDrawPrimitiveDebugger,1>(local_20);
  }
  return;
}

// OnToggleDebugBounds @ 146d2b5a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
SPrimitiveDebuggerDetailView::OnToggleDebugBounds
          (SPrimitiveDebuggerDetailView *this,ECheckBoxState param_1)

{
  bool bVar1;
  int iVar2;
  FWeakReferencer<1> *pFVar3;
  SDrawPrimitiveDebugger *pSVar4;
  FPrimitiveComponentId local_50;
  TSharedPtr<SDrawPrimitiveDebugger,1> local_20 [2];
  
  if ((this->PrimitiveDebugger).Object != (SDrawPrimitiveDebugger *)0x0) {
    pFVar3 = &(this->PrimitiveDebugger).WeakReferenceCount;
    if ((pFVar3->ReferenceController == (TReferenceControllerBase<1> *)0x0) ||
       (iVar2 = SharedPointerInternals::TReferenceControllerBase<1>::GetSharedReferenceCount
                          (pFVar3->ReferenceController), iVar2 < 1)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      bVar1 = true;
      goto LAB_146d2b628;
    }
  }
  bVar1 = false;
LAB_146d2b628:
  if (bVar1) {
    TSharedPtr<SDrawPrimitiveDebugger,1>::
    TSharedPtr<SDrawPrimitiveDebugger,1><SDrawPrimitiveDebugger>(local_20,&this->PrimitiveDebugger);
    pSVar4 = TSharedPtr<SDrawPrimitiveDebugger,1>::operator->(local_20);
    SDrawPrimitiveDebugger::GetCurrentSelectionId(pSVar4);
    if (param_1 != Undetermined) {
      pSVar4 = TSharedPtr<SDrawPrimitiveDebugger,1>::operator->(local_20);
      SDrawPrimitiveDebugger::SetShowDebugBoundsForEntry(pSVar4,local_50,param_1 == Checked);
    }
    TSharedPtr<SDrawPrimitiveDebugger,1>::~TSharedPtr<SDrawPrimitiveDebugger,1>(local_20);
  }
  return;
}

// OnToggleForceDisableNanite @ 146d2b6f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
SPrimitiveDebuggerDetailView::OnToggleForceDisableNanite
          (SPrimitiveDebuggerDetailView *this,ECheckBoxState param_1)

{
  bool bVar1;
  int iVar2;
  FWeakReferencer<1> *pFVar3;
  SDrawPrimitiveDebugger *pSVar4;
  FPrimitiveComponentId local_50;
  TSharedPtr<SDrawPrimitiveDebugger,1> local_20 [2];
  
  if ((this->PrimitiveDebugger).Object != (SDrawPrimitiveDebugger *)0x0) {
    pFVar3 = &(this->PrimitiveDebugger).WeakReferenceCount;
    if ((pFVar3->ReferenceController == (TReferenceControllerBase<1> *)0x0) ||
       (iVar2 = SharedPointerInternals::TReferenceControllerBase<1>::GetSharedReferenceCount
                          (pFVar3->ReferenceController), iVar2 < 1)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      bVar1 = true;
      goto LAB_146d2b778;
    }
  }
  bVar1 = false;
LAB_146d2b778:
  if (bVar1) {
    TSharedPtr<SDrawPrimitiveDebugger,1>::
    TSharedPtr<SDrawPrimitiveDebugger,1><SDrawPrimitiveDebugger>(local_20,&this->PrimitiveDebugger);
    pSVar4 = TSharedPtr<SDrawPrimitiveDebugger,1>::operator->(local_20);
    SDrawPrimitiveDebugger::GetCurrentSelectionId(pSVar4);
    if (param_1 != Undetermined) {
      pSVar4 = TSharedPtr<SDrawPrimitiveDebugger,1>::operator->(local_20);
      SDrawPrimitiveDebugger::SetForceDisabledNaniteForEntry(pSVar4,local_50,param_1 == Checked);
    }
    TSharedPtr<SDrawPrimitiveDebugger,1>::~TSharedPtr<SDrawPrimitiveDebugger,1>(local_20);
  }
  return;
}

// OnToggleForceLOD @ 146d2b840

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
SPrimitiveDebuggerDetailView::OnToggleForceLOD
          (SPrimitiveDebuggerDetailView *this,ECheckBoxState param_1)

{
  bool bVar1;
  int iVar2;
  FWeakReferencer<1> *pFVar3;
  FPrimitiveComponentId local_60;
  TSharedPtr<SDrawPrimitiveDebugger,1> local_40;
  TWeakPtr<SDrawPrimitiveDebugger,1> *local_30;
  SDrawPrimitiveDebugger *local_28;
  SDrawPrimitiveDebugger *local_20;
  SDrawPrimitiveDebugger *local_18;
  
  if ((this->PrimitiveDebugger).Object != (SDrawPrimitiveDebugger *)0x0) {
    pFVar3 = &(this->PrimitiveDebugger).WeakReferenceCount;
    if ((pFVar3->ReferenceController == (TReferenceControllerBase<1> *)0x0) ||
       (iVar2 = SharedPointerInternals::TReferenceControllerBase<1>::GetSharedReferenceCount
                          (pFVar3->ReferenceController), iVar2 < 1)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      bVar1 = true;
      goto LAB_146d2b8cb;
    }
  }
  bVar1 = false;
LAB_146d2b8cb:
  if (bVar1) {
    local_30 = &this->PrimitiveDebugger;
    TSharedPtr<SDrawPrimitiveDebugger,1>::
    TSharedPtr<SDrawPrimitiveDebugger,1><SDrawPrimitiveDebugger>(&local_40,local_30);
    local_28 = TSharedPtr<SDrawPrimitiveDebugger,1>::operator->(&local_40);
    SDrawPrimitiveDebugger::GetCurrentSelectionId(local_28);
    if (param_1 == Unchecked) {
      local_20 = TSharedPtr<SDrawPrimitiveDebugger,1>::operator->(&local_40);
      SDrawPrimitiveDebugger::SetForcedLODForEntry(local_20,local_60,0);
    }
    else if (param_1 == Checked) {
      local_18 = TSharedPtr<SDrawPrimitiveDebugger,1>::operator->(&local_40);
      SDrawPrimitiveDebugger::SetForcedLODForEntry(local_18,local_60,this->CurrentLOD->LODIndex + 1)
      ;
    }
    TSharedPtr<SDrawPrimitiveDebugger,1>::~TSharedPtr<SDrawPrimitiveDebugger,1>(&local_40);
  }
  return;
}

// OptionVisibilityForceDisableNanite @ 146d2be60

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

EVisibility __thiscall
SPrimitiveDebuggerDetailView::OptionVisibilityForceDisableNanite(SPrimitiveDebuggerDetailView *this)

{
  bool bVar1;
  uchar *in_RDX;
  EVisibility *local_20;
  
  if (this->bSelectionSupportsNanite != false) {
    bVar1 = FWeakObjectPtr::IsValid(&(this->SelectedAsStaticMesh).WeakPtr);
    if (bVar1) {
      local_20 = &EVisibility::Visible;
      goto LAB_146d2bebb;
    }
  }
  local_20 = &EVisibility::Collapsed;
LAB_146d2bebb:
  *in_RDX = (local_20->Value).Value;
  return (EVisibility)SUB81(in_RDX,0);
}

// OptionVisibilityForceLOD @ 146d2bef0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

EVisibility __thiscall
SPrimitiveDebuggerDetailView::OptionVisibilityForceLOD(SPrimitiveDebuggerDetailView *this)

{
  bool bVar1;
  int *piVar2;
  uchar *in_RDX;
  TOptional<int> local_28;
  EVisibility *local_20;
  
  GetSelectedNumLODsValue(this);
  if (this->bSelectionIsNaniteEnabledThisFrame == false) {
    bVar1 = TOptional<int>::IsSet(&local_28);
    if (bVar1) {
      piVar2 = TOptional<int>::GetValue(&local_28);
      if (1 < *piVar2) {
        local_20 = &EVisibility::Visible;
        goto LAB_146d2bf58;
      }
    }
  }
  local_20 = &EVisibility::Collapsed;
LAB_146d2bf58:
  *in_RDX = (local_20->Value).Value;
  return (EVisibility)SUB81(in_RDX,0);
}

// ReleaseSelection @ 146d2fd30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall SPrimitiveDebuggerDetailView::ReleaseSelection(SPrimitiveDebuggerDetailView *this)

{
  bool bVar1;
  int iVar2;
  FWeakReferencer<1> *pFVar3;
  FPrimitiveInfo *pFVar4;
  FLinearColor_u_0 local_98;
  TWeakPtr<SDrawPrimitiveDebugger,1> *local_88;
  SDrawPrimitiveDebugger *local_80;
  SDrawPrimitiveDebugger *local_78;
  USkinnedMeshComponent *local_70;
  USkinnedMeshComponent *local_68;
  USkinnedMeshComponent *local_60;
  USkinnedMeshComponent *local_58;
  FLinearColor_u_0 *local_50;
  FLinearColor_u_0 *local_48;
  USkinnedMeshComponent *local_40;
  UActorComponent *local_38;
  UActorComponent *local_30;
  TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> local_28;
  TSharedPtr<SDrawPrimitiveDebugger,1> local_18;
  
  if ((this->PrimitiveDebugger).Object != (SDrawPrimitiveDebugger *)0x0) {
    pFVar3 = &(this->PrimitiveDebugger).WeakReferenceCount;
    if ((pFVar3->ReferenceController == (TReferenceControllerBase<1> *)0x0) ||
       (iVar2 = SharedPointerInternals::TReferenceControllerBase<1>::GetSharedReferenceCount
                          (pFVar3->ReferenceController), iVar2 < 1)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      bVar1 = true;
      goto LAB_146d2fdb7;
    }
  }
  bVar1 = false;
LAB_146d2fdb7:
  if (bVar1) {
    local_88 = &this->PrimitiveDebugger;
    TSharedPtr<SDrawPrimitiveDebugger,1>::
    TSharedPtr<SDrawPrimitiveDebugger,1><SDrawPrimitiveDebugger>(&local_18,local_88);
    local_80 = TSharedPtr<SDrawPrimitiveDebugger,1>::operator->(&local_18);
    SDrawPrimitiveDebugger::GetCurrentSelection(local_80,&local_28);
    if ((local_28.Object != (FPrimitiveInfo *)0x0) &&
       (bVar1 = FWeakObjectPtr::IsValid(&(this->SelectedAsSkinnedMesh).WeakPtr), bVar1)) {
      local_78 = TSharedPtr<SDrawPrimitiveDebugger,1>::operator->(&local_18);
      pFVar4 = TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::operator->(&local_28);
      bVar1 = SDrawPrimitiveDebugger::IsEntryShowingDebugBones
                        (local_78,(FPrimitiveComponentId)(pFVar4->ComponentId).PrimIDValue);
      if (bVar1) {
        local_70 = (USkinnedMeshComponent *)
                   FWeakObjectPtr::Get(&(this->SelectedAsSkinnedMesh).WeakPtr);
        local_68 = local_70;
        bVar1 = USkinnedMeshComponent::ShouldDrawDebugSkeleton(local_70);
        if (bVar1) {
          local_60 = (USkinnedMeshComponent *)
                     FWeakObjectPtr::Get(&(this->SelectedAsSkinnedMesh).WeakPtr);
          local_98._s_0.R = FLinearColor::sRGBToLinearTable[FColor::Orange.field0_0x0._s_0.R];
          local_98._s_0.G = FLinearColor::sRGBToLinearTable[FColor::Orange.field0_0x0._s_0.G];
          local_98._s_0.B = FLinearColor::sRGBToLinearTable[FColor::Orange.field0_0x0._s_0.B];
          local_98._s_0.A = (float)FColor::Orange.field0_0x0._3_1_ * __real_3b808081;
          local_50 = &local_98;
          local_58 = local_60;
          local_48 = local_50;
          local_40 = local_60;
          USkinnedMeshComponent::SetDebugDrawColor(local_60,(FLinearColor *)&local_50->_s_0);
          local_38 = (UActorComponent *)FWeakObjectPtr::Get(&(this->SelectedAsSkinnedMesh).WeakPtr);
          local_30 = local_38;
          UActorComponent::MarkRenderStateDirty(local_38);
        }
      }
    }
    TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::
    ~TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>(&local_28);
    TSharedPtr<SDrawPrimitiveDebugger,1>::~TSharedPtr<SDrawPrimitiveDebugger,1>(&local_18);
  }
  return;
}

// ShowDebugBonesState @ 146d330d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

ECheckBoxState __thiscall
SPrimitiveDebuggerDetailView::ShowDebugBonesState(SPrimitiveDebuggerDetailView *this)

{
  bool bVar1;
  int iVar2;
  FWeakReferencer<1> *pFVar3;
  USkinnedMeshComponent *this_00;
  
  if ((this->PrimitiveDebugger).Object != (SDrawPrimitiveDebugger *)0x0) {
    pFVar3 = &(this->PrimitiveDebugger).WeakReferenceCount;
    if ((pFVar3->ReferenceController == (TReferenceControllerBase<1> *)0x0) ||
       (iVar2 = SharedPointerInternals::TReferenceControllerBase<1>::GetSharedReferenceCount
                          (pFVar3->ReferenceController), iVar2 < 1)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      bVar1 = true;
      goto LAB_146d33151;
    }
  }
  bVar1 = false;
LAB_146d33151:
  if ((bVar1) && (bVar1 = FWeakObjectPtr::IsValid(&(this->SelectedAsSkinnedMesh).WeakPtr), bVar1)) {
    this_00 = (USkinnedMeshComponent *)FWeakObjectPtr::Get(&(this->SelectedAsSkinnedMesh).WeakPtr);
    bVar1 = USkinnedMeshComponent::ShouldDrawDebugSkeleton(this_00);
    if (bVar1) {
      return Checked;
    }
  }
  return Unchecked;
}

// ShowDebugBoundsState @ 146d331e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

ECheckBoxState __thiscall
SPrimitiveDebuggerDetailView::ShowDebugBoundsState(SPrimitiveDebuggerDetailView *this)

{
  bool bVar1;
  int iVar2;
  FWeakReferencer<1> *pFVar3;
  SDrawPrimitiveDebugger *pSVar4;
  FPrimitiveComponentId local_4c;
  TSharedPtr<SDrawPrimitiveDebugger,1> local_18;
  
  if ((this->PrimitiveDebugger).Object != (SDrawPrimitiveDebugger *)0x0) {
    pFVar3 = &(this->PrimitiveDebugger).WeakReferenceCount;
    if ((pFVar3->ReferenceController == (TReferenceControllerBase<1> *)0x0) ||
       (iVar2 = SharedPointerInternals::TReferenceControllerBase<1>::GetSharedReferenceCount
                          (pFVar3->ReferenceController), iVar2 < 1)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      bVar1 = true;
      goto LAB_146d33264;
    }
  }
  bVar1 = false;
LAB_146d33264:
  if (bVar1) {
    TSharedPtr<SDrawPrimitiveDebugger,1>::
    TSharedPtr<SDrawPrimitiveDebugger,1><SDrawPrimitiveDebugger>(&local_18,&this->PrimitiveDebugger)
    ;
    pSVar4 = TSharedPtr<SDrawPrimitiveDebugger,1>::operator->(&local_18);
    SDrawPrimitiveDebugger::GetCurrentSelectionId(pSVar4);
    pSVar4 = TSharedPtr<SDrawPrimitiveDebugger,1>::operator->(&local_18);
    bVar1 = SDrawPrimitiveDebugger::IsEntryShowingDebugBounds(pSVar4,local_4c);
    TSharedPtr<SDrawPrimitiveDebugger,1>::~TSharedPtr<SDrawPrimitiveDebugger,1>(&local_18);
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

// SkeletalMeshDataVisibility @ 146d33320

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

EVisibility __thiscall
SPrimitiveDebuggerDetailView::SkeletalMeshDataVisibility(SPrimitiveDebuggerDetailView *this)

{
  bool bVar1;
  int iVar2;
  FWeakReferencer<1> *pFVar3;
  TEnumAsByte<EVisibility::Private> *in_RDX;
  EVisibility *local_20;
  
  if ((this->PrimitiveDebugger).Object != (SDrawPrimitiveDebugger *)0x0) {
    pFVar3 = &(this->PrimitiveDebugger).WeakReferenceCount;
    if (pFVar3->ReferenceController == (TReferenceControllerBase<1> *)0x0) {
LAB_146d3337a:
      bVar1 = false;
    }
    else {
      iVar2 = SharedPointerInternals::TReferenceControllerBase<1>::GetSharedReferenceCount
                        (pFVar3->ReferenceController);
      if (iVar2 < 1) goto LAB_146d3337a;
      bVar1 = true;
    }
    if (bVar1) {
      bVar1 = true;
      goto LAB_146d333a6;
    }
  }
  bVar1 = false;
LAB_146d333a6:
  if (bVar1) {
    bVar1 = FWeakObjectPtr::IsValid(&(this->SelectedAsSkinnedMesh).WeakPtr);
    if (bVar1) {
      local_20 = &EVisibility::Visible;
    }
    else {
      local_20 = &EVisibility::Collapsed;
    }
    in_RDX->Value = (local_20->Value).Value;
  }
  else {
    in_RDX->Value = (uchar)EVisibility::Collapsed.Value.Value;
  }
  return (TEnumAsByte<EVisibility::Private>)(TEnumAsByte<EVisibility::Private>)(uchar)in_RDX;
}

// StaticMeshDataVisibility @ 146d33490

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

EVisibility __thiscall
SPrimitiveDebuggerDetailView::StaticMeshDataVisibility(SPrimitiveDebuggerDetailView *this)

{
  bool bVar1;
  int iVar2;
  FWeakReferencer<1> *pFVar3;
  TEnumAsByte<EVisibility::Private> *in_RDX;
  EVisibility *local_20;
  
  if ((this->PrimitiveDebugger).Object != (SDrawPrimitiveDebugger *)0x0) {
    pFVar3 = &(this->PrimitiveDebugger).WeakReferenceCount;
    if (pFVar3->ReferenceController == (TReferenceControllerBase<1> *)0x0) {
LAB_146d334ea:
      bVar1 = false;
    }
    else {
      iVar2 = SharedPointerInternals::TReferenceControllerBase<1>::GetSharedReferenceCount
                        (pFVar3->ReferenceController);
      if (iVar2 < 1) goto LAB_146d334ea;
      bVar1 = true;
    }
    if (bVar1) {
      bVar1 = true;
      goto LAB_146d33516;
    }
  }
  bVar1 = false;
LAB_146d33516:
  if (bVar1) {
    bVar1 = FWeakObjectPtr::IsValid(&(this->SelectedAsStaticMesh).WeakPtr);
    if (bVar1) {
      local_20 = &EVisibility::Visible;
    }
    else {
      local_20 = &EVisibility::Collapsed;
    }
    in_RDX->Value = (local_20->Value).Value;
  }
  else {
    in_RDX->Value = (uchar)EVisibility::Collapsed.Value.Value;
  }
  return (TEnumAsByte<EVisibility::Private>)(TEnumAsByte<EVisibility::Private>)(uchar)in_RDX;
}

// Tick @ 146d336c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
SPrimitiveDebuggerDetailView::Tick
          (SPrimitiveDebuggerDetailView *this,FGeometry *param_1,double param_2,float param_3)

{
  bool bVar1;
  int iVar2;
  FPrimitiveLODStats *pFVar3;
  FPrimitiveInfo *pFVar4;
  bool local_7c;
  TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> local_70;
  TWeakPtr<SDrawPrimitiveDebugger,1> *local_60;
  FWeakReferencer<1> *local_58;
  IPrimitiveComponent *local_50;
  FPrimitiveSceneProxy *local_48;
  TWeakPtr<SDrawPrimitiveDebugger,1> *local_40;
  SDrawPrimitiveDebugger *local_38;
  FPrimitiveInfo *local_30;
  FPrimitiveInfo *local_28;
  TSharedPtr<SDrawPrimitiveDebugger,1> local_20 [2];
  
  SWidget::Tick((SWidget *)this,param_1,param_2,param_3);
  local_60 = &this->PrimitiveDebugger;
  if (local_60->Object == (SDrawPrimitiveDebugger *)0x0) {
LAB_146d33778:
    bVar1 = false;
  }
  else {
    local_58 = &(this->PrimitiveDebugger).WeakReferenceCount;
    if ((local_58->ReferenceController == (TReferenceControllerBase<1> *)0x0) ||
       (iVar2 = SharedPointerInternals::TReferenceControllerBase<1>::GetSharedReferenceCount
                          (local_58->ReferenceController), iVar2 < 1)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_146d33778;
    bVar1 = true;
  }
  if (!bVar1) {
    return;
  }
  local_40 = &this->PrimitiveDebugger;
  TSharedPtr<SDrawPrimitiveDebugger,1>::TSharedPtr<SDrawPrimitiveDebugger,1><SDrawPrimitiveDebugger>
            (local_20,local_40);
  local_38 = TSharedPtr<SDrawPrimitiveDebugger,1>::operator->(local_20);
  SDrawPrimitiveDebugger::GetCurrentSelection(local_38,&local_70);
  if (local_70.Object != (FPrimitiveInfo *)0x0) {
    local_30 = TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::operator->(&local_70);
    bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)local_30);
    if (bVar1) {
      local_28 = TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::operator->(&local_70);
      pFVar3 = FViewDebugInfo::FPrimitiveInfo::GetCurrentLOD
                         (local_28,this->PlayerIndex,this->ViewIndex);
      this->CurrentLOD = pFVar3;
      this->bSelectionIsNaniteEnabledThisFrame = false;
      if (this->bSelectionSupportsNanite != false) {
        pFVar4 = TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::operator->(&local_70);
        bVar1 = FViewDebugInfo::FPrimitiveInfo::IsPrimitiveValid(pFVar4);
        if (bVar1) {
          pFVar4 = TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::operator->(&local_70);
          local_50 = pFVar4->ComponentInterface;
          local_48 = (FPrimitiveSceneProxy *)(**(code **)((longlong)*local_50 + 0x38))(local_50);
          if ((local_48 == (FPrimitiveSceneProxy *)0x0) ||
             (bVar1 = FPrimitiveSceneProxy::IsNaniteMesh(local_48), !bVar1)) {
            local_7c = false;
          }
          else {
            local_7c = true;
          }
          this->bSelectionIsNaniteEnabledThisFrame = local_7c;
        }
      }
      goto LAB_146d3395f;
    }
  }
  this->CurrentLOD = (FPrimitiveLODStats *)0x0;
  this->bSelectionIsNaniteEnabledThisFrame = false;
LAB_146d3395f:
  TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::
  ~TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>(&local_70);
  TSharedPtr<SDrawPrimitiveDebugger,1>::~TSharedPtr<SDrawPrimitiveDebugger,1>(local_20);
  return;
}

// UpdateSelection @ 146d343a0

/* WARNING: Removing unreachable block (ram,0x000146d344b3) */
/* WARNING: Removing unreachable block (ram,0x000146d34573) */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall SPrimitiveDebuggerDetailView::UpdateSelection(SPrimitiveDebuggerDetailView *this)

{
  bool bVar1;
  int iVar2;
  UObject *pUVar3;
  FObjectPtr FVar4;
  FPrimitiveLODStats *pFVar5;
  FString *pFVar6;
  FText *pFVar7;
  FPrimitiveInfo *pFVar8;
  TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> local_370;
  undefined4 local_360;
  undefined4 local_35c;
  int local_358;
  int local_354;
  uint local_350;
  FWeakObjectPtr *local_348;
  FWeakObjectPtr *local_340;
  UStaticMeshComponent *local_338;
  UObject *local_330;
  USkinnedMeshComponent *local_328;
  FObjectPtr_u_0 *local_320;
  FObjectPtr_u_0 *local_318;
  TWeakPtr<SDrawPrimitiveDebugger,1> *local_310;
  FWeakReferencer<1> *local_308;
  IPrimitiveComponent *local_300;
  FObjectPtr_u_0 local_2f8;
  FObjectPtr_u_0 local_2f0;
  IPrimitiveComponent *local_2e8;
  FPrimitiveSceneProxy *local_2e0;
  FLinearColor_u_0 local_2d8;
  FWeakObjectPtr local_2c8;
  FObjectPtr_u_0 *local_2c0;
  FObjectPtr *local_2b8;
  FWeakObjectPtr local_2b0;
  TWeakPtr<SDrawPrimitiveDebugger,1> *local_2a8;
  SDrawPrimitiveDebugger *local_2a0;
  FPrimitiveInfo *local_298;
  FPrimitiveInfo *local_290;
  FPrimitiveInfo *local_288;
  FPrimitiveInfo *local_280;
  UObject *local_278;
  UObject *local_270;
  UObject *local_268;
  FPrimitiveInfo *local_260;
  UObject *local_258;
  UObject *local_250;
  UClass *local_248;
  UClass *local_240;
  FName local_238;
  FName *local_230;
  FPrimitiveInfo *local_228;
  UObject *local_220;
  UObject *local_218;
  UClass *local_210;
  UClass *local_208;
  UClass *local_200;
  UStaticMeshComponent *local_1f8;
  FObjectPtr_u_0 local_1f0;
  FWeakObjectPtr *local_1e8;
  USkinnedMeshComponent *local_1e0;
  FObjectPtr_u_0 local_1d8;
  FWeakObjectPtr *local_1d0;
  UClass *local_1c8;
  FName local_1c0;
  FName *local_1b8;
  UStaticMeshComponent *local_1b0;
  UStaticMeshComponent *local_1a8;
  UStaticMeshComponent *local_1a0;
  TObjectPtr<UStaticMesh>_u_0 local_198;
  UStaticMesh *local_190;
  UStaticMesh *local_188;
  UStaticMesh *local_180;
  UStaticMesh *local_178;
  SDrawPrimitiveDebugger *local_170;
  USkinnedMeshComponent *local_168;
  USkinnedMeshComponent *local_160;
  USkinnedMeshComponent *local_158;
  USkinnedMeshComponent *local_150;
  FObjectPtr_u_0 *local_148;
  FLinearColor_u_0 *local_140;
  USkinnedMeshComponent *local_138;
  UActorComponent *local_130;
  UActorComponent *local_128;
  FObjectPtr *local_120;
  FLinearColor_u_0 *local_118;
  TSharedPtr<SDrawPrimitiveDebugger,1> local_110;
  FString local_100;
  FString local_f0;
  FObjectPtr local_e0;
  undefined1 local_d8 [8];
  undefined1 local_d0 [16];
  FObjectPtr_u_0 local_c0;
  FObjectPtr local_b8;
  FObjectPtr_u_0 local_b0;
  FText local_a8;
  FString local_98;
  FText local_88;
  FString local_78;
  FText local_68;
  FText local_58;
  FString local_48;
  FText local_38;
  TSharedRef<SVerticalBox,1> local_28;
  TSharedRef<SVerticalBox,1> local_18;
  
  this->CurrentLOD = (FPrimitiveLODStats *)0x0;
  FText::operator=(&this->SelectedActorName,&PlaceholderValue);
  FText::operator=(&this->SelectedActorPath,&PlaceholderValue);
  FText::operator=(&this->SelectedActorClassName,&PlaceholderValue);
  FText::operator=(&this->SelectedActorClassPath,&PlaceholderValue);
  FText::operator=(&this->SelectedPrimitiveType,&PlaceholderValue);
  this->bSelectionSupportsNanite = false;
  this->SelectedComponentType = (UClass *)0x0;
  local_348 = &local_2c8;
  local_320 = &local_c0;
  pUVar3 = UE::CoreUObject::Private::MakeObjectHandle((UObject *)0x0);
  local_320->Handle = pUVar3;
  local_148 = local_320;
  local_348->ObjectIndex = 0;
  local_348->ObjectSerialNumber = 0;
  local_120 = &local_b8;
  FVar4.field0_0x0 = (FObjectPtr_u_0)FObjectPtr::FObjectPtr(local_120,(FObjectPtr *)local_148);
  FWeakObjectPtr::operator=(local_348,FVar4);
  (this->SelectedAsStaticMesh).WeakPtr = local_2c8;
  local_340 = &local_2b0;
  local_318 = &local_b0;
  pUVar3 = UE::CoreUObject::Private::MakeObjectHandle((UObject *)0x0);
  local_318->Handle = pUVar3;
  local_2c0 = local_318;
  local_340->ObjectIndex = 0;
  local_340->ObjectSerialNumber = 0;
  local_2b8 = &local_e0;
  FVar4.field0_0x0 = (FObjectPtr_u_0)FObjectPtr::FObjectPtr(local_2b8,(FObjectPtr *)local_2c0);
  FWeakObjectPtr::operator=(local_340,FVar4);
  (this->SelectedAsSkinnedMesh).WeakPtr = local_2b0;
  local_310 = &this->PrimitiveDebugger;
  if (local_310->Object != (SDrawPrimitiveDebugger *)0x0) {
    local_308 = &(this->PrimitiveDebugger).WeakReferenceCount;
    if ((local_308->ReferenceController == (TReferenceControllerBase<1> *)0x0) ||
       (iVar2 = SharedPointerInternals::TReferenceControllerBase<1>::GetSharedReferenceCount
                          (local_308->ReferenceController), iVar2 < 1)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      local_360 = 1;
      goto LAB_146d3467c;
    }
  }
  local_360 = 0;
LAB_146d3467c:
  if ((char)local_360 != '\0') {
    local_2a8 = &this->PrimitiveDebugger;
    TSharedPtr<SDrawPrimitiveDebugger,1>::
    TSharedPtr<SDrawPrimitiveDebugger,1><SDrawPrimitiveDebugger>(&local_110,local_2a8);
    local_2a0 = TSharedPtr<SDrawPrimitiveDebugger,1>::operator->(&local_110);
    SDrawPrimitiveDebugger::GetCurrentSelection(local_2a0,&local_370);
    if (local_370.Object != (FPrimitiveInfo *)0x0) {
      local_298 = TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::operator->(&local_370);
      bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)local_298);
      if (bVar1) {
        local_290 = TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::operator->(&local_370);
        local_358 = this->ViewIndex;
        local_354 = this->PlayerIndex;
        pFVar5 = FViewDebugInfo::FPrimitiveInfo::GetCurrentLOD(local_290,local_354,local_358);
        this->CurrentLOD = pFVar5;
        local_288 = TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::operator->(&local_370);
        pFVar6 = FViewDebugInfo::FPrimitiveInfo::GetOwnerName(local_288,&local_98);
        pFVar7 = FText::FromString(&local_a8,pFVar6);
        FText::operator=(&this->SelectedActorName,pFVar7);
        FText::~FText(&local_a8);
        ::FString::~FString(&local_98);
        local_280 = TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::operator->(&local_370);
        local_278 = FWeakObjectPtr::Get((FWeakObjectPtr *)local_280);
        local_270 = local_278;
        local_268 = local_278;
        pFVar6 = UObjectBaseUtility::GetPathName
                           ((UObjectBaseUtility *)local_278,&local_78,(UObject *)0x0);
        pFVar7 = FText::FromString(&local_88,pFVar6);
        FText::operator=(&this->SelectedActorPath,pFVar7);
        FText::~FText(&local_88);
        ::FString::~FString(&local_78);
        local_260 = TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::operator->(&local_370);
        local_258 = FWeakObjectPtr::Get((FWeakObjectPtr *)local_260);
        local_250 = local_258;
        local_248 = ObjectPtr_Private::TNonAccessTrackedObjectPtr<UClass>::operator_UClass__
                              ((TNonAccessTrackedObjectPtr<UClass> *)&local_258->field_0x10);
        local_238 = (FName)local_248->_padding_;
        local_230 = &local_238;
        local_240 = local_248;
        ::FName::ToString(local_230,&local_100);
        pFVar7 = FText::FromString(&local_68,&local_100);
        FText::operator=(&this->SelectedActorClassName,pFVar7);
        FText::~FText(&local_68);
        ::FString::~FString(&local_100);
        local_228 = TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::operator->(&local_370);
        local_220 = FWeakObjectPtr::Get((FWeakObjectPtr *)local_228);
        local_218 = local_220;
        local_210 = ObjectPtr_Private::TNonAccessTrackedObjectPtr<UClass>::operator_UClass__
                              ((TNonAccessTrackedObjectPtr<UClass> *)&local_220->field_0x10);
        local_208 = local_210;
        pFVar6 = UObjectBaseUtility::GetPathName
                           ((UObjectBaseUtility *)local_210,&local_48,(UObject *)0x0);
        pFVar7 = FText::FromString(&local_58,pFVar6);
        FText::operator=(&this->SelectedActorClassPath,pFVar7);
        FText::~FText(&local_58);
        ::FString::~FString(&local_48);
        pFVar8 = TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::operator->(&local_370);
        bVar1 = FViewDebugInfo::FPrimitiveInfo::IsPrimitiveValid(pFVar8);
        if (bVar1) {
          pFVar8 = TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::operator->(&local_370);
          local_300 = pFVar8->ComponentInterface;
          local_330 = (UObject *)(**(code **)((longlong)*local_300 + 0x98))(local_300);
          local_200 = ObjectPtr_Private::TNonAccessTrackedObjectPtr<UClass>::operator_UClass__
                                ((TNonAccessTrackedObjectPtr<UClass> *)&local_330->field_0x10);
          this->SelectedComponentType = local_200;
          local_338 = Cast<UStaticMeshComponent,UObject>(local_330);
          local_1e8 = &(this->SelectedAsStaticMesh).WeakPtr;
          local_2f8.Handle = (UObject *)local_d8;
          local_1f8 = local_338;
          pUVar3 = UE::CoreUObject::Private::MakeObjectHandle((UObject *)local_338);
          *(UObject **)local_2f8.Handle = pUVar3;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (local_338 != (UStaticMeshComponent *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)local_338);
          }
          local_1f0.Handle = local_2f8.Handle;
          FWeakObjectPtr::operator=(local_1e8,(FObjectPtr)local_2f8);
          local_328 = Cast<USkinnedMeshComponent,UObject>(local_330);
          local_1d0 = &(this->SelectedAsSkinnedMesh).WeakPtr;
          local_2f0.Handle = (UObject *)local_d0;
          local_1e0 = local_328;
          pUVar3 = UE::CoreUObject::Private::MakeObjectHandle((UObject *)local_328);
          *(UObject **)local_2f0.Handle = pUVar3;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (local_328 != (USkinnedMeshComponent *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)local_328);
          }
          local_1d8.Handle = local_2f0.Handle;
          FWeakObjectPtr::operator=(local_1d0,(FObjectPtr)local_2f0);
          local_1c8 = this->SelectedComponentType;
          local_1c0 = (FName)local_1c8->_padding_;
          local_1b8 = &local_1c0;
          ::FName::ToString(local_1b8,&local_f0);
          pFVar7 = FText::FromString(&local_38,&local_f0);
          FText::operator=(&this->SelectedPrimitiveType,pFVar7);
          FText::~FText(&local_38);
          ::FString::~FString(&local_f0);
          bVar1 = FWeakObjectPtr::IsValid(&(this->SelectedAsStaticMesh).WeakPtr);
          if (bVar1) {
            local_1b0 = (UStaticMeshComponent *)
                        FWeakObjectPtr::Get(&(this->SelectedAsStaticMesh).WeakPtr);
            local_1a8 = local_1b0;
            local_1a0 = local_1b0;
            local_198.ObjectPtr.field0_0x0 =
                 (FObjectPtr)UStaticMeshComponent::GetStaticMesh(local_1b0);
            local_190 = (UStaticMesh *)
                        UE::CoreUObject::Private::ResolveObjectHandle((UObject **)local_198);
            local_188 = local_190;
            local_180 = local_190;
            local_178 = local_190;
            bVar1 = UStaticMesh::HasValidNaniteData(local_190);
            this->bSelectionSupportsNanite = bVar1;
          }
          bVar1 = FWeakObjectPtr::IsValid(&(this->SelectedAsSkinnedMesh).WeakPtr);
          if (bVar1) {
            local_170 = TSharedPtr<SDrawPrimitiveDebugger,1>::operator->(&local_110);
            pFVar8 = TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::operator->(&local_370);
            local_350 = (pFVar8->ComponentId).PrimIDValue;
            bVar1 = SDrawPrimitiveDebugger::IsEntryShowingDebugBones
                              (local_170,(FPrimitiveComponentId)local_350);
            if (bVar1) {
              local_168 = (USkinnedMeshComponent *)
                          FWeakObjectPtr::Get(&(this->SelectedAsSkinnedMesh).WeakPtr);
              local_160 = local_168;
              bVar1 = USkinnedMeshComponent::ShouldDrawDebugSkeleton(local_168);
              if (bVar1) {
                local_158 = (USkinnedMeshComponent *)
                            FWeakObjectPtr::Get(&(this->SelectedAsSkinnedMesh).WeakPtr);
                local_2d8._s_0.R = FLinearColor::sRGBToLinearTable[FColor::Yellow.field0_0x0._s_0.R]
                ;
                local_2d8._s_0.G = FLinearColor::sRGBToLinearTable[FColor::Yellow.field0_0x0._s_0.G]
                ;
                local_2d8._s_0.B = FLinearColor::sRGBToLinearTable[FColor::Yellow.field0_0x0._s_0.B]
                ;
                local_2d8._s_0.A = (float)FColor::Yellow.field0_0x0._3_1_ * __real_3b808081;
                local_140 = &local_2d8;
                local_150 = local_158;
                local_138 = local_158;
                local_118 = local_140;
                USkinnedMeshComponent::SetDebugDrawColor(local_158,(FLinearColor *)&local_140->_s_0)
                ;
                local_130 = (UActorComponent *)
                            FWeakObjectPtr::Get(&(this->SelectedAsSkinnedMesh).WeakPtr);
                local_128 = local_130;
                UActorComponent::MarkRenderStateDirty(local_130);
              }
            }
          }
          pFVar8 = TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::operator->(&local_370);
          local_2e8 = pFVar8->ComponentInterface;
          local_2e0 = (FPrimitiveSceneProxy *)(**(code **)((longlong)*local_2e8 + 0x38))(local_2e8);
          if ((local_2e0 == (FPrimitiveSceneProxy *)0x0) ||
             (bVar1 = FPrimitiveSceneProxy::IsNaniteMesh(local_2e0), !bVar1)) {
            local_35c = 0;
          }
          else {
            local_35c = 1;
          }
          this->bSelectionIsNaniteEnabledThisFrame = local_35c._0_1_;
        }
      }
    }
    TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::
    ~TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>(&local_370);
    TSharedPtr<SDrawPrimitiveDebugger,1>::~TSharedPtr<SDrawPrimitiveDebugger,1>(&local_110);
  }
  GetSelectedMaterialsWidget(this,&local_28);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_28.SharedReferenceCount);
  GetAdvancedOptionsWidget(this,&local_18);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_18.SharedReferenceCount);
  return;
}

