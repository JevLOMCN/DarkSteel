// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 15

// SElementTesting @ 14305cd20

SElementTesting * __thiscall SElementTesting::SElementTesting(SElementTesting *this)

{
  SCompoundWidget::SCompoundWidget((SCompoundWidget *)this);
  this->_padding_ = (longlong)&___7SElementTesting__6B_;
  TSharedPtr<SVerticalBox,1>::TSharedPtr<SVerticalBox,1>(&this->VerticalBox,(FNullTag *)0x0);
  this->CenterRotation = 0.0;
  this->OuterRotation = 0.0;
  return this;
}

// ~SElementTesting @ 1430620f0

void __thiscall SElementTesting::~SElementTesting(SElementTesting *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&(this->VerticalBox).SharedReferenceCount);
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  return;
}

// Construct @ 14307b630

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SElementTesting::Construct(SElementTesting *this,FArguments *param_1)

{
  FSlotArguments *pFVar1;
  FText *pFVar2;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> *this_00;
  TSharedRef<SButton,1> *pTVar3;
  TSlateDecl<SCustomPaintWidget,RequiredArgs::T0RequiredArgs> *pTVar4;
  TSharedRef<SCustomPaintWidget,1> *pTVar5;
  TSlateDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs> *this_01;
  TSharedRef<SSpinBox<float>,1> *pTVar6;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> *pTVar7;
  TSharedRef<SVerticalBox,1> *pTVar8;
  TSlateDecl<SDynamicBrushTest,RequiredArgs::T0RequiredArgs> *this_02;
  TSharedRef<SDynamicBrushTest,1> *pTVar9;
  longlong lVar10;
  code **ppcVar11;
  undefined1 *puVar12;
  pmf_7c434c8b *ppVar13;
  pmf_162fa5fe *ppVar14;
  pmf_3bfb421c *ppVar15;
  pmf_9586dc1b *ppVar16;
  T0RequiredArgs local_3708;
  T0RequiredArgs local_3707;
  T0RequiredArgs local_3706;
  T0RequiredArgs local_3705;
  T0RequiredArgs local_3704;
  T0RequiredArgs local_3703;
  T0RequiredArgs local_3702;
  T0RequiredArgs local_3701;
  T0RequiredArgs local_3700;
  T0RequiredArgs local_36ff;
  T0RequiredArgs local_36fe;
  T0RequiredArgs local_36fd;
  T0RequiredArgs local_36fc [4];
  int local_36f8 [3];
  float local_36ec;
  float local_36e8;
  int local_36e4 [5];
  undefined1 *local_36d0;
  TAttribute<FText> *local_36c8;
  TAttribute<FText> *local_36c0;
  FArguments *local_36b8;
  FArguments *local_36b0;
  FArguments *local_36a8;
  FSlotArguments *local_36a0;
  FSlotArguments *local_3698;
  FArguments *local_3690;
  TAttribute<float> *local_3688;
  TAttribute<float> *local_3680;
  FSlotArguments *local_3678;
  TAttribute<float> *local_3670;
  TAttribute<float> *local_3668;
  FSlotArguments *local_3660;
  FArguments *local_3658;
  FArguments *local_3650;
  FSlotArguments *local_3648;
  FSlotArguments *local_3640;
  FArguments *local_3638;
  TAttribute<float> *local_3630;
  TAttribute<float> *local_3628;
  FSlotArguments *local_3620;
  undefined1 *local_3618;
  undefined1 *local_3610;
  TAttribute<float> *local_3608;
  TAttribute<float> *local_3600;
  FArguments *local_35f8;
  FArguments *local_35f0;
  FArguments *local_35e8;
  FArguments *local_35e0;
  FSlotArguments *local_35d8;
  FSlotArguments *local_35d0;
  FArguments *local_35c8;
  TAttribute<float> *local_35c0;
  TAttribute<float> *local_35b8;
  FSlotArguments *local_35b0;
  FArguments *local_35a8;
  FArguments *local_35a0;
  FSlotArguments *local_3598;
  FSlotArguments *local_3590;
  FArguments *local_3588;
  FArguments *local_3580;
  FSlotArguments *local_3578;
  FSlotArguments *local_3570;
  FArguments *local_3568;
  TAttribute<float> *local_3560;
  TAttribute<float> *local_3558;
  FSlotArguments *local_3550;
  FArguments *local_3548;
  FArguments *local_3540;
  FSlotArguments *local_3538;
  FSlotArguments *local_3530;
  FArguments *local_3528;
  FArguments *local_3520;
  FArguments *local_3518;
  FSlotArguments *local_3510;
  FSlotArguments *local_3508;
  FArguments *local_3500;
  FArguments *local_34f8;
  FArguments *local_34f0;
  FSlotArguments *local_34e8;
  FSlotArguments *local_34e0;
  FArguments *local_34d8;
  TAttribute<float> *local_34d0;
  TAttribute<float> *local_34c8;
  FSlotArguments *local_34c0;
  FArguments *local_34b8;
  FArguments *local_34b0;
  FSlotArguments *local_34a8;
  FSlotArguments *local_34a0;
  FArguments *local_3498;
  TAttribute<float> *local_3490;
  TAttribute<float> *local_3488;
  FSlotArguments *local_3480;
  FArguments *local_3478;
  FArguments *local_3470;
  FSlotArguments *local_3468;
  FSlotArguments *local_3460;
  FArguments *local_3458;
  TAttribute<float> *local_3450;
  TAttribute<float> *local_3448;
  FSlotArguments *local_3440;
  FArguments *local_3438;
  FSlotArguments *local_3430;
  FSlotArguments *local_3428;
  FArguments *local_3420;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> *local_3418;
  FArguments *local_3410;
  FSlotArguments *local_3408;
  FSlotArguments *local_3400;
  FArguments *local_33f8;
  FArguments *local_33f0;
  TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *local_33e8;
  code *local_33e0;
  undefined4 local_33d8;
  code *local_33d0;
  undefined4 local_33c8;
  code *local_33c0;
  undefined4 local_33b8;
  code *local_33b0;
  undefined4 local_33a8;
  code *local_33a0;
  undefined4 local_3398;
  code *local_3390;
  undefined4 local_3388;
  code *local_3380;
  undefined4 local_3378;
  code *local_3370;
  undefined4 local_3368;
  code *local_3360;
  undefined4 local_3358;
  code *local_3350;
  undefined4 local_3348;
  TSharedRef<SWidget,1> local_3340;
  TSharedRef<SWidget,1> local_3330;
  TSharedRef<SWidget,1> local_3320;
  TSharedRef<SWidget,1> local_3310;
  TSharedRef<SWidget,1> local_3300;
  TSharedRef<SWidget,1> local_32f0;
  TSharedRef<SWidget,1> local_32e0;
  TSharedRef<SWidget,1> local_32d0;
  TSharedRef<SWidget,1> local_32c0;
  TSharedRef<SWidget,1> local_32b0;
  TSharedRef<SWidget,1> local_32a0;
  TSharedRef<SWidget,1> local_3290;
  TSharedRef<SWidget,1> local_3280;
  undefined1 local_3270 [24];
  pmf_7c434c8b local_3258;
  undefined1 local_3248 [16];
  pmf_9586dc1b local_3238;
  undefined1 local_3228 [16];
  pmf_162fa5fe local_3218;
  undefined1 local_3208 [16];
  pmf_3bfb421c local_31f8;
  undefined1 local_31e8 [16];
  pmf_9586dc1b local_31d8;
  undefined1 local_31c8 [16];
  pmf_9586dc1b local_31b8;
  undefined1 local_31a8 [16];
  pmf_9586dc1b local_3198;
  undefined1 local_3188 [16];
  pmf_9586dc1b local_3178;
  undefined1 local_3168 [16];
  pmf_9586dc1b local_3158;
  undefined1 local_3148 [16];
  pmf_9586dc1b local_3138;
  TSharedRef<SVerticalBox,1> local_3128;
  TSharedRef<SVerticalBox,1> local_3118;
  TSharedRef<SDynamicBrushTest,1> local_3108;
  TSharedRef<SCustomPaintWidget,1> local_30f8;
  TSharedRef<SCustomPaintWidget,1> local_30e8;
  TSharedRef<SCustomPaintWidget,1> local_30d8;
  TSharedRef<SCustomPaintWidget,1> local_30c8;
  TSharedRef<SCustomPaintWidget,1> local_30b8;
  TSharedRef<SVerticalBox,1> local_30a8;
  TSharedRef<SCustomPaintWidget,1> local_3098;
  TSharedRef<SSpinBox<float>,1> local_3088;
  TSharedRef<SCustomPaintWidget,1> local_3078;
  TSharedRef<SButton,1> local_3068;
  FText local_3058;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_3048;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_3030;
  TSlateDecl<SDynamicBrushTest,RequiredArgs::T0RequiredArgs> local_3018;
  TSlateDecl<SCustomPaintWidget,RequiredArgs::T0RequiredArgs> local_3000;
  TSlateDecl<SCustomPaintWidget,RequiredArgs::T0RequiredArgs> local_2fe8;
  TSlateDecl<SCustomPaintWidget,RequiredArgs::T0RequiredArgs> local_2fd0;
  TSlateDecl<SCustomPaintWidget,RequiredArgs::T0RequiredArgs> local_2fb8;
  TSlateDecl<SCustomPaintWidget,RequiredArgs::T0RequiredArgs> local_2fa0;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_2f88;
  TSlateDecl<SCustomPaintWidget,RequiredArgs::T0RequiredArgs> local_2f70;
  TSlateDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs> local_2f58;
  TSlateDecl<SCustomPaintWidget,RequiredArgs::T0RequiredArgs> local_2f40;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_2f28;
  TAttribute<float> local_2f10;
  TAttribute<float> local_2ef0;
  TAttribute<float> local_2ed0;
  TAttribute<float> local_2eb0;
  TAttribute<float> local_2e90;
  TAttribute<float> local_2e70;
  TAttribute<float> local_2e50;
  TAttribute<float> local_2e30;
  TAttribute<float> local_2e10;
  TAttribute<FText> local_2df0;
  FSlotArguments local_2dc0;
  FSlotArguments local_2cd8;
  FSlotArguments local_2bf0;
  FSlotArguments local_2b08;
  FSlotArguments local_2a20;
  FSlotArguments local_2938;
  FSlotArguments local_2850;
  FSlotArguments local_2768;
  FSlotArguments local_2680;
  FSlotArguments local_2598;
  FSlotArguments local_24b0;
  FSlotArguments local_23c8;
  FArguments local_22e0;
  FArguments local_20d0;
  FArguments local_1ec8;
  FArguments local_1cc0;
  FArguments local_1ab8;
  FArguments local_18a8;
  FArguments local_1698;
  FArguments local_1488;
  FArguments local_1278;
  FArguments local_1068;
  FSlateBaseNamedArgs local_e58;
  FArguments local_c60;
  FArguments local_720;
  undefined8 uStack_18;
  
  uStack_18 = 0x14307b646;
  this->FontScale = __real_3f800000;
  local_33e8 = (TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *)
               &this->_padding_;
  local_3690 = SVerticalBox::FArguments::FArguments(&local_1cc0);
  pFVar1 = SVerticalBox::Slot(&local_23c8);
  pFVar1 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar1);
  local_36d0 = &pFVar1->field_0x48;
  local_36a0 = TAlignmentWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::HAlign
                         ((FSlotArgumentsMixin *)local_36d0,HAlign_Right);
  local_36b8 = SButton::FArguments::FArguments(&local_c60);
  local_36c8 = &local_2df0;
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_3058,L"STestSuite",L"DisableButton",L"Disable");
  local_36c0 = TAttribute<FText>::TAttribute<FText>(local_36c8,pFVar2);
  local_36b0 = SButton::FArguments::Text(local_36b8,local_36c0);
  local_33e0 = OnDisableClicked;
  local_33d8 = 0;
  ppcVar11 = &local_33e0;
  puVar12 = local_3270;
  for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *puVar12 = *(undefined1 *)ppcVar11;
    ppcVar11 = (code **)((longlong)ppcVar11 + 1);
    puVar12 = puVar12 + 1;
  }
  puVar12 = local_3270;
  ppVar13 = &local_3258;
  for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *(undefined1 *)ppVar13 = *puVar12;
    puVar12 = puVar12 + 1;
    ppVar13 = (pmf_7c434c8b *)&ppVar13->field_0x1;
  }
  local_36a8 = SButton::FArguments::OnClicked<SElementTesting>(local_36b0,this,&local_3258);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_3708);
  this_00 = MakeTDecl<SButton,RequiredArgs::T0RequiredArgs>
                      (&local_2f28,"SButton",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0x317,&local_3708);
  pTVar3 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                     (this_00,&local_3068,local_36a8);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SButton>(&local_3280,pTVar3);
  local_3698 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_36a0,&local_3280);
  local_33f8 = SVerticalBox::FArguments::operator+(local_3690,local_3698);
  local_3678 = SVerticalBox::Slot(&local_24b0);
  local_3688 = &local_2f10;
  local_36f8[0] = 1;
  local_3680 = TAttribute<float>::TAttribute<float><int>(local_3688,local_36f8);
  local_3408 = SVerticalBox::FSlot::FSlotArguments::FillHeight(local_3678,local_3680);
  local_3638 = SVerticalBox::FArguments::FArguments(&local_1ec8);
  local_3660 = SVerticalBox::Slot(&local_2598);
  local_3670 = &local_2ef0;
  local_36f8[1] = 1;
  local_3668 = TAttribute<float>::TAttribute<float><int>(local_3670,local_36f8 + 1);
  local_3648 = SVerticalBox::FSlot::FSlotArguments::FillHeight(local_3660,local_3668);
  local_3658 = SCustomPaintWidget::FArguments::FArguments(&local_1068);
  local_33d0 = TestBoxElement;
  local_33c8 = 0;
  ppcVar11 = &local_33d0;
  puVar12 = local_3248;
  for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *puVar12 = *(undefined1 *)ppcVar11;
    ppcVar11 = (code **)((longlong)ppcVar11 + 1);
    puVar12 = puVar12 + 1;
  }
  puVar12 = local_3248;
  ppVar16 = &local_3238;
  for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *(undefined1 *)ppVar16 = *puVar12;
    puVar12 = puVar12 + 1;
    ppVar16 = (pmf_9586dc1b *)&ppVar16->field_0x1;
  }
  local_3650 = SCustomPaintWidget::FArguments::OnPaintHandler<SElementTesting>
                         (local_3658,this,&local_3238);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_3707);
  pTVar4 = MakeTDecl<SCustomPaintWidget,RequiredArgs::T0RequiredArgs>
                     (&local_2f40,"SCustomPaintWidget",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x322,&local_3707);
  pTVar5 = TSlateDecl<SCustomPaintWidget,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar4,&local_3078,local_3650);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SCustomPaintWidget>(&local_3290,pTVar5);
  local_3640 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_3648,&local_3290);
  local_3568 = SVerticalBox::FArguments::operator+(local_3638,local_3640);
  local_3620 = SVerticalBox::Slot(&local_2680);
  local_3630 = &local_2ed0;
  local_36f8[2] = 1;
  local_3628 = TAttribute<float>::TAttribute<float><int>(local_3630,local_36f8 + 2);
  local_3578 = SVerticalBox::FSlot::FSlotArguments::FillHeight(local_3620,local_3628);
  local_35c8 = SVerticalBox::FArguments::FArguments(&local_20d0);
  pFVar1 = SVerticalBox::Slot(&local_2768);
  pFVar1 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar1);
  local_3618 = &pFVar1->field_0x48;
  pFVar1 = TAlignmentWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::HAlign
                     ((FSlotArgumentsMixin *)local_3618,HAlign_Left);
  local_3610 = &pFVar1->field_0x18;
  local_35d8 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                         ((FSlotArgumentsMixin *)local_3610,__real_40800000);
  local_35f8 = SSpinBox<float>::FArguments::FArguments(&local_720);
  local_3608 = &local_2eb0;
  local_36ec = __real_3dcccccd;
  local_3600 = TAttribute<float>::TAttribute<float>(local_3608,&local_36ec);
  local_35f0 = SSpinBox<float>::FArguments::Delta(local_35f8,local_3600);
  local_33c0 = GetFontScale;
  local_33b8 = 0;
  ppcVar11 = &local_33c0;
  puVar12 = local_3228;
  for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *puVar12 = *(undefined1 *)ppcVar11;
    ppcVar11 = (code **)((longlong)ppcVar11 + 1);
    puVar12 = puVar12 + 1;
  }
  puVar12 = local_3228;
  ppVar14 = &local_3218;
  for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *(undefined1 *)ppVar14 = *puVar12;
    puVar12 = puVar12 + 1;
    ppVar14 = (pmf_162fa5fe *)&ppVar14->field_0x1;
  }
  local_35e8 = SSpinBox<float>::FArguments::Value<SElementTesting>(local_35f0,this,&local_3218);
  local_33b0 = OnScaleValueChanged;
  local_33a8 = 0;
  ppcVar11 = &local_33b0;
  puVar12 = local_3208;
  for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *puVar12 = *(undefined1 *)ppcVar11;
    ppcVar11 = (code **)((longlong)ppcVar11 + 1);
    puVar12 = puVar12 + 1;
  }
  puVar12 = local_3208;
  ppVar15 = &local_31f8;
  for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *(undefined1 *)ppVar15 = *puVar12;
    puVar12 = puVar12 + 1;
    ppVar15 = (pmf_3bfb421c *)&ppVar15->field_0x1;
  }
  local_35e0 = SSpinBox<float>::FArguments::OnValueChanged<SElementTesting>
                         (local_35e8,this,&local_31f8);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_3706);
  this_01 = MakeTDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs>
                      (&local_2f58,"SSpinBox<float>",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0x32e,&local_3706);
  pTVar6 = TSlateDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs>::operator<<=
                     (this_01,&local_3088,local_35e0);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SSpinBox<float>_>(&local_32a0,pTVar6);
  local_35d0 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_35d8,&local_32a0);
  local_3588 = SVerticalBox::FArguments::operator+(local_35c8,local_35d0);
  local_35b0 = SVerticalBox::Slot(&local_2850);
  local_35c0 = &local_2e90;
  local_36e8 = __real_3f800000;
  local_35b8 = TAttribute<float>::TAttribute<float>(local_35c0,&local_36e8);
  local_3598 = SVerticalBox::FSlot::FSlotArguments::FillHeight(local_35b0,local_35b8);
  local_35a8 = SCustomPaintWidget::FArguments::FArguments(&local_1278);
  local_33a0 = TestTextElement;
  local_3398 = 0;
  ppcVar11 = &local_33a0;
  puVar12 = local_31e8;
  for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *puVar12 = *(undefined1 *)ppcVar11;
    ppcVar11 = (code **)((longlong)ppcVar11 + 1);
    puVar12 = puVar12 + 1;
  }
  puVar12 = local_31e8;
  ppVar16 = &local_31d8;
  for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *(undefined1 *)ppVar16 = *puVar12;
    puVar12 = puVar12 + 1;
    ppVar16 = (pmf_9586dc1b *)&ppVar16->field_0x1;
  }
  local_35a0 = SCustomPaintWidget::FArguments::OnPaintHandler<SElementTesting>
                         (local_35a8,this,&local_31d8);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_3705);
  pTVar4 = MakeTDecl<SCustomPaintWidget,RequiredArgs::T0RequiredArgs>
                     (&local_2f70,"SCustomPaintWidget",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x336,&local_3705);
  pTVar5 = TSlateDecl<SCustomPaintWidget,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar4,&local_3098,local_35a0);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SCustomPaintWidget>(&local_32b0,pTVar5);
  local_3590 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_3598,&local_32b0);
  local_3580 = SVerticalBox::FArguments::operator+(local_3588,local_3590);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_3704);
  pTVar7 = MakeTDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
                     (&local_2f88,"SVerticalBox",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x328,&local_3704);
  pTVar8 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar7,&local_30a8,local_3580);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SVerticalBox>(&local_32c0,pTVar8);
  local_3570 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_3578,&local_32c0);
  local_3528 = SVerticalBox::FArguments::operator+(local_3568,local_3570);
  local_3550 = SVerticalBox::Slot(&local_2938);
  local_3560 = &local_2e70;
  local_36e4[0] = 1;
  local_3558 = TAttribute<float>::TAttribute<float><int>(local_3560,local_36e4);
  local_3538 = SVerticalBox::FSlot::FSlotArguments::FillHeight(local_3550,local_3558);
  local_3548 = SCustomPaintWidget::FArguments::FArguments(&local_1488);
  local_3390 = TestGradientElement;
  local_3388 = 0;
  ppcVar11 = &local_3390;
  puVar12 = local_31c8;
  for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *puVar12 = *(undefined1 *)ppcVar11;
    ppcVar11 = (code **)((longlong)ppcVar11 + 1);
    puVar12 = puVar12 + 1;
  }
  puVar12 = local_31c8;
  ppVar16 = &local_31b8;
  for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *(undefined1 *)ppVar16 = *puVar12;
    puVar12 = puVar12 + 1;
    ppVar16 = (pmf_9586dc1b *)&ppVar16->field_0x1;
  }
  local_3540 = SCustomPaintWidget::FArguments::OnPaintHandler<SElementTesting>
                         (local_3548,this,&local_31b8);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_3703);
  pTVar4 = MakeTDecl<SCustomPaintWidget,RequiredArgs::T0RequiredArgs>
                     (&local_2fa0,"SCustomPaintWidget",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x33d,&local_3703);
  pTVar5 = TSlateDecl<SCustomPaintWidget,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar4,&local_30b8,local_3540);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SCustomPaintWidget>(&local_32d0,pTVar5);
  local_3530 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_3538,&local_32d0);
  local_3500 = SVerticalBox::FArguments::operator+(local_3528,local_3530);
  pFVar1 = SVerticalBox::Slot(&local_2a20);
  local_3510 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar1);
  local_3520 = SCustomPaintWidget::FArguments::FArguments(&local_1698);
  local_3380 = TestSplineElement;
  local_3378 = 0;
  ppcVar11 = &local_3380;
  puVar12 = local_31a8;
  for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *puVar12 = *(undefined1 *)ppcVar11;
    ppcVar11 = (code **)((longlong)ppcVar11 + 1);
    puVar12 = puVar12 + 1;
  }
  puVar12 = local_31a8;
  ppVar16 = &local_3198;
  for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *(undefined1 *)ppVar16 = *puVar12;
    puVar12 = puVar12 + 1;
    ppVar16 = (pmf_9586dc1b *)&ppVar16->field_0x1;
  }
  local_3518 = SCustomPaintWidget::FArguments::OnPaintHandler<SElementTesting>
                         (local_3520,this,&local_3198);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_3702);
  pTVar4 = MakeTDecl<SCustomPaintWidget,RequiredArgs::T0RequiredArgs>
                     (&local_2fb8,"SCustomPaintWidget",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x343,&local_3702);
  pTVar5 = TSlateDecl<SCustomPaintWidget,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar4,&local_30c8,local_3518);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SCustomPaintWidget>(&local_32e0,pTVar5);
  local_3508 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_3510,&local_32e0);
  local_34d8 = SVerticalBox::FArguments::operator+(local_3500,local_3508);
  pFVar1 = SVerticalBox::Slot(&local_2b08);
  local_34e8 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar1);
  local_34f8 = SCustomPaintWidget::FArguments::FArguments(&local_22e0);
  local_3370 = TestDottedLineElement;
  local_3368 = 0;
  ppcVar11 = &local_3370;
  puVar12 = local_3188;
  for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *puVar12 = *(undefined1 *)ppcVar11;
    ppcVar11 = (code **)((longlong)ppcVar11 + 1);
    puVar12 = puVar12 + 1;
  }
  puVar12 = local_3188;
  ppVar16 = &local_3178;
  for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *(undefined1 *)ppVar16 = *puVar12;
    puVar12 = puVar12 + 1;
    ppVar16 = (pmf_9586dc1b *)&ppVar16->field_0x1;
  }
  local_34f0 = SCustomPaintWidget::FArguments::OnPaintHandler<SElementTesting>
                         (local_34f8,this,&local_3178);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_3701);
  pTVar4 = MakeTDecl<SCustomPaintWidget,RequiredArgs::T0RequiredArgs>
                     (&local_2fd0,"SCustomPaintWidget",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x349,&local_3701);
  pTVar5 = TSlateDecl<SCustomPaintWidget,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar4,&local_30d8,local_34f0);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SCustomPaintWidget>(&local_32f0,pTVar5);
  local_34e0 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_34e8,&local_32f0);
  local_3498 = SVerticalBox::FArguments::operator+(local_34d8,local_34e0);
  local_34c0 = SVerticalBox::Slot(&local_2bf0);
  local_34d0 = &local_2e50;
  local_36e4[1] = 3;
  local_34c8 = TAttribute<float>::TAttribute<float><int>(local_34d0,local_36e4 + 1);
  local_34a8 = SVerticalBox::FSlot::FSlotArguments::FillHeight(local_34c0,local_34c8);
  local_34b8 = SCustomPaintWidget::FArguments::FArguments(&local_18a8);
  local_3360 = TestRotation;
  local_3358 = 0;
  ppcVar11 = &local_3360;
  puVar12 = local_3168;
  for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *puVar12 = *(undefined1 *)ppcVar11;
    ppcVar11 = (code **)((longlong)ppcVar11 + 1);
    puVar12 = puVar12 + 1;
  }
  puVar12 = local_3168;
  ppVar16 = &local_3158;
  for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *(undefined1 *)ppVar16 = *puVar12;
    puVar12 = puVar12 + 1;
    ppVar16 = (pmf_9586dc1b *)&ppVar16->field_0x1;
  }
  local_34b0 = SCustomPaintWidget::FArguments::OnPaintHandler<SElementTesting>
                         (local_34b8,this,&local_3158);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_3700);
  pTVar4 = MakeTDecl<SCustomPaintWidget,RequiredArgs::T0RequiredArgs>
                     (&local_2fe8,"SCustomPaintWidget",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x34f,&local_3700);
  pTVar5 = TSlateDecl<SCustomPaintWidget,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar4,&local_30e8,local_34b0);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SCustomPaintWidget>(&local_3300,pTVar5);
  local_34a0 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_34a8,&local_3300);
  local_3458 = SVerticalBox::FArguments::operator+(local_3498,local_34a0);
  local_3480 = SVerticalBox::Slot(&local_2cd8);
  local_3490 = &local_2e30;
  local_36e4[2] = 3;
  local_3488 = TAttribute<float>::TAttribute<float><int>(local_3490,local_36e4 + 2);
  local_3468 = SVerticalBox::FSlot::FSlotArguments::FillHeight(local_3480,local_3488);
  local_3478 = SCustomPaintWidget::FArguments::FArguments(&local_1ab8);
  local_3350 = TestCustomVerts;
  local_3348 = 0;
  ppcVar11 = &local_3350;
  puVar12 = local_3148;
  for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *puVar12 = *(undefined1 *)ppcVar11;
    ppcVar11 = (code **)((longlong)ppcVar11 + 1);
    puVar12 = puVar12 + 1;
  }
  puVar12 = local_3148;
  ppVar16 = &local_3138;
  for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *(undefined1 *)ppVar16 = *puVar12;
    puVar12 = puVar12 + 1;
    ppVar16 = (pmf_9586dc1b *)&ppVar16->field_0x1;
  }
  local_3470 = SCustomPaintWidget::FArguments::OnPaintHandler<SElementTesting>
                         (local_3478,this,&local_3138);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_36ff);
  pTVar4 = MakeTDecl<SCustomPaintWidget,RequiredArgs::T0RequiredArgs>
                     (&local_3000,"SCustomPaintWidget",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x355,&local_36ff);
  pTVar5 = TSlateDecl<SCustomPaintWidget,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar4,&local_30f8,local_3470);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SCustomPaintWidget>(&local_3310,pTVar5);
  local_3460 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_3468,&local_3310);
  local_3420 = SVerticalBox::FArguments::operator+(local_3458,local_3460);
  local_3440 = SVerticalBox::Slot(&local_2dc0);
  local_3450 = &local_2e10;
  local_36e4[3] = 3;
  local_3448 = TAttribute<float>::TAttribute<float><int>(local_3450,local_36e4 + 3);
  local_3430 = SVerticalBox::FSlot::FSlotArguments::FillHeight(local_3440,local_3448);
  local_3438 = SDynamicBrushTest::FArguments::FArguments((FArguments *)&local_e58);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_36fe);
  this_02 = MakeTDecl<SDynamicBrushTest,RequiredArgs::T0RequiredArgs>
                      (&local_3018,"SDynamicBrushTest",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0x35b,&local_36fe);
  pTVar9 = TSlateDecl<SDynamicBrushTest,RequiredArgs::T0RequiredArgs>::operator<<=
                     (this_02,&local_3108,local_3438);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SDynamicBrushTest>(&local_3320,pTVar9);
  local_3428 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_3430,&local_3320);
  local_3410 = SVerticalBox::FArguments::operator+(local_3420,local_3428);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_36fd);
  local_3418 = MakeTDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
                         (&local_3030,"SVerticalBox",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                          ,0x31e,&local_36fd);
  pTVar7 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::Expose<SVerticalBox>
                     (local_3418,&this->VerticalBox);
  pTVar8 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar7,&local_3118,local_3410);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SVerticalBox>(&local_3330,pTVar8);
  local_3400 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_3408,&local_3330);
  local_33f0 = SVerticalBox::FArguments::operator+(local_33f8,local_3400);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(local_36fc);
  pTVar7 = MakeTDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
                     (&local_3048,"SVerticalBox",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x312,local_36fc);
  pTVar8 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar7,&local_3128,local_33f0);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SVerticalBox>(&local_3340,pTVar8);
  TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>::operator[]
            (local_33e8,&local_3340);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_3340);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_3128.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_3048._Widget.SharedReferenceCount);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_3330);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_3118.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_3030._Widget.SharedReferenceCount);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_3320);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_3108.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_3018._Widget.SharedReferenceCount);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs(&local_e58);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_2dc0);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_3310);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_30f8.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_3000._Widget.SharedReferenceCount);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_1ab8._OnPaintHandler);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_1ab8);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_2cd8);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_3300);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_30e8.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_2fe8._Widget.SharedReferenceCount);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_18a8._OnPaintHandler);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_18a8);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_2bf0);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_32f0);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_30d8.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_2fd0._Widget.SharedReferenceCount);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_22e0._OnPaintHandler);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_22e0);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_2b08);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_32e0);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_30c8.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_2fb8._Widget.SharedReferenceCount);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_1698._OnPaintHandler);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_1698);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_2a20);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_32d0);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_30b8.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_2fa0._Widget.SharedReferenceCount);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_1488._OnPaintHandler);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_1488);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_2938);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_32c0);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_30a8.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_2f88._Widget.SharedReferenceCount);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_32b0);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_3098.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_2f70._Widget.SharedReferenceCount);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_1278._OnPaintHandler);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_1278);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_2850);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_32a0);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_3088.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_2f58._Widget.SharedReferenceCount);
  SSpinBox<float>::FArguments::~FArguments(&local_720);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_2768);
  TArray<SVerticalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>::
  ~TArray<SVerticalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>(&local_20d0._Slots);
  TSlateBaseNamedArgs<SVerticalBox>::~TSlateBaseNamedArgs<SVerticalBox>
            ((TSlateBaseNamedArgs<SVerticalBox> *)&local_20d0);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_2680);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_3290);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_3078.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_2f40._Widget.SharedReferenceCount);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_1068._OnPaintHandler);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_1068);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_2598);
  TArray<SVerticalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>::
  ~TArray<SVerticalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>(&local_1ec8._Slots);
  TSlateBaseNamedArgs<SVerticalBox>::~TSlateBaseNamedArgs<SVerticalBox>
            ((TSlateBaseNamedArgs<SVerticalBox> *)&local_1ec8);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_24b0);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_3280);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_3068.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_2f28._Widget.SharedReferenceCount);
  FText::~FText(&local_3058);
  SButton::FArguments::~FArguments(&local_c60);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_23c8);
  TArray<SVerticalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>::
  ~TArray<SVerticalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>(&local_1cc0._Slots);
  TSlateBaseNamedArgs<SVerticalBox>::~TSlateBaseNamedArgs<SVerticalBox>
            ((TSlateBaseNamedArgs<SVerticalBox> *)&local_1cc0);
  return;
}

// GetFontScale @ 1430c8df0

float __thiscall SElementTesting::GetFontScale(SElementTesting *this)

{
  return this->FontScale;
}

// MakeRotationExample @ 1430d6d30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SElementTesting::MakeRotationExample(SElementTesting *this,FOnPaintHandlerParams *param_1)

{
  undefined1 uVar1;
  FName *pFVar2;
  TOptional<UE::Math::TVector2<float>_> *pTVar3;
  FSlateLayoutTransform *pFVar4;
  TVector2<float> *pTVar5;
  TTransform2<float> *pTVar6;
  undefined1 auStackY_368 [32];
  ESlateDrawEffect local_318;
  ESlateDrawEffect local_317;
  TVector2<double>_u_0 local_310;
  float local_300;
  uint local_2fc;
  float local_2f8;
  uint local_2f4;
  FGeometry *local_2f0;
  FGeometry *local_2e8;
  ISlateStyle *local_2e0;
  ISlateStyle *local_2d8;
  FSlateBrush *local_2d0;
  double *local_2c8;
  FSlateBrush *local_2c0;
  TVector2<double>_u_0 local_2b8;
  FSlateLayoutTransform local_2a8;
  FName *local_298;
  FName local_290;
  code *local_288;
  FDeprecateSlateVector2D *local_280;
  FDeprecateVector2DParameter local_278;
  FDeprecateOptionalVector2DParameter *local_270;
  FDeprecateVector2DParameter local_268;
  FDeprecateVector2DParameter local_260;
  TTransform2<float> *local_258;
  FDeprecateOptionalVector2DParameter *local_250;
  FPaintGeometry *local_248;
  FSlateWindowElementList *local_240;
  double local_238;
  double local_230;
  FDeprecateVector2DParameter local_228;
  double local_220;
  double local_218;
  double local_210;
  double local_208;
  double local_200;
  double local_1f8;
  FDeprecateOptionalVector2DParameter *local_1f0;
  FDeprecateVector2DParameter local_1e8;
  FDeprecateVector2DParameter local_1e0;
  TTransform2<float> *local_1d8;
  FDeprecateOptionalVector2DParameter *local_1d0;
  FPaintGeometry *local_1c8;
  FSlateWindowElementList *local_1c0;
  FName *local_1b8;
  FSlateLayoutTransform local_1b0;
  double local_1a0;
  double local_198;
  FName local_190;
  code *local_188;
  TVector2<double>_u_0 local_180;
  double local_170;
  double local_168;
  TVector2<double>_u_0 local_160;
  FSlateLayoutTransform local_150;
  FSlateLayoutTransform local_140;
  FName local_130;
  FName local_128;
  TVector2<double> local_120;
  TOptional<UE::Math::TVector2<float>_> local_110;
  FSlateLayoutTransform local_104;
  FSlateLayoutTransform local_f8;
  FDeprecateOptionalVector2DParameter local_e8;
  FSlateLayoutTransform local_d8;
  FDeprecateOptionalVector2DParameter local_c8;
  TTransform2<float> local_b8;
  TTransform2<float> local_a0;
  FPaintGeometry local_88;
  FPaintGeometry local_50;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_368;
  local_2e0 = FTestStyle::Get();
  local_188 = *(code **)((longlong)*local_2e0 + 0x50);
  local_1b8 = &local_130;
  pFVar2 = ::FName::FName(local_1b8,"TestRotation40px");
  local_190 = *pFVar2;
  local_2d0 = (FSlateBrush *)(*local_188)(local_2e0,local_190,0,0);
  local_2d8 = FTestStyle::Get();
  local_288 = *(code **)((longlong)*local_2d8 + 0x50);
  local_298 = &local_128;
  pFVar2 = ::FName::FName(local_298,"TestRotation20px");
  local_290 = *pFVar2;
  local_2c0 = (FSlateBrush *)(*local_288)(local_2d8,local_290,0,0);
  local_310._s_0.X = __real_4049000000000000;
  local_310._s_0.Y = __real_4049000000000000;
  local_280 = &local_2d0->ImageSize;
  FDeprecateSlateVector2D::operator_UE::Math::TVector2<double>
            (local_280,(TVector2<double> *)&local_2b8._s_0);
  UE::Slate::FDeprecateVector2DParameter::FDeprecateVector2DParameter
            (&local_278,(TVector2<double> *)&local_310._s_0);
  FSlateLayoutTransform::FSlateLayoutTransform(&local_1b0,&local_278);
  local_270 = &local_c8;
  pTVar3 = TOptional<UE::Math::TVector2<float>_>::TOptional<UE::Math::TVector2<float>_>(&local_110);
  local_250 = UE::Slate::FDeprecateOptionalVector2DParameter::FDeprecateOptionalVector2DParameter
                        (local_270,pTVar3);
  local_300 = this->CenterRotation;
  if (param_1->bEnabled == false) {
    local_318 = DisabledEffect;
  }
  else {
    local_318 = None;
  }
  local_2f0 = param_1->Geometry;
  UE::Slate::FDeprecateVector2DParameter::FDeprecateVector2DParameter
            (&local_268,(TVector2<double> *)&local_2b8._s_0);
  pFVar4 = FGeometry::GetAccumulatedLayoutTransform(local_2f0,&local_104);
  Concatenate<FSlateLayoutTransform>(&local_140,&local_1b0,pFVar4);
  pTVar5 = UE::Slate::CastToVector2f(&local_268);
  UE::Slate::FDeprecateVector2DParameter::FDeprecateVector2DParameter(&local_260,pTVar5);
  pTVar6 = FGeometry::GetAccumulatedRenderTransform(local_2f0);
  local_258 = Concatenate<FSlateLayoutTransform,TTransform2<float>_>(&local_b8,&local_1b0,pTVar6);
  FPaintGeometry::FPaintGeometry
            (&local_88,&local_140,local_258,&local_260,local_2f0->bHasRenderTransform);
  local_248 = &local_88;
  local_2fc = param_1->Layer;
  local_240 = param_1->OutDrawElements;
  FSlateDrawElement::MakeRotatedBox
            (local_240,local_2fc,local_248,local_2d0,local_318,local_300,local_250,RelativeToElement
             ,&FLinearColor::White);
  local_230 = local_310._s_0.Y + local_2b8._s_0.Y;
  local_238 = local_310._s_0.X + local_2b8._s_0.X;
  local_180._s_0.X = local_238;
  local_180._s_0.Y = local_230;
  UE::Slate::FDeprecateVector2DParameter::FDeprecateVector2DParameter
            (&local_228,(TVector2<double> *)&local_180._s_0);
  FSlateLayoutTransform::FSlateLayoutTransform(&local_2a8,&local_228);
  local_218 = local_310._s_0.Y + local_2b8._s_0.Y;
  local_220 = local_310._s_0.X + local_2b8._s_0.X;
  local_208 = local_310._s_0.Y + local_218;
  local_210 = local_310._s_0.X + local_220;
  local_2c8 = &local_170;
  local_1f8 = local_208 * __real_3fe0000000000000;
  local_200 = local_210 * __real_3fe0000000000000;
  local_1a0 = local_220;
  local_198 = local_218;
  local_170 = local_210;
  local_168 = local_208;
  local_160._s_0.X = local_200;
  local_160._s_0.Y = local_1f8;
  pFVar4 = Inverse<FSlateLayoutTransform>(&local_f8,&local_2a8);
  TransformPoint<FSlateLayoutTransform,UE::Math::TVector2<double>_>
            (&local_120,pFVar4,(TVector2<double> *)&local_160._s_0);
  local_1f0 = &local_e8;
  local_1d0 = UE::Slate::FDeprecateOptionalVector2DParameter::FDeprecateOptionalVector2DParameter
                        (local_1f0,&local_120);
  local_2f8 = this->OuterRotation;
  if (param_1->bEnabled == false) {
    local_317 = DisabledEffect;
  }
  else {
    local_317 = None;
  }
  local_2e8 = param_1->Geometry;
  UE::Slate::FDeprecateVector2DParameter::FDeprecateVector2DParameter
            (&local_1e8,&local_2c0->ImageSize);
  pFVar4 = FGeometry::GetAccumulatedLayoutTransform(local_2e8,&local_d8);
  Concatenate<FSlateLayoutTransform>(&local_150,&local_2a8,pFVar4);
  pTVar5 = UE::Slate::CastToVector2f(&local_1e8);
  UE::Slate::FDeprecateVector2DParameter::FDeprecateVector2DParameter(&local_1e0,pTVar5);
  pTVar6 = FGeometry::GetAccumulatedRenderTransform(local_2e8);
  local_1d8 = Concatenate<FSlateLayoutTransform,TTransform2<float>_>(&local_a0,&local_2a8,pTVar6);
  FPaintGeometry::FPaintGeometry
            (&local_50,&local_150,local_1d8,&local_1e0,local_2e8->bHasRenderTransform);
  local_1c8 = &local_50;
  local_2f4 = param_1->Layer;
  local_1c0 = param_1->OutDrawElements;
  FSlateDrawElement::MakeRotatedBox
            (local_1c0,local_2f4,local_1c8,local_2c0,local_317,local_2f8,local_1d0,RelativeToElement
             ,&FLinearColor::White);
  return;
}

// OnDisableClicked @ 1430d9fa0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SElementTesting::OnDisableClicked(SElementTesting *this,FReply *__return_storage_ptr__)

{
  SVerticalBox *this_00;
  bool local_48;
  bool local_47 [3];
  undefined4 local_44;
  TAttribute<bool> *local_40;
  TAttribute<bool> *local_38;
  SVerticalBox *local_30;
  TAttribute<bool> local_28;
  
  local_44 = 0;
  local_30 = TSharedPtr<SVerticalBox,1>::operator->(&this->VerticalBox);
  local_40 = &local_28;
  this_00 = TSharedPtr<SVerticalBox,1>::operator->(&this->VerticalBox);
  local_48 = SWidget::IsEnabled((SWidget *)this_00);
  local_48 = !local_48;
  local_47[0] = local_48;
  local_38 = TAttribute<bool>::TAttribute<bool>(local_40,local_47);
  SWidget::SetEnabled((SWidget *)local_30,local_38);
  FReply::Handled(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// OnScaleValueChanged @ 1430e24e0

void __thiscall SElementTesting::OnScaleValueChanged(SElementTesting *this,float param_1)

{
  this->FontScale = param_1;
  return;
}

// TestBoxElement @ 1430fb130

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall SElementTesting::TestBoxElement(SElementTesting *this,FOnPaintHandlerParams *param_1)

{
  undefined1 uVar1;
  FGeometry *this_00;
  ISlateStyle *pIVar2;
  undefined1 auStackY_e8 [32];
  ESlateDrawEffect local_b8;
  TVector2<float>_u_0 local_98;
  FDeprecateVector2DParameter local_90;
  TTransform2<float> *local_88;
  FSlateLayoutTransform *local_80;
  FSlateBrush *local_78;
  FPaintGeometry *local_70;
  FSlateWindowElementList *local_68;
  FSlateLayoutTransform local_60;
  FPaintGeometry local_50;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  pIVar2 = FTestStyle::Get();
  local_78 = (FSlateBrush *)(**(code **)((longlong)*pIVar2 + 0x78))(pIVar2);
  if (param_1->bEnabled == false) {
    local_b8 = DisabledEffect;
  }
  else {
    local_b8 = None;
  }
  this_00 = param_1->Geometry;
  local_98._s_0 = *(TVector2<float>_u_0_s_0 *)&this_00->Size;
  UE::Slate::FDeprecateVector2DParameter::FDeprecateVector2DParameter
            (&local_90,(TVector2<float> *)&local_98._s_0);
  local_88 = FGeometry::GetAccumulatedRenderTransform(this_00);
  local_80 = FGeometry::GetAccumulatedLayoutTransform(this_00,&local_60);
  FPaintGeometry::FPaintGeometry(&local_50,local_80,local_88,&local_90,this_00->bHasRenderTransform)
  ;
  local_70 = &local_50;
  local_68 = param_1->OutDrawElements;
  FSlateDrawElement::MakeBox
            (local_68,param_1->Layer,local_70,local_78,local_b8,&FLinearColor::White);
  return param_1->Layer;
}

// TestCustomVerts @ 1430fb2a0

/* WARNING: Removing unreachable block (ram,0x0001430fb672) */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
SElementTesting::TestCustomVerts(SElementTesting *this,FOnPaintHandlerParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FDeprecateSlateVector2D FVar4;
  FName *pFVar5;
  float in_XMM1_Da;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_468;
  int local_458;
  TArray<FSlateVertex,TSizedDefaultAllocator<32>_> local_450;
  int local_440;
  int local_438;
  int local_430;
  FScriptContainerElement *local_428;
  FScriptContainerElement *local_420;
  undefined8 local_418;
  float local_410;
  float local_40c;
  float local_408;
  uint local_404;
  uint local_400;
  float local_3fc;
  uint local_3f8;
  uint local_3f4;
  undefined4 local_3f0;
  int local_3ec;
  int local_3e8;
  int local_3e4;
  int local_3e0;
  int local_3dc;
  int local_3d8 [2];
  undefined8 local_3d0;
  float local_3c8;
  float local_3c4;
  int local_3c0;
  float local_3bc;
  float local_3b8;
  float local_3b0;
  float local_3a8;
  FSlateShaderResourceProxy *local_3a0;
  FScriptContainerElement *local_398;
  FScriptContainerElement *local_390;
  FScriptContainerElement *local_388;
  float local_380;
  float local_378;
  float local_374;
  float fStack_370;
  double local_368;
  ISlateStyle *local_360;
  TVector2<float> *local_358;
  float local_350;
  float fStack_34c;
  FSlateShaderResourceProxy *local_348;
  double local_340;
  double local_338;
  TVector2<double>_u_0 local_330;
  FGeometry *local_320;
  FGeometry *local_318;
  FGeometry *local_310;
  FDeprecateSlateVector2D local_308;
  FDeprecateSlateVector2D *local_300;
  FDeprecateSlateVector2D local_2f8;
  FName *local_2f0;
  FName local_2e8;
  code *local_2e0;
  FSlateBrush *local_2d8;
  TSharedPtr<FSlateSharedHandleData,1> *local_2d0;
  TSharedPtr<FSlateSharedHandleData,1> *local_2c8;
  undefined4 local_2c0;
  undefined4 local_2bc;
  FScriptContainerElement *local_2b8;
  FScriptContainerElement *local_2b0;
  longlong local_2a8;
  FScriptContainerElement *local_2a0;
  FScriptContainerElement *local_298;
  FScriptContainerElement *local_290;
  float *local_288;
  FScriptContainerElement *local_280;
  float *local_278;
  double local_270;
  double local_268;
  double local_260;
  double local_258;
  undefined4 local_250;
  undefined4 local_24c;
  FScriptContainerElement *local_248;
  FScriptContainerElement *local_240;
  longlong local_238;
  FScriptContainerElement *local_230;
  FScriptContainerElement *local_228;
  FScriptContainerElement *local_220;
  float *local_218;
  FScriptContainerElement *local_210;
  float *local_208;
  FScriptContainerElement *local_200;
  FScriptContainerElement *local_1f8;
  FScriptContainerElement *local_1f0;
  FScriptContainerElement *local_1e8;
  FScriptContainerElement *local_1e0;
  FScriptContainerElement *local_1d8;
  undefined4 local_1d0;
  undefined4 local_1cc;
  FScriptContainerElement *local_1c8;
  FScriptContainerElement *local_1c0;
  FScriptContainerElement *local_1b8;
  longlong local_1b0;
  longlong local_1a8;
  FScriptContainerElement *local_1a0;
  FScriptContainerElement *local_198;
  FScriptContainerElement *local_190;
  undefined4 *local_188;
  FScriptContainerElement *local_180;
  FScriptContainerElement *local_178;
  FScriptContainerElement *local_170;
  FScriptContainerElement *local_168;
  FScriptContainerElement *local_160;
  FScriptContainerElement *local_158;
  undefined4 local_150;
  undefined4 local_14c;
  FScriptContainerElement *local_148;
  FScriptContainerElement *local_140;
  FScriptContainerElement *local_138;
  longlong local_130;
  longlong local_128;
  FScriptContainerElement *local_120;
  FScriptContainerElement *local_118;
  FScriptContainerElement *local_110;
  int *local_108;
  FScriptContainerElement *local_100;
  FScriptContainerElement *local_f8;
  FScriptContainerElement *local_f0;
  FScriptContainerElement *local_e8;
  FScriptContainerElement *local_e0;
  FScriptContainerElement *local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  FScriptContainerElement *local_c8;
  FScriptContainerElement *local_c0;
  FScriptContainerElement *local_b8;
  longlong local_b0;
  longlong local_a8;
  FScriptContainerElement *local_a0;
  FScriptContainerElement *local_98;
  FScriptContainerElement *local_90;
  int *local_88;
  undefined4 local_80;
  int local_7c;
  int local_78;
  int local_74;
  double local_70;
  double local_68;
  TSharedPtr<FSlateSharedHandleData,1> local_60 [2];
  FDeprecateSlateVector2D local_38;
  undefined1 local_30 [16];
  TVector2<double> local_20 [2];
  
  local_320 = param_1->Geometry;
  FVar4 = FGeometry::GetLocalSize(local_320);
  local_40c = *(float *)((longlong)FVar4 + 4);
  local_318 = param_1->Geometry;
  FVar4 = FGeometry::GetLocalSize(local_318);
  local_410 = *(float *)FVar4;
  local_408 = local_410;
  if (local_40c <= local_410) {
    local_408 = local_40c;
  }
  local_3bc = local_408;
  local_3c4 = local_408 * __real_3f000000;
  local_310 = param_1->Geometry;
  FGeometry::GetLocalSize(local_310);
  local_308 = ::operator*(&local_38,in_XMM1_Da);
  local_300 = (FDeprecateSlateVector2D *)
              UE::Math::TVector2<double>::TVector2<double><float>
                        (local_20,&param_1->Geometry->AbsolutePosition);
  local_2f8 = ::operator+((TVector2<double> *)local_30,local_300);
  FDeprecateSlateVector2D::operator_UE::Math::TVector2<double>
            ((void *)local_2f8,(TVector2<double> *)&local_330._s_0);
  local_360 = FCoreStyle::Get();
  local_2e0 = *(code **)((longlong)*local_360 + 0x50);
  local_2f0 = (FName *)(local_30 + 8);
  pFVar5 = ::FName::FName(local_2f0,"ColorWheel.HueValueCircle");
  local_2e8 = *pFVar5;
  local_2d8 = (FSlateBrush *)(*local_2e0)(local_360,local_2e8,0,0);
  local_2d0 = &FSlateBrush::GetRenderingResource(local_2d8)->Data;
  local_2c8 = local_60;
  TSharedPtr<FSlateSharedHandleData,1>::TSharedPtr<FSlateSharedHandleData,1>(local_2c8,local_2d0);
  local_3a0 = FSlateResourceHandle::GetResourceProxy((FSlateResourceHandle *)local_60);
  local_3d0 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  local_418 = CONCAT44(__real_3f800000,__real_3f800000);
  if (local_3a0 != (FSlateShaderResourceProxy *)0x0) {
    local_358 = &local_3a0->SizeUV;
    local_3b0 = (local_3a0->SizeUV).field0_0x0._s_0.Y * __real_3f000000;
    local_3b8 = (local_358->field0_0x0)._s_0.X * __real_3f000000;
    local_418 = CONCAT44(local_3b0,local_3b8);
    local_380 = (local_3a0->StartUV).field0_0x0._s_0.Y + local_3b0;
    local_3a8 = (local_3a0->StartUV).field0_0x0._s_0.X + local_3b8;
    local_3d0._4_4_ = local_380;
    local_3d0._0_4_ = local_3a8;
    local_374 = local_3a8;
    fStack_370 = local_380;
    local_350 = local_3b8;
    fStack_34c = local_3b0;
    local_348 = local_3a0;
  }
  local_80 = 0xc;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&local_450.AllocatorInstance);
  local_450.ArrayNum = 0;
  local_450.ArrayMax =
       TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                 (&local_450.AllocatorInstance);
  if (local_450.ArrayMax < 0x24) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x2c,4,0x24,&local_450.AllocatorInstance,local_450.ArrayNum,&local_450.ArrayMax);
  }
  TArray<FSlateVertex,TSizedDefaultAllocator<32>_>::AddZeroed(&local_450);
  local_438 = local_450.ArrayNum + -1;
  local_400 = (uint)(-1 < local_438);
  local_404 = (uint)(local_438 < local_450.ArrayNum);
  if (-1 >= local_438 || local_438 >= local_450.ArrayNum) {
    local_2c0 = 0;
    local_2bc = 0;
    UE::Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  local_2b8 = local_450.AllocatorInstance.Data;
  local_2b0 = local_450.AllocatorInstance.Data;
  local_2a0 = local_450.AllocatorInstance.Data;
  local_2a8 = (longlong)(local_450.ArrayNum + -1) * 0x2c;
  local_428 = local_450.AllocatorInstance.Data + local_2a8;
  local_290 = local_428 + 0x18;
  local_298 = local_428;
  local_288 = UE::Math::TVector2<float>::Component((TVector2<float> *)local_290,0);
  *local_288 = (float)local_330._s_0.X;
  local_280 = local_428 + 0x18;
  local_278 = UE::Math::TVector2<float>::Component((TVector2<float> *)local_280,1);
  *local_278 = (float)local_330._s_0.Y;
  *(undefined4 *)local_428 = (undefined4)local_3d0;
  *(undefined4 *)(local_428 + 4) = local_3d0._4_4_;
  *(float *)(local_428 + 0xc) = __real_3f800000;
  *(float *)(local_428 + 8) = __real_3f800000;
  ((FColor_u_0 *)(local_428 + 0x20))->_s_0 = (FColor_u_0_s_0)FColor::White.field0_0x0;
  for (local_440 = 0; local_440 < 0xc; local_440 = local_440 + 1) {
    TArray<FSlateVertex,TSizedDefaultAllocator<32>_>::AddZeroed(&local_450);
    local_3fc = (__real_40c90fdb * (float)local_440) / __real_41400000;
    local_378 = sinf(local_3fc);
    local_268 = (double)local_378;
    local_3c8 = cosf(local_3fc);
    local_340 = (double)local_3c8;
    local_338 = local_268;
    local_368 = (double)local_3c4;
    local_258 = local_268 * local_368;
    local_260 = local_340 * local_368;
    local_430 = local_450.ArrayNum + -1;
    local_3f4 = (uint)(-1 < local_430);
    local_3f8 = (uint)(local_430 < local_450.ArrayNum);
    local_270 = local_340;
    local_70 = local_260;
    local_68 = local_258;
    if (-1 >= local_430 || local_430 >= local_450.ArrayNum) {
      local_250 = 0;
      local_24c = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        iVar3 = (*pcVar1)();
        return iVar3;
      }
    }
    local_248 = local_450.AllocatorInstance.Data;
    local_240 = local_450.AllocatorInstance.Data;
    local_230 = local_450.AllocatorInstance.Data;
    local_238 = (longlong)(local_450.ArrayNum + -1) * 0x2c;
    local_420 = local_450.AllocatorInstance.Data + local_238;
    local_220 = local_420 + 0x18;
    local_228 = local_420;
    local_218 = UE::Math::TVector2<float>::Component((TVector2<float> *)local_220,0);
    *local_218 = (float)(local_330._s_0.X + local_70);
    local_210 = local_420 + 0x18;
    local_208 = UE::Math::TVector2<float>::Component((TVector2<float> *)local_210,1);
    *local_208 = (float)(local_330._s_0.Y + local_68);
    *(float *)local_420 =
         (float)((double)(float)(undefined4)local_3d0 + (double)(float)local_418 * local_340);
    *(float *)(local_420 + 4) =
         (float)((double)(float)local_3d0._4_4_ + (double)local_418._4_4_ * local_338);
    *(float *)(local_420 + 0xc) = __real_3f800000;
    *(float *)(local_420 + 8) = __real_3f800000;
    ((FColor_u_0 *)(local_420 + 0x20))->_s_0 = (FColor_u_0_s_0)FColor::White.field0_0x0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&local_468.AllocatorInstance);
  local_468.ArrayNum = 0;
  local_468.ArrayMax =
       TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                 (&local_468.AllocatorInstance);
  local_458 = 1;
  do {
    if (0xc < local_458) {
      FSlateDrawElement::MakeCustomVerts
                (param_1->OutDrawElements,param_1->Layer,(FSlateResourceHandle *)local_60,&local_450
                 ,&local_468,(ISlateUpdatableInstanceBuffer *)0x0,0,0,None);
      local_3c0 = param_1->Layer;
      TArray<unsigned_int,TSizedDefaultAllocator<32>_>::
      ~TArray<unsigned_int,TSizedDefaultAllocator<32>_>(&local_468);
      TArray<FSlateVertex,TSizedDefaultAllocator<32>_>::
      ~TArray<FSlateVertex,TSizedDefaultAllocator<32>_>(&local_450);
      FSlateResourceHandle::~FSlateResourceHandle((FSlateResourceHandle *)local_60);
      return local_3c0;
    }
    local_3f0 = 0;
    local_398 = (FScriptContainerElement *)&local_3f0;
    local_200 = local_468.AllocatorInstance.Data;
    local_1f8 = local_468.AllocatorInstance.Data;
    local_1f0 = local_468.AllocatorInstance.Data;
    if (local_468.AllocatorInstance.Data <= local_398) {
      local_1e8 = local_468.AllocatorInstance.Data;
      local_1e0 = local_468.AllocatorInstance.Data;
      local_1d8 = local_468.AllocatorInstance.Data;
      if (local_398 < local_468.AllocatorInstance.Data + (longlong)local_468.ArrayMax * 4) {
        local_1d0 = 0;
        local_1cc = 0;
        UE::Core::Private::FormatStringSan::
        AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
        local_1b0 = (longlong)local_468.ArrayNum;
        local_1a8 = (longlong)local_468.ArrayMax;
        local_1c8 = local_468.AllocatorInstance.Data;
        local_1c0 = local_468.AllocatorInstance.Data;
        local_1b8 = local_468.AllocatorInstance.Data;
        local_1a0 = local_468.AllocatorInstance.Data;
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          iVar3 = (*pcVar1)();
          return iVar3;
        }
      }
    }
    if (local_468.ArrayNum == local_468.ArrayMax) {
      local_468.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x404,&local_468.AllocatorInstance,&local_468.ArrayMax);
    }
    local_3ec = local_468.ArrayNum;
    local_198 = local_468.AllocatorInstance.Data;
    local_190 = local_468.AllocatorInstance.Data + (longlong)local_468.ArrayNum * 4;
    local_468.ArrayNum = local_468.ArrayNum + 1;
    local_188 = ::operator_new(4,local_190);
    *local_188 = local_3f0;
    local_7c = local_3ec;
    local_3e8 = local_458;
    local_390 = (FScriptContainerElement *)&local_3e8;
    local_180 = local_468.AllocatorInstance.Data;
    local_178 = local_468.AllocatorInstance.Data;
    local_170 = local_468.AllocatorInstance.Data;
    if (local_468.AllocatorInstance.Data <= local_390) {
      local_168 = local_468.AllocatorInstance.Data;
      local_160 = local_468.AllocatorInstance.Data;
      local_158 = local_468.AllocatorInstance.Data;
      if (local_390 < local_468.AllocatorInstance.Data + (longlong)local_468.ArrayMax * 4) {
        local_150 = 0;
        local_14c = 0;
        UE::Core::Private::FormatStringSan::
        AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
        local_130 = (longlong)local_468.ArrayNum;
        local_128 = (longlong)local_468.ArrayMax;
        local_148 = local_468.AllocatorInstance.Data;
        local_140 = local_468.AllocatorInstance.Data;
        local_138 = local_468.AllocatorInstance.Data;
        local_120 = local_468.AllocatorInstance.Data;
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          iVar3 = (*pcVar1)();
          return iVar3;
        }
      }
    }
    if (local_468.ArrayNum == local_468.ArrayMax) {
      local_468.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x404,&local_468.AllocatorInstance,&local_468.ArrayMax);
    }
    local_3e4 = local_468.ArrayNum;
    local_118 = local_468.AllocatorInstance.Data;
    local_110 = local_468.AllocatorInstance.Data + (longlong)local_468.ArrayNum * 4;
    local_468.ArrayNum = local_468.ArrayNum + 1;
    local_108 = ::operator_new(4,local_110);
    *local_108 = local_3e8;
    local_78 = local_3e4;
    if (local_458 + 1 < 0xd) {
      local_3e0 = local_458 + 1;
    }
    else {
      local_3e0 = 1;
    }
    local_3d8[0] = local_3e0;
    local_388 = (FScriptContainerElement *)local_3d8;
    local_100 = local_468.AllocatorInstance.Data;
    local_f8 = local_468.AllocatorInstance.Data;
    local_f0 = local_468.AllocatorInstance.Data;
    if (local_468.AllocatorInstance.Data <= local_388) {
      local_e8 = local_468.AllocatorInstance.Data;
      local_e0 = local_468.AllocatorInstance.Data;
      local_d8 = local_468.AllocatorInstance.Data;
      if (local_388 < local_468.AllocatorInstance.Data + (longlong)local_468.ArrayMax * 4) {
        local_d0 = 0;
        local_cc = 0;
        UE::Core::Private::FormatStringSan::
        AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
        local_b0 = (longlong)local_468.ArrayNum;
        local_a8 = (longlong)local_468.ArrayMax;
        local_c8 = local_468.AllocatorInstance.Data;
        local_c0 = local_468.AllocatorInstance.Data;
        local_b8 = local_468.AllocatorInstance.Data;
        local_a0 = local_468.AllocatorInstance.Data;
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          iVar3 = (*pcVar1)();
          return iVar3;
        }
      }
    }
    if (local_468.ArrayNum == local_468.ArrayMax) {
      local_468.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x404,&local_468.AllocatorInstance,&local_468.ArrayMax);
    }
    local_3dc = local_468.ArrayNum;
    local_98 = local_468.AllocatorInstance.Data;
    local_90 = local_468.AllocatorInstance.Data + (longlong)local_468.ArrayNum * 4;
    local_468.ArrayNum = local_468.ArrayNum + 1;
    local_88 = ::operator_new(4,local_90);
    *local_88 = local_3d8[0];
    local_74 = local_3dc;
    local_458 = local_458 + 1;
  } while( true );
}

// TestDottedLineElement @ 1430fc470

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
SElementTesting::TestDottedLineElement(SElementTesting *this,FOnPaintHandlerParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FDeprecateSlateVector2D FVar4;
  FSlateApplication *this_00;
  longlong lVar5;
  FLinearColor *pFVar6;
  undefined1 *puVar7;
  float fVar8;
  undefined1 auStackY_d68 [32];
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> local_d18;
  ESlateDrawEffect local_d08;
  ESlateDrawEffect local_d07;
  ESlateDrawEffect local_d06;
  ESlateDrawEffect local_d05;
  ESlateDrawEffect local_d04;
  ESlateDrawEffect local_d03;
  ESlateDrawEffect local_d02;
  ESlateDrawEffect local_d01;
  float local_d00;
  bool local_cfc;
  bool local_cfb;
  undefined8 local_cf8;
  float local_cf0;
  int local_ce8;
  TArray<FLinearColor,TSizedDefaultAllocator<32>_> local_ce0;
  float local_cd0;
  int local_cc8;
  int local_cc4;
  int local_cc0;
  int local_cbc;
  int local_cb8;
  int local_cb4;
  uint local_cb0;
  uint local_cac;
  int local_ca8;
  FGeometry *local_ca0;
  FGeometry *local_c98;
  float local_c90;
  int local_c8c;
  int local_c88;
  int local_c84;
  float local_c80;
  float local_c78;
  float local_c70;
  float local_c68;
  float local_c60;
  float local_c58;
  float local_c50;
  float local_c48;
  float local_c40;
  int local_c38;
  int local_c34;
  float local_c30;
  float local_c2c;
  uint local_c28;
  int local_c24;
  int local_c20;
  float local_c1c;
  float local_c18;
  uint local_c14;
  int local_c10;
  int local_c0c;
  float local_c08;
  float local_c04;
  uint local_c00;
  int local_bfc;
  int local_bf8;
  float local_bf4;
  float local_bf0;
  uint local_bec;
  int local_be8;
  float local_be0;
  float local_bd8;
  float local_bd0;
  float local_bcc;
  float local_bc8;
  float local_bc0;
  int local_bb8;
  int local_bb4;
  float local_bb0;
  float local_bac;
  uint local_ba8;
  int local_ba4;
  int local_ba0;
  float local_b9c;
  float local_b98;
  uint local_b94;
  int local_b90;
  int local_b8c;
  float local_b88;
  float local_b84;
  uint local_b80;
  int local_b7c;
  int local_b78;
  float local_b74;
  float local_b70;
  uint local_b6c;
  int local_b68;
  float local_b60;
  float local_b58;
  float local_b54;
  FScriptContainerElement *local_b50;
  FLinearColor *local_b48;
  FScriptContainerElement *local_b40;
  float local_b38;
  float fStack_b34;
  FScriptContainerElement *local_b30;
  float local_b28;
  float fStack_b24;
  FScriptContainerElement *local_b20;
  float local_b18;
  float fStack_b14;
  FScriptContainerElement *local_b10;
  float local_b08;
  float fStack_b04;
  FScriptContainerElement *local_b00;
  float local_af8;
  float fStack_af4;
  float local_af0;
  float local_ae8;
  float *local_ae0;
  float local_ad8;
  float fStack_ad4;
  float local_ad0;
  float local_acc;
  float *local_ac8;
  float *local_ac0;
  float local_ab8;
  float local_ab4;
  float *local_ab0;
  float local_aa8;
  float local_aa4;
  float *local_aa0;
  float local_a98;
  float local_a94;
  float *local_a90;
  float local_a88;
  float local_a84;
  float local_a80;
  float local_a7c;
  FScriptContainerElement *local_a78;
  FLinearColor_u_0 local_a70;
  FLinearColor_u_0 local_a60;
  FLinearColor_u_0 local_a50;
  FLinearColor_u_0 local_a40;
  FLinearColor_u_0 local_a30;
  FLinearColor_u_0 local_a20;
  FLinearColor_u_0 local_a10;
  FLinearColor_u_0 local_a00;
  FGeometry *local_9f0;
  FGeometry *local_9e8;
  float local_9e0;
  float local_9dc;
  FGeometry *local_9d8;
  float local_9d0;
  undefined4 local_9cc;
  FGeometry *local_9c8;
  FScriptContainerElement *local_9c0;
  FScriptContainerElement *local_9b8;
  FScriptContainerElement *local_9b0;
  FScriptContainerElement *local_9a8;
  FScriptContainerElement *local_9a0;
  FScriptContainerElement *local_998;
  undefined4 local_990;
  undefined4 local_98c;
  FScriptContainerElement *local_988;
  FScriptContainerElement *local_980;
  FScriptContainerElement *local_978;
  longlong local_970;
  longlong local_968;
  FScriptContainerElement *local_960;
  FScriptContainerElement *local_958;
  FScriptContainerElement *local_950;
  undefined8 *local_948;
  FScriptContainerElement *local_940;
  FScriptContainerElement *local_938;
  FScriptContainerElement *local_930;
  FScriptContainerElement *local_928;
  FScriptContainerElement *local_920;
  FScriptContainerElement *local_918;
  undefined4 local_910;
  undefined4 local_90c;
  FScriptContainerElement *local_908;
  FScriptContainerElement *local_900;
  FScriptContainerElement *local_8f8;
  longlong local_8f0;
  longlong local_8e8;
  FScriptContainerElement *local_8e0;
  FScriptContainerElement *local_8d8;
  FScriptContainerElement *local_8d0;
  undefined1 *local_8c8;
  float *local_8c0;
  FScriptContainerElement *local_8b8;
  FScriptContainerElement *local_8b0;
  FScriptContainerElement *local_8a8;
  FScriptContainerElement *local_8a0;
  FScriptContainerElement *local_898;
  FScriptContainerElement *local_890;
  undefined4 local_888;
  undefined4 local_884;
  FScriptContainerElement *local_880;
  FScriptContainerElement *local_878;
  FScriptContainerElement *local_870;
  longlong local_868;
  longlong local_860;
  FScriptContainerElement *local_858;
  FScriptContainerElement *local_850;
  FScriptContainerElement *local_848;
  undefined8 *local_840;
  float *local_838;
  FScriptContainerElement *local_830;
  FScriptContainerElement *local_828;
  FScriptContainerElement *local_820;
  FScriptContainerElement *local_818;
  FScriptContainerElement *local_810;
  FScriptContainerElement *local_808;
  undefined4 local_800;
  undefined4 local_7fc;
  FScriptContainerElement *local_7f8;
  FScriptContainerElement *local_7f0;
  FScriptContainerElement *local_7e8;
  longlong local_7e0;
  longlong local_7d8;
  FScriptContainerElement *local_7d0;
  FScriptContainerElement *local_7c8;
  FScriptContainerElement *local_7c0;
  undefined8 *local_7b8;
  float *local_7b0;
  FScriptContainerElement *local_7a8;
  FScriptContainerElement *local_7a0;
  FScriptContainerElement *local_798;
  FScriptContainerElement *local_790;
  FScriptContainerElement *local_788;
  FScriptContainerElement *local_780;
  undefined4 local_778;
  undefined4 local_774;
  FScriptContainerElement *local_770;
  FScriptContainerElement *local_768;
  FScriptContainerElement *local_760;
  longlong local_758;
  longlong local_750;
  FScriptContainerElement *local_748;
  FScriptContainerElement *local_740;
  FScriptContainerElement *local_738;
  undefined8 *local_730;
  float *local_728;
  FScriptContainerElement *local_720;
  FScriptContainerElement *local_718;
  FScriptContainerElement *local_710;
  FScriptContainerElement *local_708;
  FScriptContainerElement *local_700;
  FScriptContainerElement *local_6f8;
  undefined4 local_6f0;
  undefined4 local_6ec;
  FScriptContainerElement *local_6e8;
  FScriptContainerElement *local_6e0;
  FScriptContainerElement *local_6d8;
  longlong local_6d0;
  longlong local_6c8;
  FScriptContainerElement *local_6c0;
  FScriptContainerElement *local_6b8;
  FScriptContainerElement *local_6b0;
  undefined8 *local_6a8;
  FScriptContainerElement *local_6a0;
  FScriptContainerElement *local_698;
  FScriptContainerElement *local_690;
  FScriptContainerElement *local_688;
  TVector2<float>_u_0 local_680;
  FDeprecateVector2DParameter local_678;
  TTransform2<float> *local_670;
  FSlateLayoutTransform *local_668;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *local_660;
  FPaintGeometry *local_658;
  FSlateWindowElementList *local_650;
  FScriptContainerElement *local_648;
  FScriptContainerElement *local_640;
  FScriptContainerElement *local_638;
  FScriptContainerElement *local_630;
  TVector2<double>_u_0 *local_628;
  FDeprecateVector2DParameter local_620;
  FGeometry *local_618;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *local_610;
  FPaintGeometry *local_608;
  FSlateWindowElementList *local_600;
  FScriptContainerElement *local_5f8;
  FScriptContainerElement *local_5f0;
  FScriptContainerElement *local_5e8;
  FScriptContainerElement *local_5e0;
  TVector2<double>_u_0 *local_5d8;
  FDeprecateVector2DParameter local_5d0;
  FGeometry *local_5c8;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *local_5c0;
  FPaintGeometry *local_5b8;
  FSlateWindowElementList *local_5b0;
  FScriptContainerElement *local_5a8;
  FScriptContainerElement *local_5a0;
  FScriptContainerElement *local_598;
  FScriptContainerElement *local_590;
  TVector2<double>_u_0 *local_588;
  FDeprecateVector2DParameter local_580;
  FGeometry *local_578;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *local_570;
  FPaintGeometry *local_568;
  FSlateWindowElementList *local_560;
  undefined4 local_558;
  undefined4 local_554;
  FScriptContainerElement *local_550;
  FScriptContainerElement *local_548;
  FScriptContainerElement *local_540;
  float *local_538;
  float *local_530;
  FScriptContainerElement *local_528;
  FScriptContainerElement *local_520;
  FScriptContainerElement *local_518;
  FScriptContainerElement *local_510;
  FScriptContainerElement *local_508;
  FScriptContainerElement *local_500;
  undefined4 local_4f8;
  undefined4 local_4f4;
  FScriptContainerElement *local_4f0;
  FScriptContainerElement *local_4e8;
  FScriptContainerElement *local_4e0;
  longlong local_4d8;
  longlong local_4d0;
  FScriptContainerElement *local_4c8;
  FScriptContainerElement *local_4c0;
  FScriptContainerElement *local_4b8;
  undefined8 *local_4b0;
  FScriptContainerElement *local_4a8;
  FScriptContainerElement *local_4a0;
  FScriptContainerElement *local_498;
  FScriptContainerElement *local_490;
  TVector2<float>_u_0 local_488;
  FDeprecateVector2DParameter local_480;
  TTransform2<float> *local_478;
  FSlateLayoutTransform *local_470;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *local_468;
  FPaintGeometry *local_460;
  FSlateWindowElementList *local_458;
  FScriptContainerElement *local_450;
  FScriptContainerElement *local_448;
  FScriptContainerElement *local_440;
  FScriptContainerElement *local_438;
  TVector2<double>_u_0 *local_430;
  FDeprecateVector2DParameter local_428;
  FGeometry *local_420;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *local_418;
  FPaintGeometry *local_410;
  FSlateWindowElementList *local_408;
  FScriptContainerElement *local_400;
  FScriptContainerElement *local_3f8;
  FScriptContainerElement *local_3f0;
  FScriptContainerElement *local_3e8;
  TVector2<double>_u_0 *local_3e0;
  FDeprecateVector2DParameter local_3d8;
  FGeometry *local_3d0;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *local_3c8;
  FPaintGeometry *local_3c0;
  FSlateWindowElementList *local_3b8;
  FScriptContainerElement *local_3b0;
  FScriptContainerElement *local_3a8;
  FScriptContainerElement *local_3a0;
  FScriptContainerElement *local_398;
  TVector2<double>_u_0 *local_390;
  FDeprecateVector2DParameter local_388;
  FGeometry *local_380;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *local_378;
  FPaintGeometry *local_370;
  FSlateWindowElementList *local_368;
  int local_360;
  int local_35c;
  int local_358;
  int local_354;
  int local_350;
  int local_34c;
  int local_348;
  float local_340;
  float local_33c;
  FGeometry *local_338;
  float local_330;
  undefined4 local_32c;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> local_328;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> local_318;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> local_308;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> local_2f8;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> local_2e8;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> local_2d8;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> local_2c8;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> local_2b8;
  TVector2<double>_u_0 local_2a8;
  TVector2<double>_u_0 local_298;
  TVector2<double>_u_0 local_288;
  TVector2<double>_u_0 local_278;
  TVector2<double>_u_0 local_268;
  TVector2<double>_u_0 local_258 [4];
  undefined1 local_218 [16];
  FSlateLayoutTransform local_208;
  FSlateLayoutTransform local_1fc;
  FPaintGeometry local_1f0;
  FPaintGeometry local_1b8;
  FPaintGeometry local_180;
  FPaintGeometry local_148;
  FPaintGeometry local_110;
  FPaintGeometry local_d8;
  FPaintGeometry local_a0;
  FPaintGeometry local_68;
  float local_30 [4];
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_d68;
  local_340 = __real_41200000;
  local_33c = __real_41200000;
  local_338 = param_1->Geometry;
  FVar4 = FGeometry::GetLocalSize(local_338);
  local_b60 = (*(float *)FVar4 * __real_447a0000) / __real_44160000;
  local_32c = 0;
  local_9f0 = param_1->Geometry;
  local_330 = local_b60;
  FVar4 = FGeometry::GetLocalSize(local_9f0);
  local_b54 = *(float *)((longlong)FVar4 + 4) - __real_41200000;
  local_9e8 = param_1->Geometry;
  FVar4 = FGeometry::GetLocalSize(local_9e8);
  local_b58 = *(float *)FVar4 / __real_40800000;
  local_9dc = local_b54;
  local_9d8 = param_1->Geometry;
  local_9e0 = local_b58;
  FVar4 = FGeometry::GetLocalSize(local_9d8);
  local_af0 = (*(float *)FVar4 * __real_447a0000) / __real_44160000;
  local_9cc = 0;
  local_9d0 = local_af0;
  this_00 = FSlateApplication::Get();
  local_c90 = FSlateApplication::GetDeltaTime(this_00);
  local_ae8 = `private:_int___cdecl_SElementTesting::TestDottedLineElement(FOnPaintHandlerParams_const&___ptr64)___ptr64'
              ::__l2::CurTime;
  `private:_int___cdecl_SElementTesting::TestDottedLineElement(FOnPaintHandlerParams_const&___ptr64)___ptr64'
  ::__l2::CurTime =
       `private:_int___cdecl_SElementTesting::TestDottedLineElement(FOnPaintHandlerParams_const&___ptr64)___ptr64'
       ::__l2::CurTime + local_c90;
  local_30[0] = __real_40a00000;
  local_30[1] = __real_41a00000;
  local_30[2] = __real_42480000;
  fVar8 = (`private:_int___cdecl_SElementTesting::TestDottedLineElement(FOnPaintHandlerParams_const&___ptr64)___ptr64'
           ::__l2::CurTime +
          `private:_int___cdecl_SElementTesting::TestDottedLineElement(FOnPaintHandlerParams_const&___ptr64)___ptr64'
          ::__l2::CurTime) - __real_3f000000;
  local_218 = ZEXT416((uint)fVar8);
  local_c8c = (int)ROUND(fVar8) >> 1;
  local_d00 = local_30[local_c8c % 3];
  local_9c8 = param_1->Geometry;
  local_cd0 = `private:_int___cdecl_SElementTesting::TestDottedLineElement(FOnPaintHandlerParams_const&___ptr64)___ptr64'
              ::__l2::CurTime;
  local_c88 = local_c8c;
  local_c84 = local_c8c;
  FVar4 = FGeometry::GetLocalSize(local_9c8);
  local_c80 = *(float *)FVar4 / __real_40800000;
  local_cf8 = CONCAT44(__real_41200000,local_c80);
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&local_d18.AllocatorInstance);
  local_d18.ArrayNum = 0;
  local_d18.ArrayMax =
       TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                 (&local_d18.AllocatorInstance);
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&local_ce0.AllocatorInstance);
  local_ce0.ArrayNum = 0;
  local_ce0.ArrayMax =
       TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                 (&local_ce0.AllocatorInstance);
  local_b50 = (FScriptContainerElement *)&local_cf8;
  local_9c0 = local_d18.AllocatorInstance.Data;
  local_9b8 = local_d18.AllocatorInstance.Data;
  local_9b0 = local_d18.AllocatorInstance.Data;
  if (local_d18.AllocatorInstance.Data <= local_b50) {
    local_9a8 = local_d18.AllocatorInstance.Data;
    local_9a0 = local_d18.AllocatorInstance.Data;
    local_998 = local_d18.AllocatorInstance.Data;
    if (local_b50 < local_d18.AllocatorInstance.Data + (longlong)local_d18.ArrayMax * 8) {
      local_990 = 0;
      local_98c = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      local_970 = (longlong)local_d18.ArrayNum;
      local_968 = (longlong)local_d18.ArrayMax;
      local_988 = local_d18.AllocatorInstance.Data;
      local_980 = local_d18.AllocatorInstance.Data;
      local_978 = local_d18.AllocatorInstance.Data;
      local_960 = local_d18.AllocatorInstance.Data;
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        iVar3 = (*pcVar1)();
        return iVar3;
      }
    }
  }
  if (local_d18.ArrayNum == local_d18.ArrayMax) {
    local_d18.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x408,&local_d18.AllocatorInstance,&local_d18.ArrayMax);
  }
  local_cc8 = local_d18.ArrayNum;
  local_958 = local_d18.AllocatorInstance.Data;
  local_950 = local_d18.AllocatorInstance.Data + (longlong)local_d18.ArrayNum * 8;
  local_d18.ArrayNum = local_d18.ArrayNum + 1;
  local_948 = ::operator_new(8,local_950);
  *local_948 = local_cf8;
  local_360 = local_cc8;
  local_b48 = &FLinearColor::Red;
  local_940 = local_ce0.AllocatorInstance.Data;
  local_938 = local_ce0.AllocatorInstance.Data;
  local_930 = local_ce0.AllocatorInstance.Data;
  if (local_ce0.AllocatorInstance.Data <
      (FScriptContainerElement *)((longlong)&FLinearColor::Red.field0_0x0 + 1)) {
    local_928 = local_ce0.AllocatorInstance.Data;
    local_920 = local_ce0.AllocatorInstance.Data;
    local_918 = local_ce0.AllocatorInstance.Data;
    if (&FLinearColor::Red < local_ce0.AllocatorInstance.Data + (longlong)local_ce0.ArrayMax * 0x10)
    {
      local_910 = 0;
      local_90c = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      local_8f0 = (longlong)local_ce0.ArrayNum;
      local_8e8 = (longlong)local_ce0.ArrayMax;
      local_908 = local_ce0.AllocatorInstance.Data;
      local_900 = local_ce0.AllocatorInstance.Data;
      local_8f8 = local_ce0.AllocatorInstance.Data;
      local_8e0 = local_ce0.AllocatorInstance.Data;
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        iVar3 = (*pcVar1)();
        return iVar3;
      }
    }
  }
  if (local_ce0.ArrayNum == local_ce0.ArrayMax) {
    local_ce0.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x410,&local_ce0.AllocatorInstance,&local_ce0.ArrayMax);
  }
  local_cc4 = local_ce0.ArrayNum;
  local_8d8 = local_ce0.AllocatorInstance.Data;
  local_8d0 = local_ce0.AllocatorInstance.Data + (longlong)local_ce0.ArrayNum * 0x10;
  local_ce0.ArrayNum = local_ce0.ArrayNum + 1;
  local_8c8 = ::operator_new(0x10,local_8d0);
  pFVar6 = &FLinearColor::Red;
  puVar7 = local_8c8;
  for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar7 = *(undefined1 *)&pFVar6->field0_0x0;
    pFVar6 = (FLinearColor *)((longlong)&pFVar6->field0_0x0 + 1);
    puVar7 = puVar7 + 1;
  }
  local_35c = local_cc4;
  local_ab8 = __real_42c80000;
  local_ab4 = __real_42480000;
  local_ab0 = &local_ab8;
  local_c70 = local_cf8._4_4_ + __real_42480000;
  local_c78 = (float)local_cf8 + __real_42c80000;
  local_b40 = (FScriptContainerElement *)&local_b38;
  local_8b8 = local_d18.AllocatorInstance.Data;
  local_8b0 = local_d18.AllocatorInstance.Data;
  local_8a8 = local_d18.AllocatorInstance.Data;
  local_b38 = local_c78;
  fStack_b34 = local_c70;
  local_8c0 = local_ab0;
  if (local_d18.AllocatorInstance.Data <= local_b40) {
    local_8a0 = local_d18.AllocatorInstance.Data;
    local_898 = local_d18.AllocatorInstance.Data;
    local_890 = local_d18.AllocatorInstance.Data;
    if (local_b40 < local_d18.AllocatorInstance.Data + (longlong)local_d18.ArrayMax * 8) {
      local_888 = 0;
      local_884 = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      local_868 = (longlong)local_d18.ArrayNum;
      local_860 = (longlong)local_d18.ArrayMax;
      local_880 = local_d18.AllocatorInstance.Data;
      local_878 = local_d18.AllocatorInstance.Data;
      local_870 = local_d18.AllocatorInstance.Data;
      local_858 = local_d18.AllocatorInstance.Data;
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        iVar3 = (*pcVar1)();
        return iVar3;
      }
    }
  }
  if (local_d18.ArrayNum == local_d18.ArrayMax) {
    local_d18.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x408,&local_d18.AllocatorInstance,&local_d18.ArrayMax);
  }
  local_cc0 = local_d18.ArrayNum;
  local_850 = local_d18.AllocatorInstance.Data;
  local_848 = local_d18.AllocatorInstance.Data + (longlong)local_d18.ArrayNum * 8;
  local_d18.ArrayNum = local_d18.ArrayNum + 1;
  local_840 = ::operator_new(8,local_848);
  *local_840 = CONCAT44(fStack_b34,local_b38);
  local_358 = local_cc0;
  local_aa8 = __real_43480000;
  local_aa4 = __real_41200000;
  local_aa0 = &local_aa8;
  local_c60 = local_cf8._4_4_ + __real_41200000;
  local_c68 = (float)local_cf8 + __real_43480000;
  local_b30 = (FScriptContainerElement *)&local_b28;
  local_830 = local_d18.AllocatorInstance.Data;
  local_828 = local_d18.AllocatorInstance.Data;
  local_820 = local_d18.AllocatorInstance.Data;
  local_b28 = local_c68;
  fStack_b24 = local_c60;
  local_838 = local_aa0;
  if (local_d18.AllocatorInstance.Data <= local_b30) {
    local_818 = local_d18.AllocatorInstance.Data;
    local_810 = local_d18.AllocatorInstance.Data;
    local_808 = local_d18.AllocatorInstance.Data;
    if (local_b30 < local_d18.AllocatorInstance.Data + (longlong)local_d18.ArrayMax * 8) {
      local_800 = 0;
      local_7fc = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      local_7e0 = (longlong)local_d18.ArrayNum;
      local_7d8 = (longlong)local_d18.ArrayMax;
      local_7f8 = local_d18.AllocatorInstance.Data;
      local_7f0 = local_d18.AllocatorInstance.Data;
      local_7e8 = local_d18.AllocatorInstance.Data;
      local_7d0 = local_d18.AllocatorInstance.Data;
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        iVar3 = (*pcVar1)();
        return iVar3;
      }
    }
  }
  if (local_d18.ArrayNum == local_d18.ArrayMax) {
    local_d18.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x408,&local_d18.AllocatorInstance,&local_d18.ArrayMax);
  }
  local_cbc = local_d18.ArrayNum;
  local_7c8 = local_d18.AllocatorInstance.Data;
  local_7c0 = local_d18.AllocatorInstance.Data + (longlong)local_d18.ArrayNum * 8;
  local_d18.ArrayNum = local_d18.ArrayNum + 1;
  local_7b8 = ::operator_new(8,local_7c0);
  *local_7b8 = CONCAT44(fStack_b24,local_b28);
  local_354 = local_cbc;
  local_a98 = __real_43960000;
  local_a94 = __real_42480000;
  local_a90 = &local_a98;
  local_c50 = local_cf8._4_4_ + __real_42480000;
  local_c58 = (float)local_cf8 + __real_43960000;
  local_b20 = (FScriptContainerElement *)&local_b18;
  local_7a8 = local_d18.AllocatorInstance.Data;
  local_7a0 = local_d18.AllocatorInstance.Data;
  local_798 = local_d18.AllocatorInstance.Data;
  local_b18 = local_c58;
  fStack_b14 = local_c50;
  local_7b0 = local_a90;
  if (local_d18.AllocatorInstance.Data <= local_b20) {
    local_790 = local_d18.AllocatorInstance.Data;
    local_788 = local_d18.AllocatorInstance.Data;
    local_780 = local_d18.AllocatorInstance.Data;
    if (local_b20 < local_d18.AllocatorInstance.Data + (longlong)local_d18.ArrayMax * 8) {
      local_778 = 0;
      local_774 = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      local_758 = (longlong)local_d18.ArrayNum;
      local_750 = (longlong)local_d18.ArrayMax;
      local_770 = local_d18.AllocatorInstance.Data;
      local_768 = local_d18.AllocatorInstance.Data;
      local_760 = local_d18.AllocatorInstance.Data;
      local_748 = local_d18.AllocatorInstance.Data;
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        iVar3 = (*pcVar1)();
        return iVar3;
      }
    }
  }
  if (local_d18.ArrayNum == local_d18.ArrayMax) {
    local_d18.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x408,&local_d18.AllocatorInstance,&local_d18.ArrayMax);
  }
  local_cb8 = local_d18.ArrayNum;
  local_740 = local_d18.AllocatorInstance.Data;
  local_738 = local_d18.AllocatorInstance.Data + (longlong)local_d18.ArrayNum * 8;
  local_d18.ArrayNum = local_d18.ArrayNum + 1;
  local_730 = ::operator_new(8,local_738);
  *local_730 = CONCAT44(fStack_b14,local_b18);
  local_350 = local_cb8;
  local_a88 = __real_43c80000;
  local_a84 = __real_41200000;
  local_ac0 = &local_a88;
  local_c40 = local_cf8._4_4_ + __real_41200000;
  local_c48 = (float)local_cf8 + __real_43c80000;
  local_b10 = (FScriptContainerElement *)&local_b08;
  local_720 = local_d18.AllocatorInstance.Data;
  local_718 = local_d18.AllocatorInstance.Data;
  local_710 = local_d18.AllocatorInstance.Data;
  local_b08 = local_c48;
  fStack_b04 = local_c40;
  local_728 = local_ac0;
  if (local_d18.AllocatorInstance.Data <= local_b10) {
    local_708 = local_d18.AllocatorInstance.Data;
    local_700 = local_d18.AllocatorInstance.Data;
    local_6f8 = local_d18.AllocatorInstance.Data;
    if (local_b10 < local_d18.AllocatorInstance.Data + (longlong)local_d18.ArrayMax * 8) {
      local_6f0 = 0;
      local_6ec = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      local_6d0 = (longlong)local_d18.ArrayNum;
      local_6c8 = (longlong)local_d18.ArrayMax;
      local_6e8 = local_d18.AllocatorInstance.Data;
      local_6e0 = local_d18.AllocatorInstance.Data;
      local_6d8 = local_d18.AllocatorInstance.Data;
      local_6c0 = local_d18.AllocatorInstance.Data;
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        iVar3 = (*pcVar1)();
        return iVar3;
      }
    }
  }
  if (local_d18.ArrayNum == local_d18.ArrayMax) {
    local_d18.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x408,&local_d18.AllocatorInstance,&local_d18.ArrayMax);
  }
  local_cb4 = local_d18.ArrayNum;
  local_6b8 = local_d18.AllocatorInstance.Data;
  local_6b0 = local_d18.AllocatorInstance.Data + (longlong)local_d18.ArrayNum * 8;
  local_d18.ArrayNum = local_d18.ArrayNum + 1;
  local_6a8 = ::operator_new(8,local_6b0);
  *local_6a8 = CONCAT44(fStack_b04,local_b08);
  local_34c = local_cb4;
  local_c30 = (float)((uint)`private:_int___cdecl_SElementTesting::TestDottedLineElement(FOnPaintHandlerParams_const&___ptr64)___ptr64'
                            ::__l2::CurTime ^ __xmm_80000000800000008000000080000000) *
              __real_41200000;
  local_c2c = param_1->Geometry->Scale;
  local_a70._s_0.R = FLinearColor::sRGBToLinearTable[FColor::White.field0_0x0._s_0.R];
  local_a70._s_0.G = FLinearColor::sRGBToLinearTable[FColor::White.field0_0x0._s_0.G];
  local_a70._s_0.B = FLinearColor::sRGBToLinearTable[FColor::White.field0_0x0._s_0.B];
  local_a70._s_0.A = (float)FColor::White.field0_0x0._3_1_ * __real_3b808081;
  if (param_1->bEnabled == false) {
    local_d08 = DisabledEffect;
  }
  else {
    local_d08 = None;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&local_328.AllocatorInstance);
  local_c38 = local_d18.ArrayNum;
  local_c34 = local_d18.ArrayNum;
  local_6a0 = local_d18.AllocatorInstance.Data;
  local_698 = local_d18.AllocatorInstance.Data;
  local_690 = local_d18.AllocatorInstance.Data;
  local_688 = local_d18.AllocatorInstance.Data;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>::
  CopyToEmpty<UE::Math::TVector2<float>,int>
            (&local_328,(TVector2<float> *)local_d18.AllocatorInstance.Data,local_d18.ArrayNum,0);
  local_660 = &local_328;
  local_ca0 = param_1->Geometry;
  local_cfc = local_ca0->bHasRenderTransform;
  local_680._s_0 = *(TVector2<float>_u_0_s_0 *)&local_ca0->Size;
  UE::Slate::FDeprecateVector2DParameter::FDeprecateVector2DParameter
            (&local_678,(TVector2<float> *)&local_680._s_0);
  local_670 = FGeometry::GetAccumulatedRenderTransform(local_ca0);
  local_668 = FGeometry::GetAccumulatedLayoutTransform(local_ca0,&local_208);
  FPaintGeometry::FPaintGeometry(&local_1f0,local_668,local_670,&local_678,local_cfc);
  local_658 = &local_1f0;
  local_c28 = param_1->Layer;
  local_650 = param_1->OutDrawElements;
  FSlateDrawElement::MakeDashedLines
            (local_650,local_c28,local_658,local_660,local_d08,(FLinearColor *)&local_a70._s_0,
             local_c2c,local_d00,local_c30);
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>::
  ~TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>(&local_328);
  local_c1c = (float)((uint)`private:_int___cdecl_SElementTesting::TestDottedLineElement(FOnPaintHandlerParams_const&___ptr64)___ptr64'
                            ::__l2::CurTime ^ __xmm_80000000800000008000000080000000) *
              __real_41a00000;
  local_c18 = __real_40a00000 * param_1->Geometry->Scale;
  local_a60._s_0.R = FLinearColor::sRGBToLinearTable[FColor::White.field0_0x0._s_0.R];
  local_a60._s_0.G = FLinearColor::sRGBToLinearTable[FColor::White.field0_0x0._s_0.G];
  local_a60._s_0.B = FLinearColor::sRGBToLinearTable[FColor::White.field0_0x0._s_0.B];
  local_a60._s_0.A = (float)FColor::White.field0_0x0._3_1_ * __real_3b808081;
  if (param_1->bEnabled == false) {
    local_d07 = DisabledEffect;
  }
  else {
    local_d07 = None;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&local_318.AllocatorInstance);
  local_c24 = local_d18.ArrayNum;
  local_c20 = local_d18.ArrayNum;
  local_648 = local_d18.AllocatorInstance.Data;
  local_640 = local_d18.AllocatorInstance.Data;
  local_638 = local_d18.AllocatorInstance.Data;
  local_630 = local_d18.AllocatorInstance.Data;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>::
  CopyToEmpty<UE::Math::TVector2<float>,int>
            (&local_318,(TVector2<float> *)local_d18.AllocatorInstance.Data,local_d18.ArrayNum,0);
  local_610 = &local_318;
  local_618 = param_1->Geometry;
  local_2a8._s_0.X = 0.0;
  local_2a8._s_0.Y = __real_4024000000000000;
  local_628 = &local_2a8;
  UE::Slate::FDeprecateVector2DParameter::FDeprecateVector2DParameter
            (&local_620,(TVector2<double> *)&local_628->_s_0);
  local_608 = FGeometry::ToOffsetPaintGeometry(local_618,&local_180,&local_620);
  local_c14 = param_1->Layer;
  local_600 = param_1->OutDrawElements;
  FSlateDrawElement::MakeDashedLines
            (local_600,local_c14,local_608,local_610,local_d07,(FLinearColor *)&local_a60._s_0,
             local_c18,local_d00,local_c1c);
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>::
  ~TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>(&local_318);
  local_c08 = (float)((uint)`private:_int___cdecl_SElementTesting::TestDottedLineElement(FOnPaintHandlerParams_const&___ptr64)___ptr64'
                            ::__l2::CurTime ^ __xmm_80000000800000008000000080000000) *
              __real_41f00000;
  local_c04 = __real_41200000 * param_1->Geometry->Scale;
  local_a50._s_0.R = FLinearColor::sRGBToLinearTable[FColor::White.field0_0x0._s_0.R];
  local_a50._s_0.G = FLinearColor::sRGBToLinearTable[FColor::White.field0_0x0._s_0.G];
  local_a50._s_0.B = FLinearColor::sRGBToLinearTable[FColor::White.field0_0x0._s_0.B];
  local_a50._s_0.A = (float)FColor::White.field0_0x0._3_1_ * __real_3b808081;
  if (param_1->bEnabled == false) {
    local_d06 = DisabledEffect;
  }
  else {
    local_d06 = None;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&local_308.AllocatorInstance);
  local_c10 = local_d18.ArrayNum;
  local_c0c = local_d18.ArrayNum;
  local_5f8 = local_d18.AllocatorInstance.Data;
  local_5f0 = local_d18.AllocatorInstance.Data;
  local_5e8 = local_d18.AllocatorInstance.Data;
  local_5e0 = local_d18.AllocatorInstance.Data;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>::
  CopyToEmpty<UE::Math::TVector2<float>,int>
            (&local_308,(TVector2<float> *)local_d18.AllocatorInstance.Data,local_d18.ArrayNum,0);
  local_5c0 = &local_308;
  local_5c8 = param_1->Geometry;
  local_298._s_0.X = 0.0;
  local_298._s_0.Y = __real_4034000000000000;
  local_5d8 = &local_298;
  UE::Slate::FDeprecateVector2DParameter::FDeprecateVector2DParameter
            (&local_5d0,(TVector2<double> *)&local_5d8->_s_0);
  local_5b8 = FGeometry::ToOffsetPaintGeometry(local_5c8,&local_148,&local_5d0);
  local_c00 = param_1->Layer;
  local_5b0 = param_1->OutDrawElements;
  FSlateDrawElement::MakeDashedLines
            (local_5b0,local_c00,local_5b8,local_5c0,local_d06,(FLinearColor *)&local_a50._s_0,
             local_c04,local_d00,local_c08);
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>::
  ~TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>(&local_308);
  local_bf4 = (float)((uint)`private:_int___cdecl_SElementTesting::TestDottedLineElement(FOnPaintHandlerParams_const&___ptr64)___ptr64'
                            ::__l2::CurTime ^ __xmm_80000000800000008000000080000000) *
              __real_42200000;
  local_bf0 = __real_41a00000 * param_1->Geometry->Scale;
  local_a40._s_0.R = FLinearColor::sRGBToLinearTable[FColor::White.field0_0x0._s_0.R];
  local_a40._s_0.G = FLinearColor::sRGBToLinearTable[FColor::White.field0_0x0._s_0.G];
  local_a40._s_0.B = FLinearColor::sRGBToLinearTable[FColor::White.field0_0x0._s_0.B];
  local_a40._s_0.A = (float)FColor::White.field0_0x0._3_1_ * __real_3b808081;
  if (param_1->bEnabled == false) {
    local_d05 = DisabledEffect;
  }
  else {
    local_d05 = None;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&local_2f8.AllocatorInstance);
  local_bfc = local_d18.ArrayNum;
  local_bf8 = local_d18.ArrayNum;
  local_5a8 = local_d18.AllocatorInstance.Data;
  local_5a0 = local_d18.AllocatorInstance.Data;
  local_598 = local_d18.AllocatorInstance.Data;
  local_590 = local_d18.AllocatorInstance.Data;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>::
  CopyToEmpty<UE::Math::TVector2<float>,int>
            (&local_2f8,(TVector2<float> *)local_d18.AllocatorInstance.Data,local_d18.ArrayNum,0);
  local_570 = &local_2f8;
  local_578 = param_1->Geometry;
  local_288._s_0.X = 0.0;
  local_288._s_0.Y = __real_4041000000000000;
  local_588 = &local_288;
  UE::Slate::FDeprecateVector2DParameter::FDeprecateVector2DParameter
            (&local_580,(TVector2<double> *)&local_588->_s_0);
  local_568 = FGeometry::ToOffsetPaintGeometry(local_578,&local_110,&local_580);
  local_bec = param_1->Layer;
  local_560 = param_1->OutDrawElements;
  FSlateDrawElement::MakeDashedLines
            (local_560,local_bec,local_568,local_570,local_d05,(FLinearColor *)&local_a40._s_0,
             local_bf0,local_d00,local_bf4);
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>::
  ~TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>(&local_2f8);
  local_be8 = local_d18.ArrayNum;
  local_ce8 = local_d18.ArrayNum + -1;
  local_cac = (uint)(-1 < local_ce8);
  local_cb0 = (uint)(local_ce8 < local_d18.ArrayNum);
  if (-1 >= local_ce8 || local_ce8 >= local_d18.ArrayNum) {
    local_558 = 0;
    local_554 = 0;
    UE::Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  local_550 = local_d18.AllocatorInstance.Data;
  local_548 = local_d18.AllocatorInstance.Data;
  local_a78 = local_d18.AllocatorInstance.Data + (longlong)local_ce8 * 8;
  local_a80 = __real_42480000;
  local_a7c = __real_41200000;
  local_ae0 = &local_a80;
  local_bd8 = *(float *)(local_a78 + 4) + __real_41200000;
  local_be0 = *(float *)local_a78 + __real_42480000;
  local_cf8 = CONCAT44(local_bd8,local_be0);
  local_ad8 = local_be0;
  fStack_ad4 = local_bd8;
  local_540 = local_a78;
  local_538 = local_ae0;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>::Empty(&local_d18,0);
  local_bd0 = FGenericPlatformMath::Fmod
                        (`private:_int___cdecl_SElementTesting::TestDottedLineElement(FOnPaintHandlerParams_const&___ptr64)___ptr64'
                         ::__l2::CurTime,__real_40c90fdb);
  local_cf0 = 0.0;
  do {
    if (__real_41fb53d2 <= local_cf0) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) <
           `private:_int___cdecl_SElementTesting::TestDottedLineElement(FOnPaintHandlerParams_const&___ptr64)___ptr64'
           ::__l2::_thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`private:_int___cdecl_SElementTesting::TestDottedLineElement(FOnPaintHandlerParams_const&___ptr64)___ptr64'
                               ::__l2::_thread_safe_static_guard_0__),
         `private:_int___cdecl_SElementTesting::TestDottedLineElement(FOnPaintHandlerParams_const&___ptr64)___ptr64'
         ::__l2::_thread_safe_static_guard_0__ == -1)) {
        FColor::MakeRandomColor();
        _Init_thread_footer(&`private:_int___cdecl_SElementTesting::TestDottedLineElement(FOnPaintHandlerParams_const&___ptr64)___ptr64'
                             ::__l2::_thread_safe_static_guard_0__);
      }
      local_bb0 = `private:_int___cdecl_SElementTesting::TestDottedLineElement(FOnPaintHandlerParams_const&___ptr64)___ptr64'
                  ::__l2::CurTime * __real_41700000;
      local_bac = param_1->Geometry->Scale;
      local_a30._s_0.R =
           FLinearColor::sRGBToLinearTable
           [`private:_int___cdecl_SElementTesting::TestDottedLineElement(FOnPaintHandlerParams_const&___ptr64)___ptr64'
            ::__l2::Color.field0_0x0._s_0.R];
      local_a30._s_0.G =
           FLinearColor::sRGBToLinearTable
           [`private:_int___cdecl_SElementTesting::TestDottedLineElement(FOnPaintHandlerParams_const&___ptr64)___ptr64'
            ::__l2::Color.field0_0x0._s_0.G];
      local_a30._s_0.B =
           FLinearColor::sRGBToLinearTable
           [`private:_int___cdecl_SElementTesting::TestDottedLineElement(FOnPaintHandlerParams_const&___ptr64)___ptr64'
            ::__l2::Color.field0_0x0._s_0.B];
      local_a30._s_0.A =
           (float)`private:_int___cdecl_SElementTesting::TestDottedLineElement(FOnPaintHandlerParams_const&___ptr64)___ptr64'
                  ::__l2::Color.field0_0x0._3_1_ * __real_3b808081;
      if (param_1->bEnabled == false) {
        local_d04 = ::operator|(NoPixelSnapping,DisabledEffect);
      }
      else {
        local_d04 = NoPixelSnapping;
      }
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
                (&local_2e8.AllocatorInstance);
      local_bb8 = local_d18.ArrayNum;
      local_bb4 = local_d18.ArrayNum;
      local_4a8 = local_d18.AllocatorInstance.Data;
      local_4a0 = local_d18.AllocatorInstance.Data;
      local_498 = local_d18.AllocatorInstance.Data;
      local_490 = local_d18.AllocatorInstance.Data;
      TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>::
      CopyToEmpty<UE::Math::TVector2<float>,int>
                (&local_2e8,(TVector2<float> *)local_d18.AllocatorInstance.Data,local_d18.ArrayNum,0
                );
      local_468 = &local_2e8;
      local_c98 = param_1->Geometry;
      local_cfb = local_c98->bHasRenderTransform;
      local_488._s_0 = *(TVector2<float>_u_0_s_0 *)&local_c98->Size;
      UE::Slate::FDeprecateVector2DParameter::FDeprecateVector2DParameter
                (&local_480,(TVector2<float> *)&local_488._s_0);
      local_478 = FGeometry::GetAccumulatedRenderTransform(local_c98);
      local_470 = FGeometry::GetAccumulatedLayoutTransform(local_c98,&local_1fc);
      FPaintGeometry::FPaintGeometry(&local_1b8,local_470,local_478,&local_480,local_cfb);
      local_460 = &local_1b8;
      local_ba8 = param_1->Layer + 1;
      local_458 = param_1->OutDrawElements;
      FSlateDrawElement::MakeDashedLines
                (local_458,local_ba8,local_460,local_468,local_d04,(FLinearColor *)&local_a30._s_0,
                 local_bac,local_d00,local_bb0);
      TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>::
      ~TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>(&local_2e8);
      local_b9c = `private:_int___cdecl_SElementTesting::TestDottedLineElement(FOnPaintHandlerParams_const&___ptr64)___ptr64'
                  ::__l2::CurTime * __real_41700000;
      local_b98 = __real_40000000 * param_1->Geometry->Scale;
      local_a20._s_0.R =
           FLinearColor::sRGBToLinearTable
           [`private:_int___cdecl_SElementTesting::TestDottedLineElement(FOnPaintHandlerParams_const&___ptr64)___ptr64'
            ::__l2::Color.field0_0x0._s_0.R];
      local_a20._s_0.G =
           FLinearColor::sRGBToLinearTable
           [`private:_int___cdecl_SElementTesting::TestDottedLineElement(FOnPaintHandlerParams_const&___ptr64)___ptr64'
            ::__l2::Color.field0_0x0._s_0.G];
      local_a20._s_0.B =
           FLinearColor::sRGBToLinearTable
           [`private:_int___cdecl_SElementTesting::TestDottedLineElement(FOnPaintHandlerParams_const&___ptr64)___ptr64'
            ::__l2::Color.field0_0x0._s_0.B];
      local_a20._s_0.A =
           (float)`private:_int___cdecl_SElementTesting::TestDottedLineElement(FOnPaintHandlerParams_const&___ptr64)___ptr64'
                  ::__l2::Color.field0_0x0._3_1_ * __real_3b808081;
      if (param_1->bEnabled == false) {
        local_d03 = ::operator|(NoPixelSnapping,DisabledEffect);
      }
      else {
        local_d03 = NoPixelSnapping;
      }
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
                (&local_2d8.AllocatorInstance);
      local_ba4 = local_d18.ArrayNum;
      local_ba0 = local_d18.ArrayNum;
      local_450 = local_d18.AllocatorInstance.Data;
      local_448 = local_d18.AllocatorInstance.Data;
      local_440 = local_d18.AllocatorInstance.Data;
      local_438 = local_d18.AllocatorInstance.Data;
      TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>::
      CopyToEmpty<UE::Math::TVector2<float>,int>
                (&local_2d8,(TVector2<float> *)local_d18.AllocatorInstance.Data,local_d18.ArrayNum,0
                );
      local_418 = &local_2d8;
      local_420 = param_1->Geometry;
      local_278._s_0.X = 0.0;
      local_278._s_0.Y = __real_4024000000000000;
      local_430 = &local_278;
      UE::Slate::FDeprecateVector2DParameter::FDeprecateVector2DParameter
                (&local_428,(TVector2<double> *)&local_430->_s_0);
      local_410 = FGeometry::ToOffsetPaintGeometry(local_420,&local_d8,&local_428);
      local_b94 = param_1->Layer;
      local_408 = param_1->OutDrawElements;
      FSlateDrawElement::MakeDashedLines
                (local_408,local_b94,local_410,local_418,local_d03,(FLinearColor *)&local_a20._s_0,
                 local_b98,local_d00,local_b9c);
      TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>::
      ~TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>(&local_2d8);
      local_b88 = `private:_int___cdecl_SElementTesting::TestDottedLineElement(FOnPaintHandlerParams_const&___ptr64)___ptr64'
                  ::__l2::CurTime * __real_41700000;
      local_b84 = __real_40400000 * param_1->Geometry->Scale;
      local_a10._s_0.R =
           FLinearColor::sRGBToLinearTable
           [`private:_int___cdecl_SElementTesting::TestDottedLineElement(FOnPaintHandlerParams_const&___ptr64)___ptr64'
            ::__l2::Color.field0_0x0._s_0.R];
      local_a10._s_0.G =
           FLinearColor::sRGBToLinearTable
           [`private:_int___cdecl_SElementTesting::TestDottedLineElement(FOnPaintHandlerParams_const&___ptr64)___ptr64'
            ::__l2::Color.field0_0x0._s_0.G];
      local_a10._s_0.B =
           FLinearColor::sRGBToLinearTable
           [`private:_int___cdecl_SElementTesting::TestDottedLineElement(FOnPaintHandlerParams_const&___ptr64)___ptr64'
            ::__l2::Color.field0_0x0._s_0.B];
      local_a10._s_0.A =
           (float)`private:_int___cdecl_SElementTesting::TestDottedLineElement(FOnPaintHandlerParams_const&___ptr64)___ptr64'
                  ::__l2::Color.field0_0x0._3_1_ * __real_3b808081;
      if (param_1->bEnabled == false) {
        local_d02 = ::operator|(NoPixelSnapping,DisabledEffect);
      }
      else {
        local_d02 = NoPixelSnapping;
      }
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
                (&local_2c8.AllocatorInstance);
      local_b90 = local_d18.ArrayNum;
      local_b8c = local_d18.ArrayNum;
      local_400 = local_d18.AllocatorInstance.Data;
      local_3f8 = local_d18.AllocatorInstance.Data;
      local_3f0 = local_d18.AllocatorInstance.Data;
      local_3e8 = local_d18.AllocatorInstance.Data;
      TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>::
      CopyToEmpty<UE::Math::TVector2<float>,int>
                (&local_2c8,(TVector2<float> *)local_d18.AllocatorInstance.Data,local_d18.ArrayNum,0
                );
      local_3c8 = &local_2c8;
      local_3d0 = param_1->Geometry;
      local_268._s_0.X = 0.0;
      local_268._s_0.Y = __real_4034000000000000;
      local_3e0 = &local_268;
      UE::Slate::FDeprecateVector2DParameter::FDeprecateVector2DParameter
                (&local_3d8,(TVector2<double> *)&local_3e0->_s_0);
      local_3c0 = FGeometry::ToOffsetPaintGeometry(local_3d0,&local_a0,&local_3d8);
      local_b80 = param_1->Layer;
      local_3b8 = param_1->OutDrawElements;
      FSlateDrawElement::MakeDashedLines
                (local_3b8,local_b80,local_3c0,local_3c8,local_d02,(FLinearColor *)&local_a10._s_0,
                 local_b84,local_d00,local_b88);
      TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>::
      ~TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>(&local_2c8);
      local_b74 = `private:_int___cdecl_SElementTesting::TestDottedLineElement(FOnPaintHandlerParams_const&___ptr64)___ptr64'
                  ::__l2::CurTime * __real_41700000;
      local_b70 = __real_40800000 * param_1->Geometry->Scale;
      local_a00._s_0.R =
           FLinearColor::sRGBToLinearTable
           [`private:_int___cdecl_SElementTesting::TestDottedLineElement(FOnPaintHandlerParams_const&___ptr64)___ptr64'
            ::__l2::Color.field0_0x0._s_0.R];
      local_a00._s_0.G =
           FLinearColor::sRGBToLinearTable
           [`private:_int___cdecl_SElementTesting::TestDottedLineElement(FOnPaintHandlerParams_const&___ptr64)___ptr64'
            ::__l2::Color.field0_0x0._s_0.G];
      local_a00._s_0.B =
           FLinearColor::sRGBToLinearTable
           [`private:_int___cdecl_SElementTesting::TestDottedLineElement(FOnPaintHandlerParams_const&___ptr64)___ptr64'
            ::__l2::Color.field0_0x0._s_0.B];
      local_a00._s_0.A =
           (float)`private:_int___cdecl_SElementTesting::TestDottedLineElement(FOnPaintHandlerParams_const&___ptr64)___ptr64'
                  ::__l2::Color.field0_0x0._3_1_ * __real_3b808081;
      if (param_1->bEnabled == false) {
        local_d01 = ::operator|(NoPixelSnapping,DisabledEffect);
      }
      else {
        local_d01 = NoPixelSnapping;
      }
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
                (&local_2b8.AllocatorInstance);
      local_b7c = local_d18.ArrayNum;
      local_b78 = local_d18.ArrayNum;
      local_3b0 = local_d18.AllocatorInstance.Data;
      local_3a8 = local_d18.AllocatorInstance.Data;
      local_3a0 = local_d18.AllocatorInstance.Data;
      local_398 = local_d18.AllocatorInstance.Data;
      TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>::
      CopyToEmpty<UE::Math::TVector2<float>,int>
                (&local_2b8,(TVector2<float> *)local_d18.AllocatorInstance.Data,local_d18.ArrayNum,0
                );
      local_378 = &local_2b8;
      local_380 = param_1->Geometry;
      local_258[0]._s_0.X = 0.0;
      local_258[0]._s_0.Y = __real_4041000000000000;
      local_390 = local_258;
      UE::Slate::FDeprecateVector2DParameter::FDeprecateVector2DParameter
                (&local_388,(TVector2<double> *)&local_390->_s_0);
      local_370 = FGeometry::ToOffsetPaintGeometry(local_380,&local_68,&local_388);
      local_b6c = param_1->Layer;
      local_368 = param_1->OutDrawElements;
      FSlateDrawElement::MakeDashedLines
                (local_368,local_b6c,local_370,local_378,local_d01,(FLinearColor *)&local_a00._s_0,
                 local_b70,local_d00,local_b74);
      TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>::
      ~TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>(&local_2b8);
      local_b68 = param_1->Layer;
      TArray<FLinearColor,TSizedDefaultAllocator<32>_>::
      ~TArray<FLinearColor,TSizedDefaultAllocator<32>_>(&local_ce0);
      TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>::
      ~TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>(&local_d18);
      return local_b68;
    }
    local_bcc = sinf(local_cf0 + local_bd0);
    local_ad0 = local_cf0 * __real_41700000;
    local_acc = __real_41700000 * local_bcc;
    local_ac8 = &local_ad0;
    local_bc0 = local_cf8._4_4_ + local_acc;
    local_bc8 = (float)local_cf8 + local_ad0;
    local_b00 = (FScriptContainerElement *)&local_af8;
    local_528 = local_d18.AllocatorInstance.Data;
    local_520 = local_d18.AllocatorInstance.Data;
    local_518 = local_d18.AllocatorInstance.Data;
    local_af8 = local_bc8;
    fStack_af4 = local_bc0;
    local_530 = local_ac8;
    if (local_d18.AllocatorInstance.Data <= local_b00) {
      local_510 = local_d18.AllocatorInstance.Data;
      local_508 = local_d18.AllocatorInstance.Data;
      local_500 = local_d18.AllocatorInstance.Data;
      if (local_b00 < local_d18.AllocatorInstance.Data + (longlong)local_d18.ArrayMax * 8) {
        local_4f8 = 0;
        local_4f4 = 0;
        UE::Core::Private::FormatStringSan::
        AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
        local_4d8 = (longlong)local_d18.ArrayNum;
        local_4d0 = (longlong)local_d18.ArrayMax;
        local_4f0 = local_d18.AllocatorInstance.Data;
        local_4e8 = local_d18.AllocatorInstance.Data;
        local_4e0 = local_d18.AllocatorInstance.Data;
        local_4c8 = local_d18.AllocatorInstance.Data;
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          iVar3 = (*pcVar1)();
          return iVar3;
        }
      }
    }
    if (local_d18.ArrayNum == local_d18.ArrayMax) {
      local_d18.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x408,&local_d18.AllocatorInstance,&local_d18.ArrayMax);
    }
    local_ca8 = local_d18.ArrayNum;
    local_4c0 = local_d18.AllocatorInstance.Data;
    local_4b8 = local_d18.AllocatorInstance.Data + (longlong)local_d18.ArrayNum * 8;
    local_d18.ArrayNum = local_d18.ArrayNum + 1;
    local_4b0 = ::operator_new(8,local_4b8);
    *local_4b0 = CONCAT44(fStack_af4,local_af8);
    local_348 = local_ca8;
    local_cf0 = local_cf0 + __real_3dcccccd;
  } while( true );
}

// TestGradientElement @ 1430ff1c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
SElementTesting::TestGradientElement(SElementTesting *this,FOnPaintHandlerParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FDeprecateSlateVector2D FVar4;
  TVector4<float> *pTVar5;
  longlong lVar6;
  float *pfVar7;
  FSlateGradientStop *pFVar8;
  undefined1 *puVar9;
  FLinearColor *pFVar10;
  undefined1 *puVar11;
  undefined1 auStackY_648 [32];
  TArray<FSlateGradientStop,TSizedDefaultAllocator<32>_> local_5f8;
  ESlateDrawEffect local_5e8;
  bool local_5e7;
  int local_5e4;
  int local_5e0;
  int local_5dc;
  int local_5d8;
  float *local_5d0;
  float *local_5c8;
  float *local_5c0;
  float *local_5b8;
  FSlateGradientStop *local_5b0;
  FSlateGradientStop *local_5a8;
  FSlateGradientStop *local_5a0;
  FSlateGradientStop *local_598;
  FGeometry *local_590;
  float local_588;
  float local_580;
  float local_578;
  float local_570;
  int local_568;
  int local_564;
  uint local_560;
  int local_55c;
  TArray<FSlateGradientStop,TSizedDefaultAllocator<32>_> *local_558;
  TVector2<float>_u_0 local_550;
  TVector2<float>_u_0 local_548;
  TVector2<float>_u_0 local_540;
  TVector2<float>_u_0 local_538;
  int local_530;
  int local_52c;
  int local_528;
  float *local_520;
  FGeometry *local_518;
  TVector2<float>_u_0 *local_510;
  TVector2<float>_u_0 *local_508;
  FSlateGradientStop *local_500;
  FSlateGradientStop *local_4f8;
  FSlateGradientStop *local_4f0;
  FSlateGradientStop *local_4e8;
  FSlateGradientStop *local_4e0;
  FSlateGradientStop *local_4d8;
  undefined4 local_4d0;
  undefined4 local_4cc;
  FSlateGradientStop *local_4c8;
  FSlateGradientStop *local_4c0;
  FSlateGradientStop *local_4b8;
  longlong local_4b0;
  longlong local_4a8;
  FSlateGradientStop *local_4a0;
  FSlateGradientStop *local_498;
  FScriptContainerElement *local_490;
  undefined1 *local_488;
  float *local_480;
  FGeometry *local_478;
  TVector2<float>_u_0 *local_470;
  TVector2<float>_u_0 *local_468;
  FSlateGradientStop *local_460;
  FSlateGradientStop *local_458;
  FSlateGradientStop *local_450;
  FSlateGradientStop *local_448;
  FSlateGradientStop *local_440;
  FSlateGradientStop *local_438;
  undefined4 local_430;
  undefined4 local_42c;
  FSlateGradientStop *local_428;
  FSlateGradientStop *local_420;
  FSlateGradientStop *local_418;
  longlong local_410;
  longlong local_408;
  FSlateGradientStop *local_400;
  FSlateGradientStop *local_3f8;
  FScriptContainerElement *local_3f0;
  undefined1 *local_3e8;
  float *local_3e0;
  FGeometry *local_3d8;
  TVector2<float>_u_0 *local_3d0;
  TVector2<float>_u_0 *local_3c8;
  FSlateGradientStop *local_3c0;
  FSlateGradientStop *local_3b8;
  FSlateGradientStop *local_3b0;
  FSlateGradientStop *local_3a8;
  FSlateGradientStop *local_3a0;
  FSlateGradientStop *local_398;
  undefined4 local_390;
  undefined4 local_38c;
  FSlateGradientStop *local_388;
  FSlateGradientStop *local_380;
  FSlateGradientStop *local_378;
  longlong local_370;
  longlong local_368;
  FSlateGradientStop *local_360;
  FSlateGradientStop *local_358;
  FScriptContainerElement *local_350;
  undefined1 *local_348;
  float *local_340;
  FGeometry *local_338;
  TVector2<float>_u_0 *local_330;
  TVector2<float>_u_0 *local_328;
  FSlateGradientStop *local_320;
  FSlateGradientStop *local_318;
  FSlateGradientStop *local_310;
  FSlateGradientStop *local_308;
  FSlateGradientStop *local_300;
  FSlateGradientStop *local_2f8;
  undefined4 local_2f0;
  undefined4 local_2ec;
  FSlateGradientStop *local_2e8;
  FSlateGradientStop *local_2e0;
  FSlateGradientStop *local_2d8;
  longlong local_2d0;
  longlong local_2c8;
  FSlateGradientStop *local_2c0;
  FSlateGradientStop *local_2b8;
  FScriptContainerElement *local_2b0;
  undefined1 *local_2a8;
  FSlateGradientStop *local_2a0;
  FSlateGradientStop *local_298;
  FSlateGradientStop *local_290;
  FSlateGradientStop *local_288;
  TArray<FSlateGradientStop,TSizedDefaultAllocator<32>_> *local_280;
  TVector2<float>_u_0 local_278;
  FDeprecateVector2DParameter local_270;
  TTransform2<float> *local_268;
  FSlateLayoutTransform *local_260;
  TArray<FSlateGradientStop,TSizedDefaultAllocator<32>_> *local_258;
  FPaintGeometry *local_250;
  FSlateWindowElementList *local_248;
  int local_240;
  undefined1 local_218 [16];
  FLinearColor local_208;
  undefined1 local_1f8 [16];
  FLinearColor local_1e8;
  undefined1 local_1d8 [16];
  FLinearColor local_1c8;
  undefined1 local_1b8 [16];
  FLinearColor local_1a8;
  undefined1 local_198 [16];
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  TVector4<float> local_138;
  FSlateLayoutTransform local_128;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  TVector4<float> local_d8;
  TArray<FSlateGradientStop,TSizedDefaultAllocator<32>_> local_c8;
  FSlateGradientStop local_b8;
  FSlateGradientStop local_a0;
  FSlateGradientStop local_88;
  FSlateGradientStop local_70;
  FPaintGeometry local_58;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_648;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&local_5f8.AllocatorInstance);
  local_5f8.ArrayNum = 0;
  local_5f8.ArrayMax =
       TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                 (&local_5f8.AllocatorInstance);
  local_5d0 = &local_118;
  local_118 = FLinearColor::sRGBToLinearTable[FColor::Yellow.field0_0x0._s_0.R];
  local_114 = FLinearColor::sRGBToLinearTable[FColor::Yellow.field0_0x0._s_0.G];
  local_110 = FLinearColor::sRGBToLinearTable[FColor::Yellow.field0_0x0._s_0.B];
  local_10c = (float)FColor::Yellow.field0_0x0._3_1_ * __real_3b808081;
  pfVar7 = local_5d0;
  puVar9 = local_218;
  for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar9 = *(undefined1 *)pfVar7;
    pfVar7 = (float *)((longlong)pfVar7 + 1);
    puVar9 = puVar9 + 1;
  }
  local_518 = param_1->Geometry;
  local_520 = local_5d0;
  FVar4 = FGeometry::GetLocalSize(local_518);
  local_588 = *(float *)FVar4 * __real_3dcccccd;
  local_550._s_0.Y = 0.0;
  local_510 = &local_550;
  puVar9 = local_218;
  pFVar10 = &local_208;
  for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
    *(undefined1 *)&pFVar10->field0_0x0 = *puVar9;
    puVar9 = puVar9 + 1;
    pFVar10 = (FLinearColor *)((longlong)&pFVar10->field0_0x0 + 1);
  }
  local_550._s_0.X = local_588;
  local_508 = local_510;
  local_5b0 = FSlateGradientStop::FSlateGradientStop<UE::Math::TVector2<float>_>
                        (&local_b8,(TVector2<float> *)&local_510->_s_0,&local_208);
  local_500 = (FSlateGradientStop *)local_5f8.AllocatorInstance.Data;
  local_4f8 = (FSlateGradientStop *)local_5f8.AllocatorInstance.Data;
  local_4f0 = (FSlateGradientStop *)local_5f8.AllocatorInstance.Data;
  if (local_5f8.AllocatorInstance.Data <= local_5b0) {
    local_4e8 = (FSlateGradientStop *)local_5f8.AllocatorInstance.Data;
    local_4e0 = (FSlateGradientStop *)local_5f8.AllocatorInstance.Data;
    local_4d8 = (FSlateGradientStop *)local_5f8.AllocatorInstance.Data;
    if (local_5b0 <
        (FSlateGradientStop *)
        (local_5f8.AllocatorInstance.Data + (longlong)local_5f8.ArrayMax * 0x18)) {
      local_4d0 = 0;
      local_4cc = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      local_4b0 = (longlong)local_5f8.ArrayNum;
      local_4a8 = (longlong)local_5f8.ArrayMax;
      local_4c8 = (FSlateGradientStop *)local_5f8.AllocatorInstance.Data;
      local_4c0 = (FSlateGradientStop *)local_5f8.AllocatorInstance.Data;
      local_4b8 = (FSlateGradientStop *)local_5f8.AllocatorInstance.Data;
      local_4a0 = (FSlateGradientStop *)local_5f8.AllocatorInstance.Data;
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        iVar3 = (*pcVar1)();
        return iVar3;
      }
    }
  }
  if (local_5f8.ArrayNum == local_5f8.ArrayMax) {
    local_5f8.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x418,&local_5f8.AllocatorInstance,&local_5f8.ArrayMax);
  }
  local_5e4 = local_5f8.ArrayNum;
  local_498 = (FSlateGradientStop *)local_5f8.AllocatorInstance.Data;
  local_490 = local_5f8.AllocatorInstance.Data + (longlong)local_5f8.ArrayNum * 0x18;
  local_5f8.ArrayNum = local_5f8.ArrayNum + 1;
  local_488 = ::operator_new(0x18,local_490);
  pFVar8 = local_5b0;
  puVar9 = local_488;
  for (lVar6 = 0x18; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar9 = *(undefined1 *)&(pFVar8->Position).field0_0x0;
    pFVar8 = (FSlateGradientStop *)((longlong)&(pFVar8->Position).field0_0x0 + 1);
    puVar9 = puVar9 + 1;
  }
  local_240 = local_5e4;
  local_5c8 = &local_108;
  local_108 = FLinearColor::sRGBToLinearTable[FColor::Magenta.field0_0x0._s_0.R];
  local_104 = FLinearColor::sRGBToLinearTable[FColor::Magenta.field0_0x0._s_0.G];
  local_100 = FLinearColor::sRGBToLinearTable[FColor::Magenta.field0_0x0._s_0.B];
  local_fc = (float)FColor::Magenta.field0_0x0._3_1_ * __real_3b808081;
  pfVar7 = local_5c8;
  puVar9 = local_1f8;
  for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar9 = *(undefined1 *)pfVar7;
    pfVar7 = (float *)((longlong)pfVar7 + 1);
    puVar9 = puVar9 + 1;
  }
  local_478 = param_1->Geometry;
  local_480 = local_5c8;
  FVar4 = FGeometry::GetLocalSize(local_478);
  local_580 = *(float *)FVar4 * __real_3e800000;
  local_548._s_0.Y = 0.0;
  local_470 = &local_548;
  puVar9 = local_1f8;
  pFVar10 = &local_1e8;
  for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
    *(undefined1 *)&pFVar10->field0_0x0 = *puVar9;
    puVar9 = puVar9 + 1;
    pFVar10 = (FLinearColor *)((longlong)&pFVar10->field0_0x0 + 1);
  }
  local_548._s_0.X = local_580;
  local_468 = local_470;
  local_5a8 = FSlateGradientStop::FSlateGradientStop<UE::Math::TVector2<float>_>
                        (&local_a0,(TVector2<float> *)&local_470->_s_0,&local_1e8);
  local_460 = (FSlateGradientStop *)local_5f8.AllocatorInstance.Data;
  local_458 = (FSlateGradientStop *)local_5f8.AllocatorInstance.Data;
  local_450 = (FSlateGradientStop *)local_5f8.AllocatorInstance.Data;
  if (local_5f8.AllocatorInstance.Data <= local_5a8) {
    local_448 = (FSlateGradientStop *)local_5f8.AllocatorInstance.Data;
    local_440 = (FSlateGradientStop *)local_5f8.AllocatorInstance.Data;
    local_438 = (FSlateGradientStop *)local_5f8.AllocatorInstance.Data;
    if (local_5a8 <
        (FSlateGradientStop *)
        (local_5f8.AllocatorInstance.Data + (longlong)local_5f8.ArrayMax * 0x18)) {
      local_430 = 0;
      local_42c = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      local_410 = (longlong)local_5f8.ArrayNum;
      local_408 = (longlong)local_5f8.ArrayMax;
      local_428 = (FSlateGradientStop *)local_5f8.AllocatorInstance.Data;
      local_420 = (FSlateGradientStop *)local_5f8.AllocatorInstance.Data;
      local_418 = (FSlateGradientStop *)local_5f8.AllocatorInstance.Data;
      local_400 = (FSlateGradientStop *)local_5f8.AllocatorInstance.Data;
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        iVar3 = (*pcVar1)();
        return iVar3;
      }
    }
  }
  if (local_5f8.ArrayNum == local_5f8.ArrayMax) {
    local_5f8.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x418,&local_5f8.AllocatorInstance,&local_5f8.ArrayMax);
  }
  local_5e0 = local_5f8.ArrayNum;
  local_3f8 = (FSlateGradientStop *)local_5f8.AllocatorInstance.Data;
  local_3f0 = local_5f8.AllocatorInstance.Data + (longlong)local_5f8.ArrayNum * 0x18;
  local_5f8.ArrayNum = local_5f8.ArrayNum + 1;
  local_3e8 = ::operator_new(0x18,local_3f0);
  pFVar8 = local_5a8;
  puVar9 = local_3e8;
  for (lVar6 = 0x18; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar9 = *(undefined1 *)&(pFVar8->Position).field0_0x0;
    pFVar8 = (FSlateGradientStop *)((longlong)&(pFVar8->Position).field0_0x0 + 1);
    puVar9 = puVar9 + 1;
  }
  local_530 = local_5e0;
  local_5c0 = &local_f8;
  local_f8 = FLinearColor::sRGBToLinearTable[FColor::Blue.field0_0x0._s_0.R];
  local_f4 = FLinearColor::sRGBToLinearTable[FColor::Blue.field0_0x0._s_0.G];
  local_f0 = FLinearColor::sRGBToLinearTable[FColor::Blue.field0_0x0._s_0.B];
  local_ec = (float)FColor::Blue.field0_0x0._3_1_ * __real_3b808081;
  pfVar7 = local_5c0;
  puVar9 = local_1d8;
  for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar9 = *(undefined1 *)pfVar7;
    pfVar7 = (float *)((longlong)pfVar7 + 1);
    puVar9 = puVar9 + 1;
  }
  local_3d8 = param_1->Geometry;
  local_3e0 = local_5c0;
  FVar4 = FGeometry::GetLocalSize(local_3d8);
  local_578 = *(float *)FVar4 * __real_3f400000;
  local_540._s_0.Y = 0.0;
  local_3d0 = &local_540;
  puVar9 = local_1d8;
  pFVar10 = &local_1c8;
  for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
    *(undefined1 *)&pFVar10->field0_0x0 = *puVar9;
    puVar9 = puVar9 + 1;
    pFVar10 = (FLinearColor *)((longlong)&pFVar10->field0_0x0 + 1);
  }
  local_540._s_0.X = local_578;
  local_3c8 = local_3d0;
  local_5a0 = FSlateGradientStop::FSlateGradientStop<UE::Math::TVector2<float>_>
                        (&local_88,(TVector2<float> *)&local_3d0->_s_0,&local_1c8);
  local_3c0 = (FSlateGradientStop *)local_5f8.AllocatorInstance.Data;
  local_3b8 = (FSlateGradientStop *)local_5f8.AllocatorInstance.Data;
  local_3b0 = (FSlateGradientStop *)local_5f8.AllocatorInstance.Data;
  if (local_5f8.AllocatorInstance.Data <= local_5a0) {
    local_3a8 = (FSlateGradientStop *)local_5f8.AllocatorInstance.Data;
    local_3a0 = (FSlateGradientStop *)local_5f8.AllocatorInstance.Data;
    local_398 = (FSlateGradientStop *)local_5f8.AllocatorInstance.Data;
    if (local_5a0 <
        (FSlateGradientStop *)
        (local_5f8.AllocatorInstance.Data + (longlong)local_5f8.ArrayMax * 0x18)) {
      local_390 = 0;
      local_38c = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      local_370 = (longlong)local_5f8.ArrayNum;
      local_368 = (longlong)local_5f8.ArrayMax;
      local_388 = (FSlateGradientStop *)local_5f8.AllocatorInstance.Data;
      local_380 = (FSlateGradientStop *)local_5f8.AllocatorInstance.Data;
      local_378 = (FSlateGradientStop *)local_5f8.AllocatorInstance.Data;
      local_360 = (FSlateGradientStop *)local_5f8.AllocatorInstance.Data;
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        iVar3 = (*pcVar1)();
        return iVar3;
      }
    }
  }
  if (local_5f8.ArrayNum == local_5f8.ArrayMax) {
    local_5f8.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x418,&local_5f8.AllocatorInstance,&local_5f8.ArrayMax);
  }
  local_5dc = local_5f8.ArrayNum;
  local_358 = (FSlateGradientStop *)local_5f8.AllocatorInstance.Data;
  local_350 = local_5f8.AllocatorInstance.Data + (longlong)local_5f8.ArrayNum * 0x18;
  local_5f8.ArrayNum = local_5f8.ArrayNum + 1;
  local_348 = ::operator_new(0x18,local_350);
  pFVar8 = local_5a0;
  puVar9 = local_348;
  for (lVar6 = 0x18; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar9 = *(undefined1 *)&(pFVar8->Position).field0_0x0;
    pFVar8 = (FSlateGradientStop *)((longlong)&(pFVar8->Position).field0_0x0 + 1);
    puVar9 = puVar9 + 1;
  }
  local_52c = local_5dc;
  local_5b8 = &local_e8;
  local_e8 = FLinearColor::sRGBToLinearTable[FColor::Green.field0_0x0._s_0.R];
  local_e4 = FLinearColor::sRGBToLinearTable[FColor::Green.field0_0x0._s_0.G];
  local_e0 = FLinearColor::sRGBToLinearTable[FColor::Green.field0_0x0._s_0.B];
  local_dc = (float)FColor::Green.field0_0x0._3_1_ * __real_3b808081;
  pfVar7 = local_5b8;
  puVar9 = local_1b8;
  for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar9 = *(undefined1 *)pfVar7;
    pfVar7 = (float *)((longlong)pfVar7 + 1);
    puVar9 = puVar9 + 1;
  }
  local_338 = param_1->Geometry;
  local_340 = local_5b8;
  FVar4 = FGeometry::GetLocalSize(local_338);
  local_570 = *(float *)FVar4 * __real_3f666666;
  local_538._s_0.Y = 0.0;
  local_330 = &local_538;
  puVar9 = local_1b8;
  pFVar10 = &local_1a8;
  for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
    *(undefined1 *)&pFVar10->field0_0x0 = *puVar9;
    puVar9 = puVar9 + 1;
    pFVar10 = (FLinearColor *)((longlong)&pFVar10->field0_0x0 + 1);
  }
  local_538._s_0.X = local_570;
  local_328 = local_330;
  local_598 = FSlateGradientStop::FSlateGradientStop<UE::Math::TVector2<float>_>
                        (&local_70,(TVector2<float> *)&local_330->_s_0,&local_1a8);
  local_320 = (FSlateGradientStop *)local_5f8.AllocatorInstance.Data;
  local_318 = (FSlateGradientStop *)local_5f8.AllocatorInstance.Data;
  local_310 = (FSlateGradientStop *)local_5f8.AllocatorInstance.Data;
  if (local_5f8.AllocatorInstance.Data <= local_598) {
    local_308 = (FSlateGradientStop *)local_5f8.AllocatorInstance.Data;
    local_300 = (FSlateGradientStop *)local_5f8.AllocatorInstance.Data;
    local_2f8 = (FSlateGradientStop *)local_5f8.AllocatorInstance.Data;
    if (local_598 <
        (FSlateGradientStop *)
        (local_5f8.AllocatorInstance.Data + (longlong)local_5f8.ArrayMax * 0x18)) {
      local_2f0 = 0;
      local_2ec = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      local_2d0 = (longlong)local_5f8.ArrayNum;
      local_2c8 = (longlong)local_5f8.ArrayMax;
      local_2e8 = (FSlateGradientStop *)local_5f8.AllocatorInstance.Data;
      local_2e0 = (FSlateGradientStop *)local_5f8.AllocatorInstance.Data;
      local_2d8 = (FSlateGradientStop *)local_5f8.AllocatorInstance.Data;
      local_2c0 = (FSlateGradientStop *)local_5f8.AllocatorInstance.Data;
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        iVar3 = (*pcVar1)();
        return iVar3;
      }
    }
  }
  if (local_5f8.ArrayNum == local_5f8.ArrayMax) {
    local_5f8.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x418,&local_5f8.AllocatorInstance,&local_5f8.ArrayMax);
  }
  local_5d8 = local_5f8.ArrayNum;
  local_2b8 = (FSlateGradientStop *)local_5f8.AllocatorInstance.Data;
  local_2b0 = local_5f8.AllocatorInstance.Data + (longlong)local_5f8.ArrayNum * 0x18;
  local_5f8.ArrayNum = local_5f8.ArrayNum + 1;
  local_2a8 = ::operator_new(0x18,local_2b0);
  pFVar8 = local_598;
  puVar9 = local_2a8;
  for (lVar6 = 0x18; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar9 = *(undefined1 *)&(pFVar8->Position).field0_0x0;
    pFVar8 = (FSlateGradientStop *)((longlong)&(pFVar8->Position).field0_0x0 + 1);
    puVar9 = puVar9 + 1;
  }
  local_528 = local_5d8;
  pTVar5 = UE::Math::TVector4<float>::TVector4<float>(&local_d8,0.0,0.0,0.0,__real_3f800000);
  puVar9 = local_198;
  for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar9 = *(undefined1 *)&pTVar5->field0_0x0;
    pTVar5 = (TVector4<float> *)((longlong)&pTVar5->field0_0x0 + 1);
    puVar9 = puVar9 + 1;
  }
  puVar9 = local_198;
  puVar11 = local_188;
  for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar11 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar11 = puVar11 + 1;
  }
  puVar9 = local_188;
  puVar11 = local_178;
  for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar11 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar11 = puVar11 + 1;
  }
  puVar9 = local_178;
  puVar11 = local_168;
  for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar11 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar11 = puVar11 + 1;
  }
  puVar9 = local_168;
  puVar11 = local_158;
  for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar11 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar11 = puVar11 + 1;
  }
  puVar9 = local_158;
  puVar11 = local_148;
  for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar11 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar11 = puVar11 + 1;
  }
  if (param_1->bEnabled == false) {
    local_5e8 = DisabledEffect;
  }
  else {
    local_5e8 = None;
  }
  local_558 = &local_c8;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&local_558->AllocatorInstance);
  local_568 = local_5f8.ArrayNum;
  local_564 = local_5f8.ArrayNum;
  local_2a0 = (FSlateGradientStop *)local_5f8.AllocatorInstance.Data;
  local_298 = (FSlateGradientStop *)local_5f8.AllocatorInstance.Data;
  local_290 = (FSlateGradientStop *)local_5f8.AllocatorInstance.Data;
  local_288 = (FSlateGradientStop *)local_5f8.AllocatorInstance.Data;
  TArray<FSlateGradientStop,TSizedDefaultAllocator<32>_>::CopyToEmpty<FSlateGradientStop,int>
            (local_558,(FSlateGradientStop *)local_5f8.AllocatorInstance.Data,local_5f8.ArrayNum,0);
  local_280 = local_558;
  local_258 = local_558;
  local_590 = param_1->Geometry;
  local_5e7 = local_590->bHasRenderTransform;
  local_278._s_0 = *(TVector2<float>_u_0_s_0 *)&local_590->Size;
  UE::Slate::FDeprecateVector2DParameter::FDeprecateVector2DParameter
            (&local_270,(TVector2<float> *)&local_278._s_0);
  local_268 = FGeometry::GetAccumulatedRenderTransform(local_590);
  local_260 = FGeometry::GetAccumulatedLayoutTransform(local_590,&local_128);
  FPaintGeometry::FPaintGeometry(&local_58,local_260,local_268,&local_270,local_5e7);
  local_250 = &local_58;
  local_560 = param_1->Layer;
  local_248 = param_1->OutDrawElements;
  puVar9 = local_148;
  pTVar5 = &local_138;
  for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
    *(undefined1 *)&pTVar5->field0_0x0 = *puVar9;
    puVar9 = puVar9 + 1;
    pTVar5 = (TVector4<float> *)((longlong)&pTVar5->field0_0x0 + 1);
  }
  FSlateDrawElement::MakeGradient
            (local_248,local_560,local_250,local_258,Orient_Vertical,local_5e8,&local_138);
  local_55c = param_1->Layer;
  TArray<FSlateGradientStop,TSizedDefaultAllocator<32>_>::
  ~TArray<FSlateGradientStop,TSizedDefaultAllocator<32>_>(&local_5f8);
  return local_55c;
}

// TestRotation @ 143100390

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall SElementTesting::TestRotation(SElementTesting *this,FOnPaintHandlerParams *param_1)

{
  undefined1 uVar1;
  code *pcVar2;
  FGeometry *this_00;
  ISlateStyle *pIVar3;
  FName *pFVar4;
  undefined1 auStackY_108 [32];
  ESlateDrawEffect local_d8;
  TVector2<float>_u_0 local_a0;
  FDeprecateVector2DParameter local_98;
  TTransform2<float> *local_90;
  FSlateLayoutTransform *local_88;
  FSlateBrush *local_80;
  FPaintGeometry *local_78;
  FSlateWindowElementList *local_70;
  FName local_68;
  FSlateLayoutTransform local_60;
  FPaintGeometry local_50;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_108;
  pIVar3 = FCoreStyle::Get();
  pcVar2 = *(code **)((longlong)*pIVar3 + 0x50);
  pFVar4 = ::FName::FName(&local_68,"FocusRectangle");
  local_80 = (FSlateBrush *)(*pcVar2)(pIVar3,*pFVar4,0,0);
  if (param_1->bEnabled == false) {
    local_d8 = DisabledEffect;
  }
  else {
    local_d8 = None;
  }
  this_00 = param_1->Geometry;
  local_a0._s_0 = *(TVector2<float>_u_0_s_0 *)&this_00->Size;
  UE::Slate::FDeprecateVector2DParameter::FDeprecateVector2DParameter
            (&local_98,(TVector2<float> *)&local_a0._s_0);
  local_90 = FGeometry::GetAccumulatedRenderTransform(this_00);
  local_88 = FGeometry::GetAccumulatedLayoutTransform(this_00,&local_60);
  FPaintGeometry::FPaintGeometry(&local_50,local_88,local_90,&local_98,this_00->bHasRenderTransform)
  ;
  local_78 = &local_50;
  local_70 = param_1->OutDrawElements;
  FSlateDrawElement::MakeBox
            (local_70,param_1->Layer,local_78,local_80,local_d8,&FLinearColor::White);
  MakeRotationExample(this,param_1);
  return param_1->Layer;
}

// TestSplineElement @ 143100570

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
SElementTesting::TestSplineElement(SElementTesting *this,FOnPaintHandlerParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FDeprecateSlateVector2D FVar4;
  FDeprecateVector2DParameter *pFVar5;
  FSlateApplication *this_00;
  longlong lVar6;
  FLinearColor *pFVar7;
  undefined1 *puVar8;
  undefined1 auStackY_f48 [32];
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> local_ef8;
  ESlateDrawEffect local_ee8;
  ESlateDrawEffect local_ee7;
  ESlateDrawEffect local_ee6;
  ESlateDrawEffect local_ee5;
  ESlateDrawEffect local_ee4;
  ESlateDrawEffect local_ee3;
  ESlateDrawEffect local_ee2;
  ESlateDrawEffect local_ee1;
  ESlateDrawEffect local_ee0;
  bool local_edf;
  bool local_ede;
  bool local_edd;
  undefined8 local_ed8;
  float local_ed0;
  int local_ec8;
  TArray<FLinearColor,TSizedDefaultAllocator<32>_> local_ec0;
  int local_eb0;
  int local_eac;
  int local_ea8;
  int local_ea4;
  int local_ea0;
  int local_e9c;
  uint local_e98;
  uint local_e94;
  int local_e90;
  FGeometry *local_e88;
  FGeometry *local_e80;
  FGeometry *local_e78;
  float local_e70;
  float local_e68;
  float local_e60;
  float local_e58;
  float local_e50;
  float local_e48;
  float local_e40;
  float local_e38;
  float local_e30;
  int local_e28;
  int local_e24;
  float local_e20;
  uint local_e1c;
  int local_e18;
  int local_e14;
  float local_e10;
  uint local_e0c;
  int local_e08;
  int local_e04;
  float local_e00;
  uint local_dfc;
  int local_df8;
  int local_df4;
  float local_df0;
  uint local_dec;
  int local_de8;
  float local_de0;
  float local_dd8;
  float local_dd0;
  float local_dcc;
  float local_dc8;
  float local_dc0;
  float local_db8;
  float local_db0;
  int local_da8;
  int local_da4;
  float local_da0;
  uint local_d9c;
  int local_d98;
  int local_d94;
  float local_d90;
  uint local_d8c;
  int local_d88;
  int local_d84;
  float local_d80;
  uint local_d7c;
  int local_d78;
  int local_d74;
  float local_d70;
  uint local_d6c;
  int local_d68;
  float local_d60;
  float local_d58;
  float local_d54;
  float local_d50;
  FScriptContainerElement *local_d48;
  FLinearColor *local_d40;
  FScriptContainerElement *local_d38;
  float local_d30;
  float fStack_d2c;
  FScriptContainerElement *local_d28;
  float local_d20;
  float fStack_d1c;
  FScriptContainerElement *local_d18;
  float local_d10;
  float fStack_d0c;
  FScriptContainerElement *local_d08;
  float local_d00;
  float fStack_cfc;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *local_cf8;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *local_cf0;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *local_ce8;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *local_ce0;
  FScriptContainerElement *local_cd8;
  float local_cd0;
  float fStack_ccc;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *local_cc8;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *local_cc0;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *local_cb8;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *local_cb0;
  float local_ca8;
  uint local_ca4;
  float local_ca0;
  float local_c9c;
  float *local_c98;
  float *local_c90;
  float local_c88;
  float local_c84;
  FScriptContainerElement *local_c80;
  TVector2<float>_u_0 local_c78;
  TVector2<float>_u_0 local_c70;
  TVector2<float>_u_0 local_c68;
  TVector2<float>_u_0 local_c60;
  float local_c58;
  float local_c54;
  float *local_c50;
  float local_c48;
  float local_c44;
  float *local_c40;
  float local_c38;
  float local_c34;
  float *local_c30;
  float local_c28;
  float local_c24;
  float *local_c20;
  float local_c18;
  float fStack_c14;
  FLinearColor_u_0 local_c10;
  FLinearColor_u_0 local_c00;
  FLinearColor_u_0 local_bf0;
  FLinearColor_u_0 local_be0;
  FLinearColor_u_0 local_bd0;
  FLinearColor_u_0 local_bc0;
  FLinearColor_u_0 local_bb0;
  FLinearColor_u_0 local_ba0;
  FLinearColor_u_0 local_b90;
  FDeprecateVector2DParameter *local_b80;
  FDeprecateVector2DParameter local_b78;
  FDeprecateVector2DParameter local_b70;
  FDeprecateVector2DParameter local_b68;
  FDeprecateVector2DParameter local_b60;
  FDeprecateVector2DParameter local_b58;
  FDeprecateVector2DParameter local_b50;
  FDeprecateVector2DParameter *local_b48;
  FDeprecateVector2DParameter local_b40;
  FDeprecateVector2DParameter local_b38;
  FDeprecateVector2DParameter local_b30;
  FDeprecateVector2DParameter local_b28;
  FDeprecateVector2DParameter local_b20;
  FDeprecateVector2DParameter local_b18;
  FDeprecateVector2DParameter *local_b10;
  FDeprecateVector2DParameter local_b08;
  FDeprecateVector2DParameter local_b00;
  FDeprecateVector2DParameter local_af8;
  FDeprecateVector2DParameter local_af0;
  FDeprecateVector2DParameter local_ae8;
  FDeprecateVector2DParameter local_ae0;
  FDeprecateVector2DParameter *local_ad8;
  FDeprecateVector2DParameter local_ad0;
  FDeprecateVector2DParameter local_ac8;
  FDeprecateVector2DParameter local_ac0;
  FDeprecateVector2DParameter local_ab8;
  FDeprecateVector2DParameter local_ab0;
  FDeprecateVector2DParameter local_aa8;
  TVector2<float>_u_0 local_aa0;
  FDeprecateVector2DParameter local_a98;
  TTransform2<float> *local_a90;
  FSlateLayoutTransform *local_a88;
  FDeprecateVector2DParameter local_a80;
  FDeprecateVector2DParameter local_a78;
  FDeprecateVector2DParameter local_a70;
  FDeprecateVector2DParameter local_a68;
  FPaintGeometry *local_a60;
  FSlateWindowElementList *local_a58;
  FGeometry *local_a50;
  FScriptContainerElement *local_a48;
  FScriptContainerElement *local_a40;
  FScriptContainerElement *local_a38;
  FScriptContainerElement *local_a30;
  FScriptContainerElement *local_a28;
  FScriptContainerElement *local_a20;
  undefined4 local_a18;
  undefined4 local_a14;
  FScriptContainerElement *local_a10;
  FScriptContainerElement *local_a08;
  FScriptContainerElement *local_a00;
  longlong local_9f8;
  longlong local_9f0;
  FScriptContainerElement *local_9e8;
  FScriptContainerElement *local_9e0;
  FScriptContainerElement *local_9d8;
  undefined8 *local_9d0;
  FScriptContainerElement *local_9c8;
  FScriptContainerElement *local_9c0;
  FScriptContainerElement *local_9b8;
  FScriptContainerElement *local_9b0;
  FScriptContainerElement *local_9a8;
  FScriptContainerElement *local_9a0;
  undefined4 local_998;
  undefined4 local_994;
  FScriptContainerElement *local_990;
  FScriptContainerElement *local_988;
  FScriptContainerElement *local_980;
  longlong local_978;
  longlong local_970;
  FScriptContainerElement *local_968;
  FScriptContainerElement *local_960;
  FScriptContainerElement *local_958;
  undefined1 *local_950;
  float *local_948;
  FScriptContainerElement *local_940;
  FScriptContainerElement *local_938;
  FScriptContainerElement *local_930;
  FScriptContainerElement *local_928;
  FScriptContainerElement *local_920;
  FScriptContainerElement *local_918;
  undefined4 local_910;
  undefined4 local_90c;
  FScriptContainerElement *local_908;
  FScriptContainerElement *local_900;
  FScriptContainerElement *local_8f8;
  longlong local_8f0;
  longlong local_8e8;
  FScriptContainerElement *local_8e0;
  FScriptContainerElement *local_8d8;
  FScriptContainerElement *local_8d0;
  undefined8 *local_8c8;
  float *local_8c0;
  FScriptContainerElement *local_8b8;
  FScriptContainerElement *local_8b0;
  FScriptContainerElement *local_8a8;
  FScriptContainerElement *local_8a0;
  FScriptContainerElement *local_898;
  FScriptContainerElement *local_890;
  undefined4 local_888;
  undefined4 local_884;
  FScriptContainerElement *local_880;
  FScriptContainerElement *local_878;
  FScriptContainerElement *local_870;
  longlong local_868;
  longlong local_860;
  FScriptContainerElement *local_858;
  FScriptContainerElement *local_850;
  FScriptContainerElement *local_848;
  undefined8 *local_840;
  float *local_838;
  FScriptContainerElement *local_830;
  FScriptContainerElement *local_828;
  FScriptContainerElement *local_820;
  FScriptContainerElement *local_818;
  FScriptContainerElement *local_810;
  FScriptContainerElement *local_808;
  undefined4 local_800;
  undefined4 local_7fc;
  FScriptContainerElement *local_7f8;
  FScriptContainerElement *local_7f0;
  FScriptContainerElement *local_7e8;
  longlong local_7e0;
  longlong local_7d8;
  FScriptContainerElement *local_7d0;
  FScriptContainerElement *local_7c8;
  FScriptContainerElement *local_7c0;
  undefined8 *local_7b8;
  float *local_7b0;
  FScriptContainerElement *local_7a8;
  FScriptContainerElement *local_7a0;
  FScriptContainerElement *local_798;
  FScriptContainerElement *local_790;
  FScriptContainerElement *local_788;
  FScriptContainerElement *local_780;
  undefined4 local_778;
  undefined4 local_774;
  FScriptContainerElement *local_770;
  FScriptContainerElement *local_768;
  FScriptContainerElement *local_760;
  longlong local_758;
  longlong local_750;
  FScriptContainerElement *local_748;
  FScriptContainerElement *local_740;
  FScriptContainerElement *local_738;
  undefined8 *local_730;
  FScriptContainerElement *local_728;
  FScriptContainerElement *local_720;
  FScriptContainerElement *local_718;
  FScriptContainerElement *local_710;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *local_708;
  TVector2<float>_u_0 local_700;
  FDeprecateVector2DParameter local_6f8;
  TTransform2<float> *local_6f0;
  FSlateLayoutTransform *local_6e8;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *local_6e0;
  FPaintGeometry *local_6d8;
  FSlateWindowElementList *local_6d0;
  FScriptContainerElement *local_6c8;
  FScriptContainerElement *local_6c0;
  FScriptContainerElement *local_6b8;
  FScriptContainerElement *local_6b0;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *local_6a8;
  TVector2<double>_u_0 *local_6a0;
  FDeprecateVector2DParameter local_698;
  FGeometry *local_690;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *local_688;
  FPaintGeometry *local_680;
  FSlateWindowElementList *local_678;
  FScriptContainerElement *local_670;
  FScriptContainerElement *local_668;
  FScriptContainerElement *local_660;
  FScriptContainerElement *local_658;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *local_650;
  TVector2<double>_u_0 *local_648;
  FDeprecateVector2DParameter local_640;
  FGeometry *local_638;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *local_630;
  FPaintGeometry *local_628;
  FSlateWindowElementList *local_620;
  FScriptContainerElement *local_618;
  FScriptContainerElement *local_610;
  FScriptContainerElement *local_608;
  FScriptContainerElement *local_600;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *local_5f8;
  TVector2<double>_u_0 *local_5f0;
  FDeprecateVector2DParameter local_5e8;
  FGeometry *local_5e0;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *local_5d8;
  FPaintGeometry *local_5d0;
  FSlateWindowElementList *local_5c8;
  undefined4 local_5c0;
  undefined4 local_5bc;
  FScriptContainerElement *local_5b8;
  FScriptContainerElement *local_5b0;
  FScriptContainerElement *local_5a8;
  float *local_5a0;
  float *local_598;
  FScriptContainerElement *local_590;
  FScriptContainerElement *local_588;
  FScriptContainerElement *local_580;
  FScriptContainerElement *local_578;
  FScriptContainerElement *local_570;
  FScriptContainerElement *local_568;
  undefined4 local_560;
  undefined4 local_55c;
  FScriptContainerElement *local_558;
  FScriptContainerElement *local_550;
  FScriptContainerElement *local_548;
  longlong local_540;
  longlong local_538;
  FScriptContainerElement *local_530;
  FScriptContainerElement *local_528;
  FScriptContainerElement *local_520;
  undefined8 *local_518;
  FScriptContainerElement *local_510;
  FScriptContainerElement *local_508;
  FScriptContainerElement *local_500;
  FScriptContainerElement *local_4f8;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *local_4f0;
  TVector2<float>_u_0 local_4e8;
  FDeprecateVector2DParameter local_4e0;
  TTransform2<float> *local_4d8;
  FSlateLayoutTransform *local_4d0;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *local_4c8;
  FPaintGeometry *local_4c0;
  FSlateWindowElementList *local_4b8;
  FScriptContainerElement *local_4b0;
  FScriptContainerElement *local_4a8;
  FScriptContainerElement *local_4a0;
  FScriptContainerElement *local_498;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *local_490;
  TVector2<double>_u_0 *local_488;
  FDeprecateVector2DParameter local_480;
  FGeometry *local_478;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *local_470;
  FPaintGeometry *local_468;
  FSlateWindowElementList *local_460;
  FScriptContainerElement *local_458;
  FScriptContainerElement *local_450;
  FScriptContainerElement *local_448;
  FScriptContainerElement *local_440;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *local_438;
  TVector2<double>_u_0 *local_430;
  FDeprecateVector2DParameter local_428;
  FGeometry *local_420;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *local_418;
  FPaintGeometry *local_410;
  FSlateWindowElementList *local_408;
  FScriptContainerElement *local_400;
  FScriptContainerElement *local_3f8;
  FScriptContainerElement *local_3f0;
  FScriptContainerElement *local_3e8;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *local_3e0;
  TVector2<double>_u_0 *local_3d8;
  FDeprecateVector2DParameter local_3d0;
  FGeometry *local_3c8;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *local_3c0;
  FPaintGeometry *local_3b8;
  FSlateWindowElementList *local_3b0;
  int local_3a8;
  int local_3a4;
  int local_3a0;
  int local_39c;
  int local_398;
  int local_394;
  int local_390;
  FGeometry *local_388;
  FGeometry *local_380;
  FGeometry *local_378;
  FGeometry *local_370;
  TVector2<double>_u_0 local_368;
  TVector2<double>_u_0 local_358;
  TVector2<double>_u_0 local_348;
  TVector2<double>_u_0 local_338;
  TVector2<double>_u_0 local_328;
  TVector2<double>_u_0 local_318 [3];
  FDeprecateVector2DParameter local_2e8;
  FDeprecateVector2DParameter local_2e0;
  FDeprecateVector2DParameter local_2d8;
  FDeprecateVector2DParameter local_2d0 [2];
  FSlateLayoutTransform local_2c0;
  FSlateLayoutTransform local_2b4;
  FSlateLayoutTransform local_2a8;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> local_298;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> local_288;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> local_278;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> local_268;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> local_258;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> local_248;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> local_238;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> local_228;
  FPaintGeometry local_218;
  FPaintGeometry local_1e0;
  FPaintGeometry local_1a8;
  FPaintGeometry local_170;
  FPaintGeometry local_138;
  FPaintGeometry local_100;
  FPaintGeometry local_c8;
  FPaintGeometry local_90;
  FPaintGeometry local_58;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_f48;
  local_c60._s_0.X = __real_41200000;
  local_c60._s_0.Y = __real_41200000;
  local_388 = param_1->Geometry;
  FVar4 = FGeometry::GetLocalSize(local_388);
  local_d60 = (*(float *)FVar4 * __real_447a0000) / __real_44160000;
  local_c68._s_0.Y = 0.0;
  local_380 = param_1->Geometry;
  local_c68._s_0.X = local_d60;
  FVar4 = FGeometry::GetLocalSize(local_380);
  local_d54 = *(float *)((longlong)FVar4 + 4) - __real_41200000;
  local_378 = param_1->Geometry;
  FVar4 = FGeometry::GetLocalSize(local_378);
  local_d58 = *(float *)FVar4 / __real_40800000;
  local_c70._s_0.Y = local_d54;
  local_370 = param_1->Geometry;
  local_c70._s_0.X = local_d58;
  FVar4 = FGeometry::GetLocalSize(local_370);
  local_d50 = (*(float *)FVar4 * __real_447a0000) / __real_44160000;
  local_c78._s_0.Y = 0.0;
  local_c10._s_0.R = FLinearColor::sRGBToLinearTable[FColor::White.field0_0x0._s_0.R];
  local_c10._s_0.G = FLinearColor::sRGBToLinearTable[FColor::White.field0_0x0._s_0.G];
  local_c10._s_0.B = FLinearColor::sRGBToLinearTable[FColor::White.field0_0x0._s_0.B];
  local_c10._s_0.A = (float)FColor::White.field0_0x0._3_1_ * __real_3b808081;
  if (param_1->bEnabled == false) {
    local_ee8 = DisabledEffect;
  }
  else {
    local_ee8 = None;
  }
  local_ca8 = param_1->Geometry->Scale;
  local_b80 = &local_2e8;
  local_c78._s_0.X = local_d50;
  pFVar5 = UE::Slate::FDeprecateVector2DParameter::FDeprecateVector2DParameter
                     (local_b80,(TVector2<float> *)&local_c78._s_0);
  local_b78 = *pFVar5;
  local_b48 = &local_2e0;
  local_b70 = local_b78;
  local_b68 = local_b78;
  local_b60 = local_b78;
  local_b58 = local_b78;
  local_b50 = local_b78;
  local_a80 = local_b78;
  pFVar5 = UE::Slate::FDeprecateVector2DParameter::FDeprecateVector2DParameter
                     (local_b48,(TVector2<float> *)&local_c70._s_0);
  local_b40 = *pFVar5;
  local_b10 = &local_2d8;
  local_b38 = local_b40;
  local_b30 = local_b40;
  local_b28 = local_b40;
  local_b20 = local_b40;
  local_b18 = local_b40;
  local_a78 = local_b40;
  pFVar5 = UE::Slate::FDeprecateVector2DParameter::FDeprecateVector2DParameter
                     (local_b10,(TVector2<float> *)&local_c68._s_0);
  local_b08 = *pFVar5;
  local_ad8 = local_2d0;
  local_b00 = local_b08;
  local_af8 = local_b08;
  local_af0 = local_b08;
  local_ae8 = local_b08;
  local_ae0 = local_b08;
  local_a70 = local_b08;
  pFVar5 = UE::Slate::FDeprecateVector2DParameter::FDeprecateVector2DParameter
                     (local_ad8,(TVector2<float> *)&local_c60._s_0);
  local_ad0 = *pFVar5;
  local_e88 = param_1->Geometry;
  local_edf = local_e88->bHasRenderTransform;
  local_aa0._s_0 = *(TVector2<float>_u_0_s_0 *)&local_e88->Size;
  local_ac8 = local_ad0;
  local_ac0 = local_ad0;
  local_ab8 = local_ad0;
  local_ab0 = local_ad0;
  local_aa8 = local_ad0;
  local_a68 = local_ad0;
  UE::Slate::FDeprecateVector2DParameter::FDeprecateVector2DParameter
            (&local_a98,(TVector2<float> *)&local_aa0._s_0);
  local_a90 = FGeometry::GetAccumulatedRenderTransform(local_e88);
  local_a88 = FGeometry::GetAccumulatedLayoutTransform(local_e88,&local_2c0);
  FPaintGeometry::FPaintGeometry(&local_218,local_a88,local_a90,&local_a98,local_edf);
  local_a60 = &local_218;
  local_ca4 = param_1->Layer;
  local_a58 = param_1->OutDrawElements;
  FSlateDrawElement::MakeSpline
            (local_a58,local_ca4,local_a60,local_a68,local_a70,local_a78,local_a80,local_ca8,
             local_ee8,(FLinearColor *)&local_c10._s_0);
  local_a50 = param_1->Geometry;
  FVar4 = FGeometry::GetLocalSize(local_a50);
  local_e70 = *(float *)FVar4 / __real_40800000;
  local_ed8 = CONCAT44(__real_41200000,local_e70);
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&local_ef8.AllocatorInstance);
  local_ef8.ArrayNum = 0;
  local_ef8.ArrayMax =
       TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                 (&local_ef8.AllocatorInstance);
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&local_ec0.AllocatorInstance);
  local_ec0.ArrayNum = 0;
  local_ec0.ArrayMax =
       TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                 (&local_ec0.AllocatorInstance);
  local_d48 = (FScriptContainerElement *)&local_ed8;
  local_a48 = local_ef8.AllocatorInstance.Data;
  local_a40 = local_ef8.AllocatorInstance.Data;
  local_a38 = local_ef8.AllocatorInstance.Data;
  if (local_ef8.AllocatorInstance.Data <= local_d48) {
    local_a30 = local_ef8.AllocatorInstance.Data;
    local_a28 = local_ef8.AllocatorInstance.Data;
    local_a20 = local_ef8.AllocatorInstance.Data;
    if (local_d48 < local_ef8.AllocatorInstance.Data + (longlong)local_ef8.ArrayMax * 8) {
      local_a18 = 0;
      local_a14 = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      local_9f8 = (longlong)local_ef8.ArrayNum;
      local_9f0 = (longlong)local_ef8.ArrayMax;
      local_a10 = local_ef8.AllocatorInstance.Data;
      local_a08 = local_ef8.AllocatorInstance.Data;
      local_a00 = local_ef8.AllocatorInstance.Data;
      local_9e8 = local_ef8.AllocatorInstance.Data;
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        iVar3 = (*pcVar1)();
        return iVar3;
      }
    }
  }
  if (local_ef8.ArrayNum == local_ef8.ArrayMax) {
    local_ef8.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x408,&local_ef8.AllocatorInstance,&local_ef8.ArrayMax);
  }
  local_eb0 = local_ef8.ArrayNum;
  local_9e0 = local_ef8.AllocatorInstance.Data;
  local_9d8 = local_ef8.AllocatorInstance.Data + (longlong)local_ef8.ArrayNum * 8;
  local_ef8.ArrayNum = local_ef8.ArrayNum + 1;
  local_9d0 = ::operator_new(8,local_9d8);
  *local_9d0 = local_ed8;
  local_3a8 = local_eb0;
  local_d40 = &FLinearColor::Red;
  local_9c8 = local_ec0.AllocatorInstance.Data;
  local_9c0 = local_ec0.AllocatorInstance.Data;
  local_9b8 = local_ec0.AllocatorInstance.Data;
  if (local_ec0.AllocatorInstance.Data <
      (FScriptContainerElement *)((longlong)&FLinearColor::Red.field0_0x0 + 1)) {
    local_9b0 = local_ec0.AllocatorInstance.Data;
    local_9a8 = local_ec0.AllocatorInstance.Data;
    local_9a0 = local_ec0.AllocatorInstance.Data;
    if (&FLinearColor::Red < local_ec0.AllocatorInstance.Data + (longlong)local_ec0.ArrayMax * 0x10)
    {
      local_998 = 0;
      local_994 = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      local_978 = (longlong)local_ec0.ArrayNum;
      local_970 = (longlong)local_ec0.ArrayMax;
      local_990 = local_ec0.AllocatorInstance.Data;
      local_988 = local_ec0.AllocatorInstance.Data;
      local_980 = local_ec0.AllocatorInstance.Data;
      local_968 = local_ec0.AllocatorInstance.Data;
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        iVar3 = (*pcVar1)();
        return iVar3;
      }
    }
  }
  if (local_ec0.ArrayNum == local_ec0.ArrayMax) {
    local_ec0.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x410,&local_ec0.AllocatorInstance,&local_ec0.ArrayMax);
  }
  local_eac = local_ec0.ArrayNum;
  local_960 = local_ec0.AllocatorInstance.Data;
  local_958 = local_ec0.AllocatorInstance.Data + (longlong)local_ec0.ArrayNum * 0x10;
  local_ec0.ArrayNum = local_ec0.ArrayNum + 1;
  local_950 = ::operator_new(0x10,local_958);
  pFVar7 = &FLinearColor::Red;
  puVar8 = local_950;
  for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar8 = *(undefined1 *)&pFVar7->field0_0x0;
    pFVar7 = (FLinearColor *)((longlong)&pFVar7->field0_0x0 + 1);
    puVar8 = puVar8 + 1;
  }
  local_3a4 = local_eac;
  local_c58 = __real_42c80000;
  local_c54 = __real_42480000;
  local_c50 = &local_c58;
  local_e60 = local_ed8._4_4_ + __real_42480000;
  local_e68 = (float)local_ed8 + __real_42c80000;
  local_d38 = (FScriptContainerElement *)&local_d30;
  local_940 = local_ef8.AllocatorInstance.Data;
  local_938 = local_ef8.AllocatorInstance.Data;
  local_930 = local_ef8.AllocatorInstance.Data;
  local_d30 = local_e68;
  fStack_d2c = local_e60;
  local_948 = local_c50;
  if (local_ef8.AllocatorInstance.Data <= local_d38) {
    local_928 = local_ef8.AllocatorInstance.Data;
    local_920 = local_ef8.AllocatorInstance.Data;
    local_918 = local_ef8.AllocatorInstance.Data;
    if (local_d38 < local_ef8.AllocatorInstance.Data + (longlong)local_ef8.ArrayMax * 8) {
      local_910 = 0;
      local_90c = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      local_8f0 = (longlong)local_ef8.ArrayNum;
      local_8e8 = (longlong)local_ef8.ArrayMax;
      local_908 = local_ef8.AllocatorInstance.Data;
      local_900 = local_ef8.AllocatorInstance.Data;
      local_8f8 = local_ef8.AllocatorInstance.Data;
      local_8e0 = local_ef8.AllocatorInstance.Data;
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        iVar3 = (*pcVar1)();
        return iVar3;
      }
    }
  }
  if (local_ef8.ArrayNum == local_ef8.ArrayMax) {
    local_ef8.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x408,&local_ef8.AllocatorInstance,&local_ef8.ArrayMax);
  }
  local_ea8 = local_ef8.ArrayNum;
  local_8d8 = local_ef8.AllocatorInstance.Data;
  local_8d0 = local_ef8.AllocatorInstance.Data + (longlong)local_ef8.ArrayNum * 8;
  local_ef8.ArrayNum = local_ef8.ArrayNum + 1;
  local_8c8 = ::operator_new(8,local_8d0);
  *local_8c8 = CONCAT44(fStack_d2c,local_d30);
  local_3a0 = local_ea8;
  local_c48 = __real_43480000;
  local_c44 = __real_41200000;
  local_c40 = &local_c48;
  local_e50 = local_ed8._4_4_ + __real_41200000;
  local_e58 = (float)local_ed8 + __real_43480000;
  local_d28 = (FScriptContainerElement *)&local_d20;
  local_8b8 = local_ef8.AllocatorInstance.Data;
  local_8b0 = local_ef8.AllocatorInstance.Data;
  local_8a8 = local_ef8.AllocatorInstance.Data;
  local_d20 = local_e58;
  fStack_d1c = local_e50;
  local_8c0 = local_c40;
  if (local_ef8.AllocatorInstance.Data <= local_d28) {
    local_8a0 = local_ef8.AllocatorInstance.Data;
    local_898 = local_ef8.AllocatorInstance.Data;
    local_890 = local_ef8.AllocatorInstance.Data;
    if (local_d28 < local_ef8.AllocatorInstance.Data + (longlong)local_ef8.ArrayMax * 8) {
      local_888 = 0;
      local_884 = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      local_868 = (longlong)local_ef8.ArrayNum;
      local_860 = (longlong)local_ef8.ArrayMax;
      local_880 = local_ef8.AllocatorInstance.Data;
      local_878 = local_ef8.AllocatorInstance.Data;
      local_870 = local_ef8.AllocatorInstance.Data;
      local_858 = local_ef8.AllocatorInstance.Data;
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        iVar3 = (*pcVar1)();
        return iVar3;
      }
    }
  }
  if (local_ef8.ArrayNum == local_ef8.ArrayMax) {
    local_ef8.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x408,&local_ef8.AllocatorInstance,&local_ef8.ArrayMax);
  }
  local_ea4 = local_ef8.ArrayNum;
  local_850 = local_ef8.AllocatorInstance.Data;
  local_848 = local_ef8.AllocatorInstance.Data + (longlong)local_ef8.ArrayNum * 8;
  local_ef8.ArrayNum = local_ef8.ArrayNum + 1;
  local_840 = ::operator_new(8,local_848);
  *local_840 = CONCAT44(fStack_d1c,local_d20);
  local_39c = local_ea4;
  local_c38 = __real_43960000;
  local_c34 = __real_42480000;
  local_c30 = &local_c38;
  local_e40 = local_ed8._4_4_ + __real_42480000;
  local_e48 = (float)local_ed8 + __real_43960000;
  local_d18 = (FScriptContainerElement *)&local_d10;
  local_830 = local_ef8.AllocatorInstance.Data;
  local_828 = local_ef8.AllocatorInstance.Data;
  local_820 = local_ef8.AllocatorInstance.Data;
  local_d10 = local_e48;
  fStack_d0c = local_e40;
  local_838 = local_c30;
  if (local_ef8.AllocatorInstance.Data <= local_d18) {
    local_818 = local_ef8.AllocatorInstance.Data;
    local_810 = local_ef8.AllocatorInstance.Data;
    local_808 = local_ef8.AllocatorInstance.Data;
    if (local_d18 < local_ef8.AllocatorInstance.Data + (longlong)local_ef8.ArrayMax * 8) {
      local_800 = 0;
      local_7fc = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      local_7e0 = (longlong)local_ef8.ArrayNum;
      local_7d8 = (longlong)local_ef8.ArrayMax;
      local_7f8 = local_ef8.AllocatorInstance.Data;
      local_7f0 = local_ef8.AllocatorInstance.Data;
      local_7e8 = local_ef8.AllocatorInstance.Data;
      local_7d0 = local_ef8.AllocatorInstance.Data;
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        iVar3 = (*pcVar1)();
        return iVar3;
      }
    }
  }
  if (local_ef8.ArrayNum == local_ef8.ArrayMax) {
    local_ef8.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x408,&local_ef8.AllocatorInstance,&local_ef8.ArrayMax);
  }
  local_ea0 = local_ef8.ArrayNum;
  local_7c8 = local_ef8.AllocatorInstance.Data;
  local_7c0 = local_ef8.AllocatorInstance.Data + (longlong)local_ef8.ArrayNum * 8;
  local_ef8.ArrayNum = local_ef8.ArrayNum + 1;
  local_7b8 = ::operator_new(8,local_7c0);
  *local_7b8 = CONCAT44(fStack_d0c,local_d10);
  local_398 = local_ea0;
  local_c28 = __real_43c80000;
  local_c24 = __real_41200000;
  local_c90 = &local_c28;
  local_e30 = local_ed8._4_4_ + __real_41200000;
  local_e38 = (float)local_ed8 + __real_43c80000;
  local_d08 = (FScriptContainerElement *)&local_d00;
  local_7a8 = local_ef8.AllocatorInstance.Data;
  local_7a0 = local_ef8.AllocatorInstance.Data;
  local_798 = local_ef8.AllocatorInstance.Data;
  local_d00 = local_e38;
  fStack_cfc = local_e30;
  local_7b0 = local_c90;
  if (local_ef8.AllocatorInstance.Data <= local_d08) {
    local_790 = local_ef8.AllocatorInstance.Data;
    local_788 = local_ef8.AllocatorInstance.Data;
    local_780 = local_ef8.AllocatorInstance.Data;
    if (local_d08 < local_ef8.AllocatorInstance.Data + (longlong)local_ef8.ArrayMax * 8) {
      local_778 = 0;
      local_774 = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      local_758 = (longlong)local_ef8.ArrayNum;
      local_750 = (longlong)local_ef8.ArrayMax;
      local_770 = local_ef8.AllocatorInstance.Data;
      local_768 = local_ef8.AllocatorInstance.Data;
      local_760 = local_ef8.AllocatorInstance.Data;
      local_748 = local_ef8.AllocatorInstance.Data;
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        iVar3 = (*pcVar1)();
        return iVar3;
      }
    }
  }
  if (local_ef8.ArrayNum == local_ef8.ArrayMax) {
    local_ef8.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x408,&local_ef8.AllocatorInstance,&local_ef8.ArrayMax);
  }
  local_e9c = local_ef8.ArrayNum;
  local_740 = local_ef8.AllocatorInstance.Data;
  local_738 = local_ef8.AllocatorInstance.Data + (longlong)local_ef8.ArrayNum * 8;
  local_ef8.ArrayNum = local_ef8.ArrayNum + 1;
  local_730 = ::operator_new(8,local_738);
  *local_730 = CONCAT44(fStack_cfc,local_d00);
  local_394 = local_e9c;
  local_e20 = param_1->Geometry->Scale;
  local_c00._s_0.R = FLinearColor::sRGBToLinearTable[FColor::White.field0_0x0._s_0.R];
  local_c00._s_0.G = FLinearColor::sRGBToLinearTable[FColor::White.field0_0x0._s_0.G];
  local_c00._s_0.B = FLinearColor::sRGBToLinearTable[FColor::White.field0_0x0._s_0.B];
  local_c00._s_0.A = (float)FColor::White.field0_0x0._3_1_ * __real_3b808081;
  if (param_1->bEnabled == false) {
    local_ee7 = DisabledEffect;
  }
  else {
    local_ee7 = None;
  }
  local_cf8 = &local_298;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&local_cf8->AllocatorInstance);
  local_e28 = local_ef8.ArrayNum;
  local_e24 = local_ef8.ArrayNum;
  local_728 = local_ef8.AllocatorInstance.Data;
  local_720 = local_ef8.AllocatorInstance.Data;
  local_718 = local_ef8.AllocatorInstance.Data;
  local_710 = local_ef8.AllocatorInstance.Data;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>::
  CopyToEmpty<UE::Math::TVector2<float>,int>
            (local_cf8,(TVector2<float> *)local_ef8.AllocatorInstance.Data,local_ef8.ArrayNum,0);
  local_708 = local_cf8;
  local_6e0 = local_cf8;
  local_e80 = param_1->Geometry;
  local_ede = local_e80->bHasRenderTransform;
  local_700._s_0 = *(TVector2<float>_u_0_s_0 *)&local_e80->Size;
  UE::Slate::FDeprecateVector2DParameter::FDeprecateVector2DParameter
            (&local_6f8,(TVector2<float> *)&local_700._s_0);
  local_6f0 = FGeometry::GetAccumulatedRenderTransform(local_e80);
  local_6e8 = FGeometry::GetAccumulatedLayoutTransform(local_e80,&local_2b4);
  FPaintGeometry::FPaintGeometry(&local_1e0,local_6e8,local_6f0,&local_6f8,local_ede);
  local_6d8 = &local_1e0;
  local_e1c = param_1->Layer;
  local_6d0 = param_1->OutDrawElements;
  FSlateDrawElement::MakeLines
            (local_6d0,local_e1c,local_6d8,local_6e0,local_ee7,(FLinearColor *)&local_c00._s_0,true,
             local_e20);
  local_e10 = __real_40000000 * param_1->Geometry->Scale;
  local_bf0._s_0.R = FLinearColor::sRGBToLinearTable[FColor::White.field0_0x0._s_0.R];
  local_bf0._s_0.G = FLinearColor::sRGBToLinearTable[FColor::White.field0_0x0._s_0.G];
  local_bf0._s_0.B = FLinearColor::sRGBToLinearTable[FColor::White.field0_0x0._s_0.B];
  local_bf0._s_0.A = (float)FColor::White.field0_0x0._3_1_ * __real_3b808081;
  if (param_1->bEnabled == false) {
    local_ee6 = DisabledEffect;
  }
  else {
    local_ee6 = None;
  }
  local_cf0 = &local_288;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&local_cf0->AllocatorInstance);
  local_e18 = local_ef8.ArrayNum;
  local_e14 = local_ef8.ArrayNum;
  local_6c8 = local_ef8.AllocatorInstance.Data;
  local_6c0 = local_ef8.AllocatorInstance.Data;
  local_6b8 = local_ef8.AllocatorInstance.Data;
  local_6b0 = local_ef8.AllocatorInstance.Data;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>::
  CopyToEmpty<UE::Math::TVector2<float>,int>
            (local_cf0,(TVector2<float> *)local_ef8.AllocatorInstance.Data,local_ef8.ArrayNum,0);
  local_6a8 = local_cf0;
  local_688 = local_cf0;
  local_690 = param_1->Geometry;
  local_338._s_0.X = 0.0;
  local_338._s_0.Y = __real_4024000000000000;
  local_6a0 = &local_338;
  UE::Slate::FDeprecateVector2DParameter::FDeprecateVector2DParameter
            (&local_698,(TVector2<double> *)&local_6a0->_s_0);
  local_680 = FGeometry::ToOffsetPaintGeometry(local_690,&local_170,&local_698);
  local_e0c = param_1->Layer;
  local_678 = param_1->OutDrawElements;
  FSlateDrawElement::MakeLines
            (local_678,local_e0c,local_680,local_688,local_ee6,(FLinearColor *)&local_bf0._s_0,true,
             local_e10);
  local_e00 = __real_40400000 * param_1->Geometry->Scale;
  local_be0._s_0.R = FLinearColor::sRGBToLinearTable[FColor::White.field0_0x0._s_0.R];
  local_be0._s_0.G = FLinearColor::sRGBToLinearTable[FColor::White.field0_0x0._s_0.G];
  local_be0._s_0.B = FLinearColor::sRGBToLinearTable[FColor::White.field0_0x0._s_0.B];
  local_be0._s_0.A = (float)FColor::White.field0_0x0._3_1_ * __real_3b808081;
  if (param_1->bEnabled == false) {
    local_ee5 = DisabledEffect;
  }
  else {
    local_ee5 = None;
  }
  local_ce8 = &local_278;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&local_ce8->AllocatorInstance);
  local_e08 = local_ef8.ArrayNum;
  local_e04 = local_ef8.ArrayNum;
  local_670 = local_ef8.AllocatorInstance.Data;
  local_668 = local_ef8.AllocatorInstance.Data;
  local_660 = local_ef8.AllocatorInstance.Data;
  local_658 = local_ef8.AllocatorInstance.Data;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>::
  CopyToEmpty<UE::Math::TVector2<float>,int>
            (local_ce8,(TVector2<float> *)local_ef8.AllocatorInstance.Data,local_ef8.ArrayNum,0);
  local_650 = local_ce8;
  local_630 = local_ce8;
  local_638 = param_1->Geometry;
  local_328._s_0.X = 0.0;
  local_328._s_0.Y = __real_4034000000000000;
  local_648 = &local_328;
  UE::Slate::FDeprecateVector2DParameter::FDeprecateVector2DParameter
            (&local_640,(TVector2<double> *)&local_648->_s_0);
  local_628 = FGeometry::ToOffsetPaintGeometry(local_638,&local_138,&local_640);
  local_dfc = param_1->Layer;
  local_620 = param_1->OutDrawElements;
  FSlateDrawElement::MakeLines
            (local_620,local_dfc,local_628,local_630,local_ee5,(FLinearColor *)&local_be0._s_0,true,
             local_e00);
  local_df0 = __real_40800000 * param_1->Geometry->Scale;
  local_bd0._s_0.R = FLinearColor::sRGBToLinearTable[FColor::White.field0_0x0._s_0.R];
  local_bd0._s_0.G = FLinearColor::sRGBToLinearTable[FColor::White.field0_0x0._s_0.G];
  local_bd0._s_0.B = FLinearColor::sRGBToLinearTable[FColor::White.field0_0x0._s_0.B];
  local_bd0._s_0.A = (float)FColor::White.field0_0x0._3_1_ * __real_3b808081;
  if (param_1->bEnabled == false) {
    local_ee4 = DisabledEffect;
  }
  else {
    local_ee4 = None;
  }
  local_ce0 = &local_268;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&local_ce0->AllocatorInstance);
  local_df8 = local_ef8.ArrayNum;
  local_df4 = local_ef8.ArrayNum;
  local_618 = local_ef8.AllocatorInstance.Data;
  local_610 = local_ef8.AllocatorInstance.Data;
  local_608 = local_ef8.AllocatorInstance.Data;
  local_600 = local_ef8.AllocatorInstance.Data;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>::
  CopyToEmpty<UE::Math::TVector2<float>,int>
            (local_ce0,(TVector2<float> *)local_ef8.AllocatorInstance.Data,local_ef8.ArrayNum,0);
  local_5f8 = local_ce0;
  local_5d8 = local_ce0;
  local_5e0 = param_1->Geometry;
  local_318[0]._s_0.X = 0.0;
  local_318[0]._s_0.Y = __real_4041000000000000;
  local_5f0 = local_318;
  UE::Slate::FDeprecateVector2DParameter::FDeprecateVector2DParameter
            (&local_5e8,(TVector2<double> *)&local_5f0->_s_0);
  local_5d0 = FGeometry::ToOffsetPaintGeometry(local_5e0,&local_100,&local_5e8);
  local_dec = param_1->Layer;
  local_5c8 = param_1->OutDrawElements;
  FSlateDrawElement::MakeLines
            (local_5c8,local_dec,local_5d0,local_5d8,local_ee4,(FLinearColor *)&local_bd0._s_0,true,
             local_df0);
  local_de8 = local_ef8.ArrayNum;
  local_ec8 = local_ef8.ArrayNum + -1;
  local_e94 = (uint)(-1 < local_ec8);
  local_e98 = (uint)(local_ec8 < local_ef8.ArrayNum);
  if (-1 >= local_ec8 || local_ec8 >= local_ef8.ArrayNum) {
    local_5c0 = 0;
    local_5bc = 0;
    UE::Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  local_5b8 = local_ef8.AllocatorInstance.Data;
  local_5b0 = local_ef8.AllocatorInstance.Data;
  local_c80 = local_ef8.AllocatorInstance.Data + (longlong)local_ec8 * 8;
  local_c88 = __real_42480000;
  local_c84 = __real_41200000;
  local_c20 = &local_c88;
  local_dd8 = *(float *)(local_c80 + 4) + __real_41200000;
  local_de0 = *(float *)local_c80 + __real_42480000;
  local_ed8 = CONCAT44(local_dd8,local_de0);
  local_c18 = local_de0;
  fStack_c14 = local_dd8;
  local_5a8 = local_c80;
  local_5a0 = local_c20;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>::Empty(&local_ef8,0);
  this_00 = FSlateApplication::Get();
  local_dcc = FSlateApplication::GetDeltaTime(this_00);
  local_dd0 = `private:_int___cdecl_SElementTesting::TestSplineElement(FOnPaintHandlerParams_const&___ptr64)___ptr64'
              ::__l2::CurTime;
  `private:_int___cdecl_SElementTesting::TestSplineElement(FOnPaintHandlerParams_const&___ptr64)___ptr64'
  ::__l2::CurTime =
       `private:_int___cdecl_SElementTesting::TestSplineElement(FOnPaintHandlerParams_const&___ptr64)___ptr64'
       ::__l2::CurTime + local_dcc;
  `private:_int___cdecl_SElementTesting::TestSplineElement(FOnPaintHandlerParams_const&___ptr64)___ptr64'
  ::__l2::CurTime =
       FGenericPlatformMath::Fmod
                 (`private:_int___cdecl_SElementTesting::TestSplineElement(FOnPaintHandlerParams_const&___ptr64)___ptr64'
                  ::__l2::CurTime,__real_40c90fdb);
  local_ed0 = 0.0;
  do {
    if (__real_41fb53d2 <= local_ed0) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) <
           `private:_int___cdecl_SElementTesting::TestSplineElement(FOnPaintHandlerParams_const&___ptr64)___ptr64'
           ::__l2::_thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`private:_int___cdecl_SElementTesting::TestSplineElement(FOnPaintHandlerParams_const&___ptr64)___ptr64'
                               ::__l2::_thread_safe_static_guard_0__),
         `private:_int___cdecl_SElementTesting::TestSplineElement(FOnPaintHandlerParams_const&___ptr64)___ptr64'
         ::__l2::_thread_safe_static_guard_0__ == -1)) {
        FColor::MakeRandomColor();
        _Init_thread_footer(&`private:_int___cdecl_SElementTesting::TestSplineElement(FOnPaintHandlerParams_const&___ptr64)___ptr64'
                             ::__l2::_thread_safe_static_guard_0__);
      }
      local_da0 = param_1->Geometry->Scale;
      local_bc0._s_0.R =
           FLinearColor::sRGBToLinearTable
           [`private:_int___cdecl_SElementTesting::TestSplineElement(FOnPaintHandlerParams_const&___ptr64)___ptr64'
            ::__l2::Color.field0_0x0._s_0.R];
      local_bc0._s_0.G =
           FLinearColor::sRGBToLinearTable
           [`private:_int___cdecl_SElementTesting::TestSplineElement(FOnPaintHandlerParams_const&___ptr64)___ptr64'
            ::__l2::Color.field0_0x0._s_0.G];
      local_bc0._s_0.B =
           FLinearColor::sRGBToLinearTable
           [`private:_int___cdecl_SElementTesting::TestSplineElement(FOnPaintHandlerParams_const&___ptr64)___ptr64'
            ::__l2::Color.field0_0x0._s_0.B];
      local_bc0._s_0.A =
           (float)`private:_int___cdecl_SElementTesting::TestSplineElement(FOnPaintHandlerParams_const&___ptr64)___ptr64'
                  ::__l2::Color.field0_0x0._3_1_ * __real_3b808081;
      if (param_1->bEnabled == false) {
        local_ee3 = ::operator|(NoPixelSnapping,DisabledEffect);
      }
      else {
        local_ee3 = NoPixelSnapping;
      }
      local_cc8 = &local_258;
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
                (&local_cc8->AllocatorInstance);
      local_da8 = local_ef8.ArrayNum;
      local_da4 = local_ef8.ArrayNum;
      local_510 = local_ef8.AllocatorInstance.Data;
      local_508 = local_ef8.AllocatorInstance.Data;
      local_500 = local_ef8.AllocatorInstance.Data;
      local_4f8 = local_ef8.AllocatorInstance.Data;
      TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>::
      CopyToEmpty<UE::Math::TVector2<float>,int>
                (local_cc8,(TVector2<float> *)local_ef8.AllocatorInstance.Data,local_ef8.ArrayNum,0)
      ;
      local_4f0 = local_cc8;
      local_4c8 = local_cc8;
      local_e78 = param_1->Geometry;
      local_edd = local_e78->bHasRenderTransform;
      local_4e8._s_0 = *(TVector2<float>_u_0_s_0 *)&local_e78->Size;
      UE::Slate::FDeprecateVector2DParameter::FDeprecateVector2DParameter
                (&local_4e0,(TVector2<float> *)&local_4e8._s_0);
      local_4d8 = FGeometry::GetAccumulatedRenderTransform(local_e78);
      local_4d0 = FGeometry::GetAccumulatedLayoutTransform(local_e78,&local_2a8);
      FPaintGeometry::FPaintGeometry(&local_1a8,local_4d0,local_4d8,&local_4e0,local_edd);
      local_4c0 = &local_1a8;
      local_d9c = param_1->Layer + 1;
      local_4b8 = param_1->OutDrawElements;
      FSlateDrawElement::MakeLines
                (local_4b8,local_d9c,local_4c0,local_4c8,local_ee3,(FLinearColor *)&local_bc0._s_0,
                 true,local_da0);
      local_d90 = __real_40000000 * param_1->Geometry->Scale;
      local_bb0._s_0.R =
           FLinearColor::sRGBToLinearTable
           [`private:_int___cdecl_SElementTesting::TestSplineElement(FOnPaintHandlerParams_const&___ptr64)___ptr64'
            ::__l2::Color.field0_0x0._s_0.R];
      local_bb0._s_0.G =
           FLinearColor::sRGBToLinearTable
           [`private:_int___cdecl_SElementTesting::TestSplineElement(FOnPaintHandlerParams_const&___ptr64)___ptr64'
            ::__l2::Color.field0_0x0._s_0.G];
      local_bb0._s_0.B =
           FLinearColor::sRGBToLinearTable
           [`private:_int___cdecl_SElementTesting::TestSplineElement(FOnPaintHandlerParams_const&___ptr64)___ptr64'
            ::__l2::Color.field0_0x0._s_0.B];
      local_bb0._s_0.A =
           (float)`private:_int___cdecl_SElementTesting::TestSplineElement(FOnPaintHandlerParams_const&___ptr64)___ptr64'
                  ::__l2::Color.field0_0x0._3_1_ * __real_3b808081;
      if (param_1->bEnabled == false) {
        local_ee2 = ::operator|(NoPixelSnapping,DisabledEffect);
      }
      else {
        local_ee2 = NoPixelSnapping;
      }
      local_cc0 = &local_248;
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
                (&local_cc0->AllocatorInstance);
      local_d98 = local_ef8.ArrayNum;
      local_d94 = local_ef8.ArrayNum;
      local_4b0 = local_ef8.AllocatorInstance.Data;
      local_4a8 = local_ef8.AllocatorInstance.Data;
      local_4a0 = local_ef8.AllocatorInstance.Data;
      local_498 = local_ef8.AllocatorInstance.Data;
      TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>::
      CopyToEmpty<UE::Math::TVector2<float>,int>
                (local_cc0,(TVector2<float> *)local_ef8.AllocatorInstance.Data,local_ef8.ArrayNum,0)
      ;
      local_490 = local_cc0;
      local_470 = local_cc0;
      local_478 = param_1->Geometry;
      local_358._s_0.X = 0.0;
      local_358._s_0.Y = __real_4024000000000000;
      local_488 = &local_358;
      UE::Slate::FDeprecateVector2DParameter::FDeprecateVector2DParameter
                (&local_480,(TVector2<double> *)&local_488->_s_0);
      local_468 = FGeometry::ToOffsetPaintGeometry(local_478,&local_c8,&local_480);
      local_d8c = param_1->Layer;
      local_460 = param_1->OutDrawElements;
      FSlateDrawElement::MakeLines
                (local_460,local_d8c,local_468,local_470,local_ee2,(FLinearColor *)&local_bb0._s_0,
                 true,local_d90);
      local_d80 = __real_40400000 * param_1->Geometry->Scale;
      local_ba0._s_0.R =
           FLinearColor::sRGBToLinearTable
           [`private:_int___cdecl_SElementTesting::TestSplineElement(FOnPaintHandlerParams_const&___ptr64)___ptr64'
            ::__l2::Color.field0_0x0._s_0.R];
      local_ba0._s_0.G =
           FLinearColor::sRGBToLinearTable
           [`private:_int___cdecl_SElementTesting::TestSplineElement(FOnPaintHandlerParams_const&___ptr64)___ptr64'
            ::__l2::Color.field0_0x0._s_0.G];
      local_ba0._s_0.B =
           FLinearColor::sRGBToLinearTable
           [`private:_int___cdecl_SElementTesting::TestSplineElement(FOnPaintHandlerParams_const&___ptr64)___ptr64'
            ::__l2::Color.field0_0x0._s_0.B];
      local_ba0._s_0.A =
           (float)`private:_int___cdecl_SElementTesting::TestSplineElement(FOnPaintHandlerParams_const&___ptr64)___ptr64'
                  ::__l2::Color.field0_0x0._3_1_ * __real_3b808081;
      if (param_1->bEnabled == false) {
        local_ee1 = ::operator|(NoPixelSnapping,DisabledEffect);
      }
      else {
        local_ee1 = NoPixelSnapping;
      }
      local_cb8 = &local_238;
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
                (&local_cb8->AllocatorInstance);
      local_d88 = local_ef8.ArrayNum;
      local_d84 = local_ef8.ArrayNum;
      local_458 = local_ef8.AllocatorInstance.Data;
      local_450 = local_ef8.AllocatorInstance.Data;
      local_448 = local_ef8.AllocatorInstance.Data;
      local_440 = local_ef8.AllocatorInstance.Data;
      TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>::
      CopyToEmpty<UE::Math::TVector2<float>,int>
                (local_cb8,(TVector2<float> *)local_ef8.AllocatorInstance.Data,local_ef8.ArrayNum,0)
      ;
      local_438 = local_cb8;
      local_418 = local_cb8;
      local_420 = param_1->Geometry;
      local_348._s_0.X = 0.0;
      local_348._s_0.Y = __real_4034000000000000;
      local_430 = &local_348;
      UE::Slate::FDeprecateVector2DParameter::FDeprecateVector2DParameter
                (&local_428,(TVector2<double> *)&local_430->_s_0);
      local_410 = FGeometry::ToOffsetPaintGeometry(local_420,&local_90,&local_428);
      local_d7c = param_1->Layer;
      local_408 = param_1->OutDrawElements;
      FSlateDrawElement::MakeLines
                (local_408,local_d7c,local_410,local_418,local_ee1,(FLinearColor *)&local_ba0._s_0,
                 true,local_d80);
      local_d70 = __real_40800000 * param_1->Geometry->Scale;
      local_b90._s_0.R =
           FLinearColor::sRGBToLinearTable
           [`private:_int___cdecl_SElementTesting::TestSplineElement(FOnPaintHandlerParams_const&___ptr64)___ptr64'
            ::__l2::Color.field0_0x0._s_0.R];
      local_b90._s_0.G =
           FLinearColor::sRGBToLinearTable
           [`private:_int___cdecl_SElementTesting::TestSplineElement(FOnPaintHandlerParams_const&___ptr64)___ptr64'
            ::__l2::Color.field0_0x0._s_0.G];
      local_b90._s_0.B =
           FLinearColor::sRGBToLinearTable
           [`private:_int___cdecl_SElementTesting::TestSplineElement(FOnPaintHandlerParams_const&___ptr64)___ptr64'
            ::__l2::Color.field0_0x0._s_0.B];
      local_b90._s_0.A =
           (float)`private:_int___cdecl_SElementTesting::TestSplineElement(FOnPaintHandlerParams_const&___ptr64)___ptr64'
                  ::__l2::Color.field0_0x0._3_1_ * __real_3b808081;
      if (param_1->bEnabled == false) {
        local_ee0 = ::operator|(NoPixelSnapping,DisabledEffect);
      }
      else {
        local_ee0 = NoPixelSnapping;
      }
      local_cb0 = &local_228;
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
                (&local_cb0->AllocatorInstance);
      local_d78 = local_ef8.ArrayNum;
      local_d74 = local_ef8.ArrayNum;
      local_400 = local_ef8.AllocatorInstance.Data;
      local_3f8 = local_ef8.AllocatorInstance.Data;
      local_3f0 = local_ef8.AllocatorInstance.Data;
      local_3e8 = local_ef8.AllocatorInstance.Data;
      TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>::
      CopyToEmpty<UE::Math::TVector2<float>,int>
                (local_cb0,(TVector2<float> *)local_ef8.AllocatorInstance.Data,local_ef8.ArrayNum,0)
      ;
      local_3e0 = local_cb0;
      local_3c0 = local_cb0;
      local_3c8 = param_1->Geometry;
      local_368._s_0.X = 0.0;
      local_368._s_0.Y = __real_4041000000000000;
      local_3d8 = &local_368;
      UE::Slate::FDeprecateVector2DParameter::FDeprecateVector2DParameter
                (&local_3d0,(TVector2<double> *)&local_3d8->_s_0);
      local_3b8 = FGeometry::ToOffsetPaintGeometry(local_3c8,&local_58,&local_3d0);
      local_d6c = param_1->Layer;
      local_3b0 = param_1->OutDrawElements;
      FSlateDrawElement::MakeLines
                (local_3b0,local_d6c,local_3b8,local_3c0,local_ee0,(FLinearColor *)&local_b90._s_0,
                 true,local_d70);
      local_d68 = param_1->Layer;
      TArray<FLinearColor,TSizedDefaultAllocator<32>_>::
      ~TArray<FLinearColor,TSizedDefaultAllocator<32>_>(&local_ec0);
      TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>::
      ~TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>(&local_ef8);
      return local_d68;
    }
    local_dc8 = local_ed0 +
                `private:_int___cdecl_SElementTesting::TestSplineElement(FOnPaintHandlerParams_const&___ptr64)___ptr64'
                ::__l2::CurTime;
    local_dc0 = sinf(local_dc8);
    local_ca0 = local_ed0 * __real_41700000;
    local_c9c = __real_41700000 * local_dc0;
    local_c98 = &local_ca0;
    local_db0 = local_ed8._4_4_ + local_c9c;
    local_db8 = (float)local_ed8 + local_ca0;
    local_cd8 = (FScriptContainerElement *)&local_cd0;
    local_590 = local_ef8.AllocatorInstance.Data;
    local_588 = local_ef8.AllocatorInstance.Data;
    local_580 = local_ef8.AllocatorInstance.Data;
    local_cd0 = local_db8;
    fStack_ccc = local_db0;
    local_598 = local_c98;
    if (local_ef8.AllocatorInstance.Data <= local_cd8) {
      local_578 = local_ef8.AllocatorInstance.Data;
      local_570 = local_ef8.AllocatorInstance.Data;
      local_568 = local_ef8.AllocatorInstance.Data;
      if (local_cd8 < local_ef8.AllocatorInstance.Data + (longlong)local_ef8.ArrayMax * 8) {
        local_560 = 0;
        local_55c = 0;
        UE::Core::Private::FormatStringSan::
        AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
        local_540 = (longlong)local_ef8.ArrayNum;
        local_538 = (longlong)local_ef8.ArrayMax;
        local_558 = local_ef8.AllocatorInstance.Data;
        local_550 = local_ef8.AllocatorInstance.Data;
        local_548 = local_ef8.AllocatorInstance.Data;
        local_530 = local_ef8.AllocatorInstance.Data;
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          iVar3 = (*pcVar1)();
          return iVar3;
        }
      }
    }
    if (local_ef8.ArrayNum == local_ef8.ArrayMax) {
      local_ef8.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x408,&local_ef8.AllocatorInstance,&local_ef8.ArrayMax);
    }
    local_e90 = local_ef8.ArrayNum;
    local_528 = local_ef8.AllocatorInstance.Data;
    local_520 = local_ef8.AllocatorInstance.Data + (longlong)local_ef8.ArrayNum * 8;
    local_ef8.ArrayNum = local_ef8.ArrayNum + 1;
    local_518 = ::operator_new(8,local_520);
    *local_518 = CONCAT44(fStack_ccc,local_cd0);
    local_390 = local_e90;
    local_ed0 = local_ed0 + __real_3dcccccd;
  } while( true );
}

// TestTextElement @ 143103550

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
SElementTesting::TestTextElement(SElementTesting *this,FOnPaintHandlerParams *param_1)

{
  undefined1 uVar1;
  int iVar2;
  FGeometry *this_00;
  FName *pFVar3;
  FColor *pFVar4;
  FSlateLayoutTransform *pFVar5;
  FDeprecateSlateVector2D FVar6;
  FSlateLayoutTransform *pFVar7;
  TVector2<float> *pTVar8;
  TTransform2<float> *pTVar9;
  longlong lVar10;
  FLinearColor *pFVar11;
  FLinearColor *pFVar12;
  undefined1 auStackY_218 [32];
  ESlateDrawEffect local_1d8;
  FLinearColor_u_0 local_1a8;
  FColor local_198 [2];
  FName *local_190;
  FFontOutlineSettings *local_188;
  FName local_180;
  FGeometry *local_178;
  FDeprecateVector2DParameter local_170;
  FDeprecateVector2DParameter local_168;
  TTransform2<float> *local_160;
  FString *local_158;
  FPaintGeometry *local_150;
  FSlateWindowElementList *local_148;
  FText local_140;
  FSlateLayoutTransform local_130;
  FName local_120 [2];
  FSlateLayoutTransform local_110;
  FSlateLayoutTransform local_104;
  FSlateFontInfo local_f8;
  FFontOutlineSettings local_98;
  TTransform2<float> local_78;
  FPaintGeometry local_60;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_218;
  FText::AsLocalizable_Advanced_LocText
            (&local_140,L"STestSuite",L"TestText",
             L"The quick brown fox jumps over the lazy dog 0123456789");
  local_188 = FFontOutlineSettings::FFontOutlineSettings(&local_98);
  local_190 = local_120;
  pFVar3 = ::FName::FName(local_190,"Regular");
  local_180 = *pFVar3;
  FCoreStyle::GetDefaultFontStyle(&local_f8,local_180,14.0,local_188);
  pFVar11 = &FLinearColor::Blue;
  pFVar12 = &local_f8.OutlineSettings.OutlineColor;
  for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *(undefined1 *)&pFVar12->field0_0x0 = *(undefined1 *)&pFVar11->field0_0x0;
    pFVar11 = (FLinearColor *)((longlong)&pFVar11->field0_0x0 + 1);
    pFVar12 = (FLinearColor *)((longlong)&pFVar12->field0_0x0 + 1);
  }
  local_f8.OutlineSettings.OutlineSize = 2;
  pFVar4 = FColor::FColor(local_198,0xff,0xff,0xff,0xff);
  local_1a8._s_0.R = FLinearColor::sRGBToLinearTable[(pFVar4->field0_0x0)._s_0.R];
  local_1a8._s_0.G = FLinearColor::sRGBToLinearTable[(pFVar4->field0_0x0)._s_0.G];
  local_1a8._s_0.B = FLinearColor::sRGBToLinearTable[(pFVar4->field0_0x0)._s_0.B];
  local_1a8._s_0.A = (float)(pFVar4->field0_0x0)._s_0.A * __real_3b808081;
  if (param_1->bEnabled == false) {
    local_1d8 = DisabledEffect;
  }
  else {
    local_1d8 = None;
  }
  local_158 = FText::ToString(&local_140);
  this_00 = param_1->Geometry;
  pFVar5 = FSlateLayoutTransform::FSlateLayoutTransform(&local_110,this->FontScale);
  local_178 = param_1->Geometry;
  FVar6 = FGeometry::GetLocalSize(local_178);
  UE::Slate::FDeprecateVector2DParameter::FDeprecateVector2DParameter
            (&local_170,(FDeprecateSlateVector2D *)FVar6);
  pFVar7 = FGeometry::GetAccumulatedLayoutTransform(this_00,&local_104);
  Concatenate<FSlateLayoutTransform>(&local_130,pFVar5,pFVar7);
  pTVar8 = UE::Slate::CastToVector2f(&local_170);
  UE::Slate::FDeprecateVector2DParameter::FDeprecateVector2DParameter(&local_168,pTVar8);
  pTVar9 = FGeometry::GetAccumulatedRenderTransform(this_00);
  local_160 = Concatenate<FSlateLayoutTransform,TTransform2<float>_>(&local_78,pFVar5,pTVar9);
  FPaintGeometry::FPaintGeometry
            (&local_60,&local_130,local_160,&local_168,this_00->bHasRenderTransform);
  local_150 = &local_60;
  local_148 = param_1->OutDrawElements;
  FSlateDrawElement::MakeText
            (local_148,param_1->Layer,local_150,local_158,&local_f8,local_1d8,
             (FLinearColor *)&local_1a8._s_0);
  iVar2 = param_1->Layer;
  FSlateFontInfo::~FSlateFontInfo(&local_f8);
  FText::~FText(&local_140);
  return iVar2;
}

// Tick @ 143105420

void __thiscall
SElementTesting::Tick(SElementTesting *this,FGeometry *param_1,double param_2,float param_3)

{
  this->CenterRotation =
       (float)((double)this->CenterRotation + (double)param_3 * __real_3fd3333333333333);
  if (__real_40c90fdb < this->CenterRotation) {
    this->CenterRotation = this->CenterRotation - __real_40c90fdb;
  }
  this->OuterRotation =
       (float)((double)this->OuterRotation + (double)param_3 * __real_3ff8000000000000);
  if (__real_40c90fdb < this->OuterRotation) {
    this->OuterRotation = this->OuterRotation - __real_40c90fdb;
  }
  return;
}

