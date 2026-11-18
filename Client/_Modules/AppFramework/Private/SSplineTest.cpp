// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 8

// operator() @ 143064390

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
`SSplineTest::Construct'::__l2::<lambda_1>::operator()(void *this,FReply *__return_storage_ptr__)

{
  SSplineWithHandles *pSVar1;
  undefined4 local_d0;
  uint uStack_cc;
  undefined4 local_c8;
  uint uStack_c4;
  undefined4 local_c0;
  uint uStack_bc;
  undefined4 local_b8;
  uint uStack_b4;
  undefined4 *local_b0;
  TVector2<float>_u_0 local_a8;
  TVector2<float>_u_0 local_a0;
  TVector2<float>_u_0 local_98;
  undefined4 *local_90;
  TVector2<float>_u_0 local_88;
  TVector2<float>_u_0 local_80;
  TVector2<float>_u_0 local_78;
  undefined4 *local_70;
  TVector2<float>_u_0 local_68;
  TVector2<float>_u_0 local_60;
  TVector2<float>_u_0 local_58;
  undefined4 *local_50;
  TVector2<float>_u_0 local_48;
  TVector2<float>_u_0 local_40;
  TVector2<float>_u_0 local_38;
  TVector2<float>_u_0 local_30;
  TVector2<float>_u_0 local_28;
  TVector2<float>_u_0 local_20;
  TVector2<float>_u_0 local_18;
  
  pSVar1 = TSharedPtr<SSplineWithHandles,1>::operator->
                     ((TSharedPtr<SSplineWithHandles,1> *)(*(longlong *)this + 0x2b0));
  local_d0 = __real_43480000;
  uStack_cc = __real_42800000;
  local_b0 = &local_d0;
  local_a8._s_0.Y = (float)__real_42800000;
  local_a8._s_0.X = (float)__real_43480000;
  local_c8 = __real_43050000;
  uStack_c4 = __real_42800000;
  local_90 = &local_c8;
  local_88._s_0.Y = (float)__real_42800000;
  local_88._s_0.X = (float)__real_43050000;
  local_c0 = __real_42840000;
  uStack_bc = __real_42800000;
  local_70 = &local_c0;
  local_68._s_0.Y = (float)__real_42800000;
  local_68._s_0.X = (float)__real_42840000;
  local_b8 = 0;
  uStack_b4 = __real_42800000;
  local_50 = &local_b8;
  local_48 = (TVector2<float>_u_0)((ulonglong)__real_42800000 << 0x20);
  pSVar1->BezierPoints[0].field0_0x0 = local_48;
  pSVar1->BezierPoints[1].field0_0x0 = local_68;
  pSVar1->BezierPoints[2].field0_0x0 = local_88;
  pSVar1->BezierPoints[3].field0_0x0 = local_a8;
  local_a0 = local_a8;
  local_98 = local_a8;
  local_80 = local_88;
  local_78 = local_88;
  local_60 = local_68;
  local_58 = local_68;
  local_40 = local_48;
  local_38 = local_48;
  local_30 = local_48;
  local_28 = local_68;
  local_20 = local_88;
  local_18 = local_a8;
  FReply::Handled(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// operator() @ 1430652e0

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
`SSplineTest::Construct'::__l2::<lambda_2>::operator()(void *this,FReply *__return_storage_ptr__)

{
  SSplineWithHandles *pSVar1;
  uint local_d0;
  undefined4 uStack_cc;
  uint local_c8;
  undefined4 uStack_c4;
  uint local_c0;
  undefined4 uStack_bc;
  uint local_b8 [2];
  uint *local_b0;
  TVector2<float>_u_0 local_a8;
  TVector2<float>_u_0 local_a0;
  TVector2<float>_u_0 local_98;
  uint *local_90;
  TVector2<float>_u_0 local_88;
  TVector2<float>_u_0 local_80;
  TVector2<float>_u_0 local_78;
  uint *local_70;
  TVector2<float>_u_0 local_68;
  TVector2<float>_u_0 local_60;
  TVector2<float>_u_0 local_58;
  uint *local_50;
  TVector2<float>_u_0 local_48;
  TVector2<float>_u_0 local_40;
  TVector2<float>_u_0 local_38;
  TVector2<float>_u_0 local_30;
  TVector2<float>_u_0 local_28;
  TVector2<float>_u_0 local_20;
  TVector2<float>_u_0 local_18;
  
  pSVar1 = TSharedPtr<SSplineWithHandles,1>::operator->
                     ((TSharedPtr<SSplineWithHandles,1> *)(*(longlong *)this + 0x2b0));
  local_d0 = __real_42800000;
  uStack_cc = __real_43480000;
  local_b0 = &local_d0;
  local_a8._s_0.Y = (float)__real_43480000;
  local_a8._s_0.X = (float)__real_42800000;
  local_c8 = __real_42800000;
  uStack_c4 = __real_43050000;
  local_90 = &local_c8;
  local_88._s_0.Y = (float)__real_43050000;
  local_88._s_0.X = (float)__real_42800000;
  local_c0 = __real_42800000;
  uStack_bc = __real_42840000;
  local_70 = &local_c0;
  local_68._s_0.Y = (float)__real_42840000;
  local_68._s_0.X = (float)__real_42800000;
  local_b8[0] = __real_42800000;
  local_b8[1] = 0;
  local_50 = local_b8;
  local_48._s_0.Y = 0.0;
  local_48._s_0.X = (float)__real_42800000;
  pSVar1->BezierPoints[0].field0_0x0 = local_48;
  pSVar1->BezierPoints[1].field0_0x0 = local_68;
  pSVar1->BezierPoints[2].field0_0x0 = local_88;
  pSVar1->BezierPoints[3].field0_0x0 = local_a8;
  local_a0 = local_a8;
  local_98 = local_a8;
  local_80 = local_88;
  local_78 = local_88;
  local_60 = local_68;
  local_58 = local_68;
  local_40 = local_48;
  local_38 = local_48;
  local_30 = local_48;
  local_28 = local_68;
  local_20 = local_88;
  local_18 = local_a8;
  FReply::Handled(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// operator() @ 143065530

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
`SSplineTest::Construct'::__l2::<lambda_3>::operator()(void *this,FReply *__return_storage_ptr__)

{
  SSplineWithHandles *pSVar1;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 *local_b0;
  TVector2<float>_u_0 local_a8;
  TVector2<float>_u_0 local_a0;
  TVector2<float>_u_0 local_98;
  undefined4 *local_90;
  TVector2<float>_u_0 local_88;
  TVector2<float>_u_0 local_80;
  TVector2<float>_u_0 local_78;
  undefined4 *local_70;
  TVector2<float>_u_0 local_68;
  TVector2<float>_u_0 local_60;
  TVector2<float>_u_0 local_58;
  undefined4 *local_50;
  TVector2<float>_u_0 local_48;
  TVector2<float>_u_0 local_40;
  TVector2<float>_u_0 local_38;
  TVector2<float>_u_0 local_30;
  TVector2<float>_u_0 local_28;
  TVector2<float>_u_0 local_20;
  TVector2<float>_u_0 local_18;
  
  pSVar1 = TSharedPtr<SSplineWithHandles,1>::operator->
                     ((TSharedPtr<SSplineWithHandles,1> *)(*(longlong *)this + 0x2b0));
  local_d0 = __real_43000000;
  uStack_cc = __real_43000000;
  local_b0 = &local_d0;
  local_a8._s_0.Y = (float)__real_43000000;
  local_a8._s_0.X = (float)__real_43000000;
  local_c8 = __real_42800000;
  uStack_c4 = __real_43000000;
  local_90 = &local_c8;
  local_88._s_0.Y = (float)__real_43000000;
  local_88._s_0.X = (float)__real_42800000;
  local_c0 = __real_43000000;
  uStack_bc = __real_42800000;
  local_70 = &local_c0;
  local_68._s_0.Y = (float)__real_42800000;
  local_68._s_0.X = (float)__real_43000000;
  local_b8 = __real_42800000;
  uStack_b4 = __real_42800000;
  local_50 = &local_b8;
  local_48._s_0.Y = (float)__real_42800000;
  local_48._s_0.X = (float)__real_42800000;
  pSVar1->BezierPoints[0].field0_0x0 = local_48;
  pSVar1->BezierPoints[1].field0_0x0 = local_68;
  pSVar1->BezierPoints[2].field0_0x0 = local_88;
  pSVar1->BezierPoints[3].field0_0x0 = local_a8;
  local_a0 = local_a8;
  local_98 = local_a8;
  local_80 = local_88;
  local_78 = local_88;
  local_60 = local_68;
  local_58 = local_68;
  local_40 = local_48;
  local_38 = local_48;
  local_30 = local_48;
  local_28 = local_68;
  local_20 = local_88;
  local_18 = local_a8;
  FReply::Handled(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// operator() @ 143065780

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
`SSplineTest::Construct'::__l2::<lambda_4>::operator()(void *this,FReply *__return_storage_ptr__)

{
  SSplineWithHandles *pSVar1;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 *local_b0;
  TVector2<float>_u_0 local_a8;
  TVector2<float>_u_0 local_a0;
  TVector2<float>_u_0 local_98;
  undefined4 *local_90;
  TVector2<float>_u_0 local_88;
  TVector2<float>_u_0 local_80;
  TVector2<float>_u_0 local_78;
  undefined4 *local_70;
  TVector2<float>_u_0 local_68;
  TVector2<float>_u_0 local_60;
  TVector2<float>_u_0 local_58;
  undefined4 *local_50;
  TVector2<float>_u_0 local_48;
  TVector2<float>_u_0 local_40;
  TVector2<float>_u_0 local_38;
  TVector2<float>_u_0 local_30;
  TVector2<float>_u_0 local_28;
  TVector2<float>_u_0 local_20;
  TVector2<float>_u_0 local_18;
  
  pSVar1 = TSharedPtr<SSplineWithHandles,1>::operator->
                     ((TSharedPtr<SSplineWithHandles,1> *)(*(longlong *)this + 0x2b0));
  local_d0 = __real_43400000;
  uStack_cc = __real_43400000;
  local_b0 = &local_d0;
  local_a8._s_0.Y = (float)__real_43400000;
  local_a8._s_0.X = (float)__real_43400000;
  local_c8 = __real_43900000;
  uStack_c4 = __real_43400000;
  local_90 = &local_c8;
  local_88._s_0.Y = (float)__real_43400000;
  local_88._s_0.X = (float)__real_43900000;
  local_c0 = __real_42000000;
  uStack_bc = __real_43000000;
  local_70 = &local_c0;
  local_68._s_0.Y = (float)__real_43000000;
  local_68._s_0.X = (float)__real_42000000;
  local_b8 = __real_43000000;
  uStack_b4 = __real_43000000;
  local_50 = &local_b8;
  local_48._s_0.Y = (float)__real_43000000;
  local_48._s_0.X = (float)__real_43000000;
  pSVar1->BezierPoints[0].field0_0x0 = local_48;
  pSVar1->BezierPoints[1].field0_0x0 = local_68;
  pSVar1->BezierPoints[2].field0_0x0 = local_88;
  pSVar1->BezierPoints[3].field0_0x0 = local_a8;
  local_a0 = local_a8;
  local_98 = local_a8;
  local_80 = local_88;
  local_78 = local_88;
  local_60 = local_68;
  local_58 = local_68;
  local_40 = local_48;
  local_38 = local_48;
  local_30 = local_48;
  local_28 = local_68;
  local_20 = local_88;
  local_18 = local_a8;
  FReply::Handled(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Construct @ 14309e140

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SSplineTest::Construct(SSplineTest *this,FArguments *param_1)

{
  FSlotArguments *this_00;
  TSlateDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs> *this_01;
  TSharedRef<SSpinBox<float>,1> *pTVar1;
  TSlateDecl<SSpinBox<int>,RequiredArgs::T0RequiredArgs> *this_02;
  TSharedRef<SSpinBox<int>,1> *pTVar2;
  FText *pFVar3;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> *pTVar4;
  TSharedRef<SButton,1> *pTVar5;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> *this_03;
  TSharedRef<SHorizontalBox,1> *pTVar6;
  TSlateDecl<SSplineWithHandles,RequiredArgs::T0RequiredArgs> *this_04;
  TSharedRef<SSplineWithHandles,1> *pTVar7;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> *this_05;
  TSharedRef<SVerticalBox,1> *pTVar8;
  longlong lVar9;
  code **ppcVar10;
  undefined1 *puVar11;
  pmf_bb06ce0b *ppVar12;
  pmf_d17e78b6 *ppVar13;
  pmf_8517c7ef *ppVar14;
  T0RequiredArgs local_38a8;
  T0RequiredArgs local_38a7;
  T0RequiredArgs local_38a6;
  T0RequiredArgs local_38a5;
  T0RequiredArgs local_38a4;
  T0RequiredArgs local_38a3;
  T0RequiredArgs local_38a2;
  T0RequiredArgs local_38a1;
  T0RequiredArgs local_38a0 [4];
  int local_389c;
  float local_3898;
  float local_3894;
  int local_3890 [4];
  FArguments *local_3880;
  FArguments *local_3878;
  FArguments *local_3870;
  FArguments *local_3868;
  TAttribute<float> *local_3860;
  TAttribute<float> *local_3858;
  FSlotArguments *local_3850;
  TAttribute<TOptional<float>_> *local_3848;
  TAttribute<TOptional<float>_> *local_3840;
  FArguments *local_3838;
  TAttribute<TOptional<float>_> *local_3830;
  TAttribute<TOptional<float>_> *local_3828;
  FArguments *local_3820;
  FArguments *local_3818;
  FArguments *local_3810;
  FArguments *local_3808;
  FSlotArguments *local_3800;
  FSlotArguments *local_37f8;
  FArguments *local_37f0;
  TAttribute<float> *local_37e8;
  TAttribute<float> *local_37e0;
  FSlotArguments *local_37d8;
  TAttribute<TOptional<int>_> *local_37d0;
  TAttribute<TOptional<int>_> *local_37c8;
  FArguments *local_37c0;
  TAttribute<TOptional<int>_> *local_37b8;
  TAttribute<TOptional<int>_> *local_37b0;
  FArguments *local_37a8;
  FArguments *local_37a0;
  FArguments *local_3798;
  FSlotArguments *local_3790;
  FSlotArguments *local_3788;
  FArguments *local_3780;
  TAttribute<FText> *local_3778;
  TAttribute<FText> *local_3770;
  FArguments *local_3768;
  <lambda_1> local_3760;
  <lambda_1> *local_3758;
  <lambda_1> *local_3750;
  FArguments *local_3748;
  FArguments *local_3740;
  FSlotArguments *local_3738;
  FSlotArguments *local_3730;
  FArguments *local_3728;
  TAttribute<FText> *local_3720;
  TAttribute<FText> *local_3718;
  FArguments *local_3710;
  <lambda_2> local_3708;
  <lambda_2> *local_3700;
  <lambda_2> *local_36f8;
  FArguments *local_36f0;
  FArguments *local_36e8;
  FSlotArguments *local_36e0;
  FSlotArguments *local_36d8;
  FArguments *local_36d0;
  TAttribute<FText> *local_36c8;
  TAttribute<FText> *local_36c0;
  FArguments *local_36b8;
  <lambda_3> local_36b0;
  <lambda_3> *local_36a8;
  <lambda_3> *local_36a0;
  FArguments *local_3698;
  FArguments *local_3690;
  FSlotArguments *local_3688;
  FSlotArguments *local_3680;
  FArguments *local_3678;
  TAttribute<FText> *local_3670;
  TAttribute<FText> *local_3668;
  FArguments *local_3660;
  <lambda_4> local_3658;
  <lambda_4> *local_3650;
  <lambda_4> *local_3648;
  FArguments *local_3640;
  FArguments *local_3638;
  FSlotArguments *local_3630;
  FSlotArguments *local_3628;
  FArguments *local_3620;
  FArguments *local_3618;
  FSlotArguments *local_3610;
  FSlotArguments *local_3608;
  FArguments *local_3600;
  TAttribute<float> *local_35f8;
  TAttribute<float> *local_35f0;
  FSlotArguments *local_35e8;
  TVector2<float>_u_0 local_35e0;
  FArguments *local_35d8;
  TVector2<float>_u_0 local_35d0;
  FArguments *local_35c8;
  TVector2<float>_u_0 local_35c0;
  FArguments *local_35b8;
  TVector2<float>_u_0 local_35b0;
  FArguments *local_35a8;
  FArguments *local_35a0;
  TSlateDecl<SSplineWithHandles,RequiredArgs::T0RequiredArgs> *local_3598;
  FArguments *local_3590;
  FSlotArguments *local_3588;
  FSlotArguments *local_3580;
  FArguments *local_3578;
  FArguments *local_3570;
  TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *local_3568;
  code *local_3560;
  undefined4 local_3558;
  code *local_3550;
  undefined4 local_3548;
  code *local_3540;
  undefined4 local_3538;
  code *local_3530;
  undefined4 local_3528;
  TSharedRef<SWidget,1> local_3520;
  TSharedRef<SWidget,1> local_3510;
  TSharedRef<SWidget,1> local_3500;
  TSharedRef<SWidget,1> local_34f0;
  TSharedRef<SWidget,1> local_34e0;
  TSharedRef<SWidget,1> local_34d0;
  TSharedRef<SWidget,1> local_34c0;
  TSharedRef<SWidget,1> local_34b0;
  TSharedRef<SWidget,1> local_34a0;
  undefined1 local_3490 [24];
  pmf_8517c7ef local_3478;
  undefined1 local_3468 [16];
  pmf_bb06ce0b local_3458;
  undefined1 local_3448 [16];
  pmf_d17e78b6 local_3438;
  undefined1 local_3428 [16];
  pmf_8517c7ef local_3418;
  TSharedRef<SVerticalBox,1> local_3408;
  TSharedRef<SSplineWithHandles,1> local_33f8;
  TSharedRef<SHorizontalBox,1> local_33e8;
  TSharedRef<SButton,1> local_33d8;
  FText local_33c8;
  TSharedRef<SButton,1> local_33b8;
  FText local_33a8;
  TSharedRef<SButton,1> local_3398;
  FText local_3388;
  TSharedRef<SButton,1> local_3378;
  FText local_3368;
  TSharedRef<SSpinBox<int>,1> local_3358;
  TSharedRef<SSpinBox<float>,1> local_3348;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_3338;
  TSlateDecl<SSplineWithHandles,RequiredArgs::T0RequiredArgs> local_3320;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_3308;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_32f0;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_32d8;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_32c0;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_32a8;
  TSlateDecl<SSpinBox<int>,RequiredArgs::T0RequiredArgs> local_3290;
  TSlateDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs> local_3278;
  TAttribute<float> local_3260;
  TAttribute<float> local_3240;
  TAttribute<float> local_3220;
  TAttribute<TOptional<float>_> local_3200;
  TAttribute<TOptional<float>_> local_31d8;
  TAttribute<TOptional<int>_> local_31b0;
  TAttribute<TOptional<int>_> local_3188;
  TAttribute<FText> local_3160;
  TAttribute<FText> local_3130;
  TAttribute<FText> local_3100;
  TAttribute<FText> local_30d0;
  FSlotArguments local_30a0;
  FSlotArguments local_2fb8;
  FSlotArguments local_2ed0;
  FSlotArguments local_2de8;
  FSlotArguments local_2d00;
  FSlotArguments local_2c18;
  FSlotArguments local_2b30;
  FSlotArguments local_2a48;
  FArguments local_2960;
  FArguments local_2758;
  FArguments local_2550;
  FArguments local_2318;
  FArguments local_1dd8;
  FArguments local_1898;
  FArguments local_1358;
  FArguments local_e18;
  FArguments local_718;
  undefined8 uStack_18;
  
  uStack_18 = 0x14309e156;
  local_3568 = (TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *)
               &this->_padding_;
  local_3600 = SVerticalBox::FArguments::FArguments(&local_2758);
  this_00 = SVerticalBox::Slot(&local_2a48);
  local_3610 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(this_00);
  local_37f0 = SHorizontalBox::FArguments::FArguments(&local_2960);
  local_3850 = SHorizontalBox::Slot(&local_2b30);
  local_3860 = &local_3260;
  local_389c = 1;
  local_3858 = TAttribute<float>::TAttribute<float><int>(local_3860,&local_389c);
  local_3800 = SHorizontalBox::FSlot::FSlotArguments::FillWidth(local_3850,local_3858);
  local_3838 = SSpinBox<float>::FArguments::FArguments(&local_718);
  local_3848 = &local_3200;
  local_3898 = __real_3dcccccd;
  local_3840 = TAttribute<TOptional<float>_>::TAttribute<TOptional<float>_><float>
                         (local_3848,&local_3898);
  local_3820 = SSpinBox<float>::FArguments::MinValue(local_3838,local_3840);
  local_3830 = &local_31d8;
  local_3894 = __real_41a00000;
  local_3828 = TAttribute<TOptional<float>_>::TAttribute<TOptional<float>_><float>
                         (local_3830,&local_3894);
  local_3818 = SSpinBox<float>::FArguments::MaxValue(local_3820,local_3828);
  local_3560 = GetSplineThickness;
  local_3558 = 0;
  ppcVar10 = &local_3560;
  puVar11 = local_3490;
  for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar11 = *(undefined1 *)ppcVar10;
    ppcVar10 = (code **)((longlong)ppcVar10 + 1);
    puVar11 = puVar11 + 1;
  }
  puVar11 = local_3490;
  ppVar14 = &local_3478;
  for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
    *(undefined1 *)ppVar14 = *puVar11;
    puVar11 = puVar11 + 1;
    ppVar14 = (pmf_8517c7ef *)&ppVar14->field_0x1;
  }
  local_3810 = SSpinBox<float>::FArguments::Value<SSplineTest>(local_3818,this,&local_3478);
  local_3550 = OnSplineThicknessChanged;
  local_3548 = 0;
  ppcVar10 = &local_3550;
  puVar11 = local_3468;
  for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar11 = *(undefined1 *)ppcVar10;
    ppcVar10 = (code **)((longlong)ppcVar10 + 1);
    puVar11 = puVar11 + 1;
  }
  puVar11 = local_3468;
  ppVar12 = &local_3458;
  for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
    *(undefined1 *)ppVar12 = *puVar11;
    puVar11 = puVar11 + 1;
    ppVar12 = (pmf_bb06ce0b *)&ppVar12->field_0x1;
  }
  local_3808 = SSpinBox<float>::FArguments::OnValueChanged<SSplineTest>(local_3810,this,&local_3458)
  ;
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_38a8);
  this_01 = MakeTDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs>
                      (&local_3278,"SSpinBox<float>",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0x2a2,&local_38a8);
  pTVar1 = TSlateDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs>::operator<<=
                     (this_01,&local_3348,local_3808);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SSpinBox<float>_>(&local_34a0,pTVar1);
  local_37f8 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_3800,&local_34a0);
  local_3780 = SHorizontalBox::FArguments::operator+(local_37f0,local_37f8);
  local_37d8 = SHorizontalBox::Slot(&local_2c18);
  local_37e8 = &local_3240;
  local_3890[0] = 1;
  local_37e0 = TAttribute<float>::TAttribute<float><int>(local_37e8,local_3890);
  local_3790 = SHorizontalBox::FSlot::FSlotArguments::FillWidth(local_37d8,local_37e0);
  local_37c0 = SSpinBox<int>::FArguments::FArguments(&local_e18);
  local_37d0 = &local_31b0;
  local_3890[1] = 0;
  local_37c8 = TAttribute<TOptional<int>_>::TAttribute<TOptional<int>_><int>
                         (local_37d0,local_3890 + 1);
  local_37a8 = SSpinBox<int>::FArguments::MinValue(local_37c0,local_37c8);
  local_37b8 = &local_3188;
  local_3890[2] = 0x10;
  local_37b0 = TAttribute<TOptional<int>_>::TAttribute<TOptional<int>_><int>
                         (local_37b8,local_3890 + 2);
  local_37a0 = SSpinBox<int>::FArguments::MaxValue(local_37a8,local_37b0);
  local_3540 = OnNumGradientStopsChanged;
  local_3538 = 0;
  ppcVar10 = &local_3540;
  puVar11 = local_3448;
  for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar11 = *(undefined1 *)ppcVar10;
    ppcVar10 = (code **)((longlong)ppcVar10 + 1);
    puVar11 = puVar11 + 1;
  }
  puVar11 = local_3448;
  ppVar13 = &local_3438;
  for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
    *(undefined1 *)ppVar13 = *puVar11;
    puVar11 = puVar11 + 1;
    ppVar13 = (pmf_d17e78b6 *)&ppVar13->field_0x1;
  }
  local_3798 = SSpinBox<int>::FArguments::OnValueChanged<SSplineTest>(local_37a0,this,&local_3438);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_38a7);
  this_02 = MakeTDecl<SSpinBox<int>,RequiredArgs::T0RequiredArgs>
                      (&local_3290,"SSpinBox<int32>",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0x2ab,&local_38a7);
  pTVar2 = TSlateDecl<SSpinBox<int>,RequiredArgs::T0RequiredArgs>::operator<<=
                     (this_02,&local_3358,local_3798);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SSpinBox<int>_>(&local_34b0,pTVar2);
  local_3788 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_3790,&local_34b0);
  local_3728 = SHorizontalBox::FArguments::operator+(local_3780,local_3788);
  local_3738 = SHorizontalBox::Slot(&local_2d00);
  local_3768 = SButton::FArguments::FArguments(&local_1358);
  local_3778 = &local_3160;
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     (&local_3368,L"STestSuite",L"HorizontalHermite",L"Horizontal");
  local_3770 = TAttribute<FText>::TAttribute<FText>(local_3778,pFVar3);
  local_3748 = SButton::FArguments::Text(local_3768,local_3770);
  local_3758 = &local_3760;
  local_3760.__this = this;
  local_3750 = local_3758;
  local_3740 = SButton::FArguments::OnClicked_Lambda<_SSplineTest::Construct_::__l2::<lambda_1>_>
                         (local_3748,local_3758);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_38a6);
  pTVar4 = MakeTDecl<SButton,RequiredArgs::T0RequiredArgs>
                     (&local_32a8,"SButton",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x2b2,&local_38a6);
  pTVar5 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar4,&local_3378,local_3740);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SButton>(&local_34c0,pTVar5);
  local_3730 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_3738,&local_34c0);
  local_36d0 = SHorizontalBox::FArguments::operator+(local_3728,local_3730);
  local_36e0 = SHorizontalBox::Slot(&local_2de8);
  local_3710 = SButton::FArguments::FArguments(&local_1898);
  local_3720 = &local_3130;
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     (&local_3388,L"STestSuite",L"VerticalHermite",L"Vertical");
  local_3718 = TAttribute<FText>::TAttribute<FText>(local_3720,pFVar3);
  local_36f0 = SButton::FArguments::Text(local_3710,local_3718);
  local_3700 = &local_3708;
  local_3708.__this = this;
  local_36f8 = local_3700;
  local_36e8 = SButton::FArguments::OnClicked_Lambda<_SSplineTest::Construct_::__l2::<lambda_2>_>
                         (local_36f0,local_3700);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_38a5);
  pTVar4 = MakeTDecl<SButton,RequiredArgs::T0RequiredArgs>
                     (&local_32c0,"SButton",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,700,&local_38a5);
  pTVar5 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar4,&local_3398,local_36e8);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SButton>(&local_34d0,pTVar5);
  local_36d8 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_36e0,&local_34d0);
  local_3678 = SHorizontalBox::FArguments::operator+(local_36d0,local_36d8);
  local_3688 = SHorizontalBox::Slot(&local_2ed0);
  local_36b8 = SButton::FArguments::FArguments(&local_1dd8);
  local_36c8 = &local_3100;
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     (&local_33a8,L"STestSuite",L"HorizontalBendy",L"Bendy");
  local_36c0 = TAttribute<FText>::TAttribute<FText>(local_36c8,pFVar3);
  local_3698 = SButton::FArguments::Text(local_36b8,local_36c0);
  local_36a8 = &local_36b0;
  local_36b0.__this = this;
  local_36a0 = local_36a8;
  local_3690 = SButton::FArguments::OnClicked_Lambda<_SSplineTest::Construct_::__l2::<lambda_3>_>
                         (local_3698,local_36a8);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_38a4);
  pTVar4 = MakeTDecl<SButton,RequiredArgs::T0RequiredArgs>
                     (&local_32d8,"SButton",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x2c6,&local_38a4);
  pTVar5 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar4,&local_33b8,local_3690);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SButton>(&local_34e0,pTVar5);
  local_3680 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_3688,&local_34e0);
  local_3620 = SHorizontalBox::FArguments::operator+(local_3678,local_3680);
  local_3630 = SHorizontalBox::Slot(&local_2fb8);
  local_3660 = SButton::FArguments::FArguments(&local_2318);
  local_3670 = &local_30d0;
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     (&local_33c8,L"STestSuite",L"HorizontalDoubleBendy",L"DoubleBendy");
  local_3668 = TAttribute<FText>::TAttribute<FText>(local_3670,pFVar3);
  local_3640 = SButton::FArguments::Text(local_3660,local_3668);
  local_3650 = &local_3658;
  local_3658.__this = this;
  local_3648 = local_3650;
  local_3638 = SButton::FArguments::OnClicked_Lambda<_SSplineTest::Construct_::__l2::<lambda_4>_>
                         (local_3640,local_3650);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_38a3);
  pTVar4 = MakeTDecl<SButton,RequiredArgs::T0RequiredArgs>
                     (&local_32f0,"SButton",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x2d0,&local_38a3);
  pTVar5 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar4,&local_33d8,local_3638);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SButton>(&local_34f0,pTVar5);
  local_3628 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_3630,&local_34f0);
  local_3618 = SHorizontalBox::FArguments::operator+(local_3620,local_3628);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_38a2);
  this_03 = MakeTDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
                      (&local_3308,"SHorizontalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0x29e,&local_38a2);
  pTVar6 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                     (this_03,&local_33e8,local_3618);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SHorizontalBox>(&local_3500,pTVar6);
  local_3608 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_3610,&local_3500);
  local_3578 = SVerticalBox::FArguments::operator+(local_3600,local_3608);
  local_35e8 = SVerticalBox::Slot(&local_30a0);
  local_35f8 = &local_3220;
  local_3890[3] = 1;
  local_35f0 = TAttribute<float>::TAttribute<float><int>(local_35f8,local_3890 + 3);
  local_3588 = SVerticalBox::FSlot::FSlotArguments::FillHeight(local_35e8,local_35f0);
  local_3880 = SSplineWithHandles::FArguments::FArguments(&local_2550);
  local_35e0 = (param_1->_P0).field0_0x0;
  (local_3880->_P0).field0_0x0 = local_35e0;
  local_3878 = TSlateBaseNamedArgs<SSplineWithHandles>::Me
                         ((TSlateBaseNamedArgs<SSplineWithHandles> *)local_3880);
  local_35d0 = (param_1->_P1).field0_0x0;
  (local_3878->_P1).field0_0x0 = local_35d0;
  local_35d8 = local_3878;
  local_3870 = TSlateBaseNamedArgs<SSplineWithHandles>::Me
                         ((TSlateBaseNamedArgs<SSplineWithHandles> *)local_3878);
  local_35c0 = (param_1->_P2).field0_0x0;
  (local_3870->_P2).field0_0x0 = local_35c0;
  local_35c8 = local_3870;
  local_3868 = TSlateBaseNamedArgs<SSplineWithHandles>::Me
                         ((TSlateBaseNamedArgs<SSplineWithHandles> *)local_3870);
  local_35b0 = (param_1->_P3).field0_0x0;
  (local_3868->_P3).field0_0x0 = local_35b0;
  local_35b8 = local_3868;
  local_35a8 = TSlateBaseNamedArgs<SSplineWithHandles>::Me
                         ((TSlateBaseNamedArgs<SSplineWithHandles> *)local_3868);
  local_3530 = GetSplineThickness;
  local_3528 = 0;
  ppcVar10 = &local_3530;
  puVar11 = local_3428;
  for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar11 = *(undefined1 *)ppcVar10;
    ppcVar10 = (code **)((longlong)ppcVar10 + 1);
    puVar11 = puVar11 + 1;
  }
  puVar11 = local_3428;
  ppVar14 = &local_3418;
  for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
    *(undefined1 *)ppVar14 = *puVar11;
    puVar11 = puVar11 + 1;
    ppVar14 = (pmf_8517c7ef *)&ppVar14->field_0x1;
  }
  local_35a0 = local_35a8;
  local_3590 = SSplineWithHandles::FArguments::SplineThickness<SSplineTest>
                         (local_35a8,this,&local_3418);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_38a1);
  local_3598 = MakeTDecl<SSplineWithHandles,RequiredArgs::T0RequiredArgs>
                         (&local_3320,"SSplineWithHandles",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                          ,0x2dd,&local_38a1);
  this_04 = TSlateDecl<SSplineWithHandles,RequiredArgs::T0RequiredArgs>::Expose<SSplineWithHandles>
                      (local_3598,&this->SplineWidget);
  pTVar7 = TSlateDecl<SSplineWithHandles,RequiredArgs::T0RequiredArgs>::operator<<=
                     (this_04,&local_33f8,local_3590);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SSplineWithHandles>(&local_3510,pTVar7);
  local_3580 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_3588,&local_3510);
  local_3570 = SVerticalBox::FArguments::operator+(local_3578,local_3580);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(local_38a0);
  this_05 = MakeTDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
                      (&local_3338,"SVerticalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0x29a,local_38a0);
  pTVar8 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                     (this_05,&local_3408,local_3570);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SVerticalBox>(&local_3520,pTVar8);
  TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>::operator[]
            (local_3568,&local_3520);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_3520);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_3408.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_3338._Widget.SharedReferenceCount);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_3510);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_33f8.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_3320._Widget.SharedReferenceCount);
  TAttribute<float>::~TAttribute<float>(&local_2550._SplineThickness);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_2550);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_30a0);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_3500);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_33e8.SharedReferenceCount);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>(&local_3308);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_34f0);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_33d8.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_32f0._Widget.SharedReferenceCount);
  FText::~FText(&local_33c8);
  SButton::FArguments::~FArguments(&local_2318);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_2fb8);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_34e0);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_33b8.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_32d8._Widget.SharedReferenceCount);
  FText::~FText(&local_33a8);
  SButton::FArguments::~FArguments(&local_1dd8);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_2ed0);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_34d0);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_3398.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_32c0._Widget.SharedReferenceCount);
  FText::~FText(&local_3388);
  SButton::FArguments::~FArguments(&local_1898);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_2de8);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_34c0);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_3378.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_32a8._Widget.SharedReferenceCount);
  FText::~FText(&local_3368);
  SButton::FArguments::~FArguments(&local_1358);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_2d00);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_34b0);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_3358.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_3290._Widget.SharedReferenceCount);
  SSpinBox<int>::FArguments::~FArguments(&local_e18);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_2c18);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_34a0);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_3348.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_3278._Widget.SharedReferenceCount);
  SSpinBox<float>::FArguments::~FArguments(&local_718);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_2b30);
  TArray<SHorizontalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>::
  ~TArray<SHorizontalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>(&local_2960._Slots);
  TSlateBaseNamedArgs<SHorizontalBox>::~TSlateBaseNamedArgs<SHorizontalBox>
            ((TSlateBaseNamedArgs<SHorizontalBox> *)&local_2960);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_2a48);
  TArray<SVerticalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>::
  ~TArray<SVerticalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>(&local_2758._Slots);
  TSlateBaseNamedArgs<SVerticalBox>::~TSlateBaseNamedArgs<SVerticalBox>
            ((TSlateBaseNamedArgs<SVerticalBox> *)&local_2758);
  return;
}

// GetSplineThickness @ 1430cdad0

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall SSplineTest::GetSplineThickness(SSplineTest *this)

{
  return this->SplineThickness;
}

// OnNumGradientStopsChanged @ 1430e0290

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SSplineTest::OnNumGradientStopsChanged(SSplineTest *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  FLinearColor *pFVar4;
  undefined1 *puVar5;
  FSlateGradientStop *pFVar6;
  TArray<FSlateGradientStop,TSizedDefaultAllocator<32>_> local_168;
  uint local_158;
  int local_150;
  int local_148;
  int local_144;
  FSlateGradientStop *local_140;
  int local_138;
  float local_130;
  TVector2<float>_u_0 local_128;
  FLinearColor *local_120;
  TVector2<float>_u_0 *local_118;
  TVector2<float>_u_0 *local_110;
  FSlateGradientStop *local_108;
  FSlateGradientStop *local_100;
  FSlateGradientStop *local_f8;
  FSlateGradientStop *local_f0;
  FSlateGradientStop *local_e8;
  FSlateGradientStop *local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  FSlateGradientStop *local_d0;
  FSlateGradientStop *local_c8;
  FSlateGradientStop *local_c0;
  longlong local_b8;
  longlong local_b0;
  FSlateGradientStop *local_a8;
  FSlateGradientStop *local_a0;
  FScriptContainerElement *local_98;
  undefined1 *local_90;
  SSplineWithHandles *local_88;
  int local_80;
  FLinearColor local_78;
  FLinearColor local_68;
  undefined1 local_58 [16];
  FLinearColor local_48;
  FSlateGradientStop local_38;
  
  FLinearColor::MakeRandomColor(&local_78);
  FLinearColor::MakeRandomColor(&local_68);
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&local_168.AllocatorInstance);
  local_168.ArrayNum = 0;
  local_168.ArrayMax =
       TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                 (&local_168.AllocatorInstance);
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
  }
  if (local_168.ArrayMax < param_1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,param_1,&local_168.AllocatorInstance,local_168.ArrayNum,&local_168.ArrayMax);
  }
  local_158 = 0;
  do {
    if (param_1 <= (int)local_158) {
      local_88 = TSharedPtr<SSplineWithHandles,1>::operator->(&this->SplineWidget);
      TArray<FSlateGradientStop,TSizedDefaultAllocator<32>_>::operator=
                (&local_88->GradientStops,&local_168);
      TArray<FSlateGradientStop,TSizedDefaultAllocator<32>_>::
      ~TArray<FSlateGradientStop,TSizedDefaultAllocator<32>_>(&local_168);
      return;
    }
    if ((local_158 & 1 ^ (int)local_158 >> 0x1f) == (int)local_158 >> 0x1f) {
      local_120 = &local_78;
    }
    else {
      local_120 = &local_68;
    }
    pFVar4 = local_120;
    puVar5 = local_58;
    for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar5 = *(undefined1 *)&pFVar4->field0_0x0;
      pFVar4 = (FLinearColor *)((longlong)&pFVar4->field0_0x0 + 1);
      puVar5 = puVar5 + 1;
    }
    local_150 = param_1 + -1;
    local_148 = local_150;
    if (local_150 < 1) {
      local_148 = 1;
    }
    local_138 = local_148;
    local_130 = (float)(int)local_158 / (float)local_148;
    local_128._s_0.Y = 0.0;
    local_118 = &local_128;
    puVar5 = local_58;
    pFVar4 = &local_48;
    for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
      *(undefined1 *)&pFVar4->field0_0x0 = *puVar5;
      puVar5 = puVar5 + 1;
      pFVar4 = (FLinearColor *)((longlong)&pFVar4->field0_0x0 + 1);
    }
    local_128._s_0.X = local_130;
    local_110 = local_118;
    local_140 = FSlateGradientStop::FSlateGradientStop<UE::Math::TVector2<float>_>
                          (&local_38,(TVector2<float> *)&local_118->_s_0,&local_48);
    local_108 = (FSlateGradientStop *)local_168.AllocatorInstance.Data;
    local_100 = (FSlateGradientStop *)local_168.AllocatorInstance.Data;
    local_f8 = (FSlateGradientStop *)local_168.AllocatorInstance.Data;
    if (local_168.AllocatorInstance.Data <= local_140) {
      local_f0 = (FSlateGradientStop *)local_168.AllocatorInstance.Data;
      local_e8 = (FSlateGradientStop *)local_168.AllocatorInstance.Data;
      local_e0 = (FSlateGradientStop *)local_168.AllocatorInstance.Data;
      if (local_140 <
          (FSlateGradientStop *)
          (local_168.AllocatorInstance.Data + (longlong)local_168.ArrayMax * 0x18)) {
        local_d8 = 0;
        local_d4 = 0;
        UE::Core::Private::FormatStringSan::
        AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
        local_b8 = (longlong)local_168.ArrayNum;
        local_b0 = (longlong)local_168.ArrayMax;
        local_d0 = (FSlateGradientStop *)local_168.AllocatorInstance.Data;
        local_c8 = (FSlateGradientStop *)local_168.AllocatorInstance.Data;
        local_c0 = (FSlateGradientStop *)local_168.AllocatorInstance.Data;
        local_a8 = (FSlateGradientStop *)local_168.AllocatorInstance.Data;
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
    }
    if (local_168.ArrayNum == local_168.ArrayMax) {
      local_168.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x418,&local_168.AllocatorInstance,&local_168.ArrayMax);
    }
    local_144 = local_168.ArrayNum;
    local_a0 = (FSlateGradientStop *)local_168.AllocatorInstance.Data;
    local_98 = local_168.AllocatorInstance.Data + (longlong)local_168.ArrayNum * 0x18;
    local_168.ArrayNum = local_168.ArrayNum + 1;
    local_90 = ::operator_new(0x18,local_98);
    pFVar6 = local_140;
    puVar5 = local_90;
    for (lVar3 = 0x18; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar5 = *(undefined1 *)&(pFVar6->Position).field0_0x0;
      pFVar6 = (FSlateGradientStop *)((longlong)&(pFVar6->Position).field0_0x0 + 1);
      puVar5 = puVar5 + 1;
    }
    local_80 = local_144;
    local_158 = local_158 + 1;
  } while( true );
}

// OnSplineThicknessChanged @ 1430e2610

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SSplineTest::OnSplineThicknessChanged(SSplineTest *this,float param_1)

{
  this->SplineThickness = param_1;
  return;
}

