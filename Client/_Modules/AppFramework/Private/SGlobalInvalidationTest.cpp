// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 4

// <lambda_invoker_cdecl> @ 14303fce0

FText * __cdecl
`SGlobalInvalidationTest::Construct'::__l2::<lambda_1>::<lambda_invoker_cdecl>
          (FText *__return_storage_ptr__)

{
  undefined1 local_18 [4];
  undefined4 local_14;
  
  local_14 = 0;
  operator()(local_18,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// operator() @ 143063f90

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __thiscall
`SGlobalInvalidationTest::Construct'::__l2::<lambda_1>::operator()
          (void *this,FText *__return_storage_ptr__)

{
  FText *pFVar1;
  FText *pFVar2;
  FTextFormat *pFVar3;
  bool bVar4;
  FText *local_90;
  FText local_60;
  FText local_50;
  FText local_40;
  FText local_30;
  FTextFormat local_20 [2];
  
  bVar4 = !GSlateEnableGlobalInvalidation;
  if (bVar4) {
    local_90 = FText::AsLocalizable_Advanced_LocText(&local_50,L"STestSuite",L"On",L"On");
  }
  else {
    local_90 = FText::AsLocalizable_Advanced_LocText(&local_40,L"STestSuite",L"Off",L"Off");
  }
  pFVar1 = FText::FText(&local_30,local_90);
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_60,L"STestSuite",L"ToggleInvalidationMode",
                      L"Toggle Slate Global Invalidation [{0}]");
  pFVar3 = FTextFormat::FTextFormat(local_20,pFVar2,Default);
  FText::Format<FText>(__return_storage_ptr__,pFVar3,pFVar1);
  FText::~FText(&local_60);
  if (bVar4) {
    FText::~FText(&local_50);
  }
  else {
    FText::~FText(&local_40);
  }
  return __return_storage_ptr__;
}

// operator() @ 143065280

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

FReply * __thiscall
`SGlobalInvalidationTest::Construct'::__l2::<lambda_2>::operator()
          (void *this,FReply *__return_storage_ptr__)

{
  FSlateApplication *this_00;
  
  this_00 = FSlateApplication::Get();
  FSlateApplicationBase::ToggleGlobalInvalidation
            ((FSlateApplicationBase *)this_00,GSlateEnableGlobalInvalidation == false);
  FReply::Handled(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Construct @ 143080470

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
SGlobalInvalidationTest::Construct(SGlobalInvalidationTest *this,FArguments *param_1)

{
  FSlotArguments *pFVar1;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> *pTVar2;
  TSharedRef<SButton,1> *pTVar3;
  FText *pFVar4;
  TSlateDecl<SScrollBox,RequiredArgs::T0RequiredArgs> *this_00;
  TSharedRef<SScrollBox,1> *pTVar5;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> *this_01;
  TSharedRef<SBox,1> *pTVar6;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> *this_02;
  TSharedRef<SVerticalBox,1> *pTVar7;
  undefined1 auStackY_5608 [32];
  T0RequiredArgs local_55d8;
  T0RequiredArgs local_55d7;
  T0RequiredArgs local_55d6;
  T0RequiredArgs local_55d5;
  T0RequiredArgs local_55d4;
  T0RequiredArgs local_55d3;
  T0RequiredArgs local_55d2;
  T0RequiredArgs local_55d1;
  T0RequiredArgs local_55d0;
  T0RequiredArgs local_55cf;
  T0RequiredArgs local_55ce;
  T0RequiredArgs local_55cd;
  T0RequiredArgs local_55cc;
  T0RequiredArgs local_55cb;
  <lambda_1> local_55ca [2];
  int local_55c8 [2];
  undefined1 *local_55c0;
  FArguments *local_55b8;
  <lambda_2> local_55b0;
  <lambda_2> *local_55a8;
  <lambda_2> *local_55a0;
  FArguments *local_5598;
  FArguments *local_5590;
  FSlotArguments *local_5588;
  FSlotArguments *local_5580;
  FArguments *local_5578;
  undefined1 *local_5570;
  TAttribute<FOptionalSize> *local_5568;
  TAttribute<FOptionalSize> *local_5560;
  FArguments *local_5558;
  TAttribute<FOptionalSize> *local_5550;
  TAttribute<FOptionalSize> *local_5548;
  FArguments *local_5540;
  TAttribute<FText> *local_5538;
  TAttribute<FText> *local_5530;
  FArguments *local_5528;
  FArguments *local_5520;
  FSlotArguments *local_5518;
  FSlotArguments *local_5510;
  FArguments *local_5508;
  TAttribute<FText> *local_5500;
  TAttribute<FText> *local_54f8;
  FArguments *local_54f0;
  FArguments *local_54e8;
  FSlotArguments *local_54e0;
  FSlotArguments *local_54d8;
  FArguments *local_54d0;
  TAttribute<FText> *local_54c8;
  TAttribute<FText> *local_54c0;
  FArguments *local_54b8;
  FArguments *local_54b0;
  FSlotArguments *local_54a8;
  FSlotArguments *local_54a0;
  FArguments *local_5498;
  TAttribute<FText> *local_5490;
  TAttribute<FText> *local_5488;
  FArguments *local_5480;
  FArguments *local_5478;
  FSlotArguments *local_5470;
  FSlotArguments *local_5468;
  FArguments *local_5460;
  TAttribute<FText> *local_5458;
  TAttribute<FText> *local_5450;
  FArguments *local_5448;
  FArguments *local_5440;
  FSlotArguments *local_5438;
  FSlotArguments *local_5430;
  FArguments *local_5428;
  TAttribute<FText> *local_5420;
  TAttribute<FText> *local_5418;
  FArguments *local_5410;
  FArguments *local_5408;
  FSlotArguments *local_5400;
  FSlotArguments *local_53f8;
  FArguments *local_53f0;
  TAttribute<FText> *local_53e8;
  TAttribute<FText> *local_53e0;
  FArguments *local_53d8;
  FArguments *local_53d0;
  FSlotArguments *local_53c8;
  FSlotArguments *local_53c0;
  FArguments *local_53b8;
  TAttribute<FText> *local_53b0;
  TAttribute<FText> *local_53a8;
  FArguments *local_53a0;
  FArguments *local_5398;
  FSlotArguments *local_5390;
  FSlotArguments *local_5388;
  FArguments *local_5380;
  TAttribute<FText> *local_5378;
  TAttribute<FText> *local_5370;
  FArguments *local_5368;
  FArguments *local_5360;
  FSlotArguments *local_5358;
  FSlotArguments *local_5350;
  FArguments *local_5348;
  TAttribute<FText> *local_5340;
  TAttribute<FText> *local_5338;
  FArguments *local_5330;
  FArguments *local_5328;
  FSlotArguments *local_5320;
  FSlotArguments *local_5318;
  FArguments *local_5310;
  FArguments *local_5308;
  FArguments *local_5300;
  FArguments *local_52f8;
  FSlotArguments *local_52f0;
  FSlotArguments *local_52e8;
  FArguments *local_52e0;
  FArguments *local_52d8;
  TSingleWidgetChildrenWithBasicLayoutSlot<0> *local_52d0;
  TSharedRef<SWidget,1> local_52c8;
  TSharedRef<SWidget,1> local_52b8;
  TSharedRef<SWidget,1> local_52a8;
  TSharedRef<SWidget,1> local_5298;
  TSharedRef<SWidget,1> local_5288;
  TSharedRef<SWidget,1> local_5278;
  TSharedRef<SWidget,1> local_5268;
  TSharedRef<SWidget,1> local_5258;
  TSharedRef<SWidget,1> local_5248;
  TSharedRef<SWidget,1> local_5238;
  TSharedRef<SWidget,1> local_5228;
  TSharedRef<SWidget,1> local_5218;
  TSharedRef<SWidget,1> local_5208;
  TSharedRef<SWidget,1> local_51f8;
  TSharedRef<SVerticalBox,1> local_51e8;
  TSharedRef<SBox,1> local_51d8;
  TSharedRef<SScrollBox,1> local_51c8;
  TSharedRef<SButton,1> local_51b8;
  FText local_51a8;
  TSharedRef<SButton,1> local_5198;
  FText local_5188;
  TSharedRef<SButton,1> local_5178;
  FText local_5168;
  TSharedRef<SButton,1> local_5158;
  FText local_5148;
  TSharedRef<SButton,1> local_5138;
  FText local_5128;
  TSharedRef<SButton,1> local_5118;
  FText local_5108;
  TSharedRef<SButton,1> local_50f8;
  FText local_50e8;
  TSharedRef<SButton,1> local_50d8;
  FText local_50c8;
  TSharedRef<SButton,1> local_50b8;
  FText local_50a8;
  TSharedRef<SButton,1> local_5098;
  FText local_5088;
  TSharedRef<SButton,1> local_5078;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_5068;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_5050;
  TSlateDecl<SScrollBox,RequiredArgs::T0RequiredArgs> local_5038;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_5020;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_5008;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_4ff0;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_4fd8;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_4fc0;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_4fa8;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_4f90;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_4f78;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_4f60;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_4f48;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_4f30;
  TAttribute<FOptionalSize> local_4f18;
  TAttribute<FOptionalSize> local_4ef8;
  TAttribute<FText> local_4ed8;
  TAttribute<FText> local_4ea8;
  TAttribute<FText> local_4e78;
  TAttribute<FText> local_4e48;
  TAttribute<FText> local_4e18;
  TAttribute<FText> local_4de8;
  TAttribute<FText> local_4db8;
  TAttribute<FText> local_4d88;
  TAttribute<FText> local_4d58;
  TAttribute<FText> local_4d28;
  FSlotArguments local_4cf8;
  FSlotArguments local_4c10;
  FSlotArguments local_4b28;
  FSlotArguments local_4a40;
  FSlotArguments local_4958;
  FSlotArguments local_4870;
  FSlotArguments local_4788;
  FSlotArguments local_46a0;
  FSlotArguments local_45b8;
  FSlotArguments local_44d0;
  FSlotArguments local_43e8;
  FSlotArguments local_4300;
  FArguments local_4218;
  FArguments local_4010;
  FArguments local_3d48;
  FArguments local_3a08;
  FArguments local_34c8;
  FArguments local_2f88;
  FArguments local_2a48;
  FArguments local_2508;
  FArguments local_1fc8;
  FArguments local_1a88;
  FArguments local_1548;
  FArguments local_1008;
  FArguments local_ac8;
  FArguments local_588;
  TFunction<FText___cdecl(void)> local_48;
  ulonglong local_18;
  undefined8 uStack_8;
  
  uStack_8 = 0x143080484;
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_5608;
  local_55c0 = &this->field_0x258;
  local_52d0 = TPaddingSingleWidgetSlotMixin<TSingleWidgetChildrenWithBasicLayoutSlot<0>,0>::Padding
                         ((TPaddingSingleWidgetSlotMixin<TSingleWidgetChildrenWithBasicLayoutSlot<0>,0>
                           *)local_55c0,__real_41200000);
  local_5578 = SVerticalBox::FArguments::FArguments(&local_4218);
  pFVar1 = SVerticalBox::Slot(&local_4cf8);
  local_5588 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar1);
  local_55b8 = SButton::FArguments::FArguments(&local_588);
  TFunction<FText___cdecl(void)>::
  TFunction<FText___cdecl(void)><_SGlobalInvalidationTest::Construct_::__l2::<lambda_1>_>
            (&local_48,local_55ca);
  local_5598 = SButton::FArguments::Text_Lambda(local_55b8,&local_48);
  local_55a8 = &local_55b0;
  local_55b0.__this = this;
  local_55a0 = local_55a8;
  local_5590 = SButton::FArguments::
               OnClicked_Lambda<_SGlobalInvalidationTest::Construct_::__l2::<lambda_2>_>
                         (local_5598,local_55a8);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_55d8);
  pTVar2 = MakeTDecl<SButton,RequiredArgs::T0RequiredArgs>
                     (&local_4f30,"SButton",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x11c6,&local_55d8);
  pTVar3 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar2,&local_5078,local_5590);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SButton>(&local_51f8,pTVar3);
  local_5580 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_5588,&local_51f8);
  local_52e0 = SVerticalBox::FArguments::operator+(local_5578,local_5580);
  pFVar1 = SVerticalBox::Slot(&local_4300);
  pFVar1 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar1);
  local_5570 = &pFVar1->field_0x48;
  local_52f0 = TAlignmentWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::HAlign
                         ((FSlotArgumentsMixin *)local_5570,HAlign_Left);
  local_5558 = SBox::FArguments::FArguments(&local_3d48);
  local_5568 = &local_4f18;
  local_55c8[0] = 200;
  local_5560 = TAttribute<FOptionalSize>::TAttribute<FOptionalSize><int>(local_5568,local_55c8);
  local_5540 = SBox::FArguments::WidthOverride(local_5558,local_5560);
  local_5550 = &local_4ef8;
  local_55c8[1] = 0x96;
  local_5548 = TAttribute<FOptionalSize>::TAttribute<FOptionalSize><int>(local_5550,local_55c8 + 1);
  local_5300 = SBox::FArguments::HeightOverride(local_5540,local_5548);
  local_5508 = SScrollBox::FArguments::FArguments(&local_4010);
  local_5518 = SScrollBox::Slot(&local_43e8);
  local_5528 = SButton::FArguments::FArguments(&local_ac8);
  local_5538 = &local_4ea8;
  pFVar4 = FText::AsLocalizable_Advanced_LocText(&local_5088,L"STestSuite",L"Button",L"Button");
  local_5530 = TAttribute<FText>::TAttribute<FText>(local_5538,pFVar4);
  local_5520 = SButton::FArguments::Text(local_5528,local_5530);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_55d7);
  pTVar2 = MakeTDecl<SButton,RequiredArgs::T0RequiredArgs>
                     (&local_4f48,"SButton",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x11dc,&local_55d7);
  pTVar3 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar2,&local_5098,local_5520);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SButton>(&local_5208,pTVar3);
  local_5510 = TSlotBase<SScrollBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_5518,&local_5208);
  local_54d0 = SScrollBox::FArguments::operator+(local_5508,local_5510);
  local_54e0 = SScrollBox::Slot(&local_44d0);
  local_54f0 = SButton::FArguments::FArguments(&local_1008);
  local_5500 = &local_4e78;
  pFVar4 = FText::AsLocalizable_Advanced_LocText(&local_50a8,L"STestSuite",L"Button",L"Button");
  local_54f8 = TAttribute<FText>::TAttribute<FText>(local_5500,pFVar4);
  local_54e8 = SButton::FArguments::Text(local_54f0,local_54f8);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_55d6);
  pTVar2 = MakeTDecl<SButton,RequiredArgs::T0RequiredArgs>
                     (&local_4f60,"SButton",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x11dd,&local_55d6);
  pTVar3 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar2,&local_50b8,local_54e8);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SButton>(&local_5218,pTVar3);
  local_54d8 = TSlotBase<SScrollBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_54e0,&local_5218);
  local_5498 = SScrollBox::FArguments::operator+(local_54d0,local_54d8);
  local_54a8 = SScrollBox::Slot(&local_45b8);
  local_54b8 = SButton::FArguments::FArguments(&local_1548);
  local_54c8 = &local_4e48;
  pFVar4 = FText::AsLocalizable_Advanced_LocText(&local_50c8,L"STestSuite",L"Button",L"Button");
  local_54c0 = TAttribute<FText>::TAttribute<FText>(local_54c8,pFVar4);
  local_54b0 = SButton::FArguments::Text(local_54b8,local_54c0);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_55d5);
  pTVar2 = MakeTDecl<SButton,RequiredArgs::T0RequiredArgs>
                     (&local_4f78,"SButton",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x11de,&local_55d5);
  pTVar3 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar2,&local_50d8,local_54b0);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SButton>(&local_5228,pTVar3);
  local_54a0 = TSlotBase<SScrollBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_54a8,&local_5228);
  local_5460 = SScrollBox::FArguments::operator+(local_5498,local_54a0);
  local_5470 = SScrollBox::Slot(&local_46a0);
  local_5480 = SButton::FArguments::FArguments(&local_1a88);
  local_5490 = &local_4e18;
  pFVar4 = FText::AsLocalizable_Advanced_LocText(&local_50e8,L"STestSuite",L"Button",L"Button");
  local_5488 = TAttribute<FText>::TAttribute<FText>(local_5490,pFVar4);
  local_5478 = SButton::FArguments::Text(local_5480,local_5488);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_55d4);
  pTVar2 = MakeTDecl<SButton,RequiredArgs::T0RequiredArgs>
                     (&local_4f90,"SButton",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x11df,&local_55d4);
  pTVar3 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar2,&local_50f8,local_5478);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SButton>(&local_5238,pTVar3);
  local_5468 = TSlotBase<SScrollBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_5470,&local_5238);
  local_5428 = SScrollBox::FArguments::operator+(local_5460,local_5468);
  local_5438 = SScrollBox::Slot(&local_4788);
  local_5448 = SButton::FArguments::FArguments(&local_1fc8);
  local_5458 = &local_4de8;
  pFVar4 = FText::AsLocalizable_Advanced_LocText(&local_5108,L"STestSuite",L"Button",L"Button");
  local_5450 = TAttribute<FText>::TAttribute<FText>(local_5458,pFVar4);
  local_5440 = SButton::FArguments::Text(local_5448,local_5450);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_55d3);
  pTVar2 = MakeTDecl<SButton,RequiredArgs::T0RequiredArgs>
                     (&local_4fa8,"SButton",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x11e0,&local_55d3);
  pTVar3 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar2,&local_5118,local_5440);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SButton>(&local_5248,pTVar3);
  local_5430 = TSlotBase<SScrollBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_5438,&local_5248);
  local_53f0 = SScrollBox::FArguments::operator+(local_5428,local_5430);
  local_5400 = SScrollBox::Slot(&local_4870);
  local_5410 = SButton::FArguments::FArguments(&local_2508);
  local_5420 = &local_4db8;
  pFVar4 = FText::AsLocalizable_Advanced_LocText(&local_5128,L"STestSuite",L"Button",L"Button");
  local_5418 = TAttribute<FText>::TAttribute<FText>(local_5420,pFVar4);
  local_5408 = SButton::FArguments::Text(local_5410,local_5418);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_55d2);
  pTVar2 = MakeTDecl<SButton,RequiredArgs::T0RequiredArgs>
                     (&local_4fc0,"SButton",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x11e1,&local_55d2);
  pTVar3 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar2,&local_5138,local_5408);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SButton>(&local_5258,pTVar3);
  local_53f8 = TSlotBase<SScrollBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_5400,&local_5258);
  local_53b8 = SScrollBox::FArguments::operator+(local_53f0,local_53f8);
  local_53c8 = SScrollBox::Slot(&local_4958);
  local_53d8 = SButton::FArguments::FArguments(&local_2a48);
  local_53e8 = &local_4d88;
  pFVar4 = FText::AsLocalizable_Advanced_LocText(&local_5148,L"STestSuite",L"Button",L"Button");
  local_53e0 = TAttribute<FText>::TAttribute<FText>(local_53e8,pFVar4);
  local_53d0 = SButton::FArguments::Text(local_53d8,local_53e0);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_55d1);
  pTVar2 = MakeTDecl<SButton,RequiredArgs::T0RequiredArgs>
                     (&local_4fd8,"SButton",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x11e2,&local_55d1);
  pTVar3 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar2,&local_5158,local_53d0);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SButton>(&local_5268,pTVar3);
  local_53c0 = TSlotBase<SScrollBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_53c8,&local_5268);
  local_5380 = SScrollBox::FArguments::operator+(local_53b8,local_53c0);
  local_5390 = SScrollBox::Slot(&local_4a40);
  local_53a0 = SButton::FArguments::FArguments(&local_2f88);
  local_53b0 = &local_4d58;
  pFVar4 = FText::AsLocalizable_Advanced_LocText(&local_5168,L"STestSuite",L"Button",L"Button");
  local_53a8 = TAttribute<FText>::TAttribute<FText>(local_53b0,pFVar4);
  local_5398 = SButton::FArguments::Text(local_53a0,local_53a8);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_55d0);
  pTVar2 = MakeTDecl<SButton,RequiredArgs::T0RequiredArgs>
                     (&local_4ff0,"SButton",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x11e3,&local_55d0);
  pTVar3 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar2,&local_5178,local_5398);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SButton>(&local_5278,pTVar3);
  local_5388 = TSlotBase<SScrollBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_5390,&local_5278);
  local_5348 = SScrollBox::FArguments::operator+(local_5380,local_5388);
  local_5358 = SScrollBox::Slot(&local_4b28);
  local_5368 = SButton::FArguments::FArguments(&local_34c8);
  local_5378 = &local_4d28;
  pFVar4 = FText::AsLocalizable_Advanced_LocText(&local_5188,L"STestSuite",L"Button",L"Button");
  local_5370 = TAttribute<FText>::TAttribute<FText>(local_5378,pFVar4);
  local_5360 = SButton::FArguments::Text(local_5368,local_5370);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_55cf);
  pTVar2 = MakeTDecl<SButton,RequiredArgs::T0RequiredArgs>
                     (&local_5008,"SButton",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x11e4,&local_55cf);
  pTVar3 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar2,&local_5198,local_5360);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SButton>(&local_5288,pTVar3);
  local_5350 = TSlotBase<SScrollBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_5358,&local_5288);
  local_5310 = SScrollBox::FArguments::operator+(local_5348,local_5350);
  local_5320 = SScrollBox::Slot(&local_4c10);
  local_5330 = SButton::FArguments::FArguments(&local_3a08);
  local_5340 = &local_4ed8;
  pFVar4 = FText::AsLocalizable_Advanced_LocText(&local_51a8,L"STestSuite",L"Button",L"Button");
  local_5338 = TAttribute<FText>::TAttribute<FText>(local_5340,pFVar4);
  local_5328 = SButton::FArguments::Text(local_5330,local_5338);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_55ce);
  pTVar2 = MakeTDecl<SButton,RequiredArgs::T0RequiredArgs>
                     (&local_5020,"SButton",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x11e5,&local_55ce);
  pTVar3 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar2,&local_51b8,local_5328);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SButton>(&local_5298,pTVar3);
  local_5318 = TSlotBase<SScrollBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_5320,&local_5298);
  local_5308 = SScrollBox::FArguments::operator+(local_5310,local_5318);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_55cd);
  this_00 = MakeTDecl<SScrollBox,RequiredArgs::T0RequiredArgs>
                      (&local_5038,"SScrollBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0x11da,&local_55cd);
  pTVar5 = TSlateDecl<SScrollBox,RequiredArgs::T0RequiredArgs>::operator<<=
                     (this_00,&local_51c8,local_5308);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SScrollBox>(&local_52a8,pTVar5);
  local_52f8 = SBox::FArguments::operator[](local_5300,&local_52a8);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_55cc);
  this_01 = MakeTDecl<SBox,RequiredArgs::T0RequiredArgs>
                      (&local_5050,"SBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0x11d6,&local_55cc);
  pTVar6 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                     (this_01,&local_51d8,local_52f8);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SBox>(&local_52b8,pTVar6);
  local_52e8 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_52f0,&local_52b8);
  local_52d8 = SVerticalBox::FArguments::operator+(local_52e0,local_52e8);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_55cb);
  this_02 = MakeTDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
                      (&local_5068,"SVerticalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0x11c1,&local_55cb);
  pTVar7 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                     (this_02,&local_51e8,local_52d8);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SVerticalBox>(&local_52c8,pTVar7);
  TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>::operator[]
            ((TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *)
             local_52d0,&local_52c8);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_52c8);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_51e8.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_5068._Widget.SharedReferenceCount);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_52b8);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_51d8.SharedReferenceCount);
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::~TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
            (&local_5050);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_52a8);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_51c8.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_5038._Widget.SharedReferenceCount);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_5298);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_51b8.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_5020._Widget.SharedReferenceCount);
  FText::~FText(&local_51a8);
  SButton::FArguments::~FArguments(&local_3a08);
  SScrollBox::FSlot::FSlotArguments::~FSlotArguments(&local_4c10);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_5288);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_5198.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_5008._Widget.SharedReferenceCount);
  FText::~FText(&local_5188);
  SButton::FArguments::~FArguments(&local_34c8);
  SScrollBox::FSlot::FSlotArguments::~FSlotArguments(&local_4b28);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_5278);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_5178.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_4ff0._Widget.SharedReferenceCount);
  FText::~FText(&local_5168);
  SButton::FArguments::~FArguments(&local_2f88);
  SScrollBox::FSlot::FSlotArguments::~FSlotArguments(&local_4a40);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_5268);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_5158.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_4fd8._Widget.SharedReferenceCount);
  FText::~FText(&local_5148);
  SButton::FArguments::~FArguments(&local_2a48);
  SScrollBox::FSlot::FSlotArguments::~FSlotArguments(&local_4958);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_5258);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_5138.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_4fc0._Widget.SharedReferenceCount);
  FText::~FText(&local_5128);
  SButton::FArguments::~FArguments(&local_2508);
  SScrollBox::FSlot::FSlotArguments::~FSlotArguments(&local_4870);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_5248);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_5118.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_4fa8._Widget.SharedReferenceCount);
  FText::~FText(&local_5108);
  SButton::FArguments::~FArguments(&local_1fc8);
  SScrollBox::FSlot::FSlotArguments::~FSlotArguments(&local_4788);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_5238);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_50f8.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_4f90._Widget.SharedReferenceCount);
  FText::~FText(&local_50e8);
  SButton::FArguments::~FArguments(&local_1a88);
  SScrollBox::FSlot::FSlotArguments::~FSlotArguments(&local_46a0);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_5228);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_50d8.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_4f78._Widget.SharedReferenceCount);
  FText::~FText(&local_50c8);
  SButton::FArguments::~FArguments(&local_1548);
  SScrollBox::FSlot::FSlotArguments::~FSlotArguments(&local_45b8);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_5218);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_50b8.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_4f60._Widget.SharedReferenceCount);
  FText::~FText(&local_50a8);
  SButton::FArguments::~FArguments(&local_1008);
  SScrollBox::FSlot::FSlotArguments::~FSlotArguments(&local_44d0);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_5208);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_5098.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_4f48._Widget.SharedReferenceCount);
  FText::~FText(&local_5088);
  SButton::FArguments::~FArguments(&local_ac8);
  SScrollBox::FSlot::FSlotArguments::~FSlotArguments(&local_43e8);
  SScrollBox::FArguments::~FArguments(&local_4010);
  SBox::FArguments::~FArguments(&local_3d48);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_4300);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_51f8);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_5078.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_4f30._Widget.SharedReferenceCount);
  TFunction<FText___cdecl(void)>::~TFunction<FText___cdecl(void)>(&local_48);
  SButton::FArguments::~FArguments(&local_588);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_4cf8);
  TArray<SVerticalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>::
  ~TArray<SVerticalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>(&local_4218._Slots);
  TSlateBaseNamedArgs<SVerticalBox>::~TSlateBaseNamedArgs<SVerticalBox>
            ((TSlateBaseNamedArgs<SVerticalBox> *)&local_4218);
  return;
}

