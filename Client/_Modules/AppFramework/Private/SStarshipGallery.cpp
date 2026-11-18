// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 49

// <lambda_10> @ 142f2a960

<lambda_10> * __thiscall
`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_10>::<lambda_10>
          (void *this,SStarshipGallery *param_1)

{
  *(SStarshipGallery **)this = param_1;
  return this;
}

// <lambda_11> @ 142f2a990

<lambda_11> * __thiscall
`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_11>::<lambda_11>
          (void *this,SStarshipGallery *param_1)

{
  *(SStarshipGallery **)this = param_1;
  return this;
}

// <lambda_12> @ 142f2a9c0

<lambda_12> * __thiscall
`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_12>::<lambda_12>
          (void *this,SStarshipGallery *param_1)

{
  *(SStarshipGallery **)this = param_1;
  return this;
}

// <lambda_13> @ 142f2a9f0

<lambda_13> * __thiscall
`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_13>::<lambda_13>
          (void *this,SStarshipGallery *param_1)

{
  *(SStarshipGallery **)this = param_1;
  return this;
}

// <lambda_14> @ 142f2aa20

<lambda_14> * __thiscall
`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_14>::<lambda_14>
          (void *this,SStarshipGallery *param_1)

{
  *(SStarshipGallery **)this = param_1;
  return this;
}

// <lambda_16> @ 142f2aa50

<lambda_16> * __thiscall
`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_16>::<lambda_16>
          (void *this,SStarshipGallery *param_1)

{
  *(SStarshipGallery **)this = param_1;
  return this;
}

// <lambda_3> @ 142f2aae0

<lambda_3> * __thiscall
`SStarshipGallery::ConstructWidgetGallery'::__l4::<lambda_3>::<lambda_3>
          (void *this,SStarshipGallery *param_1,int *param_2)

{
  *(SStarshipGallery **)this = param_1;
  *(int *)((longlong)this + 8) = *param_2;
  return this;
}

// <lambda_4> @ 142f2ab20

<lambda_4> * __thiscall
`SStarshipGallery::ConstructWidgetGallery'::__l4::<lambda_4>::<lambda_4>
          (void *this,SStarshipGallery *param_1,int *param_2)

{
  *(SStarshipGallery **)this = param_1;
  *(int *)((longlong)this + 8) = *param_2;
  return this;
}

// <lambda_5> @ 142f2ab60

<lambda_5> * __thiscall
`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_5>::<lambda_5>
          (void *this,SStarshipGallery *param_1)

{
  *(SStarshipGallery **)this = param_1;
  return this;
}

// <lambda_8> @ 142f2ab90

<lambda_8> * __thiscall
`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_8>::<lambda_8>
          (void *this,SStarshipGallery *param_1)

{
  *(SStarshipGallery **)this = param_1;
  return this;
}

// <lambda_9> @ 142f2abc0

<lambda_9> * __thiscall
`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_9>::<lambda_9>
          (void *this,SStarshipGallery *param_1)

{
  *(SStarshipGallery **)this = param_1;
  return this;
}

// ~SStarshipGallery @ 142f3fdb0

void __thiscall SStarshipGallery::~SStarshipGallery(SStarshipGallery *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TSharedPtr<enum_EHorizontalAlignment,1>,int>
            ((TSharedPtr<EHorizontalAlignment,1> *)
             (this->HorizontalAlignmentComboItems).AllocatorInstance.Data,
             (this->HorizontalAlignmentComboItems).ArrayNum);
  pFVar1 = (this->HorizontalAlignmentComboItems).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ComboBoxTitleBlock).SharedReferenceCount.ReferenceController);
  DestructItems<TSharedPtr<FString,1>,int>
            ((TSharedPtr<FString,1> *)(this->ComboItems).AllocatorInstance.Data,
             (this->ComboItems).ArrayNum);
  pFVar1 = (this->ComboItems).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TUniquePtr<FSlateBrush,TDefaultDelete<FSlateBrush>_>,int>
            ((TUniquePtr<FSlateBrush,TDefaultDelete<FSlateBrush>_> *)
             (this->DynamicBrushes).AllocatorInstance.Data,(this->DynamicBrushes).ArrayNum);
  pFVar1 = (this->DynamicBrushes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TSharedPtr<SSearchBox,1>::~TSharedPtr<SSearchBox,1>(&this->IconSearchBox);
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  return;
}

// operator() @ 142f428c0

void __thiscall
`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_10>::operator()
          (void *this,float param_1,Type param_2)

{
  *(float *)(*(longlong *)this + 0x2e0) = param_1;
  return;
}

// operator() @ 142f428f0

TOptional<float> __thiscall
`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_11>::operator()(void *this)

{
  TOptional<float> in_RDX;
  
  TOptional<float>::TOptional<float>
            ((TOptional<float> *)in_RDX,(float *)(*(longlong *)this + 0x2e0));
  return in_RDX;
}

// operator() @ 142f42930

void __thiscall
`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_12>::operator()(void *this,float param_1)

{
  *(float *)(*(longlong *)this + 0x2e0) = param_1;
  return;
}

// operator() @ 142f42960

void __thiscall
`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_13>::operator()
          (void *this,float param_1,Type param_2)

{
  *(float *)(*(longlong *)this + 0x2e0) = param_1;
  return;
}

// operator() @ 142f42990

TOptional<float> __thiscall
`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_14>::operator()(void *this)

{
  TOptional<float> in_RDX;
  
  TOptional<float>::TOptional<float>
            ((TOptional<float> *)in_RDX,(float *)(*(longlong *)this + 0x2e0));
  return in_RDX;
}

// operator() @ 142f429d0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_15>::operator()
          (void *this,FReply *__return_storage_ptr__)

{
  FSlateApplication *pFVar1;
  TSharedPtr<SWindow,1> *this_00;
  SWindow *this_01;
  TSharedPtr<SWindow,1> local_18;
  
  pFVar1 = FSlateApplication::Get();
  this_00 = (TSharedPtr<SWindow,1> *)(**(code **)(*(longlong *)pFVar1 + 0x30))(pFVar1,&local_18);
  this_01 = TSharedPtr<SWindow,1>::operator->(this_00);
  SWindow::FlashWindow(this_01);
  TSharedPtr<SWindow,1>::~TSharedPtr<SWindow,1>(&local_18);
  FReply::Handled(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// operator() @ 142f42a40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Removing unreachable block (ram,0x000142f44708) */
/* WARNING: Removing unreachable block (ram,0x000142f44489) */
/* WARNING: Removing unreachable block (ram,0x000142f440c2) */
/* WARNING: Removing unreachable block (ram,0x000142f43e46) */
/* WARNING: Removing unreachable block (ram,0x000142f43a70) */
/* WARNING: Removing unreachable block (ram,0x000142f43803) */
/* WARNING: Removing unreachable block (ram,0x000142f4342d) */
/* WARNING: Removing unreachable block (ram,0x000142f431ae) */
/* WARNING: Removing unreachable block (ram,0x000142f42d6a) */
/* WARNING: Removing unreachable block (ram,0x000142f42adf) */
/* WARNING: Removing unreachable block (ram,0x000142f42c57) */
/* WARNING: Removing unreachable block (ram,0x000142f43047) */
/* WARNING: Removing unreachable block (ram,0x000142f432e3) */
/* WARNING: Removing unreachable block (ram,0x000142f43522) */
/* WARNING: Removing unreachable block (ram,0x000142f43935) */
/* WARNING: Removing unreachable block (ram,0x000142f43b65) */
/* WARNING: Removing unreachable block (ram,0x000142f43f7b) */
/* WARNING: Removing unreachable block (ram,0x000142f441a8) */
/* WARNING: Removing unreachable block (ram,0x000142f445be) */
/* WARNING: Removing unreachable block (ram,0x000142f447fd) */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_16>::operator()
          (void *this,FMenuBuilder *param_1)

{
  uint uVar1;
  FText *pFVar2;
  FName *pFVar3;
  longlong lVar4;
  code **ppcVar5;
  pmf_ca8eb57b *ppVar6;
  FNameEntryId local_1018 [2];
  FNameEntryId local_1010 [2];
  FNameEntryId local_1008 [2];
  FNameEntryId local_1000;
  FNameEntryId local_ffc [2];
  FNameEntryId local_ff4 [2];
  FNameEntryId local_fec [2];
  FNameEntryId local_fe4 [2];
  FNameEntryId local_fdc [2];
  FNameEntryId local_fd4 [2];
  FNameEntryId local_fcc [2];
  FNameEntryId local_fc4 [2];
  FNameEntryId local_fbc [2];
  FNameEntryId local_fb4 [2];
  FNameEntryId local_fac [2];
  FNameEntryId local_fa4 [2];
  FNameEntryId local_f9c [2];
  FNameEntryId local_f94 [2];
  FNameEntryId local_f8c [2];
  FNameEntryId local_f84 [3];
  FNameEntryId *local_f78;
  FNameEntryId *local_f70;
  FName local_f68;
  TAttribute<FMenuEntryResizeParams> *local_f60;
  TAttribute<EVisibility> *local_f58;
  FName local_f50;
  SStarshipGallery *local_f48;
  FNameEntryId *local_f40;
  FNameEntryId *local_f38;
  FName local_f30;
  FName local_f28;
  FName local_f20;
  FName local_f18;
  FName local_f10;
  FNameEntryId *local_f08;
  FNameEntryId *local_f00;
  FName local_ef8;
  FName local_ef0;
  FName local_ee8;
  FName local_ee0;
  FName local_ed8;
  TAttribute<EVisibility> *local_ed0;
  FName local_ec8;
  FName local_ec0;
  FSlateIcon *local_eb8;
  TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy> *local_eb0;
  FNameEntryId *local_ea8;
  FNameEntryId *local_ea0;
  FName local_e98;
  TAttribute<FMenuEntryResizeParams> *local_e90;
  TAttribute<EVisibility> *local_e88;
  FName local_e80;
  FNameEntryId *local_e78;
  FNameEntryId *local_e70;
  FName local_e68;
  FName local_e60;
  FName local_e58;
  FName local_e50;
  FName local_e48;
  FName local_e40;
  FNameEntryId *local_e38;
  FNameEntryId *local_e30;
  FName local_e28;
  FName local_e20;
  FName local_e18;
  FName local_e10;
  FName local_e08;
  FName local_e00;
  FNameEntryId *local_df8;
  FNameEntryId *local_df0;
  FName local_de8;
  FName local_de0;
  FNameEntryId *local_dd8;
  FNameEntryId *local_dd0;
  FName local_dc8;
  FName local_dc0;
  FName *local_db8;
  FName local_db0;
  FName local_da8;
  FName local_da0;
  FName local_d98;
  FName local_d90;
  FName local_d88;
  FName local_d80;
  FName local_d78;
  TAttribute<EVisibility> *local_d70;
  TAttribute<FText> *local_d68;
  FName local_d60;
  FName local_d58;
  FUIAction *local_d50;
  FSlateIcon *local_d48;
  FNameEntryId *local_d40;
  FNameEntryId *local_d38;
  FName local_d30;
  FName local_d28;
  FName local_d20;
  FName local_d18;
  FName local_d10;
  FName local_d08;
  FNameEntryId *local_d00;
  FNameEntryId *local_cf8;
  FName local_cf0;
  FName local_ce8;
  FName local_ce0;
  FName local_cd8;
  FName local_cd0;
  FName local_cc8;
  FNameEntryId *local_cc0;
  FNameEntryId *local_cb8;
  FName local_cb0;
  FName local_ca8;
  FNameEntryId *local_ca0;
  FNameEntryId *local_c98;
  FName local_c90;
  FName local_c88;
  FName *local_c80;
  FName local_c78;
  FName local_c70;
  FName local_c68;
  FName local_c60;
  FName local_c58;
  FName local_c50;
  FName local_c48;
  FName local_c40;
  TAttribute<EVisibility> *local_c38;
  TAttribute<FText> *local_c30;
  FName local_c28;
  FName local_c20;
  FUIAction *local_c18;
  FSlateIcon *local_c10;
  FNameEntryId *local_c08;
  FNameEntryId *local_c00;
  FName local_bf8;
  FName local_bf0;
  FName local_be8;
  FName local_be0;
  FName local_bd8;
  FName local_bd0;
  FNameEntryId *local_bc8;
  FNameEntryId *local_bc0;
  FName local_bb8;
  FName local_bb0;
  FName local_ba8;
  FName local_ba0;
  FName local_b98;
  FName local_b90;
  FNameEntryId *local_b88;
  FNameEntryId *local_b80;
  FName local_b78;
  FName local_b70;
  FNameEntryId *local_b68;
  FNameEntryId *local_b60;
  FName local_b58;
  FName local_b50;
  FName *local_b48;
  FName local_b40;
  FName local_b38;
  FName local_b30;
  FName local_b28;
  FName local_b20;
  FName local_b18;
  FName local_b10;
  FName local_b08;
  TAttribute<EVisibility> *local_b00;
  TAttribute<FText> *local_af8;
  FName local_af0;
  FName local_ae8;
  FUIAction *local_ae0;
  FSlateIcon *local_ad8;
  FNameEntryId *local_ad0;
  FNameEntryId *local_ac8;
  FName local_ac0;
  FName local_ab8;
  FName local_ab0;
  FName local_aa8;
  FName local_aa0;
  FName local_a98;
  FNameEntryId *local_a90;
  FNameEntryId *local_a88;
  FName local_a80;
  FName local_a78;
  FName local_a70;
  FName local_a68;
  FName local_a60;
  FName local_a58;
  FNameEntryId *local_a50;
  FNameEntryId *local_a48;
  FName local_a40;
  FName local_a38;
  FNameEntryId *local_a30;
  FNameEntryId *local_a28;
  FName local_a20;
  FName local_a18;
  FName *local_a10;
  FName local_a08;
  FName local_a00;
  FName local_9f8;
  FName local_9f0;
  FName local_9e8;
  FName local_9e0;
  FName local_9d8;
  FName local_9d0;
  TAttribute<EVisibility> *local_9c8;
  TAttribute<FText> *local_9c0;
  FName local_9b8;
  FName local_9b0;
  FUIAction *local_9a8;
  FSlateIcon *local_9a0;
  code *local_998;
  undefined4 local_990;
  FNameEntryId local_988;
  undefined4 uStack_984;
  FNameEntryId local_980;
  undefined4 uStack_97c;
  FNameEntryId local_978;
  undefined4 uStack_974;
  FNameEntryId local_970;
  undefined4 uStack_96c;
  FNameEntryId local_968;
  undefined4 uStack_964;
  FNameEntryId local_960;
  undefined4 uStack_95c;
  FNameEntryId local_958;
  undefined4 uStack_954;
  FNameEntryId local_950;
  undefined4 uStack_94c;
  FName local_948 [2];
  FNameEntryId local_938;
  undefined4 uStack_934;
  FNameEntryId local_930;
  undefined4 uStack_92c;
  FNameEntryId local_928;
  undefined4 uStack_924;
  FNameEntryId local_920;
  undefined4 uStack_91c;
  FName local_918 [2];
  FNameEntryId local_908;
  undefined4 uStack_904;
  FNameEntryId local_900;
  undefined4 uStack_8fc;
  FNameEntryId local_8f8;
  undefined4 uStack_8f4;
  FNameEntryId local_8f0;
  undefined4 uStack_8ec;
  FName local_8e8 [2];
  FNameEntryId local_8d8;
  undefined4 uStack_8d4;
  FNameEntryId local_8d0;
  undefined4 uStack_8cc;
  FNameEntryId local_8c8;
  undefined4 uStack_8c4;
  FNameEntryId local_8c0;
  undefined4 uStack_8bc;
  FName local_8b8 [2];
  FText local_8a8;
  pmf_ca8eb57b local_898;
  FText local_888;
  FText local_878;
  FText local_868;
  FText local_858;
  FText local_848;
  FText local_838;
  TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy> local_828;
  TAttribute<EVisibility> local_810;
  TAttribute<EVisibility> local_7f0;
  TAttribute<EVisibility> local_7d0;
  TAttribute<EVisibility> local_7b0;
  TAttribute<EVisibility> local_790;
  TAttribute<EVisibility> local_770;
  TAttribute<EVisibility> local_750;
  TAttribute<FText> local_730;
  TAttribute<FText> local_700;
  TAttribute<FText> local_6d0;
  TAttribute<FText> local_6a0;
  TAttribute<FText> local_670;
  TAttribute<FText> local_640;
  TAttribute<FText> local_610;
  TAttribute<FText> local_5e0;
  TAttribute<FText> local_5b0;
  TAttribute<FText> local_580;
  TAttribute<FText> local_550;
  TAttribute<FText> local_520;
  TAttribute<FText> local_4f0;
  TAttribute<FText> local_4c0;
  TAttribute<FText> local_490;
  TAttribute<FText> local_460;
  FSlateIcon local_430;
  FSlateIcon local_410;
  FSlateIcon local_3f0;
  FSlateIcon local_3d0;
  FSlateIcon local_3b0;
  FUIAction local_390;
  FUIAction local_328;
  FUIAction local_2c0;
  FUIAction local_258;
  TAttribute<FMenuEntryResizeParams> local_1f0;
  TAttribute<FMenuEntryResizeParams> local_108;
  undefined8 uStack_18;
  
  uStack_18 = 0x142f42a56;
  local_f60 = TAttribute<FMenuEntryResizeParams>::TAttribute<FMenuEntryResizeParams>(&local_1f0);
  local_f58 = TAttribute<EVisibility>::TAttribute<EVisibility>(&local_810);
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_8a8,L"StarshipGallery",L"MenuHeader1",L"Menu Header 1");
  TAttribute<FText>::TAttribute<FText>(&local_640,pFVar2);
  local_f78 = FNameEntryId::FNameEntryId(local_1018);
  uVar1 = local_f78->Value;
  FNameEntryId::FNameEntryId(&local_988);
  uStack_984 = 0;
  local_f68.Number = 0;
  local_f68.ComparisonIndex.Value = uVar1;
  local_f70 = &local_988;
  local_f50 = local_f68;
  local_988.Value = uVar1;
  FMenuBuilder::BeginSection(param_1,local_f68,&local_640,local_f58,local_f60);
  TAttribute<FText>::~TAttribute<FText>(&local_640);
  FText::~FText(&local_8a8);
  TAttribute<EVisibility>::~TAttribute<EVisibility>(&local_810);
  TAttribute<FMenuEntryResizeParams>::~TAttribute<FMenuEntryResizeParams>(&local_1f0);
  local_f48 = *(SStarshipGallery **)this;
  SStarshipGallery::MakeMenuEntries(local_f48,param_1);
  local_ed0 = TAttribute<EVisibility>::TAttribute<EVisibility>(&local_7f0);
  local_f40 = FNameEntryId::FNameEntryId(local_1010);
  uVar1 = local_f40->Value;
  FNameEntryId::FNameEntryId(&local_980);
  uStack_97c = 0;
  local_f30.Number = 0;
  local_f30.ComparisonIndex.Value = uVar1;
  local_f38 = &local_980;
  local_f28 = local_f30;
  local_f20 = local_f30;
  local_f18 = local_f30;
  local_f10 = local_f30;
  local_ec8 = local_f30;
  local_980.Value = uVar1;
  local_f08 = FNameEntryId::FNameEntryId(local_1008);
  uVar1 = local_f08->Value;
  FNameEntryId::FNameEntryId(&local_978);
  uStack_974 = 0;
  local_ef8.Number = 0;
  local_ef8.ComparisonIndex.Value = uVar1;
  local_f00 = &local_978;
  local_ef0 = local_ef8;
  local_ee8 = local_ef8;
  local_ee0 = local_ef8;
  local_ed8 = local_ef8;
  local_ec0 = local_ef8;
  local_978.Value = uVar1;
  local_eb8 = FSlateIcon::FSlateIcon(&local_430);
  local_998 = SStarshipGallery::MakeMenuEntries;
  local_990 = 0;
  ppcVar5 = &local_998;
  ppVar6 = &local_898;
  for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
    *(undefined1 *)ppVar6 = *(undefined1 *)ppcVar5;
    ppcVar5 = (code **)((longlong)ppcVar5 + 1);
    ppVar6 = (pmf_ca8eb57b *)&ppVar6->field_0x1;
  }
  local_eb0 = TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>::
              CreateRaw<SStarshipGallery>(&local_828,*(SStarshipGallery **)this,&local_898);
  pFVar2 = FText::GetEmpty();
  TAttribute<FText>::TAttribute<FText><FText>(&local_5e0,pFVar2);
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_888,L"StarshipGallery",L"SubMenu1",L"Sub Menu 1");
  TAttribute<FText>::TAttribute<FText>(&local_610,pFVar2);
  FMenuBuilder::AddSubMenu
            (param_1,&local_610,&local_5e0,local_eb0,false,local_eb8,true,local_ec0,local_ec8,
             local_ed0);
  TAttribute<FText>::~TAttribute<FText>(&local_610);
  FText::~FText(&local_888);
  TAttribute<FText>::~TAttribute<FText>(&local_5e0);
  TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>::
  ~TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>(&local_828);
  TAttribute<EVisibility>::~TAttribute<EVisibility>(&local_7f0);
  FMenuBuilder::EndSection(param_1);
  local_e90 = TAttribute<FMenuEntryResizeParams>::TAttribute<FMenuEntryResizeParams>(&local_108);
  local_e88 = TAttribute<EVisibility>::TAttribute<EVisibility>(&local_7d0);
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_878,L"StarshipGallery",L"MenuHeader2",L"Menu Header 2");
  TAttribute<FText>::TAttribute<FText>(&local_5b0,pFVar2);
  local_ea8 = FNameEntryId::FNameEntryId(&local_1000);
  uVar1 = local_ea8->Value;
  FNameEntryId::FNameEntryId(&local_970);
  uStack_96c = 0;
  local_e98.Number = 0;
  local_e98.ComparisonIndex.Value = uVar1;
  local_ea0 = &local_970;
  local_e80 = local_e98;
  local_970.Value = uVar1;
  FMenuBuilder::BeginSection(param_1,local_e98,&local_5b0,local_e88,local_e90);
  TAttribute<FText>::~TAttribute<FText>(&local_5b0);
  FText::~FText(&local_878);
  TAttribute<EVisibility>::~TAttribute<EVisibility>(&local_7d0);
  TAttribute<FMenuEntryResizeParams>::~TAttribute<FMenuEntryResizeParams>(&local_108);
  local_d70 = TAttribute<EVisibility>::TAttribute<EVisibility>(&local_7b0);
  local_d68 = TAttribute<FText>::TAttribute<FText>(&local_4f0);
  local_e78 = FNameEntryId::FNameEntryId(local_ffc);
  uVar1 = local_e78->Value;
  FNameEntryId::FNameEntryId(&local_968);
  uStack_964 = 0;
  local_e68.Number = 0;
  local_e68.ComparisonIndex.Value = uVar1;
  local_e70 = &local_968;
  local_e60 = local_e68;
  local_e58 = local_e68;
  local_e50 = local_e68;
  local_e48 = local_e68;
  local_e40 = local_e68;
  local_d60 = local_e68;
  local_968.Value = uVar1;
  local_e38 = FNameEntryId::FNameEntryId(local_ff4);
  uVar1 = local_e38->Value;
  FNameEntryId::FNameEntryId(&local_960);
  uStack_95c = 0;
  local_e28.Number = 0;
  local_e28.ComparisonIndex.Value = uVar1;
  local_e30 = &local_960;
  local_e20 = local_e28;
  local_e18 = local_e28;
  local_e10 = local_e28;
  local_e08 = local_e28;
  local_e00 = local_e28;
  local_d58 = local_e28;
  local_960.Value = uVar1;
  local_d50 = FUIAction::FUIAction(&local_390);
  local_df8 = FNameEntryId::FNameEntryId(local_fec);
  uVar1 = local_df8->Value;
  FNameEntryId::FNameEntryId(&local_958);
  uStack_954 = 0;
  local_de8.Number = 0;
  local_de8.ComparisonIndex.Value = uVar1;
  local_df0 = &local_958;
  local_de0 = local_de8;
  local_d90 = local_de8;
  local_958.Value = uVar1;
  local_dd8 = FNameEntryId::FNameEntryId(local_fe4);
  uVar1 = local_dd8->Value;
  FNameEntryId::FNameEntryId(&local_950);
  uStack_94c = 0;
  local_dc8.Number = 0;
  local_dc8.ComparisonIndex.Value = uVar1;
  local_db8 = local_948;
  local_dd0 = &local_950;
  local_dc0 = local_dc8;
  local_d88 = local_dc8;
  local_950.Value = uVar1;
  pFVar3 = ::FName::FName(local_db8,"Icons.box-perspective");
  local_db0 = *pFVar3;
  local_da8 = local_db0;
  local_d80 = local_db0;
  local_da0 = FAppStyle::GetAppStyleSetName();
  local_da0 = *(FName *)local_da0;
  local_d98 = local_da0;
  local_d78 = local_da0;
  local_d48 = FSlateIcon::FSlateIcon(&local_410,local_da0,local_d80,local_d88,local_d90);
  pFVar2 = FText::GetEmpty();
  TAttribute<FText>::TAttribute<FText><FText>(&local_550,pFVar2);
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_868,L"StarshipGallery",L"MenuEntry5",L"Menu Entry 5");
  TAttribute<FText>::TAttribute<FText>(&local_580,pFVar2);
  FBaseMenuBuilder::AddMenuEntry
            ((FBaseMenuBuilder *)param_1,&local_580,&local_550,local_d48,local_d50,local_d58,Button,
             local_d60,local_d68,local_d70);
  TAttribute<FText>::~TAttribute<FText>(&local_580);
  FText::~FText(&local_868);
  TAttribute<FText>::~TAttribute<FText>(&local_550);
  FUIAction::~FUIAction(&local_390);
  TAttribute<FText>::~TAttribute<FText>(&local_4f0);
  TAttribute<EVisibility>::~TAttribute<EVisibility>(&local_7b0);
  local_c38 = TAttribute<EVisibility>::TAttribute<EVisibility>(&local_790);
  local_c30 = TAttribute<FText>::TAttribute<FText>(&local_4c0);
  local_d40 = FNameEntryId::FNameEntryId(local_fdc);
  uVar1 = local_d40->Value;
  FNameEntryId::FNameEntryId(&local_938);
  uStack_934 = 0;
  local_d30.Number = 0;
  local_d30.ComparisonIndex.Value = uVar1;
  local_d38 = &local_938;
  local_d28 = local_d30;
  local_d20 = local_d30;
  local_d18 = local_d30;
  local_d10 = local_d30;
  local_d08 = local_d30;
  local_c28 = local_d30;
  local_938.Value = uVar1;
  local_d00 = FNameEntryId::FNameEntryId(local_fd4);
  uVar1 = local_d00->Value;
  FNameEntryId::FNameEntryId(&local_930);
  uStack_92c = 0;
  local_cf0.Number = 0;
  local_cf0.ComparisonIndex.Value = uVar1;
  local_cf8 = &local_930;
  local_ce8 = local_cf0;
  local_ce0 = local_cf0;
  local_cd8 = local_cf0;
  local_cd0 = local_cf0;
  local_cc8 = local_cf0;
  local_c20 = local_cf0;
  local_930.Value = uVar1;
  local_c18 = FUIAction::FUIAction(&local_328);
  local_cc0 = FNameEntryId::FNameEntryId(local_fcc);
  uVar1 = local_cc0->Value;
  FNameEntryId::FNameEntryId(&local_928);
  uStack_924 = 0;
  local_cb0.Number = 0;
  local_cb0.ComparisonIndex.Value = uVar1;
  local_cb8 = &local_928;
  local_ca8 = local_cb0;
  local_c58 = local_cb0;
  local_928.Value = uVar1;
  local_ca0 = FNameEntryId::FNameEntryId(local_fc4);
  uVar1 = local_ca0->Value;
  FNameEntryId::FNameEntryId(&local_920);
  uStack_91c = 0;
  local_c90.Number = 0;
  local_c90.ComparisonIndex.Value = uVar1;
  local_c80 = local_918;
  local_c98 = &local_920;
  local_c88 = local_c90;
  local_c50 = local_c90;
  local_920.Value = uVar1;
  pFVar3 = ::FName::FName(local_c80,"Icons.box-perspective");
  local_c78 = *pFVar3;
  local_c70 = local_c78;
  local_c48 = local_c78;
  local_c68 = FAppStyle::GetAppStyleSetName();
  local_c68 = *(FName *)local_c68;
  local_c60 = local_c68;
  local_c40 = local_c68;
  local_c10 = FSlateIcon::FSlateIcon(&local_3f0,local_c68,local_c48,local_c50,local_c58);
  pFVar2 = FText::GetEmpty();
  TAttribute<FText>::TAttribute<FText><FText>(&local_730,pFVar2);
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_858,L"StarshipGallery",L"MenuEntry6",L"Menu Entry 6");
  TAttribute<FText>::TAttribute<FText>(&local_520,pFVar2);
  FBaseMenuBuilder::AddMenuEntry
            ((FBaseMenuBuilder *)param_1,&local_520,&local_730,local_c10,local_c18,local_c20,Button,
             local_c28,local_c30,local_c38);
  TAttribute<FText>::~TAttribute<FText>(&local_520);
  FText::~FText(&local_858);
  TAttribute<FText>::~TAttribute<FText>(&local_730);
  FUIAction::~FUIAction(&local_328);
  TAttribute<FText>::~TAttribute<FText>(&local_4c0);
  TAttribute<EVisibility>::~TAttribute<EVisibility>(&local_790);
  local_b00 = TAttribute<EVisibility>::TAttribute<EVisibility>(&local_770);
  local_af8 = TAttribute<FText>::TAttribute<FText>(&local_490);
  local_c08 = FNameEntryId::FNameEntryId(local_fbc);
  uVar1 = local_c08->Value;
  FNameEntryId::FNameEntryId(&local_908);
  uStack_904 = 0;
  local_bf8.Number = 0;
  local_bf8.ComparisonIndex.Value = uVar1;
  local_c00 = &local_908;
  local_bf0 = local_bf8;
  local_be8 = local_bf8;
  local_be0 = local_bf8;
  local_bd8 = local_bf8;
  local_bd0 = local_bf8;
  local_af0 = local_bf8;
  local_908.Value = uVar1;
  local_bc8 = FNameEntryId::FNameEntryId(local_fb4);
  uVar1 = local_bc8->Value;
  FNameEntryId::FNameEntryId(&local_900);
  uStack_8fc = 0;
  local_bb8.Number = 0;
  local_bb8.ComparisonIndex.Value = uVar1;
  local_bc0 = &local_900;
  local_bb0 = local_bb8;
  local_ba8 = local_bb8;
  local_ba0 = local_bb8;
  local_b98 = local_bb8;
  local_b90 = local_bb8;
  local_ae8 = local_bb8;
  local_900.Value = uVar1;
  local_ae0 = FUIAction::FUIAction(&local_2c0);
  local_b88 = FNameEntryId::FNameEntryId(local_fac);
  uVar1 = local_b88->Value;
  FNameEntryId::FNameEntryId(&local_8f8);
  uStack_8f4 = 0;
  local_b78.Number = 0;
  local_b78.ComparisonIndex.Value = uVar1;
  local_b80 = &local_8f8;
  local_b70 = local_b78;
  local_b20 = local_b78;
  local_8f8.Value = uVar1;
  local_b68 = FNameEntryId::FNameEntryId(local_fa4);
  uVar1 = local_b68->Value;
  FNameEntryId::FNameEntryId(&local_8f0);
  uStack_8ec = 0;
  local_b58.Number = 0;
  local_b58.ComparisonIndex.Value = uVar1;
  local_b48 = local_8e8;
  local_b60 = &local_8f0;
  local_b50 = local_b58;
  local_b18 = local_b58;
  local_8f0.Value = uVar1;
  pFVar3 = ::FName::FName(local_b48,"Icons.box-perspective");
  local_b40 = *pFVar3;
  local_b38 = local_b40;
  local_b10 = local_b40;
  local_b30 = FAppStyle::GetAppStyleSetName();
  local_b30 = *(FName *)local_b30;
  local_b28 = local_b30;
  local_b08 = local_b30;
  local_ad8 = FSlateIcon::FSlateIcon(&local_3d0,local_b30,local_b10,local_b18,local_b20);
  pFVar2 = FText::GetEmpty();
  TAttribute<FText>::TAttribute<FText><FText>(&local_6d0,pFVar2);
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_848,L"StarshipGallery",L"MenuEntry7",L"Menu Entry 7");
  TAttribute<FText>::TAttribute<FText>(&local_700,pFVar2);
  FBaseMenuBuilder::AddMenuEntry
            ((FBaseMenuBuilder *)param_1,&local_700,&local_6d0,local_ad8,local_ae0,local_ae8,Button,
             local_af0,local_af8,local_b00);
  TAttribute<FText>::~TAttribute<FText>(&local_700);
  FText::~FText(&local_848);
  TAttribute<FText>::~TAttribute<FText>(&local_6d0);
  FUIAction::~FUIAction(&local_2c0);
  TAttribute<FText>::~TAttribute<FText>(&local_490);
  TAttribute<EVisibility>::~TAttribute<EVisibility>(&local_770);
  local_9c8 = TAttribute<EVisibility>::TAttribute<EVisibility>(&local_750);
  local_9c0 = TAttribute<FText>::TAttribute<FText>(&local_460);
  local_ad0 = FNameEntryId::FNameEntryId(local_f9c);
  uVar1 = local_ad0->Value;
  FNameEntryId::FNameEntryId(&local_8d8);
  uStack_8d4 = 0;
  local_ac0.Number = 0;
  local_ac0.ComparisonIndex.Value = uVar1;
  local_ac8 = &local_8d8;
  local_ab8 = local_ac0;
  local_ab0 = local_ac0;
  local_aa8 = local_ac0;
  local_aa0 = local_ac0;
  local_a98 = local_ac0;
  local_9b8 = local_ac0;
  local_8d8.Value = uVar1;
  local_a90 = FNameEntryId::FNameEntryId(local_f94);
  uVar1 = local_a90->Value;
  FNameEntryId::FNameEntryId(&local_8d0);
  uStack_8cc = 0;
  local_a80.Number = 0;
  local_a80.ComparisonIndex.Value = uVar1;
  local_a88 = &local_8d0;
  local_a78 = local_a80;
  local_a70 = local_a80;
  local_a68 = local_a80;
  local_a60 = local_a80;
  local_a58 = local_a80;
  local_9b0 = local_a80;
  local_8d0.Value = uVar1;
  local_9a8 = FUIAction::FUIAction(&local_258);
  local_a50 = FNameEntryId::FNameEntryId(local_f8c);
  uVar1 = local_a50->Value;
  FNameEntryId::FNameEntryId(&local_8c8);
  uStack_8c4 = 0;
  local_a40.Number = 0;
  local_a40.ComparisonIndex.Value = uVar1;
  local_a48 = &local_8c8;
  local_a38 = local_a40;
  local_9e8 = local_a40;
  local_8c8.Value = uVar1;
  local_a30 = FNameEntryId::FNameEntryId(local_f84);
  uVar1 = local_a30->Value;
  FNameEntryId::FNameEntryId(&local_8c0);
  uStack_8bc = 0;
  local_a20.Number = 0;
  local_a20.ComparisonIndex.Value = uVar1;
  local_a10 = local_8b8;
  local_a28 = &local_8c0;
  local_a18 = local_a20;
  local_9e0 = local_a20;
  local_8c0.Value = uVar1;
  pFVar3 = ::FName::FName(local_a10,"Icons.box-perspective");
  local_a08 = *pFVar3;
  local_a00 = local_a08;
  local_9d8 = local_a08;
  local_9f8 = FAppStyle::GetAppStyleSetName();
  local_9f8 = *(FName *)local_9f8;
  local_9f0 = local_9f8;
  local_9d0 = local_9f8;
  local_9a0 = FSlateIcon::FSlateIcon(&local_3b0,local_9f8,local_9d8,local_9e0,local_9e8);
  pFVar2 = FText::GetEmpty();
  TAttribute<FText>::TAttribute<FText><FText>(&local_670,pFVar2);
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_838,L"StarshipGallery",L"MenuEntry8",L"Menu Entry 8");
  TAttribute<FText>::TAttribute<FText>(&local_6a0,pFVar2);
  FBaseMenuBuilder::AddMenuEntry
            ((FBaseMenuBuilder *)param_1,&local_6a0,&local_670,local_9a0,local_9a8,local_9b0,Button,
             local_9b8,local_9c0,local_9c8);
  TAttribute<FText>::~TAttribute<FText>(&local_6a0);
  FText::~FText(&local_838);
  TAttribute<FText>::~TAttribute<FText>(&local_670);
  FUIAction::~FUIAction(&local_258);
  TAttribute<FText>::~TAttribute<FText>(&local_460);
  TAttribute<EVisibility>::~TAttribute<EVisibility>(&local_750);
  FMenuBuilder::EndSection(param_1);
  return;
}

// operator() @ 142f44b00

ECheckBoxState __thiscall `SStarshipGallery::BuildToolbar'::__l2::<lambda_1>::operator()(void *this)

{
  return `public:_class_TSharedRef<SWidget,1>___cdecl_SStarshipGallery::BuildToolbar(bool)___ptr64'
         ::__l2::IsChecked;
}

// operator() @ 142f45020

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SDockTab,1> * __thiscall
`SStarshipGallery::Construct'::__l2::<lambda_1>::operator()
          (void *this,TSharedRef<SDockTab,1> *__return_storage_ptr__,FSpawnTabArgs *param_1)

{
  TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs> *this_00;
  T0RequiredArgs local_4d8 [4];
  int local_4d4;
  FArguments *local_4d0;
  TAttribute<FMargin> *local_4c8;
  TAttribute<FMargin> *local_4c0;
  FArguments *local_4b8;
  SStarshipGallery *local_4b0;
  TSharedRef<SWidget,1> *local_4a8;
  FArguments *local_4a0;
  FArguments *local_498;
  TSharedRef<SWidget,1> local_490;
  TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs> local_480;
  TAttribute<FMargin> local_468;
  FArguments local_438;
  
  local_4d0 = SDockTab::FArguments::FArguments(&local_438);
  local_4b8 = SDockTab::FArguments::TabRole(local_4d0,PanelTab);
  local_4c8 = &local_468;
  local_4d4 = 0;
  local_4c0 = TAttribute<FMargin>::TAttribute<FMargin><int>(local_4c8,&local_4d4);
  local_4a0 = SDockTab::FArguments::ContentPadding(local_4b8,local_4c0);
  local_4b0 = *(SStarshipGallery **)this;
  local_4a8 = SStarshipGallery::ConstructColorsGallery(local_4b0,&local_490);
  local_498 = SDockTab::FArguments::operator[](local_4a0,local_4a8);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(local_4d8);
  this_00 = MakeTDecl<SDockTab,RequiredArgs::T0RequiredArgs>
                      (&local_480,"SDockTab",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\SStarshipGallery.cpp"
                       ,0x80,local_4d8);
  TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs>::operator<<=
            (this_00,__return_storage_ptr__,local_498);
  TSharedPtr<SDockTab,1>::~TSharedPtr<SDockTab,1>(&local_480._Widget);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_490);
  SDockTab::FArguments::~FArguments(&local_438);
  return __return_storage_ptr__;
}

// operator() @ 142f45160

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

TSharedRef<SWidget,1> * __thiscall
`SStarshipGallery::ConstructColorsGallery'::__l2::<lambda_1>::operator()
          (void *this,TSharedRef<SWidget,1> *__return_storage_ptr__,FText *param_1,FName param_2,
          bool param_3,bool param_4)

{
  FColor FVar1;
  FName *pFVar2;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> *this_00;
  TSharedRef<SBorder,1> *pTVar3;
  FSlotArguments *pFVar4;
  FSlotArguments *pFVar5;
  FSlateFontInfo *pFVar6;
  FSlateColor *pFVar7;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> *pTVar8;
  TSharedRef<STextBlock,1> *pTVar9;
  undefined4 extraout_var;
  FString *pFVar10;
  FText *pFVar11;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> *this_01;
  TSharedRef<SVerticalBox,1> *pTVar12;
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs> *this_02;
  TSharedRef<SOverlay,1> *pTVar13;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> *this_03;
  TSharedRef<SBox,1> *pTVar14;
  T0RequiredArgs local_2088;
  T0RequiredArgs local_2087;
  T0RequiredArgs local_2086;
  T0RequiredArgs local_2085;
  T0RequiredArgs local_2084;
  T0RequiredArgs local_2083 [3];
  int local_2080 [4];
  ISlateStyle *local_2070;
  ISlateStyle *local_2068;
  ISlateStyle *local_2060;
  FSlateRoundedBoxBrush *local_2058;
  FSlateRoundedBoxBrush *local_2050;
  FSlateRoundedBoxBrush *local_2048;
  FSlateRoundedBoxBrush *local_2040;
  FSlateRoundedBoxBrush *local_2038;
  ISlateStyle *local_2030;
  char *local_2028;
  ISlateStyle *local_2020;
  ISlateStyle *local_2018;
  char *local_2010;
  undefined1 local_2008 [8];
  FSlateColor *local_2000;
  code *local_1ff8;
  FName *local_1ff0;
  FName local_1fe8;
  FSlateColor *local_1fe0;
  FName local_1fd8;
  code *local_1fd0;
  FArguments *local_1fc8;
  TAttribute<FOptionalSize> *local_1fc0;
  TAttribute<FOptionalSize> *local_1fb8;
  FArguments *local_1fb0;
  TAttribute<FOptionalSize> *local_1fa8;
  TAttribute<FOptionalSize> *local_1fa0;
  FArguments *local_1f98;
  FDeprecateVector2DParameter local_1f90;
  FDeprecateVector2DParameter local_1f88;
  FSlateRoundedBoxBrush *local_1f80;
  TAttribute<FSlateBrush_const_*> *local_1f78;
  TAttribute<FSlateBrush_const_*> *local_1f70;
  FArguments *local_1f68;
  FArguments *local_1f60;
  FSlotArguments *local_1f58;
  FSlotArguments *local_1f50;
  FArguments *local_1f48;
  longlong *local_1f40;
  TAttribute<float> *local_1f38;
  TAttribute<float> *local_1f30;
  FSlotArguments *local_1f28;
  undefined1 *local_1f20;
  FName *local_1f18;
  FName local_1f10;
  code *local_1f08;
  TAttribute<FSlateFontInfo> *local_1f00;
  TAttribute<FSlateFontInfo> *local_1ef8;
  FArguments *local_1ef0;
  FName *local_1ee8;
  FName local_1ee0;
  FSlateColor *local_1ed8;
  FName local_1ed0;
  code *local_1ec8;
  TAttribute<FSlateColor> *local_1ec0;
  TAttribute<FSlateColor> *local_1eb8;
  FArguments *local_1eb0;
  TAttribute<FText> *local_1ea8;
  TAttribute<FText> *local_1ea0;
  FArguments *local_1e98;
  FArguments *local_1e90;
  FSlotArguments *local_1e88;
  FSlotArguments *local_1e80;
  FArguments *local_1e78;
  undefined1 *local_1e70;
  FName *local_1e68;
  FName local_1e60;
  code *local_1e58;
  TAttribute<FSlateFontInfo> *local_1e50;
  TAttribute<FSlateFontInfo> *local_1e48;
  FArguments *local_1e40;
  FName *local_1e38;
  FName local_1e30;
  FSlateColor *local_1e28;
  FName local_1e20;
  code *local_1e18;
  TAttribute<FSlateColor> *local_1e10;
  TAttribute<FSlateColor> *local_1e08;
  FArguments *local_1e00;
  FLinearColor *local_1df8;
  FColor *local_1df0;
  TAttribute<FText> *local_1de8;
  TAttribute<FText> *local_1de0;
  FArguments *local_1dd8;
  FArguments *local_1dd0;
  FSlotArguments *local_1dc8;
  FSlotArguments *local_1dc0;
  FArguments *local_1db8;
  FArguments *local_1db0;
  FSlotArguments *local_1da8;
  FSlotArguments *local_1da0;
  FArguments *local_1d98;
  FArguments *local_1d90;
  FArguments *local_1d88;
  FArguments *local_1d80;
  FSlateColor local_1d78;
  TSharedRef<SWidget,1> local_1d60;
  TSharedRef<SWidget,1> local_1d50;
  TSharedRef<SWidget,1> local_1d40;
  TSharedRef<SWidget,1> local_1d30;
  TSharedRef<SWidget,1> local_1d20;
  FName local_1d10;
  FName local_1d08;
  FName local_1d00;
  FName local_1cf8;
  FName local_1cf0;
  TSharedRef<SBox,1> local_1ce8;
  TSharedRef<SOverlay,1> local_1cd8;
  TSharedRef<SVerticalBox,1> local_1cc8;
  TSharedRef<STextBlock,1> local_1cb8;
  FText local_1ca8;
  FString local_1c98;
  TSharedRef<STextBlock,1> local_1c88;
  TSharedRef<SBorder,1> local_1c78;
  FSlateColor local_1c68;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_1c50;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_1c38;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_1c20;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_1c08;
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs> local_1bf0;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_1bd8;
  FLinearColor local_1bc0;
  undefined1 local_1bb0 [20];
  undefined1 local_1b9c [20];
  TAttribute<FOptionalSize> local_1b88;
  TAttribute<FOptionalSize> local_1b68;
  TAttribute<float> local_1b48;
  TAttribute<FSlateBrush_const_*> local_1b28;
  TAttribute<FSlateColor> local_1b00;
  TAttribute<FText> local_1ad0;
  TAttribute<FSlateColor> local_1aa0;
  TAttribute<FText> local_1a70;
  FSlateFontInfo local_1a40;
  FSlateFontInfo local_19e0;
  FSlotArguments local_1980;
  FSlotArguments local_1920;
  FSlotArguments local_18c0;
  FSlotArguments local_17d8;
  TAttribute<FSlateFontInfo> local_16f0;
  TAttribute<FSlateFontInfo> local_1670;
  FArguments local_15f0;
  FArguments local_13e8;
  FArguments local_11e0;
  FArguments local_ea0;
  FArguments local_ac0;
  FArguments local_568;
  undefined8 uStack_8;
  
  uStack_8 = 0x142f4517e;
  local_2068 = FAppStyle::Get();
  local_1ff8 = *(code **)((longlong)*local_2068 + 0x40);
  local_2000 = FStyleDefaults::GetSlateColor();
  (*local_1ff8)(local_2068,&local_1d78,param_2,0,local_2000,0);
  local_2060 = FAppStyle::Get();
  local_1fd0 = *(code **)((longlong)*local_2060 + 0x40);
  local_1fe0 = FStyleDefaults::GetSlateColor();
  local_1ff0 = &local_1cf0;
  pFVar2 = ::FName::FName(local_1ff0,"Colors.Foldout");
  local_1fe8 = *pFVar2;
  local_1fd8 = local_1fe8;
  (*local_1fd0)(local_2060,&local_1c68,local_1fe8,0,local_1fe0,0);
  local_1fc8 = SBox::FArguments::FArguments(&local_11e0);
  local_1fb0 = SBox::FArguments::Padding(local_1fc8,__real_41000000);
  local_1fc0 = &local_1b88;
  local_2080[0] = 0x78;
  local_1fb8 = TAttribute<FOptionalSize>::TAttribute<FOptionalSize><int>(local_1fc0,local_2080);
  local_1f98 = SBox::FArguments::WidthOverride(local_1fb0,local_1fb8);
  local_1fa8 = &local_1b68;
  local_2080[1] = 100;
  local_1fa0 = TAttribute<FOptionalSize>::TAttribute<FOptionalSize><int>(local_1fa8,local_2080 + 1);
  local_1d88 = SBox::FArguments::HeightOverride(local_1f98,local_1fa0);
  local_1f48 = SOverlay::FArguments::FArguments(&local_15f0);
  local_1f58 = SOverlay::Slot(&local_1920,0);
  local_1f68 = SBorder::FArguments::FArguments(&local_ea0);
  local_1f78 = &local_1b28;
  if (param_4) {
    local_2058 = ::operator_new(0xb0);
    if (local_2058 == (FSlateRoundedBoxBrush *)0x0) {
      local_2050 = (FSlateRoundedBoxBrush *)0x0;
    }
    else {
      UE::Slate::FDeprecateVector2DParameter::FDeprecateVector2DParameter
                (&local_1f90,&UE::Math::TVector2<float>::ZeroVector);
      local_2050 = FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor,FSlateColor,float>
                             (local_2058,&local_1d78,__real_40c00000,&local_1c68,__real_3f800000,
                              &local_1f90);
    }
    local_2038 = local_2050;
  }
  else {
    local_2048 = ::operator_new(0xb0);
    if (local_2048 == (FSlateRoundedBoxBrush *)0x0) {
      local_2040 = (FSlateRoundedBoxBrush *)0x0;
    }
    else {
      UE::Slate::FDeprecateVector2DParameter::FDeprecateVector2DParameter
                (&local_1f88,&UE::Math::TVector2<float>::ZeroVector);
      local_2040 = FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor,float>
                             (local_2048,&local_1d78,__real_40c00000,&local_1f88);
    }
    local_2038 = local_2040;
  }
  local_1f80 = local_2038;
  local_1f70 = TAttribute<FSlateBrush_const_*>::
               TAttribute<FSlateBrush_const_*><FSlateRoundedBoxBrush_*>(local_1f78,&local_1f80);
  local_1f60 = SBorder::FArguments::BorderImage(local_1f68,local_1f70);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_2088);
  this_00 = MakeTDecl<SBorder,RequiredArgs::T0RequiredArgs>
                      (&local_1c20,"SBorder",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\SStarshipGallery.cpp"
                       ,0xee,&local_2088);
  pTVar3 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                     (this_00,&local_1c78,local_1f60);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SBorder>(&local_1d20,pTVar3);
  local_1f50 = TSlotBase<SOverlay::FOverlaySlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_1f58,&local_1d20);
  local_1d98 = SOverlay::FArguments::operator+(local_1f48,local_1f50);
  pFVar4 = SOverlay::Slot(&local_1980,0);
  local_1f40 = &pFVar4->_padding_;
  local_1da8 = TPaddingWidgetSlotMixin<SOverlay::FOverlaySlot>::FSlotArgumentsMixin::Padding
                         ((FSlotArgumentsMixin *)local_1f40,__real_41400000);
  local_1e78 = SVerticalBox::FArguments::FArguments(&local_13e8);
  local_1f28 = SVerticalBox::Slot(&local_17d8);
  local_1f38 = &local_1b48;
  local_2080[2] = 1;
  local_1f30 = TAttribute<float>::TAttribute<float><int>(local_1f38,local_2080 + 2);
  pFVar5 = SVerticalBox::FSlot::FSlotArguments::FillHeight(local_1f28,local_1f30);
  local_1f20 = &pFVar5->field_0x48;
  local_1e88 = TAlignmentWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::VAlign
                         ((FSlotArgumentsMixin *)local_1f20,VAlign_Bottom);
  local_1ef0 = STextBlock::FArguments::FArguments(&local_568);
  local_1f00 = &local_16f0;
  local_2030 = FAppStyle::Get();
  local_1f08 = *(code **)((longlong)*local_2030 + 0x88);
  local_1f18 = &local_1d10;
  pFVar2 = ::FName::FName(local_1f18,"SmallFontBold");
  local_1f10 = *pFVar2;
  pFVar6 = (FSlateFontInfo *)(*local_1f08)(local_2030,&local_19e0,local_1f10,0);
  local_1ef8 = TAttribute<FSlateFontInfo>::TAttribute<FSlateFontInfo>(local_1f00,pFVar6);
  local_1eb0 = STextBlock::FArguments::Font(local_1ef0,local_1ef8);
  local_1ec0 = &local_1b00;
  local_2020 = FAppStyle::Get();
  local_1ec8 = *(code **)((longlong)*local_2020 + 0x40);
  local_1ed8 = FStyleDefaults::GetSlateColor();
  local_1ee8 = &local_1d08;
  if (param_3) {
    local_2028 = "Colors.Background";
  }
  else {
    local_2028 = "Colors.White";
  }
  pFVar2 = ::FName::FName(local_1ee8,local_2028);
  local_1ee0 = *pFVar2;
  local_1ed0 = local_1ee0;
  pFVar7 = (FSlateColor *)(*local_1ec8)(local_2020,local_1bb0,local_1ee0,0,local_1ed8,0);
  local_1eb8 = TAttribute<FSlateColor>::TAttribute<FSlateColor><FSlateColor>(local_1ec0,pFVar7);
  local_1e98 = STextBlock::FArguments::ColorAndOpacity(local_1eb0,local_1eb8);
  local_1ea8 = &local_1ad0;
  local_1ea0 = TAttribute<FText>::TAttribute<FText><FText>(local_1ea8,param_1);
  local_1e90 = STextBlock::FArguments::Text(local_1e98,local_1ea0);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_2087);
  pTVar8 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                     (&local_1c38,"STextBlock",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\SStarshipGallery.cpp"
                      ,0xfb,&local_2087);
  pTVar9 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar8,&local_1c88,local_1e90);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_1d30,pTVar9);
  local_1e80 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_1e88,&local_1d30);
  local_1db8 = SVerticalBox::FArguments::operator+(local_1e78,local_1e80);
  pFVar5 = SVerticalBox::Slot(&local_18c0);
  local_1e70 = &pFVar5->field_0x48;
  pFVar5 = TAlignmentWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::VAlign
                     ((FSlotArgumentsMixin *)local_1e70,VAlign_Bottom);
  local_1dc8 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar5);
  local_1e40 = STextBlock::FArguments::FArguments(&local_ac0);
  local_1e50 = &local_1670;
  local_2018 = FAppStyle::Get();
  local_1e58 = *(code **)((longlong)*local_2018 + 0x88);
  local_1e68 = &local_1d00;
  pFVar2 = ::FName::FName(local_1e68,"SmallFont");
  local_1e60 = *pFVar2;
  pFVar6 = (FSlateFontInfo *)(*local_1e58)(local_2018,&local_1a40,local_1e60,0);
  local_1e48 = TAttribute<FSlateFontInfo>::TAttribute<FSlateFontInfo>(local_1e50,pFVar6);
  local_1e00 = STextBlock::FArguments::Font(local_1e40,local_1e48);
  local_1e10 = &local_1aa0;
  local_2070 = FAppStyle::Get();
  local_1e18 = *(code **)((longlong)*local_2070 + 0x40);
  local_1e28 = FStyleDefaults::GetSlateColor();
  local_1e38 = &local_1cf8;
  if (param_3) {
    local_2010 = "Colors.Background";
  }
  else {
    local_2010 = "Colors.White";
  }
  pFVar2 = ::FName::FName(local_1e38,local_2010);
  local_1e30 = *pFVar2;
  local_1e20 = local_1e30;
  pFVar7 = (FSlateColor *)(*local_1e18)(local_2070,local_1b9c,local_1e30,0,local_1e28,0);
  local_1e08 = TAttribute<FSlateColor>::TAttribute<FSlateColor><FSlateColor>(local_1e10,pFVar7);
  local_1dd8 = STextBlock::FArguments::ColorAndOpacity(local_1e00,local_1e08);
  local_1de8 = &local_1a70;
  local_1df8 = FSlateColor::GetSpecifiedColor(&local_1d78,&local_1bc0);
  FVar1 = FLinearColor::ToFColor(local_1df8,SUB81(local_2008,0));
  local_1df0 = (FColor *)CONCAT44(extraout_var,FVar1.field0_0x0);
  pFVar10 = FColor::ToHex(local_1df0,&local_1c98);
  pFVar11 = FText::FromString(&local_1ca8,pFVar10);
  local_1de0 = TAttribute<FText>::TAttribute<FText>(local_1de8,pFVar11);
  local_1dd0 = STextBlock::FArguments::Text(local_1dd8,local_1de0);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_2086);
  pTVar8 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                     (&local_1c50,"STextBlock",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\SStarshipGallery.cpp"
                      ,0x105,&local_2086);
  pTVar9 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar8,&local_1cb8,local_1dd0);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_1d40,pTVar9);
  local_1dc0 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_1dc8,&local_1d40);
  local_1db0 = SVerticalBox::FArguments::operator+(local_1db8,local_1dc0);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_2085);
  this_01 = MakeTDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
                      (&local_1bd8,"SVerticalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\SStarshipGallery.cpp"
                       ,0xf6,&local_2085);
  pTVar12 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_01,&local_1cc8,local_1db0);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SVerticalBox>(&local_1d60,pTVar12);
  local_1da0 = TSlotBase<SOverlay::FOverlaySlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_1da8,&local_1d60);
  local_1d90 = SOverlay::FArguments::operator+(local_1d98,local_1da0);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_2084);
  this_02 = MakeTDecl<SOverlay,RequiredArgs::T0RequiredArgs>
                      (&local_1bf0,"SOverlay",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\SStarshipGallery.cpp"
                       ,0xea,&local_2084);
  pTVar13 = TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_02,&local_1cd8,local_1d90);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SOverlay>(&local_1d50,pTVar13);
  local_1d80 = SBox::FArguments::operator[](local_1d88,&local_1d50);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(local_2083);
  this_03 = MakeTDecl<SBox,RequiredArgs::T0RequiredArgs>
                      (&local_1c08,"SBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\SStarshipGallery.cpp"
                       ,0xe5,local_2083);
  pTVar14 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_03,&local_1ce8,local_1d80);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SBox>(__return_storage_ptr__,pTVar14);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_1ce8.SharedReferenceCount);
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::~TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
            (&local_1c08);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_1d50);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_1cd8.SharedReferenceCount);
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>(&local_1bf0);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_1d60);
  TSharedRef<SVerticalBox,1>::~TSharedRef<SVerticalBox,1>(&local_1cc8);
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>(&local_1bd8);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_1d40);
  TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_1cb8);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_1c50);
  FText::~FText(&local_1ca8);
  ::FString::~FString(&local_1c98);
  FSlateFontInfo::~FSlateFontInfo(&local_1a40);
  STextBlock::FArguments::~FArguments(&local_ac0);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_18c0);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_1d30);
  TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_1c88);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_1c38);
  FSlateFontInfo::~FSlateFontInfo(&local_19e0);
  STextBlock::FArguments::~FArguments(&local_568);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_17d8);
  SVerticalBox::FArguments::~FArguments(&local_13e8);
  SOverlay::FOverlaySlot::FSlotArguments::~FSlotArguments(&local_1980);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_1d20);
  TSharedRef<SBorder,1>::~TSharedRef<SBorder,1>(&local_1c78);
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>(&local_1c20);
  SBorder::FArguments::~FArguments(&local_ea0);
  SOverlay::FOverlaySlot::FSlotArguments::~FSlotArguments(&local_1920);
  TArray<SOverlay::FOverlaySlot::FSlotArguments,TSizedDefaultAllocator<32>_>::
  ~TArray<SOverlay::FOverlaySlot::FSlotArguments,TSizedDefaultAllocator<32>_>(&local_15f0._Slots);
  TSlateBaseNamedArgs<SOverlay>::~TSlateBaseNamedArgs<SOverlay>
            ((TSlateBaseNamedArgs<SOverlay> *)&local_15f0);
  SBox::FArguments::~FArguments(&local_11e0);
  FText::~FText(param_1);
  return __return_storage_ptr__;
}

// operator() @ 142f45fd0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedRef<SWidget,1> * __thiscall
`SStarshipGallery::ConstructIconsGallery'::__l2::<lambda_1>::operator()
          (void *this,TSharedRef<SWidget,1> *__return_storage_ptr__,FText *param_1,FString *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FMargin *pFVar4;
  TSlateDecl<SUniformWrapPanel,RequiredArgs::T0RequiredArgs> *this_00;
  TSharedRef<SUniformWrapPanel,1> *pTVar5;
  FName *pFVar6;
  TUniquePtr<FSlateDynamicImageBrush,TDefaultDelete<FSlateDynamicImageBrush>_> *pTVar7;
  TSharedRef<SWidget,1> *pTVar8;
  FText *pFVar9;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> *this_01;
  TSharedRef<SImage,1> *pTVar10;
  FSlotArguments *this_02;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> *this_03;
  TSharedRef<STextBlock,1> *pTVar11;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> *this_04;
  TSharedRef<SVerticalBox,1> *pTVar12;
  longlong lVar13;
  T0RequiredArgs *pTVar14;
  undefined1 auStackY_15c8 [32];
  T0RequiredArgs local_1578;
  T0RequiredArgs local_1577 [4];
  T0RequiredArgs local_1573 [3];
  ForAnyElementType *local_1570;
  undefined1 local_1568;
  undefined1 local_1567 [7];
  int local_1560;
  uint local_1558;
  int local_1554;
  uint local_1550;
  uint local_154c;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_1548;
  longlong *local_1540;
  TUniquePtr<FSlateBrush,TDefaultDelete<FSlateBrush>_> local_1538;
  EHorizontalAlignment local_1530;
  int local_152c;
  int local_1528;
  int local_1524;
  FScriptContainerElement *local_1520;
  TArray<FString,TSizedDefaultAllocator<32>_> local_1518;
  TUniquePtr<FSlateDynamicImageBrush,TDefaultDelete<FSlateDynamicImageBrush>_> local_1508;
  FScriptContainerElement *local_1500;
  IFileManager *local_14f8;
  FScriptContainerElement *local_14f0;
  FSlateDynamicImageBrush *local_14e8;
  FSlateDynamicImageBrush *local_14e0;
  FString local_14d8;
  FLinearColor_u_0 local_14c8;
  TCheckedPointerIterator<FString,int,0> local_14b8;
  TAttribute<FMargin> *local_14a0;
  TAttribute<FMargin> *local_1498;
  FArguments *local_1490;
  FArguments *local_1488;
  FString *local_1480;
  FString *local_1478;
  FScriptContainerElement *local_1470;
  FScriptContainerElement *local_1468;
  FScriptContainerElement *local_1460;
  FScriptContainerElement *local_1458;
  FScriptContainerElement *local_1450;
  code *local_1448;
  FScriptContainerElement *local_1430;
  FScriptContainerElement *local_1428;
  FString *local_1420;
  FString *local_1418;
  FLinearColor_u_0 *local_1410;
  FScriptContainerElement *local_1408;
  FScriptContainerElement *local_1400;
  FScriptContainerElement *local_13f8;
  FScriptContainerElement *local_13f0;
  FName local_13e8;
  FLinearColor_u_0 *local_13e0;
  FDeprecateVector2DParameter local_13d8;
  FName local_13d0;
  FScriptContainerElement *local_13c8;
  FScriptContainerElement *local_13c0;
  FScriptContainerElement *local_13b8;
  FScriptContainerElement *local_13b0;
  FScriptContainerElement *local_13a8;
  FScriptContainerElement *local_13a0;
  undefined4 local_1398;
  undefined4 local_1394;
  FScriptContainerElement *local_1390;
  FScriptContainerElement *local_1388;
  FScriptContainerElement *local_1380;
  longlong local_1378;
  longlong local_1370;
  FScriptContainerElement *local_1368;
  FScriptContainerElement *local_1360;
  FScriptContainerElement *local_1358;
  TUniquePtr<FSlateBrush,TDefaultDelete<FSlateBrush>_> *local_1350;
  TDefaultDelete<FSlateBrush> *local_1348;
  FSlateBrush *local_1340;
  TDefaultDelete<FSlateBrush> *local_1338;
  TDefaultDelete<FSlateDynamicImageBrush> *local_1330;
  FSlateDynamicImageBrush *local_1328;
  TDefaultDelete<FSlateDynamicImageBrush> *local_1320;
  SUniformWrapPanel *local_1318;
  undefined4 local_1310;
  undefined4 local_130c;
  longlong local_1308;
  longlong local_1300;
  longlong local_12f8;
  longlong local_12f0;
  undefined8 *local_12e8;
  FSlateBrush *local_12e0;
  FSlateBrush *local_12d8;
  TAttribute<FSlateBrush_const_*> *local_12d0;
  TAttribute<FSlateBrush_const_*> *local_12c8;
  FArguments *local_12c0;
  TAttribute<FText> *local_12b8;
  TAttribute<FText> *local_12b0;
  FArguments *local_12a8;
  SStarshipGallery *local_12a0;
  FString *local_1298;
  <lambda_1> *local_1290;
  FArguments *local_1288;
  FArguments *local_1280;
  FScopedWidgetSlotArguments *local_1278;
  TAttribute<FText> *local_1270;
  TAttribute<FText> *local_1268;
  FArguments *local_1260;
  FArguments *local_1258;
  FSlotArguments *local_1250;
  FSlotArguments *local_1248;
  FArguments *local_1240;
  FSlotArguments *local_1238;
  FSlotArguments *local_1230;
  FArguments *local_1228;
  FArguments *local_1220;
  int local_1218;
  undefined1 *local_1210;
  TAttribute<EHorizontalAlignment> *local_1208;
  FString local_1200;
  TSharedPtr<SUniformWrapPanel,1> local_11f0;
  FArguments *local_11e0;
  TVector2<double>_u_0 local_11d8;
  TSharedRef<SWidget,1> local_11c8;
  TSharedRef<SWidget,1> local_11b8;
  TSharedRef<SWidget,1> local_11a8;
  <lambda_1> local_1198;
  TSharedRef<SUniformWrapPanel,1> local_1180;
  FString local_1170;
  TSharedRef<SImage,1> local_1160;
  FText local_1150;
  TSharedRef<SVerticalBox,1> local_1140;
  TSharedRef<SUniformWrapPanel,1> local_1130;
  TSharedRef<STextBlock,1> local_1120;
  FName local_1110;
  TSlateDecl<SUniformWrapPanel,RequiredArgs::T0RequiredArgs> local_1108;
  TCheckedPointerIterator<FString,int,0> local_10f0;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_10d8;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_10c0;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_10a8;
  FMargin local_1090;
  undefined1 local_1080 [32];
  TAttribute<FSlateBrush_const_*> local_1060;
  TAttribute<FMargin> local_1038;
  TAttribute<FText> local_1008;
  TAttribute<FText> local_fd8;
  FSlotArguments local_fa8;
  FSlotArguments local_ec0;
  FArguments local_dd8;
  FArguments local_bd0;
  FArguments local_928;
  FArguments local_610;
  TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,EVisibility___cdecl(void)>
  local_b8;
  FScopedWidgetSlotArguments local_88;
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x142f45fef;
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_15c8;
  local_11d8._s_0.X = __real_4034000000000000;
  local_11d8._s_0.Y = __real_4034000000000000;
  local_11e0 = SUniformWrapPanel::FArguments::FArguments(&local_928);
  local_1210 = local_1080;
  local_1530 = HAlign_Left;
  local_1208 = TAttribute<enum_EHorizontalAlignment>::TAttribute<enum_EHorizontalAlignment>
                         (local_1210,&local_1530);
  local_1490 = SUniformWrapPanel::FArguments::HAlign(local_11e0,local_1208);
  local_14a0 = &local_1038;
  pFVar4 = FMargin::FMargin(&local_1090,__real_41400000,__real_41400000);
  local_1498 = TAttribute<FMargin>::TAttribute<FMargin>(local_14a0,pFVar4);
  local_1488 = SUniformWrapPanel::FArguments::SlotPadding(local_1490,local_1498);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_1578);
  this_00 = MakeTDecl<SUniformWrapPanel,RequiredArgs::T0RequiredArgs>
                      (&local_1108,"SUniformWrapPanel",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\SStarshipGallery.cpp"
                       ,0x191,&local_1578);
  pTVar5 = TSlateDecl<SUniformWrapPanel,RequiredArgs::T0RequiredArgs>::operator<<=
                     (this_00,&local_1180,local_1488);
  TSharedPtr<SUniformWrapPanel,1>::TSharedPtr<SUniformWrapPanel,1><SUniformWrapPanel>
            (&local_11f0,pTVar5);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_1180.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_1108._Widget.SharedReferenceCount);
  SUniformWrapPanel::FArguments::~FArguments(&local_928);
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&local_1518.AllocatorInstance);
  local_1518.ArrayNum = 0;
  local_1518.ArrayMax =
       TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                 (&local_1518.AllocatorInstance);
  local_1480 = param_2;
  local_1478 = FPaths::EngineDir(&local_1170);
  ::operator/(&local_1200,local_1478,local_1480);
  ::FString::~FString(&local_1170);
  local_14f8 = IFileManager::Get();
  local_1448 = *(code **)((longlong)*local_14f8 + 0x88);
  local_152c = local_1200.Data.ArrayNum;
  if (local_1200.Data.ArrayNum == 0) {
    local_1500 = (FScriptContainerElement *)
                 `FString::operator*'::__l2::<lambda_1>::operator()(&local_1568);
  }
  else {
    local_1470 = local_1200.Data.AllocatorInstance.Data;
    local_1468 = local_1200.Data.AllocatorInstance.Data;
    local_1460 = local_1200.Data.AllocatorInstance.Data;
    local_1500 = local_1200.Data.AllocatorInstance.Data;
  }
  local_1458 = local_1500;
  local_1450 = local_1500;
  (*local_1448)(local_14f8,&local_1518,local_1500,L"*.png");
  local_1548 = &local_1518;
  TCheckedPointerIterator<FString,int,0>::TCheckedPointerIterator<FString,int,0>
            (&local_14b8,&local_1518.ArrayNum,(FString *)local_1518.AllocatorInstance.Data);
  local_1430 = (local_1548->AllocatorInstance).Data;
  local_1528 = local_1548->ArrayNum;
  local_1428 = local_1430;
  TCheckedPointerIterator<FString,int,0>::TCheckedPointerIterator<FString,int,0>
            (&local_10f0,&local_1548->ArrayNum,(FString *)(local_1430 + (longlong)local_1528 * 0x10)
            );
  while( true ) {
    if (*local_14b8.CurrentNum != local_14b8.InitialNum) {
      pTVar14 = local_1577;
      for (lVar13 = 1; lVar13 != 0; lVar13 = lVar13 + -1) {
        *pTVar14 = (T0RequiredArgs)0x0;
        pTVar14 = pTVar14 + 1;
      }
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(local_1577)
      ;
    }
    local_1577[1] = (T0RequiredArgs)(local_14b8.Ptr != local_10f0.Ptr);
    local_1558 = (uint)(byte)local_1577[1];
    if (!(bool)local_1577[1]) break;
    local_1420 = local_14b8.Ptr;
    local_1418 = local_14b8.Ptr;
    ::FString::FString(&local_14d8,local_14b8.Ptr);
    local_1570 = (ForAnyElementType *)(*(longlong *)this + 0x2b8);
    local_14e8 = ::operator_new(0xd0);
    if (local_14e8 == (FSlateDynamicImageBrush *)0x0) {
      local_14e0 = (FSlateDynamicImageBrush *)0x0;
    }
    else {
      local_14c8._s_0.R = __real_3f800000;
      local_14c8._s_0.G = __real_3f800000;
      local_14c8._s_0.B = __real_3f800000;
      local_14c8._s_0.A = __real_3f800000;
      local_1410 = &local_14c8;
      local_13e0 = local_1410;
      UE::Slate::FDeprecateVector2DParameter::FDeprecateVector2DParameter
                (&local_13d8,(TVector2<double> *)&local_11d8._s_0);
      local_1524 = local_14d8.Data.ArrayNum;
      if (local_14d8.Data.ArrayNum == 0) {
        local_14f0 = (FScriptContainerElement *)
                     `FString::operator*'::__l2::<lambda_1>::operator()(local_1567);
      }
      else {
        local_1408 = local_14d8.Data.AllocatorInstance.Data;
        local_1400 = local_14d8.Data.AllocatorInstance.Data;
        local_13f8 = local_14d8.Data.AllocatorInstance.Data;
        local_14f0 = local_14d8.Data.AllocatorInstance.Data;
      }
      local_13f0 = local_14f0;
      pFVar6 = ::FName::FName(&local_1110,(wchar_t *)local_14f0);
      local_13e8 = *pFVar6;
      local_13d0 = local_13e8;
      local_14e0 = FSlateDynamicImageBrush::FSlateDynamicImageBrush
                             (local_14e8,local_13e8,&local_13d8,(FLinearColor *)&local_13e0->_s_0,
                              NoTile,FullColor);
    }
    pTVar7 = TUniquePtr<FSlateDynamicImageBrush,TDefaultDelete<FSlateDynamicImageBrush>_>::
             TUniquePtr<FSlateDynamicImageBrush,TDefaultDelete<FSlateDynamicImageBrush>_><FSlateDynamicImageBrush>
                       (&local_1508,local_14e0);
    TUniquePtr<FSlateBrush,TDefaultDelete<FSlateBrush>_>::
    TUniquePtr<FSlateBrush,TDefaultDelete<FSlateBrush>_><FSlateDynamicImageBrush,TDefaultDelete<FSlateDynamicImageBrush>_>
              (&local_1538,pTVar7);
    local_1520 = (FScriptContainerElement *)&local_1538;
    local_13c8 = local_1570->Data;
    local_13c0 = local_13c8;
    local_13b8 = local_13c8;
    if ((local_13c8 <= local_1520) &&
       (local_13b0 = local_1570->Data, local_13a8 = local_13b0, local_13a0 = local_13b0,
       local_1520 < local_13b0 + (longlong)*(int *)((longlong)&local_1570[1].Data + 4) * 8)) {
      local_1398 = 0;
      local_1394 = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      local_1378 = (longlong)*(int *)&local_1570[1].Data;
      local_1370 = (longlong)*(int *)((longlong)&local_1570[1].Data + 4);
      local_1390 = local_1570->Data;
      local_1388 = local_1390;
      local_1380 = local_1390;
      local_1368 = local_1390;
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar8 = (TSharedRef<SWidget,1> *)(*pcVar1)();
        return pTVar8;
      }
    }
    if (*(int *)&local_1570[1].Data == *(int *)((longlong)&local_1570[1].Data + 4)) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,local_1570,(int *)((longlong)&local_1570[1].Data + 4));
      *(int *)&local_1570[1].Data = iVar3;
    }
    local_1554 = *(int *)&local_1570[1].Data;
    *(int *)&local_1570[1].Data = *(int *)&local_1570[1].Data + 1;
    local_1360 = local_1570->Data;
    local_1358 = local_1360 + (longlong)local_1554 * 8;
    local_1350 = ::operator_new(8,local_1358);
    TUniquePtr<FSlateBrush,TDefaultDelete<FSlateBrush>_>::
    TUniquePtr<FSlateBrush,TDefaultDelete<FSlateBrush>_>(local_1350,&local_1538);
    local_1218 = local_1554;
    local_1348 = (TDefaultDelete<FSlateBrush> *)&local_1538;
    local_1340 = local_1538.Ptr;
    local_1338 = local_1348;
    TDefaultDelete<FSlateBrush>::operator()(local_1348,local_1538.Ptr);
    local_1330 = (TDefaultDelete<FSlateDynamicImageBrush> *)&local_1508;
    local_1328 = local_1508.Ptr;
    local_1320 = local_1330;
    TDefaultDelete<FSlateDynamicImageBrush>::operator()(local_1330,local_1508.Ptr);
    local_1318 = TSharedPtr<SUniformWrapPanel,1>::operator->(&local_11f0);
    local_1278 = SUniformWrapPanel::AddSlot(local_1318,&local_88);
    local_12c0 = SImage::FArguments::FArguments(&local_bd0);
    local_12d0 = &local_1060;
    lVar13 = *(longlong *)this;
    local_1540 = (longlong *)(lVar13 + 0x2b8);
    local_1560 = *(int *)(lVar13 + 0x2c0) + -1;
    local_154c = (uint)(-1 < local_1560);
    bVar2 = local_1560 < *(int *)(lVar13 + 0x2c0);
    local_1550 = (uint)bVar2;
    if (-1 >= local_1560 || !bVar2) {
      local_1310 = 0;
      local_130c = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar8 = (TSharedRef<SWidget,1> *)(*pcVar1)();
        return pTVar8;
      }
    }
    local_1308 = *local_1540;
    local_12f8 = (longlong)((int)local_1540[1] + -1) * 8;
    local_12e8 = (undefined8 *)(local_1308 + local_12f8);
    local_12e0 = (FSlateBrush *)*local_12e8;
    local_1300 = local_1308;
    local_12f0 = local_1308;
    local_12d8 = local_12e0;
    local_12c8 = TAttribute<FSlateBrush_const_*>::TAttribute<FSlateBrush_const_*><FSlateBrush_*>
                           (local_12d0,&local_12d8);
    local_12a8 = SImage::FArguments::Image(local_12c0,local_12c8);
    local_12b8 = &local_1008;
    pFVar9 = FText::FromString(&local_1150,&local_14d8);
    local_12b0 = TAttribute<FText>::TAttribute<FText>(local_12b8,pFVar9);
    local_1288 = TSlateBaseNamedArgs<SImage>::ToolTipText
                           ((TSlateBaseNamedArgs<SImage> *)local_12a8,local_12b0);
    local_12a0 = *(SStarshipGallery **)this;
    local_1298 = &local_1198.IconPath;
    local_1198.__this = local_12a0;
    ::FString::FString(local_1298,&local_14d8);
    local_1290 = &local_1198;
    TFunction<EVisibility___cdecl(void)>::
    TFunction<EVisibility___cdecl(void)><__SStarshipGallery::ConstructIconsGallery_::__l2::<lambda_1>::operator()_::__l6::<lambda_1>_>
              ((TFunction<EVisibility___cdecl(void)> *)&local_b8,local_1290);
    local_1280 = TSlateBaseNamedArgs<SImage>::Visibility_Lambda
                           ((TSlateBaseNamedArgs<SImage> *)local_1288,
                            (TFunction<EVisibility___cdecl(void)> *)&local_b8);
    RequiredArgs::T0RequiredArgs::T0RequiredArgs(local_1577 + 2);
    this_01 = MakeTDecl<SImage,RequiredArgs::T0RequiredArgs>
                        (&local_10d8,"SImage",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\SStarshipGallery.cpp"
                         ,0x1a2,local_1577 + 2);
    pTVar10 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                        (this_01,&local_1160,local_1280);
    TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SImage>(&local_11c8,pTVar10);
    TSlotBase<SUniformWrapPanel::FSlot>::FSlotArguments::operator[]
              ((FSlotArguments *)local_1278,&local_11c8);
    TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_11c8);
    TSharedRef<SImage,1>::~TSharedRef<SImage,1>(&local_1160);
    TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::
    ~TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>(&local_10d8);
    UE::Core::Private::Function::
    TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,EVisibility___cdecl(void)>::
    ~TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,EVisibility___cdecl(void)>
              (&local_b8);
    ::FString::~FString(&local_1198.IconPath);
    FText::~FText(&local_1150);
    SImage::FArguments::~FArguments(&local_bd0);
    TPanelChildren<SUniformWrapPanel::FSlot>::FScopedWidgetSlotArguments::
    ~FScopedWidgetSlotArguments(&local_88);
    ::FString::~FString(&local_14d8);
    local_14b8.Ptr = local_14b8.Ptr + 1;
  }
  local_1240 = SVerticalBox::FArguments::FArguments(&local_dd8);
  this_02 = SVerticalBox::Slot(&local_ec0);
  local_1250 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(this_02);
  local_1260 = STextBlock::FArguments::FArguments(&local_610);
  local_1270 = &local_fd8;
  local_1268 = TAttribute<FText>::TAttribute<FText><FText>(local_1270,param_1);
  local_1258 = STextBlock::FArguments::Text(local_1260,local_1268);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(local_1577 + 3);
  this_03 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                      (&local_10a8,"STextBlock",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\SStarshipGallery.cpp"
                       ,0x1ad,local_1577 + 3);
  pTVar11 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_03,&local_1120,local_1258);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_11a8,pTVar11);
  local_1248 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_1250,&local_11a8);
  local_1228 = SVerticalBox::FArguments::operator+(local_1240,local_1248);
  local_1238 = SVerticalBox::Slot(&local_fa8);
  pTVar5 = TSharedPtr<SUniformWrapPanel,1>::ToSharedRef(&local_11f0,&local_1130);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SUniformWrapPanel>(&local_11b8,pTVar5);
  local_1230 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_1238,&local_11b8);
  local_1220 = SVerticalBox::FArguments::operator+(local_1228,local_1230);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(local_1573);
  this_04 = MakeTDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
                      (&local_10c0,"SVerticalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\SStarshipGallery.cpp"
                       ,0x1a9,local_1573);
  pTVar12 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_04,&local_1140,local_1220);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SVerticalBox>(__return_storage_ptr__,pTVar12);
  TSharedRef<SVerticalBox,1>::~TSharedRef<SVerticalBox,1>(&local_1140);
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>(&local_10c0);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_11b8);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_1130.SharedReferenceCount);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_fa8);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_11a8);
  TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_1120);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_10a8);
  STextBlock::FArguments::~FArguments(&local_610);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_ec0);
  SVerticalBox::FArguments::~FArguments(&local_dd8);
  ::FString::~FString(&local_1200);
  TArray<FString,TSizedDefaultAllocator<32>_>::~TArray<FString,TSizedDefaultAllocator<32>_>
            (&local_1518);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_11f0.SharedReferenceCount);
  FText::~FText(param_1);
  ::FString::~FString(param_2);
  return __return_storage_ptr__;
}

// operator() @ 142f46ff0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FScopedWidgetSlotArguments<SHorizontalBox::FSlot> * __thiscall
`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_1>::operator()
          (void *this,FScopedWidgetSlotArguments<SHorizontalBox::FSlot> *__return_storage_ptr__,
          TSharedPtr<SGridPanel,1> *param_1,FText *param_2)

{
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> *this_00;
  Layer *pLVar1;
  FScopedWidgetSlotArguments *pFVar2;
  FSlotArguments *pFVar3;
  TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs> *this_01;
  TSharedRef<SCheckBox,1> *pTVar4;
  FName *pFVar5;
  FSlateFontInfo *pFVar6;
  FSlateColor *pFVar7;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> *this_02;
  TSharedRef<STextBlock,1> *pTVar8;
  FSlotArguments *pFVar9;
  undefined1 auStackY_1358 [32];
  T0RequiredArgs local_1328;
  T0RequiredArgs local_1327;
  T0RequiredArgs local_1326 [2];
  int local_1324;
  int local_1320;
  int local_131c;
  int local_1318;
  int local_1314;
  int local_1310;
  int local_130c;
  int local_1308;
  int local_1304;
  int local_1300;
  int local_12fc;
  int local_12f8;
  int local_12f4;
  int local_12f0;
  int local_12ec;
  ISlateStyle *local_12e8;
  ISlateStyle *local_12e0;
  TSharedRef<SHorizontalBox,1> local_12d8;
  Layer local_12c8;
  Layer local_12c4;
  FArguments *local_12c0;
  SGridPanel *local_12b8;
  longlong *local_12b0;
  longlong *local_12a8;
  longlong *local_12a0;
  TSharedRef<SHorizontalBox,1> *local_1298;
  TSharedRef<SHorizontalBox,1> *local_1290;
  FArguments *local_1288;
  TSharedRef<SHorizontalBox,1> *local_1280;
  TSharedRef<SHorizontalBox,1> *local_1278;
  TSharedRef<SHorizontalBox,1> *local_1270;
  FArguments *local_1268;
  FArguments *local_1260;
  FSlotArguments *local_1258;
  SGridPanel *local_1250;
  longlong *local_1248;
  longlong *local_1240;
  longlong *local_1238;
  FName *local_1230;
  FName local_1228;
  code *local_1220;
  TAttribute<FSlateFontInfo> *local_1218;
  TAttribute<FSlateFontInfo> *local_1210;
  FArguments *local_1208;
  FName *local_1200;
  FName local_11f8;
  FSlateColor *local_11f0;
  FName local_11e8;
  code *local_11e0;
  TAttribute<FSlateColor> *local_11d8;
  TAttribute<FSlateColor> *local_11d0;
  FArguments *local_11c8;
  TAttribute<FText> *local_11c0;
  TAttribute<FText> *local_11b8;
  FArguments *local_11b0;
  FArguments *local_11a8;
  FSlotArguments *local_11a0;
  SGridPanel *local_1198;
  longlong *local_1190;
  longlong *local_1188;
  longlong *local_1180;
  FSlotArguments *local_1178;
  SHorizontalBox *local_1170;
  FSlotArgumentsMixin *local_1168;
  undefined1 *local_1160;
  Layer local_1158 [2];
  TSharedRef<SWidget,1> local_1150;
  TSharedRef<SHorizontalBox,1> local_1140;
  TSharedRef<SHorizontalBox,1> local_1130;
  TSharedRef<SWidget,1> local_1120;
  TSharedRef<SWidget,1> local_1110;
  FName local_1100;
  FName local_10f8;
  TSharedRef<SCheckBox,1> local_10f0;
  TSharedRef<STextBlock,1> local_10e0;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_10d0;
  TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs> local_10b8;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_10a0;
  undefined1 local_1088 [24];
  TAttribute<FSlateColor> local_1070;
  TAttribute<FText> local_1040;
  FSlateFontInfo local_1010;
  undefined1 local_fb0 [256];
  TAttribute<FSlateFontInfo> local_eb0;
  FArguments local_e30;
  FArguments local_c28;
  FArguments local_848;
  TFunction<ECheckBoxState___cdecl(void)> local_2e8;
  FScopedWidgetSlotArguments local_2b8;
  FScopedWidgetSlotArguments local_1d8;
  FScopedWidgetSlotArguments local_f8;
  ulonglong local_18;
  undefined8 uStack_8;
  
  uStack_8 = 0x142f4700e;
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1358;
  local_12c0 = SHorizontalBox::FArguments::FArguments(&local_e30);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_1328);
  this_00 = MakeTDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
                      (&local_10d0,"SHorizontalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\SStarshipGallery.cpp"
                       ,0x2e9,&local_1328);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
            (this_00,&local_12d8,local_12c0);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>(&local_10d0);
  SHorizontalBox::FArguments::~FArguments(&local_e30);
  local_12b8 = TSharedPtr<SGridPanel,1>::operator->(param_1);
  pLVar1 = SGridPanel::Layer::Layer(local_1158,0);
  local_1324 = pLVar1->TheLayer;
  local_1318 = *(int *)this % *(int *)((longlong)this + 4);
  local_1314 = (*(int *)this / *(int *)((longlong)this + 4)) * *(int *)((longlong)this + 8);
  local_1320 = local_1324;
  local_131c = local_1324;
  pFVar2 = SGridPanel::AddSlot(local_12b8,&local_2b8,local_1314,local_1318,(Layer)local_1324);
  local_12b0 = &pFVar2->_padding_;
  pFVar3 = TPaddingWidgetSlotMixin<SGridPanel::FSlot>::FSlotArgumentsMixin::Padding
                     ((FSlotArgumentsMixin *)local_12b0,__real_41400000);
  local_12a8 = &pFVar3->_padding_;
  pFVar3 = TAlignmentWidgetSlotMixin<SGridPanel::FSlot>::FSlotArgumentsMixin::HAlign
                     ((FSlotArgumentsMixin *)local_12a8,HAlign_Left);
  local_12a0 = &pFVar3->_padding_;
  local_1258 = TAlignmentWidgetSlotMixin<SGridPanel::FSlot>::FSlotArgumentsMixin::VAlign
                         ((FSlotArgumentsMixin *)local_12a0,VAlign_Center);
  local_1288 = SCheckBox::FArguments::FArguments(&local_c28);
  local_1298 = &local_1130;
  TSharedRef<SHorizontalBox,1>::TSharedRef<SHorizontalBox,1>(local_1298,&local_12d8);
  local_1290 = &local_1130;
  TFunction<enum_ECheckBoxState___cdecl(void)>::
  TFunction<enum_ECheckBoxState___cdecl(void)><__SStarshipGallery::ConstructWidgetGallery_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>_>
            (&local_2e8,(<lambda_1> *)local_1290);
  local_1268 = SCheckBox::FArguments::IsChecked_Lambda(local_1288,&local_2e8);
  local_1280 = &local_1140;
  TSharedRef<SHorizontalBox,1>::TSharedRef<SHorizontalBox,1>(local_1280,&local_12d8);
  local_1278 = &local_1140;
  local_1270 = local_1278;
  local_1260 = SCheckBox::FArguments::
               OnCheckStateChanged_Lambda<__SStarshipGallery::ConstructWidgetGallery_::__l2::<lambda_1>::operator()_::__l2::<lambda_2>_>
                         (local_1268,(<lambda_2> *)local_1278);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_1327);
  this_01 = MakeTDecl<SCheckBox,RequiredArgs::T0RequiredArgs>
                      (&local_10b8,"SCheckBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\SStarshipGallery.cpp"
                       ,0x2f1,&local_1327);
  pTVar4 = TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>::operator<<=
                     (this_01,&local_10f0,local_1260);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SCheckBox>(&local_1150,pTVar4);
  TSlotBase<SGridPanel::FSlot>::FSlotArguments::operator[]((FSlotArguments *)local_1258,&local_1150)
  ;
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_1150);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_10f0.SharedReferenceCount);
  TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>(&local_10b8);
  TSharedRef<SHorizontalBox,1>::~TSharedRef<SHorizontalBox,1>(&local_1140);
  TFunction<enum_ECheckBoxState___cdecl(void)>::~TFunction<enum_ECheckBoxState___cdecl(void)>
            (&local_2e8);
  TSharedRef<SHorizontalBox,1>::~TSharedRef<SHorizontalBox,1>(&local_1130);
  SCheckBox::FArguments::~FArguments(&local_c28);
  TPanelChildren<SGridPanel::FSlot>::FScopedWidgetSlotArguments::~FScopedWidgetSlotArguments
            (&local_2b8);
  local_1250 = TSharedPtr<SGridPanel,1>::operator->(param_1);
  pLVar1 = SGridPanel::Layer::Layer(&local_12c8,0);
  local_1310 = pLVar1->TheLayer;
  local_1304 = *(int *)this % *(int *)((longlong)this + 4);
  local_1300 = (*(int *)this / *(int *)((longlong)this + 4)) * *(int *)((longlong)this + 8) + 1;
  local_130c = local_1310;
  local_1308 = local_1310;
  pFVar2 = SGridPanel::AddSlot(local_1250,&local_1d8,local_1300,local_1304,(Layer)local_1310);
  local_1248 = &pFVar2->_padding_;
  pFVar3 = TPaddingWidgetSlotMixin<SGridPanel::FSlot>::FSlotArgumentsMixin::Padding
                     ((FSlotArgumentsMixin *)local_1248,__real_41c00000,__real_41800000,
                      __real_41400000,__real_41800000);
  local_1240 = &pFVar3->_padding_;
  pFVar3 = TAlignmentWidgetSlotMixin<SGridPanel::FSlot>::FSlotArgumentsMixin::VAlign
                     ((FSlotArgumentsMixin *)local_1240,VAlign_Center);
  local_1238 = &pFVar3->_padding_;
  local_11a0 = TAlignmentWidgetSlotMixin<SGridPanel::FSlot>::FSlotArgumentsMixin::HAlign
                         ((FSlotArgumentsMixin *)local_1238,HAlign_Right);
  local_1208 = STextBlock::FArguments::FArguments(&local_848);
  local_1218 = &local_eb0;
  local_12e0 = FAppStyle::Get();
  local_1220 = *(code **)((longlong)*local_12e0 + 0x88);
  local_1230 = &local_10f8;
  pFVar5 = ::FName::FName(local_1230,"NormalFont");
  local_1228 = *pFVar5;
  pFVar6 = (FSlateFontInfo *)(*local_1220)(local_12e0,&local_1010,local_1228,0);
  local_1210 = TAttribute<FSlateFontInfo>::TAttribute<FSlateFontInfo>(local_1218,pFVar6);
  local_11c8 = STextBlock::FArguments::Font(local_1208,local_1210);
  local_11d8 = &local_1070;
  local_12e8 = FAppStyle::Get();
  local_11e0 = *(code **)((longlong)*local_12e8 + 0x40);
  local_11f0 = FStyleDefaults::GetSlateColor();
  local_1200 = &local_1100;
  pFVar5 = ::FName::FName(local_1200,"Colors.White50");
  local_11f8 = *pFVar5;
  local_11e8 = local_11f8;
  pFVar7 = (FSlateColor *)(*local_11e0)(local_12e8,local_1088,local_11f8,0);
  local_11d0 = TAttribute<FSlateColor>::TAttribute<FSlateColor><FSlateColor>(local_11d8,pFVar7);
  local_11b0 = STextBlock::FArguments::ColorAndOpacity(local_11c8,local_11d0);
  local_11c0 = &local_1040;
  local_11b8 = TAttribute<FText>::TAttribute<FText><FText>(local_11c0,param_2);
  local_11a8 = STextBlock::FArguments::Text(local_11b0,local_11b8);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(local_1326);
  this_02 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                      (&local_10a0,"STextBlock",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\SStarshipGallery.cpp"
                       ,0x2fc,local_1326);
  pTVar8 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                     (this_02,&local_10e0,local_11a8);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_1120,pTVar8);
  TSlotBase<SGridPanel::FSlot>::FSlotArguments::operator[]((FSlotArguments *)local_11a0,&local_1120)
  ;
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_1120);
  TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_10e0);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_10a0);
  FSlateFontInfo::~FSlateFontInfo(&local_1010);
  STextBlock::FArguments::~FArguments(&local_848);
  TPanelChildren<SGridPanel::FSlot>::FScopedWidgetSlotArguments::~FScopedWidgetSlotArguments
            (&local_1d8);
  local_1198 = TSharedPtr<SGridPanel,1>::operator->(param_1);
  pLVar1 = SGridPanel::Layer::Layer(&local_12c4,0);
  local_12fc = pLVar1->TheLayer;
  local_12f0 = *(int *)this % *(int *)((longlong)this + 4);
  local_12ec = (*(int *)this / *(int *)((longlong)this + 4)) * *(int *)((longlong)this + 8) + 2;
  local_12f8 = local_12fc;
  local_12f4 = local_12fc;
  pFVar2 = SGridPanel::AddSlot(local_1198,&local_f8,local_12ec,local_12f0,(Layer)local_12fc);
  local_1190 = &pFVar2->_padding_;
  pFVar3 = TPaddingWidgetSlotMixin<SGridPanel::FSlot>::FSlotArgumentsMixin::Padding
                     ((FSlotArgumentsMixin *)local_1190,__real_41400000,__real_41800000,
                      __real_41400000,__real_41800000);
  local_1188 = &pFVar3->_padding_;
  pFVar3 = TAlignmentWidgetSlotMixin<SGridPanel::FSlot>::FSlotArgumentsMixin::VAlign
                     ((FSlotArgumentsMixin *)local_1188,VAlign_Center);
  local_1180 = &pFVar3->_padding_;
  local_1178 = TAlignmentWidgetSlotMixin<SGridPanel::FSlot>::FSlotArgumentsMixin::HAlign
                         ((FSlotArgumentsMixin *)local_1180,HAlign_Fill);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SHorizontalBox>(&local_1110,&local_12d8);
  TSlotBase<SGridPanel::FSlot>::FSlotArguments::operator[]((FSlotArguments *)local_1178,&local_1110)
  ;
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_1110);
  TPanelChildren<SGridPanel::FSlot>::FScopedWidgetSlotArguments::~FScopedWidgetSlotArguments
            (&local_f8);
  *(int *)this = *(int *)this + 1;
  local_1170 = TSharedRef<SHorizontalBox,1>::operator->(&local_12d8);
  SHorizontalBox::AddSlot(local_1170,(FScopedWidgetSlotArguments<SHorizontalBox::FSlot> *)local_fb0)
  ;
  local_1168 = (FSlotArgumentsMixin *)(local_fb0 + 0x50);
  pFVar9 = TAlignmentWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::VAlign
                     (local_1168,VAlign_Center);
  local_1160 = &pFVar9->field_0x48;
  pFVar9 = TAlignmentWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::HAlign
                     ((FSlotArgumentsMixin *)local_1160,HAlign_Fill);
  SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar9);
  SBoxPanel::FScopedWidgetSlotArguments<SHorizontalBox::FSlot>::
  FScopedWidgetSlotArguments<SHorizontalBox::FSlot>
            (__return_storage_ptr__,(FScopedWidgetSlotArguments<SHorizontalBox::FSlot> *)local_fb0);
  SBoxPanel::FScopedWidgetSlotArguments<SHorizontalBox::FSlot>::
  ~FScopedWidgetSlotArguments<SHorizontalBox::FSlot>
            ((FScopedWidgetSlotArguments<SHorizontalBox::FSlot> *)local_fb0);
  TSharedRef<SHorizontalBox,1>::~TSharedRef<SHorizontalBox,1>(&local_12d8);
  TSharedPtr<SGridPanel,1>::~TSharedPtr<SGridPanel,1>(param_1);
  return __return_storage_ptr__;
}

// operator() @ 142f48d00

void __thiscall `SStarshipGallery::BuildToolbar'::__l2::<lambda_2>::operator()(void *this)

{
  bool local_18;
  
  local_18 = !`public:_class_TSharedRef<SWidget,1>___cdecl_SStarshipGallery::BuildToolbar(bool)___ptr64'
              ::__l2::IsChecked;
  `public:_class_TSharedRef<SWidget,1>___cdecl_SStarshipGallery::BuildToolbar(bool)___ptr64'::__l2::
  IsChecked = local_18;
  return;
}

// operator() @ 142f49030

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SDockTab,1> * __thiscall
`SStarshipGallery::Construct'::__l2::<lambda_2>::operator()
          (void *this,TSharedRef<SDockTab,1> *__return_storage_ptr__,FSpawnTabArgs *param_1)

{
  TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs> *this_00;
  T0RequiredArgs local_4d8 [4];
  int local_4d4;
  FArguments *local_4d0;
  TAttribute<FMargin> *local_4c8;
  TAttribute<FMargin> *local_4c0;
  FArguments *local_4b8;
  SStarshipGallery *local_4b0;
  TSharedRef<SWidget,1> *local_4a8;
  FArguments *local_4a0;
  FArguments *local_498;
  TSharedRef<SWidget,1> local_490;
  TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs> local_480;
  TAttribute<FMargin> local_468;
  FArguments local_438;
  
  local_4d0 = SDockTab::FArguments::FArguments(&local_438);
  local_4b8 = SDockTab::FArguments::TabRole(local_4d0,PanelTab);
  local_4c8 = &local_468;
  local_4d4 = 0;
  local_4c0 = TAttribute<FMargin>::TAttribute<FMargin><int>(local_4c8,&local_4d4);
  local_4a0 = SDockTab::FArguments::ContentPadding(local_4b8,local_4c0);
  local_4b0 = *(SStarshipGallery **)this;
  local_4a8 = SStarshipGallery::ConstructTextGallery(local_4b0,&local_490);
  local_498 = SDockTab::FArguments::operator[](local_4a0,local_4a8);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(local_4d8);
  this_00 = MakeTDecl<SDockTab,RequiredArgs::T0RequiredArgs>
                      (&local_480,"SDockTab",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\SStarshipGallery.cpp"
                       ,0x8e,local_4d8);
  TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs>::operator<<=
            (this_00,__return_storage_ptr__,local_498);
  TSharedPtr<SDockTab,1>::~TSharedPtr<SDockTab,1>(&local_480._Widget);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_490);
  SDockTab::FArguments::~FArguments(&local_438);
  return __return_storage_ptr__;
}

// operator() @ 142f49170

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedRef<SWidget,1> * __thiscall
`SStarshipGallery::ConstructIconsGallery'::__l2::<lambda_2>::operator()
          (void *this,TSharedRef<SWidget,1> *__return_storage_ptr__,FText *param_1,FString *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FMargin *pFVar4;
  TSlateDecl<SUniformWrapPanel,RequiredArgs::T0RequiredArgs> *this_00;
  TSharedRef<SUniformWrapPanel,1> *pTVar5;
  TUniquePtr<FSlateVectorImageBrush,TDefaultDelete<FSlateVectorImageBrush>_> *pTVar6;
  TSharedRef<SWidget,1> *pTVar7;
  FText *pFVar8;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> *this_01;
  TSharedRef<SImage,1> *pTVar9;
  FSlotArguments *this_02;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> *this_03;
  TSharedRef<STextBlock,1> *pTVar10;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> *this_04;
  TSharedRef<SVerticalBox,1> *pTVar11;
  longlong lVar12;
  T0RequiredArgs *pTVar13;
  undefined1 auStackY_1588 [32];
  T0RequiredArgs local_1538;
  T0RequiredArgs local_1537 [4];
  T0RequiredArgs local_1533 [3];
  ForAnyElementType *local_1530;
  undefined1 local_1528 [8];
  int local_1520;
  uint local_1518;
  int local_1514;
  uint local_1510;
  uint local_150c;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_1508;
  longlong *local_1500;
  TUniquePtr<FSlateBrush,TDefaultDelete<FSlateBrush>_> local_14f8;
  EHorizontalAlignment local_14f0;
  int local_14ec;
  int local_14e8;
  FScriptContainerElement *local_14e0;
  TArray<FString,TSizedDefaultAllocator<32>_> local_14d8;
  TUniquePtr<FSlateVectorImageBrush,TDefaultDelete<FSlateVectorImageBrush>_> local_14c8;
  FScriptContainerElement *local_14c0;
  IFileManager *local_14b8;
  FSlateVectorImageBrush *local_14b0;
  FSlateVectorImageBrush *local_14a8;
  FLinearColor_u_0 local_14a0;
  FString local_1490;
  TCheckedPointerIterator<FString,int,0> local_1480;
  TAttribute<FMargin> *local_1468;
  TAttribute<FMargin> *local_1460;
  FArguments *local_1458;
  FArguments *local_1450;
  FString *local_1448;
  FString *local_1440;
  FScriptContainerElement *local_1438;
  FScriptContainerElement *local_1430;
  FScriptContainerElement *local_1428;
  FScriptContainerElement *local_1420;
  FScriptContainerElement *local_1418;
  code *local_1410;
  FScriptContainerElement *local_13f8;
  FScriptContainerElement *local_13f0;
  FString *local_13e8;
  FString *local_13e0;
  FLinearColor_u_0 *local_13d8;
  FLinearColor_u_0 *local_13d0;
  FDeprecateVector2DParameter local_13c8;
  FScriptContainerElement *local_13c0;
  FScriptContainerElement *local_13b8;
  FScriptContainerElement *local_13b0;
  FScriptContainerElement *local_13a8;
  FScriptContainerElement *local_13a0;
  FScriptContainerElement *local_1398;
  undefined4 local_1390;
  undefined4 local_138c;
  FScriptContainerElement *local_1388;
  FScriptContainerElement *local_1380;
  FScriptContainerElement *local_1378;
  longlong local_1370;
  longlong local_1368;
  FScriptContainerElement *local_1360;
  FScriptContainerElement *local_1358;
  FScriptContainerElement *local_1350;
  TUniquePtr<FSlateBrush,TDefaultDelete<FSlateBrush>_> *local_1348;
  TDefaultDelete<FSlateBrush> *local_1340;
  FSlateBrush *local_1338;
  TDefaultDelete<FSlateBrush> *local_1330;
  TDefaultDelete<FSlateVectorImageBrush> *local_1328;
  FSlateVectorImageBrush *local_1320;
  TDefaultDelete<FSlateVectorImageBrush> *local_1318;
  SUniformWrapPanel *local_1310;
  undefined4 local_1308;
  undefined4 local_1304;
  longlong local_1300;
  longlong local_12f8;
  longlong local_12f0;
  longlong local_12e8;
  undefined8 *local_12e0;
  FSlateBrush *local_12d8;
  FSlateBrush *local_12d0;
  TAttribute<FSlateBrush_const_*> *local_12c8;
  TAttribute<FSlateBrush_const_*> *local_12c0;
  FArguments *local_12b8;
  TAttribute<FText> *local_12b0;
  TAttribute<FText> *local_12a8;
  FArguments *local_12a0;
  SStarshipGallery *local_1298;
  FString *local_1290;
  <lambda_1> *local_1288;
  FArguments *local_1280;
  FArguments *local_1278;
  FScopedWidgetSlotArguments *local_1270;
  TAttribute<FText> *local_1268;
  TAttribute<FText> *local_1260;
  FArguments *local_1258;
  FArguments *local_1250;
  FSlotArguments *local_1248;
  FSlotArguments *local_1240;
  FArguments *local_1238;
  FSlotArguments *local_1230;
  FSlotArguments *local_1228;
  FArguments *local_1220;
  FArguments *local_1218;
  int local_1210;
  undefined1 *local_1208;
  TAttribute<EHorizontalAlignment> *local_1200;
  FString local_11f8;
  TSharedPtr<SUniformWrapPanel,1> local_11e8;
  FArguments *local_11d8;
  TSharedRef<SWidget,1> local_11d0;
  TSharedRef<SWidget,1> local_11c0;
  TSharedRef<SWidget,1> local_11b0;
  TVector2<double>_u_0 local_11a0;
  <lambda_1> local_1190;
  TSharedRef<SUniformWrapPanel,1> local_1178;
  FString local_1168;
  TSharedRef<SImage,1> local_1158;
  FText local_1148;
  TSharedRef<SVerticalBox,1> local_1138;
  TSharedRef<SUniformWrapPanel,1> local_1128;
  TSharedRef<STextBlock,1> local_1118;
  TSlateDecl<SUniformWrapPanel,RequiredArgs::T0RequiredArgs> local_1108;
  TCheckedPointerIterator<FString,int,0> local_10f0;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_10d8;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_10c0;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_10a8;
  FMargin local_1090;
  undefined1 local_1080 [32];
  TAttribute<FSlateBrush_const_*> local_1060;
  TAttribute<FMargin> local_1038;
  TAttribute<FText> local_1008;
  TAttribute<FText> local_fd8;
  FSlotArguments local_fa8;
  FSlotArguments local_ec0;
  FArguments local_dd8;
  FArguments local_bd0;
  FArguments local_928;
  FArguments local_610;
  TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,EVisibility___cdecl(void)>
  local_b8;
  FScopedWidgetSlotArguments local_88;
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x142f4918f;
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1588;
  local_11a0._s_0.X = __real_4034000000000000;
  local_11a0._s_0.Y = __real_4034000000000000;
  local_11d8 = SUniformWrapPanel::FArguments::FArguments(&local_928);
  local_1208 = local_1080;
  local_14f0 = HAlign_Left;
  local_1200 = TAttribute<enum_EHorizontalAlignment>::TAttribute<enum_EHorizontalAlignment>
                         (local_1208,&local_14f0);
  local_1458 = SUniformWrapPanel::FArguments::HAlign(local_11d8,local_1200);
  local_1468 = &local_1038;
  pFVar4 = FMargin::FMargin(&local_1090,__real_41400000,__real_41400000);
  local_1460 = TAttribute<FMargin>::TAttribute<FMargin>(local_1468,pFVar4);
  local_1450 = SUniformWrapPanel::FArguments::SlotPadding(local_1458,local_1460);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_1538);
  this_00 = MakeTDecl<SUniformWrapPanel,RequiredArgs::T0RequiredArgs>
                      (&local_1108,"SUniformWrapPanel",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\SStarshipGallery.cpp"
                       ,0x1b9,&local_1538);
  pTVar5 = TSlateDecl<SUniformWrapPanel,RequiredArgs::T0RequiredArgs>::operator<<=
                     (this_00,&local_1178,local_1450);
  TSharedPtr<SUniformWrapPanel,1>::TSharedPtr<SUniformWrapPanel,1><SUniformWrapPanel>
            (&local_11e8,pTVar5);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_1178.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_1108._Widget.SharedReferenceCount);
  SUniformWrapPanel::FArguments::~FArguments(&local_928);
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&local_14d8.AllocatorInstance);
  local_14d8.ArrayNum = 0;
  local_14d8.ArrayMax =
       TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                 (&local_14d8.AllocatorInstance);
  local_1448 = param_2;
  local_1440 = FPaths::EngineDir(&local_1168);
  ::operator/(&local_11f8,local_1440,local_1448);
  ::FString::~FString(&local_1168);
  local_14b8 = IFileManager::Get();
  local_1410 = *(code **)((longlong)*local_14b8 + 0x88);
  local_14ec = local_11f8.Data.ArrayNum;
  if (local_11f8.Data.ArrayNum == 0) {
    local_14c0 = (FScriptContainerElement *)
                 `FString::operator*'::__l2::<lambda_1>::operator()(local_1528);
  }
  else {
    local_1438 = local_11f8.Data.AllocatorInstance.Data;
    local_1430 = local_11f8.Data.AllocatorInstance.Data;
    local_1428 = local_11f8.Data.AllocatorInstance.Data;
    local_14c0 = local_11f8.Data.AllocatorInstance.Data;
  }
  local_1420 = local_14c0;
  local_1418 = local_14c0;
  (*local_1410)(local_14b8,&local_14d8,local_14c0,L"*.svg");
  local_1508 = &local_14d8;
  TCheckedPointerIterator<FString,int,0>::TCheckedPointerIterator<FString,int,0>
            (&local_1480,&local_14d8.ArrayNum,(FString *)local_14d8.AllocatorInstance.Data);
  local_13f8 = (local_1508->AllocatorInstance).Data;
  local_14e8 = local_1508->ArrayNum;
  local_13f0 = local_13f8;
  TCheckedPointerIterator<FString,int,0>::TCheckedPointerIterator<FString,int,0>
            (&local_10f0,&local_1508->ArrayNum,(FString *)(local_13f8 + (longlong)local_14e8 * 0x10)
            );
  while( true ) {
    if (*local_1480.CurrentNum != local_1480.InitialNum) {
      pTVar13 = local_1537;
      for (lVar12 = 1; lVar12 != 0; lVar12 = lVar12 + -1) {
        *pTVar13 = (T0RequiredArgs)0x0;
        pTVar13 = pTVar13 + 1;
      }
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(local_1537)
      ;
    }
    local_1537[1] = (T0RequiredArgs)(local_1480.Ptr != local_10f0.Ptr);
    local_1518 = (uint)(byte)local_1537[1];
    if (!(bool)local_1537[1]) break;
    local_13e8 = local_1480.Ptr;
    local_13e0 = local_1480.Ptr;
    ::FString::FString(&local_1490,local_1480.Ptr);
    local_1530 = (ForAnyElementType *)(*(longlong *)this + 0x2b8);
    local_14b0 = ::operator_new(0xb0);
    if (local_14b0 == (FSlateVectorImageBrush *)0x0) {
      local_14a8 = (FSlateVectorImageBrush *)0x0;
    }
    else {
      local_14a0._s_0.R = __real_3f800000;
      local_14a0._s_0.G = __real_3f800000;
      local_14a0._s_0.B = __real_3f800000;
      local_14a0._s_0.A = __real_3f800000;
      local_13d8 = &local_14a0;
      local_13d0 = local_13d8;
      UE::Slate::FDeprecateVector2DParameter::FDeprecateVector2DParameter
                (&local_13c8,(TVector2<double> *)&local_11a0._s_0);
      local_14a8 = FSlateVectorImageBrush::FSlateVectorImageBrush
                             (local_14b0,&local_1490,&local_13c8,(FLinearColor *)&local_13d0->_s_0,
                              NoTile);
    }
    pTVar6 = TUniquePtr<FSlateVectorImageBrush,TDefaultDelete<FSlateVectorImageBrush>_>::
             TUniquePtr<FSlateVectorImageBrush,TDefaultDelete<FSlateVectorImageBrush>_><FSlateVectorImageBrush>
                       (&local_14c8,local_14a8);
    TUniquePtr<FSlateBrush,TDefaultDelete<FSlateBrush>_>::
    TUniquePtr<FSlateBrush,TDefaultDelete<FSlateBrush>_><FSlateVectorImageBrush,TDefaultDelete<FSlateVectorImageBrush>_>
              (&local_14f8,pTVar6);
    local_14e0 = (FScriptContainerElement *)&local_14f8;
    local_13c0 = local_1530->Data;
    local_13b8 = local_13c0;
    local_13b0 = local_13c0;
    if ((local_13c0 <= local_14e0) &&
       (local_13a8 = local_1530->Data, local_13a0 = local_13a8, local_1398 = local_13a8,
       local_14e0 < local_13a8 + (longlong)*(int *)((longlong)&local_1530[1].Data + 4) * 8)) {
      local_1390 = 0;
      local_138c = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      local_1370 = (longlong)*(int *)&local_1530[1].Data;
      local_1368 = (longlong)*(int *)((longlong)&local_1530[1].Data + 4);
      local_1388 = local_1530->Data;
      local_1380 = local_1388;
      local_1378 = local_1388;
      local_1360 = local_1388;
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar7 = (TSharedRef<SWidget,1> *)(*pcVar1)();
        return pTVar7;
      }
    }
    if (*(int *)&local_1530[1].Data == *(int *)((longlong)&local_1530[1].Data + 4)) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,local_1530,(int *)((longlong)&local_1530[1].Data + 4));
      *(int *)&local_1530[1].Data = iVar3;
    }
    local_1514 = *(int *)&local_1530[1].Data;
    *(int *)&local_1530[1].Data = *(int *)&local_1530[1].Data + 1;
    local_1358 = local_1530->Data;
    local_1350 = local_1358 + (longlong)local_1514 * 8;
    local_1348 = ::operator_new(8,local_1350);
    TUniquePtr<FSlateBrush,TDefaultDelete<FSlateBrush>_>::
    TUniquePtr<FSlateBrush,TDefaultDelete<FSlateBrush>_>(local_1348,&local_14f8);
    local_1210 = local_1514;
    local_1340 = (TDefaultDelete<FSlateBrush> *)&local_14f8;
    local_1338 = local_14f8.Ptr;
    local_1330 = local_1340;
    TDefaultDelete<FSlateBrush>::operator()(local_1340,local_14f8.Ptr);
    local_1328 = (TDefaultDelete<FSlateVectorImageBrush> *)&local_14c8;
    local_1320 = local_14c8.Ptr;
    local_1318 = local_1328;
    TDefaultDelete<FSlateVectorImageBrush>::operator()(local_1328,local_14c8.Ptr);
    local_1310 = TSharedPtr<SUniformWrapPanel,1>::operator->(&local_11e8);
    local_1270 = SUniformWrapPanel::AddSlot(local_1310,&local_88);
    local_12b8 = SImage::FArguments::FArguments(&local_bd0);
    local_12c8 = &local_1060;
    lVar12 = *(longlong *)this;
    local_1500 = (longlong *)(lVar12 + 0x2b8);
    local_1520 = *(int *)(lVar12 + 0x2c0) + -1;
    local_150c = (uint)(-1 < local_1520);
    bVar2 = local_1520 < *(int *)(lVar12 + 0x2c0);
    local_1510 = (uint)bVar2;
    if (-1 >= local_1520 || !bVar2) {
      local_1308 = 0;
      local_1304 = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar7 = (TSharedRef<SWidget,1> *)(*pcVar1)();
        return pTVar7;
      }
    }
    local_1300 = *local_1500;
    local_12f0 = (longlong)((int)local_1500[1] + -1) * 8;
    local_12e0 = (undefined8 *)(local_1300 + local_12f0);
    local_12d8 = (FSlateBrush *)*local_12e0;
    local_12f8 = local_1300;
    local_12e8 = local_1300;
    local_12d0 = local_12d8;
    local_12c0 = TAttribute<FSlateBrush_const_*>::TAttribute<FSlateBrush_const_*><FSlateBrush_*>
                           (local_12c8,&local_12d0);
    local_12a0 = SImage::FArguments::Image(local_12b8,local_12c0);
    local_12b0 = &local_1008;
    pFVar8 = FText::FromString(&local_1148,&local_1490);
    local_12a8 = TAttribute<FText>::TAttribute<FText>(local_12b0,pFVar8);
    local_1280 = TSlateBaseNamedArgs<SImage>::ToolTipText
                           ((TSlateBaseNamedArgs<SImage> *)local_12a0,local_12a8);
    local_1298 = *(SStarshipGallery **)this;
    local_1290 = &local_1190.IconPath;
    local_1190.__this = local_1298;
    ::FString::FString(local_1290,&local_1490);
    local_1288 = &local_1190;
    TFunction<EVisibility___cdecl(void)>::
    TFunction<EVisibility___cdecl(void)><__SStarshipGallery::ConstructIconsGallery_::__l2::<lambda_2>::operator()_::__l6::<lambda_1>_>
              ((TFunction<EVisibility___cdecl(void)> *)&local_b8,local_1288);
    local_1278 = TSlateBaseNamedArgs<SImage>::Visibility_Lambda
                           ((TSlateBaseNamedArgs<SImage> *)local_1280,
                            (TFunction<EVisibility___cdecl(void)> *)&local_b8);
    RequiredArgs::T0RequiredArgs::T0RequiredArgs(local_1537 + 2);
    this_01 = MakeTDecl<SImage,RequiredArgs::T0RequiredArgs>
                        (&local_10d8,"SImage",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\SStarshipGallery.cpp"
                         ,0x1ca,local_1537 + 2);
    pTVar9 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                       (this_01,&local_1158,local_1278);
    TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SImage>(&local_11d0,pTVar9);
    TSlotBase<SUniformWrapPanel::FSlot>::FSlotArguments::operator[]
              ((FSlotArguments *)local_1270,&local_11d0);
    TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_11d0);
    TSharedRef<SImage,1>::~TSharedRef<SImage,1>(&local_1158);
    TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::
    ~TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>(&local_10d8);
    UE::Core::Private::Function::
    TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,EVisibility___cdecl(void)>::
    ~TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,EVisibility___cdecl(void)>
              (&local_b8);
    ::FString::~FString(&local_1190.IconPath);
    FText::~FText(&local_1148);
    SImage::FArguments::~FArguments(&local_bd0);
    TPanelChildren<SUniformWrapPanel::FSlot>::FScopedWidgetSlotArguments::
    ~FScopedWidgetSlotArguments(&local_88);
    ::FString::~FString(&local_1490);
    local_1480.Ptr = local_1480.Ptr + 1;
  }
  local_1238 = SVerticalBox::FArguments::FArguments(&local_dd8);
  this_02 = SVerticalBox::Slot(&local_ec0);
  local_1248 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(this_02);
  local_1258 = STextBlock::FArguments::FArguments(&local_610);
  local_1268 = &local_fd8;
  local_1260 = TAttribute<FText>::TAttribute<FText><FText>(local_1268,param_1);
  local_1250 = STextBlock::FArguments::Text(local_1258,local_1260);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(local_1537 + 3);
  this_03 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                      (&local_10a8,"STextBlock",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\SStarshipGallery.cpp"
                       ,0x1d5,local_1537 + 3);
  pTVar10 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_03,&local_1118,local_1250);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_11b0,pTVar10);
  local_1240 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_1248,&local_11b0);
  local_1220 = SVerticalBox::FArguments::operator+(local_1238,local_1240);
  local_1230 = SVerticalBox::Slot(&local_fa8);
  pTVar5 = TSharedPtr<SUniformWrapPanel,1>::ToSharedRef(&local_11e8,&local_1128);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SUniformWrapPanel>(&local_11c0,pTVar5);
  local_1228 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_1230,&local_11c0);
  local_1218 = SVerticalBox::FArguments::operator+(local_1220,local_1228);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(local_1533);
  this_04 = MakeTDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
                      (&local_10c0,"SVerticalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\SStarshipGallery.cpp"
                       ,0x1d1,local_1533);
  pTVar11 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_04,&local_1138,local_1218);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SVerticalBox>(__return_storage_ptr__,pTVar11);
  TSharedRef<SVerticalBox,1>::~TSharedRef<SVerticalBox,1>(&local_1138);
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>(&local_10c0);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_11c0);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_1128.SharedReferenceCount);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_fa8);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_11b0);
  TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_1118);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_10a8);
  STextBlock::FArguments::~FArguments(&local_610);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_ec0);
  SVerticalBox::FArguments::~FArguments(&local_dd8);
  ::FString::~FString(&local_11f8);
  TArray<FString,TSizedDefaultAllocator<32>_>::~TArray<FString,TSizedDefaultAllocator<32>_>
            (&local_14d8);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_11e8.SharedReferenceCount);
  FText::~FText(param_1);
  ::FString::~FString(param_2);
  return __return_storage_ptr__;
}

// operator() @ 142f4a0e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

TSharedRef<SWidget,1> * __thiscall
`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_2>::operator()
          (void *this,TSharedRef<SWidget,1> *__return_storage_ptr__,FName *param_1,FText *param_2,
          FName *param_3)

{
  bool bVar1;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> *this_00;
  TSharedRef<SHorizontalBox,1> *pTVar2;
  FScopedWidgetSlotArguments<SHorizontalBox::FSlot> *pFVar3;
  FSlotArguments *pFVar4;
  FSlateColor *pFVar5;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> *this_01;
  TSharedRef<SImage,1> *pTVar6;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> *this_02;
  TSharedRef<STextBlock,1> *pTVar7;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> *this_03;
  TSharedRef<SBox,1> *pTVar8;
  longlong lVar9;
  FName *pFVar10;
  longlong *plVar11;
  T0RequiredArgs local_1298;
  undefined1 local_1297;
  undefined1 local_1296;
  T0RequiredArgs local_1295;
  T0RequiredArgs local_1294;
  T0RequiredArgs local_1293 [3];
  uint local_1290;
  float local_128c;
  uint local_1288;
  float local_1284;
  Type local_1280;
  float local_127c;
  longlong local_1278;
  longlong local_1270;
  ISlateStyle *local_1268;
  TSharedPtr<SHorizontalBox,1> local_1260;
  longlong local_1250;
  longlong local_1248;
  SHorizontalBox *local_1240;
  undefined1 *local_1238;
  TAttribute<FSlateColor> *local_1230;
  TAttribute<FSlateColor> *local_1228;
  FArguments *local_1220;
  FName local_1218;
  code *local_1210;
  FSlateBrush *local_1208;
  TAttribute<FSlateBrush_const_*> *local_1200;
  TAttribute<FSlateBrush_const_*> *local_11f8;
  FArguments *local_11f0;
  FArguments *local_11e8;
  FSlotArguments *local_11e0;
  SHorizontalBox *local_11d8;
  longlong *local_11d0;
  undefined1 *local_11c8;
  FName local_11c0;
  ISlateStyle *local_11b8;
  FTextBlockStyle *local_11b0;
  FArguments *local_11a8;
  undefined1 *local_11a0;
  TAttribute<ETextJustify::Type> *local_1198;
  FArguments *local_1190;
  TAttribute<FText> *local_1188;
  TAttribute<FText> *local_1180;
  FArguments *local_1178;
  FArguments *local_1170;
  FSlotArguments *local_1168;
  TAttribute<FOptionalSize> *local_1160;
  TAttribute<FOptionalSize> *local_1158;
  FArguments *local_1150;
  FArguments *local_1148;
  FArguments *local_1140;
  FArguments *local_1138;
  TSharedRef<SWidget,1> local_1130;
  TSharedRef<SWidget,1> local_1120;
  TSharedRef<SWidget,1> local_1110;
  longlong *local_1100;
  longlong *local_10f8;
  TSharedRef<SHorizontalBox,1> local_10f0;
  TSharedRef<SImage,1> local_10e0;
  TSharedRef<STextBlock,1> local_10d0;
  TSharedRef<SBox,1> local_10c0;
  TSharedRef<SHorizontalBox,1> local_10b0;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_10a0;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_1088;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_1070;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_1058;
  FSlateColor local_1040;
  undefined1 local_1028 [32];
  TAttribute<FOptionalSize> local_1008;
  TAttribute<FSlateBrush_const_*> local_fe8;
  TAttribute<FSlateColor> local_fc0;
  TAttribute<FText> local_f90;
  FScopedWidgetSlotArguments<SHorizontalBox::FSlot> local_f60;
  FScopedWidgetSlotArguments<SHorizontalBox::FSlot> local_e60;
  FArguments local_d60;
  FArguments local_b58;
  FArguments local_8b0;
  FArguments local_570;
  undefined8 uStack_18;
  
  uStack_18 = 0x142f4a100;
  local_1138 = SHorizontalBox::FArguments::FArguments(&local_d60);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_1298);
  this_00 = MakeTDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
                      (&local_10a0,"SHorizontalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\SStarshipGallery.cpp"
                       ,0x317,&local_1298);
  pTVar2 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                     (this_00,&local_10f0,local_1138);
  TSharedPtr<SHorizontalBox,1>::TSharedPtr<SHorizontalBox,1><SHorizontalBox>(&local_1260,pTVar2);
  TSharedRef<SHorizontalBox,1>::~TSharedRef<SHorizontalBox,1>(&local_10f0);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>(&local_10a0);
  SHorizontalBox::FArguments::~FArguments(&local_d60);
  local_1278 = 0;
  pFVar10 = param_1;
  plVar11 = &local_1278;
  for (lVar9 = 8; lVar9 != 0; lVar9 = lVar9 + -1) {
    *(char *)plVar11 = (char)(pFVar10->ComparisonIndex).Value;
    pFVar10 = (FName *)((longlong)&(pFVar10->ComparisonIndex).Value + 1);
    plVar11 = (longlong *)((longlong)plVar11 + 1);
  }
  local_10f8 = &local_1278;
  local_1250 = local_1278;
  local_1297 = local_1278 == 0;
  local_1290 = (uint)(byte)local_1297;
  if ((bool)local_1297) {
    local_128c = 0.0;
  }
  else {
    local_128c = __real_41000000;
  }
  local_1284 = local_128c;
  local_1270 = 0;
  pFVar10 = param_1;
  plVar11 = &local_1270;
  for (lVar9 = 8; lVar9 != 0; lVar9 = lVar9 + -1) {
    *(char *)plVar11 = (char)(pFVar10->ComparisonIndex).Value;
    pFVar10 = (FName *)((longlong)&(pFVar10->ComparisonIndex).Value + 1);
    plVar11 = (longlong *)((longlong)plVar11 + 1);
  }
  local_1100 = &local_1270;
  local_1248 = local_1270;
  local_1296 = local_1270 == 0;
  local_1288 = (uint)(byte)local_1296;
  if (!(bool)local_1296) {
    local_1240 = TSharedPtr<SHorizontalBox,1>::operator->(&local_1260);
    pFVar3 = SHorizontalBox::AddSlot(local_1240,&local_f60);
    pFVar4 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth((FSlotArguments *)&pFVar3->_padding_);
    local_1238 = &pFVar4->field_0x48;
    local_11e0 = TAlignmentWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::VAlign
                           ((FSlotArgumentsMixin *)local_1238,VAlign_Center);
    local_1220 = SImage::FArguments::FArguments(&local_b58);
    local_1230 = &local_fc0;
    pFVar5 = FSlateColor::UseForeground(&local_1040);
    local_1228 = TAttribute<FSlateColor>::TAttribute<FSlateColor>(local_1230,pFVar5);
    local_11f0 = SImage::FArguments::ColorAndOpacity(local_1220,local_1228);
    local_1200 = &local_fe8;
    local_1268 = FAppStyle::Get();
    local_1210 = *(code **)((longlong)*local_1268 + 0x50);
    local_1218 = *param_1;
    local_1208 = (FSlateBrush *)(*local_1210)(local_1268,local_1218,0,0);
    local_11f8 = TAttribute<FSlateBrush_const_*>::TAttribute<FSlateBrush_const_*>
                           (local_1200,&local_1208);
    local_11e8 = SImage::FArguments::Image(local_11f0,local_11f8);
    RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_1295);
    this_01 = MakeTDecl<SImage,RequiredArgs::T0RequiredArgs>
                        (&local_1088,"SImage",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\SStarshipGallery.cpp"
                         ,800,&local_1295);
    pTVar6 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                       (this_01,&local_10e0,local_11e8);
    TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SImage>(&local_1130,pTVar6);
    TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
              ((FSlotArguments *)local_11e0,&local_1130);
    TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_1130);
    TSharedRef<SImage,1>::~TSharedRef<SImage,1>(&local_10e0);
    TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::
    ~TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>(&local_1088);
    SImage::FArguments::~FArguments(&local_b58);
    SBoxPanel::FScopedWidgetSlotArguments<SHorizontalBox::FSlot>::
    ~FScopedWidgetSlotArguments<SHorizontalBox::FSlot>(&local_f60);
  }
  bVar1 = FText::IsEmpty(param_2);
  if (!bVar1) {
    local_11d8 = TSharedPtr<SHorizontalBox,1>::operator->(&local_1260);
    pFVar3 = SHorizontalBox::AddSlot(local_11d8,&local_e60);
    local_11d0 = &pFVar3->_padding_;
    pFVar4 = TAlignmentWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::VAlign
                       ((FSlotArgumentsMixin *)local_11d0,VAlign_Center);
    local_11c8 = &pFVar4->field_0x18;
    pFVar4 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                       ((FSlotArgumentsMixin *)local_11c8,local_1284,__real_3f000000,0.0,0.0);
    local_1168 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar4);
    local_11a8 = STextBlock::FArguments::FArguments(&local_570);
    local_11b8 = FAppStyle::Get();
    local_11c0 = *param_3;
    local_11b0 = ISlateStyle::GetWidgetStyle<FTextBlockStyle>
                           (local_11b8,local_11c0,(char *)0x0,(FTextBlockStyle *)0x0);
    local_1190 = STextBlock::FArguments::TextStyle(local_11a8,local_11b0);
    local_11a0 = local_1028;
    local_1280 = Center;
    local_1198 = TAttribute<enum_ETextJustify::Type>::TAttribute<enum_ETextJustify::Type>
                           (local_11a0,&local_1280);
    local_1178 = STextBlock::FArguments::Justification(local_1190,local_1198);
    local_1188 = &local_f90;
    local_1180 = TAttribute<FText>::TAttribute<FText><FText>(local_1188,param_2);
    local_1170 = STextBlock::FArguments::Text(local_1178,local_1180);
    RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_1294);
    this_02 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                        (&local_1070,"STextBlock",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\SStarshipGallery.cpp"
                         ,0x32d,&local_1294);
    pTVar7 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                       (this_02,&local_10d0,local_1170);
    TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_1120,pTVar7);
    TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
              ((FSlotArguments *)local_1168,&local_1120);
    TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_1120);
    TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_10d0);
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
    ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_1070);
    STextBlock::FArguments::~FArguments(&local_570);
    SBoxPanel::FScopedWidgetSlotArguments<SHorizontalBox::FSlot>::
    ~FScopedWidgetSlotArguments<SHorizontalBox::FSlot>(&local_e60);
  }
  local_1150 = SBox::FArguments::FArguments(&local_8b0);
  local_1160 = &local_1008;
  local_127c = __real_41800000;
  local_1158 = TAttribute<FOptionalSize>::TAttribute<FOptionalSize><float>(local_1160,&local_127c);
  local_1148 = SBox::FArguments::HeightOverride(local_1150,local_1158);
  pTVar2 = TSharedPtr<SHorizontalBox,1>::ToSharedRef(&local_1260,&local_10b0);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SHorizontalBox>(&local_1110,pTVar2);
  local_1140 = SBox::FArguments::operator[](local_1148,&local_1110);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(local_1293);
  this_03 = MakeTDecl<SBox,RequiredArgs::T0RequiredArgs>
                      (&local_1058,"SBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\SStarshipGallery.cpp"
                       ,0x334,local_1293);
  pTVar8 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                     (this_03,&local_10c0,local_1140);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SBox>(__return_storage_ptr__,pTVar8);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_10c0.SharedReferenceCount);
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::~TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
            (&local_1058);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_1110);
  TSharedRef<SHorizontalBox,1>::~TSharedRef<SHorizontalBox,1>(&local_10b0);
  SBox::FArguments::~FArguments(&local_8b0);
  TSharedPtr<SHorizontalBox,1>::~TSharedPtr<SHorizontalBox,1>(&local_1260);
  return __return_storage_ptr__;
}

// operator() @ 142f4a880

/* WARNING: Removing unreachable block (ram,0x000142f4a8b5) */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
`SStarshipGallery::BuildToolbar'::__l2::<lambda_3>::operator()
          (void *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  uint uVar1;
  FNameEntryId local_218 [2];
  FNameEntryId *local_210;
  FNameEntryId *local_208;
  FName local_200;
  FName local_1f8;
  TSharedPtr<FExtender,1> *local_1f0;
  TSharedPtr<FUICommandList_const_,1> *local_1e8;
  FName local_1e0;
  ISlateStyle *local_1d8;
  TSharedPtr<FExtender,1> *local_1d0;
  TSharedPtr<FUICommandList_const_,1> *local_1c8;
  SStarshipGallery *local_1c0;
  FNameEntryId local_1b8;
  undefined4 uStack_1b4;
  TSharedPtr<FExtender,1> local_1b0;
  TSharedPtr<FUICommandList_const_,1> local_1a0;
  FMenuBuilder local_190;
  
  local_210 = FNameEntryId::FNameEntryId(local_218);
  uVar1 = local_210->Value;
  FNameEntryId::FNameEntryId(&local_1b8);
  uStack_1b4 = 0;
  local_200.Number = 0;
  local_200.ComparisonIndex.Value = uVar1;
  local_208 = &local_1b8;
  local_1f8 = local_200;
  local_1e0 = local_200;
  local_1b8.Value = uVar1;
  local_1d8 = FCoreStyle::Get();
  local_1f0 = &local_1b0;
  local_1d0 = TSharedPtr<FExtender,1>::TSharedPtr<FExtender,1>(local_1f0,(FNullTag *)0x0);
  local_1e8 = &local_1a0;
  local_1c8 = TSharedPtr<FUICommandList_const_,1>::TSharedPtr<FUICommandList_const_,1>
                        (local_1e8,(FNullTag *)0x0);
  FMenuBuilder::FMenuBuilder
            (&local_190,true,local_1c8,local_1d0,false,local_1d8,true,local_1e0,true);
  local_1c0 = *(SStarshipGallery **)this;
  SStarshipGallery::MakeMenuEntries(local_1c0,&local_190);
  FMenuBuilder::MakeWidget
            (&local_190,__return_storage_ptr__,
             (TDelegate<void___cdecl(TSharedRef<FMultiBox,1>_const_&,TSharedRef<SMultiBoxWidget,1>_const_&),FDefaultDelegateUserPolicy>
              *)0x0);
  FMenuBuilder::~FMenuBuilder(&local_190);
  return __return_storage_ptr__;
}

// operator() @ 142f4ad20

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SDockTab,1> * __thiscall
`SStarshipGallery::Construct'::__l2::<lambda_3>::operator()
          (void *this,TSharedRef<SDockTab,1> *__return_storage_ptr__,FSpawnTabArgs *param_1)

{
  TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs> *this_00;
  T0RequiredArgs local_4d8 [4];
  int local_4d4;
  FArguments *local_4d0;
  TAttribute<FMargin> *local_4c8;
  TAttribute<FMargin> *local_4c0;
  FArguments *local_4b8;
  SStarshipGallery *local_4b0;
  TSharedRef<SWidget,1> *local_4a8;
  FArguments *local_4a0;
  FArguments *local_498;
  TSharedRef<SWidget,1> local_490;
  TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs> local_480;
  TAttribute<FMargin> local_468;
  FArguments local_438;
  
  local_4d0 = SDockTab::FArguments::FArguments(&local_438);
  local_4b8 = SDockTab::FArguments::TabRole(local_4d0,PanelTab);
  local_4c8 = &local_468;
  local_4d4 = 0;
  local_4c0 = TAttribute<FMargin>::TAttribute<FMargin><int>(local_4c8,&local_4d4);
  local_4a0 = SDockTab::FArguments::ContentPadding(local_4b8,local_4c0);
  local_4b0 = *(SStarshipGallery **)this;
  local_4a8 = SStarshipGallery::ConstructIconsGallery(local_4b0,&local_490);
  local_498 = SDockTab::FArguments::operator[](local_4a0,local_4a8);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(local_4d8);
  this_00 = MakeTDecl<SDockTab,RequiredArgs::T0RequiredArgs>
                      (&local_480,"SDockTab",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\SStarshipGallery.cpp"
                       ,0x9d,local_4d8);
  TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs>::operator<<=
            (this_00,__return_storage_ptr__,local_498);
  TSharedPtr<SDockTab,1>::~TSharedPtr<SDockTab,1>(&local_480._Widget);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_490);
  SDockTab::FArguments::~FArguments(&local_438);
  return __return_storage_ptr__;
}

// operator() @ 142f4ae60

ECheckBoxState __thiscall
`SStarshipGallery::ConstructWidgetGallery'::__l4::<lambda_3>::operator()(void *this)

{
  return *(int *)(*(longlong *)this + 0x2c8) == *(int *)((longlong)this + 8);
}

// operator() @ 142f4b0e0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SDockTab,1> * __thiscall
`SStarshipGallery::Construct'::__l2::<lambda_4>::operator()
          (void *this,TSharedRef<SDockTab,1> *__return_storage_ptr__,FSpawnTabArgs *param_1)

{
  FSlateColor *pFVar1;
  TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs> *this_00;
  T0RequiredArgs local_538 [4];
  int local_534;
  FArguments *local_530;
  TAttribute<FMargin> *local_528;
  TAttribute<FMargin> *local_520;
  FArguments *local_518;
  TAttribute<FSlateColor> *local_510;
  TAttribute<FSlateColor> *local_508;
  FArguments *local_500;
  SStarshipGallery *local_4f8;
  TSharedRef<SWidget,1> *local_4f0;
  FArguments *local_4e8;
  FArguments *local_4e0;
  TSharedRef<SWidget,1> local_4d8;
  TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs> local_4c8;
  FSlateColor local_4b0;
  TAttribute<FMargin> local_498;
  TAttribute<FSlateColor> local_468;
  FArguments local_438;
  
  local_530 = SDockTab::FArguments::FArguments(&local_438);
  local_518 = SDockTab::FArguments::TabRole(local_530,PanelTab);
  local_528 = &local_498;
  local_534 = 0;
  local_520 = TAttribute<FMargin>::TAttribute<FMargin><int>(local_528,&local_534);
  local_500 = SDockTab::FArguments::ContentPadding(local_518,local_520);
  local_510 = &local_468;
  pFVar1 = FSlateColor::UseStyle(&local_4b0);
  local_508 = TAttribute<FSlateColor>::TAttribute<FSlateColor>(local_510,pFVar1);
  local_4e8 = SDockTab::FArguments::ForegroundColor(local_500,local_508);
  local_4f8 = *(SStarshipGallery **)this;
  local_4f0 = SStarshipGallery::ConstructWidgetGallery(local_4f8,&local_4d8);
  local_4e0 = SDockTab::FArguments::operator[](local_4e8,local_4f0);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(local_538);
  this_00 = MakeTDecl<SDockTab,RequiredArgs::T0RequiredArgs>
                      (&local_4c8,"SDockTab",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\SStarshipGallery.cpp"
                       ,0xac,local_538);
  TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs>::operator<<=
            (this_00,__return_storage_ptr__,local_4e0);
  TSharedPtr<SDockTab,1>::~TSharedPtr<SDockTab,1>(&local_4c8._Widget);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_4d8);
  SDockTab::FArguments::~FArguments(&local_438);
  return __return_storage_ptr__;
}

// operator() @ 142f4b270

void __thiscall
`SStarshipGallery::ConstructWidgetGallery'::__l4::<lambda_4>::operator()
          (void *this,ECheckBoxState param_1)

{
  if (param_1 == Checked) {
    *(undefined4 *)(*(longlong *)this + 0x2c8) = *(undefined4 *)((longlong)this + 8);
  }
  return;
}

// operator() @ 142f4b2a0

/* WARNING: Removing unreachable block (ram,0x000142f4b2d5) */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
`SStarshipGallery::BuildToolbar'::__l6::<lambda_4>::operator()
          (void *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  uint uVar1;
  FNameEntryId local_218 [2];
  FNameEntryId *local_210;
  FNameEntryId *local_208;
  FName local_200;
  FName local_1f8;
  TSharedPtr<FExtender,1> *local_1f0;
  TSharedPtr<FUICommandList_const_,1> *local_1e8;
  FName local_1e0;
  ISlateStyle *local_1d8;
  TSharedPtr<FExtender,1> *local_1d0;
  TSharedPtr<FUICommandList_const_,1> *local_1c8;
  SStarshipGallery *local_1c0;
  FNameEntryId local_1b8;
  undefined4 uStack_1b4;
  TSharedPtr<FExtender,1> local_1b0;
  TSharedPtr<FUICommandList_const_,1> local_1a0;
  FMenuBuilder local_190;
  
  local_210 = FNameEntryId::FNameEntryId(local_218);
  uVar1 = local_210->Value;
  FNameEntryId::FNameEntryId(&local_1b8);
  uStack_1b4 = 0;
  local_200.Number = 0;
  local_200.ComparisonIndex.Value = uVar1;
  local_208 = &local_1b8;
  local_1f8 = local_200;
  local_1e0 = local_200;
  local_1b8.Value = uVar1;
  local_1d8 = FCoreStyle::Get();
  local_1f0 = &local_1b0;
  local_1d0 = TSharedPtr<FExtender,1>::TSharedPtr<FExtender,1>(local_1f0,(FNullTag *)0x0);
  local_1e8 = &local_1a0;
  local_1c8 = TSharedPtr<FUICommandList_const_,1>::TSharedPtr<FUICommandList_const_,1>
                        (local_1e8,(FNullTag *)0x0);
  FMenuBuilder::FMenuBuilder
            (&local_190,true,local_1c8,local_1d0,false,local_1d8,true,local_1e0,true);
  local_1c0 = *(SStarshipGallery **)this;
  SStarshipGallery::MakeMenuEntries(local_1c0,&local_190);
  FMenuBuilder::MakeWidget
            (&local_190,__return_storage_ptr__,
             (TDelegate<void___cdecl(TSharedRef<FMultiBox,1>_const_&,TSharedRef<SMultiBoxWidget,1>_const_&),FDefaultDelegateUserPolicy>
              *)0x0);
  FMenuBuilder::~FMenuBuilder(&local_190);
  return __return_storage_ptr__;
}

// operator() @ 142f4b6c0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SDockTab,1> * __thiscall
`SStarshipGallery::Construct'::__l2::<lambda_5>::operator()
          (void *this,TSharedRef<SDockTab,1> *__return_storage_ptr__,FSpawnTabArgs *param_1)

{
  FSlateColor *pFVar1;
  TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs> *this_00;
  T0RequiredArgs local_538 [4];
  int local_534;
  FArguments *local_530;
  TAttribute<FMargin> *local_528;
  TAttribute<FMargin> *local_520;
  FArguments *local_518;
  TAttribute<FSlateColor> *local_510;
  TAttribute<FSlateColor> *local_508;
  FArguments *local_500;
  SStarshipGallery *local_4f8;
  TSharedRef<SWidget,1> *local_4f0;
  FArguments *local_4e8;
  FArguments *local_4e0;
  TSharedRef<SWidget,1> local_4d8;
  TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs> local_4c8;
  FSlateColor local_4b0;
  TAttribute<FMargin> local_498;
  TAttribute<FSlateColor> local_468;
  FArguments local_438;
  
  local_530 = SDockTab::FArguments::FArguments(&local_438);
  local_518 = SDockTab::FArguments::TabRole(local_530,PanelTab);
  local_528 = &local_498;
  local_534 = 0;
  local_520 = TAttribute<FMargin>::TAttribute<FMargin><int>(local_528,&local_534);
  local_500 = SDockTab::FArguments::ContentPadding(local_518,local_520);
  local_510 = &local_468;
  pFVar1 = FSlateColor::UseStyle(&local_4b0);
  local_508 = TAttribute<FSlateColor>::TAttribute<FSlateColor>(local_510,pFVar1);
  local_4e8 = SDockTab::FArguments::ForegroundColor(local_500,local_508);
  local_4f8 = *(SStarshipGallery **)this;
  local_4f0 = SStarshipGallery::ConstructListGallery(local_4f8,&local_4d8);
  local_4e0 = SDockTab::FArguments::operator[](local_4e8,local_4f0);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(local_538);
  this_00 = MakeTDecl<SDockTab,RequiredArgs::T0RequiredArgs>
                      (&local_4c8,"SDockTab",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\SStarshipGallery.cpp"
                       ,0xbb,local_538);
  TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs>::operator<<=
            (this_00,__return_storage_ptr__,local_4e0);
  TSharedPtr<SDockTab,1>::~TSharedPtr<SDockTab,1>(&local_4c8._Widget);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_4d8);
  SDockTab::FArguments::~FArguments(&local_438);
  return __return_storage_ptr__;
}

// operator() @ 142f4b850

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FText * __thiscall
`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_5>::operator()
          (void *this,FText *__return_storage_ptr__)

{
  TSharedPtr<FCulture,1> local_18;
  
  TSharedPtr<FCulture,1>::TSharedPtr<FCulture,1>(&local_18,(FNullTag *)0x0);
  FText::AsNumber(__return_storage_ptr__,*(int *)(*(longlong *)this + 0x2c8),
                  (FNumberFormattingOptions *)0x0,&local_18);
  TSharedPtr<FCulture,1>::~TSharedPtr<FCulture,1>(&local_18);
  return __return_storage_ptr__;
}

// operator() @ 142f4b8b0

/* WARNING: Removing unreachable block (ram,0x000142f4b8e5) */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
`SStarshipGallery::BuildToolbar'::__l6::<lambda_5>::operator()
          (void *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  uint uVar1;
  FNameEntryId local_218 [2];
  FNameEntryId *local_210;
  FNameEntryId *local_208;
  FName local_200;
  FName local_1f8;
  TSharedPtr<FExtender,1> *local_1f0;
  TSharedPtr<FUICommandList_const_,1> *local_1e8;
  FName local_1e0;
  ISlateStyle *local_1d8;
  TSharedPtr<FExtender,1> *local_1d0;
  TSharedPtr<FUICommandList_const_,1> *local_1c8;
  SStarshipGallery *local_1c0;
  FNameEntryId local_1b8;
  undefined4 uStack_1b4;
  TSharedPtr<FExtender,1> local_1b0;
  TSharedPtr<FUICommandList_const_,1> local_1a0;
  FMenuBuilder local_190;
  
  local_210 = FNameEntryId::FNameEntryId(local_218);
  uVar1 = local_210->Value;
  FNameEntryId::FNameEntryId(&local_1b8);
  uStack_1b4 = 0;
  local_200.Number = 0;
  local_200.ComparisonIndex.Value = uVar1;
  local_208 = &local_1b8;
  local_1f8 = local_200;
  local_1e0 = local_200;
  local_1b8.Value = uVar1;
  local_1d8 = FCoreStyle::Get();
  local_1f0 = &local_1b0;
  local_1d0 = TSharedPtr<FExtender,1>::TSharedPtr<FExtender,1>(local_1f0,(FNullTag *)0x0);
  local_1e8 = &local_1a0;
  local_1c8 = TSharedPtr<FUICommandList_const_,1>::TSharedPtr<FUICommandList_const_,1>
                        (local_1e8,(FNullTag *)0x0);
  FMenuBuilder::FMenuBuilder
            (&local_190,true,local_1c8,local_1d0,false,local_1d8,true,local_1e0,true);
  local_1c0 = *(SStarshipGallery **)this;
  SStarshipGallery::MakeMenuEntries(local_1c0,&local_190);
  FMenuBuilder::MakeWidget
            (&local_190,__return_storage_ptr__,
             (TDelegate<void___cdecl(TSharedRef<FMultiBox,1>_const_&,TSharedRef<SMultiBoxWidget,1>_const_&),FDefaultDelegateUserPolicy>
              *)0x0);
  FMenuBuilder::~FMenuBuilder(&local_190);
  return __return_storage_ptr__;
}

// operator() @ 142f4bd70

TSharedRef<STextBlock,1> * __thiscall
`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_6>::operator()
          (void *this,TSharedRef<STextBlock,1> *__return_storage_ptr__,
          TSharedPtr<FString,1> *param_1)

{
  FString *pFVar1;
  FText *pFVar2;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> *this_00;
  T0RequiredArgs local_5e8 [8];
  TAttribute<FText> *local_5e0;
  TAttribute<FText> *local_5d8;
  FArguments *local_5d0;
  FArguments *local_5c8;
  FText local_5c0;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_5b0;
  TAttribute<FText> local_598;
  FArguments local_568;
  
  local_5d0 = STextBlock::FArguments::FArguments(&local_568);
  local_5e0 = &local_598;
  pFVar1 = TSharedPtr<FString,1>::operator*<FString>(param_1);
  pFVar2 = FText::FromString(&local_5c0,pFVar1);
  local_5d8 = TAttribute<FText>::TAttribute<FText>(local_5e0,pFVar2);
  local_5c8 = STextBlock::FArguments::Text(local_5d0,local_5d8);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(local_5e8);
  this_00 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                      (&local_5b0,"STextBlock",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\SStarshipGallery.cpp"
                       ,0x43b,local_5e8);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
            (this_00,__return_storage_ptr__,local_5c8);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_5b0);
  FText::~FText(&local_5c0);
  STextBlock::FArguments::~FArguments(&local_568);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&param_1->SharedReferenceCount);
  return __return_storage_ptr__;
}

// operator() @ 142f4be80

TSharedRef<STextBlock,1> * __thiscall
`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_7>::operator()
          (void *this,TSharedRef<STextBlock,1> *__return_storage_ptr__,
          TSharedPtr<FString,1> *param_1)

{
  FString *pFVar1;
  FText *pFVar2;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> *this_00;
  T0RequiredArgs local_5e8 [8];
  TAttribute<FText> *local_5e0;
  TAttribute<FText> *local_5d8;
  FArguments *local_5d0;
  FArguments *local_5c8;
  FText local_5c0;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_5b0;
  TAttribute<FText> local_598;
  FArguments local_568;
  
  local_5d0 = STextBlock::FArguments::FArguments(&local_568);
  local_5e0 = &local_598;
  pFVar1 = TSharedPtr<FString,1>::operator*<FString>(param_1);
  pFVar2 = FText::FromString(&local_5c0,pFVar1);
  local_5d8 = TAttribute<FText>::TAttribute<FText>(local_5e0,pFVar2);
  local_5c8 = STextBlock::FArguments::Text(local_5d0,local_5d8);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(local_5e8);
  this_00 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                      (&local_5b0,"STextBlock",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\SStarshipGallery.cpp"
                       ,0x44f,local_5e8);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
            (this_00,__return_storage_ptr__,local_5c8);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_5b0);
  FText::~FText(&local_5c0);
  STextBlock::FArguments::~FArguments(&local_568);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&param_1->SharedReferenceCount);
  return __return_storage_ptr__;
}

// operator() @ 142f4bf90

void __thiscall
`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_8>::operator()
          (void *this,TSharedPtr<FString,1> *param_1,Type param_2)

{
  STextBlock *this_00;
  FString *pFVar1;
  FText *pFVar2;
  TAttribute<FText> *pTVar3;
  FText local_48;
  TAttribute<FText> local_38;
  
  if ((param_1->Object != (FString *)0x0) && (*(longlong *)(*(longlong *)this + 0x2e8) != 0)) {
    this_00 = TSharedPtr<STextBlock,1>::operator->
                        ((TSharedPtr<STextBlock,1> *)(*(longlong *)this + 0x2e8));
    pFVar1 = TSharedPtr<FString,1>::operator*<FString>(param_1);
    pFVar2 = FText::FromString(&local_48,pFVar1);
    pTVar3 = TAttribute<FText>::TAttribute<FText>(&local_38,pFVar2);
    STextBlock::SetText(this_00,pTVar3);
    FText::~FText(&local_48);
  }
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&param_1->SharedReferenceCount);
  return;
}

// operator() @ 142f4c0a0

void __thiscall
`SStarshipGallery::ConstructWidgetGallery'::__l2::<lambda_9>::operator()(void *this,float param_1)

{
  *(float *)(*(longlong *)this + 0x2e0) = param_1;
  return;
}

// BuildToolbar @ 142f58f60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Removing unreachable block (ram,0x000142f5b215) */
/* WARNING: Removing unreachable block (ram,0x000142f5af1b) */
/* WARNING: Removing unreachable block (ram,0x000142f5aac5) */
/* WARNING: Removing unreachable block (ram,0x000142f5a65f) */
/* WARNING: Removing unreachable block (ram,0x000142f5a435) */
/* WARNING: Removing unreachable block (ram,0x000142f59f50) */
/* WARNING: Removing unreachable block (ram,0x000142f59b9f) */
/* WARNING: Removing unreachable block (ram,0x000142f598a5) */
/* WARNING: Removing unreachable block (ram,0x000142f594de) */
/* WARNING: Removing unreachable block (ram,0x000142f591e4) */
/* WARNING: Removing unreachable block (ram,0x000142f590af) */
/* WARNING: Removing unreachable block (ram,0x000142f592d9) */
/* WARNING: Removing unreachable block (ram,0x000142f59770) */
/* WARNING: Removing unreachable block (ram,0x000142f5999a) */
/* WARNING: Removing unreachable block (ram,0x000142f59e0e) */
/* WARNING: Removing unreachable block (ram,0x000142f5a036) */
/* WARNING: Removing unreachable block (ram,0x000142f5a56a) */
/* WARNING: Removing unreachable block (ram,0x000142f5a864) */
/* WARNING: Removing unreachable block (ram,0x000142f5ade6) */
/* WARNING: Removing unreachable block (ram,0x000142f5b010) */
/* WARNING: Removing unreachable block (ram,0x000142f5b476) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
SStarshipGallery::BuildToolbar
          (SStarshipGallery *this,TSharedRef<SWidget,1> *__return_storage_ptr__,bool param_1)

{
  FName *pFVar1;
  FSlateIcon *pFVar2;
  FText *pFVar3;
  longlong lVar4;
  <lambda_1> *p<Var5;
  undefined1 *puVar6;
  <lambda_1> local_1f18 [8];
  FName *local_1f10;
  FName *local_1f08;
  FName *local_1f00;
  FName *local_1ef8;
  FName *local_1ef0;
  FName *local_1ee8;
  FName *local_1ee0;
  FName *local_1ed8;
  FName *local_1ed0;
  FName *local_1ec8;
  FName *local_1ec0;
  FName *local_1eb8;
  FName *local_1eb0;
  FName *local_1ea8;
  FName *local_1ea0;
  FName *local_1e98;
  FName *local_1e90;
  FName *local_1e88;
  FName *local_1e80;
  FName *local_1e78;
  FName *local_1e70;
  uint local_1e68;
  uint local_1e60;
  uint local_1e58;
  uint local_1e50;
  uint local_1e48;
  uint local_1e40;
  uint local_1e38;
  uint local_1e30;
  uint local_1e28;
  uint local_1e20;
  uint local_1e18;
  uint local_1e14;
  uint local_1e10;
  uint local_1e08;
  uint local_1e00;
  uint local_1df8;
  uint local_1df0;
  uint local_1de8;
  uint local_1de0;
  uint local_1dd8;
  uint local_1dd0;
  uint local_1dc8;
  uint local_1dc0;
  uint local_1db8;
  uint local_1db0;
  uint local_1da8;
  uint local_1da0;
  uint local_1d98;
  uint local_1d90;
  uint local_1d88;
  uint local_1d80;
  uint local_1d78;
  uint local_1d70;
  uint local_1d68;
  uint local_1d60;
  uint local_1d58;
  uint local_1d50;
  uint local_1d48;
  uint local_1d40;
  uint local_1d38;
  uint local_1d30;
  uint local_1d28;
  FNameEntryId *local_1d20;
  FNameEntryId *local_1d18;
  FNameEntryId *local_1d10;
  FNameEntryId *local_1d08;
  FNameEntryId *local_1d00;
  FNameEntryId *local_1cf8;
  FNameEntryId *local_1cf0;
  FNameEntryId *local_1ce8;
  FNameEntryId *local_1ce0;
  FNameEntryId *local_1cd8;
  FNameEntryId *local_1cd0;
  FNameEntryId *local_1cc8;
  FNameEntryId *local_1cc0;
  FNameEntryId *local_1cb8;
  FNameEntryId *local_1cb0;
  FNameEntryId *local_1ca8;
  FNameEntryId *local_1ca0;
  FNameEntryId *local_1c98;
  FNameEntryId *local_1c90;
  FNameEntryId *local_1c88;
  FNameEntryId *local_1c80;
  FNameEntryId local_1c78 [2];
  FNameEntryId local_1c70 [2];
  FNameEntryId local_1c68 [2];
  FNameEntryId local_1c60 [2];
  FNameEntryId local_1c58 [2];
  FNameEntryId local_1c50 [2];
  FNameEntryId local_1c48 [2];
  FNameEntryId local_1c40;
  FNameEntryId local_1c3c [2];
  FNameEntryId local_1c34 [2];
  FNameEntryId local_1c2c [2];
  FNameEntryId local_1c24 [2];
  FNameEntryId local_1c1c [2];
  FNameEntryId local_1c14 [2];
  FNameEntryId local_1c0c [2];
  FNameEntryId local_1c04 [2];
  FNameEntryId local_1bfc [2];
  FNameEntryId local_1bf4 [2];
  FNameEntryId local_1bec [2];
  FNameEntryId local_1be4 [2];
  FNameEntryId local_1bdc [3];
  TSharedPtr<FExtender,1> *local_1bd0;
  FName local_1bc8;
  TSharedPtr<FUICommandList_const_,1> *local_1bc0;
  TSharedPtr<FExtender,1> *local_1bb8;
  FName local_1bb0;
  TSharedPtr<FUICommandList_const_,1> *local_1ba8;
  TAttribute<FText> *local_1ba0;
  TAttribute<EVisibility> *local_1b98;
  FNameEntryId *local_1b90;
  FName *local_1b88;
  FName local_1b80;
  FName local_1b78;
  FName local_1b70;
  FName local_1b68;
  FName local_1b60;
  FName local_1b58;
  FNameEntryId *local_1b50;
  FName *local_1b48;
  FName local_1b40;
  FName local_1b38;
  FNameEntryId *local_1b30;
  FName *local_1b28;
  FName local_1b20;
  FName local_1b18;
  FName *local_1b10;
  FName local_1b08;
  FName local_1b00;
  FName local_1af8;
  FName local_1af0;
  FName local_1ae8;
  FName local_1ae0;
  FName local_1ad8;
  FName local_1ad0;
  FNameEntryId *local_1ac8;
  FName *local_1ac0;
  FName local_1ab8;
  FName local_1ab0;
  FName local_1aa8;
  TAttribute<FMenuEntryResizeParams> *local_1aa0;
  TAttribute<FText> *local_1a98;
  TAttribute<EVisibility> *local_1a90;
  FName local_1a88;
  FName local_1a80;
  TAttribute<FText> *local_1a78;
  TAttribute<EVisibility> *local_1a70;
  FNameEntryId *local_1a68;
  FName *local_1a60;
  FName local_1a58;
  FName local_1a50;
  FName local_1a48;
  FName local_1a40;
  FName local_1a38;
  FName local_1a30;
  FNameEntryId *local_1a28;
  FName *local_1a20;
  FName local_1a18;
  FName local_1a10;
  FNameEntryId *local_1a08;
  FName *local_1a00;
  FName local_19f8;
  FName local_19f0;
  FName *local_19e8;
  FName local_19e0;
  FName local_19d8;
  FName local_19d0;
  FName local_19c8;
  FName local_19c0;
  FName local_19b8;
  FName local_19b0;
  FName local_19a8;
  FNameEntryId *local_19a0;
  FName *local_1998;
  FName local_1990;
  FName local_1988;
  FName local_1980;
  TAttribute<FMenuEntryResizeParams> *local_1978;
  TAttribute<FText> *local_1970;
  TAttribute<EVisibility> *local_1968;
  FName local_1960;
  FName local_1958;
  undefined1 *local_1950;
  TAttribute<FText> *local_1948;
  TAttribute<EVisibility> *local_1940;
  FNameEntryId *local_1938;
  FName *local_1930;
  FName local_1928;
  FName local_1920;
  FName local_1918;
  FName local_1910;
  FName local_1908;
  FName local_1900;
  FName local_18f8;
  FNameEntryId *local_18f0;
  FName *local_18e8;
  FName local_18e0;
  FName local_18d8;
  FNameEntryId *local_18d0;
  FName *local_18c8;
  FName local_18c0;
  FName local_18b8;
  FName *local_18b0;
  FName local_18a8;
  FName local_18a0;
  FName local_1898;
  FName local_1890;
  FName local_1888;
  FName local_1880;
  FName local_1878;
  FName local_1870;
  <lambda_3> local_1868;
  <lambda_3> *local_1860;
  TAttribute<FMenuEntryResizeParams> *local_1858;
  TAttribute<EMenuPlacement> *local_1850;
  TAttribute<FText> *local_1848;
  TAttribute<EVisibility> *local_1840;
  FName local_1838;
  TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy> *local_1830;
  FName *local_1828;
  TAttribute<FMenuEntryResizeParams> *local_1820;
  FName local_1818;
  TAttribute<FText> *local_1810;
  TAttribute<EVisibility> *local_1808;
  FNameEntryId *local_1800;
  FName *local_17f8;
  FName local_17f0;
  FName local_17e8;
  FName local_17e0;
  FName local_17d8;
  FName local_17d0;
  FName local_17c8;
  FNameEntryId *local_17c0;
  FName *local_17b8;
  FName local_17b0;
  FName local_17a8;
  FNameEntryId *local_17a0;
  FName *local_1798;
  FName local_1790;
  FName local_1788;
  FName *local_1780;
  FName local_1778;
  FName local_1770;
  FName local_1768;
  FName local_1760;
  FName local_1758;
  FName local_1750;
  FName local_1748;
  FName local_1740;
  FNameEntryId *local_1738;
  FName *local_1730;
  FName local_1728;
  FName local_1720;
  FName local_1718;
  TAttribute<FMenuEntryResizeParams> *local_1710;
  TAttribute<FText> *local_1708;
  TAttribute<EVisibility> *local_1700;
  FName local_16f8;
  FName local_16f0;
  undefined1 *local_16e8;
  TAttribute<FText> *local_16e0;
  TAttribute<EVisibility> *local_16d8;
  FNameEntryId *local_16d0;
  FName *local_16c8;
  FName local_16c0;
  FName local_16b8;
  FName local_16b0;
  FName local_16a8;
  FName local_16a0;
  FName local_1698;
  FName local_1690;
  FName local_1688;
  <lambda_4> local_1680;
  <lambda_4> *local_1678;
  TAttribute<FMenuEntryResizeParams> *local_1670;
  TAttribute<EMenuPlacement> *local_1668;
  TAttribute<FText> *local_1660;
  TAttribute<EVisibility> *local_1658;
  FName local_1650;
  TAttribute<FSlateIcon> *local_1648;
  TAttribute<FText> *local_1640;
  TAttribute<FText> *local_1638;
  TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy> *local_1630;
  FUIAction *local_1628;
  TAttribute<FText> *local_1620;
  TAttribute<EVisibility> *local_1618;
  FNameEntryId *local_1610;
  FName *local_1608;
  FName local_1600;
  FName local_15f8;
  FName local_15f0;
  FName local_15e8;
  FName local_15e0;
  FName local_15d8;
  FNameEntryId *local_15d0;
  FName *local_15c8;
  FName local_15c0;
  FName local_15b8;
  FNameEntryId *local_15b0;
  FName *local_15a8;
  FName local_15a0;
  FName local_1598;
  FName *local_1590;
  FName local_1588;
  FName local_1580;
  FName local_1578;
  FName local_1570;
  FName local_1568;
  FName local_1560;
  FName local_1558;
  FName local_1550;
  FNameEntryId *local_1548;
  FName *local_1540;
  FName local_1538;
  FName local_1530;
  FName local_1528;
  TAttribute<FMenuEntryResizeParams> *local_1520;
  TAttribute<FText> *local_1518;
  TAttribute<EVisibility> *local_1510;
  FName local_1508;
  FName local_1500;
  undefined1 *local_14f8;
  TAttribute<FText> *local_14f0;
  TAttribute<EVisibility> *local_14e8;
  FNameEntryId *local_14e0;
  FName *local_14d8;
  FName local_14d0;
  FName local_14c8;
  FName local_14c0;
  FName local_14b8;
  FName local_14b0;
  FName local_14a8;
  FName local_14a0;
  FName local_1498;
  <lambda_5> local_1490;
  <lambda_5> *local_1488;
  TAttribute<FMenuEntryResizeParams> *local_1480;
  TAttribute<EMenuPlacement> *local_1478;
  TAttribute<FText> *local_1470;
  TAttribute<EVisibility> *local_1468;
  FName local_1460;
  TAttribute<FSlateIcon> *local_1458;
  TAttribute<FText> *local_1450;
  TAttribute<FText> *local_1448;
  TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy> *local_1440;
  FUIAction *local_1438;
  FName local_1430;
  FName local_1428;
  FName local_1420;
  FName local_1418 [2];
  FName local_1408;
  FName local_1400;
  FName local_13f8;
  FName local_13f0;
  FName local_13e8 [2];
  FName local_13d8;
  FName local_13d0;
  FName local_13c8;
  FName local_13c0;
  FName local_13b8 [2];
  FName local_13a8;
  FName local_13a0;
  FName local_1398;
  FName local_1390;
  FName local_1388 [2];
  FName local_1378;
  FName local_1370;
  FName local_1368;
  FName local_1360;
  FName local_1358;
  FName local_1350 [2];
  FName local_1340;
  FName local_1338;
  TSharedPtr<FToolBarButtonBlock,1> local_1330;
  FText local_1320;
  TSharedPtr<FToolBarButtonBlock,1> local_1310;
  FText local_1300;
  FText local_12f0;
  TSharedPtr<FToolBarButtonBlock,1> local_12e0;
  FText local_12d0;
  TSharedPtr<FToolBarButtonBlock,1> local_12c0;
  FText local_12b0;
  TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy> local_12a0;
  TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy> local_1288;
  TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy> local_1270;
  TSharedPtr<FExtender,1> local_1258;
  TSharedPtr<FUICommandList_const_,1> local_1248;
  TAttribute<FText> local_1238;
  TAttribute<FText> local_1208;
  TAttribute<FText> local_11d8;
  TAttribute<FText> local_11a8;
  TAttribute<FText> local_1178;
  TAttribute<FText> local_1148;
  TAttribute<FText> local_1118;
  TAttribute<FText> local_10e8;
  TAttribute<FText> local_10b8;
  TAttribute<FText> local_1088;
  FUIAction local_1058;
  TAttribute<FSlateIcon> local_ff0;
  TAttribute<FSlateIcon> local_fb0;
  TAttribute<FSlateIcon> local_f70;
  TAttribute<FSlateIcon> local_f30;
  TAttribute<FSlateIcon> local_ef0;
  TAttribute<FText> local_eb0;
  TAttribute<FText> local_e80;
  TAttribute<FText> local_e50;
  TAttribute<FText> local_e20;
  FUIAction local_df0;
  FToolBarBuilder local_d88;
  FSlateIcon local_c30;
  undefined1 local_c10 [32];
  TAttribute<EVisibility> local_bf0;
  TAttribute<EVisibility> local_bd0;
  FSlateIcon local_bb0;
  undefined1 local_b90 [32];
  TAttribute<EVisibility> local_b70;
  TAttribute<EVisibility> local_b50;
  FSlateIcon local_b30;
  undefined1 local_b10 [32];
  TAttribute<EVisibility> local_af0;
  FSlateIcon local_ad0;
  TAttribute<EVisibility> local_ab0;
  TAttribute<FSlateIcon> local_a90;
  TAttribute<FSlateIcon> local_a50;
  FSlateIcon local_a10;
  TAttribute<EVisibility> local_9f0;
  FUIAction local_9d0;
  TAttribute<FText> local_968;
  TAttribute<FText> local_938;
  TAttribute<FText> local_908;
  TAttribute<FText> local_8d8;
  TAttribute<FText> local_8a8;
  TAttribute<FText> local_878;
  TAttribute<FText> local_848;
  FUIAction local_818;
  FUIAction local_7b0;
  TAttribute<FMenuEntryResizeParams> local_748;
  TAttribute<FMenuEntryResizeParams> local_660;
  TAttribute<FMenuEntryResizeParams> local_578;
  TAttribute<FMenuEntryResizeParams> local_490;
  TAttribute<FMenuEntryResizeParams> local_3a8;
  TAttribute<FMenuEntryResizeParams> local_2c0;
  TAttribute<FMenuEntryResizeParams> local_1d8;
  TAttribute<FMenuEntryResizeParams> local_f0;
  
  local_f0.Getter._16_8_ = 0x142f58f7a;
  local_1bd0 = &local_1258;
  local_1bb8 = TSharedPtr<FExtender,1>::TSharedPtr<FExtender,1>(local_1bd0,(FNullTag *)0x0);
  local_1bc8 = FMultiBoxCustomization::None.CustomizationName;
  local_1bb0 = FMultiBoxCustomization::None.CustomizationName;
  local_1bc0 = &local_1248;
  local_1ba8 = TSharedPtr<FUICommandList_const_,1>::TSharedPtr<FUICommandList_const_,1>
                         (local_1bc0,(FNullTag *)0x0);
  FSlimHorizontalToolBarBuilder::FSlimHorizontalToolBarBuilder
            ((FSlimHorizontalToolBarBuilder *)&local_d88,local_1ba8,
             (FMultiBoxCustomization)local_1bb0,local_1bb8,false);
  FUIAction::FUIAction(&local_df0);
  local_1aa0 = TAttribute<FMenuEntryResizeParams>::TAttribute<FMenuEntryResizeParams>(&local_748);
  local_1ba0 = &local_968;
  local_1a98 = TAttribute<FText>::TAttribute<FText>(local_1ba0);
  local_1b98 = &local_ab0;
  local_1a90 = TAttribute<EVisibility>::TAttribute<EVisibility>(local_1b98);
  local_1f08 = &local_1430;
  local_1d18 = FNameEntryId::FNameEntryId(local_1c78);
  local_1dc8 = local_1d18->Value;
  local_1dc0 = local_1dc8;
  local_1b90 = local_1d18;
  FNameEntryId::FNameEntryId(&local_1f08->ComparisonIndex);
  local_1f08->Number = 0;
  (local_1f08->ComparisonIndex).Value = local_1dc0;
  local_1f08->Number = 0;
  local_1b88 = local_1f08;
  local_1b80 = *local_1f08;
  local_1f00 = &local_1428;
  local_1b78 = local_1b80;
  local_1b70 = local_1b80;
  local_1b68 = local_1b80;
  local_1b60 = local_1b80;
  local_1b58 = local_1b80;
  local_1a88 = local_1b80;
  local_1d10 = FNameEntryId::FNameEntryId(local_1c70);
  local_1db8 = local_1d10->Value;
  local_1db0 = local_1db8;
  local_1b50 = local_1d10;
  FNameEntryId::FNameEntryId(&local_1f00->ComparisonIndex);
  local_1f00->Number = 0;
  (local_1f00->ComparisonIndex).Value = local_1db0;
  local_1f00->Number = 0;
  local_1b48 = local_1f00;
  local_1b40 = *local_1f00;
  local_1ef8 = &local_1420;
  local_1b38 = local_1b40;
  local_1ae8 = local_1b40;
  local_1d08 = FNameEntryId::FNameEntryId(local_1c68);
  local_1da8 = local_1d08->Value;
  local_1da0 = local_1da8;
  local_1b30 = local_1d08;
  FNameEntryId::FNameEntryId(&local_1ef8->ComparisonIndex);
  local_1ef8->Number = 0;
  (local_1ef8->ComparisonIndex).Value = local_1da0;
  local_1ef8->Number = 0;
  local_1b28 = local_1ef8;
  local_1b20 = *local_1ef8;
  local_1b10 = local_1418;
  local_1b18 = local_1b20;
  local_1ae0 = local_1b20;
  pFVar1 = ::FName::FName(local_1b10,"Icons.box-perspective");
  local_1b08 = *pFVar1;
  local_1b00 = local_1b08;
  local_1ad8 = local_1b08;
  local_1af8 = FAppStyle::GetAppStyleSetName();
  local_1af8 = *(FName *)local_1af8;
  local_1af0 = local_1af8;
  local_1ad0 = local_1af8;
  pFVar2 = FSlateIcon::FSlateIcon(&local_a10,local_1af8,local_1ad8,local_1ae0,local_1ae8);
  TAttribute<FSlateIcon>::TAttribute<FSlateIcon>(&local_f30,pFVar2);
  pFVar3 = FText::GetEmpty();
  TAttribute<FText>::TAttribute<FText><FText>(&local_10e8,pFVar3);
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     (&local_1320,L"StarshipGallery",L"ToolBarButton1",L"Button");
  TAttribute<FText>::TAttribute<FText>(&local_1118,pFVar3);
  local_1ef0 = &local_1408;
  local_1d00 = FNameEntryId::FNameEntryId(local_1c60);
  local_1d98 = local_1d00->Value;
  local_1d90 = local_1d98;
  local_1ac8 = local_1d00;
  FNameEntryId::FNameEntryId(&local_1ef0->ComparisonIndex);
  local_1ef0->Number = 0;
  (local_1ef0->ComparisonIndex).Value = local_1d90;
  local_1ef0->Number = 0;
  local_1ac0 = local_1ef0;
  local_1ab8 = *local_1ef0;
  local_1ab0 = local_1ab8;
  local_1aa8 = local_1ab8;
  local_1a80 = local_1ab8;
  FToolBarBuilder::AddToolBarButton
            (&local_d88,&local_1330,&local_df0,local_1ab8,&local_1118,&local_10e8,&local_f30,Button,
             local_1a88,local_1a90,local_1a98,local_1aa0);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_1330.SharedReferenceCount);
  TAttribute<FText>::~TAttribute<FText>(&local_1118);
  FText::~FText(&local_1320);
  TAttribute<FText>::~TAttribute<FText>(&local_10e8);
  TAttribute<FSlateIcon>::~TAttribute<FSlateIcon>(&local_f30);
  TAttribute<FMenuEntryResizeParams>::~TAttribute<FMenuEntryResizeParams>(&local_748);
  FUIAction::FUIAction(&local_1058);
  p<Var5 = local_1f18;
  for (lVar4 = 1; lVar4 != 0; lVar4 = lVar4 + -1) {
    *p<Var5 = (<lambda_1>)0x0;
    p<Var5 = p<Var5 + 1;
  }
  TDelegateRegistration<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy>::
  BindLambda<_SStarshipGallery::BuildToolbar_::__l2::<lambda_1>_>
            (&local_1058.GetActionCheckState,local_1f18);
  puVar6 = (undefined1 *)((longlong)local_1f18 + 1);
  for (lVar4 = 1; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  TDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  BindLambda<_SStarshipGallery::BuildToolbar_::__l2::<lambda_2>_>
            ((TDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)&local_1058,
             (<lambda_2> *)((longlong)local_1f18 + 1));
  local_1978 = TAttribute<FMenuEntryResizeParams>::TAttribute<FMenuEntryResizeParams>(&local_660);
  local_1a78 = &local_8a8;
  local_1970 = TAttribute<FText>::TAttribute<FText>(local_1a78);
  local_1a70 = &local_9f0;
  local_1968 = TAttribute<EVisibility>::TAttribute<EVisibility>(local_1a70);
  local_1ee8 = &local_1400;
  local_1cf8 = FNameEntryId::FNameEntryId(local_1c58);
  local_1d88 = local_1cf8->Value;
  local_1d78 = local_1d88;
  local_1a68 = local_1cf8;
  FNameEntryId::FNameEntryId(&local_1ee8->ComparisonIndex);
  local_1ee8->Number = 0;
  (local_1ee8->ComparisonIndex).Value = local_1d78;
  local_1ee8->Number = 0;
  local_1a60 = local_1ee8;
  local_1a58 = *local_1ee8;
  local_1ee0 = &local_13f8;
  local_1a50 = local_1a58;
  local_1a48 = local_1a58;
  local_1a40 = local_1a58;
  local_1a38 = local_1a58;
  local_1a30 = local_1a58;
  local_1960 = local_1a58;
  local_1cf0 = FNameEntryId::FNameEntryId(local_1c50);
  local_1d70 = local_1cf0->Value;
  local_1d68 = local_1d70;
  local_1a28 = local_1cf0;
  FNameEntryId::FNameEntryId(&local_1ee0->ComparisonIndex);
  local_1ee0->Number = 0;
  (local_1ee0->ComparisonIndex).Value = local_1d68;
  local_1ee0->Number = 0;
  local_1a20 = local_1ee0;
  local_1a18 = *local_1ee0;
  local_1ed8 = &local_13f0;
  local_1a10 = local_1a18;
  local_19c0 = local_1a18;
  local_1ce8 = FNameEntryId::FNameEntryId(local_1c48);
  local_1d60 = local_1ce8->Value;
  local_1d58 = local_1d60;
  local_1a08 = local_1ce8;
  FNameEntryId::FNameEntryId(&local_1ed8->ComparisonIndex);
  local_1ed8->Number = 0;
  (local_1ed8->ComparisonIndex).Value = local_1d58;
  local_1ed8->Number = 0;
  local_1a00 = local_1ed8;
  local_19f8 = *local_1ed8;
  local_19e8 = local_13e8;
  local_19f0 = local_19f8;
  local_19b8 = local_19f8;
  pFVar1 = ::FName::FName(local_19e8,"Icons.box-perspective");
  local_19e0 = *pFVar1;
  local_19d8 = local_19e0;
  local_19b0 = local_19e0;
  local_19d0 = FAppStyle::GetAppStyleSetName();
  local_19d0 = *(FName *)local_19d0;
  local_19c8 = local_19d0;
  local_19a8 = local_19d0;
  pFVar2 = FSlateIcon::FSlateIcon(&local_c30,local_19d0,local_19b0,local_19b8,local_19c0);
  TAttribute<FSlateIcon>::TAttribute<FSlateIcon>(&local_f70,pFVar2);
  pFVar3 = FText::GetEmpty();
  TAttribute<FText>::TAttribute<FText><FText>(&local_10b8,pFVar3);
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     (&local_1300,L"StarshipGallery",L"ToolBarButtonToggle",L"Toggle");
  TAttribute<FText>::TAttribute<FText>(&local_1148,pFVar3);
  local_1ed0 = &local_13d8;
  local_1ce0 = FNameEntryId::FNameEntryId(&local_1c40);
  local_1d50 = local_1ce0->Value;
  local_1d48 = local_1d50;
  local_19a0 = local_1ce0;
  FNameEntryId::FNameEntryId(&local_1ed0->ComparisonIndex);
  local_1ed0->Number = 0;
  (local_1ed0->ComparisonIndex).Value = local_1d48;
  local_1ed0->Number = 0;
  local_1998 = local_1ed0;
  local_1990 = *local_1ed0;
  local_1988 = local_1990;
  local_1980 = local_1990;
  local_1958 = local_1990;
  FToolBarBuilder::AddToolBarButton
            (&local_d88,&local_1310,&local_1058,local_1990,&local_1148,&local_10b8,&local_f70,
             ToggleButton,local_1960,local_1968,local_1970,local_1978);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_1310.SharedReferenceCount);
  TAttribute<FText>::~TAttribute<FText>(&local_1148);
  FText::~FText(&local_1300);
  TAttribute<FText>::~TAttribute<FText>(&local_10b8);
  TAttribute<FSlateIcon>::~TAttribute<FSlateIcon>(&local_f70);
  TAttribute<FMenuEntryResizeParams>::~TAttribute<FMenuEntryResizeParams>(&local_660);
  FUIAction::FUIAction(&local_9d0);
  local_1858 = TAttribute<FMenuEntryResizeParams>::TAttribute<FMenuEntryResizeParams>(&local_578);
  local_1950 = local_c10;
  local_1850 = TAttribute<enum_EMenuPlacement>::TAttribute<enum_EMenuPlacement>(local_1950);
  local_1948 = &local_8d8;
  local_1848 = TAttribute<FText>::TAttribute<FText>(local_1948);
  local_1940 = &local_bd0;
  local_1840 = TAttribute<EVisibility>::TAttribute<EVisibility>(local_1940);
  local_1ec8 = &local_13d0;
  local_1cd8 = FNameEntryId::FNameEntryId(local_1c3c);
  local_1d40 = local_1cd8->Value;
  local_1d38 = local_1d40;
  local_1938 = local_1cd8;
  FNameEntryId::FNameEntryId(&local_1ec8->ComparisonIndex);
  local_1ec8->Number = 0;
  (local_1ec8->ComparisonIndex).Value = local_1d38;
  local_1ec8->Number = 0;
  local_1930 = local_1ec8;
  local_1928 = *local_1ec8;
  local_1f10 = &local_13c8;
  local_1920 = local_1928;
  local_1918 = local_1928;
  local_1910 = local_1928;
  local_1908 = local_1928;
  local_1900 = local_1928;
  local_18f8 = local_1928;
  local_1838 = local_1928;
  local_1cd0 = FNameEntryId::FNameEntryId(local_1c34);
  local_1d30 = local_1cd0->Value;
  local_1d28 = local_1d30;
  local_18f0 = local_1cd0;
  FNameEntryId::FNameEntryId(&local_1f10->ComparisonIndex);
  local_1f10->Number = 0;
  (local_1f10->ComparisonIndex).Value = local_1d28;
  local_1f10->Number = 0;
  local_18e8 = local_1f10;
  local_18e0 = *local_1f10;
  local_1ec0 = &local_13c0;
  local_18d8 = local_18e0;
  local_1888 = local_18e0;
  local_1cc8 = FNameEntryId::FNameEntryId(local_1c2c);
  local_1e68 = local_1cc8->Value;
  local_1e60 = local_1e68;
  local_18d0 = local_1cc8;
  FNameEntryId::FNameEntryId(&local_1ec0->ComparisonIndex);
  local_1ec0->Number = 0;
  (local_1ec0->ComparisonIndex).Value = local_1e60;
  local_1ec0->Number = 0;
  local_18c8 = local_1ec0;
  local_18c0 = *local_1ec0;
  local_18b0 = local_13b8;
  local_18b8 = local_18c0;
  local_1880 = local_18c0;
  pFVar1 = ::FName::FName(local_18b0,"Icons.box-perspective");
  local_18a8 = *pFVar1;
  local_18a0 = local_18a8;
  local_1878 = local_18a8;
  local_1898 = FAppStyle::GetAppStyleSetName();
  local_1898 = *(FName *)local_1898;
  local_1890 = local_1898;
  local_1870 = local_1898;
  pFVar2 = FSlateIcon::FSlateIcon(&local_ad0,local_1898,local_1878,local_1880,local_1888);
  TAttribute<FSlateIcon>::TAttribute<FSlateIcon>(&local_ff0,pFVar2);
  pFVar3 = FText::GetEmpty();
  TAttribute<FText>::TAttribute<FText><FText>(&local_1238,pFVar3);
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     (&local_12f0,L"StarshipGallery",L"Dropdown",L"Dropdown");
  TAttribute<FText>::TAttribute<FText>(&local_1088,pFVar3);
  local_1860 = &local_1868;
  local_1868.__this = this;
  local_1830 = TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>::
               CreateLambda<_SStarshipGallery::BuildToolbar_::__l2::<lambda_3>_>
                         (&local_1270,local_1860);
  FToolBarBuilder::AddComboButton
            (&local_d88,&local_9d0,local_1830,&local_1088,&local_1238,&local_ff0,false,local_1838,
             local_1840,local_1848,local_1850,Button,local_1858);
  TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>::
  ~TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>(&local_1270);
  TAttribute<FText>::~TAttribute<FText>(&local_1088);
  FText::~FText(&local_12f0);
  TAttribute<FText>::~TAttribute<FText>(&local_1238);
  TAttribute<FSlateIcon>::~TAttribute<FSlateIcon>(&local_ff0);
  TAttribute<FMenuEntryResizeParams>::~TAttribute<FMenuEntryResizeParams>(&local_578);
  if (param_1) {
    local_1820 = TAttribute<FMenuEntryResizeParams>::TAttribute<FMenuEntryResizeParams>(&local_f0);
    local_1828 = &local_13a8;
    pFVar1 = ::FName::FName(local_1828,"SettingsTest");
    local_1818 = *pFVar1;
    FToolBarBuilder::BeginSection(&local_d88,local_1818,true,local_1820);
    TAttribute<FMenuEntryResizeParams>::~TAttribute<FMenuEntryResizeParams>(&local_f0);
    local_1710 = TAttribute<FMenuEntryResizeParams>::TAttribute<FMenuEntryResizeParams>(&local_490);
    local_1810 = &local_848;
    local_1708 = TAttribute<FText>::TAttribute<FText>(local_1810);
    local_1808 = &local_bf0;
    local_1700 = TAttribute<EVisibility>::TAttribute<EVisibility>(local_1808);
    local_1eb8 = &local_13a0;
    local_1d20 = FNameEntryId::FNameEntryId(local_1c24);
    local_1e58 = local_1d20->Value;
    local_1e50 = local_1e58;
    local_1800 = local_1d20;
    FNameEntryId::FNameEntryId(&local_1eb8->ComparisonIndex);
    local_1eb8->Number = 0;
    (local_1eb8->ComparisonIndex).Value = local_1e50;
    local_1eb8->Number = 0;
    local_17f8 = local_1eb8;
    local_17f0 = *local_1eb8;
    local_1eb0 = &local_1398;
    local_17e8 = local_17f0;
    local_17e0 = local_17f0;
    local_17d8 = local_17f0;
    local_17d0 = local_17f0;
    local_17c8 = local_17f0;
    local_16f8 = local_17f0;
    local_1cb8 = FNameEntryId::FNameEntryId(local_1c1c);
    local_1e48 = local_1cb8->Value;
    local_1e40 = local_1e48;
    local_17c0 = local_1cb8;
    FNameEntryId::FNameEntryId(&local_1eb0->ComparisonIndex);
    local_1eb0->Number = 0;
    (local_1eb0->ComparisonIndex).Value = local_1e40;
    local_1eb0->Number = 0;
    local_17b8 = local_1eb0;
    local_17b0 = *local_1eb0;
    local_1ea8 = &local_1390;
    local_17a8 = local_17b0;
    local_1758 = local_17b0;
    local_1cb0 = FNameEntryId::FNameEntryId(local_1c14);
    local_1e38 = local_1cb0->Value;
    local_1e30 = local_1e38;
    local_17a0 = local_1cb0;
    FNameEntryId::FNameEntryId(&local_1ea8->ComparisonIndex);
    local_1ea8->Number = 0;
    (local_1ea8->ComparisonIndex).Value = local_1e30;
    local_1ea8->Number = 0;
    local_1798 = local_1ea8;
    local_1790 = *local_1ea8;
    local_1780 = local_1388;
    local_1788 = local_1790;
    local_1750 = local_1790;
    pFVar1 = ::FName::FName(local_1780,"Icons.box-perspective");
    local_1778 = *pFVar1;
    local_1770 = local_1778;
    local_1748 = local_1778;
    local_1768 = FAppStyle::GetAppStyleSetName();
    local_1768 = *(FName *)local_1768;
    local_1760 = local_1768;
    local_1740 = local_1768;
    pFVar2 = FSlateIcon::FSlateIcon(&local_bb0,local_1768,local_1748,local_1750,local_1758);
    TAttribute<FSlateIcon>::TAttribute<FSlateIcon>(&local_fb0,pFVar2);
    pFVar3 = FText::GetEmpty();
    TAttribute<FText>::TAttribute<FText><FText>(&local_11d8,pFVar3);
    pFVar3 = FText::AsLocalizable_Advanced_LocText
                       (&local_12d0,L"StarshipGallery",L"ToolBarButton1",L"Button");
    TAttribute<FText>::TAttribute<FText>(&local_1208,pFVar3);
    local_1ea0 = &local_1378;
    local_1ca8 = FNameEntryId::FNameEntryId(local_1c0c);
    local_1e28 = local_1ca8->Value;
    local_1e20 = local_1e28;
    local_1738 = local_1ca8;
    FNameEntryId::FNameEntryId(&local_1ea0->ComparisonIndex);
    local_1ea0->Number = 0;
    (local_1ea0->ComparisonIndex).Value = local_1e20;
    local_1ea0->Number = 0;
    local_1730 = local_1ea0;
    local_1728 = *local_1ea0;
    local_1720 = local_1728;
    local_1718 = local_1728;
    local_16f0 = local_1728;
    FToolBarBuilder::AddToolBarButton
              (&local_d88,&local_12e0,&local_df0,local_1728,&local_1208,&local_11d8,&local_fb0,
               Button,local_16f8,local_1700,local_1708,local_1710);
    SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
              (&local_12e0.SharedReferenceCount);
    TAttribute<FText>::~TAttribute<FText>(&local_1208);
    FText::~FText(&local_12d0);
    TAttribute<FText>::~TAttribute<FText>(&local_11d8);
    TAttribute<FSlateIcon>::~TAttribute<FSlateIcon>(&local_fb0);
    TAttribute<FMenuEntryResizeParams>::~TAttribute<FMenuEntryResizeParams>(&local_490);
    local_1670 = TAttribute<FMenuEntryResizeParams>::TAttribute<FMenuEntryResizeParams>(&local_3a8);
    local_16e8 = local_b90;
    local_1668 = TAttribute<enum_EMenuPlacement>::TAttribute<enum_EMenuPlacement>(local_16e8);
    local_16e0 = &local_878;
    local_1660 = TAttribute<FText>::TAttribute<FText>(local_16e0);
    local_16d8 = &local_b70;
    local_1658 = TAttribute<EVisibility>::TAttribute<EVisibility>(local_16d8);
    local_1e98 = &local_1370;
    local_1ca0 = FNameEntryId::FNameEntryId(local_1c04);
    local_1e18 = local_1ca0->Value;
    local_1dd0 = local_1e18;
    local_16d0 = local_1ca0;
    FNameEntryId::FNameEntryId(&local_1e98->ComparisonIndex);
    local_1e98->Number = 0;
    (local_1e98->ComparisonIndex).Value = local_1dd0;
    local_1e98->Number = 0;
    local_16c8 = local_1e98;
    local_16c0 = *local_1e98;
    local_16b8 = local_16c0;
    local_16b0 = local_16c0;
    local_16a8 = local_16c0;
    local_16a0 = local_16c0;
    local_1698 = local_16c0;
    local_1690 = local_16c0;
    local_1688 = local_16c0;
    local_1650 = local_16c0;
    local_1648 = TAttribute<FSlateIcon>::TAttribute<FSlateIcon>(&local_a90);
    local_1640 = TAttribute<FText>::TAttribute<FText>(&local_e20);
    local_1638 = TAttribute<FText>::TAttribute<FText>(&local_e50);
    local_1678 = &local_1680;
    local_1680.__this = this;
    local_1630 = TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>::
                 CreateLambda<_SStarshipGallery::BuildToolbar_::__l6::<lambda_4>_>
                           (&local_12a0,local_1678);
    local_1628 = FUIAction::FUIAction(&local_7b0);
    FToolBarBuilder::AddComboButton
              (&local_d88,local_1628,local_1630,local_1638,local_1640,local_1648,true,local_1650,
               local_1658,local_1660,local_1668,Button,local_1670);
    FUIAction::~FUIAction(&local_7b0);
    TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>::
    ~TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>(&local_12a0);
    TAttribute<FText>::~TAttribute<FText>(&local_e50);
    TAttribute<FText>::~TAttribute<FText>(&local_e20);
    TAttribute<FSlateIcon>::~TAttribute<FSlateIcon>(&local_a90);
    TAttribute<FMenuEntryResizeParams>::~TAttribute<FMenuEntryResizeParams>(&local_3a8);
    local_1520 = TAttribute<FMenuEntryResizeParams>::TAttribute<FMenuEntryResizeParams>(&local_2c0);
    local_1620 = &local_938;
    local_1518 = TAttribute<FText>::TAttribute<FText>(local_1620);
    local_1618 = &local_b50;
    local_1510 = TAttribute<EVisibility>::TAttribute<EVisibility>(local_1618);
    local_1e90 = &local_1368;
    local_1c98 = FNameEntryId::FNameEntryId(local_1bfc);
    local_1e14 = local_1c98->Value;
    local_1e10 = local_1e14;
    local_1610 = local_1c98;
    FNameEntryId::FNameEntryId(&local_1e90->ComparisonIndex);
    local_1e90->Number = 0;
    (local_1e90->ComparisonIndex).Value = local_1e10;
    local_1e90->Number = 0;
    local_1608 = local_1e90;
    local_1600 = *local_1e90;
    local_1e88 = &local_1360;
    local_15f8 = local_1600;
    local_15f0 = local_1600;
    local_15e8 = local_1600;
    local_15e0 = local_1600;
    local_15d8 = local_1600;
    local_1508 = local_1600;
    local_1c90 = FNameEntryId::FNameEntryId(local_1bf4);
    local_1e08 = local_1c90->Value;
    local_1e00 = local_1e08;
    local_15d0 = local_1c90;
    FNameEntryId::FNameEntryId(&local_1e88->ComparisonIndex);
    local_1e88->Number = 0;
    (local_1e88->ComparisonIndex).Value = local_1e00;
    local_1e88->Number = 0;
    local_15c8 = local_1e88;
    local_15c0 = *local_1e88;
    local_1e80 = &local_1358;
    local_15b8 = local_15c0;
    local_1568 = local_15c0;
    local_1c88 = FNameEntryId::FNameEntryId(local_1bec);
    local_1df8 = local_1c88->Value;
    local_1df0 = local_1df8;
    local_15b0 = local_1c88;
    FNameEntryId::FNameEntryId(&local_1e80->ComparisonIndex);
    local_1e80->Number = 0;
    (local_1e80->ComparisonIndex).Value = local_1df0;
    local_1e80->Number = 0;
    local_15a8 = local_1e80;
    local_15a0 = *local_1e80;
    local_1590 = local_1350;
    local_1598 = local_15a0;
    local_1560 = local_15a0;
    pFVar1 = ::FName::FName(local_1590,"Icons.box-perspective");
    local_1588 = *pFVar1;
    local_1580 = local_1588;
    local_1558 = local_1588;
    local_1578 = FAppStyle::GetAppStyleSetName();
    local_1578 = *(FName *)local_1578;
    local_1570 = local_1578;
    local_1550 = local_1578;
    pFVar2 = FSlateIcon::FSlateIcon(&local_b30,local_1578,local_1558,local_1560,local_1568);
    TAttribute<FSlateIcon>::TAttribute<FSlateIcon>(&local_ef0,pFVar2);
    pFVar3 = FText::GetEmpty();
    TAttribute<FText>::TAttribute<FText><FText>(&local_1178,pFVar3);
    pFVar3 = FText::AsLocalizable_Advanced_LocText
                       (&local_12b0,L"StarshipGallery",L"ToolBarButtonToggle",L"Toggle");
    TAttribute<FText>::TAttribute<FText>(&local_11a8,pFVar3);
    local_1e78 = &local_1340;
    local_1c80 = FNameEntryId::FNameEntryId(local_1be4);
    local_1de8 = local_1c80->Value;
    local_1de0 = local_1de8;
    local_1548 = local_1c80;
    FNameEntryId::FNameEntryId(&local_1e78->ComparisonIndex);
    local_1e78->Number = 0;
    (local_1e78->ComparisonIndex).Value = local_1de0;
    local_1e78->Number = 0;
    local_1540 = local_1e78;
    local_1538 = *local_1e78;
    local_1530 = local_1538;
    local_1528 = local_1538;
    local_1500 = local_1538;
    FToolBarBuilder::AddToolBarButton
              (&local_d88,&local_12c0,&local_1058,local_1538,&local_11a8,&local_1178,&local_ef0,
               ToggleButton,local_1508,local_1510,local_1518,local_1520);
    SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
              (&local_12c0.SharedReferenceCount);
    TAttribute<FText>::~TAttribute<FText>(&local_11a8);
    FText::~FText(&local_12b0);
    TAttribute<FText>::~TAttribute<FText>(&local_1178);
    TAttribute<FSlateIcon>::~TAttribute<FSlateIcon>(&local_ef0);
    TAttribute<FMenuEntryResizeParams>::~TAttribute<FMenuEntryResizeParams>(&local_2c0);
    local_1480 = TAttribute<FMenuEntryResizeParams>::TAttribute<FMenuEntryResizeParams>(&local_1d8);
    local_14f8 = local_b10;
    local_1478 = TAttribute<enum_EMenuPlacement>::TAttribute<enum_EMenuPlacement>(local_14f8);
    local_14f0 = &local_908;
    local_1470 = TAttribute<FText>::TAttribute<FText>(local_14f0);
    local_14e8 = &local_af0;
    local_1468 = TAttribute<EVisibility>::TAttribute<EVisibility>(local_14e8);
    local_1e70 = &local_1338;
    local_1cc0 = FNameEntryId::FNameEntryId(local_1bdc);
    local_1dd8 = local_1cc0->Value;
    local_1d80 = local_1dd8;
    local_14e0 = local_1cc0;
    FNameEntryId::FNameEntryId(&local_1e70->ComparisonIndex);
    local_1e70->Number = 0;
    (local_1e70->ComparisonIndex).Value = local_1d80;
    local_1e70->Number = 0;
    local_14d8 = local_1e70;
    local_14d0 = *local_1e70;
    local_14c8 = local_14d0;
    local_14c0 = local_14d0;
    local_14b8 = local_14d0;
    local_14b0 = local_14d0;
    local_14a8 = local_14d0;
    local_14a0 = local_14d0;
    local_1498 = local_14d0;
    local_1460 = local_14d0;
    local_1458 = TAttribute<FSlateIcon>::TAttribute<FSlateIcon>(&local_a50);
    local_1450 = TAttribute<FText>::TAttribute<FText>(&local_e80);
    local_1448 = TAttribute<FText>::TAttribute<FText>(&local_eb0);
    local_1488 = &local_1490;
    local_1490.__this = this;
    local_1440 = TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>::
                 CreateLambda<_SStarshipGallery::BuildToolbar_::__l6::<lambda_5>_>
                           (&local_1288,local_1488);
    local_1438 = FUIAction::FUIAction(&local_818);
    FToolBarBuilder::AddComboButton
              (&local_d88,local_1438,local_1440,local_1448,local_1450,local_1458,true,local_1460,
               local_1468,local_1470,local_1478,Button,local_1480);
    FUIAction::~FUIAction(&local_818);
    TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>::
    ~TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>(&local_1288);
    TAttribute<FText>::~TAttribute<FText>(&local_eb0);
    TAttribute<FText>::~TAttribute<FText>(&local_e80);
    TAttribute<FSlateIcon>::~TAttribute<FSlateIcon>(&local_a50);
    TAttribute<FMenuEntryResizeParams>::~TAttribute<FMenuEntryResizeParams>(&local_1d8);
    FToolBarBuilder::EndSection(&local_d88);
  }
  FMultiBoxBuilder::MakeWidget
            ((FMultiBoxBuilder *)&local_d88,__return_storage_ptr__,
             (TDelegate<void___cdecl(TSharedRef<FMultiBox,1>_const_&,TSharedRef<SMultiBoxWidget,1>_const_&),FDefaultDelegateUserPolicy>
              *)0x0);
  FUIAction::~FUIAction(&local_9d0);
  FUIAction::~FUIAction(&local_1058);
  FUIAction::~FUIAction(&local_df0);
  FSlimHorizontalToolBarBuilder::~FSlimHorizontalToolBarBuilder
            ((FSlimHorizontalToolBarBuilder *)&local_d88);
  return __return_storage_ptr__;
}

// Construct @ 142f76c00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SStarshipGallery::Construct(SStarshipGallery *this,FArguments *param_1)

{
  FName *pFVar1;
  TSharedRef<FTabManager::FLayout,1> *this_00;
  FLayout *this_01;
  TSharedRef<FTabManager::FArea,1> *pTVar2;
  FArea *this_02;
  TSharedRef<FTabManager::FStack,1> *pTVar3;
  FStack *pFVar4;
  TSharedRef<FTabManager::FLayoutNode,1> *pTVar5;
  TSharedRef<FGlobalTabmanager,1> *pTVar6;
  TSharedRef<SWidget,1> *pTVar7;
  longlong lVar8;
  TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy> *pTVar9;
  <lambda_1> local_3e8;
  <lambda_1> *local_3e0;
  FName *local_3d8;
  FName local_3d0;
  FName local_3c8;
  TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy> *local_3c0;
  TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
  *local_3b8;
  FName local_3b0;
  FGlobalTabmanager *local_3a8;
  <lambda_2> local_3a0;
  <lambda_2> *local_398;
  FName *local_390;
  FName local_388;
  FName local_380;
  TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy> *local_378;
  TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
  *local_370;
  FName local_368;
  FGlobalTabmanager *local_360;
  <lambda_3> local_358;
  <lambda_3> *local_350;
  FName *local_348;
  FName local_340;
  FName local_338;
  TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy> *local_330;
  TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
  *local_328;
  FName local_320;
  FGlobalTabmanager *local_318;
  <lambda_4> local_310;
  <lambda_4> *local_308;
  FName *local_300;
  FName local_2f8;
  FName local_2f0;
  TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy> *local_2e8;
  TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
  *local_2e0;
  FName local_2d8;
  FGlobalTabmanager *local_2d0;
  <lambda_5> local_2c8;
  <lambda_5> *local_2c0;
  FName *local_2b8;
  FName local_2b0;
  FName local_2a8;
  TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy> *local_2a0;
  TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
  *local_298;
  FName local_290;
  FGlobalTabmanager *local_288;
  TSharedPtr<SWindow,1> *local_280;
  FGlobalTabmanager *local_278;
  TSharedPtr<SWidget,1> *local_270;
  TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *local_268;
  TSharedRef<FTabManager::FLayout,1> local_260;
  FName local_250;
  FName local_248;
  FName local_240;
  FName local_238;
  FName local_230;
  FName local_228;
  FName local_220;
  FName local_218;
  FName local_210;
  FName local_208;
  FName local_200;
  FName local_1f8;
  FTabId local_1f0;
  TSharedRef<FTabManager::FArea,1> local_1e0;
  TSharedRef<FTabManager::FStack,1> local_1d0;
  TSharedRef<FTabManager::FStack,1> local_1c0;
  TSharedRef<FTabManager::FStack,1> local_1b0;
  TSharedRef<FTabManager::FStack,1> local_1a0;
  TSharedRef<FTabManager::FStack,1> local_190;
  TSharedRef<FTabManager::FStack,1> local_180;
  TSharedRef<FTabManager::FStack,1> local_170;
  TSharedRef<FTabManager::FArea,1> local_160;
  TSharedRef<FTabManager::FLayout,1> local_150;
  TSharedRef<SWidget,1> local_140;
  TSharedPtr<SWidget,1> local_130;
  TSharedPtr<SWindow,1> local_120;
  TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy> local_110;
  TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy> local_f8;
  TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy> local_e0;
  TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy> local_c8;
  TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy> local_b0;
  TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
  local_98;
  TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
  local_80;
  TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
  local_68;
  TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
  local_50;
  TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
  local_38;
  TSharedRef<FTabManager::FLayoutNode,1> local_20;
  
  pFVar1 = ::FName::FName(&local_250,"StarshipStyleGallery");
  this_00 = FTabManager::NewLayout(&local_150,*pFVar1);
  this_01 = TSharedRef<FTabManager::FLayout,1>::operator->(this_00);
  pTVar2 = FTabManager::NewPrimaryArea(&local_160);
  this_02 = TSharedRef<FTabManager::FArea,1>::operator->(pTVar2);
  pTVar3 = FTabManager::NewStack(&local_170);
  pFVar4 = TSharedRef<FTabManager::FStack,1>::operator->(pTVar3);
  pFVar1 = ::FName::FName(&local_248,"Colors");
  pTVar3 = FTabManager::FStack::AddTab(pFVar4,&local_180,*pFVar1,OpenedTab);
  pFVar4 = TSharedRef<FTabManager::FStack,1>::operator->(pTVar3);
  pFVar1 = ::FName::FName(&local_240,"Text");
  pTVar3 = FTabManager::FStack::AddTab(pFVar4,&local_190,*pFVar1,OpenedTab);
  pFVar4 = TSharedRef<FTabManager::FStack,1>::operator->(pTVar3);
  pFVar1 = ::FName::FName(&local_238,"Icons");
  pTVar3 = FTabManager::FStack::AddTab(pFVar4,&local_1a0,*pFVar1,OpenedTab);
  pFVar4 = TSharedRef<FTabManager::FStack,1>::operator->(pTVar3);
  pFVar1 = ::FName::FName(&local_230,"Starship Widgets");
  pTVar3 = FTabManager::FStack::AddTab(pFVar4,&local_1b0,*pFVar1,OpenedTab);
  pFVar4 = TSharedRef<FTabManager::FStack,1>::operator->(pTVar3);
  pFVar1 = ::FName::FName(&local_228,"List Widgets");
  pTVar3 = FTabManager::FStack::AddTab(pFVar4,&local_1c0,*pFVar1,OpenedTab);
  pFVar4 = TSharedRef<FTabManager::FStack,1>::operator->(pTVar3);
  pFVar1 = ::FName::FName(&local_220,"Starship Widgets");
  FTabId::FTabId(&local_1f0,*pFVar1);
  pTVar3 = FTabManager::FStack::SetForegroundTab(pFVar4,&local_1d0,&local_1f0);
  pTVar5 = TSharedRef<FTabManager::FLayoutNode,1>::
           TSharedRef<FTabManager::FLayoutNode,1><FTabManager::FStack>(&local_20,pTVar3);
  pTVar2 = FTabManager::FArea::Split(this_02,&local_1e0,pTVar5);
  FTabManager::FLayout::AddArea(this_01,&local_260,pTVar2);
  TSharedRef<FTabManager::FArea,1>::~TSharedRef<FTabManager::FArea,1>(&local_1e0);
  TSharedRef<FTabManager::FStack,1>::~TSharedRef<FTabManager::FStack,1>(&local_1d0);
  TSharedRef<FTabManager::FStack,1>::~TSharedRef<FTabManager::FStack,1>(&local_1c0);
  TSharedRef<FTabManager::FStack,1>::~TSharedRef<FTabManager::FStack,1>(&local_1b0);
  TSharedRef<FTabManager::FStack,1>::~TSharedRef<FTabManager::FStack,1>(&local_1a0);
  TSharedRef<FTabManager::FStack,1>::~TSharedRef<FTabManager::FStack,1>(&local_190);
  TSharedRef<FTabManager::FStack,1>::~TSharedRef<FTabManager::FStack,1>(&local_180);
  TSharedRef<FTabManager::FStack,1>::~TSharedRef<FTabManager::FStack,1>(&local_170);
  TSharedRef<FTabManager::FArea,1>::~TSharedRef<FTabManager::FArea,1>(&local_160);
  TSharedRef<FTabManager::FLayout,1>::~TSharedRef<FTabManager::FLayout,1>(&local_150);
  pTVar6 = FGlobalTabmanager::Get();
  local_3a8 = TSharedRef<FGlobalTabmanager,1>::operator->(pTVar6);
  pTVar9 = &local_110;
  for (lVar8 = 0x18; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined1 *)pTVar9 = 0;
    pTVar9 = (TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy> *)
             &pTVar9->field_0x1;
  }
  local_3c0 = TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>::
              TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>(&local_110);
  local_3e0 = &local_3e8;
  local_3e8.__this = this;
  local_3b8 = TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
              ::CreateLambda<_SStarshipGallery::Construct_::__l2::<lambda_1>_>(&local_98,local_3e0);
  local_3d8 = &local_218;
  pFVar1 = ::FName::FName(local_3d8,"Colors");
  local_3d0 = *pFVar1;
  local_3c8 = local_3d0;
  local_3b0 = local_3d0;
  FGlobalTabmanager::RegisterNomadTabSpawner(local_3a8,local_3d0,local_3b8,local_3c0);
  TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>::
  ~TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
            (&local_98);
  TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>::
  ~TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>(&local_110);
  pTVar6 = FGlobalTabmanager::Get();
  local_360 = TSharedRef<FGlobalTabmanager,1>::operator->(pTVar6);
  pTVar9 = &local_f8;
  for (lVar8 = 0x18; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined1 *)pTVar9 = 0;
    pTVar9 = (TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy> *)
             &pTVar9->field_0x1;
  }
  local_378 = TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>::
              TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>(&local_f8);
  local_398 = &local_3a0;
  local_3a0.__this = this;
  local_370 = TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
              ::CreateLambda<_SStarshipGallery::Construct_::__l2::<lambda_2>_>(&local_80,local_398);
  local_390 = &local_210;
  pFVar1 = ::FName::FName(local_390,"Text");
  local_388 = *pFVar1;
  local_380 = local_388;
  local_368 = local_388;
  FGlobalTabmanager::RegisterNomadTabSpawner(local_360,local_388,local_370,local_378);
  TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>::
  ~TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
            (&local_80);
  TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>::
  ~TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>(&local_f8);
  pTVar6 = FGlobalTabmanager::Get();
  local_318 = TSharedRef<FGlobalTabmanager,1>::operator->(pTVar6);
  pTVar9 = &local_e0;
  for (lVar8 = 0x18; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined1 *)pTVar9 = 0;
    pTVar9 = (TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy> *)
             &pTVar9->field_0x1;
  }
  local_330 = TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>::
              TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>(&local_e0);
  local_350 = &local_358;
  local_358.__this = this;
  local_328 = TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
              ::CreateLambda<_SStarshipGallery::Construct_::__l2::<lambda_3>_>(&local_68,local_350);
  local_348 = &local_208;
  pFVar1 = ::FName::FName(local_348,"Icons");
  local_340 = *pFVar1;
  local_338 = local_340;
  local_320 = local_340;
  FGlobalTabmanager::RegisterNomadTabSpawner(local_318,local_340,local_328,local_330);
  TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>::
  ~TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
            (&local_68);
  TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>::
  ~TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>(&local_e0);
  pTVar6 = FGlobalTabmanager::Get();
  local_2d0 = TSharedRef<FGlobalTabmanager,1>::operator->(pTVar6);
  pTVar9 = &local_c8;
  for (lVar8 = 0x18; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined1 *)pTVar9 = 0;
    pTVar9 = (TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy> *)
             &pTVar9->field_0x1;
  }
  local_2e8 = TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>::
              TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>(&local_c8);
  local_308 = &local_310;
  local_310.__this = this;
  local_2e0 = TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
              ::CreateLambda<_SStarshipGallery::Construct_::__l2::<lambda_4>_>(&local_50,local_308);
  local_300 = &local_200;
  pFVar1 = ::FName::FName(local_300,"Starship Widgets");
  local_2f8 = *pFVar1;
  local_2f0 = local_2f8;
  local_2d8 = local_2f8;
  FGlobalTabmanager::RegisterNomadTabSpawner(local_2d0,local_2f8,local_2e0,local_2e8);
  TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>::
  ~TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
            (&local_50);
  TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>::
  ~TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>(&local_c8);
  pTVar6 = FGlobalTabmanager::Get();
  local_288 = TSharedRef<FGlobalTabmanager,1>::operator->(pTVar6);
  pTVar9 = &local_b0;
  for (lVar8 = 0x18; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined1 *)pTVar9 = 0;
    pTVar9 = (TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy> *)
             &pTVar9->field_0x1;
  }
  local_2a0 = TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>::
              TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>(&local_b0);
  local_2c0 = &local_2c8;
  local_2c8.__this = this;
  local_298 = TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
              ::CreateLambda<_SStarshipGallery::Construct_::__l2::<lambda_5>_>(&local_38,local_2c0);
  local_2b8 = &local_1f8;
  pFVar1 = ::FName::FName(local_2b8,"List Widgets");
  local_2b0 = *pFVar1;
  local_2a8 = local_2b0;
  local_290 = local_2b0;
  FGlobalTabmanager::RegisterNomadTabSpawner(local_288,local_2b0,local_298,local_2a0);
  TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>::
  ~TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
            (&local_38);
  TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>::
  ~TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>(&local_b0);
  local_268 = (TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *)
              &this->_padding_;
  pTVar6 = FGlobalTabmanager::Get();
  local_278 = TSharedRef<FGlobalTabmanager,1>::operator->(pTVar6);
  local_280 = TSharedPtr<SWindow,1>::TSharedPtr<SWindow,1>(&local_120,(FNullTag *)0x0);
  local_270 = FTabManager::RestoreFrom
                        ((FTabManager *)local_278,&local_130,&local_260,local_280,false,Never);
  pTVar7 = TSharedPtr<SWidget,1>::ToSharedRef(local_270,&local_140);
  TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>::operator[]
            (local_268,pTVar7);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_140);
  TSharedPtr<SWidget,1>::~TSharedPtr<SWidget,1>(&local_130);
  TSharedPtr<SWindow,1>::~TSharedPtr<SWindow,1>(&local_120);
  TSharedRef<FTabManager::FLayout,1>::~TSharedRef<FTabManager::FLayout,1>(&local_260);
  return;
}

// ConstructColorsGallery @ 142f8cab0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

TSharedRef<SWidget,1> * __thiscall
SStarshipGallery::ConstructColorsGallery
          (SStarshipGallery *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  FName *pFVar1;
  FSlotArguments *pFVar2;
  FSlotArguments *pFVar3;
  FText *pFVar4;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> *pTVar5;
  TSharedRef<STextBlock,1> *pTVar6;
  TSlateDecl<SUniformWrapPanel,RequiredArgs::T0RequiredArgs> *pTVar7;
  TSharedRef<SUniformWrapPanel,1> *pTVar8;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> *this_00;
  TSharedRef<SVerticalBox,1> *pTVar9;
  TSlateDecl<SScrollBox,RequiredArgs::T0RequiredArgs> *this_01;
  TSharedRef<SScrollBox,1> *pTVar10;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> *this_02;
  TSharedRef<SBorder,1> *pTVar11;
  undefined1 local_4308;
  T0RequiredArgs local_4307;
  T0RequiredArgs local_4306;
  T0RequiredArgs local_4305;
  T0RequiredArgs local_4304;
  T0RequiredArgs local_4303;
  T0RequiredArgs local_4302;
  T0RequiredArgs local_4301;
  T0RequiredArgs local_4300;
  T0RequiredArgs local_42ff [7];
  ISlateStyle *local_42f8;
  FName *local_42f0;
  FName local_42e8;
  FSlateColor *local_42e0;
  FName local_42d8;
  code *local_42d0;
  undefined1 *local_42c8;
  undefined1 *local_42c0;
  TAttribute<FSlateColor> *local_42b8;
  TAttribute<FSlateColor> *local_42b0;
  FArguments *local_42a8;
  TAttribute<FText> *local_42a0;
  TAttribute<FText> *local_4298;
  FArguments *local_4290;
  FArguments *local_4288;
  FSlotArguments *local_4280;
  FSlotArguments *local_4278;
  FArguments *local_4270;
  FName *local_4268;
  FText *local_4260;
  FName local_4258;
  FText *local_4250;
  TSharedRef<SWidget,1> *local_4248;
  FSlotArguments *local_4240;
  FSlotArguments *local_4238;
  FArguments *local_4230;
  FName *local_4228;
  FText *local_4220;
  FName local_4218;
  FText *local_4210;
  TSharedRef<SWidget,1> *local_4208;
  FSlotArguments *local_4200;
  FSlotArguments *local_41f8;
  FArguments *local_41f0;
  FName *local_41e8;
  FText *local_41e0;
  FName local_41d8;
  FText *local_41d0;
  TSharedRef<SWidget,1> *local_41c8;
  FSlotArguments *local_41c0;
  FSlotArguments *local_41b8;
  FArguments *local_41b0;
  FName *local_41a8;
  FText *local_41a0;
  FName local_4198;
  FText *local_4190;
  TSharedRef<SWidget,1> *local_4188;
  FSlotArguments *local_4180;
  FSlotArguments *local_4178;
  FArguments *local_4170;
  FName *local_4168;
  FText *local_4160;
  FName local_4158;
  FText *local_4150;
  TSharedRef<SWidget,1> *local_4148;
  FSlotArguments *local_4140;
  FSlotArguments *local_4138;
  FArguments *local_4130;
  FName *local_4128;
  FText *local_4120;
  FName local_4118;
  FText *local_4110;
  TSharedRef<SWidget,1> *local_4108;
  FSlotArguments *local_4100;
  FSlotArguments *local_40f8;
  FArguments *local_40f0;
  FName *local_40e8;
  FText *local_40e0;
  FName local_40d8;
  FText *local_40d0;
  TSharedRef<SWidget,1> *local_40c8;
  FSlotArguments *local_40c0;
  FSlotArguments *local_40b8;
  FArguments *local_40b0;
  FName *local_40a8;
  FText *local_40a0;
  FName local_4098;
  FText *local_4090;
  TSharedRef<SWidget,1> *local_4088;
  FSlotArguments *local_4080;
  FSlotArguments *local_4078;
  FArguments *local_4070;
  FName *local_4068;
  FText *local_4060;
  FName local_4058;
  FText *local_4050;
  TSharedRef<SWidget,1> *local_4048;
  FSlotArguments *local_4040;
  FSlotArguments *local_4038;
  FArguments *local_4030;
  FName *local_4028;
  FText *local_4020;
  FName local_4018;
  FText *local_4010;
  TSharedRef<SWidget,1> *local_4008;
  FSlotArguments *local_4000;
  FSlotArguments *local_3ff8;
  FArguments *local_3ff0;
  FName *local_3fe8;
  FText *local_3fe0;
  FName local_3fd8;
  FText *local_3fd0;
  TSharedRef<SWidget,1> *local_3fc8;
  FSlotArguments *local_3fc0;
  FSlotArguments *local_3fb8;
  FArguments *local_3fb0;
  FName *local_3fa8;
  FText *local_3fa0;
  FName local_3f98;
  FText *local_3f90;
  TSharedRef<SWidget,1> *local_3f88;
  FSlotArguments *local_3f80;
  FSlotArguments *local_3f78;
  FArguments *local_3f70;
  FName *local_3f68;
  FText *local_3f60;
  FName local_3f58;
  FText *local_3f50;
  TSharedRef<SWidget,1> *local_3f48;
  FSlotArguments *local_3f40;
  FSlotArguments *local_3f38;
  FArguments *local_3f30;
  FName *local_3f28;
  FText *local_3f20;
  FName local_3f18;
  FText *local_3f10;
  TSharedRef<SWidget,1> *local_3f08;
  FSlotArguments *local_3f00;
  FSlotArguments *local_3ef8;
  FArguments *local_3ef0;
  FName *local_3ee8;
  FText *local_3ee0;
  FName local_3ed8;
  FText *local_3ed0;
  TSharedRef<SWidget,1> *local_3ec8;
  FSlotArguments *local_3ec0;
  FSlotArguments *local_3eb8;
  FArguments *local_3eb0;
  FName *local_3ea8;
  FText *local_3ea0;
  FName local_3e98;
  FText *local_3e90;
  TSharedRef<SWidget,1> *local_3e88;
  FSlotArguments *local_3e80;
  FSlotArguments *local_3e78;
  FArguments *local_3e70;
  FName *local_3e68;
  FText *local_3e60;
  FName local_3e58;
  FText *local_3e50;
  TSharedRef<SWidget,1> *local_3e48;
  FSlotArguments *local_3e40;
  FSlotArguments *local_3e38;
  FArguments *local_3e30;
  FArguments *local_3e28;
  FSlotArguments *local_3e20;
  FSlotArguments *local_3e18;
  FArguments *local_3e10;
  undefined1 *local_3e08;
  TAttribute<FSlateColor> *local_3e00;
  TAttribute<FSlateColor> *local_3df8;
  FArguments *local_3df0;
  TAttribute<FText> *local_3de8;
  TAttribute<FText> *local_3de0;
  FArguments *local_3dd8;
  FArguments *local_3dd0;
  FSlotArguments *local_3dc8;
  FSlotArguments *local_3dc0;
  FArguments *local_3db8;
  FName *local_3db0;
  FText *local_3da8;
  FName local_3da0;
  FText *local_3d98;
  TSharedRef<SWidget,1> *local_3d90;
  FSlotArguments *local_3d88;
  FSlotArguments *local_3d80;
  FArguments *local_3d78;
  FName *local_3d70;
  FText *local_3d68;
  FName local_3d60;
  FText *local_3d58;
  TSharedRef<SWidget,1> *local_3d50;
  FSlotArguments *local_3d48;
  FSlotArguments *local_3d40;
  FArguments *local_3d38;
  FName *local_3d30;
  FText *local_3d28;
  FName local_3d20;
  FText *local_3d18;
  TSharedRef<SWidget,1> *local_3d10;
  FSlotArguments *local_3d08;
  FSlotArguments *local_3d00;
  FArguments *local_3cf8;
  FName *local_3cf0;
  FText *local_3ce8;
  FName local_3ce0;
  FText *local_3cd8;
  TSharedRef<SWidget,1> *local_3cd0;
  FSlotArguments *local_3cc8;
  FSlotArguments *local_3cc0;
  FArguments *local_3cb8;
  FName *local_3cb0;
  FText *local_3ca8;
  FName local_3ca0;
  FText *local_3c98;
  TSharedRef<SWidget,1> *local_3c90;
  FSlotArguments *local_3c88;
  FSlotArguments *local_3c80;
  FArguments *local_3c78;
  FName *local_3c70;
  FText *local_3c68;
  FName local_3c60;
  FText *local_3c58;
  TSharedRef<SWidget,1> *local_3c50;
  FSlotArguments *local_3c48;
  FSlotArguments *local_3c40;
  FArguments *local_3c38;
  FName *local_3c30;
  FText *local_3c28;
  FName local_3c20;
  FText *local_3c18;
  TSharedRef<SWidget,1> *local_3c10;
  FSlotArguments *local_3c08;
  FSlotArguments *local_3c00;
  FArguments *local_3bf8;
  FName *local_3bf0;
  FText *local_3be8;
  FName local_3be0;
  FText *local_3bd8;
  TSharedRef<SWidget,1> *local_3bd0;
  FSlotArguments *local_3bc8;
  FSlotArguments *local_3bc0;
  FArguments *local_3bb8;
  FName *local_3bb0;
  FText *local_3ba8;
  FName local_3ba0;
  FText *local_3b98;
  TSharedRef<SWidget,1> *local_3b90;
  FSlotArguments *local_3b88;
  FSlotArguments *local_3b80;
  FArguments *local_3b78;
  FArguments *local_3b70;
  FSlotArguments *local_3b68;
  FSlotArguments *local_3b60;
  FArguments *local_3b58;
  undefined1 *local_3b50;
  TAttribute<FSlateColor> *local_3b48;
  TAttribute<FSlateColor> *local_3b40;
  FArguments *local_3b38;
  TAttribute<FText> *local_3b30;
  TAttribute<FText> *local_3b28;
  FArguments *local_3b20;
  FArguments *local_3b18;
  FSlotArguments *local_3b10;
  FSlotArguments *local_3b08;
  FArguments *local_3b00;
  FName *local_3af8;
  FText *local_3af0;
  FName local_3ae8;
  FText *local_3ae0;
  TSharedRef<SWidget,1> *local_3ad8;
  FSlotArguments *local_3ad0;
  FSlotArguments *local_3ac8;
  FArguments *local_3ac0;
  FName *local_3ab8;
  FText *local_3ab0;
  FName local_3aa8;
  FText *local_3aa0;
  TSharedRef<SWidget,1> *local_3a98;
  FSlotArguments *local_3a90;
  FSlotArguments *local_3a88;
  FArguments *local_3a80;
  FName *local_3a78;
  FText *local_3a70;
  FName local_3a68;
  FText *local_3a60;
  TSharedRef<SWidget,1> *local_3a58;
  FSlotArguments *local_3a50;
  FSlotArguments *local_3a48;
  FArguments *local_3a40;
  FName *local_3a38;
  FText *local_3a30;
  FName local_3a28;
  FText *local_3a20;
  TSharedRef<SWidget,1> *local_3a18;
  FSlotArguments *local_3a10;
  FSlotArguments *local_3a08;
  FArguments *local_3a00;
  FName *local_39f8;
  FText *local_39f0;
  FName local_39e8;
  FText *local_39e0;
  TSharedRef<SWidget,1> *local_39d8;
  FSlotArguments *local_39d0;
  FSlotArguments *local_39c8;
  FArguments *local_39c0;
  FName *local_39b8;
  FText *local_39b0;
  FName local_39a8;
  FText *local_39a0;
  TSharedRef<SWidget,1> *local_3998;
  FSlotArguments *local_3990;
  FSlotArguments *local_3988;
  FArguments *local_3980;
  FName *local_3978;
  FText *local_3970;
  FName local_3968;
  FText *local_3960;
  TSharedRef<SWidget,1> *local_3958;
  FSlotArguments *local_3950;
  FSlotArguments *local_3948;
  FArguments *local_3940;
  FName *local_3938;
  FText *local_3930;
  FName local_3928;
  FText *local_3920;
  TSharedRef<SWidget,1> *local_3918;
  FSlotArguments *local_3910;
  FSlotArguments *local_3908;
  FArguments *local_3900;
  FName *local_38f8;
  FText *local_38f0;
  FName local_38e8;
  FText *local_38e0;
  TSharedRef<SWidget,1> *local_38d8;
  FSlotArguments *local_38d0;
  FSlotArguments *local_38c8;
  FArguments *local_38c0;
  FName *local_38b8;
  FText *local_38b0;
  FName local_38a8;
  FText *local_38a0;
  TSharedRef<SWidget,1> *local_3898;
  FSlotArguments *local_3890;
  FSlotArguments *local_3888;
  FArguments *local_3880;
  FName *local_3878;
  FText *local_3870;
  FName local_3868;
  FText *local_3860;
  TSharedRef<SWidget,1> *local_3858;
  FSlotArguments *local_3850;
  FSlotArguments *local_3848;
  FArguments *local_3840;
  FName *local_3838;
  FText *local_3830;
  FName local_3828;
  FText *local_3820;
  TSharedRef<SWidget,1> *local_3818;
  FSlotArguments *local_3810;
  FSlotArguments *local_3808;
  FArguments *local_3800;
  FArguments *local_37f8;
  FSlotArguments *local_37f0;
  FSlotArguments *local_37e8;
  FArguments *local_37e0;
  FArguments *local_37d8;
  FSlotArguments *local_37d0;
  FSlotArguments *local_37c8;
  FArguments *local_37c0;
  FArguments *local_37b8;
  FArguments *local_37b0;
  FArguments *local_37a8;
  FSlateColor local_37a0;
  TSharedRef<SWidget,1> local_3788;
  TSharedRef<SWidget,1> local_3778;
  TSharedRef<SWidget,1> local_3768;
  TSharedRef<SWidget,1> local_3758;
  TSharedRef<SWidget,1> local_3748;
  TSharedRef<SWidget,1> local_3738;
  TSharedRef<SWidget,1> local_3728;
  TSharedRef<SWidget,1> local_3718;
  FName local_3708;
  FName local_3700;
  FName local_36f8;
  FName local_36f0;
  FName local_36e8;
  FName local_36e0;
  FName local_36d8;
  FName local_36d0;
  FName local_36c8;
  FName local_36c0;
  FName local_36b8;
  FName local_36b0;
  FName local_36a8;
  FName local_36a0;
  FName local_3698;
  FName local_3690;
  FName local_3688;
  FName local_3680;
  FName local_3678;
  FName local_3670;
  FName local_3668;
  FName local_3660;
  FName local_3658;
  FName local_3650;
  FName local_3648;
  FName local_3640;
  FName local_3638;
  FName local_3630;
  FName local_3628;
  FName local_3620;
  FName local_3618;
  FName local_3610;
  FName local_3608;
  FName local_3600;
  FName local_35f8;
  FName local_35f0;
  FName local_35e8;
  FName local_35e0;
  TSharedRef<SBorder,1> local_35d8;
  TSharedRef<SScrollBox,1> local_35c8;
  TSharedRef<SVerticalBox,1> local_35b8;
  TSharedRef<SUniformWrapPanel,1> local_35a8;
  TSharedRef<SWidget,1> local_3598;
  TSharedRef<SWidget,1> local_3588;
  TSharedRef<SWidget,1> local_3578;
  TSharedRef<SWidget,1> local_3568;
  TSharedRef<SWidget,1> local_3558;
  TSharedRef<SWidget,1> local_3548;
  TSharedRef<SWidget,1> local_3538;
  TSharedRef<SWidget,1> local_3528;
  TSharedRef<SWidget,1> local_3518;
  TSharedRef<SWidget,1> local_3508;
  TSharedRef<SWidget,1> local_34f8;
  TSharedRef<SWidget,1> local_34e8;
  TSharedRef<STextBlock,1> local_34d8;
  FText local_34c8;
  TSharedRef<SUniformWrapPanel,1> local_34b8;
  TSharedRef<SWidget,1> local_34a8;
  TSharedRef<SWidget,1> local_3498;
  TSharedRef<SWidget,1> local_3488;
  TSharedRef<SWidget,1> local_3478;
  TSharedRef<SWidget,1> local_3468;
  TSharedRef<SWidget,1> local_3458;
  TSharedRef<SWidget,1> local_3448;
  TSharedRef<SWidget,1> local_3438;
  TSharedRef<SWidget,1> local_3428;
  TSharedRef<STextBlock,1> local_3418;
  FText local_3408;
  TSharedRef<SUniformWrapPanel,1> local_33f8;
  TSharedRef<SWidget,1> local_33e8;
  TSharedRef<SWidget,1> local_33d8;
  TSharedRef<SWidget,1> local_33c8;
  TSharedRef<SWidget,1> local_33b8;
  TSharedRef<SWidget,1> local_33a8;
  TSharedRef<SWidget,1> local_3398;
  TSharedRef<SWidget,1> local_3388;
  TSharedRef<SWidget,1> local_3378;
  TSharedRef<SWidget,1> local_3368;
  TSharedRef<SWidget,1> local_3358;
  TSharedRef<SWidget,1> local_3348;
  TSharedRef<SWidget,1> local_3338;
  TSharedRef<SWidget,1> local_3328;
  TSharedRef<SWidget,1> local_3318;
  TSharedRef<SWidget,1> local_3308;
  TSharedRef<SWidget,1> local_32f8;
  TSharedRef<SWidget,1> local_32e8;
  TSharedRef<STextBlock,1> local_32d8;
  FText local_32c8;
  FName local_32b8;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_32b0;
  TSlateDecl<SScrollBox,RequiredArgs::T0RequiredArgs> local_3298;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_3280;
  TSlateDecl<SUniformWrapPanel,RequiredArgs::T0RequiredArgs> local_3268;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_3250;
  TSlateDecl<SUniformWrapPanel,RequiredArgs::T0RequiredArgs> local_3238;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_3220;
  TSlateDecl<SUniformWrapPanel,RequiredArgs::T0RequiredArgs> local_3208;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_31f0;
  FText local_31d8;
  FText local_31c8;
  FText local_31b8;
  FText local_31a8;
  FText local_3198;
  FText local_3188;
  FText local_3178;
  FText local_3168;
  FText local_3158;
  FText local_3148;
  FText local_3138;
  FText local_3128;
  FText local_3118;
  FText local_3108;
  FText local_30f8;
  FText local_30e8;
  FText local_30d8;
  FText local_30c8;
  FText local_30b8;
  FText local_30a8;
  FText local_3098;
  FText local_3088;
  FText local_3078;
  FText local_3068;
  FText local_3058;
  FText local_3048;
  FText local_3038;
  FText local_3028;
  FText local_3018;
  FText local_3008;
  FText local_2ff8;
  FText local_2fe8;
  FText local_2fd8;
  FText local_2fc8;
  FText local_2fb8;
  FText local_2fa8;
  FText local_2f98;
  FText local_2f88;
  FSlotArguments local_2f78;
  FSlotArguments local_2f50;
  FSlotArguments local_2f28;
  FSlotArguments local_2f00;
  FSlotArguments local_2ed8;
  FSlotArguments local_2eb0;
  FSlotArguments local_2e88;
  FSlotArguments local_2e60;
  FSlotArguments local_2e38;
  FSlotArguments local_2e10;
  FSlotArguments local_2de8;
  FSlotArguments local_2dc0;
  FSlotArguments local_2d98;
  FSlotArguments local_2d70;
  FSlotArguments local_2d48;
  FSlotArguments local_2d20;
  FSlotArguments local_2cf8;
  FSlotArguments local_2cd0;
  FSlotArguments local_2ca8;
  FSlotArguments local_2c80;
  FSlotArguments local_2c58;
  FSlotArguments local_2c30;
  FSlotArguments local_2c08;
  FSlotArguments local_2be0;
  FSlotArguments local_2bb8;
  FSlotArguments local_2b90;
  FSlotArguments local_2b68;
  FSlotArguments local_2b40;
  FSlotArguments local_2b18;
  FSlotArguments local_2af0;
  FSlotArguments local_2ac8;
  FSlotArguments local_2aa0;
  FSlotArguments local_2a78;
  FSlotArguments local_2a50;
  FSlotArguments local_2a28;
  FSlotArguments local_2a00;
  FSlotArguments local_29d8;
  FSlotArguments local_29b0;
  TAttribute<FSlateColor> local_2988;
  TAttribute<FText> local_2958;
  TAttribute<FSlateColor> local_2928;
  TAttribute<FText> local_28f8;
  TAttribute<FSlateColor> local_28c8;
  TAttribute<FText> local_2898;
  FSlotArguments local_2868;
  FSlotArguments local_2780;
  FSlotArguments local_2698;
  FSlotArguments local_25b0;
  FSlotArguments local_24c8;
  FSlotArguments local_23e0;
  FSlotArguments local_22f8;
  FArguments local_2210;
  FArguments local_2008;
  FArguments local_1d40;
  FArguments local_1a28;
  FArguments local_1710;
  FArguments local_13f8;
  FArguments local_1018;
  FArguments local_ac0;
  FArguments local_568;
  undefined8 uStack_8;
  
  uStack_8 = 0x142f8cac4;
  local_42f8 = FAppStyle::Get();
  local_42d0 = *(code **)((longlong)*local_42f8 + 0x40);
  local_42e0 = FStyleDefaults::GetSlateColor();
  local_42f0 = &local_32b8;
  pFVar1 = ::FName::FName(local_42f0,"Colors.White50");
  local_42e8 = *pFVar1;
  local_42d8 = local_42e8;
  (*local_42d0)(local_42f8,&local_37a0,local_42e8,0,local_42e0,0);
  local_37b0 = SBorder::FArguments::FArguments(&local_13f8);
  local_37c0 = SScrollBox::FArguments::FArguments(&local_2008);
  pFVar2 = SScrollBox::Slot(&local_22f8);
  local_42c8 = &pFVar2->field_0x18;
  local_37d0 = TPaddingWidgetSlotMixin<SScrollBox::FSlot>::FSlotArgumentsMixin::Padding
                         ((FSlotArgumentsMixin *)local_42c8,__real_42400000);
  local_4270 = SVerticalBox::FArguments::FArguments(&local_2210);
  pFVar3 = SVerticalBox::Slot(&local_23e0);
  pFVar3 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar3);
  local_42c0 = &pFVar3->field_0x18;
  local_4280 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                         ((FSlotArgumentsMixin *)local_42c0,__real_41000000,__real_41c00000,
                          __real_41000000,__real_41000000);
  local_42a8 = STextBlock::FArguments::FArguments(&local_568);
  local_42b8 = &local_2988;
  local_42b0 = TAttribute<FSlateColor>::TAttribute<FSlateColor><FSlateColor>(local_42b8,&local_37a0)
  ;
  local_4290 = STextBlock::FArguments::ColorAndOpacity(local_42a8,local_42b0);
  local_42a0 = &local_2958;
  pFVar4 = FText::AsLocalizable_Advanced_LocText
                     (&local_32c8,L"StarshipGallery",L"BaseColors",L"BASE COLORS");
  local_4298 = TAttribute<FText>::TAttribute<FText>(local_42a0,pFVar4);
  local_4288 = STextBlock::FArguments::Text(local_4290,local_4298);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_4307);
  pTVar5 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                     (&local_31f0,"STextBlock",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\SStarshipGallery.cpp"
                      ,0x11f,&local_4307);
  pTVar6 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar5,&local_32d8,local_4288);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_3728,pTVar6);
  local_4278 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_4280,&local_3728);
  local_3e10 = SVerticalBox::FArguments::operator+(local_4270,local_4278);
  pFVar3 = SVerticalBox::Slot(&local_24c8);
  local_3e20 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar3);
  local_4230 = SUniformWrapPanel::FArguments::FArguments(&local_1710);
  local_4240 = SUniformWrapPanel::Slot(&local_29b0);
  local_4268 = &local_3708;
  pFVar1 = ::FName::FName(local_4268,"Colors.Black");
  local_4258 = *pFVar1;
  local_4260 = &local_3018;
  local_4250 = FText::FromString(local_4260,"BLACK");
  local_4248 = `SStarshipGallery::ConstructColorsGallery'::__l2::<lambda_1>::operator()
                         (&local_4308,&local_32e8,local_4250,local_4258,false,false);
  local_4238 = TSlotBase<SUniformWrapPanel::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_4240,local_4248);
  local_41f0 = SUniformWrapPanel::FArguments::operator+(local_4230,local_4238);
  local_4200 = SUniformWrapPanel::Slot(&local_29d8);
  local_4228 = &local_3700;
  pFVar1 = ::FName::FName(local_4228,"Colors.Title");
  local_4218 = *pFVar1;
  local_4220 = &local_3008;
  local_4210 = FText::FromString(local_4220,"TITLE");
  local_4208 = `SStarshipGallery::ConstructColorsGallery'::__l2::<lambda_1>::operator()
                         (&local_4308,&local_32f8,local_4210,local_4218,false,false);
  local_41f8 = TSlotBase<SUniformWrapPanel::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_4200,local_4208);
  local_41b0 = SUniformWrapPanel::FArguments::operator+(local_41f0,local_41f8);
  local_41c0 = SUniformWrapPanel::Slot(&local_2a00);
  local_41e8 = &local_36f8;
  pFVar1 = ::FName::FName(local_41e8,"Colors.WindowBorder");
  local_41d8 = *pFVar1;
  local_41e0 = &local_2ff8;
  local_41d0 = FText::FromString(local_41e0,"WINDOW\nBORDER");
  local_41c8 = `SStarshipGallery::ConstructColorsGallery'::__l2::<lambda_1>::operator()
                         (&local_4308,&local_3308,local_41d0,local_41d8,false,false);
  local_41b8 = TSlotBase<SUniformWrapPanel::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_41c0,local_41c8);
  local_4170 = SUniformWrapPanel::FArguments::operator+(local_41b0,local_41b8);
  local_4180 = SUniformWrapPanel::Slot(&local_2a28);
  local_41a8 = &local_36f0;
  pFVar1 = ::FName::FName(local_41a8,"Colors.Foldout");
  local_4198 = *pFVar1;
  local_41a0 = &local_2fe8;
  local_4190 = FText::FromString(local_41a0,"FOLDOUT");
  local_4188 = `SStarshipGallery::ConstructColorsGallery'::__l2::<lambda_1>::operator()
                         (&local_4308,&local_3318,local_4190,local_4198,false,false);
  local_4178 = TSlotBase<SUniformWrapPanel::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_4180,local_4188);
  local_4130 = SUniformWrapPanel::FArguments::operator+(local_4170,local_4178);
  local_4140 = SUniformWrapPanel::Slot(&local_2a50);
  local_4168 = &local_36e8;
  pFVar1 = ::FName::FName(local_4168,"Colors.Input");
  local_4158 = *pFVar1;
  local_4160 = &local_2fd8;
  local_4150 = FText::FromString(local_4160,"INPUT");
  local_4148 = `SStarshipGallery::ConstructColorsGallery'::__l2::<lambda_1>::operator()
                         (&local_4308,&local_3328,local_4150,local_4158,false,false);
  local_4138 = TSlotBase<SUniformWrapPanel::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_4140,local_4148);
  local_40f0 = SUniformWrapPanel::FArguments::operator+(local_4130,local_4138);
  local_4100 = SUniformWrapPanel::Slot(&local_2a78);
  local_4128 = &local_36e0;
  pFVar1 = ::FName::FName(local_4128,"Colors.Recessed");
  local_4118 = *pFVar1;
  local_4120 = &local_2fc8;
  local_4110 = FText::FromString(local_4120,"RECESSED");
  local_4108 = `SStarshipGallery::ConstructColorsGallery'::__l2::<lambda_1>::operator()
                         (&local_4308,&local_3338,local_4110,local_4118,false,false);
  local_40f8 = TSlotBase<SUniformWrapPanel::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_4100,local_4108);
  local_40b0 = SUniformWrapPanel::FArguments::operator+(local_40f0,local_40f8);
  local_40c0 = SUniformWrapPanel::Slot(&local_2aa0);
  local_40e8 = &local_36d8;
  pFVar1 = ::FName::FName(local_40e8,"Colors.Background");
  local_40d8 = *pFVar1;
  local_40e0 = &local_2fb8;
  local_40d0 = FText::FromString(local_40e0,"BACKGROUND");
  local_40c8 = `SStarshipGallery::ConstructColorsGallery'::__l2::<lambda_1>::operator()
                         (&local_4308,&local_3348,local_40d0,local_40d8,false,true);
  local_40b8 = TSlotBase<SUniformWrapPanel::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_40c0,local_40c8);
  local_4070 = SUniformWrapPanel::FArguments::operator+(local_40b0,local_40b8);
  local_4080 = SUniformWrapPanel::Slot(&local_2ac8);
  local_40a8 = &local_36d0;
  pFVar1 = ::FName::FName(local_40a8,"Colors.Header");
  local_4098 = *pFVar1;
  local_40a0 = &local_2fa8;
  local_4090 = FText::FromString(local_40a0,"HEADER");
  local_4088 = `SStarshipGallery::ConstructColorsGallery'::__l2::<lambda_1>::operator()
                         (&local_4308,&local_3358,local_4090,local_4098,false,false);
  local_4078 = TSlotBase<SUniformWrapPanel::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_4080,local_4088);
  local_4030 = SUniformWrapPanel::FArguments::operator+(local_4070,local_4078);
  local_4040 = SUniformWrapPanel::Slot(&local_2af0);
  local_4068 = &local_36c8;
  pFVar1 = ::FName::FName(local_4068,"Colors.Dropdown");
  local_4058 = *pFVar1;
  local_4060 = &local_2f98;
  local_4050 = FText::FromString(local_4060,"DROPDOWN");
  local_4048 = `SStarshipGallery::ConstructColorsGallery'::__l2::<lambda_1>::operator()
                         (&local_4308,&local_3368,local_4050,local_4058,false,false);
  local_4038 = TSlotBase<SUniformWrapPanel::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_4040,local_4048);
  local_3ff0 = SUniformWrapPanel::FArguments::operator+(local_4030,local_4038);
  local_4000 = SUniformWrapPanel::Slot(&local_2b18);
  local_4028 = &local_36c0;
  pFVar1 = ::FName::FName(local_4028,"Colors.Hover");
  local_4018 = *pFVar1;
  local_4020 = &local_2f88;
  local_4010 = FText::FromString(local_4020,"HOVER");
  local_4008 = `SStarshipGallery::ConstructColorsGallery'::__l2::<lambda_1>::operator()
                         (&local_4308,&local_3378,local_4010,local_4018,false,false);
  local_3ff8 = TSlotBase<SUniformWrapPanel::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_4000,local_4008);
  local_3fb0 = SUniformWrapPanel::FArguments::operator+(local_3ff0,local_3ff8);
  local_3fc0 = SUniformWrapPanel::Slot(&local_2b40);
  local_3fe8 = &local_36b8;
  pFVar1 = ::FName::FName(local_3fe8,"Colors.Hover2");
  local_3fd8 = *pFVar1;
  local_3fe0 = &local_31d8;
  local_3fd0 = FText::FromString(local_3fe0,"HOVER2");
  local_3fc8 = `SStarshipGallery::ConstructColorsGallery'::__l2::<lambda_1>::operator()
                         (&local_4308,&local_3388,local_3fd0,local_3fd8,false,false);
  local_3fb8 = TSlotBase<SUniformWrapPanel::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_3fc0,local_3fc8);
  local_3f70 = SUniformWrapPanel::FArguments::operator+(local_3fb0,local_3fb8);
  local_3f80 = SUniformWrapPanel::Slot(&local_2b68);
  local_3fa8 = &local_36b0;
  pFVar1 = ::FName::FName(local_3fa8,"Colors.White");
  local_3f98 = *pFVar1;
  local_3fa0 = &local_31c8;
  local_3f90 = FText::FromString(local_3fa0,"WHITE");
  local_3f88 = `SStarshipGallery::ConstructColorsGallery'::__l2::<lambda_1>::operator()
                         (&local_4308,&local_3398,local_3f90,local_3f98,true,false);
  local_3f78 = TSlotBase<SUniformWrapPanel::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_3f80,local_3f88);
  local_3f30 = SUniformWrapPanel::FArguments::operator+(local_3f70,local_3f78);
  local_3f40 = SUniformWrapPanel::Slot(&local_2b90);
  local_3f68 = &local_36a8;
  pFVar1 = ::FName::FName(local_3f68,"Colors.White25");
  local_3f58 = *pFVar1;
  local_3f60 = &local_31b8;
  local_3f50 = FText::FromString(local_3f60,"WHITE25");
  local_3f48 = `SStarshipGallery::ConstructColorsGallery'::__l2::<lambda_1>::operator()
                         (&local_4308,&local_33a8,local_3f50,local_3f58,false,false);
  local_3f38 = TSlotBase<SUniformWrapPanel::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_3f40,local_3f48);
  local_3ef0 = SUniformWrapPanel::FArguments::operator+(local_3f30,local_3f38);
  local_3f00 = SUniformWrapPanel::Slot(&local_2bb8);
  local_3f28 = &local_36a0;
  pFVar1 = ::FName::FName(local_3f28,"Colors.Primary");
  local_3f18 = *pFVar1;
  local_3f20 = &local_31a8;
  local_3f10 = FText::FromString(local_3f20,"PRIMARY");
  local_3f08 = `SStarshipGallery::ConstructColorsGallery'::__l2::<lambda_1>::operator()
                         (&local_4308,&local_33b8,local_3f10,local_3f18,true,false);
  local_3ef8 = TSlotBase<SUniformWrapPanel::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_3f00,local_3f08);
  local_3eb0 = SUniformWrapPanel::FArguments::operator+(local_3ef0,local_3ef8);
  local_3ec0 = SUniformWrapPanel::Slot(&local_2be0);
  local_3ee8 = &local_3698;
  pFVar1 = ::FName::FName(local_3ee8,"Colors.PrimaryHover");
  local_3ed8 = *pFVar1;
  local_3ee0 = &local_3198;
  local_3ed0 = FText::FromString(local_3ee0,"PRIMARY\nHOVER");
  local_3ec8 = `SStarshipGallery::ConstructColorsGallery'::__l2::<lambda_1>::operator()
                         (&local_4308,&local_33c8,local_3ed0,local_3ed8,true,false);
  local_3eb8 = TSlotBase<SUniformWrapPanel::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_3ec0,local_3ec8);
  local_3e70 = SUniformWrapPanel::FArguments::operator+(local_3eb0,local_3eb8);
  local_3e80 = SUniformWrapPanel::Slot(&local_2c08);
  local_3ea8 = &local_3690;
  pFVar1 = ::FName::FName(local_3ea8,"Colors.PrimaryPress");
  local_3e98 = *pFVar1;
  local_3ea0 = &local_3188;
  local_3e90 = FText::FromString(local_3ea0,"PRIMARY\nPRESS");
  local_3e88 = `SStarshipGallery::ConstructColorsGallery'::__l2::<lambda_1>::operator()
                         (&local_4308,&local_33d8,local_3e90,local_3e98,true,false);
  local_3e78 = TSlotBase<SUniformWrapPanel::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_3e80,local_3e88);
  local_3e30 = SUniformWrapPanel::FArguments::operator+(local_3e70,local_3e78);
  local_3e40 = SUniformWrapPanel::Slot(&local_2c30);
  local_3e68 = &local_3688;
  pFVar1 = ::FName::FName(local_3e68,"Colors.Secondary");
  local_3e58 = *pFVar1;
  local_3e60 = &local_3178;
  local_3e50 = FText::FromString(local_3e60,"SECONDARY");
  local_3e48 = `SStarshipGallery::ConstructColorsGallery'::__l2::<lambda_1>::operator()
                         (&local_4308,&local_33e8,local_3e50,local_3e58,true,false);
  local_3e38 = TSlotBase<SUniformWrapPanel::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_3e40,local_3e48);
  local_3e28 = SUniformWrapPanel::FArguments::operator+(local_3e30,local_3e38);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_4306);
  pTVar7 = MakeTDecl<SUniformWrapPanel,RequiredArgs::T0RequiredArgs>
                     (&local_3208,"SUniformWrapPanel",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\SStarshipGallery.cpp"
                      ,0x125,&local_4306);
  pTVar8 = TSlateDecl<SUniformWrapPanel,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar7,&local_33f8,local_3e28);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SUniformWrapPanel>(&local_3738,pTVar8);
  local_3e18 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_3e20,&local_3738);
  local_3db8 = SVerticalBox::FArguments::operator+(local_3e10,local_3e18);
  pFVar3 = SVerticalBox::Slot(&local_25b0);
  local_3e08 = &pFVar3->field_0x18;
  pFVar3 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                     ((FSlotArgumentsMixin *)local_3e08,__real_41000000,__real_41c00000,
                      __real_41000000,__real_41000000);
  local_3dc8 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar3);
  local_3df0 = STextBlock::FArguments::FArguments(&local_ac0);
  local_3e00 = &local_2928;
  local_3df8 = TAttribute<FSlateColor>::TAttribute<FSlateColor><FSlateColor>(local_3e00,&local_37a0)
  ;
  local_3dd8 = STextBlock::FArguments::ColorAndOpacity(local_3df0,local_3df8);
  local_3de8 = &local_28f8;
  pFVar4 = FText::AsLocalizable_Advanced_LocText
                     (&local_3408,L"StarshipGallery",L"TextIconColors",L"FOREGROUND COLORS");
  local_3de0 = TAttribute<FText>::TAttribute<FText>(local_3de8,pFVar4);
  local_3dd0 = STextBlock::FArguments::Text(local_3dd8,local_3de0);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_4305);
  pTVar5 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                     (&local_3220,"STextBlock",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\SStarshipGallery.cpp"
                      ,0x146,&local_4305);
  pTVar6 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar5,&local_3418,local_3dd0);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_3748,pTVar6);
  local_3dc0 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_3dc8,&local_3748);
  local_3b58 = SVerticalBox::FArguments::operator+(local_3db8,local_3dc0);
  pFVar3 = SVerticalBox::Slot(&local_2698);
  local_3b68 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar3);
  local_3d78 = SUniformWrapPanel::FArguments::FArguments(&local_1a28);
  local_3d88 = SUniformWrapPanel::Slot(&local_2c58);
  local_3db0 = &local_3680;
  pFVar1 = ::FName::FName(local_3db0,"Colors.Foreground");
  local_3da0 = *pFVar1;
  local_3da8 = &local_3168;
  local_3d98 = FText::FromString(local_3da8,"FOREGROUND");
  local_3d90 = `SStarshipGallery::ConstructColorsGallery'::__l2::<lambda_1>::operator()
                         (&local_4308,&local_3428,local_3d98,local_3da0,false,false);
  local_3d80 = TSlotBase<SUniformWrapPanel::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_3d88,local_3d90);
  local_3d38 = SUniformWrapPanel::FArguments::operator+(local_3d78,local_3d80);
  local_3d48 = SUniformWrapPanel::Slot(&local_2c80);
  local_3d70 = &local_3678;
  pFVar1 = ::FName::FName(local_3d70,"Colors.ForegroundHover");
  local_3d60 = *pFVar1;
  local_3d68 = &local_3158;
  local_3d58 = FText::FromString(local_3d68,"FOREGROUND\nHOVER");
  local_3d50 = `SStarshipGallery::ConstructColorsGallery'::__l2::<lambda_1>::operator()
                         (&local_4308,&local_3438,local_3d58,local_3d60,true,false);
  local_3d40 = TSlotBase<SUniformWrapPanel::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_3d48,local_3d50);
  local_3cf8 = SUniformWrapPanel::FArguments::operator+(local_3d38,local_3d40);
  local_3d08 = SUniformWrapPanel::Slot(&local_2ca8);
  local_3d30 = &local_3670;
  pFVar1 = ::FName::FName(local_3d30,"Colors.ForegroundInverted");
  local_3d20 = *pFVar1;
  local_3d28 = &local_3148;
  local_3d18 = FText::FromString(local_3d28,"FOREGROUND\nINVERTED");
  local_3d10 = `SStarshipGallery::ConstructColorsGallery'::__l2::<lambda_1>::operator()
                         (&local_4308,&local_3448,local_3d18,local_3d20,false,false);
  local_3d00 = TSlotBase<SUniformWrapPanel::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_3d08,local_3d10);
  local_3cb8 = SUniformWrapPanel::FArguments::operator+(local_3cf8,local_3d00);
  local_3cc8 = SUniformWrapPanel::Slot(&local_2cd0);
  local_3cf0 = &local_3668;
  pFVar1 = ::FName::FName(local_3cf0,"Colors.Highlight");
  local_3ce0 = *pFVar1;
  local_3ce8 = &local_3138;
  local_3cd8 = FText::FromString(local_3ce8,"HIGHLIGHT");
  local_3cd0 = `SStarshipGallery::ConstructColorsGallery'::__l2::<lambda_1>::operator()
                         (&local_4308,&local_3458,local_3cd8,local_3ce0,false,false);
  local_3cc0 = TSlotBase<SUniformWrapPanel::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_3cc8,local_3cd0);
  local_3c78 = SUniformWrapPanel::FArguments::operator+(local_3cb8,local_3cc0);
  local_3c88 = SUniformWrapPanel::Slot(&local_2cf8);
  local_3cb0 = &local_3660;
  pFVar1 = ::FName::FName(local_3cb0,"Colors.ForegroundHeader");
  local_3ca0 = *pFVar1;
  local_3ca8 = &local_3128;
  local_3c98 = FText::FromString(local_3ca8,"FOREGROUND\nHEADER");
  local_3c90 = `SStarshipGallery::ConstructColorsGallery'::__l2::<lambda_1>::operator()
                         (&local_4308,&local_3468,local_3c98,local_3ca0,true,false);
  local_3c80 = TSlotBase<SUniformWrapPanel::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_3c88,local_3c90);
  local_3c38 = SUniformWrapPanel::FArguments::operator+(local_3c78,local_3c80);
  local_3c48 = SUniformWrapPanel::Slot(&local_2d20);
  local_3c70 = &local_3658;
  pFVar1 = ::FName::FName(local_3c70,"Colors.Select");
  local_3c60 = *pFVar1;
  local_3c68 = &local_3118;
  local_3c58 = FText::FromString(local_3c68,"SELECT");
  local_3c50 = `SStarshipGallery::ConstructColorsGallery'::__l2::<lambda_1>::operator()
                         (&local_4308,&local_3478,local_3c58,local_3c60,true,false);
  local_3c40 = TSlotBase<SUniformWrapPanel::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_3c48,local_3c50);
  local_3bf8 = SUniformWrapPanel::FArguments::operator+(local_3c38,local_3c40);
  local_3c08 = SUniformWrapPanel::Slot(&local_2d48);
  local_3c30 = &local_3650;
  pFVar1 = ::FName::FName(local_3c30,"Colors.SelectHover");
  local_3c20 = *pFVar1;
  local_3c28 = &local_3108;
  local_3c18 = FText::FromString(local_3c28,"SELECT\nHOVER");
  local_3c10 = `SStarshipGallery::ConstructColorsGallery'::__l2::<lambda_1>::operator()
                         (&local_4308,&local_3488,local_3c18,local_3c20,false,false);
  local_3c00 = TSlotBase<SUniformWrapPanel::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_3c08,local_3c10);
  local_3bb8 = SUniformWrapPanel::FArguments::operator+(local_3bf8,local_3c00);
  local_3bc8 = SUniformWrapPanel::Slot(&local_2d70);
  local_3bf0 = &local_3648;
  pFVar1 = ::FName::FName(local_3bf0,"Colors.SelectParent");
  local_3be0 = *pFVar1;
  local_3be8 = &local_30f8;
  local_3bd8 = FText::FromString(local_3be8,"SELECT\nPARENT");
  local_3bd0 = `SStarshipGallery::ConstructColorsGallery'::__l2::<lambda_1>::operator()
                         (&local_4308,&local_3498,local_3bd8,local_3be0,false,false);
  local_3bc0 = TSlotBase<SUniformWrapPanel::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_3bc8,local_3bd0);
  local_3b78 = SUniformWrapPanel::FArguments::operator+(local_3bb8,local_3bc0);
  local_3b88 = SUniformWrapPanel::Slot(&local_2d98);
  local_3bb0 = &local_3640;
  pFVar1 = ::FName::FName(local_3bb0,"Colors.SelectInactive");
  local_3ba0 = *pFVar1;
  local_3ba8 = &local_30e8;
  local_3b98 = FText::FromString(local_3ba8,"SELECT\nINACTIVE");
  local_3b90 = `SStarshipGallery::ConstructColorsGallery'::__l2::<lambda_1>::operator()
                         (&local_4308,&local_34a8,local_3b98,local_3ba0,false,false);
  local_3b80 = TSlotBase<SUniformWrapPanel::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_3b88,local_3b90);
  local_3b70 = SUniformWrapPanel::FArguments::operator+(local_3b78,local_3b80);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_4304);
  pTVar7 = MakeTDecl<SUniformWrapPanel,RequiredArgs::T0RequiredArgs>
                     (&local_3238,"SUniformWrapPanel",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\SStarshipGallery.cpp"
                      ,0x14d,&local_4304);
  pTVar8 = TSlateDecl<SUniformWrapPanel,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar7,&local_34b8,local_3b70);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SUniformWrapPanel>(&local_3758,pTVar8);
  local_3b60 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_3b68,&local_3758);
  local_3b00 = SVerticalBox::FArguments::operator+(local_3b58,local_3b60);
  pFVar3 = SVerticalBox::Slot(&local_2780);
  local_3b50 = &pFVar3->field_0x18;
  pFVar3 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                     ((FSlotArgumentsMixin *)local_3b50,__real_41000000,__real_41c00000,
                      __real_41000000,__real_41000000);
  local_3b10 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar3);
  local_3b38 = STextBlock::FArguments::FArguments(&local_1018);
  local_3b48 = &local_28c8;
  local_3b40 = TAttribute<FSlateColor>::TAttribute<FSlateColor><FSlateColor>(local_3b48,&local_37a0)
  ;
  local_3b20 = STextBlock::FArguments::ColorAndOpacity(local_3b38,local_3b40);
  local_3b30 = &local_2898;
  pFVar4 = FText::AsLocalizable_Advanced_LocText
                     (&local_34c8,L"StarshipGallery",L"AccentColors",L"ACCENT COLORS");
  local_3b28 = TAttribute<FText>::TAttribute<FText>(local_3b30,pFVar4);
  local_3b18 = STextBlock::FArguments::Text(local_3b20,local_3b28);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_4303);
  pTVar5 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                     (&local_3250,"STextBlock",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\SStarshipGallery.cpp"
                      ,0x166,&local_4303);
  pTVar6 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar5,&local_34d8,local_3b18);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_3768,pTVar6);
  local_3b08 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_3b10,&local_3768);
  local_37e0 = SVerticalBox::FArguments::operator+(local_3b00,local_3b08);
  pFVar3 = SVerticalBox::Slot(&local_2868);
  local_37f0 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar3);
  local_3ac0 = SUniformWrapPanel::FArguments::FArguments(&local_1d40);
  local_3ad0 = SUniformWrapPanel::Slot(&local_2dc0);
  local_3af8 = &local_3638;
  pFVar1 = ::FName::FName(local_3af8,"Colors.AccentBlue");
  local_3ae8 = *pFVar1;
  local_3af0 = &local_30d8;
  local_3ae0 = FText::FromString(local_3af0,"BLUE");
  local_3ad8 = `SStarshipGallery::ConstructColorsGallery'::__l2::<lambda_1>::operator()
                         (&local_4308,&local_34e8,local_3ae0,local_3ae8,true,false);
  local_3ac8 = TSlotBase<SUniformWrapPanel::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_3ad0,local_3ad8);
  local_3a80 = SUniformWrapPanel::FArguments::operator+(local_3ac0,local_3ac8);
  local_3a90 = SUniformWrapPanel::Slot(&local_2de8);
  local_3ab8 = &local_3630;
  pFVar1 = ::FName::FName(local_3ab8,"Colors.AccentPurple");
  local_3aa8 = *pFVar1;
  local_3ab0 = &local_30c8;
  local_3aa0 = FText::FromString(local_3ab0,"PURPLE");
  local_3a98 = `SStarshipGallery::ConstructColorsGallery'::__l2::<lambda_1>::operator()
                         (&local_4308,&local_34f8,local_3aa0,local_3aa8,false,false);
  local_3a88 = TSlotBase<SUniformWrapPanel::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_3a90,local_3a98);
  local_3a40 = SUniformWrapPanel::FArguments::operator+(local_3a80,local_3a88);
  local_3a50 = SUniformWrapPanel::Slot(&local_2e10);
  local_3a78 = &local_3628;
  pFVar1 = ::FName::FName(local_3a78,"Colors.AccentPink");
  local_3a68 = *pFVar1;
  local_3a70 = &local_30b8;
  local_3a60 = FText::FromString(local_3a70,"PINK");
  local_3a58 = `SStarshipGallery::ConstructColorsGallery'::__l2::<lambda_1>::operator()
                         (&local_4308,&local_3508,local_3a60,local_3a68,true,false);
  local_3a48 = TSlotBase<SUniformWrapPanel::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_3a50,local_3a58);
  local_3a00 = SUniformWrapPanel::FArguments::operator+(local_3a40,local_3a48);
  local_3a10 = SUniformWrapPanel::Slot(&local_2e38);
  local_3a38 = &local_3620;
  pFVar1 = ::FName::FName(local_3a38,"Colors.AccentRed");
  local_3a28 = *pFVar1;
  local_3a30 = &local_30a8;
  local_3a20 = FText::FromString(local_3a30,"RED");
  local_3a18 = `SStarshipGallery::ConstructColorsGallery'::__l2::<lambda_1>::operator()
                         (&local_4308,&local_3518,local_3a20,local_3a28,true,false);
  local_3a08 = TSlotBase<SUniformWrapPanel::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_3a10,local_3a18);
  local_39c0 = SUniformWrapPanel::FArguments::operator+(local_3a00,local_3a08);
  local_39d0 = SUniformWrapPanel::Slot(&local_2e60);
  local_39f8 = &local_3618;
  pFVar1 = ::FName::FName(local_39f8,"Colors.AccentOrange");
  local_39e8 = *pFVar1;
  local_39f0 = &local_3098;
  local_39e0 = FText::FromString(local_39f0,"ORANGE");
  local_39d8 = `SStarshipGallery::ConstructColorsGallery'::__l2::<lambda_1>::operator()
                         (&local_4308,&local_3528,local_39e0,local_39e8,true,false);
  local_39c8 = TSlotBase<SUniformWrapPanel::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_39d0,local_39d8);
  local_3980 = SUniformWrapPanel::FArguments::operator+(local_39c0,local_39c8);
  local_3990 = SUniformWrapPanel::Slot(&local_2e88);
  local_39b8 = &local_3610;
  pFVar1 = ::FName::FName(local_39b8,"Colors.AccentYellow");
  local_39a8 = *pFVar1;
  local_39b0 = &local_3088;
  local_39a0 = FText::FromString(local_39b0,"YELLOW");
  local_3998 = `SStarshipGallery::ConstructColorsGallery'::__l2::<lambda_1>::operator()
                         (&local_4308,&local_3538,local_39a0,local_39a8,true,false);
  local_3988 = TSlotBase<SUniformWrapPanel::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_3990,local_3998);
  local_3940 = SUniformWrapPanel::FArguments::operator+(local_3980,local_3988);
  local_3950 = SUniformWrapPanel::Slot(&local_2eb0);
  local_3978 = &local_3608;
  pFVar1 = ::FName::FName(local_3978,"Colors.AccentGreen");
  local_3968 = *pFVar1;
  local_3970 = &local_3078;
  local_3960 = FText::FromString(local_3970,"GREEN");
  local_3958 = `SStarshipGallery::ConstructColorsGallery'::__l2::<lambda_1>::operator()
                         (&local_4308,&local_3548,local_3960,local_3968,true,false);
  local_3948 = TSlotBase<SUniformWrapPanel::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_3950,local_3958);
  local_3900 = SUniformWrapPanel::FArguments::operator+(local_3940,local_3948);
  local_3910 = SUniformWrapPanel::Slot(&local_2ed8);
  local_3938 = &local_3600;
  pFVar1 = ::FName::FName(local_3938,"Colors.AccentBrown");
  local_3928 = *pFVar1;
  local_3930 = &local_3068;
  local_3920 = FText::FromString(local_3930,"BROWN");
  local_3918 = `SStarshipGallery::ConstructColorsGallery'::__l2::<lambda_1>::operator()
                         (&local_4308,&local_3558,local_3920,local_3928,false,false);
  local_3908 = TSlotBase<SUniformWrapPanel::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_3910,local_3918);
  local_38c0 = SUniformWrapPanel::FArguments::operator+(local_3900,local_3908);
  local_38d0 = SUniformWrapPanel::Slot(&local_2f00);
  local_38f8 = &local_35f8;
  pFVar1 = ::FName::FName(local_38f8,"Colors.AccentFolder");
  local_38e8 = *pFVar1;
  local_38f0 = &local_3058;
  local_38e0 = FText::FromString(local_38f0,"FOLDER");
  local_38d8 = `SStarshipGallery::ConstructColorsGallery'::__l2::<lambda_1>::operator()
                         (&local_4308,&local_3568,local_38e0,local_38e8,false,false);
  local_38c8 = TSlotBase<SUniformWrapPanel::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_38d0,local_38d8);
  local_3880 = SUniformWrapPanel::FArguments::operator+(local_38c0,local_38c8);
  local_3890 = SUniformWrapPanel::Slot(&local_2f28);
  local_38b8 = &local_35f0;
  pFVar1 = ::FName::FName(local_38b8,"Colors.AccentBlack");
  local_38a8 = *pFVar1;
  local_38b0 = &local_3048;
  local_38a0 = FText::FromString(local_38b0,"BLACK");
  local_3898 = `SStarshipGallery::ConstructColorsGallery'::__l2::<lambda_1>::operator()
                         (&local_4308,&local_3578,local_38a0,local_38a8,false,true);
  local_3888 = TSlotBase<SUniformWrapPanel::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_3890,local_3898);
  local_3840 = SUniformWrapPanel::FArguments::operator+(local_3880,local_3888);
  local_3850 = SUniformWrapPanel::Slot(&local_2f50);
  local_3878 = &local_35e8;
  pFVar1 = ::FName::FName(local_3878,"Colors.AccentGray");
  local_3868 = *pFVar1;
  local_3870 = &local_3038;
  local_3860 = FText::FromString(local_3870,"GRAY");
  local_3858 = `SStarshipGallery::ConstructColorsGallery'::__l2::<lambda_1>::operator()
                         (&local_4308,&local_3588,local_3860,local_3868,false,false);
  local_3848 = TSlotBase<SUniformWrapPanel::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_3850,local_3858);
  local_3800 = SUniformWrapPanel::FArguments::operator+(local_3840,local_3848);
  local_3810 = SUniformWrapPanel::Slot(&local_2f78);
  local_3838 = &local_35e0;
  pFVar1 = ::FName::FName(local_3838,"Colors.AccentWhite");
  local_3828 = *pFVar1;
  local_3830 = &local_3028;
  local_3820 = FText::FromString(local_3830,"WHITE");
  local_3818 = `SStarshipGallery::ConstructColorsGallery'::__l2::<lambda_1>::operator()
                         (&local_4308,&local_3598,local_3820,local_3828,true,false);
  local_3808 = TSlotBase<SUniformWrapPanel::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_3810,local_3818);
  local_37f8 = SUniformWrapPanel::FArguments::operator+(local_3800,local_3808);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_4302);
  pTVar7 = MakeTDecl<SUniformWrapPanel,RequiredArgs::T0RequiredArgs>
                     (&local_3268,"SUniformWrapPanel",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\SStarshipGallery.cpp"
                      ,0x16c,&local_4302);
  pTVar8 = TSlateDecl<SUniformWrapPanel,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar7,&local_35a8,local_37f8);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SUniformWrapPanel>(&local_3778,pTVar8);
  local_37e8 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_37f0,&local_3778);
  local_37d8 = SVerticalBox::FArguments::operator+(local_37e0,local_37e8);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_4301);
  this_00 = MakeTDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
                      (&local_3280,"SVerticalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\SStarshipGallery.cpp"
                       ,0x119,&local_4301);
  pTVar9 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                     (this_00,&local_35b8,local_37d8);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SVerticalBox>(&local_3788,pTVar9);
  local_37c8 = TSlotBase<SScrollBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_37d0,&local_3788);
  local_37b8 = SScrollBox::FArguments::operator+(local_37c0,local_37c8);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_4300);
  this_01 = MakeTDecl<SScrollBox,RequiredArgs::T0RequiredArgs>
                      (&local_3298,"SScrollBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\SStarshipGallery.cpp"
                       ,0x113,&local_4300);
  pTVar10 = TSlateDecl<SScrollBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_01,&local_35c8,local_37b8);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SScrollBox>(&local_3718,pTVar10);
  local_37a8 = SBorder::FArguments::operator[](local_37b0,&local_3718);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(local_42ff);
  this_02 = MakeTDecl<SBorder,RequiredArgs::T0RequiredArgs>
                      (&local_32b0,"SBorder",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\SStarshipGallery.cpp"
                       ,0x110,local_42ff);
  pTVar11 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_02,&local_35d8,local_37a8);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SBorder>(__return_storage_ptr__,pTVar11);
  TSharedRef<SBorder,1>::~TSharedRef<SBorder,1>(&local_35d8);
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>(&local_32b0);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_3718);
  TSharedRef<SScrollBox,1>::~TSharedRef<SScrollBox,1>(&local_35c8);
  TSlateDecl<SScrollBox,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SScrollBox,RequiredArgs::T0RequiredArgs>(&local_3298);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_3788);
  TSharedRef<SVerticalBox,1>::~TSharedRef<SVerticalBox,1>(&local_35b8);
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>(&local_3280);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_3778);
  TSharedRef<SUniformWrapPanel,1>::~TSharedRef<SUniformWrapPanel,1>(&local_35a8);
  TSlateDecl<SUniformWrapPanel,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SUniformWrapPanel,RequiredArgs::T0RequiredArgs>(&local_3268);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_3598);
  SUniformWrapPanel::FSlot::FSlotArguments::~FSlotArguments(&local_2f78);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_3588);
  SUniformWrapPanel::FSlot::FSlotArguments::~FSlotArguments(&local_2f50);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_3578);
  SUniformWrapPanel::FSlot::FSlotArguments::~FSlotArguments(&local_2f28);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_3568);
  SUniformWrapPanel::FSlot::FSlotArguments::~FSlotArguments(&local_2f00);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_3558);
  SUniformWrapPanel::FSlot::FSlotArguments::~FSlotArguments(&local_2ed8);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_3548);
  SUniformWrapPanel::FSlot::FSlotArguments::~FSlotArguments(&local_2eb0);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_3538);
  SUniformWrapPanel::FSlot::FSlotArguments::~FSlotArguments(&local_2e88);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_3528);
  SUniformWrapPanel::FSlot::FSlotArguments::~FSlotArguments(&local_2e60);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_3518);
  SUniformWrapPanel::FSlot::FSlotArguments::~FSlotArguments(&local_2e38);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_3508);
  SUniformWrapPanel::FSlot::FSlotArguments::~FSlotArguments(&local_2e10);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_34f8);
  SUniformWrapPanel::FSlot::FSlotArguments::~FSlotArguments(&local_2de8);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_34e8);
  SUniformWrapPanel::FSlot::FSlotArguments::~FSlotArguments(&local_2dc0);
  SUniformWrapPanel::FArguments::~FArguments(&local_1d40);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_2868);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_3768);
  TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_34d8);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_3250);
  FText::~FText(&local_34c8);
  STextBlock::FArguments::~FArguments(&local_1018);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_2780);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_3758);
  TSharedRef<SUniformWrapPanel,1>::~TSharedRef<SUniformWrapPanel,1>(&local_34b8);
  TSlateDecl<SUniformWrapPanel,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SUniformWrapPanel,RequiredArgs::T0RequiredArgs>(&local_3238);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_34a8);
  SUniformWrapPanel::FSlot::FSlotArguments::~FSlotArguments(&local_2d98);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_3498);
  SUniformWrapPanel::FSlot::FSlotArguments::~FSlotArguments(&local_2d70);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_3488);
  SUniformWrapPanel::FSlot::FSlotArguments::~FSlotArguments(&local_2d48);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_3478);
  SUniformWrapPanel::FSlot::FSlotArguments::~FSlotArguments(&local_2d20);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_3468);
  SUniformWrapPanel::FSlot::FSlotArguments::~FSlotArguments(&local_2cf8);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_3458);
  SUniformWrapPanel::FSlot::FSlotArguments::~FSlotArguments(&local_2cd0);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_3448);
  SUniformWrapPanel::FSlot::FSlotArguments::~FSlotArguments(&local_2ca8);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_3438);
  SUniformWrapPanel::FSlot::FSlotArguments::~FSlotArguments(&local_2c80);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_3428);
  SUniformWrapPanel::FSlot::FSlotArguments::~FSlotArguments(&local_2c58);
  SUniformWrapPanel::FArguments::~FArguments(&local_1a28);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_2698);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_3748);
  TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_3418);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_3220);
  FText::~FText(&local_3408);
  STextBlock::FArguments::~FArguments(&local_ac0);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_25b0);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_3738);
  TSharedRef<SUniformWrapPanel,1>::~TSharedRef<SUniformWrapPanel,1>(&local_33f8);
  TSlateDecl<SUniformWrapPanel,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SUniformWrapPanel,RequiredArgs::T0RequiredArgs>(&local_3208);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_33e8);
  SUniformWrapPanel::FSlot::FSlotArguments::~FSlotArguments(&local_2c30);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_33d8);
  SUniformWrapPanel::FSlot::FSlotArguments::~FSlotArguments(&local_2c08);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_33c8);
  SUniformWrapPanel::FSlot::FSlotArguments::~FSlotArguments(&local_2be0);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_33b8);
  SUniformWrapPanel::FSlot::FSlotArguments::~FSlotArguments(&local_2bb8);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_33a8);
  SUniformWrapPanel::FSlot::FSlotArguments::~FSlotArguments(&local_2b90);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_3398);
  SUniformWrapPanel::FSlot::FSlotArguments::~FSlotArguments(&local_2b68);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_3388);
  SUniformWrapPanel::FSlot::FSlotArguments::~FSlotArguments(&local_2b40);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_3378);
  SUniformWrapPanel::FSlot::FSlotArguments::~FSlotArguments(&local_2b18);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_3368);
  SUniformWrapPanel::FSlot::FSlotArguments::~FSlotArguments(&local_2af0);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_3358);
  SUniformWrapPanel::FSlot::FSlotArguments::~FSlotArguments(&local_2ac8);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_3348);
  SUniformWrapPanel::FSlot::FSlotArguments::~FSlotArguments(&local_2aa0);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_3338);
  SUniformWrapPanel::FSlot::FSlotArguments::~FSlotArguments(&local_2a78);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_3328);
  SUniformWrapPanel::FSlot::FSlotArguments::~FSlotArguments(&local_2a50);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_3318);
  SUniformWrapPanel::FSlot::FSlotArguments::~FSlotArguments(&local_2a28);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_3308);
  SUniformWrapPanel::FSlot::FSlotArguments::~FSlotArguments(&local_2a00);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_32f8);
  SUniformWrapPanel::FSlot::FSlotArguments::~FSlotArguments(&local_29d8);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_32e8);
  SUniformWrapPanel::FSlot::FSlotArguments::~FSlotArguments(&local_29b0);
  SUniformWrapPanel::FArguments::~FArguments(&local_1710);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_24c8);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_3728);
  TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_32d8);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_31f0);
  FText::~FText(&local_32c8);
  STextBlock::FArguments::~FArguments(&local_568);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_23e0);
  SVerticalBox::FArguments::~FArguments(&local_2210);
  SScrollBox::FSlot::FSlotArguments::~FSlotArguments(&local_22f8);
  SScrollBox::FArguments::~FArguments(&local_2008);
  SBorder::FArguments::~FArguments(&local_13f8);
  return __return_storage_ptr__;
}

// ConstructIconsGallery @ 142f8fbe0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

TSharedRef<SWidget,1> * __thiscall
SStarshipGallery::ConstructIconsGallery
          (SStarshipGallery *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  FName *pFVar1;
  FSlotArguments *pFVar2;
  FSlotArguments *pFVar3;
  FText *pFVar4;
  TSlateDecl<SSearchBox,RequiredArgs::T0RequiredArgs> *this_00;
  TSharedRef<SSearchBox,1> *pTVar5;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> *this_01;
  TSharedRef<SVerticalBox,1> *pTVar6;
  TSlateDecl<SScrollBox,RequiredArgs::T0RequiredArgs> *this_02;
  TSharedRef<SScrollBox,1> *pTVar7;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> *this_03;
  TSharedRef<SBorder,1> *pTVar8;
  T0RequiredArgs local_2088;
  T0RequiredArgs local_2087;
  T0RequiredArgs local_2086;
  T0RequiredArgs local_2085 [5];
  SStarshipGallery *local_2080;
  SStarshipGallery *local_2078;
  ISlateStyle *local_2070;
  FName *local_2068;
  FName local_2060;
  code *local_2058;
  FSlateBrush *local_2050;
  TAttribute<FSlateBrush_const_*> *local_2048;
  TAttribute<FSlateBrush_const_*> *local_2040;
  FArguments *local_2038;
  undefined1 *local_2030;
  undefined1 *local_2028;
  TAttribute<FText> *local_2020;
  TAttribute<FText> *local_2018;
  FArguments *local_2010;
  TSlateDecl<SSearchBox,RequiredArgs::T0RequiredArgs> *local_2008;
  FArguments *local_2000;
  FSlotArguments *local_1ff8;
  FSlotArguments *local_1ff0;
  FArguments *local_1fe8;
  FString *local_1fe0;
  FText *local_1fd8;
  FString *local_1fd0;
  FText *local_1fc8;
  TSharedRef<SWidget,1> *local_1fc0;
  FSlotArguments *local_1fb8;
  FSlotArguments *local_1fb0;
  FArguments *local_1fa8;
  FString *local_1fa0;
  FText *local_1f98;
  FString *local_1f90;
  FText *local_1f88;
  TSharedRef<SWidget,1> *local_1f80;
  FSlotArguments *local_1f78;
  FSlotArguments *local_1f70;
  FArguments *local_1f68;
  FString *local_1f60;
  FText *local_1f58;
  FString *local_1f50;
  FText *local_1f48;
  TSharedRef<SWidget,1> *local_1f40;
  FSlotArguments *local_1f38;
  FSlotArguments *local_1f30;
  FArguments *local_1f28;
  FString *local_1f20;
  FText *local_1f18;
  FString *local_1f10;
  FText *local_1f08;
  TSharedRef<SWidget,1> *local_1f00;
  FSlotArguments *local_1ef8;
  FSlotArguments *local_1ef0;
  FArguments *local_1ee8;
  FString *local_1ee0;
  FText *local_1ed8;
  FString *local_1ed0;
  FText *local_1ec8;
  TSharedRef<SWidget,1> *local_1ec0;
  FSlotArguments *local_1eb8;
  FSlotArguments *local_1eb0;
  FArguments *local_1ea8;
  FString *local_1ea0;
  FText *local_1e98;
  FString *local_1e90;
  FText *local_1e88;
  TSharedRef<SWidget,1> *local_1e80;
  FSlotArguments *local_1e78;
  FSlotArguments *local_1e70;
  FArguments *local_1e68;
  FString *local_1e60;
  FText *local_1e58;
  FString *local_1e50;
  FText *local_1e48;
  TSharedRef<SWidget,1> *local_1e40;
  FSlotArguments *local_1e38;
  FSlotArguments *local_1e30;
  FArguments *local_1e28;
  FString *local_1e20;
  FText *local_1e18;
  FString *local_1e10;
  FText *local_1e08;
  TSharedRef<SWidget,1> *local_1e00;
  FSlotArguments *local_1df8;
  FSlotArguments *local_1df0;
  FArguments *local_1de8;
  FString *local_1de0;
  FText *local_1dd8;
  FString *local_1dd0;
  FText *local_1dc8;
  TSharedRef<SWidget,1> *local_1dc0;
  FSlotArguments *local_1db8;
  FSlotArguments *local_1db0;
  FArguments *local_1da8;
  FString *local_1da0;
  FText *local_1d98;
  FString *local_1d90;
  FText *local_1d88;
  TSharedRef<SWidget,1> *local_1d80;
  FSlotArguments *local_1d78;
  FSlotArguments *local_1d70;
  FArguments *local_1d68;
  FString *local_1d60;
  FText *local_1d58;
  FString *local_1d50;
  FText *local_1d48;
  TSharedRef<SWidget,1> *local_1d40;
  FSlotArguments *local_1d38;
  FSlotArguments *local_1d30;
  FArguments *local_1d28;
  FString *local_1d20;
  FText *local_1d18;
  FString *local_1d10;
  FText *local_1d08;
  TSharedRef<SWidget,1> *local_1d00;
  FSlotArguments *local_1cf8;
  FSlotArguments *local_1cf0;
  FArguments *local_1ce8;
  FArguments *local_1ce0;
  FSlotArguments *local_1cd8;
  FSlotArguments *local_1cd0;
  FArguments *local_1cc8;
  FArguments *local_1cc0;
  FArguments *local_1cb8;
  FArguments *local_1cb0;
  TSharedRef<SWidget,1> local_1ca8;
  TSharedRef<SWidget,1> local_1c98;
  TSharedRef<SWidget,1> local_1c88;
  FName local_1c78;
  TSharedRef<SBorder,1> local_1c70;
  TSharedRef<SScrollBox,1> local_1c60;
  TSharedRef<SVerticalBox,1> local_1c50;
  TSharedRef<SWidget,1> local_1c40;
  TSharedRef<SWidget,1> local_1c30;
  TSharedRef<SWidget,1> local_1c20;
  TSharedRef<SWidget,1> local_1c10;
  TSharedRef<SWidget,1> local_1c00;
  TSharedRef<SWidget,1> local_1bf0;
  TSharedRef<SWidget,1> local_1be0;
  TSharedRef<SWidget,1> local_1bd0;
  TSharedRef<SWidget,1> local_1bc0;
  TSharedRef<SWidget,1> local_1bb0;
  TSharedRef<SWidget,1> local_1ba0;
  TSharedRef<SWidget,1> local_1b90;
  TSharedRef<SSearchBox,1> local_1b80;
  FText local_1b70;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_1b60;
  TSlateDecl<SScrollBox,RequiredArgs::T0RequiredArgs> local_1b48;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_1b30;
  TSlateDecl<SSearchBox,RequiredArgs::T0RequiredArgs> local_1b18;
  FString local_1b00;
  FText local_1af0;
  FString local_1ae0;
  FText local_1ad0;
  FString local_1ac0;
  FText local_1ab0;
  FString local_1aa0;
  FText local_1a90;
  FString local_1a80;
  FText local_1a70;
  FString local_1a60;
  FText local_1a50;
  FString local_1a40;
  FText local_1a30;
  FString local_1a20;
  FText local_1a10;
  FString local_1a00;
  FText local_19f0;
  FString local_19e0;
  FText local_19d0;
  FString local_19c0;
  FText local_19b0;
  FString local_19a0;
  FText local_1990;
  TAttribute<FSlateBrush_const_*> local_1980;
  TAttribute<FText> local_1958;
  FSlotArguments local_1928;
  FSlotArguments local_1840;
  FSlotArguments local_1758;
  FSlotArguments local_1670;
  FSlotArguments local_1588;
  FSlotArguments local_14a0;
  FSlotArguments local_13b8;
  FSlotArguments local_12d0;
  FSlotArguments local_11e8;
  FSlotArguments local_1100;
  FSlotArguments local_1018;
  FSlotArguments local_f30;
  FSlotArguments local_e48;
  FSlotArguments local_d60;
  FArguments local_c78;
  FArguments local_a70;
  FArguments local_7a8;
  FArguments local_3f0;
  undefined8 uStack_8;
  
  uStack_8 = 0x142f8fbf4;
  local_2080 = this;
  local_2078 = this;
  local_2038 = SBorder::FArguments::FArguments(&local_3f0);
  local_2048 = &local_1980;
  local_2070 = FAppStyle::Get();
  local_2058 = *(code **)((longlong)*local_2070 + 0x50);
  local_2068 = &local_1c78;
  pFVar1 = ::FName::FName(local_2068,"ToolPanel.GroupBorder");
  local_2060 = *pFVar1;
  local_2050 = (FSlateBrush *)(*local_2058)(local_2070,local_2060,0,0);
  local_2040 = TAttribute<FSlateBrush_const_*>::TAttribute<FSlateBrush_const_*>
                         (local_2048,&local_2050);
  local_1cb8 = SBorder::FArguments::BorderImage(local_2038,local_2040);
  local_1cc8 = SScrollBox::FArguments::FArguments(&local_a70);
  pFVar2 = SScrollBox::Slot(&local_d60);
  local_2030 = &pFVar2->field_0x18;
  local_1cd8 = TPaddingWidgetSlotMixin<SScrollBox::FSlot>::FSlotArgumentsMixin::Padding
                         ((FSlotArgumentsMixin *)local_2030,__real_42400000);
  local_1fe8 = SVerticalBox::FArguments::FArguments(&local_c78);
  pFVar3 = SVerticalBox::Slot(&local_e48);
  pFVar3 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar3);
  local_2028 = &pFVar3->field_0x18;
  local_1ff8 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                         ((FSlotArgumentsMixin *)local_2028,0.0,0.0,0.0,__real_40800000);
  local_2010 = SSearchBox::FArguments::FArguments(&local_7a8);
  local_2020 = &local_1958;
  pFVar4 = FText::AsLocalizable_Advanced_LocText
                     (&local_1b70,L"StarshipGallery",L"IconSearchHint",
                      L"Enter text to filter icons by path...");
  local_2018 = TAttribute<FText>::TAttribute<FText>(local_2020,pFVar4);
  local_2000 = SSearchBox::FArguments::HintText(local_2010,local_2018);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_2088);
  local_2008 = MakeTDecl<SSearchBox,RequiredArgs::T0RequiredArgs>
                         (&local_1b18,"SSearchBox",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\SStarshipGallery.cpp"
                          ,0x1ed,&local_2088);
  this_00 = TSlateDecl<SSearchBox,RequiredArgs::T0RequiredArgs>::Expose<SSearchBox>
                      (local_2008,&this->IconSearchBox);
  pTVar5 = TSlateDecl<SSearchBox,RequiredArgs::T0RequiredArgs>::operator<<=
                     (this_00,&local_1b80,local_2000);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SSearchBox>(&local_1c88,pTVar5);
  local_1ff0 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_1ff8,&local_1c88);
  local_1fa8 = SVerticalBox::FArguments::operator+(local_1fe8,local_1ff0);
  pFVar3 = SVerticalBox::Slot(&local_f30);
  local_1fb8 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar3);
  local_1fe0 = &local_19c0;
  local_1fd0 = ::FString::FString(local_1fe0,"Content/Slate/Starship/Common");
  local_1fd8 = &local_19b0;
  local_1fc8 = FText::AsLocalizable_Advanced_LocText
                         (local_1fd8,L"StarshipGallery",L"SlateCore",L"Core");
  local_1fc0 = `SStarshipGallery::ConstructIconsGallery'::__l2::<lambda_2>::operator()
                         (&local_2078,&local_1b90,local_1fc8,local_1fd0);
  local_1fb0 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_1fb8,local_1fc0);
  local_1f68 = SVerticalBox::FArguments::operator+(local_1fa8,local_1fb0);
  pFVar3 = SVerticalBox::Slot(&local_1018);
  local_1f78 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar3);
  local_1fa0 = &local_19a0;
  local_1f90 = ::FString::FString(local_1fa0,"Content/Editor/Slate/Starship/Common");
  local_1f98 = &local_1990;
  local_1f88 = FText::AsLocalizable_Advanced_LocText
                         (local_1f98,L"StarshipGallery",L"Editor Common",L"Editor");
  local_1f80 = `SStarshipGallery::ConstructIconsGallery'::__l2::<lambda_2>::operator()
                         (&local_2078,&local_1ba0,local_1f88,local_1f90);
  local_1f70 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_1f78,local_1f80);
  local_1f28 = SVerticalBox::FArguments::operator+(local_1f68,local_1f70);
  pFVar3 = SVerticalBox::Slot(&local_1100);
  local_1f38 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar3);
  local_1f60 = &local_1b00;
  local_1f50 = ::FString::FString(local_1f60,"Content/Editor/Slate/Starship/SceneOutliner");
  local_1f58 = &local_1af0;
  local_1f48 = FText::AsLocalizable_Advanced_LocText
                         (local_1f58,L"StarshipGallery",L"SceneOutliner",L"SceneOutliner");
  local_1f40 = `SStarshipGallery::ConstructIconsGallery'::__l2::<lambda_2>::operator()
                         (&local_2078,&local_1bb0,local_1f48,local_1f50);
  local_1f30 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_1f38,local_1f40);
  local_1ee8 = SVerticalBox::FArguments::operator+(local_1f28,local_1f30);
  pFVar3 = SVerticalBox::Slot(&local_11e8);
  local_1ef8 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar3);
  local_1f20 = &local_1ae0;
  local_1f10 = ::FString::FString(local_1f20,"Content/Editor/Slate/Starship/GraphEditors");
  local_1f18 = &local_1ad0;
  local_1f08 = FText::AsLocalizable_Advanced_LocText
                         (local_1f18,L"StarshipGallery",L"GraphEditors",L"GraphEditors");
  local_1f00 = `SStarshipGallery::ConstructIconsGallery'::__l2::<lambda_2>::operator()
                         (&local_2078,&local_1bc0,local_1f08,local_1f10);
  local_1ef0 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_1ef8,local_1f00);
  local_1ea8 = SVerticalBox::FArguments::operator+(local_1ee8,local_1ef0);
  pFVar3 = SVerticalBox::Slot(&local_12d0);
  local_1eb8 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar3);
  local_1ee0 = &local_1ac0;
  local_1ed0 = ::FString::FString(local_1ee0,"Content/Editor/Slate/Starship/MainToolbar");
  local_1ed8 = &local_1ab0;
  local_1ec8 = FText::AsLocalizable_Advanced_LocText
                         (local_1ed8,L"StarshipGallery",L"MainToolbar",L"MainToolbar");
  local_1ec0 = `SStarshipGallery::ConstructIconsGallery'::__l2::<lambda_2>::operator()
                         (&local_2078,&local_1bd0,local_1ec8,local_1ed0);
  local_1eb0 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_1eb8,local_1ec0);
  local_1e68 = SVerticalBox::FArguments::operator+(local_1ea8,local_1eb0);
  pFVar3 = SVerticalBox::Slot(&local_13b8);
  local_1e78 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar3);
  local_1ea0 = &local_1aa0;
  local_1e90 = ::FString::FString(local_1ea0,"Content/Editor/Slate/Icons/Paint");
  local_1e98 = &local_1a90;
  local_1e88 = FText::AsLocalizable_Advanced_LocText
                         (local_1e98,L"StarshipGallery",L"PaintIconTitle",L"Paint");
  local_1e80 = `SStarshipGallery::ConstructIconsGallery'::__l2::<lambda_1>::operator()
                         (&local_2080,&local_1be0,local_1e88,local_1e90);
  local_1e70 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_1e78,local_1e80);
  local_1e28 = SVerticalBox::FArguments::operator+(local_1e68,local_1e70);
  pFVar3 = SVerticalBox::Slot(&local_14a0);
  local_1e38 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar3);
  local_1e60 = &local_1a80;
  local_1e50 = ::FString::FString(local_1e60,"Content/Editor/Slate/Icons/Landscape");
  local_1e58 = &local_1a70;
  local_1e48 = FText::AsLocalizable_Advanced_LocText
                         (local_1e58,L"StarshipGallery",L"LandscapeIconTitle",L"Landscape");
  local_1e40 = `SStarshipGallery::ConstructIconsGallery'::__l2::<lambda_1>::operator()
                         (&local_2080,&local_1bf0,local_1e48,local_1e50);
  local_1e30 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_1e38,local_1e40);
  local_1de8 = SVerticalBox::FArguments::operator+(local_1e28,local_1e30);
  pFVar3 = SVerticalBox::Slot(&local_1588);
  local_1df8 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar3);
  local_1e20 = &local_1a60;
  local_1e10 = ::FString::FString(local_1e20,"/Plugins/Editor/ModelingToolsEditorMode/Content/Icons"
                                 );
  local_1e18 = &local_1a50;
  local_1e08 = FText::AsLocalizable_Advanced_LocText
                         (local_1e18,L"StarshipGallery",L"ModelingIconTitle",L"Modeling");
  local_1e00 = `SStarshipGallery::ConstructIconsGallery'::__l2::<lambda_1>::operator()
                         (&local_2080,&local_1c00,local_1e08,local_1e10);
  local_1df0 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_1df8,local_1e00);
  local_1da8 = SVerticalBox::FArguments::operator+(local_1de8,local_1df0);
  pFVar3 = SVerticalBox::Slot(&local_1670);
  local_1db8 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar3);
  local_1de0 = &local_1a40;
  local_1dd0 = ::FString::FString(local_1de0,"/Plugins/Experimental/ChaosEditor/Content");
  local_1dd8 = &local_1a30;
  local_1dc8 = FText::AsLocalizable_Advanced_LocText
                         (local_1dd8,L"StarshipGallery",L"FractureIconTitle",L"Fracture");
  local_1dc0 = `SStarshipGallery::ConstructIconsGallery'::__l2::<lambda_1>::operator()
                         (&local_2080,&local_1c10,local_1dc8,local_1dd0);
  local_1db0 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_1db8,local_1dc0);
  local_1d68 = SVerticalBox::FArguments::operator+(local_1da8,local_1db0);
  pFVar3 = SVerticalBox::Slot(&local_1758);
  local_1d78 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar3);
  local_1da0 = &local_1a20;
  local_1d90 = ::FString::FString(local_1da0,"Content/Editor/Slate/GenericCurveEditor/Icons");
  local_1d98 = &local_1a10;
  local_1d88 = FText::AsLocalizable_Advanced_LocText
                         (local_1d98,L"StarshipGallery",L"CurveEditorIconTitle",L"CurveEditor");
  local_1d80 = `SStarshipGallery::ConstructIconsGallery'::__l2::<lambda_1>::operator()
                         (&local_2080,&local_1c20,local_1d88,local_1d90);
  local_1d70 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_1d78,local_1d80);
  local_1d28 = SVerticalBox::FArguments::operator+(local_1d68,local_1d70);
  pFVar3 = SVerticalBox::Slot(&local_1840);
  local_1d38 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar3);
  local_1d60 = &local_1a00;
  local_1d50 = ::FString::FString(local_1d60,"Content/Editor/Slate/Icons/GeneralTools");
  local_1d58 = &local_19f0;
  local_1d48 = FText::AsLocalizable_Advanced_LocText
                         (local_1d58,L"StarshipGallery",L"GeneralIconTitle",L"General");
  local_1d40 = `SStarshipGallery::ConstructIconsGallery'::__l2::<lambda_1>::operator()
                         (&local_2080,&local_1c30,local_1d48,local_1d50);
  local_1d30 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_1d38,local_1d40);
  local_1ce8 = SVerticalBox::FArguments::operator+(local_1d28,local_1d30);
  pFVar3 = SVerticalBox::Slot(&local_1928);
  local_1cf8 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar3);
  local_1d20 = &local_19e0;
  local_1d10 = ::FString::FString(local_1d20,"Content/Editor/Slate/Starship/TimelineEditor");
  local_1d18 = &local_19d0;
  local_1d08 = FText::AsLocalizable_Advanced_LocText
                         (local_1d18,L"StarshipGallery",L"TimelineEditorIconTitle",L"TimelineEditor"
                         );
  local_1d00 = `SStarshipGallery::ConstructIconsGallery'::__l2::<lambda_2>::operator()
                         (&local_2078,&local_1c40,local_1d08,local_1d10);
  local_1cf0 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_1cf8,local_1d00);
  local_1ce0 = SVerticalBox::FArguments::operator+(local_1ce8,local_1cf0);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_2087);
  this_01 = MakeTDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
                      (&local_1b30,"SVerticalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\SStarshipGallery.cpp"
                       ,0x1e7,&local_2087);
  pTVar6 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                     (this_01,&local_1c50,local_1ce0);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SVerticalBox>(&local_1c98,pTVar6);
  local_1cd0 = TSlotBase<SScrollBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_1cd8,&local_1c98);
  local_1cc0 = SScrollBox::FArguments::operator+(local_1cc8,local_1cd0);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_2086);
  this_02 = MakeTDecl<SScrollBox,RequiredArgs::T0RequiredArgs>
                      (&local_1b48,"SScrollBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\SStarshipGallery.cpp"
                       ,0x1e3,&local_2086);
  pTVar7 = TSlateDecl<SScrollBox,RequiredArgs::T0RequiredArgs>::operator<<=
                     (this_02,&local_1c60,local_1cc0);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SScrollBox>(&local_1ca8,pTVar7);
  local_1cb0 = SBorder::FArguments::operator[](local_1cb8,&local_1ca8);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(local_2085);
  this_03 = MakeTDecl<SBorder,RequiredArgs::T0RequiredArgs>
                      (&local_1b60,"SBorder",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\SStarshipGallery.cpp"
                       ,0x1e0,local_2085);
  pTVar8 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                     (this_03,&local_1c70,local_1cb0);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SBorder>(__return_storage_ptr__,pTVar8);
  TSharedRef<SBorder,1>::~TSharedRef<SBorder,1>(&local_1c70);
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>(&local_1b60);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_1ca8);
  TSharedRef<SScrollBox,1>::~TSharedRef<SScrollBox,1>(&local_1c60);
  TSlateDecl<SScrollBox,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SScrollBox,RequiredArgs::T0RequiredArgs>(&local_1b48);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_1c98);
  TSharedRef<SVerticalBox,1>::~TSharedRef<SVerticalBox,1>(&local_1c50);
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>(&local_1b30);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_1c40);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_1928);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_1c30);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_1840);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_1c20);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_1758);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_1c10);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_1670);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_1c00);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_1588);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_1bf0);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_14a0);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_1be0);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_13b8);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_1bd0);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_12d0);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_1bc0);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_11e8);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_1bb0);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_1100);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_1ba0);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_1018);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_1b90);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_f30);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_1c88);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_1b80.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_1b18._Widget.SharedReferenceCount);
  FText::~FText(&local_1b70);
  SSearchBox::FArguments::~FArguments(&local_7a8);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_e48);
  SVerticalBox::FArguments::~FArguments(&local_c78);
  SScrollBox::FSlot::FSlotArguments::~FSlotArguments(&local_d60);
  SScrollBox::FArguments::~FArguments(&local_a70);
  SBorder::FArguments::~FArguments(&local_3f0);
  return __return_storage_ptr__;
}

// ConstructListGallery @ 142f918a0

TSharedRef<SWidget,1> * __thiscall
SStarshipGallery::ConstructListGallery
          (SStarshipGallery *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  TSlateDecl<SStarshipGallery::SListGalleryWidget,RequiredArgs::T0RequiredArgs> *this_00;
  TSharedRef<SStarshipGallery::SListGalleryWidget,1> *pTVar1;
  T0RequiredArgs local_238 [8];
  FArguments *local_230;
  TSharedRef<SStarshipGallery::SListGalleryWidget,1> local_228;
  TSlateDecl<SStarshipGallery::SListGalleryWidget,RequiredArgs::T0RequiredArgs> local_218;
  FSlateBaseNamedArgs local_200;
  
  local_230 = SListGalleryWidget::FArguments::FArguments((FArguments *)&local_200);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(local_238);
  this_00 = MakeTDecl<SStarshipGallery::SListGalleryWidget,RequiredArgs::T0RequiredArgs>
                      (&local_218,"SListGalleryWidget",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\SStarshipGallery.cpp"
                       ,0x66c,local_238);
  pTVar1 = TSlateDecl<SStarshipGallery::SListGalleryWidget,RequiredArgs::T0RequiredArgs>::
           operator<<=(this_00,&local_228,local_230);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SStarshipGallery::SListGalleryWidget>
            (__return_storage_ptr__,pTVar1);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_228.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_218._Widget.SharedReferenceCount);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs(&local_200);
  return __return_storage_ptr__;
}

// ConstructTextGallery @ 142f91960

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

TSharedRef<SWidget,1> * __thiscall
SStarshipGallery::ConstructTextGallery
          (SStarshipGallery *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  FName *pFVar1;
  FSlotArguments *pFVar2;
  FSlotArguments *pFVar3;
  FText *pFVar4;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> *pTVar5;
  TSharedRef<STextBlock,1> *pTVar6;
  FSlateFontInfo *pFVar7;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> *pTVar8;
  TSharedRef<SVerticalBox,1> *pTVar9;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> *this_00;
  TSharedRef<SHorizontalBox,1> *pTVar10;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> *this_01;
  TSharedRef<SBorder,1> *pTVar11;
  T0RequiredArgs local_7078;
  T0RequiredArgs local_7077;
  T0RequiredArgs local_7076;
  T0RequiredArgs local_7075;
  T0RequiredArgs local_7074;
  T0RequiredArgs local_7073;
  T0RequiredArgs local_7072;
  T0RequiredArgs local_7071;
  T0RequiredArgs local_7070;
  T0RequiredArgs local_706f;
  T0RequiredArgs local_706e;
  T0RequiredArgs local_706d;
  T0RequiredArgs local_706c;
  T0RequiredArgs local_706b;
  T0RequiredArgs local_706a;
  T0RequiredArgs local_7069;
  T0RequiredArgs local_7068;
  T0RequiredArgs local_7067 [7];
  ISlateStyle *local_7060;
  ISlateStyle *local_7058;
  ISlateStyle *local_7050;
  ISlateStyle *local_7048;
  FSlateColor local_7040;
  FName local_7028;
  FSlateColor *local_7020;
  FName local_7018;
  code *local_7010;
  FArguments *local_7008;
  undefined1 *local_7000;
  undefined1 *local_6ff8;
  TAttribute<FSlateColor> *local_6ff0;
  TAttribute<FSlateColor> *local_6fe8;
  FArguments *local_6fe0;
  TAttribute<FText> *local_6fd8;
  TAttribute<FText> *local_6fd0;
  FArguments *local_6fc8;
  FArguments *local_6fc0;
  FSlotArguments *local_6fb8;
  FSlotArguments *local_6fb0;
  FArguments *local_6fa8;
  undefined1 *local_6fa0;
  TAttribute<FText> *local_6f98;
  TAttribute<FText> *local_6f90;
  FArguments *local_6f88;
  FArguments *local_6f80;
  FSlotArguments *local_6f78;
  FSlotArguments *local_6f70;
  FArguments *local_6f68;
  undefined1 *local_6f60;
  TAttribute<FSlateColor> *local_6f58;
  TAttribute<FSlateColor> *local_6f50;
  FArguments *local_6f48;
  TAttribute<FText> *local_6f40;
  TAttribute<FText> *local_6f38;
  FArguments *local_6f30;
  FArguments *local_6f28;
  FSlotArguments *local_6f20;
  FSlotArguments *local_6f18;
  FArguments *local_6f10;
  undefined1 *local_6f08;
  FName *local_6f00;
  FName local_6ef8;
  code *local_6ef0;
  TAttribute<FSlateFontInfo> *local_6ee8;
  TAttribute<FSlateFontInfo> *local_6ee0;
  FArguments *local_6ed8;
  TAttribute<FText> *local_6ed0;
  TAttribute<FText> *local_6ec8;
  FArguments *local_6ec0;
  FArguments *local_6eb8;
  FSlotArguments *local_6eb0;
  FSlotArguments *local_6ea8;
  FArguments *local_6ea0;
  FArguments *local_6e98;
  FSlotArguments *local_6e90;
  FSlotArguments *local_6e88;
  FArguments *local_6e80;
  undefined1 *local_6e78;
  undefined1 *local_6e70;
  TAttribute<FSlateColor> *local_6e68;
  TAttribute<FSlateColor> *local_6e60;
  FArguments *local_6e58;
  TAttribute<FText> *local_6e50;
  TAttribute<FText> *local_6e48;
  FArguments *local_6e40;
  FArguments *local_6e38;
  FSlotArguments *local_6e30;
  FSlotArguments *local_6e28;
  FArguments *local_6e20;
  undefined1 *local_6e18;
  FName *local_6e10;
  FName local_6e08;
  code *local_6e00;
  TAttribute<FSlateFontInfo> *local_6df8;
  TAttribute<FSlateFontInfo> *local_6df0;
  FArguments *local_6de8;
  TAttribute<FText> *local_6de0;
  TAttribute<FText> *local_6dd8;
  FArguments *local_6dd0;
  FArguments *local_6dc8;
  FSlotArguments *local_6dc0;
  FSlotArguments *local_6db8;
  FArguments *local_6db0;
  undefined1 *local_6da8;
  TAttribute<FSlateColor> *local_6da0;
  TAttribute<FSlateColor> *local_6d98;
  FArguments *local_6d90;
  TAttribute<FText> *local_6d88;
  TAttribute<FText> *local_6d80;
  FArguments *local_6d78;
  FArguments *local_6d70;
  FSlotArguments *local_6d68;
  FSlotArguments *local_6d60;
  FArguments *local_6d58;
  undefined1 *local_6d50;
  FName *local_6d48;
  FName local_6d40;
  code *local_6d38;
  TAttribute<FSlateFontInfo> *local_6d30;
  TAttribute<FSlateFontInfo> *local_6d28;
  FArguments *local_6d20;
  TAttribute<FText> *local_6d18;
  TAttribute<FText> *local_6d10;
  FArguments *local_6d08;
  FArguments *local_6d00;
  FSlotArguments *local_6cf8;
  FSlotArguments *local_6cf0;
  FArguments *local_6ce8;
  FArguments *local_6ce0;
  FSlotArguments *local_6cd8;
  FSlotArguments *local_6cd0;
  FArguments *local_6cc8;
  undefined1 *local_6cc0;
  undefined1 *local_6cb8;
  TAttribute<FSlateColor> *local_6cb0;
  TAttribute<FSlateColor> *local_6ca8;
  FArguments *local_6ca0;
  TAttribute<FText> *local_6c98;
  TAttribute<FText> *local_6c90;
  FArguments *local_6c88;
  FArguments *local_6c80;
  FSlotArguments *local_6c78;
  FSlotArguments *local_6c70;
  FArguments *local_6c68;
  undefined1 *local_6c60;
  TAttribute<FText> *local_6c58;
  TAttribute<FText> *local_6c50;
  FArguments *local_6c48;
  FArguments *local_6c40;
  FSlotArguments *local_6c38;
  FSlotArguments *local_6c30;
  FArguments *local_6c28;
  undefined1 *local_6c20;
  TAttribute<FSlateColor> *local_6c18;
  TAttribute<FSlateColor> *local_6c10;
  FArguments *local_6c08;
  TAttribute<FText> *local_6c00;
  TAttribute<FText> *local_6bf8;
  FArguments *local_6bf0;
  FArguments *local_6be8;
  FSlotArguments *local_6be0;
  FSlotArguments *local_6bd8;
  FArguments *local_6bd0;
  undefined1 *local_6bc8;
  TAttribute<FText> *local_6bc0;
  TAttribute<FText> *local_6bb8;
  FArguments *local_6bb0;
  FArguments *local_6ba8;
  FSlotArguments *local_6ba0;
  FSlotArguments *local_6b98;
  FArguments *local_6b90;
  undefined1 *local_6b88;
  TAttribute<FText> *local_6b80;
  TAttribute<FText> *local_6b78;
  FArguments *local_6b70;
  FArguments *local_6b68;
  FSlotArguments *local_6b60;
  FSlotArguments *local_6b58;
  FArguments *local_6b50;
  FArguments *local_6b48;
  FSlotArguments *local_6b40;
  FSlotArguments *local_6b38;
  FArguments *local_6b30;
  FArguments *local_6b28;
  FArguments *local_6b20;
  FArguments *local_6b18;
  FName *local_6b10;
  TSharedRef<SWidget,1> local_6b08;
  TSharedRef<SWidget,1> local_6af8;
  TSharedRef<SWidget,1> local_6ae8;
  TSharedRef<SWidget,1> local_6ad8;
  TSharedRef<SWidget,1> local_6ac8;
  TSharedRef<SWidget,1> local_6ab8;
  TSharedRef<SWidget,1> local_6aa8;
  TSharedRef<SWidget,1> local_6a98;
  TSharedRef<SWidget,1> local_6a88;
  TSharedRef<SWidget,1> local_6a78;
  TSharedRef<SWidget,1> local_6a68;
  TSharedRef<SWidget,1> local_6a58;
  TSharedRef<SWidget,1> local_6a48;
  TSharedRef<SWidget,1> local_6a38;
  TSharedRef<SWidget,1> local_6a28;
  TSharedRef<SWidget,1> local_6a18;
  TSharedRef<SWidget,1> local_6a08;
  FName local_69f8;
  FName local_69f0;
  FName local_69e8;
  TSharedRef<SBorder,1> local_69e0;
  TSharedRef<SHorizontalBox,1> local_69d0;
  TSharedRef<SVerticalBox,1> local_69c0;
  TSharedRef<STextBlock,1> local_69b0;
  FText local_69a0;
  TSharedRef<STextBlock,1> local_6990;
  FText local_6980;
  TSharedRef<STextBlock,1> local_6970;
  FText local_6960;
  TSharedRef<STextBlock,1> local_6950;
  FText local_6940;
  TSharedRef<STextBlock,1> local_6930;
  FText local_6920;
  TSharedRef<SVerticalBox,1> local_6910;
  TSharedRef<STextBlock,1> local_6900;
  FText local_68f0;
  TSharedRef<STextBlock,1> local_68e0;
  FText local_68d0;
  TSharedRef<STextBlock,1> local_68c0;
  FText local_68b0;
  TSharedRef<STextBlock,1> local_68a0;
  FText local_6890;
  TSharedRef<SVerticalBox,1> local_6880;
  TSharedRef<STextBlock,1> local_6870;
  FText local_6860;
  TSharedRef<STextBlock,1> local_6850;
  FText local_6840;
  TSharedRef<STextBlock,1> local_6830;
  FText local_6820;
  TSharedRef<STextBlock,1> local_6810;
  FText local_6800;
  FName local_67f0;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_67e8;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_67d0;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_67b8;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_67a0;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_6788;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_6770;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_6758;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_6740;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_6728;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_6710;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_66f8;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_66e0;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_66c8;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_66b0;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_6698;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_6680;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_6668;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_6650;
  TAttribute<FSlateColor> local_6638;
  TAttribute<FText> local_6608;
  TAttribute<FText> local_65d8;
  TAttribute<FSlateColor> local_65a8;
  TAttribute<FText> local_6578;
  TAttribute<FText> local_6548;
  TAttribute<FSlateColor> local_6518;
  TAttribute<FText> local_64e8;
  TAttribute<FText> local_64b8;
  TAttribute<FSlateColor> local_6488;
  TAttribute<FText> local_6458;
  TAttribute<FText> local_6428;
  TAttribute<FSlateColor> local_63f8;
  TAttribute<FText> local_63c8;
  TAttribute<FText> local_6398;
  TAttribute<FSlateColor> local_6368;
  TAttribute<FText> local_6338;
  TAttribute<FText> local_6308;
  TAttribute<FText> local_62d8;
  FSlateFontInfo local_62a8;
  FSlateFontInfo local_6248;
  FSlateFontInfo local_61e8;
  FSlotArguments local_6188;
  FSlotArguments local_60a0;
  FSlotArguments local_5fb8;
  FSlotArguments local_5ed0;
  FSlotArguments local_5de8;
  FSlotArguments local_5d00;
  FSlotArguments local_5c18;
  FSlotArguments local_5b30;
  FSlotArguments local_5a48;
  FSlotArguments local_5960;
  FSlotArguments local_5878;
  FSlotArguments local_5790;
  FSlotArguments local_56a8;
  FSlotArguments local_55c0;
  FSlotArguments local_54d8;
  FSlotArguments local_53f0;
  TAttribute<FSlateFontInfo> local_5308;
  TAttribute<FSlateFontInfo> local_5288;
  TAttribute<FSlateFontInfo> local_5208;
  FArguments local_5188;
  FArguments local_4f80;
  FArguments local_4d78;
  FArguments local_4b70;
  FArguments local_4968;
  FArguments local_4588;
  FArguments local_4030;
  FArguments local_3ad8;
  FArguments local_3580;
  FArguments local_3028;
  FArguments local_2ad0;
  FArguments local_2578;
  FArguments local_2020;
  FArguments local_1ac8;
  FArguments local_1570;
  FArguments local_1018;
  FArguments local_ac0;
  FArguments local_568;
  undefined8 uStack_8;
  
  uStack_8 = 0x142f91974;
  local_7060 = FAppStyle::Get();
  local_7010 = *(code **)((longlong)*local_7060 + 0x40);
  local_7020 = FStyleDefaults::GetSlateColor();
  local_6b10 = &local_67f0;
  pFVar1 = ::FName::FName(local_6b10,"Colors.White50");
  local_7028 = *pFVar1;
  local_7018 = local_7028;
  (*local_7010)(local_7060,&local_7040,local_7028,0,local_7020,0);
  local_7008 = SBorder::FArguments::FArguments(&local_4968);
  local_6b20 = SBorder::FArguments::Padding(local_7008,__real_42400000);
  local_6e80 = SHorizontalBox::FArguments::FArguments(&local_4b70);
  pFVar2 = SHorizontalBox::Slot(&local_5fb8);
  pFVar2 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar2);
  local_7000 = &pFVar2->field_0x18;
  local_6e90 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                         ((FSlotArgumentsMixin *)local_7000,__real_42800000,0.0);
  local_6fa8 = SVerticalBox::FArguments::FArguments(&local_4d78);
  pFVar3 = SVerticalBox::Slot(&local_60a0);
  local_6ff8 = &pFVar3->field_0x18;
  pFVar3 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                     ((FSlotArgumentsMixin *)local_6ff8,0.0,__real_42800000,0.0,__real_40800000);
  local_6fb8 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar3);
  local_6fe0 = STextBlock::FArguments::FArguments(&local_568);
  local_6ff0 = &local_6638;
  local_6fe8 = TAttribute<FSlateColor>::TAttribute<FSlateColor><FSlateColor>(local_6ff0,&local_7040)
  ;
  local_6fc8 = STextBlock::FArguments::ColorAndOpacity(local_6fe0,local_6fe8);
  local_6fd8 = &local_6608;
  pFVar4 = FText::AsLocalizable_Advanced_LocText
                     (&local_6800,L"StarshipGallery",L"NormalBodyTextDesc",
                      L"ROBOTO 10 SLATE    [ ROBOTO 13 FIGMA ]");
  local_6fd0 = TAttribute<FText>::TAttribute<FText>(local_6fd8,pFVar4);
  local_6fc0 = STextBlock::FArguments::Text(local_6fc8,local_6fd0);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_7078);
  pTVar5 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                     (&local_6650,"STextBlock",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\SStarshipGallery.cpp"
                      ,0x219,&local_7078);
  pTVar6 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar5,&local_6810,local_6fc0);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_6a08,pTVar6);
  local_6fb0 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_6fb8,&local_6a08);
  local_6f68 = SVerticalBox::FArguments::operator+(local_6fa8,local_6fb0);
  pFVar3 = SVerticalBox::Slot(&local_53f0);
  local_6fa0 = &pFVar3->field_0x18;
  pFVar3 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                     ((FSlotArgumentsMixin *)local_6fa0,0.0,__real_40800000);
  local_6f78 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar3);
  local_6f88 = STextBlock::FArguments::FArguments(&local_ac0);
  local_6f98 = &local_65d8;
  pFVar4 = FText::AsLocalizable_Advanced_LocText
                     (&local_6820,L"StarshipGallery",L"NormalBodyText",
                      L"Normal Text\n\nThe quick brown fox jumps over the lazy dog.\n\nNORMAL TEXT CAPITAL"
                     );
  local_6f90 = TAttribute<FText>::TAttribute<FText>(local_6f98,pFVar4);
  local_6f80 = STextBlock::FArguments::Text(local_6f88,local_6f90);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_7077);
  pTVar5 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                     (&local_6668,"STextBlock",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\SStarshipGallery.cpp"
                      ,0x21b,&local_7077);
  pTVar6 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar5,&local_6830,local_6f80);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_6ae8,pTVar6);
  local_6f70 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_6f78,&local_6ae8);
  local_6f10 = SVerticalBox::FArguments::operator+(local_6f68,local_6f70);
  pFVar3 = SVerticalBox::Slot(&local_54d8);
  local_6f60 = &pFVar3->field_0x18;
  pFVar3 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                     ((FSlotArgumentsMixin *)local_6f60,0.0,__real_42800000,0.0,__real_40800000);
  local_6f20 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar3);
  local_6f48 = STextBlock::FArguments::FArguments(&local_1018);
  local_6f58 = &local_65a8;
  local_6f50 = TAttribute<FSlateColor>::TAttribute<FSlateColor><FSlateColor>(local_6f58,&local_7040)
  ;
  local_6f30 = STextBlock::FArguments::ColorAndOpacity(local_6f48,local_6f50);
  local_6f40 = &local_6578;
  pFVar4 = FText::AsLocalizable_Advanced_LocText
                     (&local_6840,L"StarshipGallery",L"SmallBodyTextDesc",
                      L"ROBOTO 8 SLATE   [ ROBOTO 11 FIGMA ]");
  local_6f38 = TAttribute<FText>::TAttribute<FText>(local_6f40,pFVar4);
  local_6f28 = STextBlock::FArguments::Text(local_6f30,local_6f38);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_7076);
  pTVar5 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                     (&local_6680,"STextBlock",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\SStarshipGallery.cpp"
                      ,0x220,&local_7076);
  pTVar6 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar5,&local_6850,local_6f28);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_6af8,pTVar6);
  local_6f18 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_6f20,&local_6af8);
  local_6ea0 = SVerticalBox::FArguments::operator+(local_6f10,local_6f18);
  pFVar3 = SVerticalBox::Slot(&local_5b30);
  local_6f08 = &pFVar3->field_0x18;
  pFVar3 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                     ((FSlotArgumentsMixin *)local_6f08,0.0,__real_40800000);
  local_6eb0 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar3);
  local_6ed8 = STextBlock::FArguments::FArguments(&local_1570);
  local_6ee8 = &local_5208;
  local_7058 = FAppStyle::Get();
  local_6ef0 = *(code **)((longlong)*local_7058 + 0x88);
  local_6f00 = &local_69e8;
  pFVar1 = ::FName::FName(local_6f00,"SmallFont");
  local_6ef8 = *pFVar1;
  pFVar7 = (FSlateFontInfo *)(*local_6ef0)(local_7058,&local_61e8,local_6ef8,0);
  local_6ee0 = TAttribute<FSlateFontInfo>::TAttribute<FSlateFontInfo>(local_6ee8,pFVar7);
  local_6ec0 = STextBlock::FArguments::Font(local_6ed8,local_6ee0);
  local_6ed0 = &local_6548;
  pFVar4 = FText::AsLocalizable_Advanced_LocText
                     (&local_6860,L"StarshipGallery",L"SmallBodyText",
                      L"Small Text\n\nThe quick brown fox jumps over the lazy dog.\n\nSMALL TEXT CAPITAL"
                     );
  local_6ec8 = TAttribute<FText>::TAttribute<FText>(local_6ed0,pFVar4);
  local_6eb8 = STextBlock::FArguments::Text(local_6ec0,local_6ec8);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_7075);
  pTVar5 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                     (&local_6698,"STextBlock",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\SStarshipGallery.cpp"
                      ,0x222,&local_7075);
  pTVar6 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar5,&local_6870,local_6eb8);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_6b08,pTVar6);
  local_6ea8 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_6eb0,&local_6b08);
  local_6e98 = SVerticalBox::FArguments::operator+(local_6ea0,local_6ea8);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_7074);
  pTVar8 = MakeTDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
                     (&local_66b0,"SVerticalBox",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\SStarshipGallery.cpp"
                      ,0x216,&local_7074);
  pTVar9 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar8,&local_6880,local_6e98);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SVerticalBox>(&local_6a18,pTVar9);
  local_6e88 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_6e90,&local_6a18);
  local_6cc8 = SHorizontalBox::FArguments::operator+(local_6e80,local_6e88);
  pFVar2 = SHorizontalBox::Slot(&local_55c0);
  pFVar2 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar2);
  local_6e78 = &pFVar2->field_0x18;
  local_6cd8 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                         ((FSlotArgumentsMixin *)local_6e78,__real_42800000,0.0);
  local_6e20 = SVerticalBox::FArguments::FArguments(&local_4f80);
  pFVar3 = SVerticalBox::Slot(&local_56a8);
  local_6e70 = &pFVar3->field_0x18;
  pFVar3 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                     ((FSlotArgumentsMixin *)local_6e70,0.0,__real_42800000,0.0,__real_40800000);
  local_6e30 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar3);
  local_6e58 = STextBlock::FArguments::FArguments(&local_1ac8);
  local_6e68 = &local_6518;
  local_6e60 = TAttribute<FSlateColor>::TAttribute<FSlateColor><FSlateColor>(local_6e68,&local_7040)
  ;
  local_6e40 = STextBlock::FArguments::ColorAndOpacity(local_6e58,local_6e60);
  local_6e50 = &local_64e8;
  pFVar4 = FText::AsLocalizable_Advanced_LocText
                     (&local_6890,L"StarshipGallery",L"NormalBoldTextDesc",
                      L"ROBOTO BOLD 10 SLATE   [ ROBOTO 13 FIGMA ]");
  local_6e48 = TAttribute<FText>::TAttribute<FText>(local_6e50,pFVar4);
  local_6e38 = STextBlock::FArguments::Text(local_6e40,local_6e48);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_7073);
  pTVar5 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                     (&local_66c8,"STextBlock",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\SStarshipGallery.cpp"
                      ,0x242,&local_7073);
  pTVar6 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar5,&local_68a0,local_6e38);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_6a28,pTVar6);
  local_6e28 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_6e30,&local_6a28);
  local_6db0 = SVerticalBox::FArguments::operator+(local_6e20,local_6e28);
  pFVar3 = SVerticalBox::Slot(&local_5790);
  local_6e18 = &pFVar3->field_0x18;
  pFVar3 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                     ((FSlotArgumentsMixin *)local_6e18,0.0,__real_40800000);
  local_6dc0 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar3);
  local_6de8 = STextBlock::FArguments::FArguments(&local_2020);
  local_6df8 = &local_5308;
  local_7050 = FAppStyle::Get();
  local_6e00 = *(code **)((longlong)*local_7050 + 0x88);
  local_6e10 = &local_69f8;
  pFVar1 = ::FName::FName(local_6e10,"NormalFontBold");
  local_6e08 = *pFVar1;
  pFVar7 = (FSlateFontInfo *)(*local_6e00)(local_7050,&local_6248,local_6e08,0);
  local_6df0 = TAttribute<FSlateFontInfo>::TAttribute<FSlateFontInfo>(local_6df8,pFVar7);
  local_6dd0 = STextBlock::FArguments::Font(local_6de8,local_6df0);
  local_6de0 = &local_64b8;
  pFVar4 = FText::AsLocalizable_Advanced_LocText
                     (&local_68b0,L"StarshipGallery",L"NormalBodyBoldText",
                      L"Normal Text Bold \n\nThe quick brown fox jumps over the lazy dog.\n\nNORMAL TEXT BOLD CAPITAL"
                     );
  local_6dd8 = TAttribute<FText>::TAttribute<FText>(local_6de0,pFVar4);
  local_6dc8 = STextBlock::FArguments::Text(local_6dd0,local_6dd8);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_7072);
  pTVar5 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                     (&local_66e0,"STextBlock",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\SStarshipGallery.cpp"
                      ,0x244,&local_7072);
  pTVar6 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar5,&local_68c0,local_6dc8);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_6a38,pTVar6);
  local_6db8 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_6dc0,&local_6a38);
  local_6d58 = SVerticalBox::FArguments::operator+(local_6db0,local_6db8);
  pFVar3 = SVerticalBox::Slot(&local_5878);
  local_6da8 = &pFVar3->field_0x18;
  pFVar3 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                     ((FSlotArgumentsMixin *)local_6da8,0.0,__real_42800000,0.0,__real_40800000);
  local_6d68 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar3);
  local_6d90 = STextBlock::FArguments::FArguments(&local_2578);
  local_6da0 = &local_6488;
  local_6d98 = TAttribute<FSlateColor>::TAttribute<FSlateColor><FSlateColor>(local_6da0,&local_7040)
  ;
  local_6d78 = STextBlock::FArguments::ColorAndOpacity(local_6d90,local_6d98);
  local_6d88 = &local_6458;
  pFVar4 = FText::AsLocalizable_Advanced_LocText
                     (&local_68d0,L"StarshipGallery",L"SmallBoldTextDesc",
                      L"ROBOTO BOLD 8 SLATE   [ ROBOTO 11 FIGMA ]");
  local_6d80 = TAttribute<FText>::TAttribute<FText>(local_6d88,pFVar4);
  local_6d70 = STextBlock::FArguments::Text(local_6d78,local_6d80);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_7071);
  pTVar5 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                     (&local_66f8,"STextBlock",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\SStarshipGallery.cpp"
                      ,0x24a,&local_7071);
  pTVar6 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar5,&local_68e0,local_6d70);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_6a48,pTVar6);
  local_6d60 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_6d68,&local_6a48);
  local_6ce8 = SVerticalBox::FArguments::operator+(local_6d58,local_6d60);
  pFVar3 = SVerticalBox::Slot(&local_5960);
  local_6d50 = &pFVar3->field_0x18;
  pFVar3 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                     ((FSlotArgumentsMixin *)local_6d50,0.0,__real_40800000);
  local_6cf8 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar3);
  local_6d20 = STextBlock::FArguments::FArguments(&local_2ad0);
  local_6d30 = &local_5288;
  local_7048 = FAppStyle::Get();
  local_6d38 = *(code **)((longlong)*local_7048 + 0x88);
  local_6d48 = &local_69f0;
  pFVar1 = ::FName::FName(local_6d48,"SmallFontBold");
  local_6d40 = *pFVar1;
  pFVar7 = (FSlateFontInfo *)(*local_6d38)(local_7048,&local_62a8,local_6d40,0);
  local_6d28 = TAttribute<FSlateFontInfo>::TAttribute<FSlateFontInfo>(local_6d30,pFVar7);
  local_6d08 = STextBlock::FArguments::Font(local_6d20,local_6d28);
  local_6d18 = &local_6428;
  pFVar4 = FText::AsLocalizable_Advanced_LocText
                     (&local_68f0,L"StarshipGallery",L"SmallBodyBoldText",
                      L"Small Text Bold \n\nThe quick brown fox jumps over the lazy dog.\n\nSMALL TEXT BOLD CAPITAL"
                     );
  local_6d10 = TAttribute<FText>::TAttribute<FText>(local_6d18,pFVar4);
  local_6d00 = STextBlock::FArguments::Text(local_6d08,local_6d10);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_7070);
  pTVar5 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                     (&local_6710,"STextBlock",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\SStarshipGallery.cpp"
                      ,0x24c,&local_7070);
  pTVar6 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar5,&local_6900,local_6d00);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_6a58,pTVar6);
  local_6cf0 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_6cf8,&local_6a58);
  local_6ce0 = SVerticalBox::FArguments::operator+(local_6ce8,local_6cf0);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_706f);
  pTVar8 = MakeTDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
                     (&local_6728,"SVerticalBox",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\SStarshipGallery.cpp"
                      ,0x23f,&local_706f);
  pTVar9 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar8,&local_6910,local_6ce0);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SVerticalBox>(&local_6a68,pTVar9);
  local_6cd0 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_6cd8,&local_6a68);
  local_6b30 = SHorizontalBox::FArguments::operator+(local_6cc8,local_6cd0);
  pFVar2 = SHorizontalBox::Slot(&local_5a48);
  pFVar2 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar2);
  local_6cc0 = &pFVar2->field_0x18;
  local_6b40 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                         ((FSlotArgumentsMixin *)local_6cc0,__real_42800000,0.0);
  local_6c68 = SVerticalBox::FArguments::FArguments(&local_5188);
  pFVar3 = SVerticalBox::Slot(&local_6188);
  local_6cb8 = &pFVar3->field_0x18;
  pFVar3 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                     ((FSlotArgumentsMixin *)local_6cb8,0.0,__real_42800000,0.0,__real_40800000);
  local_6c78 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar3);
  local_6ca0 = STextBlock::FArguments::FArguments(&local_3028);
  local_6cb0 = &local_63f8;
  local_6ca8 = TAttribute<FSlateColor>::TAttribute<FSlateColor><FSlateColor>(local_6cb0,&local_7040)
  ;
  local_6c88 = STextBlock::FArguments::ColorAndOpacity(local_6ca0,local_6ca8);
  local_6c98 = &local_63c8;
  pFVar4 = FText::AsLocalizable_Advanced_LocText
                     (&local_6920,L"StarshipGallery",L"SubMathTextDesc",L"SUB-TYPEFACES - MATH");
  local_6c90 = TAttribute<FText>::TAttribute<FText>(local_6c98,pFVar4);
  local_6c80 = STextBlock::FArguments::Text(local_6c88,local_6c90);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_706e);
  pTVar5 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                     (&local_6740,"STextBlock",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\SStarshipGallery.cpp"
                      ,600,&local_706e);
  pTVar6 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar5,&local_6930,local_6c80);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_6a78,pTVar6);
  local_6c70 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_6c78,&local_6a78);
  local_6c28 = SVerticalBox::FArguments::operator+(local_6c68,local_6c70);
  pFVar3 = SVerticalBox::Slot(&local_5c18);
  local_6c60 = &pFVar3->field_0x18;
  pFVar3 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                     ((FSlotArgumentsMixin *)local_6c60,0.0,__real_40800000);
  local_6c38 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar3);
  local_6c48 = STextBlock::FArguments::FArguments(&local_3580);
  local_6c58 = &local_6398;
  pFVar4 = FText::AsLocalizable_Advanced_LocText
                     (&local_6940,L"StarshipGallery",L"MathematicalTextSpecimen",
                      L"Mathematical Alphanumeric Symbols, U+1D400 - U+1D7FF\n𝐀𝐁𝐂 𝐴𝐵𝐶 𝓐𝓑𝓒"
                     );
  local_6c50 = TAttribute<FText>::TAttribute<FText>(local_6c58,pFVar4);
  local_6c40 = STextBlock::FArguments::Text(local_6c48,local_6c50);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_706d);
  pTVar5 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                     (&local_6758,"STextBlock",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\SStarshipGallery.cpp"
                      ,0x25b,&local_706d);
  pTVar6 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar5,&local_6950,local_6c40);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_6a88,pTVar6);
  local_6c30 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_6c38,&local_6a88);
  local_6bd0 = SVerticalBox::FArguments::operator+(local_6c28,local_6c30);
  pFVar3 = SVerticalBox::Slot(&local_5d00);
  local_6c20 = &pFVar3->field_0x18;
  pFVar3 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                     ((FSlotArgumentsMixin *)local_6c20,0.0,__real_42800000,0.0,__real_40800000);
  local_6be0 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar3);
  local_6c08 = STextBlock::FArguments::FArguments(&local_3ad8);
  local_6c18 = &local_6368;
  local_6c10 = TAttribute<FSlateColor>::TAttribute<FSlateColor><FSlateColor>(local_6c18,&local_7040)
  ;
  local_6bf0 = STextBlock::FArguments::ColorAndOpacity(local_6c08,local_6c10);
  local_6c00 = &local_6338;
  pFVar4 = FText::AsLocalizable_Advanced_LocText
                     (&local_6960,L"StarshipGallery",L"SubEmojiTextDesc",L"SUB-TYPEFACES - EMOJI");
  local_6bf8 = TAttribute<FText>::TAttribute<FText>(local_6c00,pFVar4);
  local_6be8 = STextBlock::FArguments::Text(local_6bf0,local_6bf8);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_706c);
  pTVar5 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                     (&local_6770,"STextBlock",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\SStarshipGallery.cpp"
                      ,0x25f,&local_706c);
  pTVar6 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar5,&local_6970,local_6be8);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_6a98,pTVar6);
  local_6bd8 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_6be0,&local_6a98);
  local_6b90 = SVerticalBox::FArguments::operator+(local_6bd0,local_6bd8);
  pFVar3 = SVerticalBox::Slot(&local_5de8);
  local_6bc8 = &pFVar3->field_0x18;
  pFVar3 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                     ((FSlotArgumentsMixin *)local_6bc8,0.0,__real_40800000);
  local_6ba0 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar3);
  local_6bb0 = STextBlock::FArguments::FArguments(&local_4030);
  local_6bc0 = &local_6308;
  pFVar4 = FText::AsLocalizable_Advanced_LocText
                     (&local_6980,L"StarshipGallery",L"EmoticonsTextSpecimen",
                      L"Emoticons, U+1F600 - U+1F64F\n😎🙃🙈");
  local_6bb8 = TAttribute<FText>::TAttribute<FText>(local_6bc0,pFVar4);
  local_6ba8 = STextBlock::FArguments::Text(local_6bb0,local_6bb8);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_706b);
  pTVar5 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                     (&local_6788,"STextBlock",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\SStarshipGallery.cpp"
                      ,0x262,&local_706b);
  pTVar6 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar5,&local_6990,local_6ba8);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_6aa8,pTVar6);
  local_6b98 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_6ba0,&local_6aa8);
  local_6b50 = SVerticalBox::FArguments::operator+(local_6b90,local_6b98);
  pFVar3 = SVerticalBox::Slot(&local_5ed0);
  local_6b88 = &pFVar3->field_0x18;
  pFVar3 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                     ((FSlotArgumentsMixin *)local_6b88,0.0,__real_40800000);
  local_6b60 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar3);
  local_6b70 = STextBlock::FArguments::FArguments(&local_4588);
  local_6b80 = &local_62d8;
  pFVar4 = FText::AsLocalizable_Advanced_LocText
                     (&local_69a0,L"StarshipGallery",L"SupplementalSymbolsPictographsTextSpecimen",
                      L"Supplemental Symbols and Pictographs, U+1F900 - U+1F9FF\n🤔🤖🧲");
  local_6b78 = TAttribute<FText>::TAttribute<FText>(local_6b80,pFVar4);
  local_6b68 = STextBlock::FArguments::Text(local_6b70,local_6b78);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_706a);
  pTVar5 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                     (&local_67a0,"STextBlock",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\SStarshipGallery.cpp"
                      ,0x267,&local_706a);
  pTVar6 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar5,&local_69b0,local_6b68);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_6ab8,pTVar6);
  local_6b58 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_6b60,&local_6ab8);
  local_6b48 = SVerticalBox::FArguments::operator+(local_6b50,local_6b58);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_7069);
  pTVar8 = MakeTDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
                     (&local_67b8,"SVerticalBox",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\SStarshipGallery.cpp"
                      ,0x256,&local_7069);
  pTVar9 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar8,&local_69c0,local_6b48);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SVerticalBox>(&local_6ac8,pTVar9);
  local_6b38 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_6b40,&local_6ac8);
  local_6b28 = SHorizontalBox::FArguments::operator+(local_6b30,local_6b38);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_7068);
  this_00 = MakeTDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
                      (&local_67d0,"SHorizontalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\SStarshipGallery.cpp"
                       ,0x20f,&local_7068);
  pTVar10 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_00,&local_69d0,local_6b28);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SHorizontalBox>(&local_6ad8,pTVar10);
  local_6b18 = SBorder::FArguments::operator[](local_6b20,&local_6ad8);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(local_7067);
  this_01 = MakeTDecl<SBorder,RequiredArgs::T0RequiredArgs>
                      (&local_67e8,"SBorder",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\SStarshipGallery.cpp"
                       ,0x20c,local_7067);
  pTVar11 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_01,&local_69e0,local_6b18);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SBorder>(__return_storage_ptr__,pTVar11);
  TSharedRef<SBorder,1>::~TSharedRef<SBorder,1>(&local_69e0);
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>(&local_67e8);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_6ad8);
  TSharedRef<SHorizontalBox,1>::~TSharedRef<SHorizontalBox,1>(&local_69d0);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>(&local_67d0);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_6ac8);
  TSharedRef<SVerticalBox,1>::~TSharedRef<SVerticalBox,1>(&local_69c0);
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>(&local_67b8);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_6ab8);
  TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_69b0);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_67a0);
  FText::~FText(&local_69a0);
  STextBlock::FArguments::~FArguments(&local_4588);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_5ed0);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_6aa8);
  TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_6990);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_6788);
  FText::~FText(&local_6980);
  STextBlock::FArguments::~FArguments(&local_4030);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_5de8);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_6a98);
  TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_6970);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_6770);
  FText::~FText(&local_6960);
  STextBlock::FArguments::~FArguments(&local_3ad8);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_5d00);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_6a88);
  TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_6950);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_6758);
  FText::~FText(&local_6940);
  STextBlock::FArguments::~FArguments(&local_3580);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_5c18);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_6a78);
  TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_6930);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_6740);
  FText::~FText(&local_6920);
  STextBlock::FArguments::~FArguments(&local_3028);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_6188);
  SVerticalBox::FArguments::~FArguments(&local_5188);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_5a48);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_6a68);
  TSharedRef<SVerticalBox,1>::~TSharedRef<SVerticalBox,1>(&local_6910);
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>(&local_6728);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_6a58);
  TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_6900);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_6710);
  FText::~FText(&local_68f0);
  FSlateFontInfo::~FSlateFontInfo(&local_62a8);
  STextBlock::FArguments::~FArguments(&local_2ad0);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_5960);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_6a48);
  TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_68e0);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_66f8);
  FText::~FText(&local_68d0);
  STextBlock::FArguments::~FArguments(&local_2578);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_5878);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_6a38);
  TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_68c0);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_66e0);
  FText::~FText(&local_68b0);
  FSlateFontInfo::~FSlateFontInfo(&local_6248);
  STextBlock::FArguments::~FArguments(&local_2020);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_5790);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_6a28);
  TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_68a0);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_66c8);
  FText::~FText(&local_6890);
  STextBlock::FArguments::~FArguments(&local_1ac8);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_56a8);
  SVerticalBox::FArguments::~FArguments(&local_4f80);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_55c0);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_6a18);
  TSharedRef<SVerticalBox,1>::~TSharedRef<SVerticalBox,1>(&local_6880);
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>(&local_66b0);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_6b08);
  TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_6870);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_6698);
  FText::~FText(&local_6860);
  FSlateFontInfo::~FSlateFontInfo(&local_61e8);
  STextBlock::FArguments::~FArguments(&local_1570);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_5b30);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_6af8);
  TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_6850);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_6680);
  FText::~FText(&local_6840);
  STextBlock::FArguments::~FArguments(&local_1018);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_54d8);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_6ae8);
  TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_6830);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_6668);
  FText::~FText(&local_6820);
  STextBlock::FArguments::~FArguments(&local_ac0);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_53f0);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_6a08);
  TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_6810);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_6650);
  FText::~FText(&local_6800);
  STextBlock::FArguments::~FArguments(&local_568);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_60a0);
  SVerticalBox::FArguments::~FArguments(&local_4d78);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_5fb8);
  SHorizontalBox::FArguments::~FArguments(&local_4b70);
  SBorder::FArguments::~FArguments(&local_4968);
  return __return_storage_ptr__;
}

// IsIconVisible @ 142fe2c00

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall SStarshipGallery::IsIconVisible(SStarshipGallery *this,FString *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  FText *pFVar4;
  bool bVar5;
  undefined1 local_7c [4];
  undefined4 local_78;
  uint local_74;
  int local_70;
  FString *local_68;
  FScriptContainerElement *local_60;
  SSearchBox *local_58;
  SSearchBox *local_50;
  FScriptContainerElement *local_48;
  FScriptContainerElement *local_40;
  FScriptContainerElement *local_38;
  FScriptContainerElement *local_30;
  FText local_28;
  FText local_18;
  
  bVar5 = false;
  if ((this->IconSearchBox).Object != (SSearchBox *)0x0) {
    local_58 = TSharedPtr<SSearchBox,1>::operator->(&this->IconSearchBox);
    bVar5 = true;
    pFVar4 = SEditableTextBox::GetText((SEditableTextBox *)local_58,&local_28);
    bVar2 = FText::IsEmpty(pFVar4);
    if (!bVar2) {
      local_78 = 0;
      goto LAB_142fe2c9f;
    }
  }
  local_78 = 1;
LAB_142fe2c9f:
  cVar1 = (char)local_78;
  if (bVar5) {
    FText::~FText(&local_28);
  }
  if (cVar1 == '\0') {
    local_50 = TSharedPtr<SSearchBox,1>::operator->(&this->IconSearchBox);
    pFVar4 = SEditableTextBox::GetText((SEditableTextBox *)local_50,&local_18);
    local_68 = FText::ToString(pFVar4);
    local_70 = (local_68->Data).ArrayNum;
    if (local_70 == 0) {
      local_60 = (FScriptContainerElement *)
                 `FString::operator*'::__l2::<lambda_1>::operator()(local_7c);
    }
    else {
      local_60 = (local_68->Data).AllocatorInstance.Data;
      local_48 = local_60;
      local_40 = local_60;
      local_38 = local_60;
    }
    local_30 = local_60;
    iVar3 = ::FString::Find(param_1,(wchar_t *)local_60,IgnoreCase,FromStart,-1);
    bVar5 = iVar3 != -1;
    local_74 = (uint)bVar5;
    FText::~FText(&local_18);
  }
  else {
    bVar5 = true;
  }
  return bVar5;
}

// MakeMenuEntries @ 142fea5d0

/* WARNING: Removing unreachable block (ram,0x000142febb4a) */
/* WARNING: Removing unreachable block (ram,0x000142feb8da) */
/* WARNING: Removing unreachable block (ram,0x000142feb507) */
/* WARNING: Removing unreachable block (ram,0x000142feb288) */
/* WARNING: Removing unreachable block (ram,0x000142feaec4) */
/* WARNING: Removing unreachable block (ram,0x000142feac45) */
/* WARNING: Removing unreachable block (ram,0x000142fea890) */
/* WARNING: Removing unreachable block (ram,0x000142fea635) */
/* WARNING: Removing unreachable block (ram,0x000142fea758) */
/* WARNING: Removing unreachable block (ram,0x000142fea973) */
/* WARNING: Removing unreachable block (ram,0x000142fead7a) */
/* WARNING: Removing unreachable block (ram,0x000142feafb6) */
/* WARNING: Removing unreachable block (ram,0x000142feb3bd) */
/* WARNING: Removing unreachable block (ram,0x000142feb5fc) */
/* WARNING: Removing unreachable block (ram,0x000142feba00) */
/* WARNING: Removing unreachable block (ram,0x000142febc3f) */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall SStarshipGallery::MakeMenuEntries(SStarshipGallery *this,FMenuBuilder *param_1)

{
  uint uVar1;
  FName *pFVar2;
  FText *pFVar3;
  FNameEntryId local_b50 [2];
  FNameEntryId local_b48 [2];
  FNameEntryId local_b40 [3];
  FNameEntryId local_b34 [2];
  FNameEntryId local_b2c [2];
  FNameEntryId local_b24 [2];
  FNameEntryId local_b1c [2];
  FNameEntryId local_b14 [2];
  FNameEntryId local_b0c [2];
  FNameEntryId local_b04 [2];
  FNameEntryId local_afc [2];
  FNameEntryId local_af4 [2];
  FNameEntryId local_aec [2];
  FNameEntryId local_ae4 [2];
  FNameEntryId local_adc [2];
  FNameEntryId local_ad4;
  FNameEntryId *local_ad0;
  FNameEntryId *local_ac8;
  FName local_ac0;
  FName local_ab8;
  FName local_ab0;
  FName local_aa8;
  FName local_aa0;
  FName local_a98;
  FNameEntryId *local_a90;
  FNameEntryId *local_a88;
  FName local_a80;
  FName local_a78;
  FName local_a70;
  FName local_a68;
  FName local_a60;
  FName local_a58;
  FNameEntryId *local_a50;
  FNameEntryId *local_a48;
  FName local_a40;
  FName local_a38;
  FNameEntryId *local_a30;
  FNameEntryId *local_a28;
  FName local_a20;
  FName local_a18;
  FName *local_a10;
  FName local_a08;
  FName local_a00;
  FName local_9f8;
  FName local_9f0;
  FName local_9e8;
  FName local_9e0;
  FName local_9d8;
  FName local_9d0;
  TAttribute<EVisibility> *local_9c8;
  TAttribute<FText> *local_9c0;
  FName local_9b8;
  FName local_9b0;
  FUIAction *local_9a8;
  FSlateIcon *local_9a0;
  FNameEntryId *local_998;
  FNameEntryId *local_990;
  FName local_988;
  FName local_980;
  FName local_978;
  FName local_970;
  FName local_968;
  FName local_960;
  FNameEntryId *local_958;
  FNameEntryId *local_950;
  FName local_948;
  FName local_940;
  FName local_938;
  FName local_930;
  FName local_928;
  FName local_920;
  FNameEntryId *local_918;
  FNameEntryId *local_910;
  FName local_908;
  FName local_900;
  FNameEntryId *local_8f8;
  FNameEntryId *local_8f0;
  FName local_8e8;
  FName local_8e0;
  FName *local_8d8;
  FName local_8d0;
  FName local_8c8;
  FName local_8c0;
  FName local_8b8;
  FName local_8b0;
  FName local_8a8;
  FName local_8a0;
  FName local_898;
  TAttribute<EVisibility> *local_890;
  TAttribute<FText> *local_888;
  FName local_880;
  FName local_878;
  FUIAction *local_870;
  FSlateIcon *local_868;
  FNameEntryId *local_860;
  FNameEntryId *local_858;
  FName local_850;
  FName local_848;
  FName local_840;
  FName local_838;
  FName local_830;
  FName local_828;
  FNameEntryId *local_820;
  FNameEntryId *local_818;
  FName local_810;
  FName local_808;
  FName local_800;
  FName local_7f8;
  FName local_7f0;
  FName local_7e8;
  FNameEntryId *local_7e0;
  FNameEntryId *local_7d8;
  FName local_7d0;
  FName local_7c8;
  FNameEntryId *local_7c0;
  FNameEntryId *local_7b8;
  FName local_7b0;
  FName local_7a8;
  FName *local_7a0;
  FName local_798;
  FName local_790;
  FName local_788;
  FName local_780;
  FName local_778;
  FName local_770;
  FName local_768;
  FName local_760;
  TAttribute<EVisibility> *local_758;
  TAttribute<FText> *local_750;
  FName local_748;
  FName local_740;
  FUIAction *local_738;
  FSlateIcon *local_730;
  FNameEntryId *local_728;
  FNameEntryId *local_720;
  FName local_718;
  FName local_710;
  FName local_708;
  FName local_700;
  FName local_6f8;
  FName local_6f0;
  FNameEntryId *local_6e8;
  FNameEntryId *local_6e0;
  FName local_6d8;
  FName local_6d0;
  FName local_6c8;
  FName local_6c0;
  FName local_6b8;
  FName local_6b0;
  FNameEntryId *local_6a8;
  FNameEntryId *local_6a0;
  FName local_698;
  FName local_690;
  FNameEntryId *local_688;
  FNameEntryId *local_680;
  FName local_678;
  FName local_670;
  FName *local_668;
  FName local_660;
  FName local_658;
  FName local_650;
  FName local_648;
  FName local_640;
  FName local_638;
  FName local_630;
  FName local_628;
  TAttribute<EVisibility> *local_620;
  TAttribute<FText> *local_618;
  FName local_610;
  FName local_608;
  FUIAction *local_600;
  FSlateIcon *local_5f8;
  FNameEntryId local_5f0;
  undefined4 uStack_5ec;
  FNameEntryId local_5e8;
  undefined4 uStack_5e4;
  FNameEntryId local_5e0;
  undefined4 uStack_5dc;
  FNameEntryId local_5d8;
  undefined4 uStack_5d4;
  FName local_5d0 [2];
  FNameEntryId local_5c0;
  undefined4 uStack_5bc;
  FNameEntryId local_5b8;
  undefined4 uStack_5b4;
  FNameEntryId local_5b0;
  undefined4 uStack_5ac;
  FNameEntryId local_5a8;
  undefined4 uStack_5a4;
  FName local_5a0 [2];
  FNameEntryId local_590;
  undefined4 uStack_58c;
  FNameEntryId local_588;
  undefined4 uStack_584;
  FNameEntryId local_580;
  undefined4 uStack_57c;
  FNameEntryId local_578;
  undefined4 uStack_574;
  FName local_570 [2];
  FNameEntryId local_560;
  undefined4 uStack_55c;
  FNameEntryId local_558;
  undefined4 uStack_554;
  FNameEntryId local_550;
  undefined4 uStack_54c;
  FNameEntryId local_548;
  undefined4 uStack_544;
  FName local_540 [2];
  FText local_530;
  FText local_520;
  FText local_510;
  FText local_500;
  TAttribute<EVisibility> local_4f0;
  TAttribute<EVisibility> local_4d0;
  TAttribute<EVisibility> local_4b0;
  TAttribute<EVisibility> local_490;
  TAttribute<FText> local_470;
  TAttribute<FText> local_440;
  TAttribute<FText> local_410;
  TAttribute<FText> local_3e0;
  TAttribute<FText> local_3b0;
  TAttribute<FText> local_380;
  TAttribute<FText> local_350;
  TAttribute<FText> local_320;
  TAttribute<FText> local_2f0;
  TAttribute<FText> local_2c0;
  TAttribute<FText> local_290;
  TAttribute<FText> local_260;
  FSlateIcon local_230;
  FSlateIcon local_210;
  FSlateIcon local_1f0;
  FSlateIcon local_1d0;
  FUIAction local_1b0;
  FUIAction local_148;
  FUIAction local_e0;
  FUIAction local_78;
  
  local_9c8 = TAttribute<EVisibility>::TAttribute<EVisibility>(&local_4f0);
  local_9c0 = TAttribute<FText>::TAttribute<FText>(&local_2f0);
  local_ad0 = FNameEntryId::FNameEntryId(local_b50);
  uVar1 = local_ad0->Value;
  FNameEntryId::FNameEntryId(&local_5f0);
  uStack_5ec = 0;
  local_ac0.Number = 0;
  local_ac0.ComparisonIndex.Value = uVar1;
  local_ac8 = &local_5f0;
  local_ab8 = local_ac0;
  local_ab0 = local_ac0;
  local_aa8 = local_ac0;
  local_aa0 = local_ac0;
  local_a98 = local_ac0;
  local_9b8 = local_ac0;
  local_5f0.Value = uVar1;
  local_a90 = FNameEntryId::FNameEntryId(local_b48);
  uVar1 = local_a90->Value;
  FNameEntryId::FNameEntryId(&local_5e8);
  uStack_5e4 = 0;
  local_a80.Number = 0;
  local_a80.ComparisonIndex.Value = uVar1;
  local_a88 = &local_5e8;
  local_a78 = local_a80;
  local_a70 = local_a80;
  local_a68 = local_a80;
  local_a60 = local_a80;
  local_a58 = local_a80;
  local_9b0 = local_a80;
  local_5e8.Value = uVar1;
  local_9a8 = FUIAction::FUIAction(&local_1b0);
  local_a50 = FNameEntryId::FNameEntryId(local_b40);
  uVar1 = local_a50->Value;
  FNameEntryId::FNameEntryId(&local_5e0);
  uStack_5dc = 0;
  local_a40.Number = 0;
  local_a40.ComparisonIndex.Value = uVar1;
  local_a48 = &local_5e0;
  local_a38 = local_a40;
  local_9e8 = local_a40;
  local_5e0.Value = uVar1;
  local_a30 = FNameEntryId::FNameEntryId(&local_ad4);
  uVar1 = local_a30->Value;
  FNameEntryId::FNameEntryId(&local_5d8);
  uStack_5d4 = 0;
  local_a20.Number = 0;
  local_a20.ComparisonIndex.Value = uVar1;
  local_a10 = local_5d0;
  local_a28 = &local_5d8;
  local_a18 = local_a20;
  local_9e0 = local_a20;
  local_5d8.Value = uVar1;
  pFVar2 = ::FName::FName(local_a10,"Icons.box-perspective");
  local_a08 = *pFVar2;
  local_a00 = local_a08;
  local_9d8 = local_a08;
  local_9f8 = FAppStyle::GetAppStyleSetName();
  local_9f8 = *(FName *)local_9f8;
  local_9f0 = local_9f8;
  local_9d0 = local_9f8;
  local_9a0 = FSlateIcon::FSlateIcon(&local_230,local_9f8,local_9d8,local_9e0,local_9e8);
  pFVar3 = FText::GetEmpty();
  TAttribute<FText>::TAttribute<FText><FText>(&local_440,pFVar3);
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     (&local_530,L"StarshipGallery",L"MenuEntry1",L"Menu Entry 1");
  TAttribute<FText>::TAttribute<FText>(&local_470,pFVar3);
  FBaseMenuBuilder::AddMenuEntry
            ((FBaseMenuBuilder *)param_1,&local_470,&local_440,local_9a0,local_9a8,local_9b0,Button,
             local_9b8,local_9c0,local_9c8);
  TAttribute<FText>::~TAttribute<FText>(&local_470);
  FText::~FText(&local_530);
  TAttribute<FText>::~TAttribute<FText>(&local_440);
  FUIAction::~FUIAction(&local_1b0);
  TAttribute<FText>::~TAttribute<FText>(&local_2f0);
  TAttribute<EVisibility>::~TAttribute<EVisibility>(&local_4f0);
  local_890 = TAttribute<EVisibility>::TAttribute<EVisibility>(&local_4d0);
  local_888 = TAttribute<FText>::TAttribute<FText>(&local_2c0);
  local_998 = FNameEntryId::FNameEntryId(local_b34);
  uVar1 = local_998->Value;
  FNameEntryId::FNameEntryId(&local_5c0);
  uStack_5bc = 0;
  local_988.Number = 0;
  local_988.ComparisonIndex.Value = uVar1;
  local_990 = &local_5c0;
  local_980 = local_988;
  local_978 = local_988;
  local_970 = local_988;
  local_968 = local_988;
  local_960 = local_988;
  local_880 = local_988;
  local_5c0.Value = uVar1;
  local_958 = FNameEntryId::FNameEntryId(local_b2c);
  uVar1 = local_958->Value;
  FNameEntryId::FNameEntryId(&local_5b8);
  uStack_5b4 = 0;
  local_948.Number = 0;
  local_948.ComparisonIndex.Value = uVar1;
  local_950 = &local_5b8;
  local_940 = local_948;
  local_938 = local_948;
  local_930 = local_948;
  local_928 = local_948;
  local_920 = local_948;
  local_878 = local_948;
  local_5b8.Value = uVar1;
  local_870 = FUIAction::FUIAction(&local_148);
  local_918 = FNameEntryId::FNameEntryId(local_b24);
  uVar1 = local_918->Value;
  FNameEntryId::FNameEntryId(&local_5b0);
  uStack_5ac = 0;
  local_908.Number = 0;
  local_908.ComparisonIndex.Value = uVar1;
  local_910 = &local_5b0;
  local_900 = local_908;
  local_8b0 = local_908;
  local_5b0.Value = uVar1;
  local_8f8 = FNameEntryId::FNameEntryId(local_b1c);
  uVar1 = local_8f8->Value;
  FNameEntryId::FNameEntryId(&local_5a8);
  uStack_5a4 = 0;
  local_8e8.Number = 0;
  local_8e8.ComparisonIndex.Value = uVar1;
  local_8d8 = local_5a0;
  local_8f0 = &local_5a8;
  local_8e0 = local_8e8;
  local_8a8 = local_8e8;
  local_5a8.Value = uVar1;
  pFVar2 = ::FName::FName(local_8d8,"Icons.box-perspective");
  local_8d0 = *pFVar2;
  local_8c8 = local_8d0;
  local_8a0 = local_8d0;
  local_8c0 = FAppStyle::GetAppStyleSetName();
  local_8c0 = *(FName *)local_8c0;
  local_8b8 = local_8c0;
  local_898 = local_8c0;
  local_868 = FSlateIcon::FSlateIcon(&local_210,local_8c0,local_8a0,local_8a8,local_8b0);
  pFVar3 = FText::GetEmpty();
  TAttribute<FText>::TAttribute<FText><FText>(&local_3e0,pFVar3);
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     (&local_520,L"StarshipGallery",L"MenuEntry2",L"Menu Entry 2");
  TAttribute<FText>::TAttribute<FText>(&local_410,pFVar3);
  FBaseMenuBuilder::AddMenuEntry
            ((FBaseMenuBuilder *)param_1,&local_410,&local_3e0,local_868,local_870,local_878,Button,
             local_880,local_888,local_890);
  TAttribute<FText>::~TAttribute<FText>(&local_410);
  FText::~FText(&local_520);
  TAttribute<FText>::~TAttribute<FText>(&local_3e0);
  FUIAction::~FUIAction(&local_148);
  TAttribute<FText>::~TAttribute<FText>(&local_2c0);
  TAttribute<EVisibility>::~TAttribute<EVisibility>(&local_4d0);
  local_758 = TAttribute<EVisibility>::TAttribute<EVisibility>(&local_4b0);
  local_750 = TAttribute<FText>::TAttribute<FText>(&local_290);
  local_860 = FNameEntryId::FNameEntryId(local_b14);
  uVar1 = local_860->Value;
  FNameEntryId::FNameEntryId(&local_590);
  uStack_58c = 0;
  local_850.Number = 0;
  local_850.ComparisonIndex.Value = uVar1;
  local_858 = &local_590;
  local_848 = local_850;
  local_840 = local_850;
  local_838 = local_850;
  local_830 = local_850;
  local_828 = local_850;
  local_748 = local_850;
  local_590.Value = uVar1;
  local_820 = FNameEntryId::FNameEntryId(local_b0c);
  uVar1 = local_820->Value;
  FNameEntryId::FNameEntryId(&local_588);
  uStack_584 = 0;
  local_810.Number = 0;
  local_810.ComparisonIndex.Value = uVar1;
  local_818 = &local_588;
  local_808 = local_810;
  local_800 = local_810;
  local_7f8 = local_810;
  local_7f0 = local_810;
  local_7e8 = local_810;
  local_740 = local_810;
  local_588.Value = uVar1;
  local_738 = FUIAction::FUIAction(&local_e0);
  local_7e0 = FNameEntryId::FNameEntryId(local_b04);
  uVar1 = local_7e0->Value;
  FNameEntryId::FNameEntryId(&local_580);
  uStack_57c = 0;
  local_7d0.Number = 0;
  local_7d0.ComparisonIndex.Value = uVar1;
  local_7d8 = &local_580;
  local_7c8 = local_7d0;
  local_778 = local_7d0;
  local_580.Value = uVar1;
  local_7c0 = FNameEntryId::FNameEntryId(local_afc);
  uVar1 = local_7c0->Value;
  FNameEntryId::FNameEntryId(&local_578);
  uStack_574 = 0;
  local_7b0.Number = 0;
  local_7b0.ComparisonIndex.Value = uVar1;
  local_7a0 = local_570;
  local_7b8 = &local_578;
  local_7a8 = local_7b0;
  local_770 = local_7b0;
  local_578.Value = uVar1;
  pFVar2 = ::FName::FName(local_7a0,"Icons.box-perspective");
  local_798 = *pFVar2;
  local_790 = local_798;
  local_768 = local_798;
  local_788 = FAppStyle::GetAppStyleSetName();
  local_788 = *(FName *)local_788;
  local_780 = local_788;
  local_760 = local_788;
  local_730 = FSlateIcon::FSlateIcon(&local_1f0,local_788,local_768,local_770,local_778);
  pFVar3 = FText::GetEmpty();
  TAttribute<FText>::TAttribute<FText><FText>(&local_380,pFVar3);
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     (&local_510,L"StarshipGallery",L"MenuEntry3",L"Menu Entry 3");
  TAttribute<FText>::TAttribute<FText>(&local_3b0,pFVar3);
  FBaseMenuBuilder::AddMenuEntry
            ((FBaseMenuBuilder *)param_1,&local_3b0,&local_380,local_730,local_738,local_740,Button,
             local_748,local_750,local_758);
  TAttribute<FText>::~TAttribute<FText>(&local_3b0);
  FText::~FText(&local_510);
  TAttribute<FText>::~TAttribute<FText>(&local_380);
  FUIAction::~FUIAction(&local_e0);
  TAttribute<FText>::~TAttribute<FText>(&local_290);
  TAttribute<EVisibility>::~TAttribute<EVisibility>(&local_4b0);
  local_620 = TAttribute<EVisibility>::TAttribute<EVisibility>(&local_490);
  local_618 = TAttribute<FText>::TAttribute<FText>(&local_260);
  local_728 = FNameEntryId::FNameEntryId(local_af4);
  uVar1 = local_728->Value;
  FNameEntryId::FNameEntryId(&local_560);
  uStack_55c = 0;
  local_718.Number = 0;
  local_718.ComparisonIndex.Value = uVar1;
  local_720 = &local_560;
  local_710 = local_718;
  local_708 = local_718;
  local_700 = local_718;
  local_6f8 = local_718;
  local_6f0 = local_718;
  local_610 = local_718;
  local_560.Value = uVar1;
  local_6e8 = FNameEntryId::FNameEntryId(local_aec);
  uVar1 = local_6e8->Value;
  FNameEntryId::FNameEntryId(&local_558);
  uStack_554 = 0;
  local_6d8.Number = 0;
  local_6d8.ComparisonIndex.Value = uVar1;
  local_6e0 = &local_558;
  local_6d0 = local_6d8;
  local_6c8 = local_6d8;
  local_6c0 = local_6d8;
  local_6b8 = local_6d8;
  local_6b0 = local_6d8;
  local_608 = local_6d8;
  local_558.Value = uVar1;
  local_600 = FUIAction::FUIAction(&local_78);
  local_6a8 = FNameEntryId::FNameEntryId(local_ae4);
  uVar1 = local_6a8->Value;
  FNameEntryId::FNameEntryId(&local_550);
  uStack_54c = 0;
  local_698.Number = 0;
  local_698.ComparisonIndex.Value = uVar1;
  local_6a0 = &local_550;
  local_690 = local_698;
  local_640 = local_698;
  local_550.Value = uVar1;
  local_688 = FNameEntryId::FNameEntryId(local_adc);
  uVar1 = local_688->Value;
  FNameEntryId::FNameEntryId(&local_548);
  uStack_544 = 0;
  local_678.Number = 0;
  local_678.ComparisonIndex.Value = uVar1;
  local_668 = local_540;
  local_680 = &local_548;
  local_670 = local_678;
  local_638 = local_678;
  local_548.Value = uVar1;
  pFVar2 = ::FName::FName(local_668,"Icons.box-perspective");
  local_660 = *pFVar2;
  local_658 = local_660;
  local_630 = local_660;
  local_650 = FAppStyle::GetAppStyleSetName();
  local_650 = *(FName *)local_650;
  local_648 = local_650;
  local_628 = local_650;
  local_5f8 = FSlateIcon::FSlateIcon(&local_1d0,local_650,local_630,local_638,local_640);
  pFVar3 = FText::GetEmpty();
  TAttribute<FText>::TAttribute<FText><FText>(&local_320,pFVar3);
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     (&local_500,L"StarshipGallery",L"MenuEntry4",L"Menu Entry 4");
  TAttribute<FText>::TAttribute<FText>(&local_350,pFVar3);
  FBaseMenuBuilder::AddMenuEntry
            ((FBaseMenuBuilder *)param_1,&local_350,&local_320,local_5f8,local_600,local_608,Button,
             local_610,local_618,local_620);
  TAttribute<FText>::~TAttribute<FText>(&local_350);
  FText::~FText(&local_500);
  TAttribute<FText>::~TAttribute<FText>(&local_320);
  FUIAction::~FUIAction(&local_78);
  TAttribute<FText>::~TAttribute<FText>(&local_260);
  TAttribute<EVisibility>::~TAttribute<EVisibility>(&local_490);
  return;
}

