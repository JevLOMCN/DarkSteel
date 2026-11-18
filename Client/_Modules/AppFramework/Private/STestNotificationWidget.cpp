// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 3

// AsWidget @ 14306ec00

TSharedRef<SWidget,1> * __thiscall
STestNotificationWidget::AsWidget
          (STestNotificationWidget *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  TSharedRef<SWidget,1> *pTVar1;
  FStaticCastTag local_48;
  TSharedRef<STestNotificationWidget,1> local_30;
  TSharedRef<SWidget,1> local_20 [2];
  
  pTVar1 = TSharedFromThis<SWidget,1>::AsShared
                     ((TSharedFromThis<SWidget,1> *)&this[-1].field_0x10,local_20);
  TSharedRef<STestNotificationWidget,1>::TSharedRef<STestNotificationWidget,1><SWidget>
            (&local_30,pTVar1,local_48);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(local_20);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STestNotificationWidget>
            (__return_storage_ptr__,&local_30);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_30.SharedReferenceCount);
  return __return_storage_ptr__;
}

// Construct @ 1430a1840

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall
STestNotificationWidget::Construct(STestNotificationWidget *this,FArguments *param_1)

{
  FSlotArguments *pFVar1;
  FName *pFVar2;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> *this_00;
  TSharedRef<SImage,1> *pTVar3;
  FMargin *pFVar4;
  FText *pFVar5;
  FSlateFontInfo *pFVar6;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> *this_01;
  TSharedRef<STextBlock,1> *pTVar7;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> *this_02;
  TSharedRef<SButton,1> *pTVar8;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> *this_03;
  TSharedRef<SHorizontalBox,1> *pTVar9;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> *this_04;
  TSharedRef<SBox,1> *pTVar10;
  T0RequiredArgs local_19f8;
  T0RequiredArgs local_19f7;
  T0RequiredArgs local_19f6;
  T0RequiredArgs local_19f5;
  T0RequiredArgs local_19f4 [4];
  ISlateStyle *local_19f0;
  FArguments *local_19e8;
  FName *local_19e0;
  FName local_19d8;
  code *local_19d0;
  FSlateBrush *local_19c8;
  TAttribute<FSlateBrush_const_*> *local_19c0;
  TAttribute<FSlateBrush_const_*> *local_19b8;
  FArguments *local_19b0;
  FArguments *local_19a8;
  FSlotArguments *local_19a0;
  FSlotArguments *local_1998;
  FArguments *local_1990;
  TAttribute<FMargin> *local_1988;
  TAttribute<FMargin> *local_1980;
  FSlotArgumentsMixin *local_1978;
  TAttribute<FText> *local_1970;
  TAttribute<FText> *local_1968;
  FArguments *local_1960;
  FName *local_1958;
  FFontOutlineSettings *local_1950;
  FName local_1948;
  TAttribute<FSlateFontInfo> *local_1940;
  TAttribute<FSlateFontInfo> *local_1938;
  FArguments *local_1930;
  FArguments *local_1928;
  FSlotArguments *local_1920;
  FSlotArguments *local_1918;
  FArguments *local_1910;
  TAttribute<FMargin> *local_1908;
  TAttribute<FMargin> *local_1900;
  FSlotArgumentsMixin *local_18f8;
  TAttribute<FText> *local_18f0;
  TAttribute<FText> *local_18e8;
  FArguments *local_18e0;
  FArguments *local_18d8;
  FSlotArguments *local_18d0;
  FSlotArguments *local_18c8;
  FArguments *local_18c0;
  FArguments *local_18b8;
  FArguments *local_18b0;
  FArguments *local_18a8;
  TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *local_18a0;
  TSharedRef<SWidget,1> local_1898;
  TSharedRef<SWidget,1> local_1888;
  TSharedRef<SWidget,1> local_1878;
  TSharedRef<SWidget,1> local_1868;
  TSharedRef<SWidget,1> local_1858;
  FName local_1848;
  FName local_1840;
  TSharedRef<SBox,1> local_1838;
  TSharedRef<SHorizontalBox,1> local_1828;
  TSharedRef<SButton,1> local_1818;
  FText local_1808;
  TSharedRef<STextBlock,1> local_17f8;
  FText local_17e8;
  TSharedRef<SImage,1> local_17d8;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_17c8;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_17b0;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_1798;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_1780;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_1768;
  FMargin local_1750;
  FMargin local_1740;
  FFontOutlineSettings local_1730;
  TAttribute<FSlateBrush_const_*> local_1710;
  TAttribute<FMargin> local_16e8;
  TAttribute<FText> local_16b8;
  TAttribute<FMargin> local_1688;
  TAttribute<FText> local_1658;
  FSlateFontInfo local_1628;
  FSlotArguments local_15c8;
  FSlotArguments local_14e0;
  FSlotArguments local_13f8;
  TAttribute<FSlateFontInfo> local_1310;
  FArguments local_1290;
  FArguments local_1088;
  FArguments local_de0;
  FArguments local_aa0;
  FArguments local_560;
  undefined8 uStack_8;
  
  uStack_8 = 0x1430a1854;
  local_18a0 = (TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *)
               &this->field_0x218;
  local_19e8 = SBox::FArguments::FArguments(&local_de0);
  local_18b0 = SBox::FArguments::Padding(local_19e8,__real_41700000);
  local_1990 = SHorizontalBox::FArguments::FArguments(&local_1290);
  pFVar1 = SHorizontalBox::Slot(&local_13f8);
  local_19a0 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar1);
  local_19b0 = SImage::FArguments::FArguments(&local_1088);
  local_19c0 = &local_1710;
  local_19f0 = FTestStyle::Get();
  local_19d0 = *(code **)((longlong)*local_19f0 + 0x50);
  local_19e0 = &local_1848;
  pFVar2 = ::FName::FName(local_19e0,"UEIcon");
  local_19d8 = *pFVar2;
  local_19c8 = (FSlateBrush *)(*local_19d0)(local_19f0,local_19d8,0,0);
  local_19b8 = TAttribute<FSlateBrush_const_*>::TAttribute<FSlateBrush_const_*>
                         (local_19c0,&local_19c8);
  local_19a8 = SImage::FArguments::Image(local_19b0,local_19b8);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_19f8);
  this_00 = MakeTDecl<SImage,RequiredArgs::T0RequiredArgs>
                      (&local_17b0,"SImage",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0x1310,&local_19f8);
  pTVar3 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                     (this_00,&local_17d8,local_19a8);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SImage>(&local_1858,pTVar3);
  local_1998 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_19a0,&local_1858);
  local_1910 = SHorizontalBox::FArguments::operator+(local_1990,local_1998);
  pFVar1 = SHorizontalBox::Slot(&local_14e0);
  local_1978 = (FSlotArgumentsMixin *)&pFVar1->field_0x18;
  local_1988 = &local_16e8;
  pFVar4 = FMargin::FMargin(&local_1750,__real_402e000000000000,0.0,0.0,0.0);
  local_1980 = TAttribute<FMargin>::TAttribute<FMargin>(local_1988,pFVar4);
  local_1920 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                         (local_1978,local_1980);
  local_1960 = STextBlock::FArguments::FArguments(&local_560);
  local_1970 = &local_16b8;
  pFVar5 = FText::AsLocalizable_Advanced_LocText
                     (&local_17e8,L"STestSuite",L"TestingBigNotificationText",
                      L"Big notififcation text!");
  local_1968 = TAttribute<FText>::TAttribute<FText>(local_1970,pFVar5);
  local_1930 = STextBlock::FArguments::Text(local_1960,local_1968);
  local_1940 = &local_1310;
  local_1950 = FFontOutlineSettings::FFontOutlineSettings(&local_1730);
  local_1958 = &local_1840;
  pFVar2 = ::FName::FName(local_1958,"Bold");
  local_1948 = *pFVar2;
  pFVar6 = FCoreStyle::GetDefaultFontStyle(&local_1628,local_1948,__real_41f00000,local_1950);
  local_1938 = TAttribute<FSlateFontInfo>::TAttribute<FSlateFontInfo>(local_1940,pFVar6);
  local_1928 = STextBlock::FArguments::Font(local_1930,local_1938);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_19f7);
  this_01 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                      (&local_17c8,"STextBlock",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0x1316,&local_19f7);
  pTVar7 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                     (this_01,&local_17f8,local_1928);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_1868,pTVar7);
  local_1918 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_1920,&local_1868);
  local_18c0 = SHorizontalBox::FArguments::operator+(local_1910,local_1918);
  pFVar1 = SHorizontalBox::Slot(&local_15c8);
  local_18f8 = (FSlotArgumentsMixin *)&pFVar1->field_0x18;
  local_1908 = &local_1688;
  pFVar4 = FMargin::FMargin(&local_1740,__real_402e000000000000,0.0,0.0,0.0);
  local_1900 = TAttribute<FMargin>::TAttribute<FMargin>(local_1908,pFVar4);
  local_18d0 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                         (local_18f8,local_1900);
  local_18e0 = SButton::FArguments::FArguments(&local_aa0);
  local_18f0 = &local_1658;
  pFVar5 = FText::AsLocalizable_Advanced_LocText
                     (&local_1808,L"STestSuite",L"TestButtonInNotificaiton",L"Button Test");
  local_18e8 = TAttribute<FText>::TAttribute<FText>(local_18f0,pFVar5);
  local_18d8 = SButton::FArguments::Text(local_18e0,local_18e8);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_19f6);
  this_02 = MakeTDecl<SButton,RequiredArgs::T0RequiredArgs>
                      (&local_1768,"SButton",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0x131d,&local_19f6);
  pTVar8 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                     (this_02,&local_1818,local_18d8);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SButton>(&local_1878,pTVar8);
  local_18c8 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_18d0,&local_1878);
  local_18b8 = SHorizontalBox::FArguments::operator+(local_18c0,local_18c8);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_19f5);
  this_03 = MakeTDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
                      (&local_1780,"SHorizontalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0x130c,&local_19f5);
  pTVar9 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                     (this_03,&local_1828,local_18b8);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SHorizontalBox>(&local_1888,pTVar9);
  local_18a8 = SBox::FArguments::operator[](local_18b0,&local_1888);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(local_19f4);
  this_04 = MakeTDecl<SBox,RequiredArgs::T0RequiredArgs>
                      (&local_1798,"SBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0x1309,local_19f4);
  pTVar10 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_04,&local_1838,local_18a8);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SBox>(&local_1898,pTVar10);
  TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>::operator[]
            (local_18a0,&local_1898);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_1898);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_1838.SharedReferenceCount);
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::~TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
            (&local_1798);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_1888);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_1828.SharedReferenceCount);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>(&local_1780);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_1878);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_1818.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_1768._Widget.SharedReferenceCount);
  FText::~FText(&local_1808);
  SButton::FArguments::~FArguments(&local_aa0);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_15c8);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_1868);
  TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_17f8);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_17c8);
  FSlateFontInfo::~FSlateFontInfo(&local_1628);
  FText::~FText(&local_17e8);
  STextBlock::FArguments::~FArguments(&local_560);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_14e0);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_1858);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_17d8.SharedReferenceCount);
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::~TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
            (&local_17b0);
  SImage::FArguments::~FArguments(&local_1088);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_13f8);
  TArray<SHorizontalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>::
  ~TArray<SHorizontalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>(&local_1290._Slots);
  TSlateBaseNamedArgs<SHorizontalBox>::~TSlateBaseNamedArgs<SHorizontalBox>
            ((TSlateBaseNamedArgs<SHorizontalBox> *)&local_1290);
  SBox::FArguments::~FArguments(&local_de0);
  return;
}

// OnSetCompletionState @ 1430e2600

void __thiscall
STestNotificationWidget::OnSetCompletionState
          (STestNotificationWidget *this,ECompletionState param_1)

{
  return;
}

