// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 6

// SMultiBoxTest @ 14305cd90

SMultiBoxTest * __thiscall SMultiBoxTest::SMultiBoxTest(SMultiBoxTest *this)

{
  FUICommandList *this_00;
  longlong lVar1;
  FUICommandList *pFVar2;
  FUICommandList *local_20;
  
  SCompoundWidget::SCompoundWidget((SCompoundWidget *)this);
  this->_padding_ = (longlong)&___7SMultiBoxTest__6B_;
  this_00 = ::operator_new(0x140);
  if (this_00 == (FUICommandList *)0x0) {
    local_20 = (FUICommandList *)0x0;
  }
  else {
    pFVar2 = this_00;
    for (lVar1 = 0x140; lVar1 != 0; lVar1 = lVar1 + -1) {
      *(undefined1 *)&pFVar2->_padding_ = 0;
      pFVar2 = (FUICommandList *)((longlong)&pFVar2->_padding_ + 1);
    }
    local_20 = FUICommandList::FUICommandList(this_00);
  }
  TSharedRef<FUICommandList,1>::TSharedRef<FUICommandList,1><FUICommandList>
            (&this->CommandList,local_20);
  return this;
}

// ~SMultiBoxTest @ 143062130

void __thiscall SMultiBoxTest::~SMultiBoxTest(SMultiBoxTest *this)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&(this->CommandList).SharedReferenceCount);
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  return;
}

// Construct @ 1430858f0

/* WARNING: Removing unreachable block (ram,0x0001430867cf) */
/* WARNING: Removing unreachable block (ram,0x0001430864e8) */
/* WARNING: Removing unreachable block (ram,0x000143086368) */
/* WARNING: Removing unreachable block (ram,0x0001430865db) */
/* WARNING: Removing unreachable block (ram,0x0001430868c2) */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall SMultiBoxTest::Construct(SMultiBoxTest *this,FArguments *param_1)

{
  FMultiBoxTestCommandList *pFVar1;
  FText *pFVar2;
  FSlotArguments *this_00;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> *this_01;
  TSharedRef<SVerticalBox,1> *pTVar3;
  T0RequiredArgs local_c98 [8];
  FName *local_c90;
  FName *local_c88;
  FName *local_c80;
  FName *local_c78;
  FName *local_c70;
  int local_c68 [20];
  uint local_c18;
  uint local_c10;
  uint local_c08;
  uint local_c00;
  uint local_bf8;
  uint local_bf0;
  uint local_be8;
  uint local_be0;
  int local_bdc [7];
  FNameEntryId *local_bc0;
  FNameEntryId *local_bb8;
  FNameEntryId *local_bb0;
  FNameEntryId *local_ba8;
  FNameEntryId *local_ba0;
  FNameEntryId local_b98 [2];
  FNameEntryId local_b90 [2];
  FNameEntryId local_b88 [2];
  FNameEntryId local_b80 [2];
  FNameEntryId local_b78 [2];
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *local_b70;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *local_b68;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *local_b60;
  TSharedPtr<FUICommandInfo_const_,1> *local_b58;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *local_b50;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *local_b48;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *local_b40;
  TSharedPtr<FUICommandInfo_const_,1> *local_b38;
  FUICommandList *local_b30;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *local_b28;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *local_b20;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *local_b18;
  TSharedPtr<FUICommandInfo_const_,1> *local_b10;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *local_b08;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *local_b00;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *local_af8;
  TSharedPtr<FUICommandInfo_const_,1> *local_af0;
  FUICommandList *local_ae8;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *local_ae0;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *local_ad8;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *local_ad0;
  TSharedPtr<FUICommandInfo_const_,1> *local_ac8;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *local_ac0;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *local_ab8;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *local_ab0;
  TSharedPtr<FUICommandInfo_const_,1> *local_aa8;
  FUICommandList *local_aa0;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *local_a98;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *local_a90;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *local_a88;
  TSharedPtr<FUICommandInfo_const_,1> *local_a80;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *local_a78;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *local_a70;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *local_a68;
  TSharedPtr<FUICommandInfo_const_,1> *local_a60;
  FUICommandList *local_a58;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *local_a50;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *local_a48;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *local_a40;
  TSharedPtr<FUICommandInfo_const_,1> *local_a38;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *local_a30;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *local_a28;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *local_a20;
  TSharedPtr<FUICommandInfo_const_,1> *local_a18;
  FUICommandList *local_a10;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *local_a08;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *local_a00;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *local_9f8;
  TSharedPtr<FUICommandInfo_const_,1> *local_9f0;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *local_9e8;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *local_9e0;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *local_9d8;
  TSharedPtr<FUICommandInfo_const_,1> *local_9d0;
  FUICommandList *local_9c8;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *local_9c0;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *local_9b8;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *local_9b0;
  TSharedPtr<FUICommandInfo_const_,1> *local_9a8;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *local_9a0;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *local_998;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *local_990;
  TSharedPtr<FUICommandInfo_const_,1> *local_988;
  FUICommandList *local_980;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *local_978;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *local_970;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *local_968;
  TSharedPtr<FUICommandInfo_const_,1> *local_960;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *local_958;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *local_950;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *local_948;
  TSharedPtr<FUICommandInfo_const_,1> *local_940;
  FUICommandList *local_938;
  FNameEntryId *local_930;
  FName *local_928;
  FName local_920;
  FName local_918;
  TSharedPtr<FExtender,1> *local_910;
  TSharedPtr<FUICommandList_const_,1> *local_908;
  FName local_900;
  ISlateStyle *local_8f8;
  TSharedPtr<FExtender,1> *local_8f0;
  TSharedPtr<FUICommandList_const_,1> *local_8e8;
  FNameEntryId *local_8e0;
  FName *local_8d8;
  FName local_8d0;
  FName local_8c8;
  FName local_8c0;
  FNameEntryId *local_8b8;
  FName *local_8b0;
  FName local_8a8;
  FName local_8a0;
  FName local_898;
  FName local_890;
  FName local_888;
  TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy> *local_880;
  FNameEntryId *local_878;
  FName *local_870;
  FName local_868;
  FName local_860;
  FName local_858;
  FNameEntryId *local_850;
  FName *local_848;
  FName local_840;
  FName local_838;
  FName local_830;
  FName local_828;
  FName local_820;
  TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy> *local_818;
  TSharedRef<SWidget,1> *local_810;
  FSlotArguments *local_808;
  FSlotArguments *local_800;
  FArguments *local_7f8;
  FArguments *local_7f0;
  TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *local_7e8;
  TSharedRef<SWidget,1> local_7e0;
  FName local_7d0;
  FName local_7c8;
  FName local_7c0;
  FName local_7b8;
  FName local_7b0;
  FText local_7a8;
  FText local_798;
  FText local_788;
  FText local_778;
  TSharedRef<SVerticalBox,1> local_768;
  TSharedRef<SWidget,1> local_758;
  TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy> local_748;
  TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy> local_730;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_718;
  TSharedPtr<FUICommandInfo_const_,1> local_700;
  TSharedPtr<FUICommandInfo_const_,1> local_6f0;
  TSharedPtr<FUICommandInfo_const_,1> local_6e0;
  TSharedPtr<FUICommandInfo_const_,1> local_6d0;
  TSharedPtr<FUICommandInfo_const_,1> local_6c0;
  TSharedPtr<FUICommandInfo_const_,1> local_6b0;
  TSharedPtr<FUICommandInfo_const_,1> local_6a0;
  TSharedPtr<FUICommandInfo_const_,1> local_690;
  TSharedPtr<FExtender,1> local_680;
  TSharedPtr<FUICommandList_const_,1> local_670;
  TAttribute<FText> local_660;
  TAttribute<FText> local_630;
  TAttribute<FText> local_600;
  TAttribute<FText> local_5d0;
  FMenuBarBuilder local_598;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_538;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> local_520;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> local_508;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_4f0;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> local_4d8;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> local_4c0;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_4a8;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> local_490;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> local_478;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_460;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> local_448;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> local_430;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_418;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> local_400;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> local_3e8;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_3d0;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> local_3b8;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> local_3a0;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_388;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> local_370;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> local_358;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_340;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> local_328;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> local_310;
  FSlotArguments local_2f8;
  FArguments local_210;
  
  TArray<bool,TSizedDefaultAllocator<32>_>::Reset(&ButtonStates,0);
  TArray<bool,TSizedDefaultAllocator<32>_>::AddZeroed(&ButtonStates,8);
  TCommands<FMultiBoxTestCommandList>::Register();
  local_b30 = TSharedRef<FUICommandList,1>::operator->(&this->CommandList);
  local_b70 = &local_370;
  local_bdc[0] = 0;
  local_b50 = TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CreateStatic<int>
                        (local_b70,`SMultiBoxTest::Construct'::__l2::Local::IsButtonChecked,
                         local_bdc);
  local_b68 = &local_358;
  local_bdc[1] = 0;
  local_b48 = TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CreateStatic<int>
                        (local_b68,`SMultiBoxTest::Construct'::__l2::Local::IsButtonEnabled,
                         local_bdc + 1);
  local_b60 = &local_340;
  local_bdc[2] = 0;
  local_b40 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CreateStatic<int>
                        (local_b60,`SMultiBoxTest::Construct'::__l2::Local::OnButtonPressed,
                         local_bdc + 2);
  local_b58 = &local_700;
  pFVar1 = TCommands<FMultiBoxTestCommandList>::Get();
  local_b38 = TSharedPtr<FUICommandInfo_const_,1>::
              TSharedPtr<FUICommandInfo_const_,1><FUICommandInfo>
                        (local_b58,&pFVar1->FirstCommandInfo);
  FUICommandList::MapAction(local_b30,local_b38,local_b40,local_b48,local_b50,RepeatDisabled);
  local_ae8 = TSharedRef<FUICommandList,1>::operator->(&this->CommandList);
  local_b28 = &local_328;
  local_bdc[3] = 1;
  local_b08 = TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CreateStatic<int>
                        (local_b28,`SMultiBoxTest::Construct'::__l2::Local::IsButtonChecked,
                         local_bdc + 3);
  local_b20 = &local_310;
  local_bdc[4] = 1;
  local_b00 = TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CreateStatic<int>
                        (local_b20,`SMultiBoxTest::Construct'::__l2::Local::IsButtonEnabled,
                         local_bdc + 4);
  local_b18 = &local_538;
  local_c68[0] = 1;
  local_af8 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CreateStatic<int>
                        (local_b18,`SMultiBoxTest::Construct'::__l2::Local::OnButtonPressed,
                         local_c68);
  local_b10 = &local_6f0;
  pFVar1 = TCommands<FMultiBoxTestCommandList>::Get();
  local_af0 = TSharedPtr<FUICommandInfo_const_,1>::
              TSharedPtr<FUICommandInfo_const_,1><FUICommandInfo>
                        (local_b10,&pFVar1->SecondCommandInfo);
  FUICommandList::MapAction(local_ae8,local_af0,local_af8,local_b00,local_b08,RepeatDisabled);
  local_aa0 = TSharedRef<FUICommandList,1>::operator->(&this->CommandList);
  local_ae0 = &local_520;
  local_c68[1] = 2;
  local_ac0 = TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CreateStatic<int>
                        (local_ae0,`SMultiBoxTest::Construct'::__l2::Local::IsButtonChecked,
                         local_c68 + 1);
  local_ad8 = &local_508;
  local_c68[2] = 2;
  local_ab8 = TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CreateStatic<int>
                        (local_ad8,`SMultiBoxTest::Construct'::__l2::Local::IsButtonEnabled,
                         local_c68 + 2);
  local_ad0 = &local_4f0;
  local_c68[3] = 2;
  local_ab0 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CreateStatic<int>
                        (local_ad0,`SMultiBoxTest::Construct'::__l2::Local::OnButtonPressed,
                         local_c68 + 3);
  local_ac8 = &local_6e0;
  pFVar1 = TCommands<FMultiBoxTestCommandList>::Get();
  local_aa8 = TSharedPtr<FUICommandInfo_const_,1>::
              TSharedPtr<FUICommandInfo_const_,1><FUICommandInfo>
                        (local_ac8,&pFVar1->ThirdCommandInfo);
  FUICommandList::MapAction(local_aa0,local_aa8,local_ab0,local_ab8,local_ac0,RepeatDisabled);
  local_a58 = TSharedRef<FUICommandList,1>::operator->(&this->CommandList);
  local_a98 = &local_4d8;
  local_c68[4] = 3;
  local_a78 = TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CreateStatic<int>
                        (local_a98,`SMultiBoxTest::Construct'::__l2::Local::IsButtonChecked,
                         local_c68 + 4);
  local_a90 = &local_4c0;
  local_c68[5] = 3;
  local_a70 = TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CreateStatic<int>
                        (local_a90,`SMultiBoxTest::Construct'::__l2::Local::IsButtonEnabled,
                         local_c68 + 5);
  local_a88 = &local_4a8;
  local_c68[6] = 3;
  local_a68 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CreateStatic<int>
                        (local_a88,`SMultiBoxTest::Construct'::__l2::Local::OnButtonPressed,
                         local_c68 + 6);
  local_a80 = &local_6d0;
  pFVar1 = TCommands<FMultiBoxTestCommandList>::Get();
  local_a60 = TSharedPtr<FUICommandInfo_const_,1>::
              TSharedPtr<FUICommandInfo_const_,1><FUICommandInfo>
                        (local_a80,&pFVar1->FourthCommandInfo);
  FUICommandList::MapAction(local_a58,local_a60,local_a68,local_a70,local_a78,RepeatDisabled);
  local_a10 = TSharedRef<FUICommandList,1>::operator->(&this->CommandList);
  local_a50 = &local_490;
  local_c68[7] = 4;
  local_a30 = TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CreateStatic<int>
                        (local_a50,`SMultiBoxTest::Construct'::__l2::Local::IsButtonChecked,
                         local_c68 + 7);
  local_a48 = &local_478;
  local_c68[8] = 4;
  local_a28 = TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CreateStatic<int>
                        (local_a48,`SMultiBoxTest::Construct'::__l2::Local::IsButtonEnabled,
                         local_c68 + 8);
  local_a40 = &local_460;
  local_c68[9] = 4;
  local_a20 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CreateStatic<int>
                        (local_a40,`SMultiBoxTest::Construct'::__l2::Local::OnButtonPressed,
                         local_c68 + 9);
  local_a38 = &local_6c0;
  pFVar1 = TCommands<FMultiBoxTestCommandList>::Get();
  local_a18 = TSharedPtr<FUICommandInfo_const_,1>::
              TSharedPtr<FUICommandInfo_const_,1><FUICommandInfo>
                        (local_a38,&pFVar1->FifthCommandInfo);
  FUICommandList::MapAction(local_a10,local_a18,local_a20,local_a28,local_a30,RepeatDisabled);
  local_9c8 = TSharedRef<FUICommandList,1>::operator->(&this->CommandList);
  local_a08 = &local_448;
  local_c68[10] = 5;
  local_9e8 = TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CreateStatic<int>
                        (local_a08,`SMultiBoxTest::Construct'::__l2::Local::IsButtonChecked,
                         local_c68 + 10);
  local_a00 = &local_430;
  local_c68[0xb] = 5;
  local_9e0 = TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CreateStatic<int>
                        (local_a00,`SMultiBoxTest::Construct'::__l2::Local::IsButtonEnabled,
                         local_c68 + 0xb);
  local_9f8 = &local_418;
  local_c68[0xc] = 5;
  local_9d8 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CreateStatic<int>
                        (local_9f8,`SMultiBoxTest::Construct'::__l2::Local::OnButtonPressed,
                         local_c68 + 0xc);
  local_9f0 = &local_6b0;
  pFVar1 = TCommands<FMultiBoxTestCommandList>::Get();
  local_9d0 = TSharedPtr<FUICommandInfo_const_,1>::
              TSharedPtr<FUICommandInfo_const_,1><FUICommandInfo>
                        (local_9f0,&pFVar1->SixthCommandInfo);
  FUICommandList::MapAction(local_9c8,local_9d0,local_9d8,local_9e0,local_9e8,RepeatDisabled);
  local_980 = TSharedRef<FUICommandList,1>::operator->(&this->CommandList);
  local_9c0 = &local_400;
  local_c68[0xd] = 6;
  local_9a0 = TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CreateStatic<int>
                        (local_9c0,`SMultiBoxTest::Construct'::__l2::Local::IsButtonChecked,
                         local_c68 + 0xd);
  local_9b8 = &local_3e8;
  local_c68[0xe] = 6;
  local_998 = TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CreateStatic<int>
                        (local_9b8,`SMultiBoxTest::Construct'::__l2::Local::IsButtonEnabled,
                         local_c68 + 0xe);
  local_9b0 = &local_3d0;
  local_c68[0xf] = 6;
  local_990 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CreateStatic<int>
                        (local_9b0,`SMultiBoxTest::Construct'::__l2::Local::OnButtonPressed,
                         local_c68 + 0xf);
  local_9a8 = &local_6a0;
  pFVar1 = TCommands<FMultiBoxTestCommandList>::Get();
  local_988 = TSharedPtr<FUICommandInfo_const_,1>::
              TSharedPtr<FUICommandInfo_const_,1><FUICommandInfo>
                        (local_9a8,&pFVar1->SeventhCommandInfo);
  FUICommandList::MapAction(local_980,local_988,local_990,local_998,local_9a0,RepeatDisabled);
  local_938 = TSharedRef<FUICommandList,1>::operator->(&this->CommandList);
  local_978 = &local_3b8;
  local_c68[0x10] = 7;
  local_958 = TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CreateStatic<int>
                        (local_978,`SMultiBoxTest::Construct'::__l2::Local::IsButtonChecked,
                         local_c68 + 0x10);
  local_970 = &local_3a0;
  local_c68[0x11] = 7;
  local_950 = TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CreateStatic<int>
                        (local_970,`SMultiBoxTest::Construct'::__l2::Local::IsButtonEnabled,
                         local_c68 + 0x11);
  local_968 = &local_388;
  local_c68[0x12] = 7;
  local_948 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CreateStatic<int>
                        (local_968,`SMultiBoxTest::Construct'::__l2::Local::OnButtonPressed,
                         local_c68 + 0x12);
  local_960 = &local_690;
  pFVar1 = TCommands<FMultiBoxTestCommandList>::Get();
  local_940 = TSharedPtr<FUICommandInfo_const_,1>::
              TSharedPtr<FUICommandInfo_const_,1><FUICommandInfo>
                        (local_960,&pFVar1->EighthCommandInfo);
  FUICommandList::MapAction(local_938,local_940,local_948,local_950,local_958,RepeatDisabled);
  local_c88 = &local_7d0;
  local_bc0 = FNameEntryId::FNameEntryId(local_b98);
  local_c68[0x13] = local_bc0->Value;
  local_c18 = local_c68[0x13];
  local_930 = local_bc0;
  FNameEntryId::FNameEntryId(&local_c88->ComparisonIndex);
  local_c88->Number = 0;
  (local_c88->ComparisonIndex).Value = local_c18;
  local_c88->Number = 0;
  local_928 = local_c88;
  local_920 = *local_c88;
  local_918 = local_920;
  local_900 = local_920;
  local_8f8 = FCoreStyle::Get();
  local_910 = &local_680;
  local_8f0 = TSharedPtr<FExtender,1>::TSharedPtr<FExtender,1>(local_910,(FNullTag *)0x0);
  local_908 = &local_670;
  local_8e8 = TSharedPtr<FUICommandList_const_,1>::
              TSharedPtr<FUICommandList_const_,1><FUICommandList>(local_908,&this->CommandList);
  FMenuBarBuilder::FMenuBarBuilder(&local_598,local_8e8,local_8f0,local_8f8,local_900);
  local_c80 = &local_7c8;
  local_bb8 = FNameEntryId::FNameEntryId(local_b90);
  local_c10 = local_bb8->Value;
  local_c08 = local_c10;
  local_8e0 = local_bb8;
  FNameEntryId::FNameEntryId(&local_c80->ComparisonIndex);
  local_c80->Number = 0;
  (local_c80->ComparisonIndex).Value = local_c08;
  local_c80->Number = 0;
  local_8d8 = local_c80;
  local_8d0 = *local_c80;
  local_c78 = &local_7c0;
  local_8c8 = local_8d0;
  local_8c0 = local_8d0;
  local_890 = local_8d0;
  local_bb0 = FNameEntryId::FNameEntryId(local_b88);
  local_c00 = local_bb0->Value;
  local_bf8 = local_c00;
  local_8b8 = local_bb0;
  FNameEntryId::FNameEntryId(&local_c78->ComparisonIndex);
  local_c78->Number = 0;
  (local_c78->ComparisonIndex).Value = local_bf8;
  local_c78->Number = 0;
  local_8b0 = local_c78;
  local_8a8 = *local_c78;
  local_8a0 = local_8a8;
  local_898 = local_8a8;
  local_888 = local_8a8;
  local_880 = TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>::CreateStatic<>
                        (&local_748,FMenus::FillMenu1Entries);
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_798,L"STestSuite",L"OpensMenu1",L"Opens Menu 1");
  TAttribute<FText>::TAttribute<FText>(&local_630,pFVar2);
  pFVar2 = FText::AsLocalizable_Advanced_LocText(&local_7a8,L"STestSuite",L"Menu1",L"Menu 1");
  TAttribute<FText>::TAttribute<FText>(&local_660,pFVar2);
  FMenuBarBuilder::AddPullDownMenu(&local_598,&local_660,&local_630,local_880,local_888,local_890);
  TAttribute<FText>::~TAttribute<FText>(&local_660);
  FText::~FText(&local_7a8);
  TAttribute<FText>::~TAttribute<FText>(&local_630);
  FText::~FText(&local_798);
  TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>::
  ~TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>(&local_748);
  local_c70 = &local_7b8;
  local_ba8 = FNameEntryId::FNameEntryId(local_b80);
  local_bf0 = local_ba8->Value;
  local_be8 = local_bf0;
  local_878 = local_ba8;
  FNameEntryId::FNameEntryId(&local_c70->ComparisonIndex);
  local_c70->Number = 0;
  (local_c70->ComparisonIndex).Value = local_be8;
  local_c70->Number = 0;
  local_870 = local_c70;
  local_868 = *local_c70;
  local_c90 = &local_7b0;
  local_860 = local_868;
  local_858 = local_868;
  local_828 = local_868;
  local_ba0 = FNameEntryId::FNameEntryId(local_b78);
  local_be0 = local_ba0->Value;
  local_bdc[5] = local_be0;
  local_850 = local_ba0;
  FNameEntryId::FNameEntryId(&local_c90->ComparisonIndex);
  local_c90->Number = 0;
  (local_c90->ComparisonIndex).Value = local_bdc[5];
  local_c90->Number = 0;
  local_848 = local_c90;
  local_840 = *local_c90;
  local_838 = local_840;
  local_830 = local_840;
  local_820 = local_840;
  local_818 = TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>::CreateStatic<>
                        (&local_730,FMenus::FillMenu2Entries);
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_778,L"STestSuite",L"OpensMenu2",L"Opens Menu 2");
  TAttribute<FText>::TAttribute<FText>(&local_5d0,pFVar2);
  pFVar2 = FText::AsLocalizable_Advanced_LocText(&local_788,L"STestSuite",L"Menu2",L"Menu 2");
  TAttribute<FText>::TAttribute<FText>(&local_600,pFVar2);
  FMenuBarBuilder::AddPullDownMenu(&local_598,&local_600,&local_5d0,local_818,local_820,local_828);
  TAttribute<FText>::~TAttribute<FText>(&local_600);
  FText::~FText(&local_788);
  TAttribute<FText>::~TAttribute<FText>(&local_5d0);
  FText::~FText(&local_778);
  TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>::
  ~TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>(&local_730);
  local_7e8 = (TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *)
              &this->_padding_;
  local_7f8 = SVerticalBox::FArguments::FArguments(&local_210);
  this_00 = SVerticalBox::Slot(&local_2f8);
  local_808 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(this_00);
  local_810 = FMultiBoxBuilder::MakeWidget
                        ((FMultiBoxBuilder *)&local_598,&local_758,
                         (TDelegate<void___cdecl(TSharedRef<FMultiBox,1>_const_&,TSharedRef<SMultiBoxWidget,1>_const_&),FDefaultDelegateUserPolicy>
                          *)0x0);
  local_800 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                        ((FSlotArguments *)local_808,local_810);
  local_7f0 = SVerticalBox::FArguments::operator+(local_7f8,local_800);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(local_c98);
  this_01 = MakeTDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
                      (&local_718,"SVerticalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0xfac,local_c98);
  pTVar3 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                     (this_01,&local_768,local_7f0);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SVerticalBox>(&local_7e0,pTVar3);
  TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>::operator[]
            (local_7e8,&local_7e0);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_7e0);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_768.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_718._Widget.SharedReferenceCount);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_758);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_2f8);
  TArray<SVerticalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>::
  ~TArray<SVerticalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>(&local_210._Slots);
  TSlateBaseNamedArgs<SVerticalBox>::~TSlateBaseNamedArgs<SVerticalBox>
            ((TSlateBaseNamedArgs<SVerticalBox> *)&local_210);
  FMenuBarBuilder::~FMenuBarBuilder(&local_598);
  return;
}

// IsButtonChecked @ 1430d3130

bool __cdecl `SMultiBoxTest::Construct'::__l2::Local::IsButtonChecked(int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (param_1 < 0 || SMultiBoxTest::ButtonStates.ArrayNum <= param_1) {
    UE::Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return (bool)SMultiBoxTest::ButtonStates.AllocatorInstance.Data[param_1];
}

// IsButtonEnabled @ 1430d3230

bool __cdecl `SMultiBoxTest::Construct'::__l2::Local::IsButtonEnabled(int param_1)

{
  return true;
}

// OnButtonPressed @ 1430d9340

void __cdecl `SMultiBoxTest::Construct'::__l2::Local::OnButtonPressed(int param_1)

{
  FScriptContainerElement FVar1;
  code *pcVar2;
  bool bVar3;
  
  if (param_1 < 0 || SMultiBoxTest::ButtonStates.ArrayNum <= param_1) {
    UE::Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FVar1 = SMultiBoxTest::ButtonStates.AllocatorInstance.Data[param_1];
  if (param_1 < 0 || SMultiBoxTest::ButtonStates.ArrayNum <= param_1) {
    UE::Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  SMultiBoxTest::ButtonStates.AllocatorInstance.Data[param_1] =
       (FScriptContainerElement)(FVar1 == (FScriptContainerElement)0x0);
  return;
}

