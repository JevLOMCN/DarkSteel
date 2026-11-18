// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 8

// ClearSelection @ 1428dbde0

void __thiscall STextComboBox::ClearSelection(STextComboBox *this)

{
  SComboBox<TSharedPtr<FString,1>_> *pSVar1;
  SListView<TSharedPtr<FString,1>_> *pSVar2;
  code *pcVar3;
  bool bVar4;
  Type *pTVar5;
  
  if ((this->StringCombo).Object == (SComboBox<TSharedPtr<FString,1>_> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pSVar1 = (this->StringCombo).Object;
  if ((pSVar1->ComboListView).Object == (SListView<TSharedPtr<FString,1>_> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pSVar2 = (pSVar1->ComboListView).Object;
  pTVar5 = TAttribute<enum_ESelectionMode::Type>::Get(&pSVar2->_padding_);
  if ((*pTVar5 != None) &&
     (*(int *)&(pSVar2->SelectedItems).Elements.field_0x8 !=
      *(int *)&(pSVar2->SelectedItems).Elements.field_0x34)) {
    (**(code **)(pSVar2->_padding_ + 0x30))(&pSVar2->_padding_);
                    /* WARNING: Could not recover jumptable at 0x0001428dbe9f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pSVar2->_padding_ + 0x40))(&pSVar2->_padding_,3);
    return;
  }
  return;
}

// Construct @ 142908ca0

/* WARNING: Removing unreachable block (ram,0x000142909329) */

void __thiscall STextComboBox::Construct(STextComboBox *this,FArguments *param_1)

{
  TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<FString,1>_>,1> *pTVar1;
  longlong *this_00;
  SWidget *pSVar2;
  FString *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  FMemScope FVar5;
  bool bVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  bool bVar9;
  FArguments *pFVar10;
  undefined8 *puVar11;
  TSharedRef<SWidget,1> *pTVar12;
  ulong64 uVar13;
  FName FVar14;
  TSharedRef<SWidget_const_,1> *pTVar15;
  FArguments *pFVar16;
  TSharedRef<STextBlock,1> *pTVar17;
  TSharedRef<SComboBox<TSharedPtr<FString,1>_>,1> *pTVar18;
  SComboBox<TSharedPtr<FString,1>_> *pSVar19;
  atomic<int> *paVar20;
  TReferenceControllerBase<1> *pTVar21;
  undefined4 local_res8;
  undefined4 uStackX_c;
  T0RequiredArgs local_res10 [8];
  SWidget *local_res18;
  FName local_res20;
  FMemScope local_a88;
  TReferenceControllerBase<1> *pTStack_a80;
  FDestructionSentinel local_a78;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_a60;
  FDestructionSentinel local_a48;
  FDelegateAllocation *local_a30;
  undefined8 local_a28;
  undefined8 uStack_a20;
  undefined4 local_a18;
  bool local_a14;
  undefined1 local_a10 [8];
  ForAnyElementType FStack_a08;
  int local_a00;
  FString *local_9f8;
  FSharedReferencer<1> local_9f0;
  undefined8 local_9e8;
  undefined8 uStack_9e0;
  bool local_9d8;
  undefined1 local_9d0 [8];
  ForAnyElementType FStack_9c8;
  int local_9c0;
  TSharedRef<STextBlock,1> local_9b8;
  undefined8 local_9a8;
  FSharedReferencer<1> FStack_9a0;
  TSharedRef<SComboBox<TSharedPtr<FString,1>_>,1> local_998;
  TAttribute<FSlateFontInfo> local_988;
  FArguments local_908;
  FArguments local_5a8;
  
  bVar9 = false;
  bVar8 = false;
  bVar6 = false;
  local_res8 = 0;
  TDelegate<void___cdecl(TSharedPtr<FString,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>::
  operator=(&this->SelectionChanged,&param_1->_OnSelectionChanged);
  TDelegate<FString___cdecl(TSharedPtr<FString,1>),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&this->GetTextLabelForItem,&param_1->_OnGetTextLabelForItem);
  FSlateFontInfo::operator=(&(this->Font).Value,&(param_1->_Font).Value);
  (this->Font).bIsSet = (param_1->_Font).bIsSet;
  local_a88 = (FMemScope)&(param_1->_Font).Getter;
  TDelegate<FSlateFontInfo___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->Font).Getter,
             (TDelegate<FSlateFontInfo___cdecl(void),FDefaultDelegateUserPolicy> *)local_a88);
  pFVar10 = SComboBox<TSharedPtr<FString,1>_>::FArguments::FArguments(&local_908);
  pFVar10->_ComboBoxStyle = param_1->_ComboBoxStyle;
  pFVar10->_ButtonStyle = param_1->_ButtonStyle;
  local_res18 = (SWidget *)param_1->_OptionsSource_ArrayPointer;
  pTVar21 = (param_1->_OptionsSource_SharedObservableArray).SharedReferenceCount.ReferenceController
  ;
  local_res20 = (FName)param_1->_OptionsSource_ObservableArrayPointer;
  local_a60._Widget.Object = (STextBlock *)(param_1->_OptionsSource_SharedObservableArray).Object;
  if (pTVar21 == (TReferenceControllerBase<1> *)0x0) {
    paVar20 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar20 = &pTVar21->SharedReferenceCount;
    LOCK();
    *paVar20 = (atomic<int>)((int)*paVar20 + 1);
    UNLOCK();
  }
  pFVar10->_OptionsSource_ArrayPointer =
       (TArray<TSharedPtr<FString,1>,TSizedDefaultAllocator<32>_> *)0x0;
  pFVar10->_OptionsSource_ObservableArrayPointer = (TObservableArray<TSharedPtr<FString,1>_> *)0x0;
  pTVar1 = &pFVar10->_OptionsSource_SharedObservableArray;
  local_9a8 = 0;
  FStack_9a0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (pTVar1 != (TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<FString,1>_>,1> *)
                &local_9a8) {
    pTVar1->Object = (TObservableArray<TSharedPtr<FString,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(pFVar10->_OptionsSource_SharedObservableArray).SharedReferenceCount,&FStack_9a0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_9a0.ReferenceController);
  pFVar10->_OptionsSource_ArrayPointer =
       (TArray<TSharedPtr<FString,1>,TSizedDefaultAllocator<32>_> *)local_res18;
  pFVar10->_OptionsSource_ObservableArrayPointer =
       (TObservableArray<TSharedPtr<FString,1>_> *)local_res20;
  if (pTVar21 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar20 = (atomic<int>)((int)*paVar20 + 1);
    UNLOCK();
  }
  pTVar4 = (pFVar10->_OptionsSource_SharedObservableArray).SharedReferenceCount.ReferenceController;
  pTVar1->Object = (TObservableArray<TSharedPtr<FString,1>_> *)local_a60._Widget.Object;
  (pFVar10->_OptionsSource_SharedObservableArray).SharedReferenceCount.ReferenceController = pTVar21
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar21);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar10->_OnGenerateWidget,
             (FWriteAccessScope *)&local_a48);
  local_a30 = (FDelegateAllocation *)&(pFVar10->_OnGenerateWidget).field_0x8;
  puVar11 = UE::Core::Private::DelegateAllocate(0x38,local_a30);
  if (puVar11 == (undefined8 *)0x0) {
    pTVar21 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_c,local_res8);
  }
  else {
    local_a60._Widget.SharedReferenceCount.ReferenceController._4_4_ =
         local_9b8.SharedReferenceCount.ReferenceController._4_4_;
    local_a60._Widget.Object = (STextBlock *)MakeItemWidget;
    local_a60._Widget.SharedReferenceCount.ReferenceController._0_4_ = 0;
    pTVar12 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,
                         (TSharedRef<SWidget,1> *)&local_a78);
    pTVar21 = (pTVar12->SharedReferenceCount).ReferenceController;
    pSVar2 = pTVar12->Object;
    if (pTVar21 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar21->SharedReferenceCount = (atomic<int>)((int)pTVar21->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar21->SharedReferenceCount = (atomic<int>)((int)pTVar21->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar11 = &
               ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSWidget___00__V__TSharedPtr_VFString___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar13 = FDelegateHandle::GenerateNewID();
    puVar11[2] = uVar13;
    *puVar11 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSTextComboBox___00__A6A_AV__TSharedRef_VSWidget___00__V__TSharedPtr_VFString___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar11[3] = pSVar2;
    puVar11[4] = pTVar21;
    if (pTVar21 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar21->WeakReferenceCount = (atomic<int>)((int)pTVar21->WeakReferenceCount + 1);
      UNLOCK();
    }
    bVar9 = true;
    bVar8 = true;
    bVar6 = true;
    puVar11[5] = local_a60._Widget.Object;
    puVar11[6] = CONCAT44(local_a60._Widget.SharedReferenceCount.ReferenceController._4_4_,
                          local_a60._Widget.SharedReferenceCount.ReferenceController._0_4_);
  }
  if (bVar8) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar21);
  }
  if (bVar9) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar21);
  }
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_a78.Accessor);
  }
  bVar9 = false;
  bVar8 = false;
  bVar6 = false;
  if (local_a48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a48.Accessor,&local_a48);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar10->_OnSelectionChanged
             ,(FWriteAccessScope *)&local_a48);
  local_a30 = (FDelegateAllocation *)&(pFVar10->_OnSelectionChanged).field_0x8;
  puVar11 = UE::Core::Private::DelegateAllocate(0x38,local_a30);
  if (puVar11 == (undefined8 *)0x0) {
    pTVar21 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_c,local_res8);
  }
  else {
    local_a60._Widget.SharedReferenceCount.ReferenceController._4_4_ =
         local_9b8.SharedReferenceCount.ReferenceController._4_4_;
    local_a60._Widget.Object = (STextBlock *)OnSelectionChanged;
    local_a60._Widget.SharedReferenceCount.ReferenceController._0_4_ = 0;
    pTVar12 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,
                         (TSharedRef<SWidget,1> *)&local_a78);
    pTVar21 = (pTVar12->SharedReferenceCount).ReferenceController;
    local_res18 = pTVar12->Object;
    if (pTVar21 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar21->SharedReferenceCount = (atomic<int>)((int)pTVar21->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar21->SharedReferenceCount = (atomic<int>)((int)pTVar21->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar6 = true;
    bVar9 = true;
    bVar8 = true;
    *puVar11 = &
               ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VFString___00__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar13 = FDelegateHandle::GenerateNewID();
    puVar11[2] = uVar13;
    *puVar11 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSTextComboBox___00__A6AXV__TSharedPtr_VFString___00__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar11[3] = local_res18;
    puVar11[4] = pTVar21;
    if (pTVar21 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar21->WeakReferenceCount = (atomic<int>)((int)pTVar21->WeakReferenceCount + 1);
      UNLOCK();
    }
    puVar11[5] = local_a60._Widget.Object;
    puVar11[6] = CONCAT44(local_a60._Widget.SharedReferenceCount.ReferenceController._4_4_,
                          local_a60._Widget.SharedReferenceCount.ReferenceController._0_4_);
  }
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar21);
  }
  if (bVar8) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar21);
  }
  if (bVar9) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_a78.Accessor);
  }
  bVar8 = false;
  bVar6 = false;
  if (local_a48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a48.Accessor,&local_a48);
  }
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&pFVar10->_OnComboBoxOpening,&param_1->_OnComboBoxOpening);
  pTVar21 = (param_1->_InitiallySelectedItem).SharedReferenceCount.ReferenceController;
  pFVar3 = (param_1->_InitiallySelectedItem).Object;
  if (pTVar21 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar21->SharedReferenceCount = (atomic<int>)((int)pTVar21->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar21->SharedReferenceCount = (atomic<int>)((int)pTVar21->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar4 = (pFVar10->_InitiallySelectedItem).SharedReferenceCount.ReferenceController;
  (pFVar10->_InitiallySelectedItem).Object = pFVar3;
  (pFVar10->_InitiallySelectedItem).SharedReferenceCount.ReferenceController = pTVar21;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar21);
  local_9e8._0_4_ = (param_1->_ContentPadding).Value.Left;
  local_9e8._4_4_ = (param_1->_ContentPadding).Value.Top;
  uStack_9e0._0_4_ = (param_1->_ContentPadding).Value.Right;
  uStack_9e0._4_4_ = (param_1->_ContentPadding).Value.Bottom;
  local_9d8 = (param_1->_ContentPadding).bIsSet;
  local_9c0 = 0;
  local_9d0 = (undefined1  [8])0x0;
  FStack_9c8.Data = (FScriptContainerElement *)0x0;
  TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy> *)local_9d0,
             &(param_1->_ContentPadding).Getter);
  (pFVar10->_ContentPadding).Value.Left = (float)(undefined4)local_9e8;
  (pFVar10->_ContentPadding).Value.Top = (float)local_9e8._4_4_;
  (pFVar10->_ContentPadding).Value.Right = (float)(undefined4)uStack_9e0;
  (pFVar10->_ContentPadding).Value.Bottom = (float)uStack_9e0._4_4_;
  (pFVar10->_ContentPadding).bIsSet = local_9d8;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar10->_ContentPadding).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_9d0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_9d0,
             (FWriteAccessScope *)&local_a78);
  if ((local_9c0 != 0) && (FStack_9c8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_9c8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_9c8,0,0,0x10);
    local_9c0 = 0;
  }
  if (local_a78.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a78.Accessor,&local_a78);
  }
  if (FStack_9c8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_9c8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_9d0);
  FVar14 = (FName)STextBlock::FArguments::FArguments(&local_5a8);
  local_a18._0_1_ = (param_1->_ColorAndOpacity).Value.ColorUseRule;
  local_a18._1_1_ = (param_1->_ColorAndOpacity).Value.ColorTableId;
  local_a18._2_2_ = *(undefined2 *)&(param_1->_ColorAndOpacity).Value.field_0x12;
  local_a28 = *(undefined8 *)&(param_1->_ColorAndOpacity).Value.SpecifiedColor.field0_0x0;
  uStack_a20 = *(undefined8 *)
                ((longlong)&(param_1->_ColorAndOpacity).Value.SpecifiedColor.field0_0x0 + 8);
  local_a14 = (param_1->_ColorAndOpacity).bIsSet;
  local_a10 = (undefined1  [8])0x0;
  FStack_a08.Data = (FScriptContainerElement *)0x0;
  local_a00 = 0;
  local_res20 = FVar14;
  TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy> *)local_a10,
             &(param_1->_ColorAndOpacity).Getter);
  *(undefined8 *)
   &(((TAttribute<FSlateColor> *)((longlong)FVar14 + 0x2d8))->Value).SpecifiedColor.field0_0x0 =
       local_a28;
  *(undefined8 *)((longlong)FVar14 + 0x2e0) = uStack_a20;
  *(undefined4 *)((longlong)FVar14 + 0x2e8) = local_a18;
  *(bool *)((longlong)FVar14 + 0x2ec) = local_a14;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)FVar14 + 0x2f0),
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_a10);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a10,
             (FWriteAccessScope *)&local_a78);
  if ((local_a00 != 0) && (FStack_a08.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_a08.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_a08,0,0,0x10);
    local_a00 = 0;
  }
  if (local_a78.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a78.Accessor,&local_a78);
  }
  if (FStack_a08.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_a08.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_a10);
  *(bool *)((longlong)FVar14 + 0x208) = true;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)FVar14 + 0x210),
             (FWriteAccessScope *)&local_a48);
  local_a30 = (FDelegateAllocation *)((longlong)FVar14 + 0x218);
  puVar11 = UE::Core::Private::DelegateAllocate(0x38,local_a30);
  if (puVar11 == (undefined8 *)0x0) {
    pTVar21 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_c,local_res8);
  }
  else {
    local_a60._Widget.SharedReferenceCount.ReferenceController._4_4_ =
         local_9b8.SharedReferenceCount.ReferenceController._4_4_;
    local_a60._Widget.Object = (STextBlock *)GetSelectedTextLabel;
    local_a60._Widget.SharedReferenceCount.ReferenceController._0_4_ = 0;
    pTVar15 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,
                         (TSharedRef<SWidget_const_,1> *)&local_a78);
    pTVar21 = (pTVar15->SharedReferenceCount).ReferenceController;
    local_res18 = pTVar15->Object;
    if (pTVar21 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar21->SharedReferenceCount = (atomic<int>)((int)pTVar21->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar21->SharedReferenceCount = (atomic<int>)((int)pTVar21->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar6 = true;
    bVar8 = true;
    *puVar11 = &
               ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar13 = FDelegateHandle::GenerateNewID();
    puVar11[2] = uVar13;
    *puVar11 = &
               ___7__TBaseSPMethodDelegateInstance__00__CBVSTextComboBox___00__A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar11[3] = local_res18;
    puVar11[4] = pTVar21;
    if (pTVar21 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar21->WeakReferenceCount = (atomic<int>)((int)pTVar21->WeakReferenceCount + 1);
      UNLOCK();
    }
    puVar11[5] = local_a60._Widget.Object;
    puVar11[6] = CONCAT44(local_a60._Widget.SharedReferenceCount.ReferenceController._4_4_,
                          local_a60._Widget.SharedReferenceCount.ReferenceController._0_4_);
  }
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar21);
  }
  if (bVar8) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_a78.Accessor);
  }
  if (local_a48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a48.Accessor,&local_a48);
  }
  FSlateFontInfo::FSlateFontInfo(&local_988.Value,&(param_1->_Font).Value);
  local_988.bIsSet = (param_1->_Font).bIsSet;
  local_988.Getter._0_8_ = 0;
  local_988.Getter._8_8_ = 0;
  local_988.Getter._16_4_ = 0;
  TDelegate<FSlateFontInfo___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&local_988.Getter,
             (TDelegate<FSlateFontInfo___cdecl(void),FDefaultDelegateUserPolicy> *)local_a88);
  pFVar16 = STextBlock::FArguments::Font((FArguments *)local_res20,&local_988);
  FLLMScope::FLLMScope
            ((FLLMScope *)&local_res18,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true
            );
  local_res20 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_a88,&local_res20,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            (&local_a60,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\STextComboBox.cpp"
             ,0x19,(T0RequiredArgs *)&local_res8);
  FMemScope::~FMemScope(&local_a88);
  FLLMScope::~FLLMScope((FLLMScope *)&local_res18);
  pTVar17 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_a60,&local_9b8,pFVar16);
  pTVar21 = (pTVar17->SharedReferenceCount).ReferenceController;
  local_a88 = (FMemScope)pTVar17->Object;
  if (pTVar21 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar21->SharedReferenceCount = (atomic<int>)((int)pTVar21->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar21->SharedReferenceCount = (atomic<int>)((int)pTVar21->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar4 = (pFVar10->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar10->_Content).Widget.Object = (SWidget *)local_a88;
  (pFVar10->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar21;
  pTStack_a80 = pTVar21;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  FLLMScope::FLLMScope
            ((FLLMScope *)&local_res18,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true
            );
  local_res20 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_a88,&local_res20,true);
  TSlateDecl<SComboBox<TSharedPtr<FString,1>_>,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SComboBox<TSharedPtr<FString,1>_>,RequiredArgs::T0RequiredArgs>
            ((TSlateDecl<SComboBox<TSharedPtr<FString,1>_>,RequiredArgs::T0RequiredArgs> *)
             &local_a78,"SComboBox< TSharedPtr<FString> >",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\STextComboBox.cpp"
             ,0xf,local_res10);
  FMemScope::~FMemScope(&local_a88);
  FLLMScope::~FLLMScope((FLLMScope *)&local_res18);
  if ((TReferenceControllerBase<1> *)local_a78.Accessor != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *(atomic<int> *)((longlong)local_a78.Accessor + 8) =
         (atomic<int>)((int)*(atomic<int> *)((longlong)local_a78.Accessor + 8) + 1);
    UNLOCK();
  }
  pTVar4 = (this->StringCombo).SharedReferenceCount.ReferenceController;
  (this->StringCombo).Object = (SComboBox<TSharedPtr<FString,1>_> *)local_a78._0_8_;
  (this->StringCombo).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)local_a78.Accessor;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  pTVar18 = TSlateDecl<SComboBox<TSharedPtr<FString,1>_>,RequiredArgs::T0RequiredArgs>::operator<<=
                      ((TSlateDecl<SComboBox<TSharedPtr<FString,1>_>,RequiredArgs::T0RequiredArgs> *
                       )&local_a78,&local_998,pFVar10);
  this_00 = &this->_padding_;
  pTVar4 = (pTVar18->SharedReferenceCount).ReferenceController;
  FVar5 = (FMemScope)pTVar18->Object;
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    FSlotBase::DetatchParentFromContent((FSlotBase *)this_00);
  }
  else {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    FSlotBase::DetatchParentFromContent((FSlotBase *)this_00);
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar7 = (TReferenceControllerBase<1> *)this->_padding_;
  this->_padding_ = (longlong)FVar5;
  this->_padding_ = (longlong)pTVar4;
  local_a88 = FVar5;
  pTStack_a80 = pTVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)this_00);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_998.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_a78.Accessor);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar21);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)
             CONCAT44(local_9b8.SharedReferenceCount.ReferenceController._4_4_,
                      local_9b8.SharedReferenceCount.ReferenceController._0_4_));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)
             CONCAT44(local_a60._Widget.SharedReferenceCount.ReferenceController._4_4_,
                      local_a60._Widget.SharedReferenceCount.ReferenceController._0_4_));
  STextBlock::FArguments::~FArguments(&local_5a8);
  SComboBox<TSharedPtr<FString,1>_>::FArguments::~FArguments(&local_908);
  pSVar19 = TSharedPtr<SComboBox<TSharedPtr<FString,1>_>,1>::operator->(&this->StringCombo);
  local_9f0.ReferenceController = (pSVar19->SelectedItem).SharedReferenceCount.ReferenceController;
  local_9f8 = (pSVar19->SelectedItem).Object;
  if (local_9f0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_9f0.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_9f0.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->SelectedItem != (TSharedPtr<FString,1> *)&local_9f8) {
    (this->SelectedItem).Object = local_9f8;
    local_9f8 = (FString *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->SelectedItem).SharedReferenceCount,&local_9f0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_9f0.ReferenceController);
  return;
}

// GetItemTextLabel @ 1429415d0

FText * __thiscall
STextComboBox::GetItemTextLabel
          (STextComboBox *this,FText *__return_storage_ptr__,TSharedPtr<FString,1> *param_1)

{
  ITextData *pIVar1;
  longlong *plVar2;
  FScriptContainerElement *_Src;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  FText *pFVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 local_res18 [8];
  FString local_78;
  FString *local_68;
  TReferenceControllerBase<1> *local_60;
  FString local_58;
  FReadAccessScope local_48;
  FReadAccessScope local_30;
  
  plVar8 = (longlong *)0x0;
  if (param_1->Object == (FString *)0x0) {
    pFVar6 = FText::GetEmpty();
    (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
    pIVar1 = (pFVar6->TextData).Reference;
    (__return_storage_ptr__->TextData).Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res18);
    }
    __return_storage_ptr__->Flags = pFVar6->Flags;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    return __return_storage_ptr__;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->GetTextLabelForItem,
             &local_48);
  if (((*(int *)&(this->GetTextLabelForItem).field_0x10 == 0) ||
      (plVar2 = *(longlong **)&(this->GetTextLabelForItem).field_0x8, plVar2 == (longlong *)0x0)) ||
     (cVar4 = (**(code **)(*plVar2 + 0x38))(), cVar4 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_48);
    if ((param_1->Object == (FString *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FText *)(*pcVar3)();
      return pFVar6;
    }
    local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Data.ArrayNum = (param_1->Object->Data).ArrayNum;
    lVar7 = (longlong)local_78.Data.ArrayNum;
    _Src = (param_1->Object->Data).AllocatorInstance.Data;
    if (local_78.Data.ArrayNum == 0) {
      local_78.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_78.Data.ArrayNum,0,(ForAnyElementType *)&local_78,local_78.Data.ArrayNum,
                 &local_78.Data.ArrayMax);
      memcpy(local_78.Data.AllocatorInstance.Data,_Src,lVar7 * 2);
    }
    FText::FromString(__return_storage_ptr__,&local_78);
    local_58.Data.AllocatorInstance.Data = local_78.Data.AllocatorInstance.Data;
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_48);
    local_68 = param_1->Object;
    local_60 = (param_1->SharedReferenceCount).ReferenceController;
    if (local_60 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_60->SharedReferenceCount = (atomic<int>)((int)local_60->SharedReferenceCount + 1);
      UNLOCK();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->GetTextLabelForItem,
               &local_30);
    if (*(int *)&(this->GetTextLabelForItem).field_0x10 != 0) {
      plVar8 = *(longlong **)&(this->GetTextLabelForItem).field_0x8;
    }
    (**(code **)(*plVar8 + 0x60))(plVar8,&local_58,&local_68);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_30);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    FText::FromString(__return_storage_ptr__,&local_58);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// GetSelectedTextLabel @ 142948ae0

FText * __thiscall
STextComboBox::GetSelectedTextLabel(STextComboBox *this,FText *__return_storage_ptr__)

{
  SComboBox<TSharedPtr<FString,1>_> *pSVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  FText *pFVar5;
  TSharedPtr<FString,1> local_18;
  
  if ((this->StringCombo).Object == (SComboBox<TSharedPtr<FString,1>_> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FText *)(*pcVar3)();
      return pFVar5;
    }
  }
  pSVar1 = (this->StringCombo).Object;
  pTVar2 = (pSVar1->SelectedItem).SharedReferenceCount.ReferenceController;
  local_18.Object = (pSVar1->SelectedItem).Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18.SharedReferenceCount.ReferenceController = pTVar2;
  GetItemTextLabel(this,__return_storage_ptr__,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return __return_storage_ptr__;
}

// MakeItemWidget @ 1429589d0

TSharedRef<SWidget,1> * __thiscall
STextComboBox::MakeItemWidget
          (STextComboBox *this,TSharedRef<SWidget,1> *__return_storage_ptr__,
          TSharedPtr<FString,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<SWidget,1> *pTVar4;
  FArguments *pFVar5;
  TSharedRef<STextBlock,1> *pTVar6;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res10 [2];
  FName local_res18;
  FMemScope local_res20;
  code *local_668;
  undefined8 uStack_660;
  TSharedPtr<FString,1> local_658;
  FDestructionSentinel local_648;
  FSlateFontInfo local_630;
  bool local_5d0;
  undefined1 local_5c8 [8];
  ForAnyElementType FStack_5c0;
  int local_5b8;
  TSharedRef<STextBlock,1> local_5b0;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_5a0;
  FArguments local_588;
  
  if (param_1->Object == (FString *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("StringItem.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\STextComboBox.cpp"
                       ,0x39,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<SWidget,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  pFVar5 = STextBlock::FArguments::FArguments(&local_588);
  local_658.Object = param_1->Object;
  local_658.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_658.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_658.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_658.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  uStack_660 = (ulonglong)uStack_660._4_4_ << 0x20;
  local_668 = GetItemTextLabel;
  pFVar5 = STextBlock::FArguments::Text<STextComboBox,TSharedPtr<FString,1>_>
                     (pFVar5,this,(pmf_88177215 *)&local_668,&local_658);
  FSlateFontInfo::FSlateFontInfo(&local_630,&(this->Font).Value);
  local_5d0 = (this->Font).bIsSet;
  local_5b8 = 0;
  local_5c8 = (undefined1  [8])0x0;
  FStack_5c0.Data = (FScriptContainerElement *)0x0;
  TDelegate<FSlateFontInfo___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FSlateFontInfo___cdecl(void),FDefaultDelegateUserPolicy> *)local_5c8,
             &(this->Font).Getter);
  FSlateFontInfo::operator=(&(pFVar5->_Font).Value,&local_630);
  (pFVar5->_Font).bIsSet = local_5d0;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar5->_Font).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_5c8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_5c8,
             (FWriteAccessScope *)&local_648);
  if ((local_5b8 != 0) && (FStack_5c0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_5c0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_5c0,0,0,0x10);
    local_5b8 = 0;
  }
  if (local_648.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_648.Accessor,&local_648);
  }
  if (FStack_5c0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_5c0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_5c8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_630.CompositeFont.SharedReferenceCount.ReferenceController);
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_res20,&local_res18,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            (&local_5a0,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\STextComboBox.cpp"
             ,0x3b,local_res8);
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res10);
  pTVar6 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                     (&local_5a0,&local_5b0,pFVar5);
  __return_storage_ptr__->Object = (SWidget *)pTVar6->Object;
  pTVar1 = (pTVar6->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5b0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5a0._Widget.SharedReferenceCount.ReferenceController);
  STextBlock::FArguments::~FArguments(&local_588);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// OnSelectionChanged @ 1429826e0

void __thiscall
STextComboBox::OnSelectionChanged(STextComboBox *this,TSharedPtr<FString,1> *param_1,Type param_2)

{
  FString *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedPtr<FString,1> local_18;
  
  pFVar1 = param_1->Object;
  if (pFVar1 != (FString *)0x0) {
    pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar3 = (this->SelectedItem).SharedReferenceCount.ReferenceController;
    (this->SelectedItem).Object = pFVar1;
    (this->SelectedItem).SharedReferenceCount.ReferenceController = pTVar2;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  local_18.Object = param_1->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  TDelegate<void___cdecl(TSharedPtr<FString,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>::
  ExecuteIfBound(&this->SelectionChanged,&local_18,param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// RefreshOptions @ 1429882d0

void __thiscall STextComboBox::RefreshOptions(STextComboBox *this)

{
  SComboBox<TSharedPtr<FString,1>_> *pSVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((this->StringCombo).Object == (SComboBox<TSharedPtr<FString,1>_> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pSVar1 = (this->StringCombo).Object;
  if ((pSVar1->ComboListView).Object == (SListView<TSharedPtr<FString,1>_> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014298834f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(((pSVar1->ComboListView).Object)->_padding_ + 0x248))();
  return;
}

// SetSelectedItem @ 142999460

void __thiscall STextComboBox::SetSelectedItem(STextComboBox *this,TSharedPtr<FString,1> *param_1)

{
  SComboBox<TSharedPtr<FString,1>_> *this_00;
  code *pcVar1;
  bool bVar2;
  TSharedPtr<FString,1> local_18;
  
  if ((this->StringCombo).Object == (SComboBox<TSharedPtr<FString,1>_> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_18.Object = param_1->Object;
  this_00 = (this->StringCombo).Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SComboBox<TSharedPtr<FString,1>_>::SetSelectedItem(this_00,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

