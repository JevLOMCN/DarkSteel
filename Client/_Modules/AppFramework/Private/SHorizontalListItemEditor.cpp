// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 6

// Construct @ 142f723d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SHorizontalListItemEditor::Construct
          (SHorizontalListItemEditor *this,FArguments *param_1,TSharedRef<STableViewBase,1> *param_2
          )

{
  TReferenceControllerBase<1> *pTVar1;
  FTestData *pFVar2;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  undefined8 uVar11;
  FArguments *pFVar12;
  ISlateStyle *pIVar13;
  FArguments *pFVar14;
  FName *pFVar15;
  undefined8 *puVar16;
  TSharedRef<SWidget_const_,1> *pTVar17;
  ulong64 uVar18;
  FArguments *pFVar19;
  FSlotArguments *pFVar20;
  FArguments *pFVar21;
  TSharedRef<STextBlock,1> *pTVar22;
  FSizeParam *pFVar23;
  FArguments *pFVar24;
  TSharedRef<SWidget,1> *pTVar25;
  TSharedRef<SSpinBox<float>,1> *pTVar26;
  FArguments *this_00;
  FMemScope FVar27;
  TSharedRef<SEditableTextBox,1> *pTVar28;
  TSharedRef<SVerticalBox,1> *pTVar29;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> *this_01;
  TSharedRef<SBorder,1> *pTVar30;
  TStatId *pTVar31;
  SHorizontalListItemEditor *pSVar32;
  TStatId *pTVar33;
  undefined4 local_res10 [2];
  T0RequiredArgs local_res20 [8];
  FName local_2c08;
  undefined4 uStack_2c00;
  uint uStack_2bfc;
  T0RequiredArgs local_2bf8;
  T0RequiredArgs local_2bf7;
  T0RequiredArgs local_2bf6;
  T0RequiredArgs local_2bf5 [5];
  FMemScope local_2bf0;
  FLLMScope local_2be8;
  FLLMScope local_2be4;
  FLLMScope local_2be0;
  FLLMScope local_2bdc;
  FLLMScope local_2bd8 [5];
  FName local_2bc8;
  undefined4 uStack_2bc0;
  uint uStack_2bbc;
  FName local_2bb8;
  FName local_2bb0;
  FMemScope local_2ba8;
  SSpinBox<float> *local_2ba0;
  FSharedReferencer<1> local_2b98;
  STextBlock *local_2b90;
  FName local_2b88;
  float local_2b80;
  undefined1 local_2b7c;
  undefined1 local_2b78;
  undefined1 local_2b70 [8];
  ForAnyElementType FStack_2b68;
  ulonglong local_2b60;
  float local_2b58;
  undefined1 local_2b54;
  undefined1 local_2b50;
  undefined1 local_2b48 [8];
  ForAnyElementType FStack_2b40;
  ulonglong local_2b38;
  FSlateBrush *local_2b30;
  undefined1 local_2b28;
  undefined1 local_2b20 [8];
  ForAnyElementType FStack_2b18;
  ulonglong local_2b10;
  undefined8 local_2b08;
  undefined8 uStack_2b00;
  uint local_2af8;
  undefined1 local_2af4;
  undefined1 local_2af0 [8];
  ForAnyElementType FStack_2ae8;
  ulonglong local_2ae0;
  TSharedRef<SWidget,1> local_2ad8;
  TSharedRef<STextBlock,1> local_2ac8;
  SVerticalBox *local_2ab8;
  TReferenceControllerBase<1> *pTStack_2ab0;
  FName local_2aa8;
  FMemScope local_2aa0;
  FName local_2a98;
  FMemScope local_2a90;
  FMemScope local_2a88;
  FArguments *local_2a80;
  TReferenceControllerBase<1> *pTStack_2a78;
  TSharedRef<SWidget,1> local_2a70;
  TSharedRef<SWidget,1> local_2a60;
  FDestructionSentinel local_2a50;
  FDestructionSentinel local_2a38;
  FDestructionSentinel local_2a20;
  FDestructionSentinel local_2a08;
  FDestructionSentinel local_29f0;
  FDestructionSentinel local_29d8;
  FDestructionSentinel local_29c0;
  undefined1 *local_29a8;
  FDestructionSentinel local_29a0;
  undefined1 *local_2988;
  FDestructionSentinel local_2980;
  undefined1 *local_2968;
  FDestructionSentinel local_2960;
  FDelegateAllocation *local_2948;
  FSlateFontInfo local_2940;
  bool local_28e0;
  undefined1 local_28d8 [8];
  ForAnyElementType FStack_28d0;
  ulonglong local_28c8;
  FSlateFontInfo local_28c0;
  bool local_2860;
  undefined1 local_2858 [8];
  ForAnyElementType FStack_2850;
  ulonglong local_2848;
  TSharedRef<SWidget,1> local_2840;
  code *local_2828;
  longlong lStack_2820;
  TSharedRef<SWidget,1> local_2818;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_2808;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_27f0;
  TSlateDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs> local_27d8;
  TSlateDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs> local_27c0;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_27a8;
  code *local_2788;
  TReferenceControllerBase<1> *pTStack_2780;
  TSharedRef<SBorder,1> local_2778;
  TSharedRef<SVerticalBox,1> local_2768;
  TSharedRef<STextBlock,1> local_2758;
  TSharedRef<SEditableTextBox,1> local_2748;
  TSharedRef<SSpinBox<float>,1> local_2738;
  FName local_2728;
  TSharedRef<SWidget_const_,1> local_2720;
  code *local_2708;
  longlong lStack_2700;
  TSharedRef<SWidget_const_,1> local_26f8;
  undefined1 local_26e8 [16];
  undefined1 local_26d8 [32];
  undefined1 local_26b8 [24];
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_26a0;
  FSlateFontInfo local_2688;
  TAttribute<FSlateFontInfo> local_2628;
  TAttribute<FSlateFontInfo> local_25a8;
  FArguments local_2528;
  FSlotArguments local_2320;
  FSlotArguments local_2238;
  FSlotArguments local_2150;
  FSlotArguments local_2068;
  FArguments local_1f80;
  FArguments local_1c88;
  FArguments local_18a8;
  FArguments local_1350;
  FArguments local_df8;
  FArguments local_738;
  
  local_738._ContextMenuExtender._16_8_ = 0x142f723f7;
  pTVar33 = (TStatId *)0x0;
  local_res10[0] = 0;
  pFVar12 = STableRow<TSharedPtr<FTestData,1>_>::FArguments::FArguments(&local_1f80);
  TDelegate<TOptional<enum_EItemDropZone>___cdecl(FDragDropEvent_const_&,enum_EItemDropZone,TSharedPtr<FTestData,1>),FDefaultDelegateUserPolicy>
  ::operator=(&pFVar12->_OnCanAcceptDrop,&param_1->_OnCanAcceptDrop);
  TDelegate<FReply___cdecl(FDragDropEvent_const_&,enum_EItemDropZone,TSharedPtr<FTestData,1>),FDefaultDelegateUserPolicy>
  ::operator=(&pFVar12->_OnAcceptDrop,&param_1->_OnAcceptDrop);
  TDelegate<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&pFVar12->_OnDragDetected,&param_1->_OnDragDetected);
  pFVar12->_ShowSelection = true;
  STableRow<TSharedPtr<FTestData,1>_>::ConstructInternal
            ((STableRow<TSharedPtr<FTestData,1>_> *)this,pFVar12,param_2);
  STableRow<TSharedPtr<FTestData,1>_>::FArguments::~FArguments(&local_1f80);
  pTVar1 = (param_1->_ItemToEdit).SharedReferenceCount.ReferenceController;
  pFVar2 = (param_1->_ItemToEdit).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2a80 = (FArguments *)(this->ItemToEdit).Object;
  pTStack_2a78 = (this->ItemToEdit).SharedReferenceCount.ReferenceController;
  (this->ItemToEdit).Object = pFVar2;
  (this->ItemToEdit).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_2a78);
  pIVar13 = FAppStyle::Get();
  pcVar3 = *(code **)((longlong)*pIVar13 + 0x88);
  ::FName::FName(&local_2bc8,L"NormalFont");
  (*pcVar3)(pIVar13,&local_2688);
  pFVar14 = SBorder::FArguments::FArguments(&local_1c88);
  local_2a80 = pFVar14;
  pIVar13 = FAppStyle::Get();
  pcVar3 = *(code **)((longlong)*pIVar13 + 0x50);
  pFVar15 = ::FName::FName(&local_2728,"ToolPanel.GroupBorder");
  local_2b30 = (FSlateBrush *)(*pcVar3)(pIVar13,*pFVar15);
  local_2b28 = 1;
  local_2b10 = 0;
  local_2b20 = (undefined1  [8])0x0;
  FStack_2b18.Data = (FScriptContainerElement *)0x0;
  (pFVar14->_BorderImage).Value = local_2b30;
  (pFVar14->_BorderImage).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar14->_BorderImage).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2b20);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2b20,
             (FWriteAccessScope *)&local_2a50);
  if (((int)local_2b10 != 0) && (FStack_2b18.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_2b18.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2b18,0,0,0x10);
    local_2b10 = local_2b10 & 0xffffffff00000000;
  }
  if (local_2a50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2a50.Accessor,&local_2a50);
  }
  if (FStack_2b18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2b18.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2b20);
  uVar11 = _UNK_150a1c898;
  local_2af8 = local_2af8 & 0xffffff00;
  local_2af4 = 1;
  local_2ae0 = 0;
  local_2b08 = ___xmm_3ee666663f8000003f8000003f800000;
  uStack_2b00 = _UNK_150a1c898;
  local_2af0 = (undefined1  [8])0x0;
  FStack_2ae8.Data = (FScriptContainerElement *)0x0;
  *(undefined8 *)&(pFVar14->_BorderBackgroundColor).Value.SpecifiedColor.field0_0x0 =
       ___xmm_3ee666663f8000003f8000003f800000;
  *(undefined8 *)((longlong)&(pFVar14->_BorderBackgroundColor).Value.SpecifiedColor.field0_0x0 + 8)
       = uVar11;
  (pFVar14->_BorderBackgroundColor).Value.ColorUseRule = (undefined1)local_2af8;
  (pFVar14->_BorderBackgroundColor).Value.ColorTableId = local_2af8._1_1_;
  *(undefined2 *)&(pFVar14->_BorderBackgroundColor).Value.field_0x12 = local_2af8._2_2_;
  (pFVar14->_BorderBackgroundColor).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar14->_BorderBackgroundColor).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2af0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2af0,
             (FWriteAccessScope *)&local_2a38);
  if (((int)local_2ae0 != 0) && (FStack_2ae8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_2ae8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2ae8,0,0,0x10);
    local_2ae0 = local_2ae0 & 0xffffffff00000000;
  }
  if (local_2a38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2a38.Accessor,&local_2a38);
  }
  if (FStack_2ae8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2ae8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2af0);
  (pFVar14->_Padding).bIsSet = true;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(pFVar14->_Padding).Getter,
             (FWriteAccessScope *)&local_29c0);
  local_29a8 = &(pFVar14->_Padding).Getter.field_0x8;
  puVar16 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_29a8);
  pSVar32 = this;
  if (puVar16 != (undefined8 *)0x0) {
    uStack_2bbc = local_2ac8.SharedReferenceCount.ReferenceController._4_4_;
    local_2bc8 = (FName)GetVariableWidth;
    uStack_2bc0 = 0;
    pTVar17 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_2720);
    pSVar32 = (SHorizontalListItemEditor *)(pTVar17->SharedReferenceCount).ReferenceController;
    pTVar31 = &pTVar17->Object[-1].StatID;
    if (pTVar17->Object == (SWidget *)0x0) {
      pTVar31 = pTVar33;
    }
    if (pSVar32 != (SHorizontalListItemEditor *)0x0) {
      LOCK();
      *(atomic<int> *)&pSVar32->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar32->_padding_ + 1);
      UNLOCK();
      LOCK();
      *(atomic<int> *)&pSVar32->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar32->_padding_ + 1);
      UNLOCK();
    }
    *puVar16 = &
               ___7__TCommonDelegateInstanceState___A6A_AUFMargin__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar18 = FDelegateHandle::GenerateNewID();
    puVar16[2] = uVar18;
    *puVar16 = &
               ___7__TBaseSPMethodDelegateInstance__00__CBVSHorizontalListItemEditor___00__A6A_AUFMargin__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar16[3] = pTVar31;
    puVar16[4] = pSVar32;
    if (pSVar32 != (SHorizontalListItemEditor *)0x0) {
      LOCK();
      ((atomic<int> *)&pSVar32->_padding_)[1] =
           (atomic<int>)((int)((atomic<int> *)&pSVar32->_padding_)[1] + 1);
      UNLOCK();
    }
    pTVar33 = (TStatId *)0x3;
    *(FName *)(puVar16 + 5) = local_2bc8;
    puVar16[6] = CONCAT44(uStack_2bbc,uStack_2bc0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar32);
  }
  if (((ulonglong)pTVar33 & 2) != 0) {
    pTVar33 = (TStatId *)(ulonglong)((uint)pTVar33 & 0xfffffffd);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar32);
  }
  if (((ulonglong)pTVar33 & 1) != 0) {
    pTVar33 = (TStatId *)(ulonglong)((uint)pTVar33 & 0xfffffffe);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2720.SharedReferenceCount.ReferenceController);
  }
  if (local_29c0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_29c0.Accessor,&local_29c0);
  }
  pFVar19 = SVerticalBox::FArguments::FArguments(&local_2528);
  pFVar20 = SVerticalBox::Slot(&local_2068);
  pFVar20 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar20);
  pFVar20 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)&pFVar20->field_0x18,__real_40800000);
  pFVar21 = STextBlock::FArguments::FArguments(&local_1350);
  FSlateFontInfo::FSlateFontInfo(&local_2940,&local_2688);
  local_28e0 = true;
  local_28c8 = 0;
  local_28d8 = (undefined1  [8])0x0;
  FStack_28d0.Data = (FScriptContainerElement *)0x0;
  FSlateFontInfo::operator=(&(pFVar21->_Font).Value,&local_2940);
  (pFVar21->_Font).bIsSet = local_28e0;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar21->_Font).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_28d8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_28d8,
             (FWriteAccessScope *)&local_2a20);
  if (((int)local_28c8 != 0) && (FStack_28d0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_28d0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_28d0,0,0,0x10);
    local_28c8 = local_28c8 & 0xffffffff00000000;
  }
  if (local_2a20.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2a20.Accessor,&local_2a20);
  }
  if (FStack_28d0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_28d0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_28d8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2940.CompositeFont.SharedReferenceCount.ReferenceController);
  uStack_2bc0 = 0;
  local_2bc8 = (FName)OnReadText;
  lStack_2700 = (ulonglong)uStack_2bbc << 0x20;
  local_2708 = OnReadText;
  TAttribute<FText>::Bind<SHorizontalListItemEditor>
            (&pFVar21->_Text,this,(pmf_5e2e4009 *)&local_2708);
  FLLMScope::FLLMScope(&local_2be8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_2bb8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_2bf0,&local_2bb8,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            (&local_27a8,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\STableViewTesting.cpp"
             ,0x2e0,(T0RequiredArgs *)local_res10);
  FMemScope::~FMemScope(&local_2bf0);
  FLLMScope::~FLLMScope(&local_2be8);
  pTVar22 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_27a8,&local_2ac8,pFVar21);
  local_2b90 = pTVar22->Object;
  local_2bc8 = (FName)(pTVar22->SharedReferenceCount).ReferenceController;
  if (local_2bc8 != (FName)0x0) {
    LOCK();
    *(atomic<int> *)((longlong)local_2bc8 + 8) =
         (atomic<int>)((int)*(atomic<int> *)((longlong)local_2bc8 + 8) + 1);
    UNLOCK();
    LOCK();
    *(atomic<int> *)((longlong)local_2bc8 + 8) =
         (atomic<int>)((int)*(atomic<int> *)((longlong)local_2bc8 + 8) + 1);
    UNLOCK();
  }
  local_2b88 = local_2bc8;
  if ((STextBlock **)&pFVar20->field_0x8 != &local_2b90) {
    *(STextBlock **)&pFVar20->field_0x8 = local_2b90;
    local_2b90 = (STextBlock *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar20->field_0x10,(FSharedReferencer<1> *)&local_2b88);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_2b88);
  local_2bb8 = (FName)SVerticalBox::FArguments::operator+(pFVar19,pFVar20);
  pFVar20 = SVerticalBox::Slot(&local_2150);
  pFVar23 = (FSizeParam *)FAuto::FAuto((FAuto *)local_26e8);
  TOptional<FSizeParam>::operator=((TOptional<FSizeParam> *)&pFVar20->field_0x58,pFVar23);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_26b8);
  if ((void *)local_26b8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_26b8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_26b8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_26d8);
  if ((void *)local_26d8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_26d8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_26d8);
  local_2bf0 = (FMemScope)
               TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                         ((FSlotArgumentsMixin *)&pFVar20->field_0x18,__real_40000000);
  pFVar24 = SSpinBox<float>::FArguments::FArguments(&local_738);
  local_2b80 = __real_c0a00000;
  local_2b7c = 1;
  local_2b78 = 1;
  local_2b60 = 0;
  local_2b70 = (undefined1  [8])0x0;
  FStack_2b68.Data = (FScriptContainerElement *)0x0;
  if ((TAttribute<TOptional<float>_> *)&local_2b80 != &pFVar24->_MinValue) {
    (pFVar24->_MinValue).Value.TypedValue = __real_c0a00000;
    (pFVar24->_MinValue).Value.bIsSet = true;
  }
  (pFVar24->_MinValue).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar24->_MinValue).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2b70);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2b70,
             (FWriteAccessScope *)&local_2a08);
  if (((int)local_2b60 != 0) && (FStack_2b68.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_2b68.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2b68,0,0,0x10);
    local_2b60 = local_2b60 & 0xffffffff00000000;
  }
  if (local_2a08.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2a08.Accessor,&local_2a08);
  }
  if (FStack_2b68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2b68.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2b70);
  local_2b58 = __real_44480000;
  local_2b54 = 1;
  local_2b50 = 1;
  local_2b38 = 0;
  local_2b48 = (undefined1  [8])0x0;
  FStack_2b40.Data = (FScriptContainerElement *)0x0;
  if ((TAttribute<TOptional<float>_> *)&local_2b58 != &pFVar24->_MaxValue) {
    (pFVar24->_MaxValue).Value.TypedValue = __real_44480000;
    (pFVar24->_MaxValue).Value.bIsSet = true;
  }
  (pFVar24->_MaxValue).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar24->_MaxValue).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2b48);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2b48,
             (FWriteAccessScope *)&local_29f0);
  if (((int)local_2b38 != 0) && (FStack_2b40.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_2b40.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2b40,0,0,0x10);
    local_2b38 = local_2b38 & 0xffffffff00000000;
  }
  if (local_29f0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_29f0.Accessor,&local_29f0);
  }
  if (FStack_2b40.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2b40.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2b48);
  FSlateFontInfo::FSlateFontInfo(&local_28c0,&local_2688);
  local_2860 = true;
  local_2848 = 0;
  local_2858 = (undefined1  [8])0x0;
  FStack_2850.Data = (FScriptContainerElement *)0x0;
  FSlateFontInfo::operator=(&(pFVar24->_Font).Value,&local_28c0);
  (pFVar24->_Font).bIsSet = local_2860;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar24->_Font).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2858);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2858,
             (FWriteAccessScope *)&local_29d8);
  if (((int)local_2848 != 0) && (FStack_2850.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_2850.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2850,0,0,0x10);
    local_2848 = local_2848 & 0xffffffff00000000;
  }
  if (local_29d8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_29d8.Accessor,&local_29d8);
  }
  if (FStack_2850.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2850.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2858);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28c0.CompositeFont.SharedReferenceCount.ReferenceController);
  (pFVar24->_Value).bIsSet = true;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(pFVar24->_Value).Getter,
             (FWriteAccessScope *)&local_29a0);
  local_2988 = &(pFVar24->_Value).Getter.field_0x8;
  puVar16 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_2988);
  pSVar32 = this;
  if (puVar16 != (undefined8 *)0x0) {
    uStack_2bfc = local_2ac8.SharedReferenceCount.ReferenceController._4_4_;
    uStack_2c00 = 0;
    local_2c08 = (FName)OnReadValue;
    pTVar17 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_26f8);
    pSVar32 = (SHorizontalListItemEditor *)(pTVar17->SharedReferenceCount).ReferenceController;
    pTVar31 = &pTVar17->Object[-1].StatID;
    if (pTVar17->Object == (SWidget *)0x0) {
      pTVar31 = (TStatId *)0x0;
    }
    if (pSVar32 != (SHorizontalListItemEditor *)0x0) {
      LOCK();
      *(atomic<int> *)&pSVar32->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar32->_padding_ + 1);
      UNLOCK();
      LOCK();
      *(atomic<int> *)&pSVar32->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar32->_padding_ + 1);
      UNLOCK();
    }
    pTVar33 = (TStatId *)(ulonglong)((uint)pTVar33 | 0x38);
    *puVar16 = &___7__TCommonDelegateInstanceState___A6AMXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar18 = FDelegateHandle::GenerateNewID();
    puVar16[2] = uVar18;
    *puVar16 = &
               ___7__TBaseSPMethodDelegateInstance__00__CBVSHorizontalListItemEditor___00__A6AMXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar16[3] = pTVar31;
    puVar16[4] = pSVar32;
    if (pSVar32 != (SHorizontalListItemEditor *)0x0) {
      LOCK();
      ((atomic<int> *)&pSVar32->_padding_)[1] =
           (atomic<int>)((int)((atomic<int> *)&pSVar32->_padding_)[1] + 1);
      UNLOCK();
    }
    *(FName *)(puVar16 + 5) = local_2c08;
    puVar16[6] = CONCAT44(uStack_2bfc,uStack_2c00);
  }
  if (((ulonglong)pTVar33 & 0x20) != 0) {
    pTVar33 = (TStatId *)(ulonglong)((uint)pTVar33 & 0xffffffdf);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar32);
  }
  if (((ulonglong)pTVar33 & 0x10) != 0) {
    pTVar33 = (TStatId *)(ulonglong)((uint)pTVar33 & 0xffffffef);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar32);
  }
  if (((ulonglong)pTVar33 & 8) != 0) {
    pTVar33 = (TStatId *)(ulonglong)((uint)pTVar33 & 0xfffffff7);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_26f8.SharedReferenceCount.ReferenceController);
  }
  if (local_29a0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_29a0.Accessor,&local_29a0);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar24->_OnValueChanged,
             (FWriteAccessScope *)&local_2980);
  local_2968 = &(pFVar24->_OnValueChanged).field_0x8;
  puVar16 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_2968);
  pSVar32 = this;
  if (puVar16 != (undefined8 *)0x0) {
    local_2c08 = (FName)OnWriteValue;
    uStack_2bfc = local_2ac8.SharedReferenceCount.ReferenceController._4_4_;
    uStack_2c00 = 0;
    pTVar25 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_2840);
    pSVar32 = (SHorizontalListItemEditor *)(pTVar25->SharedReferenceCount).ReferenceController;
    pTVar31 = &pTVar25->Object[-1].StatID;
    if (pTVar25->Object == (SWidget *)0x0) {
      pTVar31 = (TStatId *)0x0;
    }
    if (pSVar32 != (SHorizontalListItemEditor *)0x0) {
      LOCK();
      *(atomic<int> *)&pSVar32->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar32->_padding_ + 1);
      UNLOCK();
      LOCK();
      *(atomic<int> *)&pSVar32->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar32->_padding_ + 1);
      UNLOCK();
    }
    pTVar33 = (TStatId *)(ulonglong)((uint)pTVar33 | 0x1c0);
    *puVar16 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar18 = FDelegateHandle::GenerateNewID();
    puVar16[2] = uVar18;
    *puVar16 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSHorizontalListItemEditor___00__A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar16[3] = pTVar31;
    puVar16[4] = pSVar32;
    if (pSVar32 != (SHorizontalListItemEditor *)0x0) {
      LOCK();
      ((atomic<int> *)&pSVar32->_padding_)[1] =
           (atomic<int>)((int)((atomic<int> *)&pSVar32->_padding_)[1] + 1);
      UNLOCK();
    }
    *(FName *)(puVar16 + 5) = local_2c08;
    puVar16[6] = CONCAT44(uStack_2bfc,uStack_2c00);
  }
  if ((uint)pTVar33 >> 8 != 0) {
    pTVar33 = (TStatId *)(ulonglong)((uint)pTVar33 & 0xfffffeff);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar32);
  }
  if ((char)pTVar33 < '\0') {
    pTVar33 = (TStatId *)(ulonglong)((uint)pTVar33 & 0xffffff7f);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar32);
  }
  if (((ulonglong)pTVar33 & 0x40) != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2840.SharedReferenceCount.ReferenceController);
  }
  bVar10 = false;
  bVar9 = false;
  bVar8 = false;
  if (local_2980.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2980.Accessor,&local_2980);
  }
  FLLMScope::FLLMScope(local_2bd8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_2bb0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_2ba8,&local_2bb0,true);
  TSlateDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs>
            (&local_27c0,"SSpinBox<float>",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\STableViewTesting.cpp"
             ,0x2ea,local_res20);
  FMemScope::~FMemScope(&local_2ba8);
  FLLMScope::~FLLMScope(local_2bd8);
  pTVar26 = TSlateDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_27c0,&local_2738,pFVar24);
  FVar27 = local_2bf0;
  pTVar1 = (pTVar26->SharedReferenceCount).ReferenceController;
  local_2ba0 = pTVar26->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2b98.ReferenceController = pTVar1;
  if ((SSpinBox<float> **)((longlong)local_2bf0 + 8) != &local_2ba0) {
    *(SSpinBox<float> **)((longlong)local_2bf0 + 8) = local_2ba0;
    local_2ba0 = (SSpinBox<float> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)local_2bf0 + 0x10),&local_2b98);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2b98.ReferenceController);
  local_2bf0 = (FMemScope)
               SVerticalBox::FArguments::operator+
                         ((FArguments *)local_2bb8,(FSlotArguments *)FVar27);
  pFVar20 = SVerticalBox::Slot(&local_2238);
  pFVar20 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar20);
  local_2bb0 = (FName)TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                                ((FSlotArgumentsMixin *)&pFVar20->field_0x18,__real_40000000);
  this_00 = SEditableTextBox::FArguments::FArguments(&local_df8);
  FSlateFontInfo::FSlateFontInfo(&local_2628.Value,&local_2688);
  local_2628.bIsSet = true;
  local_2628.Getter._16_8_ = 0;
  local_2628.Getter._0_8_ = 0;
  local_2628.Getter._8_8_ = 0;
  FVar27 = (FMemScope)SEditableTextBox::FArguments::Font(this_00,&local_2628);
  uStack_2c00 = 0;
  local_2c08 = (FName)OnReadText;
  lStack_2820 = (ulonglong)uStack_2bfc << 0x20;
  local_2828 = OnReadText;
  local_2ba8 = FVar27;
  TAttribute<FText>::Bind<SHorizontalListItemEditor>
            ((TAttribute<FText> *)((longlong)FVar27 + 0x200),this,(pmf_5e2e4009 *)&local_2828);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)FVar27 + 0x508),
             (FWriteAccessScope *)&local_2960);
  local_2948 = (FDelegateAllocation *)((longlong)FVar27 + 0x510);
  puVar16 = UE::Core::Private::DelegateAllocate(0x38,local_2948);
  pSVar32 = this;
  if (puVar16 != (undefined8 *)0x0) {
    uStack_2bfc = local_2ac8.SharedReferenceCount.ReferenceController._4_4_;
    local_2c08 = (FName)OnTextChanged;
    uStack_2c00 = 0;
    pTVar25 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_2818);
    pSVar32 = (SHorizontalListItemEditor *)(pTVar25->SharedReferenceCount).ReferenceController;
    pTVar33 = &pTVar25->Object[-1].StatID;
    if (pTVar25->Object == (SWidget *)0x0) {
      pTVar33 = (TStatId *)0x0;
    }
    if (pSVar32 != (SHorizontalListItemEditor *)0x0) {
      LOCK();
      *(atomic<int> *)&pSVar32->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar32->_padding_ + 1);
      UNLOCK();
      LOCK();
      *(atomic<int> *)&pSVar32->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar32->_padding_ + 1);
      UNLOCK();
    }
    bVar10 = true;
    bVar9 = true;
    bVar8 = true;
    *puVar16 = &
               ___7__TCommonDelegateInstanceState___A6AXAEBVFText___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar18 = FDelegateHandle::GenerateNewID();
    puVar16[2] = uVar18;
    *puVar16 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSHorizontalListItemEditor___00__A6AXAEBVFText___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar16[3] = pTVar33;
    puVar16[4] = pSVar32;
    if (pSVar32 != (SHorizontalListItemEditor *)0x0) {
      LOCK();
      ((atomic<int> *)&pSVar32->_padding_)[1] =
           (atomic<int>)((int)((atomic<int> *)&pSVar32->_padding_)[1] + 1);
      UNLOCK();
    }
    *(FName *)(puVar16 + 5) = local_2c08;
    puVar16[6] = CONCAT44(uStack_2bfc,uStack_2c00);
    FVar27 = local_2ba8;
  }
  if (bVar8) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar32);
  }
  if (bVar9) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar32);
  }
  if (bVar10) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2818.SharedReferenceCount.ReferenceController);
  }
  if (local_2960.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2960.Accessor,&local_2960);
  }
  FLLMScope::FLLMScope(&local_2be4,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_2aa8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_2aa0,&local_2aa8,true);
  TSlateDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs>
            (&local_27d8,"SEditableTextBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\STableViewTesting.cpp"
             ,0x2f7,&local_2bf8);
  FMemScope::~FMemScope(&local_2aa0);
  FLLMScope::~FLLMScope(&local_2be4);
  pTVar28 = TSlateDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_27d8,&local_2748,(FArguments *)FVar27);
  pTVar4 = (pTVar28->SharedReferenceCount).ReferenceController;
  local_2ad8.Object = (SWidget *)pTVar28->Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2ad8.SharedReferenceCount.ReferenceController = pTVar4;
  pFVar20 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)local_2bb0,&local_2ad8);
  pFVar19 = SVerticalBox::FArguments::operator+((FArguments *)local_2bf0,pFVar20);
  pFVar20 = SVerticalBox::Slot(&local_2320);
  pFVar20 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar20);
  pFVar20 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)&pFVar20->field_0x18,__real_40000000);
  pFVar21 = STextBlock::FArguments::FArguments(&local_18a8);
  FSlateFontInfo::FSlateFontInfo(&local_25a8.Value,&local_2688);
  local_25a8.bIsSet = true;
  local_25a8.Getter._16_8_ = 0;
  local_25a8.Getter._0_8_ = 0;
  local_25a8.Getter._8_8_ = 0;
  pFVar21 = STextBlock::FArguments::Font(pFVar21,&local_25a8);
  local_2ad8.SharedReferenceCount.ReferenceController =
       local_2ad8.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
  local_2ad8.Object = (SWidget *)OnReadText;
  local_2788 = OnReadText;
  pTStack_2780 = local_2ad8.SharedReferenceCount.ReferenceController;
  TAttribute<FText>::Bind<SHorizontalListItemEditor>
            (&pFVar21->_Text,this,(pmf_5e2e4009 *)&local_2788);
  FLLMScope::FLLMScope(&local_2be0,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_2a98 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_2a90,&local_2a98,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            (&local_27f0,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\STableViewTesting.cpp"
             ,0x302,&local_2bf7);
  FMemScope::~FMemScope(&local_2a90);
  FLLMScope::~FLLMScope(&local_2be0);
  pTVar22 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_27f0,&local_2758,pFVar21);
  pTVar5 = (pTVar22->SharedReferenceCount).ReferenceController;
  local_2a60.Object = (SWidget *)pTVar22->Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2a60.SharedReferenceCount.ReferenceController = pTVar5;
  pFVar20 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)pFVar20,&local_2a60);
  pFVar19 = SVerticalBox::FArguments::operator+(pFVar19,pFVar20);
  FLLMScope::FLLMScope(&local_2bdc,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_2c08 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_2a88,&local_2c08,true);
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
            (&local_2808,"SVerticalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\STableViewTesting.cpp"
             ,0x2d9,&local_2bf6);
  FMemScope::~FMemScope(&local_2a88);
  FLLMScope::~FLLMScope(&local_2bdc);
  pTVar29 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_2808,&local_2768,pFVar19);
  pFVar14 = local_2a80;
  pTVar6 = (pTVar29->SharedReferenceCount).ReferenceController;
  local_2ab8 = pTVar29->Object;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar7 = (local_2a80->_Content).Widget.SharedReferenceCount.ReferenceController;
  (local_2a80->_Content).Widget.Object = (SWidget *)local_2ab8;
  (local_2a80->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar6;
  pTStack_2ab0 = pTVar6;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  this_01 = MakeTDecl<SBorder,RequiredArgs::T0RequiredArgs>
                      (&local_26a0,"SBorder",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\STableViewTesting.cpp"
                       ,0x2d4,local_2bf5);
  pTVar30 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_01,&local_2778,pFVar14);
  pTVar7 = (pTVar30->SharedReferenceCount).ReferenceController;
  local_2a70.Object = (SWidget *)pTVar30->Object;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2a70.SharedReferenceCount.ReferenceController = pTVar7;
  TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>::operator[]
            ((TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *)
             &this->_padding_,&local_2a70);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2778.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_26a0._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2768.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2808._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2758.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_27f0._Widget.SharedReferenceCount.ReferenceController);
  STextBlock::FArguments::~FArguments(&local_18a8);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_2320);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  TSharedRef<SEditableTextBox,1>::~TSharedRef<SEditableTextBox,1>(&local_2748);
  TSlateDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs>(&local_27d8);
  SEditableTextBox::FArguments::~FArguments(&local_df8);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_2238);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  TSharedRef<SSpinBox<float>,1>::~TSharedRef<SSpinBox<float>,1>(&local_2738);
  TSlateDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs>(&local_27c0);
  SSpinBox<float>::FArguments::~FArguments(&local_738);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_2150);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_2bc8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)
             CONCAT44(local_2ac8.SharedReferenceCount.ReferenceController._4_4_,
                      local_2ac8.SharedReferenceCount.ReferenceController._0_4_));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_27a8._Widget.SharedReferenceCount.ReferenceController);
  STextBlock::FArguments::~FArguments(&local_1350);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_2068);
  DestructItems<SVerticalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_2528._Slots.AllocatorInstance.Data,local_2528._Slots.ArrayNum);
  if ((FSlotArguments *)local_2528._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_2528._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_2528);
  SBorder::FArguments::~FArguments(&local_1c88);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2688.CompositeFont.SharedReferenceCount.ReferenceController);
  return;
}

// GetVariableWidth @ 142fdb3e0

FMargin * __thiscall
SHorizontalListItemEditor::GetVariableWidth
          (SHorizontalListItemEditor *this,FMargin *__return_storage_ptr__)

{
  FTestData *pFVar1;
  code *pcVar2;
  bool bVar3;
  FMargin *pFVar4;
  
  if ((this->ItemToEdit).Object == (FTestData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FMargin *)(*pcVar2)();
      return pFVar4;
    }
  }
  pFVar1 = (this->ItemToEdit).Object;
  __return_storage_ptr__->Left = 0.0;
  __return_storage_ptr__->Top = 0.0;
  __return_storage_ptr__->Bottom = 0.0;
  __return_storage_ptr__->Right = pFVar1->Number;
  return __return_storage_ptr__;
}

// OnReadText @ 142ff7e70

FText * __thiscall
SHorizontalListItemEditor::OnReadText(SHorizontalListItemEditor *this,FText *__return_storage_ptr__)

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

// OnReadValue @ 142ff8020

float __thiscall SHorizontalListItemEditor::OnReadValue(SHorizontalListItemEditor *this)

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

// OnTextChanged @ 142ff8650

void __thiscall
SHorizontalListItemEditor::OnTextChanged(SHorizontalListItemEditor *this,FText *param_1)

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

// OnWriteValue @ 142ff95d0

void __thiscall
SHorizontalListItemEditor::OnWriteValue(SHorizontalListItemEditor *this,float param_1)

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

