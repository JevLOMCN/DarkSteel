// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 6

// ~SDynamicBrushTest @ 143062060

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SDynamicBrushTest::~SDynamicBrushTest(SDynamicBrushTest *this)

{
  FReply local_c8;
  
  this->_padding_ = (longlong)&___7SDynamicBrushTest__6B_;
  Reset(this,&local_c8);
  FReply::~FReply(&local_c8);
  FText::~FText(&this->FilenameText);
  TSharedPtr<FSlateDynamicImageBrush,1>::~TSharedPtr<FSlateDynamicImageBrush,1>(&this->DynamicBrush)
  ;
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  return;
}

// Construct @ 14307aa60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SDynamicBrushTest::Construct(SDynamicBrushTest *this,FArguments *param_1)

{
  FSlotArguments *pFVar1;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> *this_00;
  TSharedRef<SImage,1> *pTVar2;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> *this_01;
  TSharedRef<SBox,1> *pTVar3;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> *this_02;
  TSharedRef<SBorder,1> *pTVar4;
  FSlotArguments *pFVar5;
  FText *pFVar6;
  TSlateDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs> *this_03;
  TSharedRef<SEditableTextBox,1> *pTVar7;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> *this_04;
  TSharedRef<SButton,1> *pTVar8;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> *this_05;
  TSharedRef<SHorizontalBox,1> *pTVar9;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> *this_06;
  TSharedRef<SVerticalBox,1> *pTVar10;
  longlong lVar11;
  code **ppcVar12;
  undefined1 *puVar13;
  pmf_68ebf1d3 *ppVar14;
  pmf_2283987e *ppVar15;
  pmf_63de492c *ppVar16;
  pmf_161fd224 *ppVar17;
  T0RequiredArgs local_22c8;
  T0RequiredArgs local_22c7;
  T0RequiredArgs local_22c6;
  T0RequiredArgs local_22c5;
  T0RequiredArgs local_22c4;
  T0RequiredArgs local_22c3;
  T0RequiredArgs local_22c2 [2];
  float local_22c0;
  int local_22bc [2];
  float local_22b4;
  float local_22b0 [2];
  TAttribute<float> *local_22a8;
  TAttribute<float> *local_22a0;
  FSlotArguments *local_2298;
  undefined1 *local_2290;
  undefined1 *local_2288;
  TAttribute<FOptionalSize> *local_2280;
  TAttribute<FOptionalSize> *local_2278;
  FArguments *local_2270;
  TAttribute<FOptionalSize> *local_2268;
  TAttribute<FOptionalSize> *local_2260;
  FArguments *local_2258;
  FArguments *local_2250;
  FArguments *local_2248;
  FArguments *local_2240;
  FArguments *local_2238;
  FArguments *local_2230;
  FArguments *local_2228;
  FSlotArguments *local_2220;
  FSlotArguments *local_2218;
  FArguments *local_2210;
  TAttribute<float> *local_2208;
  TAttribute<float> *local_2200;
  FSlotArguments *local_21f8;
  undefined1 *local_21f0;
  FArguments *local_21e8;
  TAttribute<FText> *local_21e0;
  TAttribute<FText> *local_21d8;
  FArguments *local_21d0;
  FArguments *local_21c8;
  FArguments *local_21c0;
  FSlotArguments *local_21b8;
  FSlotArguments *local_21b0;
  FArguments *local_21a8;
  undefined1 *local_21a0;
  undefined1 *local_2198;
  TAttribute<FMargin> *local_2190;
  TAttribute<FMargin> *local_2188;
  FArguments *local_2180;
  TAttribute<FText> *local_2178;
  TAttribute<FText> *local_2170;
  FArguments *local_2168;
  FArguments *local_2160;
  FArguments *local_2158;
  FSlotArguments *local_2150;
  FSlotArguments *local_2148;
  FArguments *local_2140;
  FArguments *local_2138;
  FSlotArguments *local_2130;
  FSlotArguments *local_2128;
  FArguments *local_2120;
  FArguments *local_2118;
  TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *local_2110;
  code *local_2108;
  undefined4 local_2100;
  code *local_20f8;
  undefined4 local_20f0;
  code *local_20e8;
  undefined4 local_20e0;
  code *local_20d8;
  undefined4 local_20d0;
  TSharedRef<SWidget,1> local_20c8;
  TSharedRef<SWidget,1> local_20b8;
  TSharedRef<SWidget,1> local_20a8;
  TSharedRef<SWidget,1> local_2098;
  TSharedRef<SWidget,1> local_2088;
  TSharedRef<SWidget,1> local_2078;
  TSharedRef<SWidget,1> local_2068;
  undefined1 local_2058 [16];
  pmf_68ebf1d3 local_2048;
  undefined1 local_2038 [16];
  pmf_2283987e local_2028;
  undefined1 local_2018 [16];
  pmf_63de492c local_2008;
  undefined1 local_1ff8 [16];
  pmf_161fd224 local_1fe8;
  TSharedRef<SVerticalBox,1> local_1fd8;
  TSharedRef<SHorizontalBox,1> local_1fc8;
  TSharedRef<SButton,1> local_1fb8;
  FText local_1fa8;
  TSharedRef<SEditableTextBox,1> local_1f98;
  FText local_1f88;
  TSharedRef<SBorder,1> local_1f78;
  TSharedRef<SBox,1> local_1f68;
  TSharedRef<SImage,1> local_1f58;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_1f48;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_1f30;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_1f18;
  TSlateDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs> local_1f00;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_1ee8;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_1ed0;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_1eb8;
  TAttribute<float> local_1ea0;
  TAttribute<FOptionalSize> local_1e80;
  TAttribute<FOptionalSize> local_1e60;
  TAttribute<float> local_1e40;
  TAttribute<FText> local_1e20;
  TAttribute<FMargin> local_1df0;
  TAttribute<FText> local_1dc0;
  FSlotArguments local_1d90;
  FSlotArguments local_1ca8;
  FSlotArguments local_1bc0;
  FSlotArguments local_1ad8;
  FArguments local_19f0;
  FArguments local_17e8;
  FArguments local_15e0;
  FArguments local_1338;
  FArguments local_ff8;
  FArguments local_c18;
  FArguments local_6d8;
  undefined8 uStack_18;
  
  uStack_18 = 0x14307aa76;
  local_2110 = (TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *)
               &this->_padding_;
  local_2210 = SVerticalBox::FArguments::FArguments(&local_17e8);
  local_2298 = SVerticalBox::Slot(&local_1ad8);
  local_22a8 = &local_1ea0;
  local_22c0 = __real_3f800000;
  local_22a0 = TAttribute<float>::TAttribute<float>(local_22a8,&local_22c0);
  pFVar1 = SVerticalBox::FSlot::FSlotArguments::FillHeight(local_2298,local_22a0);
  local_2290 = &pFVar1->field_0x48;
  pFVar1 = TAlignmentWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::HAlign
                     ((FSlotArgumentsMixin *)local_2290,HAlign_Left);
  local_2288 = &pFVar1->field_0x48;
  local_2220 = TAlignmentWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::VAlign
                         ((FSlotArgumentsMixin *)local_2288,VAlign_Top);
  local_2230 = SBorder::FArguments::FArguments(&local_ff8);
  local_2270 = SBox::FArguments::FArguments(&local_1338);
  local_2280 = &local_1e80;
  local_22bc[0] = 0x80;
  local_2278 = TAttribute<FOptionalSize>::TAttribute<FOptionalSize><int>(local_2280,local_22bc);
  local_2258 = SBox::FArguments::WidthOverride(local_2270,local_2278);
  local_2268 = &local_1e60;
  local_22bc[1] = 0x80;
  local_2260 = TAttribute<FOptionalSize>::TAttribute<FOptionalSize><int>(local_2268,local_22bc + 1);
  local_2240 = SBox::FArguments::HeightOverride(local_2258,local_2260);
  local_2250 = SImage::FArguments::FArguments(&local_15e0);
  local_2108 = GetImage;
  local_2100 = 0;
  ppcVar12 = &local_2108;
  puVar13 = local_2058;
  for (lVar11 = 0x10; lVar11 != 0; lVar11 = lVar11 + -1) {
    *puVar13 = *(undefined1 *)ppcVar12;
    ppcVar12 = (code **)((longlong)ppcVar12 + 1);
    puVar13 = puVar13 + 1;
  }
  puVar13 = local_2058;
  ppVar14 = &local_2048;
  for (lVar11 = 0x10; lVar11 != 0; lVar11 = lVar11 + -1) {
    *(undefined1 *)ppVar14 = *puVar13;
    puVar13 = puVar13 + 1;
    ppVar14 = (pmf_68ebf1d3 *)&ppVar14->field_0x1;
  }
  local_2248 = SImage::FArguments::Image<SDynamicBrushTest>(local_2250,this,&local_2048);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_22c8);
  this_00 = MakeTDecl<SImage,RequiredArgs::T0RequiredArgs>
                      (&local_1eb8,"SImage",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0x18a,&local_22c8);
  pTVar2 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                     (this_00,&local_1f58,local_2248);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SImage>(&local_2068,pTVar2);
  local_2238 = SBox::FArguments::operator[](local_2240,&local_2068);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_22c7);
  this_01 = MakeTDecl<SBox,RequiredArgs::T0RequiredArgs>
                      (&local_1ed0,"SBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0x186,&local_22c7);
  pTVar3 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                     (this_01,&local_1f68,local_2238);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SBox>(&local_2078,pTVar3);
  local_2228 = SBorder::FArguments::operator[](local_2230,&local_2078);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_22c6);
  this_02 = MakeTDecl<SBorder,RequiredArgs::T0RequiredArgs>
                      (&local_1ee8,"SBorder",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0x184,&local_22c6);
  pTVar4 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                     (this_02,&local_1f78,local_2228);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SBorder>(&local_2088,pTVar4);
  local_2218 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_2220,&local_2088);
  local_2120 = SVerticalBox::FArguments::operator+(local_2210,local_2218);
  local_21f8 = SVerticalBox::Slot(&local_1bc0);
  local_2208 = &local_1e40;
  local_22b4 = __real_3e4ccccd;
  local_2200 = TAttribute<float>::TAttribute<float>(local_2208,&local_22b4);
  pFVar1 = SVerticalBox::FSlot::FSlotArguments::FillHeight(local_21f8,local_2200);
  local_21f0 = &pFVar1->field_0x48;
  local_2130 = TAlignmentWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::HAlign
                         ((FSlotArgumentsMixin *)local_21f0,HAlign_Left);
  local_21a8 = SHorizontalBox::FArguments::FArguments(&local_19f0);
  pFVar5 = SHorizontalBox::Slot(&local_1ca8);
  local_21b8 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar5);
  local_21e8 = SEditableTextBox::FArguments::FArguments(&local_6d8);
  local_20f8 = GetFilenameText;
  local_20f0 = 0;
  ppcVar12 = &local_20f8;
  puVar13 = local_2038;
  for (lVar11 = 0x10; lVar11 != 0; lVar11 = lVar11 + -1) {
    *puVar13 = *(undefined1 *)ppcVar12;
    ppcVar12 = (code **)((longlong)ppcVar12 + 1);
    puVar13 = puVar13 + 1;
  }
  puVar13 = local_2038;
  ppVar15 = &local_2028;
  for (lVar11 = 0x10; lVar11 != 0; lVar11 = lVar11 + -1) {
    *(undefined1 *)ppVar15 = *puVar13;
    puVar13 = puVar13 + 1;
    ppVar15 = (pmf_2283987e *)&ppVar15->field_0x1;
  }
  local_21d0 = SEditableTextBox::FArguments::Text<SDynamicBrushTest>(local_21e8,this,&local_2028);
  local_21e0 = &local_1e20;
  pFVar6 = FText::AsLocalizable_Advanced_LocText
                     (&local_1f88,L"STestSuite",L"DynamicBrushTestLabel",
                      L"Type in full path to an image (png)");
  local_21d8 = TAttribute<FText>::TAttribute<FText>(local_21e0,pFVar6);
  local_21c8 = SEditableTextBox::FArguments::HintText(local_21d0,local_21d8);
  local_20e8 = LoadImage;
  local_20e0 = 0;
  ppcVar12 = &local_20e8;
  puVar13 = local_2018;
  for (lVar11 = 0x10; lVar11 != 0; lVar11 = lVar11 + -1) {
    *puVar13 = *(undefined1 *)ppcVar12;
    ppcVar12 = (code **)((longlong)ppcVar12 + 1);
    puVar13 = puVar13 + 1;
  }
  puVar13 = local_2018;
  ppVar16 = &local_2008;
  for (lVar11 = 0x10; lVar11 != 0; lVar11 = lVar11 + -1) {
    *(undefined1 *)ppVar16 = *puVar13;
    puVar13 = puVar13 + 1;
    ppVar16 = (pmf_63de492c *)&ppVar16->field_0x1;
  }
  local_21c0 = SEditableTextBox::FArguments::OnTextCommitted<SDynamicBrushTest>
                         (local_21c8,this,&local_2008);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_22c5);
  this_03 = MakeTDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs>
                      (&local_1f00,"SEditableTextBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0x197,&local_22c5);
  pTVar7 = TSlateDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs>::operator<<=
                     (this_03,&local_1f98,local_21c0);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SEditableTextBox>(&local_2098,pTVar7);
  local_21b0 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_21b8,&local_2098);
  local_2140 = SHorizontalBox::FArguments::operator+(local_21a8,local_21b0);
  pFVar5 = SHorizontalBox::Slot(&local_1d90);
  pFVar5 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar5);
  local_21a0 = &pFVar5->field_0x18;
  pFVar5 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                     ((FSlotArgumentsMixin *)local_21a0,__real_40000000);
  local_2198 = &pFVar5->field_0x48;
  local_2150 = TAlignmentWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::VAlign
                         ((FSlotArgumentsMixin *)local_2198,VAlign_Center);
  local_2180 = SButton::FArguments::FArguments(&local_c18);
  local_2190 = &local_1df0;
  local_22b0[0] = __real_3f800000;
  local_2188 = TAttribute<FMargin>::TAttribute<FMargin><float>(local_2190,local_22b0);
  local_2168 = SButton::FArguments::ContentPadding(local_2180,local_2188);
  local_2178 = &local_1dc0;
  pFVar6 = FText::AsLocalizable_Advanced_LocText(&local_1fa8,L"STestSuite",L"ResetLabel",L"Reset");
  local_2170 = TAttribute<FText>::TAttribute<FText>(local_2178,pFVar6);
  local_2160 = SButton::FArguments::Text(local_2168,local_2170);
  local_20d8 = Reset;
  local_20d0 = 0;
  ppcVar12 = &local_20d8;
  puVar13 = local_1ff8;
  for (lVar11 = 0x10; lVar11 != 0; lVar11 = lVar11 + -1) {
    *puVar13 = *(undefined1 *)ppcVar12;
    ppcVar12 = (code **)((longlong)ppcVar12 + 1);
    puVar13 = puVar13 + 1;
  }
  puVar13 = local_1ff8;
  ppVar17 = &local_1fe8;
  for (lVar11 = 0x10; lVar11 != 0; lVar11 = lVar11 + -1) {
    *(undefined1 *)ppVar17 = *puVar13;
    puVar13 = puVar13 + 1;
    ppVar17 = (pmf_161fd224 *)&ppVar17->field_0x1;
  }
  local_2158 = SButton::FArguments::OnClicked<SDynamicBrushTest>(local_2160,this,&local_1fe8);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_22c4);
  this_04 = MakeTDecl<SButton,RequiredArgs::T0RequiredArgs>
                      (&local_1f18,"SButton",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0x1a2,&local_22c4);
  pTVar8 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                     (this_04,&local_1fb8,local_2158);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SButton>(&local_20a8,pTVar8);
  local_2148 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_2150,&local_20a8);
  local_2138 = SHorizontalBox::FArguments::operator+(local_2140,local_2148);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_22c3);
  this_05 = MakeTDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
                      (&local_1f30,"SHorizontalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0x193,&local_22c3);
  pTVar9 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                     (this_05,&local_1fc8,local_2138);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SHorizontalBox>(&local_20b8,pTVar9);
  local_2128 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_2130,&local_20b8);
  local_2118 = SVerticalBox::FArguments::operator+(local_2120,local_2128);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(local_22c2);
  this_06 = MakeTDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
                      (&local_1f48,"SVerticalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0x17e,local_22c2);
  pTVar10 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_06,&local_1fd8,local_2118);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SVerticalBox>(&local_20c8,pTVar10);
  TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>::operator[]
            (local_2110,&local_20c8);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_20c8);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_1fd8.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_1f48._Widget.SharedReferenceCount);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_20b8);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_1fc8.SharedReferenceCount);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>(&local_1f30);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_20a8);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_1fb8.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_1f18._Widget.SharedReferenceCount);
  FText::~FText(&local_1fa8);
  SButton::FArguments::~FArguments(&local_c18);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_1d90);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_2098);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_1f98.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_1f00._Widget.SharedReferenceCount);
  FText::~FText(&local_1f88);
  SEditableTextBox::FArguments::~FArguments(&local_6d8);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_1ca8);
  TArray<SHorizontalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>::
  ~TArray<SHorizontalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>(&local_19f0._Slots);
  TSlateBaseNamedArgs<SHorizontalBox>::~TSlateBaseNamedArgs<SHorizontalBox>
            ((TSlateBaseNamedArgs<SHorizontalBox> *)&local_19f0);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_1bc0);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_2088);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_1f78.SharedReferenceCount);
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>(&local_1ee8);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_2078);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_1f68.SharedReferenceCount);
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::~TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
            (&local_1ed0);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_2068);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_1f58.SharedReferenceCount);
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::~TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
            (&local_1eb8);
  SImage::FArguments::~FArguments(&local_15e0);
  SBox::FArguments::~FArguments(&local_1338);
  SBorder::FArguments::~FArguments(&local_ff8);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_1ad8);
  TArray<SVerticalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>::
  ~TArray<SVerticalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>(&local_17e8._Slots);
  TSlateBaseNamedArgs<SVerticalBox>::~TSlateBaseNamedArgs<SVerticalBox>
            ((TSlateBaseNamedArgs<SVerticalBox> *)&local_17e8);
  return;
}

// GetFilenameText @ 1430c8d10

FText * __thiscall
SDynamicBrushTest::GetFilenameText(SDynamicBrushTest *this,FText *__return_storage_ptr__)

{
  FText::FText(__return_storage_ptr__,&this->FilenameText);
  return __return_storage_ptr__;
}

// GetImage @ 1430c93f0

FSlateBrush * __thiscall SDynamicBrushTest::GetImage(SDynamicBrushTest *this)

{
  code *pcVar1;
  ISlateStyle *pIVar2;
  FName *pFVar3;
  FSlateDynamicImageBrush *local_38;
  FName local_10 [2];
  
  if ((this->DynamicBrush).Object == (FSlateDynamicImageBrush *)0x0) {
    pIVar2 = FCoreStyle::Get();
    pcVar1 = *(code **)((longlong)*pIVar2 + 0x50);
    pFVar3 = ::FName::FName(local_10,"Checkerboard");
    local_38 = (FSlateDynamicImageBrush *)(*pcVar1)(pIVar2,*pFVar3,0,0);
  }
  else {
    local_38 = (this->DynamicBrush).Object;
  }
  return (FSlateBrush *)local_38;
}

// LoadImage @ 1430d6570

void __thiscall SDynamicBrushTest::LoadImage(SDynamicBrushTest *this,FText *param_1,Type param_2)

{
  FString *pFVar1;
  TRawPtrProxy<FSlateDynamicImageBrush> TVar2;
  undefined1 local_c8 [4];
  int local_c4;
  FString *local_c0;
  FScriptContainerElement *local_b8;
  FSlateDynamicImageBrush *local_b0;
  FSlateDynamicImageBrush *local_a8;
  FLinearColor_u_0 local_a0;
  FScriptContainerElement *local_90;
  FScriptContainerElement *local_88;
  FScriptContainerElement *local_80;
  FScriptContainerElement *local_78;
  FLinearColor_u_0 *local_70;
  TVector2<double>_u_0 *local_68;
  FName local_60;
  FLinearColor_u_0 *local_58;
  FDeprecateVector2DParameter local_50;
  FName local_48;
  TVector2<double>_u_0 local_40;
  FString local_30;
  undefined1 local_20 [32];
  
  FText::operator=(&this->FilenameText,param_1);
  pFVar1 = FText::ToString(param_1);
  ::FString::FString(&local_30,pFVar1);
  local_c0 = FPaths::GetBaseFilename((FString *)(local_20 + 8),&local_30,false);
  local_c4 = (local_c0->Data).ArrayNum;
  if (local_c4 == 0) {
    local_b8 = (FScriptContainerElement *)
               `FString::operator*'::__l2::<lambda_1>::operator()(local_c8);
  }
  else {
    local_b8 = (local_c0->Data).AllocatorInstance.Data;
    local_90 = local_b8;
    local_88 = local_b8;
    local_80 = local_b8;
  }
  local_78 = local_b8;
  ::FName::FName(&local_60,(wchar_t *)local_b8);
  ::FString::~FString((FString *)(local_20 + 8));
  local_b0 = ::operator_new(0xd0);
  if (local_b0 == (FSlateDynamicImageBrush *)0x0) {
    local_a8 = (FSlateDynamicImageBrush *)0x0;
  }
  else {
    local_a0._s_0.R = __real_3f800000;
    local_a0._s_0.G = __real_3f800000;
    local_a0._s_0.B = __real_3f800000;
    local_a0._s_0.A = __real_3f800000;
    local_70 = &local_a0;
    local_40._s_0.X = __real_4060000000000000;
    local_40._s_0.Y = __real_4060000000000000;
    local_68 = &local_40;
    local_58 = local_70;
    UE::Slate::FDeprecateVector2DParameter::FDeprecateVector2DParameter
              (&local_50,(TVector2<double> *)&local_68->_s_0);
    local_48 = local_60;
    local_a8 = FSlateDynamicImageBrush::FSlateDynamicImageBrush
                         (local_b0,local_60,&local_50,(FLinearColor *)&local_58->_s_0,NoTile,
                          FullColor);
  }
  TVar2 = MakeShareable<FSlateDynamicImageBrush>((FSlateDynamicImageBrush *)local_20);
  TSharedPtr<FSlateDynamicImageBrush,1>::operator=<FSlateDynamicImageBrush>
            (&this->DynamicBrush,(TRawPtrProxy<FSlateDynamicImageBrush> *)TVar2.Object);
  ::FString::~FString(&local_30);
  return;
}

// Reset @ 1430ea7e0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall SDynamicBrushTest::Reset(SDynamicBrushTest *this,FReply *__return_storage_ptr__)

{
  FText *pFVar1;
  TSharedPtr<FSlateDynamicImageBrush,1> *pTVar2;
  TSharedPtr<FSlateDynamicImageBrush,1> local_18;
  
  pFVar1 = FText::GetEmpty();
  FText::operator=(&this->FilenameText,pFVar1);
  pTVar2 = TSharedPtr<FSlateDynamicImageBrush,1>::TSharedPtr<FSlateDynamicImageBrush,1>
                     (&local_18,(FNullTag *)0x0);
  TSharedPtr<FSlateDynamicImageBrush,1>::operator=(&this->DynamicBrush,pTVar2);
  TSharedPtr<FSlateDynamicImageBrush,1>::~TSharedPtr<FSlateDynamicImageBrush,1>(&local_18);
  FReply::Handled(__return_storage_ptr__);
  return __return_storage_ptr__;
}

