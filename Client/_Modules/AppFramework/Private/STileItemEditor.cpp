// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 5

// Construct @ 142f7d6a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
STileItemEditor::Construct
          (STileItemEditor *this,FArguments *param_1,TSharedRef<STableViewBase,1> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FTestData *pFVar2;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  undefined8 uVar8;
  FArguments *pFVar9;
  ISlateStyle *pIVar10;
  FName FVar11;
  FName *pFVar12;
  FArguments *pFVar13;
  FSlotArguments *pFVar14;
  FArguments *pFVar15;
  TSharedRef<STextBlock,1> *pTVar16;
  FSizeParam *pFVar17;
  FArguments *pFVar18;
  undefined8 *puVar19;
  TSharedRef<SWidget_const_,1> *pTVar20;
  ulong64 uVar21;
  TSharedRef<SWidget,1> *pTVar22;
  TSharedRef<SSpinBox<float>,1> *pTVar23;
  FMemScope FVar24;
  FArguments *pFVar25;
  TSharedRef<SEditableTextBox,1> *pTVar26;
  TSharedRef<SVerticalBox,1> *pTVar27;
  TSharedRef<SBorder,1> *pTVar28;
  TStatId *pTVar29;
  STileItemEditor *pSVar30;
  TStatId *pTVar31;
  undefined4 local_res10 [2];
  T0RequiredArgs local_res20 [8];
  FName local_2bd8;
  undefined4 uStack_2bd0;
  uint uStack_2bcc;
  T0RequiredArgs local_2bc8;
  T0RequiredArgs local_2bc7;
  T0RequiredArgs local_2bc6;
  T0RequiredArgs local_2bc5;
  FLLMScope local_2bc4;
  FLLMScope local_2bc0;
  FLLMScope local_2bbc;
  FLLMScope local_2bb8;
  FLLMScope local_2bb4;
  FLLMScope local_2bb0 [2];
  FName local_2ba8;
  FMemScope local_2ba0;
  FName local_2b98;
  FMemScope local_2b90;
  SEditableTextBox *local_2b88;
  FSharedReferencer<1> local_2b80;
  STextBlock *local_2b78;
  FSharedReferencer<1> local_2b70;
  SSpinBox<float> *local_2b68;
  FSharedReferencer<1> local_2b60;
  FName local_2b58;
  STextBlock *local_2b50;
  FName local_2b48;
  float local_2b40;
  undefined1 local_2b3c;
  undefined1 local_2b38;
  undefined1 local_2b30 [8];
  ForAnyElementType FStack_2b28;
  ulonglong local_2b20;
  float local_2b18;
  undefined1 local_2b14;
  undefined1 local_2b10;
  undefined1 local_2b08 [8];
  ForAnyElementType FStack_2b00;
  ulonglong local_2af8;
  FSlateBrush *local_2af0;
  undefined1 local_2ae8;
  undefined1 local_2ae0 [8];
  ForAnyElementType FStack_2ad8;
  ulonglong local_2ad0;
  undefined8 local_2ac8;
  undefined8 uStack_2ac0;
  uint local_2ab8;
  undefined1 local_2ab4;
  undefined1 local_2ab0 [8];
  ForAnyElementType FStack_2aa8;
  ulonglong local_2aa0;
  FName local_2a98;
  undefined4 uStack_2a90;
  uint uStack_2a8c;
  SVerticalBox *local_2a88;
  TReferenceControllerBase<1> *pTStack_2a80;
  TSharedRef<STextBlock,1> local_2a78;
  FMemScope local_2a68;
  FName local_2a60;
  FMemScope local_2a58;
  FMemScope local_2a50;
  FName local_2a48;
  FMemScope local_2a40;
  TSharedRef<SWidget,1> local_2a38;
  FDestructionSentinel local_2a28;
  FDestructionSentinel local_2a10;
  FDestructionSentinel local_29f8;
  FDestructionSentinel local_29e0;
  FDestructionSentinel local_29c8;
  FDestructionSentinel local_29b0;
  FDestructionSentinel local_2998;
  undefined1 *local_2980;
  FDestructionSentinel local_2978;
  undefined1 *local_2960;
  FDestructionSentinel local_2958;
  undefined1 *local_2940;
  FSlateFontInfo local_2938;
  bool local_28d8;
  undefined1 local_28d0 [8];
  ForAnyElementType FStack_28c8;
  ulonglong local_28c0;
  FSlateFontInfo local_28b8;
  bool local_2858;
  undefined1 local_2850 [8];
  ForAnyElementType FStack_2848;
  ulonglong local_2840;
  TSharedRef<SWidget,1> local_2838;
  code *local_2828;
  longlong lStack_2820;
  TSharedRef<SWidget,1> local_2818;
  TSharedRef<STextBlock,1> local_2808;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_27f8;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_27e0;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_27c8;
  TSlateDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs> local_27b0;
  TSlateDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs> local_2798;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_2780;
  code *local_2768;
  longlong lStack_2760;
  TSharedRef<SBorder,1> local_2758;
  TSharedRef<SVerticalBox,1> local_2748;
  FTestData *local_2738;
  TReferenceControllerBase<1> *pTStack_2730;
  TSharedRef<SEditableTextBox,1> local_2728;
  TSharedRef<SSpinBox<float>,1> local_2718;
  FName local_2708 [2];
  code *local_26f8;
  longlong lStack_26f0;
  TSharedRef<SWidget_const_,1> local_26e8;
  undefined1 local_26d8 [16];
  undefined1 local_26c8 [32];
  undefined1 local_26a8 [32];
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
  
  local_738._ContextMenuExtender._16_8_ = 0x142f7d6c7;
  pTVar31 = (TStatId *)0x0;
  local_res10[0] = 0;
  pFVar9 = STableRow<TSharedPtr<FTestData,1>_>::FArguments::FArguments(&local_1f80);
  TDelegate<TOptional<enum_EItemDropZone>___cdecl(FDragDropEvent_const_&,enum_EItemDropZone,TSharedPtr<FTestData,1>),FDefaultDelegateUserPolicy>
  ::operator=(&pFVar9->_OnCanAcceptDrop,&param_1->_OnCanAcceptDrop);
  TDelegate<FReply___cdecl(FDragDropEvent_const_&,enum_EItemDropZone,TSharedPtr<FTestData,1>),FDefaultDelegateUserPolicy>
  ::operator=(&pFVar9->_OnAcceptDrop,&param_1->_OnAcceptDrop);
  TDelegate<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&pFVar9->_OnDragDetected,&param_1->_OnDragDetected);
  pFVar9->_ShowSelection = true;
  STableRow<TSharedPtr<FTestData,1>_>::ConstructInternal
            ((STableRow<TSharedPtr<FTestData,1>_> *)this,pFVar9,param_2);
  STableRow<TSharedPtr<FTestData,1>_>::FArguments::~FArguments(&local_1f80);
  pTVar1 = (param_1->_ItemToEdit).SharedReferenceCount.ReferenceController;
  pFVar2 = (param_1->_ItemToEdit).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2738 = (this->ItemToEdit).Object;
  pTStack_2730 = (this->ItemToEdit).SharedReferenceCount.ReferenceController;
  (this->ItemToEdit).Object = pFVar2;
  (this->ItemToEdit).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_2730);
  pIVar10 = FAppStyle::Get();
  pcVar3 = *(code **)((longlong)*pIVar10 + 0x88);
  ::FName::FName(&local_2a98,L"NormalFont");
  (*pcVar3)(pIVar10,&local_2688);
  FVar11 = (FName)SBorder::FArguments::FArguments(&local_1c88);
  local_2b58 = FVar11;
  pIVar10 = FAppStyle::Get();
  pcVar3 = *(code **)((longlong)*pIVar10 + 0x50);
  pFVar12 = ::FName::FName(local_2708,"ToolPanel.GroupBorder");
  local_2af0 = (FSlateBrush *)(*pcVar3)(pIVar10,*pFVar12);
  local_2ae8 = 1;
  local_2ad0 = 0;
  local_2ae0 = (undefined1  [8])0x0;
  FStack_2ad8.Data = (FScriptContainerElement *)0x0;
  ((TAttribute<FSlateBrush_const_*> *)((longlong)FVar11 + 0x2a0))->Value = local_2af0;
  *(bool *)((longlong)FVar11 + 0x2a8) = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)FVar11 + 0x2b0),
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2ae0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2ae0,
             (FWriteAccessScope *)&local_2a28);
  if (((int)local_2ad0 != 0) && (FStack_2ad8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_2ad8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2ad8,0,0,0x10);
    local_2ad0 = local_2ad0 & 0xffffffff00000000;
  }
  if (local_2a28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2a28.Accessor,&local_2a28);
  }
  if (FStack_2ad8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2ad8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2ae0);
  uVar8 = _UNK_150a1c898;
  local_2ab8 = local_2ab8 & 0xffffff00;
  local_2ab4 = 1;
  local_2aa0 = 0;
  local_2ac8 = ___xmm_3ee666663f8000003f8000003f800000;
  uStack_2ac0 = _UNK_150a1c898;
  local_2ab0 = (undefined1  [8])0x0;
  FStack_2aa8.Data = (FScriptContainerElement *)0x0;
  *(undefined8 *)
   &(((TAttribute<FSlateColor> *)((longlong)FVar11 + 0x358))->Value).SpecifiedColor.field0_0x0 =
       ___xmm_3ee666663f8000003f8000003f800000;
  *(undefined8 *)((longlong)FVar11 + 0x360) = uVar8;
  *(uint *)((longlong)FVar11 + 0x368) = local_2ab8;
  *(bool *)((longlong)FVar11 + 0x36c) = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)FVar11 + 0x370),
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2ab0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2ab0,
             (FWriteAccessScope *)&local_2a10);
  if (((int)local_2aa0 != 0) && (FStack_2aa8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_2aa8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2aa8,0,0,0x10);
    local_2aa0 = local_2aa0 & 0xffffffff00000000;
  }
  if (local_2a10.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2a10.Accessor,&local_2a10);
  }
  if (FStack_2aa8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2aa8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2ab0);
  pFVar13 = SVerticalBox::FArguments::FArguments(&local_2528);
  pFVar14 = SVerticalBox::Slot(&local_2068);
  pFVar14 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar14);
  pFVar14 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)&pFVar14->field_0x18,__real_40800000);
  pFVar15 = STextBlock::FArguments::FArguments(&local_1350);
  FSlateFontInfo::FSlateFontInfo(&local_2938,&local_2688);
  local_28d8 = true;
  local_28c0 = 0;
  local_28d0 = (undefined1  [8])0x0;
  FStack_28c8.Data = (FScriptContainerElement *)0x0;
  FSlateFontInfo::operator=(&(pFVar15->_Font).Value,&local_2938);
  (pFVar15->_Font).bIsSet = local_28d8;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar15->_Font).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_28d0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_28d0,
             (FWriteAccessScope *)&local_29f8);
  if (((int)local_28c0 != 0) && (FStack_28c8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_28c8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_28c8,0,0,0x10);
    local_28c0 = local_28c0 & 0xffffffff00000000;
  }
  if (local_29f8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_29f8.Accessor,&local_29f8);
  }
  if (FStack_28c8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_28c8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_28d0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2938.CompositeFont.SharedReferenceCount.ReferenceController);
  uStack_2a90 = 0;
  local_2a98 = (FName)OnReadText;
  lStack_26f0 = (ulonglong)uStack_2a8c << 0x20;
  local_26f8 = OnReadText;
  TAttribute<FText>::Bind<STileItemEditor>(&pFVar15->_Text,this,(pmf_d16bb93d *)&local_26f8);
  FLLMScope::FLLMScope(&local_2bc4,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_2ba8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_2ba0,&local_2ba8,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            (&local_2780,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\STableViewTesting.cpp"
             ,0x250,(T0RequiredArgs *)local_res10);
  FMemScope::~FMemScope(&local_2ba0);
  FLLMScope::~FLLMScope(&local_2bc4);
  pTVar16 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_2780,&local_2a78,pFVar15);
  local_2b50 = pTVar16->Object;
  local_2b48 = (FName)(pTVar16->SharedReferenceCount).ReferenceController;
  if (local_2b48 != (FName)0x0) {
    LOCK();
    *(atomic<int> *)((longlong)local_2b48 + 8) =
         (atomic<int>)((int)*(atomic<int> *)((longlong)local_2b48 + 8) + 1);
    UNLOCK();
    LOCK();
    *(atomic<int> *)((longlong)local_2b48 + 8) =
         (atomic<int>)((int)*(atomic<int> *)((longlong)local_2b48 + 8) + 1);
    UNLOCK();
  }
  local_2a98 = local_2b48;
  if ((STextBlock **)&pFVar14->field_0x8 != &local_2b50) {
    *(STextBlock **)&pFVar14->field_0x8 = local_2b50;
    local_2b50 = (STextBlock *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar14->field_0x10,(FSharedReferencer<1> *)&local_2b48);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_2b48);
  local_2ba8 = (FName)SVerticalBox::FArguments::operator+(pFVar13,pFVar14);
  pFVar14 = SVerticalBox::Slot(&local_2150);
  pFVar17 = (FSizeParam *)FAuto::FAuto((FAuto *)local_26d8);
  TOptional<FSizeParam>::operator=((TOptional<FSizeParam> *)&pFVar14->field_0x58,pFVar17);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_26a8);
  if ((void *)local_26a8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_26a8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_26a8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_26c8);
  if ((void *)local_26c8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_26c8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_26c8);
  local_2ba0 = (FMemScope)
               TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                         ((FSlotArgumentsMixin *)&pFVar14->field_0x18,__real_40000000);
  pFVar18 = SSpinBox<float>::FArguments::FArguments(&local_738);
  local_2b18 = __real_c0a00000;
  local_2af8 = 0;
  local_2b14 = 1;
  local_2b10 = 1;
  local_2b08 = (undefined1  [8])0x0;
  FStack_2b00.Data = (FScriptContainerElement *)0x0;
  if ((TAttribute<TOptional<float>_> *)&local_2b18 != &pFVar18->_MinValue) {
    (pFVar18->_MinValue).Value.TypedValue = __real_c0a00000;
    (pFVar18->_MinValue).Value.bIsSet = true;
  }
  (pFVar18->_MinValue).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar18->_MinValue).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2b08);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2b08,
             (FWriteAccessScope *)&local_29c8);
  if (((int)local_2af8 != 0) && (FStack_2b00.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_2b00.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2b00,0,0,0x10);
    local_2af8 = local_2af8 & 0xffffffff00000000;
  }
  if (local_29c8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_29c8.Accessor,&local_29c8);
  }
  if (FStack_2b00.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2b00.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2b08);
  local_2b40 = __real_41700000;
  local_2b3c = 1;
  local_2b38 = 1;
  local_2b20 = 0;
  local_2b30 = (undefined1  [8])0x0;
  FStack_2b28.Data = (FScriptContainerElement *)0x0;
  if ((TAttribute<TOptional<float>_> *)&local_2b40 != &pFVar18->_MaxValue) {
    (pFVar18->_MaxValue).Value.TypedValue = __real_41700000;
    (pFVar18->_MaxValue).Value.bIsSet = true;
  }
  (pFVar18->_MaxValue).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar18->_MaxValue).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2b30);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2b30,
             (FWriteAccessScope *)&local_29e0);
  if (((int)local_2b20 != 0) && (FStack_2b28.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_2b28.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2b28,0,0,0x10);
    local_2b20 = local_2b20 & 0xffffffff00000000;
  }
  if (local_29e0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_29e0.Accessor,&local_29e0);
  }
  if (FStack_2b28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2b28.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2b30);
  FSlateFontInfo::FSlateFontInfo(&local_28b8,&local_2688);
  local_2858 = true;
  local_2840 = 0;
  local_2850 = (undefined1  [8])0x0;
  FStack_2848.Data = (FScriptContainerElement *)0x0;
  FSlateFontInfo::operator=(&(pFVar18->_Font).Value,&local_28b8);
  (pFVar18->_Font).bIsSet = local_2858;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar18->_Font).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2850);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2850,
             (FWriteAccessScope *)&local_29b0);
  if (((int)local_2840 != 0) && (FStack_2848.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_2848.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2848,0,0,0x10);
    local_2840 = local_2840 & 0xffffffff00000000;
  }
  if (local_29b0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_29b0.Accessor,&local_29b0);
  }
  if (FStack_2848.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2848.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2850);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28b8.CompositeFont.SharedReferenceCount.ReferenceController);
  (pFVar18->_Value).bIsSet = true;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(pFVar18->_Value).Getter,
             (FWriteAccessScope *)&local_2998);
  local_2980 = &(pFVar18->_Value).Getter.field_0x8;
  puVar19 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_2980);
  pSVar30 = this;
  if (puVar19 != (undefined8 *)0x0) {
    uStack_2bcc = local_2a78.SharedReferenceCount.ReferenceController._4_4_;
    local_2bd8 = (FName)OnReadValue;
    uStack_2bd0 = 0;
    pTVar20 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_26e8);
    pSVar30 = (STileItemEditor *)(pTVar20->SharedReferenceCount).ReferenceController;
    pTVar29 = &pTVar20->Object[-1].StatID;
    if (pTVar20->Object == (SWidget *)0x0) {
      pTVar29 = pTVar31;
    }
    if (pSVar30 != (STileItemEditor *)0x0) {
      LOCK();
      *(atomic<int> *)&pSVar30->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar30->_padding_ + 1);
      UNLOCK();
      LOCK();
      *(atomic<int> *)&pSVar30->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar30->_padding_ + 1);
      UNLOCK();
    }
    *puVar19 = &___7__TCommonDelegateInstanceState___A6AMXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar21 = FDelegateHandle::GenerateNewID();
    puVar19[2] = uVar21;
    *puVar19 = &
               ___7__TBaseSPMethodDelegateInstance__00__CBVSTileItemEditor___00__A6AMXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar19[3] = pTVar29;
    puVar19[4] = pSVar30;
    if (pSVar30 != (STileItemEditor *)0x0) {
      LOCK();
      ((atomic<int> *)&pSVar30->_padding_)[1] =
           (atomic<int>)((int)((atomic<int> *)&pSVar30->_padding_)[1] + 1);
      UNLOCK();
    }
    pTVar31 = (TStatId *)0x7;
    *(FName *)(puVar19 + 5) = local_2bd8;
    puVar19[6] = CONCAT44(uStack_2bcc,uStack_2bd0);
  }
  if (((ulonglong)pTVar31 & 4) != 0) {
    pTVar31 = (TStatId *)(ulonglong)((uint)pTVar31 & 0xfffffffb);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar30);
  }
  if (((ulonglong)pTVar31 & 2) != 0) {
    pTVar31 = (TStatId *)(ulonglong)((uint)pTVar31 & 0xfffffffd);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar30);
  }
  if (((ulonglong)pTVar31 & 1) != 0) {
    pTVar31 = (TStatId *)(ulonglong)((uint)pTVar31 & 0xfffffffe);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_26e8.SharedReferenceCount.ReferenceController);
  }
  if (local_2998.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2998.Accessor,&local_2998);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar18->_OnValueChanged,
             (FWriteAccessScope *)&local_2978);
  local_2960 = &(pFVar18->_OnValueChanged).field_0x8;
  puVar19 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_2960);
  pSVar30 = this;
  if (puVar19 != (undefined8 *)0x0) {
    uStack_2bcc = local_2a78.SharedReferenceCount.ReferenceController._4_4_;
    local_2bd8 = (FName)OnWriteValue;
    uStack_2bd0 = 0;
    pTVar22 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_2838);
    pSVar30 = (STileItemEditor *)(pTVar22->SharedReferenceCount).ReferenceController;
    pTVar29 = &pTVar22->Object[-1].StatID;
    if (pTVar22->Object == (SWidget *)0x0) {
      pTVar29 = (TStatId *)0x0;
    }
    if (pSVar30 != (STileItemEditor *)0x0) {
      LOCK();
      *(atomic<int> *)&pSVar30->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar30->_padding_ + 1);
      UNLOCK();
      LOCK();
      *(atomic<int> *)&pSVar30->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar30->_padding_ + 1);
      UNLOCK();
    }
    pTVar31 = (TStatId *)(ulonglong)((uint)pTVar31 | 0x38);
    *puVar19 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar21 = FDelegateHandle::GenerateNewID();
    puVar19[2] = uVar21;
    *puVar19 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSTileItemEditor___00__A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar19[3] = pTVar29;
    puVar19[4] = pSVar30;
    if (pSVar30 != (STileItemEditor *)0x0) {
      LOCK();
      ((atomic<int> *)&pSVar30->_padding_)[1] =
           (atomic<int>)((int)((atomic<int> *)&pSVar30->_padding_)[1] + 1);
      UNLOCK();
    }
    *(FName *)(puVar19 + 5) = local_2bd8;
    puVar19[6] = CONCAT44(uStack_2bcc,uStack_2bd0);
  }
  if (((ulonglong)pTVar31 & 0x20) != 0) {
    pTVar31 = (TStatId *)(ulonglong)((uint)pTVar31 & 0xffffffdf);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar30);
  }
  if (((ulonglong)pTVar31 & 0x10) != 0) {
    pTVar31 = (TStatId *)(ulonglong)((uint)pTVar31 & 0xffffffef);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar30);
  }
  if (((ulonglong)pTVar31 & 8) != 0) {
    pTVar31 = (TStatId *)(ulonglong)((uint)pTVar31 & 0xfffffff7);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2838.SharedReferenceCount.ReferenceController);
  }
  if (local_2978.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2978.Accessor,&local_2978);
  }
  FLLMScope::FLLMScope(&local_2bc0,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_2b98 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_2b90,&local_2b98,true);
  TSlateDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs>
            (&local_2798,"SSpinBox<float>",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\STableViewTesting.cpp"
             ,0x25a,local_res20);
  FMemScope::~FMemScope(&local_2b90);
  FLLMScope::~FLLMScope(&local_2bc0);
  pTVar23 = TSlateDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_2798,&local_2718,pFVar18);
  FVar24 = local_2ba0;
  pTVar1 = (pTVar23->SharedReferenceCount).ReferenceController;
  local_2b68 = pTVar23->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2b60.ReferenceController = pTVar1;
  if ((SSpinBox<float> **)((longlong)local_2ba0 + 8) != &local_2b68) {
    *(SSpinBox<float> **)((longlong)local_2ba0 + 8) = local_2b68;
    local_2b68 = (SSpinBox<float> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)local_2ba0 + 0x10),&local_2b60);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2b60.ReferenceController);
  local_2b98 = (FName)SVerticalBox::FArguments::operator+
                                ((FArguments *)local_2ba8,(FSlotArguments *)FVar24);
  pFVar14 = SVerticalBox::Slot(&local_2238);
  pFVar14 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar14);
  FVar24 = (FMemScope)
           TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                     ((FSlotArgumentsMixin *)&pFVar14->field_0x18,__real_40000000);
  local_2b90 = FVar24;
  pFVar25 = SEditableTextBox::FArguments::FArguments(&local_df8);
  FSlateFontInfo::FSlateFontInfo(&local_2628.Value,&local_2688);
  local_2628.bIsSet = true;
  local_2628.Getter._16_8_ = 0;
  local_2628.Getter._0_8_ = 0;
  local_2628.Getter._8_8_ = 0;
  pFVar25 = SEditableTextBox::FArguments::Font(pFVar25,&local_2628);
  uStack_2bd0 = 0;
  local_2bd8 = (FName)OnReadText;
  lStack_2820 = (ulonglong)uStack_2bcc << 0x20;
  local_2828 = OnReadText;
  TAttribute<FText>::Bind<STileItemEditor>(&pFVar25->_Text,this,(pmf_d16bb93d *)&local_2828);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar25->_OnTextChanged,
             (FWriteAccessScope *)&local_2958);
  local_2940 = &(pFVar25->_OnTextChanged).field_0x8;
  puVar19 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_2940);
  pSVar30 = this;
  if (puVar19 != (undefined8 *)0x0) {
    uStack_2bcc = local_2a78.SharedReferenceCount.ReferenceController._4_4_;
    local_2bd8 = (FName)OnTextChanged;
    uStack_2bd0 = 0;
    pTVar22 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_2818);
    pTVar29 = &pTVar22->Object[-1].StatID;
    if (pTVar22->Object == (SWidget *)0x0) {
      pTVar29 = (TStatId *)0x0;
    }
    pSVar30 = (STileItemEditor *)(pTVar22->SharedReferenceCount).ReferenceController;
    if (pSVar30 != (STileItemEditor *)0x0) {
      LOCK();
      *(atomic<int> *)&pSVar30->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar30->_padding_ + 1);
      UNLOCK();
      LOCK();
      *(atomic<int> *)&pSVar30->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar30->_padding_ + 1);
      UNLOCK();
    }
    pTVar31 = (TStatId *)(ulonglong)((uint)pTVar31 | 0x1c0);
    *puVar19 = &
               ___7__TCommonDelegateInstanceState___A6AXAEBVFText___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar21 = FDelegateHandle::GenerateNewID();
    puVar19[2] = uVar21;
    *puVar19 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSTileItemEditor___00__A6AXAEBVFText___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar19[3] = pTVar29;
    puVar19[4] = pSVar30;
    if (pSVar30 != (STileItemEditor *)0x0) {
      LOCK();
      ((atomic<int> *)&pSVar30->_padding_)[1] =
           (atomic<int>)((int)((atomic<int> *)&pSVar30->_padding_)[1] + 1);
      UNLOCK();
    }
    *(FName *)(puVar19 + 5) = local_2bd8;
    puVar19[6] = CONCAT44(uStack_2bcc,uStack_2bd0);
    FVar24 = local_2b90;
  }
  if ((uint)pTVar31 >> 8 != 0) {
    pTVar31 = (TStatId *)(ulonglong)((uint)pTVar31 & 0xfffffeff);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar30);
  }
  if ((char)pTVar31 < '\0') {
    pTVar31 = (TStatId *)(ulonglong)((uint)pTVar31 & 0xffffff7f);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar30);
  }
  if (((ulonglong)pTVar31 & 0x40) != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2818.SharedReferenceCount.ReferenceController);
  }
  if (local_2958.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2958.Accessor,&local_2958);
  }
  FLLMScope::FLLMScope(&local_2bbc,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_2a48 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_2a50,&local_2a48,true);
  TSlateDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs>
            (&local_27b0,"SEditableTextBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\STableViewTesting.cpp"
             ,0x267,&local_2bc5);
  FMemScope::~FMemScope(&local_2a50);
  FLLMScope::~FLLMScope(&local_2bbc);
  pTVar26 = TSlateDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_27b0,&local_2728,pFVar25);
  pTVar4 = (pTVar26->SharedReferenceCount).ReferenceController;
  local_2b88 = pTVar26->Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2b80.ReferenceController = pTVar4;
  if ((SEditableTextBox **)((longlong)FVar24 + 8) != &local_2b88) {
    *(SEditableTextBox **)((longlong)FVar24 + 8) = local_2b88;
    local_2b88 = (SEditableTextBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)FVar24 + 0x10),&local_2b80);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2b80.ReferenceController);
  pFVar13 = SVerticalBox::FArguments::operator+((FArguments *)local_2b98,(FSlotArguments *)FVar24);
  pFVar14 = SVerticalBox::Slot(&local_2320);
  pFVar14 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar14);
  pFVar14 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)&pFVar14->field_0x18,__real_40000000);
  pFVar15 = STextBlock::FArguments::FArguments(&local_18a8);
  FSlateFontInfo::FSlateFontInfo(&local_25a8.Value,&local_2688);
  local_25a8.bIsSet = true;
  local_25a8.Getter._16_8_ = 0;
  local_25a8.Getter._0_8_ = 0;
  local_25a8.Getter._8_8_ = 0;
  pFVar15 = STextBlock::FArguments::Font(pFVar15,&local_25a8);
  uStack_2bd0 = 0;
  local_2bd8 = (FName)OnReadText;
  lStack_2760 = (ulonglong)uStack_2bcc << 0x20;
  local_2768 = OnReadText;
  TAttribute<FText>::Bind<STileItemEditor>(&pFVar15->_Text,this,(pmf_d16bb93d *)&local_2768);
  FLLMScope::FLLMScope(&local_2bb8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_2a60 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_2a58,&local_2a60,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            (&local_27c8,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\STableViewTesting.cpp"
             ,0x272,&local_2bc8);
  FMemScope::~FMemScope(&local_2a58);
  FLLMScope::~FLLMScope(&local_2bb8);
  pTVar16 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_27c8,&local_2808,pFVar15);
  pTVar5 = (pTVar16->SharedReferenceCount).ReferenceController;
  local_2b78 = pTVar16->Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2b70.ReferenceController = pTVar5;
  if ((STextBlock **)&pFVar14->field_0x8 != &local_2b78) {
    *(STextBlock **)&pFVar14->field_0x8 = local_2b78;
    local_2b78 = (STextBlock *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar14->field_0x10,&local_2b70);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2b70.ReferenceController);
  pFVar13 = SVerticalBox::FArguments::operator+(pFVar13,pFVar14);
  FLLMScope::FLLMScope(&local_2bb4,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_2bd8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_2a68,&local_2bd8,true);
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
            (&local_27e0,"SVerticalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\STableViewTesting.cpp"
             ,0x249,&local_2bc7);
  FMemScope::~FMemScope(&local_2a68);
  FLLMScope::~FLLMScope(&local_2bb4);
  pTVar27 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_27e0,&local_2748,pFVar13);
  FVar11 = local_2b58;
  pTVar6 = (pTVar27->SharedReferenceCount).ReferenceController;
  local_2a88 = pTVar27->Object;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar7 = ((FSharedReferencer<1> *)((longlong)local_2b58 + 0x200))->ReferenceController;
  (((TAlwaysValidWidget *)((longlong)local_2b58 + 0x1f8))->Widget).Object = (SWidget *)local_2a88;
  ((FSharedReferencer<1> *)((longlong)local_2b58 + 0x200))->ReferenceController = pTVar6;
  pTStack_2a80 = pTVar6;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  FLLMScope::FLLMScope(local_2bb0,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_2b58 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_2a40,&local_2b58,true);
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>
            (&local_27f8,"SBorder",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\STableViewTesting.cpp"
             ,0x245,&local_2bc6);
  FMemScope::~FMemScope(&local_2a40);
  FLLMScope::~FLLMScope(local_2bb0);
  pTVar28 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_27f8,&local_2758,(FArguments *)FVar11);
  pTVar7 = (pTVar28->SharedReferenceCount).ReferenceController;
  local_2a38.Object = (SWidget *)pTVar28->Object;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2a38.SharedReferenceCount.ReferenceController = pTVar7;
  TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>::operator[]
            ((TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *)
             &this->_padding_,&local_2a38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2758.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_27f8._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2748.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_27e0._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2808.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_27c8._Widget.SharedReferenceCount.ReferenceController);
  STextBlock::FArguments::~FArguments(&local_18a8);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_2320);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  TSharedRef<SEditableTextBox,1>::~TSharedRef<SEditableTextBox,1>(&local_2728);
  TSlateDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs>(&local_27b0);
  SEditableTextBox::FArguments::~FArguments(&local_df8);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_2238);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  TSharedRef<SSpinBox<float>,1>::~TSharedRef<SSpinBox<float>,1>(&local_2718);
  TSlateDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs>(&local_2798);
  SSpinBox<float>::FArguments::~FArguments(&local_738);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_2150);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_2a98);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)
             CONCAT44(local_2a78.SharedReferenceCount.ReferenceController._4_4_,
                      local_2a78.SharedReferenceCount.ReferenceController._0_4_));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2780._Widget.SharedReferenceCount.ReferenceController);
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

// OnReadText @ 142ff7f90

FText * __thiscall STileItemEditor::OnReadText(STileItemEditor *this,FText *__return_storage_ptr__)

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

// OnReadValue @ 142ff8100

float __thiscall STileItemEditor::OnReadValue(STileItemEditor *this)

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

// OnTextChanged @ 142ff8690

void __thiscall STileItemEditor::OnTextChanged(STileItemEditor *this,FText *param_1)

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

// OnWriteValue @ 142ff96d0

void __thiscall STileItemEditor::OnWriteValue(STileItemEditor *this,float param_1)

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

