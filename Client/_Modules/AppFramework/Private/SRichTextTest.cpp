// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 25

// GetBottomMargin @ 1430c7dc0

float __thiscall SRichTextTest::GetBottomMargin(SRichTextTest *this)

{
  return (this->Margin).Bottom;
}

// GetLeftMargin @ 1430c9930

float __thiscall SRichTextTest::GetLeftMargin(SRichTextTest *this)

{
  return (this->Margin).Left;
}

// GetLineHeight @ 1430c9950

float __thiscall SRichTextTest::GetLineHeight(SRichTextTest *this)

{
  return this->LineHeight;
}

// GetRichTextMargin @ 1430cca20

FMargin * __thiscall
SRichTextTest::GetRichTextMargin(SRichTextTest *this,FMargin *__return_storage_ptr__)

{
  longlong lVar1;
  FMargin *pFVar2;
  FMargin *pFVar3;
  
  pFVar2 = &this->Margin;
  pFVar3 = __return_storage_ptr__;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *(undefined1 *)&pFVar3->Left = *(undefined1 *)&pFVar2->Left;
    pFVar2 = (FMargin *)((longlong)&pFVar2->Left + 1);
    pFVar3 = (FMargin *)((longlong)&pFVar3->Left + 1);
  }
  return __return_storage_ptr__;
}

// GetRichTextWrapWidthValue @ 1430cca60

float __thiscall SRichTextTest::GetRichTextWrapWidthValue(SRichTextTest *this)

{
  float fVar1;
  
  if (this->bShouldWrap == false) {
    fVar1 = 0.0;
  }
  else {
    fVar1 = this->WrapWidth;
  }
  return fVar1;
}

// GetRightMargin @ 1430cca90

float __thiscall SRichTextTest::GetRightMargin(SRichTextTest *this)

{
  return (this->Margin).Right;
}

// GetTopMargin @ 1430ce060

float __thiscall SRichTextTest::GetTopMargin(SRichTextTest *this)

{
  return (this->Margin).Top;
}

// GetWrapWidth @ 1430cee20

float __thiscall SRichTextTest::GetWrapWidth(SRichTextTest *this)

{
  return this->WrapWidth;
}

// JustificationComboBoxSelectionChanged @ 1430d53a0

void __thiscall
SRichTextTest::JustificationComboBoxSelectionChanged
          (SRichTextTest *this,TSharedPtr<FString,1> *param_1,Type param_2)

{
  int iVar1;
  undefined1 local_12e;
  undefined1 local_12d;
  undefined1 local_12c;
  undefined1 local_12b;
  undefined1 local_12a [2];
  uint local_128;
  uint local_124;
  uint local_120;
  uint local_11c;
  uint local_118;
  int local_114;
  int local_110;
  int local_10c;
  int local_108;
  int local_104;
  FString *local_100;
  FScriptContainerElement *local_f8;
  FString *local_f0;
  FScriptContainerElement *local_e8;
  FString *local_e0;
  FScriptContainerElement *local_d8;
  FString *local_d0;
  FScriptContainerElement *local_c8;
  FString *local_c0;
  FScriptContainerElement *local_b8;
  FScriptContainerElement *local_b0;
  FScriptContainerElement *local_a8;
  FScriptContainerElement *local_a0;
  FScriptContainerElement *local_98;
  FScriptContainerElement *local_90;
  FScriptContainerElement *local_88;
  FScriptContainerElement *local_80;
  FScriptContainerElement *local_78;
  FScriptContainerElement *local_70;
  FScriptContainerElement *local_68;
  FScriptContainerElement *local_60;
  FScriptContainerElement *local_58;
  FScriptContainerElement *local_50;
  FScriptContainerElement *local_48;
  FScriptContainerElement *local_40;
  FScriptContainerElement *local_38;
  FScriptContainerElement *local_30;
  FScriptContainerElement *local_28;
  FScriptContainerElement *local_20;
  FScriptContainerElement *local_18;
  
  local_100 = TSharedPtr<FString,1>::operator*<FString>(param_1);
  local_114 = (local_100->Data).ArrayNum;
  if (local_114 == 0) {
    local_f8 = (FScriptContainerElement *)
               `FString::operator*'::__l2::<lambda_1>::operator()(&local_12e);
  }
  else {
    local_f8 = (local_100->Data).AllocatorInstance.Data;
    local_b0 = local_f8;
    local_a8 = local_f8;
    local_a0 = local_f8;
  }
  local_98 = local_f8;
  iVar1 = FGenericPlatformStricmp::Stricmp((wchar_t *)local_f8,L"Left");
  local_128 = (uint)(iVar1 == 0);
  if (iVar1 == 0) {
    this->Justification = Left;
  }
  else {
    local_f0 = TSharedPtr<FString,1>::operator*<FString>(param_1);
    local_110 = (local_f0->Data).ArrayNum;
    if (local_110 == 0) {
      local_e8 = (FScriptContainerElement *)
                 `FString::operator*'::__l2::<lambda_1>::operator()(&local_12d);
    }
    else {
      local_e8 = (local_f0->Data).AllocatorInstance.Data;
      local_90 = local_e8;
      local_88 = local_e8;
      local_80 = local_e8;
    }
    local_78 = local_e8;
    iVar1 = FGenericPlatformStricmp::Stricmp((wchar_t *)local_e8,L"Center");
    local_124 = (uint)(iVar1 == 0);
    if (iVar1 == 0) {
      this->Justification = Center;
    }
    else {
      local_e0 = TSharedPtr<FString,1>::operator*<FString>(param_1);
      local_10c = (local_e0->Data).ArrayNum;
      if (local_10c == 0) {
        local_d8 = (FScriptContainerElement *)
                   `FString::operator*'::__l2::<lambda_1>::operator()(&local_12c);
      }
      else {
        local_d8 = (local_e0->Data).AllocatorInstance.Data;
        local_70 = local_d8;
        local_68 = local_d8;
        local_60 = local_d8;
      }
      local_58 = local_d8;
      iVar1 = FGenericPlatformStricmp::Stricmp((wchar_t *)local_d8,L"Right");
      local_120 = (uint)(iVar1 == 0);
      if (iVar1 == 0) {
        this->Justification = Right;
      }
      else {
        local_d0 = TSharedPtr<FString,1>::operator*<FString>(param_1);
        local_108 = (local_d0->Data).ArrayNum;
        if (local_108 == 0) {
          local_c8 = (FScriptContainerElement *)
                     `FString::operator*'::__l2::<lambda_1>::operator()(&local_12b);
        }
        else {
          local_c8 = (local_d0->Data).AllocatorInstance.Data;
          local_50 = local_c8;
          local_48 = local_c8;
          local_40 = local_c8;
        }
        local_38 = local_c8;
        iVar1 = FGenericPlatformStricmp::Stricmp((wchar_t *)local_c8,L"Invariant Left");
        local_11c = (uint)(iVar1 == 0);
        if (iVar1 == 0) {
          this->Justification = InvariantLeft;
        }
        else {
          local_c0 = TSharedPtr<FString,1>::operator*<FString>(param_1);
          local_104 = (local_c0->Data).ArrayNum;
          if (local_104 == 0) {
            local_b8 = (FScriptContainerElement *)
                       `FString::operator*'::__l2::<lambda_1>::operator()(local_12a);
          }
          else {
            local_b8 = (local_c0->Data).AllocatorInstance.Data;
            local_30 = local_b8;
            local_28 = local_b8;
            local_20 = local_b8;
          }
          local_18 = local_b8;
          iVar1 = FGenericPlatformStricmp::Stricmp((wchar_t *)local_b8,L"Invariant Right");
          local_118 = (uint)(iVar1 == 0);
          if (iVar1 == 0) {
            this->Justification = InvariantRight;
          }
        }
      }
    }
  }
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&param_1->SharedReferenceCount);
  return;
}

// JustificationGetSelected @ 1430d5870

Type __thiscall SRichTextTest::JustificationGetSelected(SRichTextTest *this)

{
  return this->Justification;
}

// JustificationGetSelectedText @ 1430d5890

FText * __thiscall
SRichTextTest::JustificationGetSelectedText(SRichTextTest *this,FText *__return_storage_ptr__)

{
  FText *pFVar1;
  FText local_60;
  FText local_50;
  FText local_40;
  FText local_30;
  FText local_20 [2];
  
  FText::FText(__return_storage_ptr__);
  if (this->Justification == Left) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       (&local_60,L"STestSuite",L"TextJustify::Left",L"Left");
    FText::operator=(__return_storage_ptr__,pFVar1);
    FText::~FText(&local_60);
  }
  else if (this->Justification == Center) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       (&local_50,L"STestSuite",L"TextJustify::Center",L"Center");
    FText::operator=(__return_storage_ptr__,pFVar1);
    FText::~FText(&local_50);
  }
  else if (this->Justification == Right) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       (&local_40,L"STestSuite",L"TextJustify::Right",L"Right");
    FText::operator=(__return_storage_ptr__,pFVar1);
    FText::~FText(&local_40);
  }
  else if (this->Justification == InvariantLeft) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       (&local_30,L"STestSuite",L"TextJustify::InvariantLeft",L"Invariant Left");
    FText::operator=(__return_storage_ptr__,pFVar1);
    FText::~FText(&local_30);
  }
  else if (this->Justification == InvariantRight) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       (local_20,L"STestSuite",L"TextJustify::InvariantRight",L"Invariant Right");
    FText::operator=(__return_storage_ptr__,pFVar1);
    FText::~FText(local_20);
  }
  return __return_storage_ptr__;
}

// JustificationGetText @ 1430d5a60

FText * __thiscall
SRichTextTest::JustificationGetText
          (SRichTextTest *this,FText *__return_storage_ptr__,TSharedPtr<FString,1> *param_1)

{
  int iVar1;
  FText *pFVar2;
  undefined1 local_f2;
  undefined1 local_f1;
  undefined1 local_f0 [4];
  uint local_ec;
  uint local_e8;
  uint local_e4;
  int local_e0;
  int local_dc;
  int local_d8;
  FString *local_d0;
  FScriptContainerElement *local_c8;
  FString *local_c0;
  FScriptContainerElement *local_b8;
  FString *local_b0;
  FScriptContainerElement *local_a8;
  FScriptContainerElement *local_a0;
  FScriptContainerElement *local_98;
  FScriptContainerElement *local_90;
  FScriptContainerElement *local_88;
  FScriptContainerElement *local_80;
  FScriptContainerElement *local_78;
  FScriptContainerElement *local_70;
  FScriptContainerElement *local_68;
  FScriptContainerElement *local_60;
  FScriptContainerElement *local_58;
  FScriptContainerElement *local_50;
  FScriptContainerElement *local_48;
  FText *local_40;
  FText local_38;
  FText local_28;
  FText local_18;
  
  local_40 = FText::FText(__return_storage_ptr__);
  local_d0 = TSharedPtr<FString,1>::operator*<FString>(param_1);
  local_e0 = (local_d0->Data).ArrayNum;
  if (local_e0 == 0) {
    local_c8 = (FScriptContainerElement *)
               `FString::operator*'::__l2::<lambda_1>::operator()(&local_f2);
  }
  else {
    local_c8 = (local_d0->Data).AllocatorInstance.Data;
    local_a0 = local_c8;
    local_98 = local_c8;
    local_90 = local_c8;
  }
  local_88 = local_c8;
  iVar1 = FGenericPlatformStricmp::Stricmp((wchar_t *)local_c8,L"Left");
  local_ec = (uint)(iVar1 == 0);
  if (iVar1 == 0) {
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       (&local_38,L"STestSuite",L"TextJustify::Left",L"Left");
    FText::operator=(__return_storage_ptr__,pFVar2);
    FText::~FText(&local_38);
  }
  else {
    local_c0 = TSharedPtr<FString,1>::operator*<FString>(param_1);
    local_dc = (local_c0->Data).ArrayNum;
    if (local_dc == 0) {
      local_b8 = (FScriptContainerElement *)
                 `FString::operator*'::__l2::<lambda_1>::operator()(&local_f1);
    }
    else {
      local_b8 = (local_c0->Data).AllocatorInstance.Data;
      local_80 = local_b8;
      local_78 = local_b8;
      local_70 = local_b8;
    }
    local_68 = local_b8;
    iVar1 = FGenericPlatformStricmp::Stricmp((wchar_t *)local_b8,L"Center");
    local_e8 = (uint)(iVar1 == 0);
    if (iVar1 == 0) {
      pFVar2 = FText::AsLocalizable_Advanced_LocText
                         (&local_28,L"STestSuite",L"TextJustify::Center",L"Center");
      FText::operator=(__return_storage_ptr__,pFVar2);
      FText::~FText(&local_28);
    }
    else {
      local_b0 = TSharedPtr<FString,1>::operator*<FString>(param_1);
      local_d8 = (local_b0->Data).ArrayNum;
      if (local_d8 == 0) {
        local_a8 = (FScriptContainerElement *)
                   `FString::operator*'::__l2::<lambda_1>::operator()(local_f0);
      }
      else {
        local_a8 = (local_b0->Data).AllocatorInstance.Data;
        local_60 = local_a8;
        local_58 = local_a8;
        local_50 = local_a8;
      }
      local_48 = local_a8;
      iVar1 = FGenericPlatformStricmp::Stricmp((wchar_t *)local_a8,L"Right");
      local_e4 = (uint)(iVar1 == 0);
      if (iVar1 == 0) {
        pFVar2 = FText::AsLocalizable_Advanced_LocText
                           (&local_18,L"STestSuite",L"TextJustify::Right",L"Right");
        FText::operator=(__return_storage_ptr__,pFVar2);
        FText::~FText(&local_18);
      }
    }
  }
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&param_1->SharedReferenceCount);
  return __return_storage_ptr__;
}

// MakeWidgetFromJustificationOption @ 1430d7a00

TSharedRef<SWidget,1> * __thiscall
SRichTextTest::MakeWidgetFromJustificationOption
          (SRichTextTest *this,TSharedRef<SWidget,1> *__return_storage_ptr__,
          TSharedPtr<FString,1> *param_1)

{
  TSharedPtr<FString,1> *pTVar1;
  FText *pFVar2;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> *this_00;
  TSharedRef<STextBlock,1> *pTVar3;
  T0RequiredArgs local_608 [8];
  TSharedPtr<FString,1> *local_600;
  TAttribute<FText> *local_5f8;
  TAttribute<FText> *local_5f0;
  FArguments *local_5e8;
  FArguments *local_5e0;
  TSharedRef<STextBlock,1> local_5d8;
  FText local_5c8;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_5b8;
  TSharedPtr<FString,1> local_5a0;
  TAttribute<FText> local_590;
  FArguments local_560;
  
  local_5e8 = STextBlock::FArguments::FArguments(&local_560);
  local_5f8 = &local_590;
  local_600 = &local_5a0;
  pTVar1 = TSharedPtr<FString,1>::TSharedPtr<FString,1>(local_600,param_1);
  pFVar2 = JustificationGetText(this,&local_5c8,pTVar1);
  local_5f0 = TAttribute<FText>::TAttribute<FText>(local_5f8,pFVar2);
  local_5e0 = STextBlock::FArguments::Text(local_5e8,local_5f0);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(local_608);
  this_00 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                      (&local_5b8,"STextBlock",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0x9c5,local_608);
  pTVar3 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                     (this_00,&local_5d8,local_5e0);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(__return_storage_ptr__,pTVar3);
  TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_5d8);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_5b8);
  FText::~FText(&local_5c8);
  STextBlock::FArguments::~FArguments(&local_560);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&param_1->SharedReferenceCount);
  return __return_storage_ptr__;
}

// OnCreateWidgetDecoratorWidget @ 1430d9590

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

FWidgetRunInfo * __thiscall
SRichTextTest::OnCreateWidgetDecoratorWidget
          (SRichTextTest *this,FWidgetRunInfo *__return_storage_ptr__,FTextRunInfo *param_1,
          ISlateStyle *param_2)

{
  FName *pFVar1;
  FText *pFVar2;
  TSlateDecl<SRichTextBlock,RequiredArgs::T0RequiredArgs> *pTVar3;
  TSharedRef<SRichTextBlock,1> *pTVar4;
  TSlateDecl<SToolTip,RequiredArgs::T0RequiredArgs> *this_00;
  TSharedRef<SToolTip,1> *pTVar5;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> *this_01;
  TSharedRef<SButton,1> *pTVar6;
  FSlateApplication *this_02;
  FTextBlockStyle *pFVar7;
  longlong lVar8;
  code **ppcVar9;
  undefined1 *puVar10;
  pmf_dbeb5052 *ppVar11;
  T0RequiredArgs local_1428;
  T0RequiredArgs local_1427;
  T0RequiredArgs local_1426;
  T0RequiredArgs local_1425;
  short local_1424;
  int local_1420 [2];
  ISlateStyle *local_1418;
  FArguments *local_1410;
  FName *local_1408;
  FName local_1400;
  code *local_13f8;
  FSlateBrush *local_13f0;
  TAttribute<FSlateBrush_const_*> *local_13e8;
  TAttribute<FSlateBrush_const_*> *local_13e0;
  FArguments *local_13d8;
  TAttribute<FText> *local_13d0;
  TAttribute<FText> *local_13c8;
  FArguments *local_13c0;
  FName local_13b8;
  ISlateStyle *local_13b0;
  FArguments *local_13a8;
  ISlateStyle *local_13a0;
  FArguments *local_1398;
  FArguments *local_1390;
  FArguments *local_1388;
  FArguments *local_1380;
  TAttribute<TSharedPtr<IToolTip,1>_> *local_1378;
  TAttribute<TSharedPtr<IToolTip,1>_> *local_1370;
  FArguments *local_1368;
  TAttribute<FText> *local_1360;
  TAttribute<FText> *local_1358;
  FArguments *local_1350;
  FName local_1348;
  ISlateStyle *local_1340;
  FArguments *local_1338;
  ISlateStyle *local_1330;
  FArguments *local_1328;
  FArguments *local_1320;
  FArguments *local_1318;
  FArguments *local_1310;
  FSlateRenderer *local_1308;
  FName *local_1300;
  FName local_12f8;
  ISlateStyle *local_12f0;
  FSlateFontInfo *local_12e8;
  FSlateFontMeasure *local_12e0;
  TOptional<UE::Math::TVector2<double>_> *local_12d8;
  TOptional<UE::Math::TVector2<double>_> *local_12d0;
  code *local_12c8;
  undefined4 local_12c0;
  TSharedRef<SWidget,1> local_12b8;
  TSharedRef<SWidget,1> local_12a8;
  TSharedRef<FSlateFontMeasure,1> local_1298;
  TSharedRef<SWidget,1> local_1288;
  FName local_1278;
  FName local_1270;
  undefined1 local_1268 [16];
  pmf_dbeb5052 local_1258;
  TSharedRef<SButton,1> local_1248;
  TSharedRef<SRichTextBlock,1> local_1238;
  TSharedRef<SToolTip,1> local_1228;
  TSharedRef<SRichTextBlock,1> local_1218;
  FText local_1208;
  TAttribute<short> local_11f8;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_11d8;
  TSlateDecl<SRichTextBlock,RequiredArgs::T0RequiredArgs> local_11c0;
  TSlateDecl<SToolTip,RequiredArgs::T0RequiredArgs> local_11a8;
  TSlateDecl<SRichTextBlock,RequiredArgs::T0RequiredArgs> local_1190;
  TOptional<UE::Math::TVector2<double>_> local_1178;
  TAttribute<FSlateBrush_const_*> local_1160;
  TAttribute<TSharedPtr<IToolTip,1>_> local_1138;
  TAttribute<FText> local_1108;
  TAttribute<FText> local_10d8;
  FArguments local_10a8;
  FArguments local_d60;
  FArguments local_960;
  FArguments local_560;
  undefined8 uStack_18;
  
  uStack_18 = 0x1430d95b0;
  local_1410 = SButton::FArguments::FArguments(&local_560);
  local_12c8 = OnWidgetDecoratorClicked;
  local_12c0 = 0;
  ppcVar9 = &local_12c8;
  puVar10 = local_1268;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar10 = *(undefined1 *)ppcVar9;
    ppcVar9 = (code **)((longlong)ppcVar9 + 1);
    puVar10 = puVar10 + 1;
  }
  puVar10 = local_1268;
  ppVar11 = &local_1258;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined1 *)ppVar11 = *puVar10;
    puVar10 = puVar10 + 1;
    ppVar11 = (pmf_dbeb5052 *)&ppVar11->field_0x1;
  }
  local_1368 = SButton::FArguments::OnClicked<SRichTextTest>(local_1410,this,&local_1258);
  local_1378 = &local_1138;
  local_13d8 = SToolTip::FArguments::FArguments(&local_10a8);
  local_13e8 = &local_1160;
  local_1418 = FTestStyle::Get();
  local_13f8 = *(code **)((longlong)*local_1418 + 0x50);
  local_1408 = &local_1278;
  pFVar1 = ::FName::FName(local_1408,"RichText.Tagline.Background");
  local_1400 = *pFVar1;
  local_13f0 = (FSlateBrush *)(*local_13f8)(local_1418,local_1400,0,0);
  local_13e0 = TAttribute<FSlateBrush_const_*>::TAttribute<FSlateBrush_const_*>
                         (local_13e8,&local_13f0);
  local_1388 = SToolTip::FArguments::BorderImage(local_13d8,local_13e0);
  local_13c0 = SRichTextBlock::FArguments::FArguments(&local_960);
  local_13d0 = &local_1108;
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_1208,L"STestSuite",L"WidgetDecoratorTooltip",
                      L" With the <RichText.TextHighlight>Widget Decorator</> you can <RichText.TextHighlight>inline any widget</> in your text!"
                     );
  local_13c8 = TAttribute<FText>::TAttribute<FText>(local_13d0,pFVar2);
  local_13a8 = SRichTextBlock::FArguments::Text(local_13c0,local_13c8);
  ::FName::FName(&local_13b8,"RichText.Text");
  local_13b0 = FTestStyle::Get();
  local_1398 = SRichTextBlock::FArguments::TextStyle(local_13a8,local_13b0,&local_13b8,(char *)0x0);
  local_13a0 = FTestStyle::Get();
  local_1390 = SRichTextBlock::FArguments::DecoratorStyleSet(local_1398,local_13a0);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_1428);
  pTVar3 = MakeTDecl<SRichTextBlock,RequiredArgs::T0RequiredArgs>
                     (&local_1190,"SRichTextBlock",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x973,&local_1428);
  pTVar4 = TSlateDecl<SRichTextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar3,&local_1218,local_1390);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SRichTextBlock>(&local_12a8,pTVar4);
  local_1380 = SToolTip::FArguments::operator[](local_1388,&local_12a8);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_1427);
  this_00 = MakeTDecl<SToolTip,RequiredArgs::T0RequiredArgs>
                      (&local_11a8,"SToolTip",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0x970,&local_1427);
  pTVar5 = TSlateDecl<SToolTip,RequiredArgs::T0RequiredArgs>::operator<<=
                     (this_00,&local_1228,local_1380);
  local_1370 = TAttribute<TSharedPtr<IToolTip,1>_>::
               TAttribute<TSharedPtr<IToolTip,1>_><TSharedRef<SToolTip,1>_>(local_1378,pTVar5);
  local_1318 = TSlateBaseNamedArgs<SButton>::ToolTip
                         ((TSlateBaseNamedArgs<SButton> *)local_1368,local_1370);
  local_1350 = SRichTextBlock::FArguments::FArguments(&local_d60);
  local_1360 = &local_10d8;
  local_1358 = TAttribute<FText>::TAttribute<FText><FText>(local_1360,&param_1->Content);
  local_1338 = SRichTextBlock::FArguments::Text(local_1350,local_1358);
  ::FName::FName(&local_1348,"RichText.Text");
  local_1340 = FTestStyle::Get();
  local_1328 = SRichTextBlock::FArguments::TextStyle(local_1338,local_1340,&local_1348,(char *)0x0);
  local_1330 = FTestStyle::Get();
  local_1320 = SRichTextBlock::FArguments::DecoratorStyleSet(local_1328,local_1330);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_1426);
  pTVar3 = MakeTDecl<SRichTextBlock,RequiredArgs::T0RequiredArgs>
                     (&local_11c0,"SRichTextBlock",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x97a,&local_1426);
  pTVar4 = TSlateDecl<SRichTextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar3,&local_1238,local_1320);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SRichTextBlock>(&local_12b8,pTVar4);
  local_1310 = SButton::FArguments::operator[](local_1318,&local_12b8);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_1425);
  this_01 = MakeTDecl<SButton,RequiredArgs::T0RequiredArgs>
                      (&local_11d8,"SButton",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0x96e,&local_1425);
  pTVar6 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                     (this_01,&local_1248,local_1310);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SButton>(&local_1288,pTVar6);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_1248.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_11d8._Widget.SharedReferenceCount);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_12b8);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_1238.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_11c0._Widget.SharedReferenceCount);
  SRichTextBlock::FArguments::~FArguments(&local_d60);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_1228.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_11a8._Widget.SharedReferenceCount);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_12a8);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_1218.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_1190._Widget.SharedReferenceCount);
  FText::~FText(&local_1208);
  SRichTextBlock::FArguments::~FArguments(&local_960);
  SToolTip::FArguments::~FArguments(&local_10a8);
  SButton::FArguments::~FArguments(&local_560);
  this_02 = FSlateApplication::Get();
  local_1308 = FSlateApplicationBase::GetRenderer((FSlateApplicationBase *)this_02);
  FSlateRenderer::GetFontMeasureService(local_1308,&local_1298);
  local_12e0 = TSharedRef<FSlateFontMeasure,1>::operator->(&local_1298);
  local_12f0 = FTestStyle::Get();
  local_1300 = &local_1270;
  pFVar1 = ::FName::FName(local_1300,"RichText.Text");
  local_12f8 = *pFVar1;
  pFVar7 = ISlateStyle::GetWidgetStyle<FTextBlockStyle>
                     (local_12f0,local_12f8,(char *)0x0,(FTextBlockStyle *)0x0);
  local_12e8 = &pFVar7->Font;
  local_1424 = FSlateFontMeasure::GetBaseline(local_12e0,local_12e8,__real_3f800000);
  local_12d8 = &local_1178;
  local_12d0 = TOptional<UE::Math::TVector2<double>_>::TOptional<UE::Math::TVector2<double>_>
                         (local_12d8);
  local_1420[0] = local_1424 + -3;
  TAttribute<short>::TAttribute<short><int>(&local_11f8,local_1420);
  FSlateWidgetRun::FWidgetRunInfo::FWidgetRunInfo
            (__return_storage_ptr__,&local_1288,&local_11f8,local_12d0);
  TAttribute<short>::~TAttribute<short>(&local_11f8);
  TSharedRef<FSlateFontMeasure,1>::~TSharedRef<FSlateFontMeasure,1>(&local_1298);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_1288);
  return __return_storage_ptr__;
}

// OnHyperlinkDecoratorClicked @ 1430db310

void __thiscall
SRichTextTest::OnHyperlinkDecoratorClicked
          (SRichTextTest *this,
          TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
          *param_1)

{
  TSharedRef<SWidget,1> *pTVar1;
  FText *pFVar2;
  FText local_28;
  TSharedRef<SWidget,1> local_18;
  
  pTVar1 = TSharedFromThis<SWidget,1>::AsShared
                     ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_18);
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_28,L"STestSuite",L"HyperlinkDecoratorExamplePopUpMessage",
                      L"You\'re a <RichText.Tagline.TextHighlight>pro</> at clicking!");
  RichTextHelper::SpawnProClickerPopUp(pFVar2,pTVar1);
  FText::~FText(&local_28);
  return;
}

// OnTextChanged @ 1430e2770

void __thiscall SRichTextTest::OnTextChanged(SRichTextTest *this,FText *param_1)

{
  SRichTextBlock *this_00;
  TAttribute<FText> local_40;
  
  this_00 = TSharedPtr<SRichTextBlock,1>::operator->(&this->InteractiveRichText);
  TAttribute<FText>::TAttribute<FText><FText>(&local_40,param_1);
  SRichTextBlock::SetHighlightText(this_00,&local_40);
  TAttribute<FText>::~TAttribute<FText>(&local_40);
  return;
}

// OnWidgetDecoratorClicked @ 1430e31b0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SRichTextTest::OnWidgetDecoratorClicked(SRichTextTest *this,FReply *__return_storage_ptr__)

{
  TSharedRef<SWidget,1> *pTVar1;
  FText *pFVar2;
  FText local_28;
  TSharedRef<SWidget,1> local_18;
  
  pTVar1 = TSharedFromThis<SWidget,1>::AsShared
                     ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_18);
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_28,L"STestSuite",L"WidgetDecoratorExamplePopUpMessage",
                      L"I don\'t really do anything. <RichText.Tagline.TextHighlight>Sorry</>.");
  RichTextHelper::SpawnProClickerPopUp(pFVar2,pTVar1);
  FText::~FText(&local_28);
  FReply::Handled(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// SetBottomMargin @ 1430edbc0

void __thiscall SRichTextTest::SetBottomMargin(SRichTextTest *this,float param_1)

{
  (this->Margin).Bottom = param_1;
  return;
}

// SetLeftMargin @ 1430edfe0

void __thiscall SRichTextTest::SetLeftMargin(SRichTextTest *this,float param_1)

{
  (this->Margin).Left = param_1;
  return;
}

// SetLineHeight @ 1430ee010

void __thiscall SRichTextTest::SetLineHeight(SRichTextTest *this,float param_1)

{
  this->LineHeight = param_1;
  return;
}

// SetRightMargin @ 1430efe60

void __thiscall SRichTextTest::SetRightMargin(SRichTextTest *this,float param_1)

{
  (this->Margin).Right = param_1;
  return;
}

// SetTopMargin @ 1430f0270

void __thiscall SRichTextTest::SetTopMargin(SRichTextTest *this,float param_1)

{
  (this->Margin).Top = param_1;
  return;
}

// SetWrapWidth @ 1430f0330

void __thiscall SRichTextTest::SetWrapWidth(SRichTextTest *this,float param_1)

{
  this->WrapWidth = param_1;
  return;
}

// ShouldWrapRichText @ 1430f0380

ECheckBoxState __thiscall SRichTextTest::ShouldWrapRichText(SRichTextTest *this)

{
  return this->bShouldWrap != false;
}

// ShouldWrapRichTextChanged @ 1430f03c0

void __thiscall SRichTextTest::ShouldWrapRichTextChanged(SRichTextTest *this,ECheckBoxState param_1)

{
  this->bShouldWrap = param_1 == Checked;
  return;
}

