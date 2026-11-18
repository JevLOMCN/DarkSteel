// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 20

// Construct @ 1428fd230

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SInputKeySelector::Construct(SInputKeySelector *this,FArguments *param_1)

{
  int *piVar1;
  TArray<FKey,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  ITextData *pIVar4;
  ITextData *pIVar5;
  FKey *pFVar6;
  SWidget *pSVar7;
  TReferenceControllerBase<1> *pTVar8;
  SButton *pSVar9;
  TReferenceControllerBase<1> *pTVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  FArguments *pFVar14;
  undefined8 *puVar15;
  TSharedRef<SWidget,1> *pTVar16;
  ulong64 uVar17;
  FArguments *pFVar18;
  TSharedRef<SWidget_const_,1> *pTVar19;
  TSharedRef<STextBlock,1> *pTVar20;
  TSharedRef<SButton,1> *pTVar21;
  longlong *plVar22;
  TReferenceControllerBase<1> *pTVar23;
  undefined4 local_res8;
  undefined4 uStackX_c;
  T0RequiredArgs local_res10 [8];
  SWidget *local_res18;
  FLLMScope local_res20 [2];
  longlong lStack_cc0;
  undefined1 local_cb8 [8];
  ForAnyElementType local_cb0;
  int local_ca8;
  undefined4 local_ca0;
  undefined1 local_c9c;
  undefined1 local_c98 [8];
  ForAnyElementType FStack_c90;
  ulonglong local_c88;
  undefined8 local_c80;
  undefined8 uStack_c78;
  bool local_c70;
  undefined1 local_c68 [8];
  ForAnyElementType FStack_c60;
  int local_c58;
  STextBlock *local_c50;
  TReferenceControllerBase<1> *pTStack_c48;
  undefined1 local_c40 [4];
  undefined1 local_c3c [4];
  FName local_c38;
  FMemScope local_c30;
  FArguments *local_c28;
  FName local_c20;
  FMemScope local_c18;
  TSharedRef<STextBlock,1> local_c10;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_c00;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_be8;
  FDestructionSentinel local_bd0;
  FDestructionSentinel local_bb8;
  FDestructionSentinel local_ba0;
  FDestructionSentinel local_b88;
  undefined1 *local_b70;
  FDestructionSentinel local_b68;
  undefined1 *local_b50;
  TSharedRef<SWidget,1> local_b48;
  TSharedRef<SWidget_const_,1> local_b38;
  STextBlock *local_b28;
  TReferenceControllerBase<1> *pTStack_b20;
  SButton *local_b18;
  TReferenceControllerBase<1> *pTStack_b10;
  TSharedRef<SButton,1> local_b08;
  FReadAccessScope local_af8;
  FArguments local_ae0;
  FArguments local_5a0;
  
  bVar13 = false;
  bVar12 = false;
  bVar11 = false;
  local_res8 = 0;
  TAttribute<FInputChord>::operator=(&this->SelectedKey,&param_1->_SelectedKey);
  pIVar4 = (param_1->_KeySelectionText).TextData.Reference;
  pIVar5 = (this->KeySelectionText).TextData.Reference;
  if (pIVar5 != pIVar4) {
    (this->KeySelectionText).TextData.Reference = pIVar4;
    if (pIVar4 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar4 + 8))(pIVar4,local_c40);
    }
    if (pIVar5 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar5 + 0x10))(pIVar5);
    }
  }
  (this->KeySelectionText).Flags = (param_1->_KeySelectionText).Flags;
  pIVar4 = (param_1->_NoKeySpecifiedText).TextData.Reference;
  pIVar5 = (this->NoKeySpecifiedText).TextData.Reference;
  if (pIVar5 != pIVar4) {
    (this->NoKeySpecifiedText).TextData.Reference = pIVar4;
    if (pIVar4 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar4 + 8))(pIVar4,local_c3c);
    }
    if (pIVar5 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar5 + 0x10))(pIVar5);
    }
  }
  (this->NoKeySpecifiedText).Flags = (param_1->_NoKeySpecifiedText).Flags;
  if (&param_1->_OnKeySelected != &this->OnKeySelected) {
    local_cb8 = (undefined1  [8])0x0;
    local_cb0.Data = (FScriptContainerElement *)0x0;
    local_ca8 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->_OnKeySelected,
               &local_af8);
    if ((*(int *)&(param_1->_OnKeySelected).field_0x10 != 0) &&
       (plVar22 = *(longlong **)&(param_1->_OnKeySelected).field_0x8, plVar22 != (longlong *)0x0)) {
      (**(code **)(*plVar22 + 0x50))(plVar22,local_cb8);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_af8);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnKeySelected,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_cb8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_cb8,
               (FWriteAccessScope *)&local_bd0);
    if ((local_ca8 != 0) && (local_cb0.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_cb0.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_cb0,0,0,0x10);
      local_ca8 = 0;
    }
    if (local_bd0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_bd0.Accessor,&local_bd0);
    }
    if (local_cb0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_cb0.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_cb8);
  }
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->OnIsSelectingKeyChanged,&param_1->_OnIsSelectingKeyChanged);
  this->bAllowModifierKeys = param_1->_AllowModifierKeys;
  pTVar2 = &this->EscapeKeys;
  this->bAllowGamepadKeys = param_1->_AllowGamepadKeys;
  this->bEscapeCancelsSelection = param_1->_EscapeCancelsSelection;
  if (pTVar2 != &param_1->_EscapeKeys) {
    DestructItems<FKey,int>((FKey *)(pTVar2->AllocatorInstance).Data,(this->EscapeKeys).ArrayNum);
    iVar3 = (param_1->_EscapeKeys).ArrayNum;
    piVar1 = &(this->EscapeKeys).ArrayMax;
    pFVar6 = (FKey *)(param_1->_EscapeKeys).AllocatorInstance.Data;
    (this->EscapeKeys).ArrayNum = iVar3;
    if ((iVar3 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,iVar3,*piVar1,&pTVar2->AllocatorInstance,iVar3,piVar1);
      ConstructItems<FKey,FKey,int>((pTVar2->AllocatorInstance).Data,pFVar6,iVar3);
    }
  }
  this->bIsFocusable = param_1->_IsFocusable;
  this->bIsSelectingKey = false;
  pFVar14 = SButton::FArguments::FArguments(&local_ae0);
  pFVar14->_ButtonStyle = param_1->_ButtonStyle;
  pFVar14->_IsFocusable = this->bIsFocusable;
  local_c28 = pFVar14;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar14->_OnClicked,
             (FWriteAccessScope *)&local_b88);
  local_b70 = &(pFVar14->_OnClicked).field_0x8;
  puVar15 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_b70);
  if (puVar15 == (undefined8 *)0x0) {
    pTVar23 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_c,local_res8);
  }
  else {
    lStack_cc0 = (ulonglong)local_c10.SharedReferenceCount.ReferenceController._4_4_ << 0x20;
    pTVar16 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_b48);
    pTVar23 = (pTVar16->SharedReferenceCount).ReferenceController;
    pSVar7 = pTVar16->Object;
    if (pTVar23 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar23->SharedReferenceCount = (atomic<int>)((int)pTVar23->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar23->SharedReferenceCount = (atomic<int>)((int)pTVar23->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar15 = &
               ___7__TCommonDelegateInstanceState___A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar17 = FDelegateHandle::GenerateNewID();
    puVar15[2] = uVar17;
    *puVar15 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSInputKeySelector___00__A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar15[3] = pSVar7;
    puVar15[4] = pTVar23;
    if (pTVar23 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar23->WeakReferenceCount = (atomic<int>)((int)pTVar23->WeakReferenceCount + 1);
      UNLOCK();
    }
    bVar13 = true;
    bVar12 = true;
    bVar11 = true;
    puVar15[5] = OnClicked;
    puVar15[6] = lStack_cc0;
  }
  if (bVar11) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar23);
  }
  if (bVar12) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar23);
  }
  if (bVar13) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_b48.SharedReferenceCount.ReferenceController);
  }
  bVar13 = false;
  bVar12 = false;
  bVar11 = false;
  if (local_b88.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b88.Accessor,&local_b88);
  }
  pFVar18 = STextBlock::FArguments::FArguments(&local_5a0);
  (pFVar18->_Text).bIsSet = true;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(pFVar18->_Text).Getter,
             (FWriteAccessScope *)&local_b68);
  local_b50 = &(pFVar18->_Text).Getter.field_0x8;
  puVar15 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_b50);
  if (puVar15 == (undefined8 *)0x0) {
    pTVar23 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_c,local_res8);
  }
  else {
    lStack_cc0 = (ulonglong)local_c10.SharedReferenceCount.ReferenceController._4_4_ << 0x20;
    pTVar19 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_b38);
    pTVar23 = (pTVar19->SharedReferenceCount).ReferenceController;
    local_res18 = pTVar19->Object;
    if (pTVar23 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar23->SharedReferenceCount = (atomic<int>)((int)pTVar23->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar23->SharedReferenceCount = (atomic<int>)((int)pTVar23->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar13 = true;
    bVar12 = true;
    bVar11 = true;
    *puVar15 = &
               ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar17 = FDelegateHandle::GenerateNewID();
    puVar15[2] = uVar17;
    *puVar15 = &
               ___7__TBaseSPMethodDelegateInstance__00__CBVSInputKeySelector___00__A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar15[3] = local_res18;
    puVar15[4] = pTVar23;
    if (pTVar23 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar23->WeakReferenceCount = (atomic<int>)((int)pTVar23->WeakReferenceCount + 1);
      UNLOCK();
    }
    puVar15[5] = GetSelectedKeyText;
    puVar15[6] = lStack_cc0;
  }
  if (bVar11) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar23);
  }
  if (bVar12) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar23);
  }
  if (bVar13) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_b38.SharedReferenceCount.ReferenceController);
  }
  if (local_b68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b68.Accessor,&local_b68);
  }
  pFVar18->_TextStyle = param_1->_TextStyle;
  local_c80._0_4_ = (this->Margin).Value.Left;
  local_c80._4_4_ = (this->Margin).Value.Top;
  uStack_c78._0_4_ = (this->Margin).Value.Right;
  uStack_c78._4_4_ = (this->Margin).Value.Bottom;
  local_c70 = (this->Margin).bIsSet;
  local_c58 = 0;
  local_c68 = (undefined1  [8])0x0;
  FStack_c60.Data = (FScriptContainerElement *)0x0;
  TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy> *)local_c68,
             &(this->Margin).Getter);
  (pFVar18->_Margin).Value.Left = (float)(undefined4)local_c80;
  (pFVar18->_Margin).Value.Top = (float)local_c80._4_4_;
  (pFVar18->_Margin).Value.Right = (float)(undefined4)uStack_c78;
  (pFVar18->_Margin).Value.Bottom = (float)uStack_c78._4_4_;
  (pFVar18->_Margin).bIsSet = local_c70;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar18->_Margin).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_c68);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c68,
             (FWriteAccessScope *)&local_bb8);
  if ((local_c58 != 0) && (FStack_c60.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_c60.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_c60,0,0,0x10);
    local_c58 = 0;
  }
  if (local_bb8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_bb8.Accessor,&local_bb8);
  }
  if (FStack_c60.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_c60.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_c68);
  local_c9c = 1;
  local_ca0 = 1;
  local_c88 = 0;
  local_c98 = (undefined1  [8])0x0;
  FStack_c90.Data = (FScriptContainerElement *)0x0;
  (pFVar18->_Justification).Value = Center;
  (pFVar18->_Justification).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar18->_Justification).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_c98);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c98,
             (FWriteAccessScope *)&local_ba0);
  if (((int)local_c88 != 0) && (FStack_c90.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_c90.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_c90,0,0,0x10);
    local_c88 = local_c88 & 0xffffffff00000000;
  }
  if (local_ba0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_ba0.Accessor,&local_ba0);
  }
  if (FStack_c90.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_c90.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_c98);
  FLLMScope::FLLMScope
            ((FLLMScope *)&local_res18,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true
            );
  local_c38 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_c30,&local_c38,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            (&local_be8,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SInputKeySelector.cpp"
             ,0x1e,(T0RequiredArgs *)&local_res8);
  FMemScope::~FMemScope(&local_c30);
  FLLMScope::~FLLMScope((FLLMScope *)&local_res18);
  if (local_be8._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_be8._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_be8._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_b28 = (this->TextBlock).Object;
  pTStack_b20 = (this->TextBlock).SharedReferenceCount.ReferenceController;
  (this->TextBlock).Object = local_be8._Widget.Object;
  (this->TextBlock).SharedReferenceCount.ReferenceController =
       local_be8._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_b20);
  pTVar20 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_be8,&local_c10,pFVar18);
  pFVar14 = local_c28;
  pTVar23 = (pTVar20->SharedReferenceCount).ReferenceController;
  local_c50 = pTVar20->Object;
  if (pTVar23 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar23->SharedReferenceCount = (atomic<int>)((int)pTVar23->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar23->SharedReferenceCount = (atomic<int>)((int)pTVar23->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar8 = (local_c28->_Content).Widget.SharedReferenceCount.ReferenceController;
  (local_c28->_Content).Widget.Object = (SWidget *)local_c50;
  (local_c28->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar23;
  pTStack_c48 = pTVar23;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  FLLMScope::FLLMScope(local_res20,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_c20 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_c18,&local_c20,true);
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>
            (&local_c00,"SButton",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SInputKeySelector.cpp"
             ,0x19,local_res10);
  FMemScope::~FMemScope(&local_c18);
  FLLMScope::~FLLMScope(local_res20);
  if (local_c00._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_c00._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_c00._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_b18 = (this->Button).Object;
  pTStack_b10 = (this->Button).SharedReferenceCount.ReferenceController;
  (this->Button).Object = local_c00._Widget.Object;
  (this->Button).SharedReferenceCount.ReferenceController =
       local_c00._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_b10);
  pTVar21 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_c00,&local_b08,pFVar14);
  plVar22 = &this->_padding_;
  pTVar8 = (pTVar21->SharedReferenceCount).ReferenceController;
  pSVar9 = pTVar21->Object;
  if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
    FSlotBase::DetatchParentFromContent((FSlotBase *)plVar22);
  }
  else {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
    FSlotBase::DetatchParentFromContent((FSlotBase *)plVar22);
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar10 = (TReferenceControllerBase<1> *)this->_padding_;
  this->_padding_ = (longlong)pSVar9;
  this->_padding_ = (longlong)pTVar8;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)plVar22);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b08.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c00._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar23);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)
             CONCAT44(local_c10.SharedReferenceCount.ReferenceController._4_4_,
                      local_c10.SharedReferenceCount.ReferenceController._0_4_));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_be8._Widget.SharedReferenceCount.ReferenceController);
  STextBlock::FArguments::~FArguments(&local_5a0);
  SButton::FArguments::~FArguments(&local_ae0);
  return;
}

// GetMargin @ 142941b70

FMargin * __thiscall
SInputKeySelector::GetMargin(SInputKeySelector *this,FMargin *__return_storage_ptr__)

{
  float fVar1;
  float fVar2;
  float fVar3;
  FMargin *pFVar4;
  
  pFVar4 = TAttribute<FMargin>::Get(&this->Margin);
  fVar1 = pFVar4->Top;
  fVar2 = pFVar4->Right;
  fVar3 = pFVar4->Bottom;
  __return_storage_ptr__->Left = pFVar4->Left;
  __return_storage_ptr__->Top = fVar1;
  __return_storage_ptr__->Right = fVar2;
  __return_storage_ptr__->Bottom = fVar3;
  return __return_storage_ptr__;
}

// GetSelectedKey @ 1429485f0

FInputChord * __thiscall
SInputKeySelector::GetSelectedKey(SInputKeySelector *this,FInputChord *__return_storage_ptr__)

{
  bool bVar1;
  bool bVar2;
  FInputChord *pFVar3;
  uint uVar4;
  FSharedReferencer<1> FVar5;
  uint uVar6;
  FName FVar7;
  FKeyDetails *pFVar8;
  
  FVar5.ReferenceController = EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController;
  pFVar8 = EKeys::Invalid.KeyDetails.Object;
  FVar7 = EKeys::Invalid.KeyName;
  bVar1 = false;
  if ((this->SelectedKey).bIsSet == false) {
    if (EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      (FVar5.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar5.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    uVar6 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar5.ReferenceController);
    bVar2 = false;
    bVar1 = true;
  }
  else {
    pFVar3 = TAttribute<FInputChord>::Get(&this->SelectedKey);
    FVar5.ReferenceController = (pFVar3->Key).KeyDetails.SharedReferenceCount.ReferenceController;
    FVar7 = (pFVar3->Key).KeyName;
    pFVar8 = (pFVar3->Key).KeyDetails.Object;
    if (FVar5.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar5.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar5.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar2 = true;
    uVar6 = *(uint *)&pFVar3->field_0x18 & 0xf;
  }
  (__return_storage_ptr__->Key).KeyName = FVar7;
  (__return_storage_ptr__->Key).KeyDetails.Object = pFVar8;
  (__return_storage_ptr__->Key).KeyDetails.SharedReferenceCount.ReferenceController =
       FVar5.ReferenceController;
  if (FVar5.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar5.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar5.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  uVar4 = (__return_storage_ptr__->bShift ^ uVar6) & 1 ^
          *(uint *)&__return_storage_ptr__->field_0x18;
  uVar4 = (uVar4 ^ uVar6) & 2 ^ uVar4;
  uVar4 = (uVar4 ^ uVar6) & 4 ^ uVar4;
  *(uint *)&__return_storage_ptr__->field_0x18 = (uVar4 ^ uVar6) & 8 ^ uVar4;
  if (bVar1) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar5.ReferenceController);
  }
  if (bVar2) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar5.ReferenceController);
  }
  return __return_storage_ptr__;
}

// GetSelectedKeyText @ 142948760

FText * __thiscall
SInputKeySelector::GetSelectedKeyText(SInputKeySelector *this,FText *__return_storage_ptr__)

{
  ITextData *pIVar1;
  bool bVar2;
  FInputChord *pFVar3;
  FText *pFVar4;
  undefined1 local_res8 [8];
  FText local_28;
  FText local_18;
  
  if (this->bIsSelectingKey != false) {
    (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
    pIVar1 = (this->KeySelectionText).TextData.Reference;
    (__return_storage_ptr__->TextData).Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    }
    __return_storage_ptr__->Flags = (this->KeySelectionText).Flags;
    return __return_storage_ptr__;
  }
  if ((this->SelectedKey).bIsSet != false) {
    pFVar3 = TAttribute<FInputChord>::Get(&this->SelectedKey);
    bVar2 = FKey::IsValid(&pFVar3->Key);
    if (bVar2) {
      pFVar3 = TAttribute<FInputChord>::Get(&this->SelectedKey);
      bVar2 = FKey::IsModifierKey(&pFVar3->Key);
      if (bVar2) {
        pFVar3 = TAttribute<FInputChord>::Get(&this->SelectedKey);
        pFVar4 = FKey::GetDisplayName(&pFVar3->Key,&local_28,true);
        FText::FText(__return_storage_ptr__,pFVar4);
      }
      else {
        pFVar3 = TAttribute<FInputChord>::Get(&this->SelectedKey);
        pFVar4 = FInputChord::GetInputText(pFVar3,&local_18,true);
        FText::FText(__return_storage_ptr__,pFVar4);
        local_28.TextData.Reference = local_18.TextData.Reference;
      }
      if (local_28.TextData.Reference == (ITextData *)0x0) {
        return __return_storage_ptr__;
      }
      (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
      return __return_storage_ptr__;
    }
  }
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar1 = (this->NoKeySpecifiedText).TextData.Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  __return_storage_ptr__->Flags = (this->NoKeySpecifiedText).Flags;
  return __return_storage_ptr__;
}

// IsEscapeKey @ 142954080

bool __thiscall SInputKeySelector::IsEscapeKey(SInputKeySelector *this,FKey *param_1)

{
  FName *pFVar1;
  FName *pFVar2;
  
  pFVar2 = (FName *)(this->EscapeKeys).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (longlong)(this->EscapeKeys).ArrayNum * 3;
  if (pFVar2 != pFVar1) {
    do {
      if (*pFVar2 == param_1->KeyName) {
        return true;
      }
      pFVar2 = pFVar2 + 3;
    } while (pFVar2 != pFVar1);
  }
  return false;
}

// OnClicked @ 1429618c0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SInputKeySelector::OnClicked(SInputKeySelector *this,FReply *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  SWidget *pSVar2;
  TSharedRef<SWidget,1> *pTVar3;
  FReply *pFVar4;
  TSharedRef<SWidget,1> local_e8;
  TSharedRef<SWidget,1> local_d8;
  FReply local_c8;
  
  if (this->bIsSelectingKey == false) {
    SetIsSelectingKey(this,true);
    FReply::FReply(&local_c8,true);
    pTVar3 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_d8);
    pTVar1 = (pTVar3->SharedReferenceCount).ReferenceController;
    pSVar2 = pTVar3->Object;
    if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_d8.SharedReferenceCount.ReferenceController);
    }
    else {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_d8.SharedReferenceCount.ReferenceController);
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_e8.Object = pSVar2;
    local_e8.SharedReferenceCount.ReferenceController = pTVar1;
    pFVar4 = FReply::SetUserFocus(&local_c8,&local_e8,SetDirectly,false);
    FReply::FReply(__return_storage_ptr__,pFVar4);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    FReply::~FReply(&local_c8);
  }
  else {
    FReply::FReply(__return_storage_ptr__,true);
  }
  return __return_storage_ptr__;
}

// OnFocusLost @ 142964aa0

void __thiscall SInputKeySelector::OnFocusLost(SInputKeySelector *this,FFocusEvent *param_1)

{
  if (this->bIsSelectingKey != false) {
    SetIsSelectingKey(this,false);
    return;
  }
  return;
}

// OnKeyDown @ 142968930

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SInputKeySelector::OnKeyDown
          (SInputKeySelector *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FKeyEvent *param_2)

{
  FName FVar1;
  SButton *pSVar2;
  bool bVar3;
  FInputChord *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  uint uStackX_c;
  FInputChord local_78;
  TAttribute<FInputChord> local_58;
  
  bVar6 = false;
  if (this->bIsSelectingKey != false) goto LAB_142968aa5;
  if ((this->SelectedKey).bIsSet == false) {
LAB_1429689bb:
    pTVar5 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
LAB_1429689c3:
    bVar3 = false;
  }
  else {
    pFVar4 = TAttribute<FInputChord>::Get(&this->SelectedKey);
    bVar3 = FKey::IsValid(&pFVar4->Key);
    if ((!bVar3) || (this->bAllowGamepadKeys == false)) goto LAB_1429689bb;
    pTVar5 = (param_2->Key).KeyDetails.SharedReferenceCount.ReferenceController;
    FVar1 = (param_2->Key).KeyName;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar6 = true;
    if (FVar1 != EKeys::Gamepad_FaceButton_Left.KeyName) goto LAB_1429689c3;
    bVar3 = true;
  }
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  }
  if (bVar3) {
    pFVar4 = FInputChord::FInputChord(&local_78);
    local_58.Value.Key.KeyName = (pFVar4->Key).KeyName;
    local_58.Value.Key.KeyDetails.Object = (pFVar4->Key).KeyDetails.Object;
    local_58.Value.Key.KeyDetails.SharedReferenceCount.ReferenceController =
         (pFVar4->Key).KeyDetails.SharedReferenceCount.ReferenceController;
    (pFVar4->Key).KeyDetails.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    (pFVar4->Key).KeyDetails.Object = (FKeyDetails *)0x0;
    local_58.Value._24_4_ = (local_58.Value._24_4_ ^ pFVar4->bShift) & 1 ^ local_58.Value._24_4_;
    local_58.Value._24_4_ =
         (local_58.Value._24_4_ ^ *(uint *)&pFVar4->field_0x18) & 2 ^ local_58.Value._24_4_;
    local_58.Value._24_4_ =
         (local_58.Value._24_4_ ^ *(uint *)&pFVar4->field_0x18) & 4 ^ local_58.Value._24_4_;
    local_58.bIsSet = true;
    local_58.Value._24_4_ =
         (local_58.Value._24_4_ ^ *(uint *)&pFVar4->field_0x18) & 8 ^ local_58.Value._24_4_;
    local_58.Getter._16_8_ = 0;
    local_58.Getter._0_8_ = 0;
    local_58.Getter._8_8_ = 0;
    SetSelectedKey(this,&local_58);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_78.Key.KeyDetails.SharedReferenceCount.ReferenceController);
    FReply::FReply(__return_storage_ptr__,true);
    return __return_storage_ptr__;
  }
  pSVar2 = (this->Button).Object;
  if (pSVar2 != (SButton *)0x0) {
    (**(code **)(pSVar2->_padding_ + 0x40))(pSVar2,__return_storage_ptr__,param_1,param_2);
    return __return_storage_ptr__;
  }
LAB_142968aa5:
  SWidget::OnKeyDown((SWidget *)this,__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// OnKeyUp @ 142969b40

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SInputKeySelector::OnKeyUp
          (SInputKeySelector *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FKeyEvent *param_2)

{
  FName *pFVar1;
  bool bVar2;
  bool bVar3;
  longlong lVar4;
  byte bVar5;
  bool bVar6;
  SButton *pSVar7;
  byte bVar8;
  FName *pFVar9;
  FKey local_38;
  FKey local_20;
  
  local_38.KeyName = (param_2->Key).KeyName;
  local_38.KeyDetails.SharedReferenceCount.ReferenceController =
       (param_2->Key).KeyDetails.SharedReferenceCount.ReferenceController;
  local_38.KeyDetails.Object = (param_2->Key).KeyDetails.Object;
  if (local_38.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_38.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_38.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount
         + 1);
    UNLOCK();
  }
  lVar4 = param_2->_padding_;
  if ((((lVar4 & 0xc0) == 0) || (local_38.KeyName == EKeys::LeftCommand.KeyName)) ||
     (local_38.KeyName == EKeys::RightCommand.KeyName)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  if ((((lVar4 & 3) == 0) || (local_38.KeyName == EKeys::LeftShift.KeyName)) ||
     (local_38.KeyName == EKeys::RightShift.KeyName)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if ((((lVar4 & 0x30) == 0) || (local_38.KeyName == EKeys::LeftAlt.KeyName)) ||
     (local_38.KeyName == EKeys::RightAlt.KeyName)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if ((((lVar4 & 0xc) == 0) || (local_38.KeyName == EKeys::LeftControl.KeyName)) ||
     (local_38.KeyName == EKeys::RightControl.KeyName)) {
    bVar5 = 0;
  }
  else {
    bVar5 = 1;
  }
  bVar8 = bVar5 | 2;
  if (!bVar2) {
    bVar8 = bVar5;
  }
  bVar5 = bVar8 | 4;
  if (!bVar3) {
    bVar5 = bVar8;
  }
  bVar8 = bVar5 | 8;
  if (!bVar6) {
    bVar8 = bVar5;
  }
  if (this->bIsSelectingKey == false) {
LAB_142969d45:
    if ((this->Button).Object != (SButton *)0x0) {
      pSVar7 = TSharedPtr<SButton,1>::operator->(&this->Button);
      (**(code **)(pSVar7->_padding_ + 0x48))(pSVar7,__return_storage_ptr__,param_1,param_2);
      goto LAB_142969d80;
    }
  }
  else {
    if (((this->bAllowGamepadKeys != false) || (bVar6 = FKey::IsGamepadKey(&local_38), !bVar6)) &&
       ((bVar6 = FKey::IsModifierKey(&local_38), !bVar6 || (bVar8 == 0)))) {
      SetIsSelectingKey(this,false);
      if (this->bEscapeCancelsSelection == false) {
LAB_142969cce:
        local_20.KeyName = local_38.KeyName;
        local_20.KeyDetails.Object = local_38.KeyDetails.Object;
        local_20.KeyDetails.SharedReferenceCount.ReferenceController =
             local_38.KeyDetails.SharedReferenceCount.ReferenceController;
        if (local_38.KeyDetails.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_38.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_38.KeyDetails.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        SelectKey(this,&local_20,(bVar8 & 4) != 0,(bool)(bVar8 & 1),(bVar8 & 2) != 0,
                  (bVar8 & 8) != 0);
      }
      else if (local_38.KeyName != EKeys::Escape.KeyName) {
        pFVar9 = (FName *)(this->EscapeKeys).AllocatorInstance.Data;
        pFVar1 = pFVar9 + (longlong)(this->EscapeKeys).ArrayNum * 3;
        for (; pFVar9 != pFVar1; pFVar9 = pFVar9 + 3) {
          if (*pFVar9 == local_38.KeyName) goto LAB_142969d30;
        }
        goto LAB_142969cce;
      }
LAB_142969d30:
      FReply::FReply(__return_storage_ptr__,true);
      goto LAB_142969d80;
    }
    if (this->bIsSelectingKey == false) goto LAB_142969d45;
  }
  SWidget::OnKeyUp((SWidget *)this,__return_storage_ptr__,param_1,param_2);
LAB_142969d80:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.KeyDetails.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// OnMouseButtonDown @ 14296c770

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SInputKeySelector::OnMouseButtonDown
          (SInputKeySelector *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  bool bVar1;
  FInputChord *pFVar2;
  TAttribute<FInputChord> *pTVar3;
  FInputChord local_68;
  TAttribute<FInputChord> local_48;
  
  if ((this->bIsSelectingKey == false) && ((this->SelectedKey).bIsSet != false)) {
    pFVar2 = TAttribute<FInputChord>::Get(&this->SelectedKey);
    bVar1 = FKey::IsValid(&pFVar2->Key);
    if (bVar1) {
      local_68.Key.KeyName = EKeys::RightMouseButton.KeyName;
      local_68.Key.KeyDetails.Object = EKeys::RightMouseButton.KeyDetails.Object;
      local_68.Key.KeyDetails.SharedReferenceCount.ReferenceController =
           EKeys::RightMouseButton.KeyDetails.SharedReferenceCount.ReferenceController;
      if (EKeys::RightMouseButton.KeyDetails.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (EKeys::RightMouseButton.KeyDetails.SharedReferenceCount.ReferenceController)->
        SharedReferenceCount =
             (atomic<int>)
             ((int)(EKeys::RightMouseButton.KeyDetails.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      bVar1 = FPointerEvent::IsMouseButtonDown(param_2,&local_68.Key);
      if (bVar1) {
        pFVar2 = FInputChord::FInputChord(&local_68);
        pTVar3 = TAttribute<FInputChord>::TAttribute<FInputChord>(&local_48,pFVar2);
        SetSelectedKey(this,pTVar3);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_68.Key.KeyDetails.SharedReferenceCount.ReferenceController);
        FReply::FReply(__return_storage_ptr__,true);
        return __return_storage_ptr__;
      }
    }
  }
  SWidget::OnMouseButtonDown((SWidget *)this,__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// OnNavigation @ 142978550

FNavigationReply * __thiscall
SInputKeySelector::OnNavigation
          (SInputKeySelector *this,FNavigationReply *__return_storage_ptr__,FGeometry *param_1,
          FNavigationEvent *param_2)

{
  SButton *pSVar1;
  
  pSVar1 = (this->Button).Object;
  if (pSVar1 != (SButton *)0x0) {
    (**(code **)(pSVar1->_padding_ + 0x140))();
    return __return_storage_ptr__;
  }
  SWidget::OnNavigation((SWidget *)this,__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// OnPreviewKeyDown @ 1429824d0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SInputKeySelector::OnPreviewKeyDown
          (SInputKeySelector *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FKeyEvent *param_2)

{
  bool bVar1;
  bool bVar2;
  FKey local_38;
  
  bVar2 = false;
  if (this->bIsSelectingKey == false) {
LAB_142982548:
    bVar1 = false;
  }
  else {
    if (this->bAllowGamepadKeys == false) {
      local_38.KeyName = (param_2->Key).KeyName;
      local_38.KeyDetails.Object = (param_2->Key).KeyDetails.Object;
      local_38.KeyDetails.SharedReferenceCount.ReferenceController =
           (param_2->Key).KeyDetails.SharedReferenceCount.ReferenceController;
      if (local_38.KeyDetails.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_38.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_38.KeyDetails.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      bVar2 = true;
      bVar1 = FKey::IsGamepadKey(&local_38);
      if (bVar1) goto LAB_142982548;
    }
    bVar1 = true;
  }
  if (bVar2) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.KeyDetails.SharedReferenceCount.ReferenceController);
  }
  if (bVar1) {
    FReply::FReply(__return_storage_ptr__,true);
  }
  else {
    SWidget::OnPreviewKeyDown((SWidget *)this,__return_storage_ptr__,param_1,param_2);
  }
  return __return_storage_ptr__;
}

// OnPreviewMouseButtonDown @ 1429825a0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SInputKeySelector::OnPreviewMouseButtonDown
          (SInputKeySelector *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  FKey local_28;
  
  if (this->bIsSelectingKey != false) {
    SetIsSelectingKey(this,false);
    local_28.KeyName = (param_2->EffectingButton).KeyName;
    local_28.KeyDetails.Object = (param_2->EffectingButton).KeyDetails.Object;
    local_28.KeyDetails.SharedReferenceCount.ReferenceController =
         (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
    if (local_28.KeyDetails.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.KeyDetails.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    SelectKey(this,&local_28,false,false,false,false);
    FReply::FReply(__return_storage_ptr__,true);
    return __return_storage_ptr__;
  }
  SWidget::OnPreviewMouseButtonDown((SWidget *)this,__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// SelectKey @ 14298d9f0

void __thiscall
SInputKeySelector::SelectKey
          (SInputKeySelector *this,FKey *param_1,bool param_2,bool param_3,bool param_4,bool param_5
          )

{
  TSharedPtr<FKeyDetails,1> *pTVar1;
  undefined1 *puVar2;
  FName FVar3;
  FKeyDetails *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  longlong *plVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  uint *puVar10;
  FKeyDetails **ppFVar11;
  FReadAccessScope local_a8;
  FName local_90;
  FKeyDetails *local_88;
  TReferenceControllerBase<1> *local_80;
  uint local_78 [2];
  FName local_70;
  FKeyDetails *local_68;
  TReferenceControllerBase<1> *local_60;
  uint local_58 [2];
  FName local_50;
  FKeyDetails *local_48;
  FKeyDetails *local_40;
  uint local_38;
  
  FVar3 = param_1->KeyName;
  pFVar4 = (param_1->KeyDetails).Object;
  pTVar5 = (param_1->KeyDetails).SharedReferenceCount.ReferenceController;
  if (this->bAllowModifierKeys == false) {
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_78[0] = local_78[0] & 0xfffffff0;
    ppFVar11 = &local_88;
    puVar10 = local_78;
    bVar8 = true;
    bVar7 = false;
    local_90 = FVar3;
    local_88 = pFVar4;
    local_80 = pTVar5;
  }
  else {
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    ppFVar11 = &local_68;
    puVar10 = local_58;
    bVar8 = false;
    bVar7 = true;
    local_58[0] = (((uint)param_5 * 2 | (uint)param_4) * 2 | (uint)param_3) * 2 |
                  local_58[0] & 0xfffffff0 | (uint)param_2;
    local_70 = FVar3;
    local_68 = pFVar4;
    local_60 = pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  local_40 = ppFVar11[1];
  local_50 = FVar3;
  ppFVar11[1] = (FKeyDetails *)0x0;
  *ppFVar11 = (FKeyDetails *)0x0;
  local_38 = local_38 & 0xfffffff0 | *puVar10 & 0xf;
  local_48 = pFVar4;
  if (bVar8) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_80);
  }
  if (bVar7) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_60);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(this->SelectedKey).Getter,
             &local_a8);
  if ((*(int *)&(this->SelectedKey).Getter.field_0x10 != 0) &&
     (plVar6 = *(longlong **)&(this->SelectedKey).Getter.field_0x8, plVar6 != (longlong *)0x0)) {
    cVar9 = (**(code **)(*plVar6 + 0x38))();
    if (cVar9 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_a8);
      goto LAB_14298dbb2;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_a8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->SelectedKey).Getter);
  (this->SelectedKey).Value.Key.KeyName = local_50;
  if (local_40 != (FKeyDetails *)0x0) {
    LOCK();
    pTVar1 = &(local_40->Key).KeyDetails;
    *(int *)&pTVar1->Object = *(int *)&pTVar1->Object + 1;
    UNLOCK();
  }
  pTVar5 = (this->SelectedKey).Value.Key.KeyDetails.SharedReferenceCount.ReferenceController;
  (this->SelectedKey).Value.Key.KeyDetails.Object = local_48;
  (this->SelectedKey).Value.Key.KeyDetails.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)local_40;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  (this->SelectedKey).Value.bShift = 0;
  (this->SelectedKey).Value.bCmd = 0;
  (this->SelectedKey).Value.bAlt = 0;
  (this->SelectedKey).Value.bCtrl = 0;
  puVar2 = &(this->SelectedKey).Value.field_0x18;
  *(uint *)puVar2 = *(uint *)puVar2 | local_38 & 0xf;
  (this->SelectedKey).bIsSet = true;
LAB_14298dbb2:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnKeySelected,
             &local_a8);
  if ((*(int *)&(this->OnKeySelected).field_0x10 != 0) &&
     (plVar6 = *(longlong **)&(this->OnKeySelected).field_0x8, plVar6 != (longlong *)0x0)) {
    (**(code **)(*plVar6 + 0x68))(plVar6,&local_50);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_a8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_40);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->KeyDetails).SharedReferenceCount.ReferenceController);
  return;
}

// SetButtonStyle @ 14298ec90

void __thiscall SInputKeySelector::SetButtonStyle(SInputKeySelector *this,FButtonStyle *param_1)

{
  SButton *this_00;
  undefined1 auStackX_10 [24];
  TAttribute<bool> TStack_28;
  
  this_00 = (this->Button).Object;
  if (this_00 == (SButton *)0x0) {
    return;
  }
  if (param_1 == (FButtonStyle *)0x0) {
    `SButton::SetButtonStyle'::__l5::<lambda_1>::operator()(auStackX_10);
    return;
  }
  this_00->Style = param_1;
  if (this_00->bIsStyleNormalPaddingOverridden == '\0') {
    SlateAttributePrivate::
    TSlateAttributeBase<SWidget,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
    ::Set((TSlateAttributeBase<SWidget,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
           *)&this_00->NormalPaddingAttribute,(SWidget *)this_00,&param_1->NormalPadding);
  }
  if (this_00->bIsStylePressedPaddingOverridden == '\0') {
    SlateAttributePrivate::
    TSlateAttributeBase<SWidget,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
    ::Set((TSlateAttributeBase<SWidget,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
           *)&this_00->PressedPaddingAttribute,(SWidget *)this_00,&this_00->Style->PressedPadding);
  }
  FSlateSound::operator=(&this_00->HoveredSound,&this_00->Style->HoveredSlateSound);
  FSlateSound::operator=(&this_00->PressedSound,&this_00->Style->PressedSlateSound);
  FSlateSound::operator=(&this_00->ClickedSound,&this_00->Style->ClickedSlateSound);
  SButton::UpdatePadding(this_00);
  TStack_28.Value = (this_00->Style->Disabled).DrawAs.Value == '\0';
  TStack_28.bIsSet = true;
  TStack_28.Getter._16_8_ = 0;
  TStack_28.Getter._0_8_ = 0;
  TStack_28.Getter._8_8_ = 0;
  SBorder::SetShowEffectWhenDisabled((SBorder *)this_00,&TStack_28);
  SButton::UpdateBorderImage(this_00);
  SButton::UpdateForegroundColor(this_00);
  SWidget::Invalidate((SWidget *)this_00,Paint);
  return;
}

// SetIsSelectingKey @ 142992b60

void __thiscall SInputKeySelector::SetIsSelectingKey(SInputKeySelector *this,bool param_1)

{
  SButton *pSVar1;
  longlong *plVar2;
  FDestructionSentinel local_48;
  undefined1 local_30 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  if (this->bIsSelectingKey != param_1) {
    pSVar1 = (this->Button).Object;
    this->bIsSelectingKey = param_1;
    if (pSVar1 != (SButton *)0x0) {
      local_30[1] = true;
      local_30[0] = !param_1;
      local_18 = 0;
      local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      FStack_20.Data = (FScriptContainerElement *)0x0;
      SlateAttributePrivate::
      TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
      ::Assign((TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
                *)((longlong)&pSVar1->_padding_ + 2),(SWidget *)pSVar1,(TAttribute<bool> *)local_30,
               None);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_28,(FWriteAccessScope *)&local_48);
      if (((int)local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_20.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
        local_18 = local_18 & 0xffffffff00000000;
      }
      if (local_48.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
      }
      if (FStack_20.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_20.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_28.AccessDetector);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnIsSelectingKeyChanged,(FReadAccessScope *)&local_48);
    if ((*(int *)&(this->OnIsSelectingKeyChanged).field_0x10 != 0) &&
       (plVar2 = *(longlong **)&(this->OnIsSelectingKeyChanged).field_0x8, plVar2 != (longlong *)0x0
       )) {
      (**(code **)(*plVar2 + 0x68))();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_48);
  }
  return;
}

// SetMargin @ 142992f80

void __thiscall SInputKeySelector::SetMargin(SInputKeySelector *this,TAttribute<FMargin> *param_1)

{
  TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = (param_1->Value).Top;
  fVar3 = (param_1->Value).Right;
  fVar4 = (param_1->Value).Bottom;
  this_00 = &param_1->Getter;
  (this->Margin).Value.Left = (param_1->Value).Left;
  (this->Margin).Value.Top = fVar2;
  (this->Margin).Value.Right = fVar3;
  (this->Margin).Value.Bottom = fVar4;
  (this->Margin).bIsSet = param_1->bIsSet;
  TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->Margin).Getter,this_00);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return;
}

// SetSelectedKey @ 1429994f0

void __thiscall
SInputKeySelector::SetSelectedKey(SInputKeySelector *this,TAttribute<FInputChord> *param_1)

{
  longlong *plVar1;
  void *pvVar2;
  bool bVar3;
  FName FVar4;
  FKeyDetails *pFVar5;
  FSharedReferencer<1> FVar6;
  bool bVar7;
  FInputChord *pFVar8;
  FName *pFVar9;
  FReadAccessScope local_78;
  FName local_60;
  FKeyDetails *local_58;
  TReferenceControllerBase<1> *local_50;
  uint local_48;
  FName local_40;
  FKeyDetails *local_38;
  TReferenceControllerBase<1> *local_30;
  uint local_28;
  
  bVar3 = false;
  bVar7 = TAttribute<FInputChord>::IdenticalTo(&this->SelectedKey,param_1);
  if (!bVar7) {
    TAttribute<FInputChord>::operator=(&this->SelectedKey,param_1);
    FVar6 = EKeys::Invalid.KeyDetails.SharedReferenceCount;
    pFVar5 = EKeys::Invalid.KeyDetails.Object;
    FVar4 = EKeys::Invalid.KeyName;
    if ((this->SelectedKey).bIsSet == false) {
      if (EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        (FVar6.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(FVar6.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_50 = FVar6.ReferenceController;
      local_58 = pFVar5;
      local_60 = FVar4;
      local_48 = local_48 & 0xfffffff0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar6.ReferenceController);
      bVar7 = false;
      pFVar9 = &local_60;
      bVar3 = true;
    }
    else {
      pFVar8 = TAttribute<FInputChord>::Get(&this->SelectedKey);
      local_40 = (pFVar8->Key).KeyName;
      local_38 = (pFVar8->Key).KeyDetails.Object;
      local_30 = (pFVar8->Key).KeyDetails.SharedReferenceCount.ReferenceController;
      if (local_30 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_30->SharedReferenceCount = (atomic<int>)((int)local_30->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar9 = &local_40;
      bVar7 = true;
      local_28 = pFVar8->bShift | local_28 & 0xfffffffe;
      local_28 = (local_28 ^ *(uint *)&pFVar8->field_0x18) & 2 ^ local_28;
      local_28 = (local_28 ^ *(uint *)&pFVar8->field_0x18) & 4 ^ local_28;
      local_28 = (local_28 ^ *(uint *)&pFVar8->field_0x18) & 8 ^ local_28;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnKeySelected,
               &local_78);
    if ((*(int *)&(this->OnKeySelected).field_0x10 != 0) &&
       (plVar1 = *(longlong **)&(this->OnKeySelected).field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x68))(plVar1,pFVar9);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_78);
    if (bVar3) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_50);
    }
    if (bVar7) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
    }
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  pvVar2 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&param_1->Getter);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->Value).Key.KeyDetails.SharedReferenceCount.ReferenceController);
  return;
}

// SetTextBlockVisibility @ 14299bdc0

void __thiscall
SInputKeySelector::SetTextBlockVisibility(SInputKeySelector *this,EVisibility param_1)

{
  STextBlock *this_00;
  TAttribute<EVisibility> local_28;
  
  this_00 = (this->TextBlock).Object;
  if (this_00 != (STextBlock *)0x0) {
    local_28.Getter._16_8_ = 0;
    local_28.bIsSet = true;
    local_28.Getter._0_8_ = 0;
    local_28.Getter._8_8_ = 0;
    local_28.Value.Value.Value = param_1.Value.Value;
    SLeafWidget::SetVisibility((SLeafWidget *)this_00,&local_28);
  }
  return;
}

// SetTextStyle @ 14299ec20

void __thiscall SInputKeySelector::SetTextStyle(SInputKeySelector *this,FTextBlockStyle *param_1)

{
  STextBlock *this_00;
  FArguments FStack_568;
  
  this_00 = (this->TextBlock).Object;
  if (this_00 == (STextBlock *)0x0) {
    return;
  }
  if (param_1 == (FTextBlockStyle *)0x0) {
    STextBlock::FArguments::FArguments(&FStack_568);
    FTextBlockStyle::operator=(&this_00->TextStyle,FStack_568._TextStyle);
    STextBlock::FArguments::~FArguments(&FStack_568);
  }
  else {
    FTextBlockStyle::operator=(&this_00->TextStyle,param_1);
  }
  if ((this_00->bSimpleTextMode != false) && ((this_00->CachedSimpleDesiredSize).bIsSet != false)) {
    (this_00->CachedSimpleDesiredSize).bIsSet = false;
  }
  SWidget::Invalidate((SWidget *)this_00,Layout);
  return;
}

