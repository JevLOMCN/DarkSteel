// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 5

// Construct @ 143077000

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SColorPickerTest::Construct(SColorPickerTest *this,FArguments *param_1)

{
  FSlotArguments *this_00;
  FSlotArguments *pFVar1;
  FText *pFVar2;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> *pTVar3;
  TSharedRef<SButton,1> *pTVar4;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> *this_01;
  TSharedRef<STextBlock,1> *pTVar5;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> *this_02;
  TSharedRef<SHorizontalBox,1> *pTVar6;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> *this_03;
  TSharedRef<SVerticalBox,1> *pTVar7;
  FLinearColor *pFVar8;
  longlong lVar9;
  TAttribute<FLinearColor> *pTVar10;
  code **ppcVar11;
  undefined1 *puVar12;
  TAttribute<FLinearColor> *pTVar13;
  pmf_1bd6d990 *ppVar14;
  FLinearColor *pFVar15;
  T0RequiredArgs local_1b38;
  T0RequiredArgs local_1b37;
  T0RequiredArgs local_1b36;
  T0RequiredArgs local_1b35;
  T0RequiredArgs local_1b34 [4];
  int local_1b30 [2];
  TAttribute<FLinearColor> *local_1b28;
  TAttribute<FLinearColor> *local_1b20;
  TAttribute<FText> *local_1b18;
  TAttribute<FText> *local_1b10;
  FArguments *local_1b08;
  TAttribute<FMargin> *local_1b00;
  TAttribute<FMargin> *local_1af8;
  FArguments *local_1af0;
  FArguments *local_1ae8;
  FArguments *local_1ae0;
  FSlotArguments *local_1ad8;
  FSlotArguments *local_1ad0;
  FArguments *local_1ac8;
  TAttribute<FText> *local_1ac0;
  TAttribute<FText> *local_1ab8;
  FArguments *local_1ab0;
  TAttribute<FMargin> *local_1aa8;
  TAttribute<FMargin> *local_1aa0;
  FArguments *local_1a98;
  FArguments *local_1a90;
  FArguments *local_1a88;
  FSlotArguments *local_1a80;
  FSlotArguments *local_1a78;
  FArguments *local_1a70;
  undefined1 *local_1a68;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> *local_1a60;
  FArguments *local_1a58;
  FSlotArguments *local_1a50;
  FSlotArguments *local_1a48;
  FArguments *local_1a40;
  FArguments *local_1a38;
  FSlotArguments *local_1a30;
  FSlotArguments *local_1a28;
  FArguments *local_1a20;
  FArguments *local_1a18;
  TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *local_1a10;
  code *local_1a08;
  undefined4 local_1a00;
  code *local_19f8;
  undefined4 local_19f0;
  TSharedRef<SWidget,1> local_19e8;
  TSharedRef<SWidget,1> local_19d8;
  TSharedRef<SWidget,1> local_19c8;
  TSharedRef<SWidget,1> local_19b8;
  TSharedRef<SWidget,1> local_19a8;
  undefined1 local_1998 [16];
  pmf_1bd6d990 local_1988;
  undefined1 local_1978 [16];
  pmf_1bd6d990 local_1968;
  TSharedRef<SVerticalBox,1> local_1958;
  TSharedRef<SHorizontalBox,1> local_1948;
  TSharedRef<STextBlock,1> local_1938;
  TSharedRef<SButton,1> local_1928;
  FText local_1918;
  TSharedRef<SButton,1> local_1908;
  FText local_18f8;
  FLinearColor local_18e8;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_18d8;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_18c0;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_18a8;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_1890;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_1878;
  TAttribute<FText> local_1860;
  TAttribute<FMargin> local_1830;
  TAttribute<FText> local_1800;
  TAttribute<FMargin> local_17d0;
  FSlotArguments local_17a0;
  FSlotArguments local_16b8;
  FSlotArguments local_15d0;
  FSlotArguments local_14e8;
  FArguments local_1400;
  FArguments local_11f8;
  FArguments local_ff0;
  FArguments local_ab0;
  FArguments local_570;
  undefined8 uStack_18;
  
  uStack_18 = 0x143077016;
  local_1b28 = &param_1->_Color;
  local_1b20 = &this->Color;
  pTVar10 = local_1b28;
  pTVar13 = local_1b20;
  for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
    *(undefined1 *)&(pTVar13->Value).field0_0x0 = *(undefined1 *)&(pTVar10->Value).field0_0x0;
    pTVar10 = (TAttribute<FLinearColor> *)((longlong)&(pTVar10->Value).field0_0x0 + 1);
    pTVar13 = (TAttribute<FLinearColor> *)((longlong)&(pTVar13->Value).field0_0x0 + 1);
  }
  (this->Color).bIsSet = (param_1->_Color).bIsSet;
  TDelegate<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>::operator=
            (&(this->Color).Getter,&(param_1->_Color).Getter);
  local_1a10 = (TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *)
               &this->_padding_;
  local_1a20 = SVerticalBox::FArguments::FArguments(&local_11f8);
  this_00 = SVerticalBox::Slot(&local_14e8);
  local_1a30 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(this_00);
  local_1ac8 = SHorizontalBox::FArguments::FArguments(&local_1400);
  pFVar1 = SHorizontalBox::Slot(&local_15d0);
  local_1ad8 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar1);
  local_1b08 = SButton::FArguments::FArguments(&local_ab0);
  local_1b18 = &local_1860;
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_18f8,L"STestSuite",L"ColorPickerTest-EditColorLabel",L"Edit Color");
  local_1b10 = TAttribute<FText>::TAttribute<FText>(local_1b18,pFVar2);
  local_1af0 = SButton::FArguments::Text(local_1b08,local_1b10);
  local_1b00 = &local_1830;
  local_1b30[0] = 5;
  local_1af8 = TAttribute<FMargin>::TAttribute<FMargin><int>(local_1b00,local_1b30);
  local_1ae8 = SButton::FArguments::ContentPadding(local_1af0,local_1af8);
  local_1a08 = OpenColorPicker;
  local_1a00 = 0;
  ppcVar11 = &local_1a08;
  puVar12 = local_1998;
  for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar12 = *(undefined1 *)ppcVar11;
    ppcVar11 = (code **)((longlong)ppcVar11 + 1);
    puVar12 = puVar12 + 1;
  }
  puVar12 = local_1998;
  ppVar14 = &local_1988;
  for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
    *(undefined1 *)ppVar14 = *puVar12;
    puVar12 = puVar12 + 1;
    ppVar14 = (pmf_1bd6d990 *)&ppVar14->field_0x1;
  }
  local_1ae0 = SButton::FArguments::OnClicked<SColorPickerTest>(local_1ae8,this,&local_1988);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_1b38);
  pTVar3 = MakeTDecl<SButton,RequiredArgs::T0RequiredArgs>
                     (&local_1878,"SButton",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x12b1,&local_1b38);
  pTVar4 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar3,&local_1908,local_1ae0);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SButton>(&local_19a8,pTVar4);
  local_1ad0 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_1ad8,&local_19a8);
  local_1a70 = SHorizontalBox::FArguments::operator+(local_1ac8,local_1ad0);
  pFVar1 = SHorizontalBox::Slot(&local_16b8);
  local_1a80 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar1);
  local_1ab0 = SButton::FArguments::FArguments(&local_ff0);
  local_1ac0 = &local_1800;
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_1918,L"STestSuite",L"ColorPickerTest-EditNoAlphaColorLabel",
                      L"Edit NoAlpha Color");
  local_1ab8 = TAttribute<FText>::TAttribute<FText>(local_1ac0,pFVar2);
  local_1a98 = SButton::FArguments::Text(local_1ab0,local_1ab8);
  local_1aa8 = &local_17d0;
  local_1b30[1] = 5;
  local_1aa0 = TAttribute<FMargin>::TAttribute<FMargin><int>(local_1aa8,local_1b30 + 1);
  local_1a90 = SButton::FArguments::ContentPadding(local_1a98,local_1aa0);
  local_19f8 = OpenColorPickerNoAlpha;
  local_19f0 = 0;
  ppcVar11 = &local_19f8;
  puVar12 = local_1978;
  for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar12 = *(undefined1 *)ppcVar11;
    ppcVar11 = (code **)((longlong)ppcVar11 + 1);
    puVar12 = puVar12 + 1;
  }
  puVar12 = local_1978;
  ppVar14 = &local_1968;
  for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
    *(undefined1 *)ppVar14 = *puVar12;
    puVar12 = puVar12 + 1;
    ppVar14 = (pmf_1bd6d990 *)&ppVar14->field_0x1;
  }
  local_1a88 = SButton::FArguments::OnClicked<SColorPickerTest>(local_1a90,this,&local_1968);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_1b37);
  pTVar3 = MakeTDecl<SButton,RequiredArgs::T0RequiredArgs>
                     (&local_1890,"SButton",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x12b9,&local_1b37);
  pTVar4 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar3,&local_1928,local_1a88);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SButton>(&local_19b8,pTVar4);
  local_1a78 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_1a80,&local_19b8);
  local_1a40 = SHorizontalBox::FArguments::operator+(local_1a70,local_1a78);
  pFVar1 = SHorizontalBox::Slot(&local_17a0);
  pFVar1 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar1);
  local_1a68 = &pFVar1->field_0x18;
  local_1a50 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                         ((FSlotArgumentsMixin *)local_1a68,__real_40a00000);
  local_1a58 = STextBlock::FArguments::FArguments(&local_570);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_1b36);
  local_1a60 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                         (&local_18a8,"STextBlock",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                          ,0x12c0,&local_1b36);
  this_01 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::Expose<STextBlock>
                      (local_1a60,&this->OutputTextBlock);
  pTVar5 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                     (this_01,&local_1938,local_1a58);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_19c8,pTVar5);
  local_1a48 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_1a50,&local_19c8);
  local_1a38 = SHorizontalBox::FArguments::operator+(local_1a40,local_1a48);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_1b35);
  this_02 = MakeTDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
                      (&local_18c0,"SHorizontalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0x12ad,&local_1b35);
  pTVar6 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                     (this_02,&local_1948,local_1a38);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SHorizontalBox>(&local_19d8,pTVar6);
  local_1a28 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_1a30,&local_19d8);
  local_1a18 = SVerticalBox::FArguments::operator+(local_1a20,local_1a28);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(local_1b34);
  this_03 = MakeTDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
                      (&local_18d8,"SVerticalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0x12a9,local_1b34);
  pTVar7 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                     (this_03,&local_1958,local_1a18);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SVerticalBox>(&local_19e8,pTVar7);
  TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>::operator[]
            (local_1a10,&local_19e8);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_19e8);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_1958.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_18d8._Widget.SharedReferenceCount);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_19d8);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_1948.SharedReferenceCount);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>(&local_18c0);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_19c8);
  TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_1938);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_18a8);
  STextBlock::FArguments::~FArguments(&local_570);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_17a0);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_19b8);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_1928.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_1890._Widget.SharedReferenceCount);
  FText::~FText(&local_1918);
  SButton::FArguments::~FArguments(&local_ff0);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_16b8);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_19a8);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_1908.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_1878._Widget.SharedReferenceCount);
  FText::~FText(&local_18f8);
  SButton::FArguments::~FArguments(&local_ab0);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_15d0);
  TArray<SHorizontalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>::
  ~TArray<SHorizontalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>(&local_1400._Slots);
  TSlateBaseNamedArgs<SHorizontalBox>::~TSlateBaseNamedArgs<SHorizontalBox>
            ((TSlateBaseNamedArgs<SHorizontalBox> *)&local_1400);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_14e8);
  TArray<SVerticalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>::
  ~TArray<SVerticalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>(&local_11f8._Slots);
  TSlateBaseNamedArgs<SVerticalBox>::~TSlateBaseNamedArgs<SVerticalBox>
            ((TSlateBaseNamedArgs<SVerticalBox> *)&local_11f8);
  pFVar8 = TAttribute<FLinearColor>::Get(&this->Color);
  pFVar15 = &local_18e8;
  for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
    *(undefined1 *)&pFVar15->field0_0x0 = *(undefined1 *)&pFVar8->field0_0x0;
    pFVar8 = (FLinearColor *)((longlong)&pFVar8->field0_0x0 + 1);
    pFVar15 = (FLinearColor *)((longlong)&pFVar15->field0_0x0 + 1);
  }
  UpdateColor(this,&local_18e8);
  return;
}

// GetColor @ 1430c86a0

FLinearColor * __thiscall
SColorPickerTest::GetColor(SColorPickerTest *this,FLinearColor *__return_storage_ptr__)

{
  FLinearColor *pFVar1;
  longlong lVar2;
  FLinearColor *pFVar3;
  
  pFVar1 = TAttribute<FLinearColor>::Get(&this->Color);
  pFVar3 = __return_storage_ptr__;
  for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined1 *)&pFVar3->field0_0x0 = *(undefined1 *)&pFVar1->field0_0x0;
    pFVar1 = (FLinearColor *)((longlong)&pFVar1->field0_0x0 + 1);
    pFVar3 = (FLinearColor *)((longlong)&pFVar3->field0_0x0 + 1);
  }
  return __return_storage_ptr__;
}

// OpenColorPicker @ 1430e3250

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FReply * __thiscall
SColorPickerTest::OpenColorPicker(SColorPickerTest *this,FReply *__return_storage_ptr__)

{
  FText *pFVar1;
  FDeprecateVector2DParameter *pFVar2;
  TSlateDecl<SWindow,RequiredArgs::T0RequiredArgs> *this_00;
  TSlateDecl<SColorPicker,RequiredArgs::T0RequiredArgs> *this_01;
  TSharedRef<SColorPicker,1> *pTVar3;
  longlong lVar4;
  code **ppcVar5;
  undefined1 *puVar6;
  pmf_f6964a22 *ppVar7;
  pmf_b79f33e2 *ppVar8;
  T0RequiredArgs local_918;
  T0RequiredArgs local_917 [7];
  FSlateApplication *local_910;
  TAttribute<FText> *local_908;
  TAttribute<FText> *local_900;
  FArguments *local_8f8;
  FDeprecateVector2DParameter *local_8f0;
  FDeprecateVector2DParameter local_8e8;
  FArguments *local_8e0;
  FArguments *local_8d8;
  TSharedRef<SWindow,1> *local_8d0;
  TSharedRef<SWindow,1> *local_8c8;
  code *local_8c0;
  FArguments *local_8b8;
  FArguments *local_8b0;
  TAttribute<TSharedPtr<SWindow,1>_> *local_8a8;
  TAttribute<TSharedPtr<SWindow,1>_> *local_8a0;
  FArguments *local_898;
  FArguments *local_890;
  TSharedRef<SWidget,1> *local_888;
  TSharedRef<SWidget,1> *local_880;
  SWindow *local_878;
  TSharedRef<SWindow,1> local_870;
  code *local_860;
  undefined4 local_858;
  code *local_850;
  undefined4 local_848;
  TSharedPtr<SColorPicker,1> local_840;
  FDeprecateVector2DParameter local_830;
  FText local_828;
  undefined1 local_818 [16];
  pmf_f6964a22 local_808;
  undefined1 local_7f8 [16];
  pmf_b79f33e2 local_7e8;
  TSharedRef<SColorPicker,1> local_7d8;
  TSharedRef<SColorPicker,1> local_7c8;
  TSlateDecl<SWindow,RequiredArgs::T0RequiredArgs> local_7b8;
  TSlateDecl<SColorPicker,RequiredArgs::T0RequiredArgs> local_7a0;
  TSharedRef<SWindow,1> local_788;
  TSharedRef<SWidget,1> local_778;
  TAttribute<FText> local_768;
  TAttribute<TSharedPtr<SWindow,1>_> local_738;
  FArguments local_708;
  FArguments local_410;
  
  local_910 = FSlateApplication::Get();
  local_8c0 = *(code **)(*(longlong *)local_910 + 0x10);
  local_8d0 = &local_788;
  local_8f8 = SWindow::FArguments::FArguments(&local_708);
  local_908 = &local_768;
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_828,L"STestSuite",L"ColorPickerTest-WindowTitle-StandardColor",
                      L"Standard Color");
  local_900 = TAttribute<FText>::TAttribute<FText>(local_908,pFVar1);
  local_8e0 = SWindow::FArguments::Title(local_8f8,local_900);
  local_8f0 = &local_830;
  pFVar2 = UE::Slate::FDeprecateVector2DParameter::FDeprecateVector2DParameter
                     (local_8f0,&SColorPicker::DEFAULT_WINDOW_SIZE);
  local_8e8 = *pFVar2;
  local_8d8 = SWindow::FArguments::ClientSize(local_8e0,local_8e8);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_918);
  this_00 = MakeTDecl<SWindow,RequiredArgs::T0RequiredArgs>
                      (&local_7b8,"SWindow",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0x12cc,&local_918);
  local_8c8 = TSlateDecl<SWindow,RequiredArgs::T0RequiredArgs>::operator<<=
                        (this_00,local_8d0,local_8d8);
  (*local_8c0)(local_910,&local_870,local_8c8,1);
  TSharedPtr<SWindow,1>::~TSharedPtr<SWindow,1>(&local_7b8._Widget);
  FText::~FText(&local_828);
  SWindow::FArguments::~FArguments(&local_708);
  local_8b8 = SColorPicker::FArguments::FArguments(&local_410);
  local_860 = GetColor;
  local_858 = 0;
  ppcVar5 = &local_860;
  puVar6 = local_818;
  for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *(undefined1 *)ppcVar5;
    ppcVar5 = (code **)((longlong)ppcVar5 + 1);
    puVar6 = puVar6 + 1;
  }
  puVar6 = local_818;
  ppVar7 = &local_808;
  for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
    *(undefined1 *)ppVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    ppVar7 = (pmf_f6964a22 *)&ppVar7->field_0x1;
  }
  local_8b0 = SColorPicker::FArguments::TargetColorAttribute<SColorPickerTest>
                        (local_8b8,this,&local_808);
  local_850 = UpdateColor;
  local_848 = 0;
  ppcVar5 = &local_850;
  puVar6 = local_7f8;
  for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *(undefined1 *)ppcVar5;
    ppcVar5 = (code **)((longlong)ppcVar5 + 1);
    puVar6 = puVar6 + 1;
  }
  puVar6 = local_7f8;
  ppVar8 = &local_7e8;
  for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
    *(undefined1 *)ppVar8 = *puVar6;
    puVar6 = puVar6 + 1;
    ppVar8 = (pmf_b79f33e2 *)&ppVar8->field_0x1;
  }
  local_898 = SColorPicker::FArguments::OnColorCommitted<SColorPickerTest>
                        (local_8b0,this,&local_7e8);
  local_8a8 = &local_738;
  local_8a0 = TAttribute<TSharedPtr<SWindow,1>_>::
              TAttribute<TSharedPtr<SWindow,1>_><TSharedRef<SWindow,1>_>(local_8a8,&local_870);
  local_890 = SColorPicker::FArguments::ParentWindow(local_898,local_8a0);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(local_917);
  this_01 = MakeTDecl<SColorPicker,RequiredArgs::T0RequiredArgs>
                      (&local_7a0,"SColorPicker",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0x12d1,local_917);
  pTVar3 = TSlateDecl<SColorPicker,RequiredArgs::T0RequiredArgs>::operator<<=
                     (this_01,&local_7d8,local_890);
  TSharedPtr<SColorPicker,1>::TSharedPtr<SColorPicker,1><SColorPicker>(&local_840,pTVar3);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_7d8.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_7a0._Widget.SharedReferenceCount);
  SColorPicker::FArguments::~FArguments(&local_410);
  local_878 = TSharedRef<SWindow,1>::operator->(&local_870);
  local_888 = &local_778;
  pTVar3 = TSharedPtr<SColorPicker,1>::ToSharedRef(&local_840,&local_7c8);
  local_880 = TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SColorPicker>(local_888,pTVar3);
  SWindow::SetContent(local_878,local_880);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_7c8.SharedReferenceCount);
  FReply::Handled(__return_storage_ptr__);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_840.SharedReferenceCount);
  TSharedRef<SWindow,1>::~TSharedRef<SWindow,1>(&local_870);
  return __return_storage_ptr__;
}

// OpenColorPickerNoAlpha @ 1430e3670

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FReply * __thiscall
SColorPickerTest::OpenColorPickerNoAlpha(SColorPickerTest *this,FReply *__return_storage_ptr__)

{
  FText *pFVar1;
  FDeprecateVector2DParameter *pFVar2;
  TSlateDecl<SWindow,RequiredArgs::T0RequiredArgs> *this_00;
  TSlateDecl<SColorPicker,RequiredArgs::T0RequiredArgs> *this_01;
  TSharedRef<SColorPicker,1> *pTVar3;
  longlong lVar4;
  code **ppcVar5;
  undefined1 *puVar6;
  pmf_f6964a22 *ppVar7;
  pmf_b79f33e2 *ppVar8;
  T0RequiredArgs local_958;
  bool local_957;
  T0RequiredArgs local_956 [6];
  FSlateApplication *local_950;
  TAttribute<FText> *local_948;
  TAttribute<FText> *local_940;
  FArguments *local_938;
  FDeprecateVector2DParameter *local_930;
  FDeprecateVector2DParameter local_928;
  FArguments *local_920;
  FArguments *local_918;
  TSharedRef<SWindow,1> *local_910;
  TSharedRef<SWindow,1> *local_908;
  code *local_900;
  TAttribute<bool> *local_8f8;
  TAttribute<bool> *local_8f0;
  FArguments *local_8e8;
  FArguments *local_8e0;
  FArguments *local_8d8;
  TAttribute<TSharedPtr<SWindow,1>_> *local_8d0;
  TAttribute<TSharedPtr<SWindow,1>_> *local_8c8;
  FArguments *local_8c0;
  FArguments *local_8b8;
  TSharedRef<SWidget,1> *local_8b0;
  TSharedRef<SWidget,1> *local_8a8;
  SWindow *local_8a0;
  TSharedRef<SWindow,1> local_898;
  code *local_888;
  undefined4 local_880;
  code *local_878;
  undefined4 local_870;
  TSharedPtr<SColorPicker,1> local_868;
  FDeprecateVector2DParameter local_858;
  FText local_850;
  undefined1 local_840 [24];
  pmf_f6964a22 local_828;
  undefined1 local_818 [16];
  pmf_b79f33e2 local_808;
  TSharedRef<SColorPicker,1> local_7f8;
  TSharedRef<SColorPicker,1> local_7e8;
  TSlateDecl<SWindow,RequiredArgs::T0RequiredArgs> local_7d8;
  TSlateDecl<SColorPicker,RequiredArgs::T0RequiredArgs> local_7c0;
  TSharedRef<SWindow,1> local_7a8;
  TSharedRef<SWidget,1> local_798;
  TAttribute<bool> local_788;
  TAttribute<FText> local_768;
  TAttribute<TSharedPtr<SWindow,1>_> local_738;
  FArguments local_708;
  FArguments local_410;
  
  local_950 = FSlateApplication::Get();
  local_900 = *(code **)(*(longlong *)local_950 + 0x10);
  local_910 = &local_7a8;
  local_938 = SWindow::FArguments::FArguments(&local_708);
  local_948 = &local_768;
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_850,L"STestSuite",L"ColorPickerTest-WindowTitle-NoAlphaColor",
                      L"No Alpha Color");
  local_940 = TAttribute<FText>::TAttribute<FText>(local_948,pFVar1);
  local_920 = SWindow::FArguments::Title(local_938,local_940);
  local_930 = &local_858;
  pFVar2 = UE::Slate::FDeprecateVector2DParameter::FDeprecateVector2DParameter
                     (local_930,&SColorPicker::DEFAULT_WINDOW_SIZE);
  local_928 = *pFVar2;
  local_918 = SWindow::FArguments::ClientSize(local_920,local_928);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_958);
  this_00 = MakeTDecl<SWindow,RequiredArgs::T0RequiredArgs>
                      (&local_7d8,"SWindow",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0x12de,&local_958);
  local_908 = TSlateDecl<SWindow,RequiredArgs::T0RequiredArgs>::operator<<=
                        (this_00,local_910,local_918);
  (*local_900)(local_950,&local_898,local_908,1);
  TSharedPtr<SWindow,1>::~TSharedPtr<SWindow,1>(&local_7d8._Widget);
  FText::~FText(&local_850);
  SWindow::FArguments::~FArguments(&local_708);
  local_8e8 = SColorPicker::FArguments::FArguments(&local_410);
  local_8f8 = &local_788;
  local_957 = false;
  local_8f0 = TAttribute<bool>::TAttribute<bool>(local_8f8,&local_957);
  local_8e0 = SColorPicker::FArguments::UseAlpha(local_8e8,local_8f0);
  local_888 = GetColor;
  local_880 = 0;
  ppcVar5 = &local_888;
  puVar6 = local_840;
  for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *(undefined1 *)ppcVar5;
    ppcVar5 = (code **)((longlong)ppcVar5 + 1);
    puVar6 = puVar6 + 1;
  }
  puVar6 = local_840;
  ppVar7 = &local_828;
  for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
    *(undefined1 *)ppVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    ppVar7 = (pmf_f6964a22 *)&ppVar7->field_0x1;
  }
  local_8d8 = SColorPicker::FArguments::TargetColorAttribute<SColorPickerTest>
                        (local_8e0,this,&local_828);
  local_878 = UpdateColor;
  local_870 = 0;
  ppcVar5 = &local_878;
  puVar6 = local_818;
  for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *(undefined1 *)ppcVar5;
    ppcVar5 = (code **)((longlong)ppcVar5 + 1);
    puVar6 = puVar6 + 1;
  }
  puVar6 = local_818;
  ppVar8 = &local_808;
  for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
    *(undefined1 *)ppVar8 = *puVar6;
    puVar6 = puVar6 + 1;
    ppVar8 = (pmf_b79f33e2 *)&ppVar8->field_0x1;
  }
  local_8c0 = SColorPicker::FArguments::OnColorCommitted<SColorPickerTest>
                        (local_8d8,this,&local_808);
  local_8d0 = &local_738;
  local_8c8 = TAttribute<TSharedPtr<SWindow,1>_>::
              TAttribute<TSharedPtr<SWindow,1>_><TSharedRef<SWindow,1>_>(local_8d0,&local_898);
  local_8b8 = SColorPicker::FArguments::ParentWindow(local_8c0,local_8c8);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(local_956);
  this_01 = MakeTDecl<SColorPicker,RequiredArgs::T0RequiredArgs>
                      (&local_7c0,"SColorPicker",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0x12e3,local_956);
  pTVar3 = TSlateDecl<SColorPicker,RequiredArgs::T0RequiredArgs>::operator<<=
                     (this_01,&local_7f8,local_8b8);
  TSharedPtr<SColorPicker,1>::TSharedPtr<SColorPicker,1><SColorPicker>(&local_868,pTVar3);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_7f8.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_7c0._Widget.SharedReferenceCount);
  SColorPicker::FArguments::~FArguments(&local_410);
  local_8a0 = TSharedRef<SWindow,1>::operator->(&local_898);
  local_8b0 = &local_798;
  pTVar3 = TSharedPtr<SColorPicker,1>::ToSharedRef(&local_868,&local_7e8);
  local_8a8 = TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SColorPicker>(local_8b0,pTVar3);
  SWindow::SetContent(local_8a0,local_8a8);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_7e8.SharedReferenceCount);
  FReply::Handled(__return_storage_ptr__);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_868.SharedReferenceCount);
  TSharedRef<SWindow,1>::~TSharedRef<SWindow,1>(&local_898);
  return __return_storage_ptr__;
}

// UpdateColor @ 143106a60

void __thiscall SColorPickerTest::UpdateColor(SColorPickerTest *this,FLinearColor *param_1)

{
  FColor FVar1;
  undefined4 extraout_var;
  FString *pFVar2;
  FText *pFVar3;
  undefined1 local_98 [8];
  TAttribute<FLinearColor> *local_90;
  FLinearColor *local_88;
  FColor *local_80;
  TAttribute<FText> *local_78;
  TAttribute<FText> *local_70;
  STextBlock *local_68;
  FText local_60;
  FString local_50;
  TAttribute<FText> local_40;
  
  local_90 = &this->Color;
  TAttribute<FLinearColor>::Set<FLinearColor>(local_90,param_1);
  local_68 = TSharedPtr<STextBlock,1>::operator->(&this->OutputTextBlock);
  local_78 = &local_40;
  local_88 = TAttribute<FLinearColor>::Get(&this->Color);
  FVar1 = FLinearColor::ToFColor(local_88,SUB81(local_98,0));
  local_80 = (FColor *)CONCAT44(extraout_var,FVar1.field0_0x0);
  pFVar2 = FColor::ToString(local_80,&local_50);
  pFVar3 = FText::FromString(&local_60,pFVar2);
  local_70 = TAttribute<FText>::TAttribute<FText>(local_78,pFVar3);
  STextBlock::SetText(local_68,local_70);
  FText::~FText(&local_60);
  ::FString::~FString(&local_50);
  return;
}

