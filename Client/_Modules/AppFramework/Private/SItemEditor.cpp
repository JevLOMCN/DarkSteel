// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 8

// ~SItemEditor @ 142f3f9f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SItemEditor::~SItemEditor(SItemEditor *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ItemToEdit).SharedReferenceCount.ReferenceController);
  TSharedPtr<SEditableTextBox,1>::~TSharedPtr<SEditableTextBox,1>(&this->MyTextBox);
  *(undefined4 *)&this->_padding_ = 0;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<SWidget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<SWidget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<SWidget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->_padding_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  STableRow<TSharedPtr<FTestData,1>_>::~STableRow<TSharedPtr<FTestData,1>_>
            ((STableRow<TSharedPtr<FTestData,1>_> *)this);
  return;
}

// GenerateWidgetForColumn @ 142fcd960

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
SItemEditor::GenerateWidgetForColumn
          (SItemEditor *this,TSharedRef<SWidget,1> *__return_storage_ptr__,FName *param_1)

{
  undefined1 *puVar1;
  code *pcVar2;
  TReferenceControllerBase<1> *pTVar3;
  STextBlock *pSVar4;
  SEditableTextBox *pSVar5;
  bool bVar6;
  bool bVar7;
  atomic<int> aVar8;
  bool bVar9;
  atomic<int> aVar10;
  int iVar11;
  ISlateStyle *pIVar12;
  FArguments *pFVar13;
  TSharedRef<STextBlock,1> *pTVar14;
  TSharedRef<SWidget,1> *pTVar15;
  FArguments *pFVar16;
  FSlot *pFVar17;
  FSlotArguments *pFVar18;
  FArguments *pFVar19;
  TSharedRef<SExpanderArrow,1> *pTVar20;
  TSharedRef<SHorizontalBox,1> *pTVar21;
  FArguments *pFVar22;
  undefined8 *puVar23;
  TSharedRef<SWidget_const_,1> *pTVar24;
  ulong64 uVar25;
  TSharedRef<SSpinBox<float>,1> *pTVar26;
  FArguments *pFVar27;
  TSlateDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs> *this_00;
  TSharedRef<SEditableTextBox,1> *pTVar28;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> *pTVar29;
  FArguments *pFVar30;
  FArguments *pFVar31;
  FText *pFVar32;
  TAttribute<FText> *pTVar33;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> *this_01;
  TSharedRef<SButton,1> *pTVar34;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> *this_02;
  TSharedRef<SBorder,1> *pTVar35;
  FText *pFVar36;
  FTextFormat *pFVar37;
  TReferenceControllerBase<1> *pTVar38;
  TReferenceControllerBase<1> *pTVar39;
  TReferenceControllerBase<1> *pTVar40;
  TStatId *pTVar41;
  bool bVar42;
  FArguments *local_res20;
  TSharedPtr<SEditableTextBox,1> local_39c8;
  T0RequiredArgs local_39b8;
  T0RequiredArgs local_39b7;
  T0RequiredArgs local_39b6;
  T0RequiredArgs local_39b5;
  T0RequiredArgs local_39b4;
  T0RequiredArgs local_39b3;
  T0RequiredArgs local_39b2;
  T0RequiredArgs local_39b1;
  FLLMScope local_39b0;
  FLLMScope local_39ac;
  FLLMScope local_39a8;
  FLLMScope local_39a4;
  SExpanderArrow *local_39a0;
  FSharedReferencer<1> local_3998;
  FText local_3990;
  STextBlock *local_3980;
  FSharedReferencer<1> local_3978;
  TSharedRef<SItemEditor,1> local_3970;
  FMemScope local_3960;
  FSlot *local_3958;
  FName local_3950;
  FMemScope local_3948;
  FName local_3940;
  FMemScope local_3938;
  FName local_3930;
  FMemScope local_3928;
  FSlot *local_3920;
  FName local_3918;
  T1RequiredArgs<TSharedRef<SItemEditor,1>_&&> local_3910;
  TAttribute<TOptional<float>_> local_3908;
  TAttribute<TOptional<float>_> local_38e0;
  TSharedRef<SWidget,1> local_38b8;
  TSharedRef<SWidget,1> local_38a8;
  FDestructionSentinel local_3898;
  FDestructionSentinel local_3880;
  undefined1 *local_3868;
  FDestructionSentinel local_3860;
  undefined1 *local_3848;
  FDestructionSentinel local_3840;
  undefined1 *local_3828;
  FDestructionSentinel local_3820;
  undefined1 *local_3808;
  FDestructionSentinel local_3800;
  undefined1 *local_37e8;
  FSlateFontInfo local_37e0;
  bool local_3780;
  undefined1 local_3778 [8];
  ForAnyElementType FStack_3770;
  ulonglong local_3768;
  TSharedRef<SWidget,1> local_3760;
  TSharedRef<SEditableTextBox,1> local_3750;
  code *local_3738;
  TReferenceControllerBase<1> *pTStack_3730;
  TSharedRef<STextBlock,1> local_3728;
  TSharedRef<SWidget_const_,1> local_3718;
  TSharedRef<SWidget,1> local_3708;
  TSharedRef<SBorder,1> local_36f8;
  TSharedRef<SButton,1> local_36e8;
  TSharedRef<STextBlock,1> local_36d8;
  FText local_36c8;
  TSharedRef<STextBlock,1> local_36b8;
  FText local_36a8;
  FName local_3698 [2];
  code *local_3688;
  TReferenceControllerBase<1> *pTStack_3680;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_3678;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_3660;
  TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<SItemEditor,1>_&&>_> local_3648;
  TSlateDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs> local_3630;
  TSharedRef<STextBlock,1> local_3618;
  TSharedRef<SWidget,1> local_3608;
  TSharedRef<SHorizontalBox,1> local_35f8;
  TSharedRef<SExpanderArrow,1> local_35e8;
  TSharedRef<SWidget_const_,1> local_35d8;
  TSharedRef<SWidget,1> local_35c8;
  TSharedRef<SSpinBox<float>,1> local_35b8;
  FSlateFontInfo local_35a8;
  code *local_3548;
  TReferenceControllerBase<1> *pTStack_3540;
  TSlateDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs> local_3538;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_3520;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_3508;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_34f0;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_34d8;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_34c0;
  FText local_34a8;
  FTextFormat local_3498;
  TAttribute<FSlateFontInfo> local_3488;
  TAttribute<FSlateFontInfo> local_3408;
  TAttribute<FSlateFontInfo> local_3388;
  undefined8 *local_3308 [2];
  TReferenceControllerBase<1> *local_32f8;
  undefined1 local_32d8 [32];
  undefined4 local_32b8;
  undefined1 local_32b4;
  FSlotArgumentsMixin local_32b0;
  undefined8 *local_3220 [2];
  TReferenceControllerBase<1> *local_3210;
  undefined1 local_31f0 [40];
  FSlotArgumentsMixin local_31c8;
  TAttribute<FText> local_3138;
  TAttribute<FText> local_3108;
  FArguments local_30d8;
  FArguments local_2ed0;
  FArguments local_2c70;
  FArguments local_2890;
  FArguments local_2350;
  FArguments local_1df8;
  FArguments local_18a0;
  FArguments local_1348;
  FArguments local_df0;
  FArguments local_730;
  undefined8 uStack_30;
  
  uStack_30 = 0x142fcd98a;
  pTVar40 = (TReferenceControllerBase<1> *)0x0;
  bVar7 = false;
  bVar6 = false;
  bVar42 = false;
  local_res20 = (FArguments *)((ulonglong)local_res20 & 0xffffffff00000000);
  pIVar12 = FAppStyle::Get();
  pcVar2 = *(code **)((longlong)*pIVar12 + 0x88);
  ::FName::FName(local_3698,L"NormalFont");
  (*pcVar2)(pIVar12,&local_35a8);
  bVar9 = ::FName::Equals(*param_1,L"Name");
  if (!bVar9) {
    bVar9 = ::FName::Equals(*param_1,L"Number");
    if (bVar9) {
      pFVar22 = SSpinBox<float>::FArguments::FArguments(&local_730);
      local_3908.Value.TypedValue = -5.0;
      local_3908.Value.bIsSet = true;
      local_3908.bIsSet = true;
      local_3908.Getter._0_8_ = 0;
      local_3908.Getter._8_8_ = 0;
      local_3908.Getter._16_8_ = 0;
      pFVar22 = SSpinBox<float>::FArguments::MinValue(pFVar22,&local_3908);
      local_38e0.Value.TypedValue = 800.0;
      local_38e0.Value.bIsSet = true;
      local_38e0.bIsSet = true;
      local_38e0.Getter._0_8_ = 0;
      local_38e0.Getter._8_8_ = 0;
      local_38e0.Getter._16_8_ = 0;
      pFVar22 = SSpinBox<float>::FArguments::MaxValue(pFVar22,&local_38e0);
      FSlateFontInfo::FSlateFontInfo(&local_3488.Value,&local_35a8);
      local_3488.bIsSet = true;
      local_3488.Getter._16_8_ = 0;
      local_3488.Getter._0_8_ = 0;
      local_3488.Getter._8_8_ = 0;
      pFVar22 = SSpinBox<float>::FArguments::Font(pFVar22,&local_3488);
      (pFVar22->_Value).bIsSet = true;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(pFVar22->_Value).Getter
                 ,(FWriteAccessScope *)&local_3880);
      local_3868 = &(pFVar22->_Value).Getter.field_0x8;
      puVar23 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_3868);
      pFVar31 = local_res20;
      if (puVar23 != (undefined8 *)0x0) {
        local_39c8.Object = (SEditableTextBox *)OnReadValue;
        local_39c8.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)((ulonglong)(uint)local_3990._12_4_ << 0x20);
        pTVar24 = TSharedFromThis<SWidget,1>::AsShared
                            ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_35d8);
        pTVar41 = &pTVar24->Object[-1].StatID;
        if (pTVar24->Object == (SWidget *)0x0) {
          pTVar41 = (TStatId *)0x0;
        }
        pFVar31 = (FArguments *)(pTVar24->SharedReferenceCount).ReferenceController;
        if (pFVar31 != (FArguments *)0x0) {
          LOCK();
          *(atomic<int> *)&pFVar31->_padding_ =
               (atomic<int>)((int)*(atomic<int> *)&pFVar31->_padding_ + 1);
          UNLOCK();
          LOCK();
          *(atomic<int> *)&pFVar31->_padding_ =
               (atomic<int>)((int)*(atomic<int> *)&pFVar31->_padding_ + 1);
          UNLOCK();
        }
        *puVar23 = &___7__TCommonDelegateInstanceState___A6AMXZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar25 = FDelegateHandle::GenerateNewID();
        puVar23[2] = uVar25;
        *puVar23 = &
                   ___7__TBaseSPMethodDelegateInstance__00__CBVSItemEditor___00__A6AMXZUFDefaultDelegateUserPolicy____V__6B_
        ;
        puVar23[3] = pTVar41;
        puVar23[4] = pFVar31;
        if (pFVar31 != (FArguments *)0x0) {
          LOCK();
          ((atomic<int> *)&pFVar31->_padding_)[1] =
               (atomic<int>)((int)((atomic<int> *)&pFVar31->_padding_)[1] + 1);
          UNLOCK();
        }
        pTVar40 = (TReferenceControllerBase<1> *)&DAT_00000007;
        puVar23[5] = local_39c8.Object;
        puVar23[6] = local_39c8.SharedReferenceCount.ReferenceController;
      }
      if (((ulonglong)pTVar40 & 4) != 0) {
        pTVar40 = (TReferenceControllerBase<1> *)(ulonglong)((uint)pTVar40 & 0xfffffffb);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar31);
      }
      if (((ulonglong)pTVar40 & 2) != 0) {
        pTVar40 = (TReferenceControllerBase<1> *)(ulonglong)((uint)pTVar40 & 0xfffffffd);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar31);
      }
      if (((ulonglong)pTVar40 & 1) != 0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_35d8.SharedReferenceCount.ReferenceController);
      }
      bVar7 = false;
      bVar6 = false;
      bVar42 = false;
      if (local_3880.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3880.Accessor,&local_3880);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar22->_OnValueChanged
                 ,(FWriteAccessScope *)&local_3860);
      local_3848 = &(pFVar22->_OnValueChanged).field_0x8;
      puVar23 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_3848);
      pFVar31 = local_res20;
      if (puVar23 != (undefined8 *)0x0) {
        local_39c8.Object = (SEditableTextBox *)OnWriteValue;
        local_39c8.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)((ulonglong)(uint)local_3990._12_4_ << 0x20);
        pTVar15 = TSharedFromThis<SWidget,1>::AsShared
                            ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_35c8);
        pTVar41 = &pTVar15->Object[-1].StatID;
        if (pTVar15->Object == (SWidget *)0x0) {
          pTVar41 = (TStatId *)0x0;
        }
        pFVar31 = (FArguments *)(pTVar15->SharedReferenceCount).ReferenceController;
        if (pFVar31 != (FArguments *)0x0) {
          LOCK();
          *(atomic<int> *)&pFVar31->_padding_ =
               (atomic<int>)((int)*(atomic<int> *)&pFVar31->_padding_ + 1);
          UNLOCK();
          LOCK();
          *(atomic<int> *)&pFVar31->_padding_ =
               (atomic<int>)((int)*(atomic<int> *)&pFVar31->_padding_ + 1);
          UNLOCK();
        }
        bVar7 = true;
        bVar6 = true;
        bVar42 = true;
        *puVar23 = &
                   ___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar25 = FDelegateHandle::GenerateNewID();
        puVar23[2] = uVar25;
        *puVar23 = &
                   ___7__TBaseSPMethodDelegateInstance__0A_VSItemEditor___00__A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        puVar23[3] = pTVar41;
        puVar23[4] = pFVar31;
        if (pFVar31 != (FArguments *)0x0) {
          LOCK();
          ((atomic<int> *)&pFVar31->_padding_)[1] =
               (atomic<int>)((int)((atomic<int> *)&pFVar31->_padding_)[1] + 1);
          UNLOCK();
        }
        puVar23[5] = local_39c8.Object;
        puVar23[6] = local_39c8.SharedReferenceCount.ReferenceController;
      }
      if (bVar42) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar31);
      }
      if (bVar6) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar31);
      }
      if (bVar7) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_35c8.SharedReferenceCount.ReferenceController);
      }
      if (local_3860.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3860.Accessor,&local_3860);
      }
      FLLMScope::FLLMScope
                (&local_39a4,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
      local_3940 = LLMTagDeclaration_UI_Slate.UniqueName;
      FMemScope::FMemScope(&local_3938,&local_3940,true);
      TSlateDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs>::
      TSlateDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs>
                (&local_3630,"SSpinBox<float>",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\STableViewTesting.cpp"
                 ,0x19c,&local_39b7);
      FMemScope::~FMemScope(&local_3938);
      FLLMScope::~FLLMScope(&local_39a4);
      pTVar26 = TSlateDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs>::operator<<=
                          (&local_3630,&local_35b8,pFVar22);
      __return_storage_ptr__->Object = (SWidget *)pTVar26->Object;
      pTVar40 = (pTVar26->SharedReferenceCount).ReferenceController;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar40;
      if (pTVar40 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar40->SharedReferenceCount = (atomic<int>)((int)pTVar40->SharedReferenceCount + 1);
        UNLOCK();
      }
      TSharedRef<SSpinBox<float>,1>::~TSharedRef<SSpinBox<float>,1>(&local_35b8);
      TSlateDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs>::
      ~TSlateDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs>(&local_3630);
      SSpinBox<float>::FArguments::~FArguments(&local_730);
    }
    else {
      bVar9 = ::FName::Equals(*param_1,L"TextField");
      if (bVar9) {
        pFVar27 = SEditableTextBox::FArguments::FArguments(&local_df0);
        FSlateFontInfo::FSlateFontInfo(&local_3408.Value,&local_35a8);
        local_3408.bIsSet = true;
        local_3408.Getter._16_8_ = 0;
        local_3408.Getter._0_8_ = 0;
        local_3408.Getter._8_8_ = 0;
        pFVar27 = SEditableTextBox::FArguments::Font(pFVar27,&local_3408);
        local_39c8.Object = (SEditableTextBox *)OnReadText;
        local_39c8.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)
             ((ulonglong)local_39c8.SharedReferenceCount.ReferenceController._4_4_ << 0x20);
        local_3548 = OnReadText;
        pTStack_3540 = local_39c8.SharedReferenceCount.ReferenceController;
        TAttribute<FText>::Bind<SItemEditor>(&pFVar27->_Text,this,(pmf_853f840b *)&local_3548);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &pFVar27->_OnTextChanged,(FWriteAccessScope *)&local_3840);
        local_3828 = &(pFVar27->_OnTextChanged).field_0x8;
        puVar23 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_3828);
        pFVar31 = local_res20;
        if (puVar23 != (undefined8 *)0x0) {
          local_39c8.Object = (SEditableTextBox *)OnTextChanged;
          local_39c8.SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)((ulonglong)(uint)local_3990._12_4_ << 0x20);
          pTVar15 = TSharedFromThis<SWidget,1>::AsShared
                              ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_3760);
          pFVar31 = (FArguments *)(pTVar15->SharedReferenceCount).ReferenceController;
          pTVar41 = &pTVar15->Object[-1].StatID;
          if (pTVar15->Object == (SWidget *)0x0) {
            pTVar41 = (TStatId *)0x0;
          }
          if (pFVar31 != (FArguments *)0x0) {
            LOCK();
            *(atomic<int> *)&pFVar31->_padding_ =
                 (atomic<int>)((int)*(atomic<int> *)&pFVar31->_padding_ + 1);
            UNLOCK();
            LOCK();
            *(atomic<int> *)&pFVar31->_padding_ =
                 (atomic<int>)((int)*(atomic<int> *)&pFVar31->_padding_ + 1);
            UNLOCK();
          }
          *puVar23 = &
                     ___7__TCommonDelegateInstanceState___A6AXAEBVFText___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar25 = FDelegateHandle::GenerateNewID();
          puVar23[2] = uVar25;
          *puVar23 = &
                     ___7__TBaseSPMethodDelegateInstance__0A_VSItemEditor___00__A6AXAEBVFText___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          puVar23[3] = pTVar41;
          puVar23[4] = pFVar31;
          if (pFVar31 != (FArguments *)0x0) {
            LOCK();
            ((atomic<int> *)&pFVar31->_padding_)[1] =
                 (atomic<int>)((int)((atomic<int> *)&pFVar31->_padding_)[1] + 1);
            UNLOCK();
          }
          pTVar40 = (TReferenceControllerBase<1> *)0x1c0;
          puVar23[5] = local_39c8.Object;
          puVar23[6] = local_39c8.SharedReferenceCount.ReferenceController;
        }
        if ((uint)pTVar40 >> 8 != 0) {
          pTVar40 = (TReferenceControllerBase<1> *)(ulonglong)((uint)pTVar40 & 0xfffffeff);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)pFVar31);
        }
        if ((char)pTVar40 < '\0') {
          pTVar40 = (TReferenceControllerBase<1> *)(ulonglong)((uint)pTVar40 & 0xffffff7f);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)pFVar31);
        }
        if (((ulonglong)pTVar40 & 0x40) != 0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_3760.SharedReferenceCount.ReferenceController);
        }
        if (local_3840.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3840.Accessor,&local_3840);
        }
        this_00 = MakeTDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs>
                            (&local_3538,"SEditableTextBox",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\STableViewTesting.cpp"
                             ,0x1a6,&local_39b6);
        pSVar5 = (this_00->_Widget).Object;
        pTVar40 = (this_00->_Widget).SharedReferenceCount.ReferenceController;
        if (pTVar40 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar40->SharedReferenceCount = (atomic<int>)((int)pTVar40->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_39c8.Object = (this->MyTextBox).Object;
        local_39c8.SharedReferenceCount.ReferenceController =
             (this->MyTextBox).SharedReferenceCount.ReferenceController;
        (this->MyTextBox).Object = pSVar5;
        (this->MyTextBox).SharedReferenceCount.ReferenceController = pTVar40;
        TSharedPtr<SEditableTextBox,1>::~TSharedPtr<SEditableTextBox,1>(&local_39c8);
        pTVar28 = TSlateDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs>::operator<<=
                            (this_00,&local_3750,pFVar27);
        __return_storage_ptr__->Object = (SWidget *)pTVar28->Object;
        pTVar40 = (pTVar28->SharedReferenceCount).ReferenceController;
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar40;
        if (pTVar40 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar40->SharedReferenceCount = (atomic<int>)((int)pTVar40->SharedReferenceCount + 1);
          UNLOCK();
        }
        TSharedRef<SEditableTextBox,1>::~TSharedRef<SEditableTextBox,1>(&local_3750);
        TSlateDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs>::
        ~TSlateDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs>(&local_3538);
        SEditableTextBox::FArguments::~FArguments(&local_df0);
      }
      else {
        bVar9 = ::FName::Equals(*param_1,L"TextBlock");
        if (bVar9) {
          pFVar13 = STextBlock::FArguments::FArguments(&local_1df8);
          FSlateFontInfo::FSlateFontInfo(&local_3388.Value,&local_35a8);
          local_3388.bIsSet = true;
          local_3388.Getter._16_8_ = 0;
          local_3388.Getter._0_8_ = 0;
          local_3388.Getter._8_8_ = 0;
          pFVar13 = STextBlock::FArguments::Font(pFVar13,&local_3388);
          local_39c8.SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)
               ((ulonglong)local_39c8.SharedReferenceCount.ReferenceController._4_4_ << 0x20);
          local_39c8.Object = (SEditableTextBox *)OnReadText;
          local_3738 = OnReadText;
          pTStack_3730 = local_39c8.SharedReferenceCount.ReferenceController;
          TAttribute<FText>::Bind<SItemEditor>(&pFVar13->_Text,this,(pmf_853f840b *)&local_3738);
          pTVar29 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                              (&local_3520,"STextBlock",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\STableViewTesting.cpp"
                               ,0x1ad,&local_39b5);
          pTVar14 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                              (pTVar29,&local_3728,pFVar13);
          __return_storage_ptr__->Object = (SWidget *)pTVar14->Object;
          pTVar40 = (pTVar14->SharedReferenceCount).ReferenceController;
          (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar40;
          if (pTVar40 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar40->SharedReferenceCount = (atomic<int>)((int)pTVar40->SharedReferenceCount + 1);
            UNLOCK();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_3728.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_3520._Widget.SharedReferenceCount.ReferenceController);
          pFVar13 = &local_1df8;
        }
        else {
          bVar9 = ::FName::Equals(*param_1,L"AddChild");
          if (bVar9) {
            pFVar30 = SBorder::FArguments::FArguments(&local_2c70);
            pFVar30->_HAlign = HAlign_Center;
            (pFVar30->_Padding).bIsSet = true;
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                       &(pFVar30->_Padding).Getter,(FWriteAccessScope *)&local_3820);
            local_3808 = &(pFVar30->_Padding).Getter.field_0x8;
            puVar23 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_3808);
            pFVar31 = local_res20;
            if (puVar23 != (undefined8 *)0x0) {
              local_39c8.Object = (SEditableTextBox *)GetVariableHeight;
              local_39c8.SharedReferenceCount.ReferenceController =
                   (TReferenceControllerBase<1> *)((ulonglong)(uint)local_3990._12_4_ << 0x20);
              pTVar24 = TSharedFromThis<SWidget,1>::AsShared
                                  ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_3718);
              pTVar41 = &pTVar24->Object[-1].StatID;
              if (pTVar24->Object == (SWidget *)0x0) {
                pTVar41 = (TStatId *)0x0;
              }
              pFVar31 = (FArguments *)(pTVar24->SharedReferenceCount).ReferenceController;
              if (pFVar31 != (FArguments *)0x0) {
                LOCK();
                *(atomic<int> *)&pFVar31->_padding_ =
                     (atomic<int>)((int)*(atomic<int> *)&pFVar31->_padding_ + 1);
                UNLOCK();
                LOCK();
                *(atomic<int> *)&pFVar31->_padding_ =
                     (atomic<int>)((int)*(atomic<int> *)&pFVar31->_padding_ + 1);
                UNLOCK();
              }
              *puVar23 = &
                         ___7__TCommonDelegateInstanceState___A6A_AUFMargin__XZUFDefaultDelegateUserPolicy____V__6B_
              ;
              uVar25 = FDelegateHandle::GenerateNewID();
              puVar23[2] = uVar25;
              *puVar23 = &
                         ___7__TBaseSPMethodDelegateInstance__00__CBVSItemEditor___00__A6A_AUFMargin__XZUFDefaultDelegateUserPolicy____V__6B_
              ;
              puVar23[3] = pTVar41;
              puVar23[4] = pFVar31;
              if (pFVar31 != (FArguments *)0x0) {
                LOCK();
                ((atomic<int> *)&pFVar31->_padding_)[1] =
                     (atomic<int>)((int)((atomic<int> *)&pFVar31->_padding_)[1] + 1);
                UNLOCK();
              }
              bVar7 = true;
              bVar6 = true;
              bVar42 = true;
              puVar23[5] = local_39c8.Object;
              puVar23[6] = local_39c8.SharedReferenceCount.ReferenceController;
            }
            if (bVar42) {
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        ((TReferenceControllerBase<1> *)pFVar31);
            }
            if (bVar6) {
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        ((TReferenceControllerBase<1> *)pFVar31);
            }
            if (bVar7) {
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_3718.SharedReferenceCount.ReferenceController);
            }
            bVar7 = false;
            bVar6 = false;
            bVar42 = false;
            if (local_3820.bDestroyed == false) {
              FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3820.Accessor,&local_3820);
            }
            pFVar31 = SButton::FArguments::FArguments(&local_2890);
            pFVar31->_TouchMethod = PreciseTap;
            local_res20 = pFVar31;
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                       &pFVar31->_OnClicked,(FWriteAccessScope *)&local_3800);
            local_37e8 = &(pFVar31->_OnClicked).field_0x8;
            puVar23 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_37e8);
            pFVar31 = local_res20;
            if (puVar23 != (undefined8 *)0x0) {
              local_39c8.Object = (SEditableTextBox *)OnAddChild;
              local_39c8.SharedReferenceCount.ReferenceController =
                   (TReferenceControllerBase<1> *)((ulonglong)(uint)local_3990._12_4_ << 0x20);
              pTVar15 = TSharedFromThis<SWidget,1>::AsShared
                                  ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_3708);
              pTVar41 = &pTVar15->Object[-1].StatID;
              if (pTVar15->Object == (SWidget *)0x0) {
                pTVar41 = (TStatId *)0x0;
              }
              pFVar31 = (FArguments *)(pTVar15->SharedReferenceCount).ReferenceController;
              if (pFVar31 != (FArguments *)0x0) {
                LOCK();
                *(int *)&pFVar31->_padding_ = (int)pFVar31->_padding_ + 1;
                UNLOCK();
                LOCK();
                *(int *)&pFVar31->_padding_ = (int)pFVar31->_padding_ + 1;
                UNLOCK();
              }
              bVar7 = true;
              bVar6 = true;
              bVar42 = true;
              *puVar23 = &
                         ___7__TCommonDelegateInstanceState___A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
              ;
              uVar25 = FDelegateHandle::GenerateNewID();
              puVar23[2] = uVar25;
              *puVar23 = &
                         ___7__TBaseSPMethodDelegateInstance__0A_VSItemEditor___00__A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
              ;
              puVar23[3] = pTVar41;
              puVar23[4] = pFVar31;
              if (pFVar31 != (FArguments *)0x0) {
                LOCK();
                puVar1 = (undefined1 *)((longlong)&pFVar31->_padding_ + 4);
                *(int *)puVar1 = *(int *)puVar1 + 1;
                UNLOCK();
              }
              puVar23[5] = local_39c8.Object;
              puVar23[6] = local_39c8.SharedReferenceCount.ReferenceController;
            }
            if (bVar42) {
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        ((TReferenceControllerBase<1> *)pFVar31);
            }
            if (bVar6) {
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        ((TReferenceControllerBase<1> *)pFVar31);
            }
            if (bVar7) {
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_3708.SharedReferenceCount.ReferenceController);
            }
            if (local_3800.bDestroyed == false) {
              FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3800.Accessor,&local_3800);
            }
            pFVar13 = STextBlock::FArguments::FArguments(&local_18a0);
            pFVar32 = FText::AsLocalizable_Advanced_LocText
                                (&local_36c8,L"STableViewTesting",L"AddChildButtonText",L"+");
            pTVar33 = TAttribute<FText>::TAttribute<FText>(&local_3138,pFVar32);
            pFVar13 = STextBlock::FArguments::Text(pFVar13,pTVar33);
            pTVar29 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                                (&local_34d8,"STextBlock",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\STableViewTesting.cpp"
                                 ,0x1ba,&local_39b4);
            pTVar14 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                                (pTVar29,&local_36d8,pFVar13);
            pTVar40 = (pTVar14->SharedReferenceCount).ReferenceController;
            local_38b8.Object = (SWidget *)pTVar14->Object;
            if (pTVar40 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar40->SharedReferenceCount = (atomic<int>)((int)pTVar40->SharedReferenceCount + 1);
              UNLOCK();
            }
            local_38b8.SharedReferenceCount.ReferenceController = pTVar40;
            pFVar31 = SButton::FArguments::operator[](local_res20,&local_38b8);
            this_01 = MakeTDecl<SButton,RequiredArgs::T0RequiredArgs>
                                (&local_34f0,"SButton",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\STableViewTesting.cpp"
                                 ,0x1b6,&local_39b3);
            pTVar34 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                                (this_01,&local_36e8,pFVar31);
            pTVar3 = (pTVar34->SharedReferenceCount).ReferenceController;
            local_38a8.Object = (SWidget *)pTVar34->Object;
            if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
              UNLOCK();
            }
            local_38a8.SharedReferenceCount.ReferenceController = pTVar3;
            pFVar30 = SBorder::FArguments::operator[](pFVar30,&local_38a8);
            this_02 = MakeTDecl<SBorder,RequiredArgs::T0RequiredArgs>
                                (&local_3508,"SBorder",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\STableViewTesting.cpp"
                                 ,0x1b2,&local_39b2);
            pTVar35 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                                (this_02,&local_36f8,pFVar30);
            __return_storage_ptr__->Object = (SWidget *)pTVar35->Object;
            pTVar39 = (pTVar35->SharedReferenceCount).ReferenceController;
            (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar39;
            if (pTVar39 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar39->SharedReferenceCount = (atomic<int>)((int)pTVar39->SharedReferenceCount + 1);
              UNLOCK();
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_36f8.SharedReferenceCount.ReferenceController);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_3508._Widget.SharedReferenceCount.ReferenceController);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar3);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_36e8.SharedReferenceCount.ReferenceController);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_34f0._Widget.SharedReferenceCount.ReferenceController);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar40);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_36d8.SharedReferenceCount.ReferenceController);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_34d8._Widget.SharedReferenceCount.ReferenceController);
            if (local_36c8.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_36c8.TextData.Reference + 0x10))();
            }
            STextBlock::FArguments::~FArguments(&local_18a0);
            SButton::FArguments::~FArguments(&local_2890);
            SBorder::FArguments::~FArguments(&local_2c70);
            goto LAB_142fcedf0;
          }
          pFVar13 = STextBlock::FArguments::FArguments(&local_1348);
          pFVar32 = FText::FromName(&local_34a8,param_1);
          pFVar36 = FText::AsLocalizable_Advanced_LocText
                              (&local_3990,L"STableViewTesting",L"UnsupprtedColumnText",
                               L"Unsupported Column: {0}");
          pFVar37 = FTextFormat::FTextFormat(&local_3498,pFVar36,Default);
          pFVar32 = FText::Format<FText>(&local_36a8,pFVar37,pFVar32);
          pTVar33 = TAttribute<FText>::TAttribute<FText>(&local_3108,pFVar32);
          pFVar13 = STextBlock::FArguments::Text(pFVar13,pTVar33);
          pTVar29 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                              (&local_34c0,"STextBlock",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\STableViewTesting.cpp"
                               ,0x1c2,&local_39b1);
          pTVar14 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                              (pTVar29,&local_36b8,pFVar13);
          __return_storage_ptr__->Object = (SWidget *)pTVar14->Object;
          pTVar40 = (pTVar14->SharedReferenceCount).ReferenceController;
          (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar40;
          if (pTVar40 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar40->SharedReferenceCount = (atomic<int>)((int)pTVar40->SharedReferenceCount + 1);
            UNLOCK();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_36b8.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_34c0._Widget.SharedReferenceCount.ReferenceController);
          if (local_36a8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_36a8.TextData.Reference + 0x10))();
          }
          if (local_3990.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_3990.TextData.Reference + 0x10))();
          }
          pFVar13 = &local_1348;
        }
        STextBlock::FArguments::~FArguments(pFVar13);
      }
    }
    goto LAB_142fcedf0;
  }
  pFVar13 = STextBlock::FArguments::FArguments(&local_2350);
  FSlateFontInfo::FSlateFontInfo(&local_37e0,&local_35a8);
  local_3780 = true;
  local_3768 = 0;
  local_3778 = (undefined1  [8])0x0;
  FStack_3770.Data = (FScriptContainerElement *)0x0;
  FSlateFontInfo::operator=(&(pFVar13->_Font).Value,&local_37e0);
  (pFVar13->_Font).bIsSet = local_3780;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar13->_Font).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_3778);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_3778,
             (FWriteAccessScope *)&local_3898);
  if (((int)local_3768 != 0) && (FStack_3770.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_3770.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_3770,0,0,0x10);
    local_3768 = local_3768 & 0xffffffff00000000;
  }
  if (local_3898.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3898.Accessor,&local_3898);
  }
  if (FStack_3770.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_3770.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3778);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_37e0.CompositeFont.SharedReferenceCount.ReferenceController);
  local_39c8.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)
       ((ulonglong)local_39c8.SharedReferenceCount.ReferenceController._4_4_ << 0x20);
  local_39c8.Object = (SEditableTextBox *)OnReadText;
  local_3688 = OnReadText;
  pTStack_3680 = local_39c8.SharedReferenceCount.ReferenceController;
  TAttribute<FText>::Bind<SItemEditor>(&pFVar13->_Text,this,(pmf_853f840b *)&local_3688);
  FLLMScope::FLLMScope(&local_39b0,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_3930 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_3928,&local_3930,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            (&local_3678,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\STableViewTesting.cpp"
             ,0x17e,(T0RequiredArgs *)&local_res20);
  FMemScope::~FMemScope(&local_3928);
  FLLMScope::~FLLMScope(&local_39b0);
  pTVar14 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_3678,&local_3618,pFVar13);
  pTVar3 = (pTVar14->SharedReferenceCount).ReferenceController;
  pSVar4 = pTVar14->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3618.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3678._Widget.SharedReferenceCount.ReferenceController);
  STextBlock::FArguments::~FArguments(&local_2350);
  pTVar39 = (TReferenceControllerBase<1> *)this->_padding_;
  pTVar38 = pTVar39;
  if (pTVar39 == (TReferenceControllerBase<1> *)0x0) {
LAB_142fcdc25:
    bVar42 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    pTVar39 = pTVar38;
    if (bVar42) {
      pcVar2 = (code *)swi(3);
      pTVar15 = (TSharedRef<SWidget,1> *)(*pcVar2)();
      return pTVar15;
    }
  }
  else {
    aVar8 = pTVar39->SharedReferenceCount;
    do {
      pTVar38 = pTVar40;
      if (aVar8 == (atomic<int>)0x0) goto LAB_142fcdc25;
      LOCK();
      aVar10 = pTVar39->SharedReferenceCount;
      bVar42 = aVar8 == aVar10;
      if (bVar42) {
        pTVar39->SharedReferenceCount = (atomic<int>)((int)aVar8 + 1);
        aVar10 = aVar8;
      }
      UNLOCK();
      aVar8 = aVar10;
    } while (!bVar42);
    pTVar40 = (TReferenceControllerBase<1> *)this->_padding_;
    pTVar38 = pTVar39;
    if (pTVar40 == (TReferenceControllerBase<1> *)0x0) goto LAB_142fcdc25;
  }
  iVar11 = (**(code **)(pTVar40->_padding_ + 0xe0))(pTVar40);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar39);
  if (iVar11 == 2) {
    pFVar16 = SHorizontalBox::FArguments::FArguments(&local_30d8);
    pFVar17 = ::operator_new(0x58);
    local_3920 = (FSlot *)0x0;
    if (pFVar17 != (FSlot *)0x0) {
      *(undefined8 *)pFVar17 = 0;
      *(undefined8 *)&pFVar17->field_0x8 = 0;
      *(undefined8 *)&pFVar17->field_0x10 = 0;
      *(undefined8 *)&pFVar17->field_0x18 = 0;
      *(undefined8 *)&pFVar17->field_0x20 = 0;
      *(undefined8 *)&pFVar17->field_0x28 = 0;
      *(undefined8 *)&pFVar17->field_0x30 = 0;
      *(undefined8 *)&pFVar17->field_0x38 = 0;
      *(undefined8 *)&pFVar17->field_0x40 = 0;
      *(undefined8 *)&pFVar17->field_0x48 = 0;
      *(undefined8 *)&pFVar17->field_0x50 = 0;
      local_3920 = SHorizontalBox::FSlot::FSlot(pFVar17);
    }
    SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
              ((FSlotArguments *)local_3220,(FSlot *)&local_3920);
    pFVar18 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth((FSlotArguments *)local_3220);
    pFVar19 = SExpanderArrow::FArguments::FArguments(&local_2ed0);
    pTVar15 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_3608);
    if (pTVar15->Object == (SWidget *)0x0) {
      local_3970.Object = (SItemEditor *)0x0;
    }
    else {
      local_3970.Object = (SItemEditor *)&pTVar15->Object[-1].StatID;
    }
    local_3970.SharedReferenceCount.ReferenceController =
         (pTVar15->SharedReferenceCount).ReferenceController;
    if (local_3970.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_3970.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_3970.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3608.SharedReferenceCount.ReferenceController);
    local_3910.Arg0 = &local_3970;
    FLLMScope::FLLMScope(&local_39ac,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_3918 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_3960,&local_3918,true);
    TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<SItemEditor,1>_&&>_>::
    TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<SItemEditor,1>_&&>_>
              (&local_3648,"SExpanderArrow",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\STableViewTesting.cpp"
               ,0x18a,&local_3910);
    FMemScope::~FMemScope(&local_3960);
    FLLMScope::~FLLMScope(&local_39ac);
    pTVar20 = TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<SItemEditor,1>_&&>_>
              ::operator<<=(&local_3648,&local_35e8,pFVar19);
    pTVar40 = (pTVar20->SharedReferenceCount).ReferenceController;
    local_39a0 = pTVar20->Object;
    if (pTVar40 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar40->SharedReferenceCount = (atomic<int>)((int)pTVar40->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar40->SharedReferenceCount = (atomic<int>)((int)pTVar40->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_3998.ReferenceController = pTVar40;
    if ((SExpanderArrow **)&pFVar18->field_0x8 != &local_39a0) {
      *(SExpanderArrow **)&pFVar18->field_0x8 = local_39a0;
      local_39a0 = (SExpanderArrow *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&pFVar18->field_0x10,&local_3998);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3998.ReferenceController);
    pFVar16 = SHorizontalBox::FArguments::operator+(pFVar16,pFVar18);
    pFVar17 = ::operator_new(0x58);
    local_3958 = (FSlot *)0x0;
    if (pFVar17 != (FSlot *)0x0) {
      *(undefined8 *)pFVar17 = 0;
      *(undefined8 *)&pFVar17->field_0x8 = 0;
      *(undefined8 *)&pFVar17->field_0x10 = 0;
      *(undefined8 *)&pFVar17->field_0x18 = 0;
      *(undefined8 *)&pFVar17->field_0x20 = 0;
      *(undefined8 *)&pFVar17->field_0x28 = 0;
      *(undefined8 *)&pFVar17->field_0x30 = 0;
      *(undefined8 *)&pFVar17->field_0x38 = 0;
      *(undefined8 *)&pFVar17->field_0x40 = 0;
      *(undefined8 *)&pFVar17->field_0x48 = 0;
      *(undefined8 *)&pFVar17->field_0x50 = 0;
      local_3958 = SHorizontalBox::FSlot::FSlot(pFVar17);
    }
    SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
              ((FSlotArguments *)local_3308,(FSlot *)&local_3958);
    local_32b8 = 2;
    local_32b4 = 1;
    pFVar18 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth((FSlotArguments *)local_3308);
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_3980 = pSVar4;
    local_3978.ReferenceController = pTVar3;
    if ((STextBlock **)&pFVar18->field_0x8 != &local_3980) {
      *(STextBlock **)&pFVar18->field_0x8 = pSVar4;
      local_3980 = (STextBlock *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&pFVar18->field_0x10,&local_3978);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3978.ReferenceController);
    pFVar16 = SHorizontalBox::FArguments::operator+(pFVar16,pFVar18);
    FLLMScope::FLLMScope(&local_39a8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_3950 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_3948,&local_3950,true);
    TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
              (&local_3660,"SHorizontalBox",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\STableViewTesting.cpp"
               ,0x186,&local_39b8);
    FMemScope::~FMemScope(&local_3948);
    FLLMScope::~FLLMScope(&local_39a8);
    pTVar21 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                        (&local_3660,&local_35f8,pFVar16);
    __return_storage_ptr__->Object = (SWidget *)pTVar21->Object;
    pTVar39 = (pTVar21->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar39;
    if (pTVar39 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar39->SharedReferenceCount = (atomic<int>)((int)pTVar39->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_35f8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3660._Widget.SharedReferenceCount.ReferenceController);
    TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
              (&local_32b0);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_32d8);
    if ((void *)local_32d8._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_32d8._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_32d8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_32f8);
    if (local_3308[0] != (undefined8 *)0x0) {
      (**(code **)*local_3308[0])(local_3308[0],1);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar40);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_35e8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3648._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3970.SharedReferenceCount.ReferenceController);
    SExpanderArrow::FArguments::~FArguments(&local_2ed0);
    TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
              (&local_31c8);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_31f0);
    if ((void *)local_31f0._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_31f0._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_31f0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_3210);
    if (local_3220[0] != (undefined8 *)0x0) {
      (**(code **)*local_3220[0])(local_3220[0],1);
    }
    DestructItems<SHorizontalBox::FSlot::FSlotArguments,int>
              ((FSlotArguments *)local_30d8._Slots.AllocatorInstance.Data,local_30d8._Slots.ArrayNum
              );
    if ((FSlotArguments *)local_30d8._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
      FMemory::Free(local_30d8._Slots.AllocatorInstance.Data);
    }
    FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_30d8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  else {
    __return_storage_ptr__->Object = (SWidget *)pSVar4;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
LAB_142fcedf0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_35a8.CompositeFont.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// GetVariableHeight @ 142fdb370

/* WARNING: Enum "Type": Some values do not have unique names */

FMargin * __thiscall
SItemEditor::GetVariableHeight(SItemEditor *this,FMargin *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FMargin *pFVar3;
  
  if ((this->ItemToEdit).Object == (FTestData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FMargin *)(*pcVar1)();
      return pFVar3;
    }
  }
  __return_storage_ptr__->Left = 0.0;
  __return_storage_ptr__->Top = 0.0;
  __return_storage_ptr__->Right = 0.0;
  __return_storage_ptr__->Bottom = ((this->ItemToEdit).Object)->Number;
  return __return_storage_ptr__;
}

// OnAddChild @ 142fedf80

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall SItemEditor::OnAddChild(SItemEditor *this,FReply *__return_storage_ptr__)

{
  FTestData *this_00;
  code *pcVar1;
  bool bVar2;
  FReply *pFVar3;
  FText *pFVar4;
  TSharedRef<FTestData,1> *pTVar5;
  FText local_28;
  TSharedRef<FTestData,1> local_18;
  
  if ((this->ItemToEdit).Object == (FTestData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FReply *)(*pcVar1)();
      return pFVar3;
    }
  }
  this_00 = (this->ItemToEdit).Object;
  pFVar4 = FText::AsLocalizable_Advanced_LocText
                     (&local_28,L"STableViewTesting",L"NewChild",L"New Child");
  pTVar5 = FTestData::Make(&local_18,pFVar4);
  FTestData::AddChild(this_00,pTVar5);
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  FReply::FReply(__return_storage_ptr__,true);
  return __return_storage_ptr__;
}

// OnReadText @ 142ff7f00

/* WARNING: Enum "Type": Some values do not have unique names */

FText * __thiscall SItemEditor::OnReadText(SItemEditor *this,FText *__return_storage_ptr__)

{
  FTestData *pFVar1;
  ITextData *pIVar2;
  FText *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar1 = (this->ItemToEdit).Object;
  if (pFVar1 != (FTestData *)0x0) {
    (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
    pIVar2 = (pFVar1->Name).TextData.Reference;
    (__return_storage_ptr__->TextData).Reference = pIVar2;
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res8);
    }
    __return_storage_ptr__->Flags = (pFVar1->Name).Flags;
    return __return_storage_ptr__;
  }
  pFVar3 = FText::GetEmpty();
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar2 = (pFVar3->TextData).Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar2;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res8);
  }
  __return_storage_ptr__->Flags = pFVar3->Flags;
  return __return_storage_ptr__;
}

// OnReadValue @ 142ff8090

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall SItemEditor::OnReadValue(SItemEditor *this)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  
  if ((this->ItemToEdit).Object != (FTestData *)0x0) {
    return ((this->ItemToEdit).Object)->Number;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    fVar3 = (float)(*pcVar1)();
    return fVar3;
  }
  return ((this->ItemToEdit).Object)->Number;
}

// OnTextChanged @ 142ff8670

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SItemEditor::OnTextChanged(SItemEditor *this,FText *param_1)

{
  FTestData *pFVar1;
  ITextData *pIVar2;
  ITextData *pIVar3;
  undefined1 auStackX_8 [8];
  
  pFVar1 = (this->ItemToEdit).Object;
  if (pFVar1 == (FTestData *)0x0) {
    return;
  }
  pIVar2 = (param_1->TextData).Reference;
  pIVar3 = (pFVar1->Name).TextData.Reference;
  if (pIVar3 != pIVar2) {
    (pFVar1->Name).TextData.Reference = pIVar2;
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 8))(pIVar2,auStackX_8);
    }
    if (pIVar3 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
    }
    (pFVar1->Name).Flags = param_1->Flags;
    return;
  }
  (pFVar1->Name).Flags = param_1->Flags;
  return;
}

// OnWriteValue @ 142ff9650

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SItemEditor::OnWriteValue(SItemEditor *this,float param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->ItemToEdit).Object != (FTestData *)0x0) {
    ((this->ItemToEdit).Object)->Number = param_1;
    return;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  ((this->ItemToEdit).Object)->Number = param_1;
  return;
}

