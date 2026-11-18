// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ToolWidgets
// Functions: 20

// CanExecuteCancel @ 142d749b0

bool __thiscall SCustomDialog::CanExecuteCancel(SCustomDialog *this)

{
  longlong *plVar1;
  char cVar2;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnCancelHotkeyPressed,
             &local_28);
  if ((*(int *)&(this->OnCancelHotkeyPressed).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->OnCancelHotkeyPressed).field_0x8, plVar1 != (longlong *)0x0)) {
    cVar2 = (**(code **)(*plVar1 + 0x38))();
    if (cVar2 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      return true;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return false;
}

// CanExecuteConfirm @ 142d74a20

bool __thiscall SCustomDialog::CanExecuteConfirm(SCustomDialog *this)

{
  longlong *plVar1;
  char cVar2;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnConfirmHotkeyPressed
             ,&local_28);
  if ((*(int *)&(this->OnConfirmHotkeyPressed).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->OnConfirmHotkeyPressed).field_0x8, plVar1 != (longlong *)0x0))
  {
    cVar2 = (**(code **)(*plVar1 + 0x38))();
    if (cVar2 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      return true;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return false;
}

// Construct @ 142d7bdf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SCustomDialog::Construct(SCustomDialog *this,FArguments *param_1)

{
  undefined8 uVar1;
  TReferenceControllerBase<1> *pTVar2;
  SVerticalBox *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  SBorder *pSVar5;
  code *pcVar6;
  FDeprecateVector2DParameter FVar7;
  double dVar8;
  FSharedReferencer<1> FVar9;
  bool bVar10;
  FUICommandList *pFVar11;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *pTVar12;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *pTVar13;
  FUIAction *pFVar14;
  FDialogCommands *pFVar15;
  FArguments *pFVar16;
  FName FVar17;
  ISlateStyle *pIVar18;
  FName *pFVar19;
  FArguments *pFVar20;
  FSlot *this_00;
  FSlotArguments *pFVar21;
  TSharedRef<SWidget,1> *pTVar22;
  TSharedRef<SVerticalBox,1> *pTVar23;
  TSharedRef<SBorder,1> *pTVar24;
  FScopedWidgetSlotArguments<SVerticalBox::FSlot> *pFVar25;
  longlong *plVar26;
  FUICommandList *pFVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  T0RequiredArgs local_res8 [8];
  T0RequiredArgs local_res10 [8];
  FLLMScope local_res18 [2];
  FLLMScope local_res20 [2];
  uint uStack_ebc;
  FName local_eb8;
  FSlateBrush *local_eb0;
  undefined1 local_ea8;
  undefined1 local_ea0 [8];
  ForAnyElementType FStack_e98;
  ulonglong local_e90;
  FText local_e88;
  bool local_e78;
  undefined1 local_e70 [8];
  ForAnyElementType FStack_e68;
  ulonglong local_e60;
  float local_e58;
  float fStack_e54;
  SWidget *local_e50;
  FSharedReferencer<1> local_e48;
  SWidget *local_e40;
  TReferenceControllerBase<1> *pTStack_e38;
  SWidget *local_e30;
  TReferenceControllerBase<1> *pTStack_e28;
  SWidget *local_e20;
  FSharedReferencer<1> local_e18;
  undefined1 local_e10 [8];
  undefined4 local_e08 [2];
  TRawPtrProxy<FUICommandList> local_e00;
  FUICommandList *local_df8;
  FName local_df0;
  FMemScope local_de8;
  FMemScope local_de0;
  TAttribute<float> local_dd8;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_db8;
  FUICommandInfo *local_da0;
  TReferenceControllerBase<1> *local_d98;
  FUICommandInfo *local_d90;
  TReferenceControllerBase<1> *local_d88;
  undefined8 local_d80;
  undefined8 uStack_d78;
  bool local_d70;
  undefined1 local_d68 [24];
  undefined8 local_d50;
  undefined8 uStack_d48;
  undefined1 local_d40;
  undefined1 local_d38 [24];
  FDestructionSentinel local_d20;
  FDestructionSentinel local_d08;
  TSharedRef<SWidget,1> local_cf0;
  FName local_ce0;
  code *local_cd8;
  longlong lStack_cd0;
  TSharedRef<SVerticalBox,1> local_cc8;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_cb8;
  code *local_c98;
  longlong lStack_c90;
  code *local_c88;
  longlong lStack_c80;
  TSharedRef<SBorder,1> local_c78;
  code *local_c68;
  longlong lStack_c60;
  TSharedRef<SWidget,1> local_c58;
  undefined1 local_c48 [24];
  undefined1 local_c30 [24];
  undefined1 local_c18 [24];
  undefined1 local_c00 [32];
  undefined1 local_be0 [24];
  undefined1 local_bc8 [24];
  undefined1 local_bb0 [24];
  undefined1 local_b98 [32];
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_b78;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> local_b60;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_b48;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> local_b30;
  undefined8 *local_b18 [2];
  TReferenceControllerBase<1> *local_b08;
  undefined1 local_ae8 [40];
  FSlotArgumentsMixin local_ac0;
  FArguments local_a30;
  FScopedWidgetSlotArguments<SVerticalBox::FSlot> local_828;
  FArguments local_728;
  FArguments local_430;
  
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->OnClosed,&param_1->_OnClosed);
  this->bAutoCloseOnButtonPress = param_1->_AutoCloseOnButtonPress;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->OnCancelHotkeyPressed,&param_1->_OnCancelHotkeyPressed);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->OnConfirmHotkeyPressed,&param_1->_OnConfirmHotkeyPressed);
  TDelegate<TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>::operator=
            (&this->GetWidgetToFocusOnActivate,&param_1->_GetWidgetToFocusOnActivate);
  pFVar11 = ::operator_new(0x140);
  pFVar27 = (FUICommandList *)0x0;
  local_e00.Object = pFVar27;
  if (pFVar11 != (FUICommandList *)0x0) {
    pFVar11->_padding_ = 0;
    pFVar11->_padding_ = 0;
    pFVar11->_padding_ = (longlong)&___7FUICommandList__6B_;
    *(undefined8 *)&(pFVar11->ContextsInList).Elements = 0;
    *(undefined8 *)&(pFVar11->ContextsInList).Elements.field_0x8 = 0;
    *(undefined8 *)&(pFVar11->ContextsInList).Elements.field_0x20 = 0;
    *(undefined4 *)&(pFVar11->ContextsInList).Elements.field_0x28 = 0;
    *(undefined4 *)&(pFVar11->ContextsInList).Elements.field_0x2c = 0x80;
    *(undefined4 *)&(pFVar11->ContextsInList).Elements.field_0x30 = 0xffffffff;
    *(undefined4 *)&(pFVar11->ContextsInList).Elements.field_0x34 = 0;
    (pFVar11->ContextsInList).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    (pFVar11->ContextsInList).HashSize = 0;
    *(undefined8 *)&pFVar11->UICommandBindingMap = 0;
    *(undefined8 *)&(pFVar11->UICommandBindingMap).field_0x8 = 0;
    *(undefined8 *)&(pFVar11->UICommandBindingMap).field_0x20 = 0;
    *(undefined4 *)&(pFVar11->UICommandBindingMap).field_0x28 = 0;
    *(undefined4 *)&(pFVar11->UICommandBindingMap).field_0x2c = 0x80;
    *(undefined4 *)&(pFVar11->UICommandBindingMap).field_0x30 = 0xffffffff;
    *(undefined4 *)&(pFVar11->UICommandBindingMap).field_0x34 = 0;
    *(undefined8 *)&(pFVar11->UICommandBindingMap).field_0x40 = 0;
    *(undefined4 *)&(pFVar11->UICommandBindingMap).field_0x48 = 0;
    *(undefined8 *)&pFVar11->UICommandContextMap = 0;
    *(undefined8 *)&(pFVar11->UICommandContextMap).field_0x8 = 0;
    *(undefined8 *)&(pFVar11->UICommandContextMap).field_0x20 = 0;
    *(undefined4 *)&(pFVar11->UICommandContextMap).field_0x28 = 0;
    *(undefined4 *)&(pFVar11->UICommandContextMap).field_0x2c = 0x80;
    *(undefined4 *)&(pFVar11->UICommandContextMap).field_0x30 = 0xffffffff;
    *(undefined4 *)&(pFVar11->UICommandContextMap).field_0x34 = 0;
    *(undefined8 *)&(pFVar11->UICommandContextMap).field_0x40 = 0;
    *(undefined4 *)&(pFVar11->UICommandContextMap).field_0x48 = 0;
    (pFVar11->ParentUICommandLists).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar11->ParentUICommandLists).ArrayNum = 0;
    (pFVar11->ParentUICommandLists).ArrayMax = 0;
    (pFVar11->ChildUICommandLists).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar11->ChildUICommandLists).ArrayNum = 0;
    (pFVar11->ChildUICommandLists).ArrayMax = 0;
    *(undefined8 *)&pFVar11->CanProduceActionForCommand = 0;
    *(undefined8 *)&(pFVar11->CanProduceActionForCommand).field_0x8 = 0;
    *(undefined4 *)&(pFVar11->CanProduceActionForCommand).field_0x10 = 0;
    local_e00.Object = pFVar11;
  }
  TSharedPtr<FUICommandList,1>::operator=<FUICommandList>(&this->CommandList,&local_e00);
  if (((this->CommandList).Object == (FUICommandList *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar11 = (this->CommandList).Object;
  pcVar6 = *(code **)(pFVar11->_padding_ + 0x10);
  lStack_c60 = (ulonglong)uStack_ebc << 0x20;
  local_c68 = CanExecuteCancel;
  pTVar12 = TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CreateSP<SCustomDialog>
                      (&local_b60,this,(pmf_c8c34f04 *)&local_c68);
  lStack_cd0 = (ulonglong)uStack_ebc << 0x20;
  local_cd8 = ExecuteCancel;
  pTVar13 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CreateSP<SCustomDialog>
                      (&local_b48,this,(pmf_375c5118 *)&local_cd8);
  pFVar14 = FUIAction::FUIAction((FUIAction *)local_c48,pTVar13,pTVar12,RepeatDisabled);
  pFVar15 = TCommands<FDialogCommands>::Get();
  local_da0 = (pFVar15->Cancel).Object;
  local_d98 = (pFVar15->Cancel).SharedReferenceCount.ReferenceController;
  if (local_d98 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_d98->SharedReferenceCount = (atomic<int>)((int)local_d98->SharedReferenceCount + 1);
    UNLOCK();
  }
  (*pcVar6)(pFVar11,&local_da0,pFVar14);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_c00);
  if ((void *)local_c00._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_c00._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_c00);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_c18);
  if ((void *)local_c18._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_c18._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_c18);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_c30);
  if ((void *)local_c30._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_c30._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_c30);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_c48);
  if ((void *)local_c48._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_c48._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_c48);
  if (((this->CommandList).Object == (FUICommandList *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar11 = (this->CommandList).Object;
  pcVar6 = *(code **)(pFVar11->_padding_ + 0x10);
  lStack_c90 = (ulonglong)uStack_ebc << 0x20;
  local_c98 = CanExecuteConfirm;
  pTVar12 = TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CreateSP<SCustomDialog>
                      (&local_b30,this,(pmf_c8c34f04 *)&local_c98);
  lStack_c80 = (ulonglong)uStack_ebc << 0x20;
  local_c88 = ExecuteConfirm;
  pTVar13 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CreateSP<SCustomDialog>
                      (&local_b78,this,(pmf_375c5118 *)&local_c88);
  FUIAction::FUIAction((FUIAction *)local_be0,pTVar13,pTVar12,RepeatDisabled);
  pFVar15 = TCommands<FDialogCommands>::Get();
  local_d90 = (pFVar15->Confirm).Object;
  local_d88 = (pFVar15->Confirm).SharedReferenceCount.ReferenceController;
  if (local_d88 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_d88->SharedReferenceCount = (atomic<int>)((int)local_d88->SharedReferenceCount + 1);
    UNLOCK();
  }
  (*pcVar6)(pFVar11,&local_d90);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_b98);
  if ((void *)local_b98._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_b98._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_b98);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_bb0);
  if ((void *)local_bb0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_bb0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_bb0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_bc8);
  if ((void *)local_bc8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_bc8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_bc8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_be0);
  if ((void *)local_be0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_be0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_be0);
  pFVar16 = SWindow::FArguments::FArguments(&local_728,&param_1->_WindowArguments);
  local_e88.TextData.Reference = (param_1->_Title).TextData.Reference;
  if (local_e88.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_e88.TextData.Reference + 8))
              (local_e88.TextData.Reference,local_e10);
  }
  local_e88.Flags = (param_1->_Title).Flags;
  local_e78 = true;
  local_e60 = 0;
  local_e70 = (undefined1  [8])0x0;
  FStack_e68.Data = (FScriptContainerElement *)0x0;
  FText::operator=(&(pFVar16->_Title).Value,&local_e88);
  (pFVar16->_Title).bIsSet = local_e78;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar16->_Title).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_e70);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e70,
             (FWriteAccessScope *)&local_d08);
  if (((int)local_e60 != 0) && (FStack_e68.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_e68.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_e68,0,0,0x10);
    local_e60 = local_e60 & 0xffffffff00000000;
  }
  if (local_d08.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d08.Accessor,&local_d08);
  }
  if (FStack_e68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_e68.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_e70);
  if (local_e88.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_e88.TextData.Reference + 0x10))();
  }
  dVar8 = __real_3f1a36e2e0000000;
  uVar31 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar29 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  local_e58 = (float)(param_1->_ClientSize).field0_0x0._s_0.X;
  fStack_e54 = (float)(param_1->_ClientSize).field0_0x0._s_0.Y;
  FVar7._4_4_ = fStack_e54;
  FVar7._0_4_ = local_e58;
  pFVar16->_ClientSize = FVar7;
  uVar1 = *(undefined8 *)&(param_1->_ClientSize).field0_0x0;
  uVar28 = (uint)uVar1 & uVar29;
  uVar30 = (uint)((ulonglong)uVar1 >> 0x20) & uVar31;
  if ((dVar8 <= (double)CONCAT44(uVar30,uVar28) && (double)CONCAT44(uVar30,uVar28) != dVar8) ||
     (uVar1 = *(undefined8 *)((longlong)&(param_1->_ClientSize).field0_0x0 + 8),
     uVar29 = (uint)uVar1 & uVar29, uVar31 = (uint)((ulonglong)uVar1 >> 0x20) & uVar31,
     bVar10 = true,
     dVar8 <= (double)CONCAT44(uVar31,uVar29) && (double)CONCAT44(uVar31,uVar29) != dVar8)) {
    bVar10 = false;
  }
  pFVar16->_SupportsMaximize = false;
  pFVar16->_SupportsMinimize = false;
  pFVar16->_SizingRule = !bVar10 + Autosized;
  FVar17 = (FName)SBorder::FArguments::FArguments(&local_430);
  local_d70 = (param_1->_RootPadding).bIsSet;
  local_d80._0_4_ = (param_1->_RootPadding).Value.Left;
  local_d80._4_4_ = (param_1->_RootPadding).Value.Top;
  uStack_d78._0_4_ = (param_1->_RootPadding).Value.Right;
  uStack_d78._4_4_ = (param_1->_RootPadding).Value.Bottom;
  local_eb8 = FVar17;
  TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>
            ((TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy> *)local_d68,
             &(param_1->_RootPadding).Getter);
  (((TAttribute<FMargin> *)((longlong)FVar17 + 0x210))->Value).Left = (float)(undefined4)local_d80;
  (((TAttribute<FMargin> *)((longlong)FVar17 + 0x210))->Value).Top = (float)local_d80._4_4_;
  *(undefined8 *)((longlong)FVar17 + 0x218) = uStack_d78;
  *(bool *)((longlong)FVar17 + 0x220) = local_d70;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)FVar17 + 0x228),
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_d68);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_d68);
  if ((void *)local_d68._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_d68._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_d68);
  pIVar18 = FAppStyle::Get();
  pcVar6 = *(code **)((longlong)*pIVar18 + 0x50);
  pFVar19 = ::FName::FName(&local_ce0,"ToolPanel.GroupBorder");
  local_eb0 = (FSlateBrush *)(*pcVar6)(pIVar18,*pFVar19);
  local_ea8 = 1;
  local_e90 = 0;
  local_ea0 = (undefined1  [8])0x0;
  FStack_e98.Data = (FScriptContainerElement *)0x0;
  ((TAttribute<FSlateBrush_const_*> *)((longlong)FVar17 + 0x2a0))->Value = local_eb0;
  *(bool *)((longlong)FVar17 + 0x2a8) = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)FVar17 + 0x2b0),
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_ea0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_ea0,
             (FWriteAccessScope *)&local_d20);
  if (((int)local_e90 != 0) && (FStack_e98.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_e98.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_e98,0,0,0x10);
    local_e90 = local_e90 & 0xffffffff00000000;
  }
  if (local_d20.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d20.Accessor,&local_d20);
  }
  if (FStack_e98.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_e98.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_ea0);
  pFVar20 = SVerticalBox::FArguments::FArguments(&local_a30);
  this_00 = ::operator_new(0x58);
  local_df8 = pFVar27;
  if (this_00 != (FSlot *)0x0) {
    *(undefined8 *)this_00 = 0;
    *(undefined8 *)&this_00->field_0x8 = 0;
    *(undefined8 *)&this_00->field_0x10 = 0;
    *(undefined8 *)&this_00->field_0x18 = 0;
    *(undefined8 *)&this_00->field_0x20 = 0;
    *(undefined8 *)&this_00->field_0x28 = 0;
    *(undefined8 *)&this_00->field_0x30 = 0;
    *(undefined8 *)&this_00->field_0x38 = 0;
    *(undefined8 *)&this_00->field_0x40 = 0;
    *(undefined8 *)&this_00->field_0x48 = 0;
    *(undefined8 *)&this_00->field_0x50 = 0;
    local_df8 = (FUICommandList *)SVerticalBox::FSlot::FSlot(this_00);
  }
  SVerticalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_b18,(FSlot *)&local_df8);
  local_dd8.Value = 1.0;
  local_dd8.Getter._16_8_ = 0;
  local_dd8.bIsSet = true;
  local_dd8.Getter._0_8_ = 0;
  local_dd8.Getter._8_8_ = 0;
  pFVar21 = SVerticalBox::FSlot::FSlotArguments::FillHeight((FSlotArguments *)local_b18,&local_dd8);
  pTVar22 = CreateContentBox(this,&local_c58,param_1);
  local_e48.ReferenceController = (pTVar22->SharedReferenceCount).ReferenceController;
  local_e50 = pTVar22->Object;
  if (local_e48.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_e48.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_e48.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((SWidget **)&pFVar21->field_0x8 != &local_e50) {
    *(SWidget **)&pFVar21->field_0x8 = local_e50;
    local_e50 = (SWidget *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar21->field_0x10,&local_e48);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_e48.ReferenceController);
  pFVar20 = SVerticalBox::FArguments::operator+(pFVar20,pFVar21);
  FLLMScope::FLLMScope(local_res18,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_df0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_de8,&local_df0,true);
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
            (&local_db8,"SVerticalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\Dialog\\SCustomDialog.cpp"
             ,0x3f,local_res8);
  FMemScope::~FMemScope(&local_de8);
  FLLMScope::~FLLMScope(local_res18);
  FVar9.ReferenceController = local_db8._Widget.SharedReferenceCount.ReferenceController;
  if (local_db8._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_db8._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_db8._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  pTVar23 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_db8,&local_cc8,pFVar20);
  FVar17 = local_eb8;
  pTVar2 = (pTVar23->SharedReferenceCount).ReferenceController;
  pSVar3 = pTVar23->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_e40 = (((TAlwaysValidWidget *)((longlong)local_eb8 + 0x1f8))->Widget).Object;
  pTStack_e38 = ((FSharedReferencer<1> *)((longlong)local_eb8 + 0x200))->ReferenceController;
  (((TAlwaysValidWidget *)((longlong)local_eb8 + 0x1f8))->Widget).Object = (SWidget *)pSVar3;
  ((FSharedReferencer<1> *)((longlong)local_eb8 + 0x200))->ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_e38);
  FLLMScope::FLLMScope(local_res20,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_eb8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_de0,&local_eb8,true);
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>
            (&local_cb8,"SBorder",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\Dialog\\SCustomDialog.cpp"
             ,0x3b,local_res10);
  FMemScope::~FMemScope(&local_de0);
  FLLMScope::~FLLMScope(local_res20);
  pTVar24 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_cb8,&local_c78,(FArguments *)FVar17);
  pTVar4 = (pTVar24->SharedReferenceCount).ReferenceController;
  pSVar5 = pTVar24->Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_e30 = (pFVar16->_Content).Widget.Object;
  pTStack_e28 = (pFVar16->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar16->_Content).Widget.Object = (SWidget *)pSVar5;
  (pFVar16->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_e28);
  SWindow::Construct((SWindow *)this,pFVar16);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c78.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_cb8._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_cc8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_db8._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c58.SharedReferenceCount.ReferenceController);
  TResizingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_ac0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_ae8);
  if ((void *)local_ae8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_ae8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_ae8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_b08);
  if (local_b18[0] != (undefined8 *)0x0) {
    (**(code **)*local_b18[0])(local_b18[0],1);
  }
  DestructItems<SVerticalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_a30._Slots.AllocatorInstance.Data,local_a30._Slots.ArrayNum);
  if ((FSlotArguments *)local_a30._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_a30._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_a30);
  SBorder::FArguments::~FArguments(&local_430);
  SWindow::FArguments::~FArguments(&local_728);
  if (0 < (param_1->_Buttons).ArrayNum) {
    if ((local_db8._Widget.Object == (SVerticalBox *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar25 = SVerticalBox::AddSlot(local_db8._Widget.Object,&local_828);
    plVar26 = &pFVar25->_padding_;
    if ((longlong *)local_e08 != plVar26) {
      *(EHorizontalAlignment *)plVar26 = param_1->_HAlignButtonBox;
      *(undefined1 *)((longlong)&pFVar25->_padding_ + 4) = 1;
    }
    pFVar11 = (FUICommandList *)&pFVar25->_padding_;
    if (plVar26 == (longlong *)0x0) {
      pFVar11 = pFVar27;
    }
    pFVar11 = (FUICommandList *)
              SVerticalBox::FSlot::FSlotArguments::AutoHeight((FSlotArguments *)pFVar11);
    local_d40 = (param_1->_ButtonAreaPadding).bIsSet;
    local_d50._0_4_ = (param_1->_ButtonAreaPadding).Value.Left;
    local_d50._4_4_ = (param_1->_ButtonAreaPadding).Value.Top;
    uStack_d48._0_4_ = (param_1->_ButtonAreaPadding).Value.Right;
    uStack_d48._4_4_ = (param_1->_ButtonAreaPadding).Value.Bottom;
    TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>::
    TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>
              ((TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy> *)local_d38,
               &(param_1->_ButtonAreaPadding).Getter);
    *(undefined8 *)&(pFVar11->ContextsInList).Elements = local_d50;
    *(undefined8 *)&(pFVar11->ContextsInList).Elements.field_0x8 = uStack_d48;
    (pFVar11->ContextsInList).Elements.field_0x10 = local_d40;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)
               &(pFVar11->ContextsInList).Elements.field_0x18,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_d38);
    if (&pFVar11->ContextsInList != (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)0x0
       ) {
      pFVar27 = pFVar11;
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_d38);
    if ((void *)local_d38._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_d38._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_d38);
    pTVar22 = CreateButtonBox(this,&local_cf0,param_1);
    local_e18.ReferenceController = (pTVar22->SharedReferenceCount).ReferenceController;
    local_e20 = pTVar22->Object;
    if (local_e18.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_e18.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_e18.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((SWidget **)&pFVar27->_padding_ != &local_e20) {
      pFVar27->_padding_ = (longlong)local_e20;
      local_e20 = (SWidget *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&pFVar27->_padding_,&local_e18);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_e18.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_cf0.SharedReferenceCount.ReferenceController);
    SBoxPanel::FScopedWidgetSlotArguments<SVerticalBox::FSlot>::
    ~FScopedWidgetSlotArguments<SVerticalBox::FSlot>(&local_828);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar9.ReferenceController);
  return;
}

// CreateButtonBox @ 142d91c70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Removing unreachable block (ram,0x000142d93176) */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
SCustomDialog::CreateButtonBox
          (SCustomDialog *this,TSharedRef<SWidget,1> *__return_storage_ptr__,FArguments *param_1)

{
  undefined1 *puVar1;
  byte *pbVar2;
  int *piVar3;
  int iVar4;
  TReferenceControllerBase<1> *pTVar5;
  FScriptContainerElement *pFVar6;
  SWidget *pSVar7;
  longlong *plVar8;
  code *pcVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  SButton *this_00;
  STextBlock *this_01;
  undefined4 uVar20;
  bool bVar21;
  char cVar22;
  byte bVar23;
  uint uVar24;
  FArguments *pFVar25;
  FSlot *pFVar26;
  FSlotArguments *pFVar27;
  FArguments *pFVar28;
  TSharedRef<SHorizontalBox,1> *pTVar29;
  TSharedRef<SWidget,1> *pTVar30;
  ISlateStyle *pIVar31;
  FName *pFVar32;
  FArguments *this_02;
  undefined8 *puVar33;
  ulong64 uVar34;
  FArguments *pFVar35;
  FSlot *this_03;
  FSizeParam *pFVar36;
  FSlotArguments *pFVar37;
  FMRSWRecursiveAccessDetector *this_04;
  char *pcVar38;
  longlong lVar39;
  FButtonStyle *pFVar40;
  FSharedReferencer<1> FVar41;
  undefined1 local_1617;
  undefined1 local_1616 [2];
  uint local_1614;
  longlong local_1610;
  FButtonStyle *local_1608;
  T0RequiredArgs local_1600;
  T0RequiredArgs local_15ff;
  T0RequiredArgs local_15fe;
  T0RequiredArgs local_15fd [5];
  FScriptContainerElement *local_15f8;
  FLLMScope local_15f0;
  FLLMScope local_15ec;
  FLLMScope local_15e8;
  FLLMScope local_15e4;
  undefined1 local_15e0 [8];
  FDelegateAllocation local_15d8;
  undefined1 local_15c8 [8];
  FDelegateAllocation local_15c0;
  undefined1 local_15b0 [8];
  FDelegateAllocation local_15a8;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_1598;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_1580;
  TReferenceControllerBase<1> *local_1568;
  FArguments *local_1560;
  SHorizontalBox *local_1558;
  TReferenceControllerBase<1> *local_1550;
  TReferenceControllerBase<1> *local_1548;
  FScriptContainerElement local_1540;
  FScriptContainerElement local_153f;
  undefined1 local_1538 [8];
  void *pvStack_1530;
  undefined4 local_1528;
  undefined8 local_1520;
  FSharedReferencer<1> local_1518;
  TSharedRef<SWidget,1> local_1510;
  FText local_1500;
  FScriptContainerElement local_14f0;
  undefined1 local_14e8 [8];
  void *pvStack_14e0;
  undefined4 local_14d8;
  FText local_14d0;
  FScriptContainerElement local_14c0;
  undefined1 local_14b8 [8];
  void *pvStack_14b0;
  undefined4 local_14a8;
  FName local_14a0;
  FMemScope local_1498;
  TReferenceControllerBase<1> *local_1490;
  FName local_1488;
  FMemScope local_1480;
  FName local_1478;
  FMemScope local_1470;
  FSlot *local_1468;
  TPanelChildren<SBoxPanel::FSlot> *local_1460;
  TReferenceControllerBase<1> *local_1458;
  TReferenceControllerBase<1> *local_1450;
  TReferenceControllerBase<1> *local_1448;
  undefined4 local_1440 [2];
  code *local_1438;
  undefined4 uStack_1430;
  undefined4 uStack_142c;
  code *local_1428;
  undefined4 uStack_1420;
  undefined4 uStack_141c;
  code *local_1418;
  undefined4 uStack_1410;
  undefined4 uStack_140c;
  undefined4 local_1408 [2];
  undefined4 local_1400 [2];
  undefined4 local_13f8 [2];
  undefined1 local_13f0 [4];
  undefined1 local_13ec [4];
  FSlot *local_13e8;
  FSlot *local_13e0;
  FName local_13d8;
  FMemScope local_13d0;
  TAttribute<float> local_13c8;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_13a8;
  undefined8 local_1390;
  undefined8 uStack_1388;
  undefined1 local_1380;
  undefined1 local_1378 [8];
  void *pvStack_1370;
  undefined8 local_1368;
  TSharedRef<SWidget,1> local_1360;
  TSharedRef<SHorizontalBox,1> local_1350;
  FDestructionSentinel local_1340;
  FDestructionSentinel local_1328;
  FDestructionSentinel local_1310;
  FDestructionSentinel local_12f8;
  FDelegateAllocation *local_12e0;
  FDestructionSentinel local_12d8;
  FDelegateAllocation *local_12c0;
  FDestructionSentinel local_12b8;
  FDelegateAllocation *local_12a0;
  FName local_1298;
  FName local_1290;
  FName local_1288;
  TSharedRef<SHorizontalBox,1> local_1280;
  TSharedRef<SWidget,1> local_1270;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_1260;
  FReadAccessScope local_1248;
  SWidget *local_1230;
  TReferenceControllerBase<1> *pTStack_1228;
  TSharedRef<SWidget,1> local_1220;
  undefined1 local_1210 [16];
  undefined1 local_1200 [32];
  undefined1 local_11e0 [24];
  undefined **local_11c8;
  undefined8 *local_11c0;
  SButton *local_11b8;
  FSharedReferencer<1> local_11b0 [3];
  undefined1 local_1198;
  undefined1 local_1190 [40];
  FSlotArgumentsMixin local_1168;
  TPanelChildren<SBoxPanel::FSlot> *local_10d8;
  int local_10d0;
  FSlotArguments local_10c8;
  FSlotArguments local_fe0;
  FArguments local_ef8;
  FArguments local_cf0;
  FArguments local_ae8;
  FArguments local_5a8;
  undefined8 uStack_48;
  
  uStack_48 = 0x142d91c9d;
  bVar19 = false;
  bVar18 = false;
  bVar17 = false;
  bVar16 = false;
  bVar15 = false;
  bVar14 = false;
  bVar11 = false;
  bVar10 = false;
  pFVar25 = SHorizontalBox::FArguments::FArguments(&local_cf0);
  pFVar26 = ::operator_new(0x58);
  local_13e8 = (FSlot *)0x0;
  if (pFVar26 != (FSlot *)0x0) {
    *(undefined8 *)pFVar26 = 0;
    *(undefined8 *)&pFVar26->field_0x8 = 0;
    *(undefined8 *)&pFVar26->field_0x10 = 0;
    *(undefined8 *)&pFVar26->field_0x18 = 0;
    *(undefined8 *)&pFVar26->field_0x20 = 0;
    *(undefined8 *)&pFVar26->field_0x28 = 0;
    *(undefined8 *)&pFVar26->field_0x30 = 0;
    *(undefined8 *)&pFVar26->field_0x38 = 0;
    *(undefined8 *)&pFVar26->field_0x40 = 0;
    *(undefined8 *)&pFVar26->field_0x48 = 0;
    *(undefined8 *)&pFVar26->field_0x50 = 0;
    local_13e8 = SHorizontalBox::FSlot::FSlot(pFVar26);
  }
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments(&local_fe0,(FSlot *)&local_13e8);
  pFVar27 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(&local_fe0);
  puVar1 = &pFVar27->field_0x48;
  if (local_1440 != (undefined4 *)puVar1) {
    *(undefined4 *)puVar1 = 1;
    pFVar27->field_0x4c = 1;
  }
  pFVar37 = (FSlotArguments *)0x0;
  if (puVar1 != (undefined1 *)0x0) {
    pFVar37 = pFVar27;
  }
  if (local_1408 != (undefined4 *)&pFVar37->field_0x50) {
    *(undefined4 *)&pFVar37->field_0x50 = 2;
    pFVar37->field_0x54 = 1;
  }
  pFVar27 = (FSlotArguments *)0x0;
  if (pFVar37 != (FSlotArguments *)0xffffffffffffffb8) {
    pFVar27 = pFVar37;
  }
  pFVar27 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)pFVar27,&(param_1->_BeforeButtons).Widget);
  pFVar25 = SHorizontalBox::FArguments::operator+(pFVar25,pFVar27);
  pFVar26 = ::operator_new(0x58);
  local_13e0 = (FSlot *)0x0;
  if (pFVar26 != (FSlot *)0x0) {
    *(undefined8 *)pFVar26 = 0;
    *(undefined8 *)&pFVar26->field_0x8 = 0;
    *(undefined8 *)&pFVar26->field_0x10 = 0;
    *(undefined8 *)&pFVar26->field_0x18 = 0;
    *(undefined8 *)&pFVar26->field_0x20 = 0;
    *(undefined8 *)&pFVar26->field_0x28 = 0;
    *(undefined8 *)&pFVar26->field_0x30 = 0;
    *(undefined8 *)&pFVar26->field_0x38 = 0;
    *(undefined8 *)&pFVar26->field_0x40 = 0;
    *(undefined8 *)&pFVar26->field_0x48 = 0;
    *(undefined8 *)&pFVar26->field_0x50 = 0;
    local_13e0 = SHorizontalBox::FSlot::FSlot(pFVar26);
  }
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments(&local_10c8,(FSlot *)&local_13e0);
  local_13c8.Value = 1.0;
  local_13c8.Getter._16_8_ = 0;
  local_13c8.bIsSet = true;
  local_13c8.Getter._0_8_ = 0;
  local_13c8.Getter._8_8_ = 0;
  pFVar27 = SHorizontalBox::FSlot::FSlotArguments::FillWidth(&local_10c8,&local_13c8);
  if (local_1400 != (undefined4 *)&pFVar27->field_0x50) {
    *(undefined4 *)&pFVar27->field_0x50 = 2;
    pFVar27->field_0x54 = 1;
  }
  pFVar37 = (FSlotArguments *)0x0;
  if (pFVar27 != (FSlotArguments *)0xffffffffffffffb8) {
    pFVar37 = pFVar27;
  }
  puVar1 = &pFVar37->field_0x48;
  if (local_13f8 != (undefined4 *)puVar1) {
    *(undefined4 *)puVar1 = 3;
    pFVar37->field_0x4c = 1;
  }
  pFVar27 = (FSlotArguments *)0x0;
  if (puVar1 != (undefined1 *)0x0) {
    pFVar27 = pFVar37;
  }
  pFVar28 = SHorizontalBox::FArguments::FArguments(&local_ef8);
  FLLMScope::FLLMScope(&local_15f0,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_13d8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_13d0,&local_13d8,true);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
            (&local_13a8,"SHorizontalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\Dialog\\SCustomDialog.cpp"
             ,0xdf,&local_1600);
  FMemScope::~FMemScope(&local_13d0);
  FLLMScope::~FLLMScope(&local_15f0);
  FVar41.ReferenceController = local_13a8._Widget.SharedReferenceCount.ReferenceController;
  local_1448 = local_13a8._Widget.SharedReferenceCount.ReferenceController;
  if (local_13a8._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_13a8._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_13a8._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_1558 = local_13a8._Widget.Object;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  pTVar29 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_13a8,&local_1280,pFVar28);
  pTVar5 = (pTVar29->SharedReferenceCount).ReferenceController;
  local_1360.Object = (SWidget *)pTVar29->Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1360.SharedReferenceCount.ReferenceController = pTVar5;
  pFVar27 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)pFVar27,&local_1360);
  pFVar25 = SHorizontalBox::FArguments::operator+(pFVar25,pFVar27);
  FLLMScope::FLLMScope(&local_15ec,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_14a0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1498,&local_14a0,true);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
            (&local_1260,"SHorizontalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\Dialog\\SCustomDialog.cpp"
             ,0xce,&local_15ff);
  FMemScope::~FMemScope(&local_1498);
  FLLMScope::~FLLMScope(&local_15ec);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
            (&local_1260,&local_1350,pFVar25);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1260._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1280.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_13a8._Widget.SharedReferenceCount.ReferenceController);
  DestructItems<SHorizontalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_ef8._Slots.AllocatorInstance.Data,local_ef8._Slots.ArrayNum);
  if ((FSlotArguments *)local_ef8._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_ef8._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_ef8);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_10c8);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_fe0);
  DestructItems<SHorizontalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_cf0._Slots.AllocatorInstance.Data,local_cf0._Slots.ArrayNum);
  if ((FSlotArguments *)local_cf0._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_cf0._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_cf0);
  uVar20 = local_1510.SharedReferenceCount.ReferenceController._4_4_;
  bVar13 = false;
  bVar12 = true;
  local_1614 = 0;
  if (0 < (param_1->_Buttons).ArrayNum) {
    local_1460 = (TPanelChildren<SBoxPanel::FSlot> *)&local_1558->field_0x218;
    local_1610 = 0;
    do {
      lVar39 = local_1610;
      uVar24 = 0;
      if ((int)local_1614 < (param_1->_Buttons).ArrayNum) {
        uVar24 = ~local_1614 >> 0x1f;
      }
      if ((uVar24 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar9 = (code *)swi(3);
        pTVar30 = (TSharedRef<SWidget,1> *)(*pcVar9)();
        return pTVar30;
      }
      pFVar6 = (param_1->_Buttons).AllocatorInstance.Data;
      local_15f8 = pFVar6;
      if (pFVar6[lVar39 + 0x9c] == (FScriptContainerElement)0x0) {
        pIVar31 = FAppStyle::Get();
        pcVar38 = "Button";
        pFVar32 = &local_1298;
      }
      else {
        pIVar31 = FAppStyle::Get();
        pcVar38 = "PrimaryButton";
        pFVar32 = &local_1288;
      }
      pFVar32 = ::FName::FName(pFVar32,pcVar38);
      local_1608 = (FButtonStyle *)
                   (**(code **)((longlong)*pIVar31 + 0xa0))
                             (pIVar31,FButtonStyle::TypeName,*pFVar32,0,1);
      if (local_1608 == (FButtonStyle *)0x0) {
        local_1608 = FButtonStyle::GetDefault();
      }
      this_02 = SButton::FArguments::FArguments(&local_ae8);
      lVar39 = local_1610;
      local_1538 = (undefined1  [8])0x0;
      pvStack_1530 = (void *)0x0;
      local_1528 = 0;
      local_1540 = pFVar6[local_1610 + 0x60];
      local_153f = pFVar6[local_1610 + 0x61];
      local_1560 = this_02;
      TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
                ((TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)local_1538,
                 (TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)
                 (pFVar6 + local_1610 + 0x68));
      *(FScriptContainerElement *)&this_02->_padding_ = local_1540;
      *(FScriptContainerElement *)((longlong)&this_02->_padding_ + 1) = local_153f;
      TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this_02->_padding_,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1538);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1538);
      if (pvStack_1530 != (void *)0x0) {
        FMemory::Free(pvStack_1530);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_1538);
      local_1500.TextData.Reference = *(ITextData **)(pFVar6 + lVar39 + 0x30);
      if (local_1500.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_1500.TextData.Reference + 8))
                  (local_1500.TextData.Reference,local_13f0);
      }
      local_1500.Flags = *(uint *)(pFVar6 + lVar39 + 0x38);
      local_14f0 = pFVar6[lVar39 + 0x40];
      local_14e8 = (undefined1  [8])0x0;
      pvStack_14e0 = (void *)0x0;
      local_14d8 = 0;
      TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::
      CopyFrom<FDefaultDelegateUserPolicy>
                ((TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)local_14e8,
                 (TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)
                 (pFVar6 + lVar39 + 0x48));
      FText::operator=((FText *)this_02,&local_1500);
      *(FScriptContainerElement *)&this_02->_padding_ = local_14f0;
      TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this_02->_padding_,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)local_14e8);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_14e8);
      if (pvStack_14e0 != (void *)0x0) {
        FMemory::Free(pvStack_14e0);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_14e8);
      if (local_1500.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_1500.TextData.Reference + 0x10))();
      }
      local_15e0 = (undefined1  [8])0x0;
      local_15d8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_15d8.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_15e0,
                 (FWriteAccessScope *)&local_12f8);
      local_12e0 = &local_15d8;
      puVar33 = UE::Core::Private::DelegateAllocate(0x50,&local_15d8);
      if (puVar33 != (undefined8 *)0x0) {
        local_1438 = OnButtonClicked;
        uStack_1430 = 0;
        uStack_142c = uVar20;
        pTVar30 = TSharedFromThis<SWidget,1>::AsShared
                            ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_1270);
        pSVar7 = pTVar30->Object;
        pTVar5 = (pTVar30->SharedReferenceCount).ReferenceController;
        if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
          UNLOCK();
          LOCK();
          pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
          UNLOCK();
        }
        *puVar33 = &
                   ___7__TCommonDelegateInstanceState___A6A_AVFReply__XZUFDefaultDelegateUserPolicy__V__TDelegate___A6AXXZUFDefaultDelegateUserPolicy____H__6B_
        ;
        bVar15 = true;
        bVar14 = true;
        bVar11 = true;
        puVar33[1] = 0;
        puVar33[2] = 0;
        *(undefined4 *)(puVar33 + 3) = 0;
        local_1568 = pTVar5;
        local_1490 = pTVar5;
        TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
        CopyFrom<FDefaultDelegateUserPolicy>
                  ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(puVar33 + 1),
                   (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                   (local_15f8 + local_1610 + 0x80));
        *(uint *)(puVar33 + 4) = local_1614;
        uVar34 = FDelegateHandle::GenerateNewID();
        puVar33[5] = uVar34;
        *puVar33 = &
                   ___7__TBaseSPMethodDelegateInstance__0A_VSCustomDialog___00__A6A_AVFReply__XZUFDefaultDelegateUserPolicy__V__TDelegate___A6AXXZUFDefaultDelegateUserPolicy____H__6B_
        ;
        puVar33[6] = pSVar7;
        puVar33[7] = pTVar5;
        if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar5->WeakReferenceCount = (atomic<int>)((int)pTVar5->WeakReferenceCount + 1);
          UNLOCK();
        }
        puVar33[8] = local_1438;
        puVar33[9] = CONCAT44(uStack_142c,uStack_1430);
        this_02 = local_1560;
      }
      if (bVar14) {
        bVar14 = false;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_1568);
      }
      if (bVar15) {
        bVar15 = false;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_1490);
      }
      if (bVar11) {
        bVar11 = false;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_1270.SharedReferenceCount.ReferenceController);
      }
      if (local_12f8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_12f8.Accessor,&local_12f8);
      }
      TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this_02->_OnClicked,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)local_15e0);
      this_02->_ButtonStyle = local_1608;
      pFVar35 = STextBlock::FArguments::FArguments(&local_5a8);
      pFVar6 = local_15f8;
      local_14d0.TextData.Reference = *(ITextData **)(local_15f8 + local_1610);
      if (local_14d0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_14d0.TextData.Reference + 8))
                  (local_14d0.TextData.Reference,local_13ec);
      }
      local_14d0.Flags = *(uint *)(pFVar6 + local_1610 + 8);
      local_14c0 = pFVar6[local_1610 + 0x10];
      local_14b8 = (undefined1  [8])0x0;
      pvStack_14b0 = (void *)0x0;
      local_14a8 = 0;
      TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::
      CopyFrom<FDefaultDelegateUserPolicy>
                ((TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)local_14b8,
                 (TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)
                 (pFVar6 + local_1610 + 0x18));
      FText::operator=(&(pFVar35->_Text).Value,&local_14d0);
      (pFVar35->_Text).bIsSet = (bool)local_14c0;
      TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar35->_Text).Getter,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)local_14b8);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_14b8);
      if (pvStack_14b0 != (void *)0x0) {
        FMemory::Free(pvStack_14b0);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_14b8);
      if (local_14d0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_14d0.TextData.Reference + 0x10))();
      }
      FLLMScope::FLLMScope
                (&local_15e8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
      local_1488 = LLMTagDeclaration_UI_Slate.UniqueName;
      FMemScope::FMemScope(&local_1480,&local_1488,true);
      TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
      TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                (&local_1580,"STextBlock",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\Dialog\\SCustomDialog.cpp"
                 ,0xf3,&local_15fe);
      FMemScope::~FMemScope(&local_1480);
      FLLMScope::~FLLMScope(&local_15e8);
      this_01 = local_1580._Widget.Object;
      if ((local_1580._Widget.Object == (STextBlock *)0x0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar21)) {
        pcVar9 = (code *)swi(3);
        pTVar30 = (TSharedRef<SWidget,1> *)(*pcVar9)();
        return pTVar30;
      }
      SWidget::SWidgetConstruct((SWidget *)this_01,(FSlateBaseNamedArgs *)pFVar35);
      STextBlock::Construct(this_01,pFVar35);
      if ((this_01 == (STextBlock *)0x0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar21)) {
        pcVar9 = (code *)swi(3);
        pTVar30 = (TSharedRef<SWidget,1> *)(*pcVar9)();
        return pTVar30;
      }
      if ((this_01->_padding_ & 0x10) == 0) {
        cVar22 = (**(code **)(this_01->_padding_ + 0x228))(this_01);
        bVar23 = 0;
        if (cVar22 != '\0') goto LAB_142d92669;
      }
      else {
LAB_142d92669:
        bVar23 = 0x20;
      }
      *(byte *)&this_01->_padding_ = (byte)this_01->_padding_ & 0xdf;
      *(byte *)&this_01->_padding_ = (byte)this_01->_padding_ | bVar23;
      if ((this_01 == (STextBlock *)0x0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar21)) {
        pcVar9 = (code *)swi(3);
        pTVar30 = (TSharedRef<SWidget,1> *)(*pcVar9)();
        return pTVar30;
      }
      pbVar2 = (byte *)((longlong)&this_01->_padding_ + 1);
      *pbVar2 = *pbVar2 | 4;
      if ((this_01 == (STextBlock *)0x0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x416,L""), bVar21)) {
        pcVar9 = (code *)swi(3);
        pTVar30 = (TSharedRef<SWidget,1> *)(*pcVar9)();
        return pTVar30;
      }
      FVar41.ReferenceController = local_1580._Widget.SharedReferenceCount.ReferenceController;
      local_1580._Widget.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      local_1580._Widget.Object = (STextBlock *)0x0;
      if ((this_01 == (STextBlock *)0x0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x26c,L""), bVar21)) {
        pcVar9 = (code *)swi(3);
        pTVar30 = (TSharedRef<SWidget,1> *)(*pcVar9)();
        return pTVar30;
      }
      if (FVar41.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (FVar41.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(FVar41.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        (FVar41.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(FVar41.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_1230 = (this_02->_Content).Widget.Object;
      pTStack_1228 = (this_02->_Content).Widget.SharedReferenceCount.ReferenceController;
      (this_02->_Content).Widget.Object = (SWidget *)this_01;
      (this_02->_Content).Widget.SharedReferenceCount.ReferenceController =
           FVar41.ReferenceController;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_1228);
      FLLMScope::FLLMScope
                (&local_15e4,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
      local_1478 = LLMTagDeclaration_UI_Slate.UniqueName;
      FMemScope::FMemScope(&local_1470,&local_1478,true);
      TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::
      TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>
                (&local_1598,"SButton",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\Dialog\\SCustomDialog.cpp"
                 ,0xec,local_15fd);
      FMemScope::~FMemScope(&local_1470);
      FLLMScope::~FLLMScope(&local_15e4);
      this_00 = local_1598._Widget.Object;
      if ((local_1598._Widget.Object == (SButton *)0x0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar21)) {
        pcVar9 = (code *)swi(3);
        pTVar30 = (TSharedRef<SWidget,1> *)(*pcVar9)();
        return pTVar30;
      }
      SWidget::SWidgetConstruct((SWidget *)this_00,(FSlateBaseNamedArgs *)local_1560);
      SButton::Construct(this_00,local_1560);
      if ((this_00 == (SButton *)0x0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar21)) {
        pcVar9 = (code *)swi(3);
        pTVar30 = (TSharedRef<SWidget,1> *)(*pcVar9)();
        return pTVar30;
      }
      if ((this_00->_padding_ & 0x10) == 0) {
        cVar22 = (**(code **)(this_00->_padding_ + 0x228))(this_00);
        bVar23 = 0;
        if (cVar22 != '\0') goto LAB_142d9285c;
      }
      else {
LAB_142d9285c:
        bVar23 = 0x20;
      }
      *(byte *)&this_00->_padding_ = (byte)this_00->_padding_ & 0xdf;
      *(byte *)&this_00->_padding_ = (byte)this_00->_padding_ | bVar23;
      if ((this_00 == (SButton *)0x0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar21)) {
        pcVar9 = (code *)swi(3);
        pTVar30 = (TSharedRef<SWidget,1> *)(*pcVar9)();
        return pTVar30;
      }
      pbVar2 = (byte *)((longlong)&this_00->_padding_ + 1);
      *pbVar2 = *pbVar2 | 4;
      if ((this_00 == (SButton *)0x0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x416,L""), bVar21)) {
        pcVar9 = (code *)swi(3);
        pTVar30 = (TSharedRef<SWidget,1> *)(*pcVar9)();
        return pTVar30;
      }
      local_1608 = (FButtonStyle *)local_1598._Widget.SharedReferenceCount.ReferenceController;
      local_1598._Widget.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      local_1598._Widget.Object = (SButton *)0x0;
      if ((this_00 == (SButton *)0x0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x26c,L""), bVar21)) {
        pcVar9 = (code *)swi(3);
        pTVar30 = (TSharedRef<SWidget,1> *)(*pcVar9)();
        return pTVar30;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar41.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar41.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1580._Widget.SharedReferenceCount.ReferenceController);
      STextBlock::FArguments::~FArguments(&local_5a8);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_15e0,
                 (FWriteAccessScope *)&local_1310);
      if ((local_15d8.DelegateSize != 0) &&
         (local_15d8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_15d8.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_15d8,0,0,0x10);
        local_15d8.DelegateSize = 0;
      }
      if (local_1310.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1310.Accessor,&local_1310);
      }
      if (local_15d8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_15d8.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_15e0);
      SButton::FArguments::~FArguments(&local_ae8);
      if ((local_1558 == (SHorizontalBox *)0x0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar21)) {
        pcVar9 = (code *)swi(3);
        pTVar30 = (TSharedRef<SWidget,1> *)(*pcVar9)();
        return pTVar30;
      }
      this_03 = ::operator_new(0x58);
      pFVar26 = (FSlot *)0x0;
      if (this_03 != (FSlot *)0x0) {
        *(undefined8 *)this_03 = 0;
        *(undefined8 *)&this_03->field_0x8 = 0;
        *(undefined8 *)&this_03->field_0x10 = 0;
        *(undefined8 *)&this_03->field_0x18 = 0;
        *(undefined8 *)&this_03->field_0x20 = 0;
        *(undefined8 *)&this_03->field_0x28 = 0;
        *(undefined8 *)&this_03->field_0x30 = 0;
        *(undefined8 *)&this_03->field_0x38 = 0;
        *(undefined8 *)&this_03->field_0x40 = 0;
        *(undefined8 *)&this_03->field_0x48 = 0;
        *(undefined8 *)&this_03->field_0x50 = 0;
        pFVar26 = SHorizontalBox::FSlot::FSlot(this_03);
      }
      local_1468 = pFVar26;
      SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
                ((FSlotArguments *)&local_11c0,(FSlot *)&local_1468);
      local_10d0 = -1;
      local_11c8 = &___7__FScopedWidgetSlotArguments_VFSlot_SHorizontalBox___SBoxPanel__6B_;
      local_10d8 = local_1460;
      pIVar31 = FAppStyle::Get();
      pcVar9 = *(code **)((longlong)*pIVar31 + 0x48);
      pFVar32 = ::FName::FName(&local_1290,"StandardDialog.SlotPadding");
      puVar33 = (undefined8 *)(*pcVar9)(pIVar31,*pFVar32,0,&FStyleDefaults::DefaultMargin,0);
      local_1390 = *puVar33;
      uStack_1388 = puVar33[1];
      local_1380 = 1;
      local_1368 = 0;
      local_1198 = 1;
      local_1378 = (undefined1  [8])0x0;
      pvStack_1370 = (void *)0x0;
      local_11b0[1].ReferenceController = (TReferenceControllerBase<1> *)local_1390;
      local_11b0[2].ReferenceController = (TReferenceControllerBase<1> *)uStack_1388;
      TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1190,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1378);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1378);
      if (pvStack_1370 != (void *)0x0) {
        FMemory::Free(pvStack_1370);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_1378);
      pFVar36 = (FSizeParam *)FAuto::FAuto((FAuto *)local_1210);
      TOptional<FSizeParam>::operator=(&local_1168._SizeParam,pFVar36);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_11e0);
      if ((void *)local_11e0._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_11e0._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_11e0);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1200);
      if ((void *)local_1200._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_1200._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_1200);
      pFVar40 = local_1608;
      local_1518.ReferenceController = (TReferenceControllerBase<1> *)local_1608;
      if (local_1608 != (FButtonStyle *)0x0) {
        LOCK();
        *(atomic<int> *)&local_1608->field_0x8 =
             (atomic<int>)((int)*(atomic<int> *)&local_1608->field_0x8 + 1);
        UNLOCK();
        LOCK();
        *(atomic<int> *)&local_1608->field_0x8 =
             (atomic<int>)((int)*(atomic<int> *)&local_1608->field_0x8 + 1);
        UNLOCK();
      }
      local_11b8 = this_00;
      local_1520 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(local_11b0,&local_1518);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1518.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar40);
      local_11c8 = &___7__FScopedWidgetSlotArguments_VFSlot_SHorizontalBox___SBoxPanel__6B_;
      if (local_11c0 != (undefined8 *)0x0) {
        if (local_10d0 == -1) {
          TPanelChildren<SBoxPanel::FSlot>::AddSlot(local_10d8,(FSlotArguments *)&local_11c0);
        }
        else {
          TPanelChildren<SBoxPanel::FSlot>::InsertSlot
                    (local_10d8,(FSlotArguments *)&local_11c0,local_10d0);
        }
      }
      TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
                (&local_1168);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1190);
      if ((void *)local_1190._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_1190._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_1190);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_11b0[0].ReferenceController);
      if (local_11c0 != (undefined8 *)0x0) {
        (**(code **)*local_11c0)(local_11c0,1);
      }
      pFVar6 = local_15f8;
      if (local_15f8[local_1610 + 0x9d] == (FScriptContainerElement)0x0) {
        if (((bVar12) &&
            ((local_15f8[local_1610 + 0x9c] != (FScriptContainerElement)0x0 ||
             (*(int *)(local_15f8 + local_1610 + 0x98) == 2)))) ||
           ((local_1614 == (param_1->_Buttons).ArrayNum - 1U && (!bVar13)))) goto LAB_142d92cd9;
      }
      else {
        bVar12 = false;
LAB_142d92cd9:
        bVar13 = true;
        if (pFVar40 != (FButtonStyle *)0x0) {
          LOCK();
          *(atomic<int> *)&pFVar40->field_0x8 =
               (atomic<int>)((int)*(atomic<int> *)&pFVar40->field_0x8 + 1);
          UNLOCK();
        }
        this->_padding_ = (longlong)this_00;
        if (pFVar40 != (FButtonStyle *)this->_padding_) {
          if (pFVar40 != (FButtonStyle *)0x0) {
            LOCK();
            *(atomic<int> *)&pFVar40->field_0xc =
                 (atomic<int>)((int)*(atomic<int> *)&pFVar40->field_0xc + 1);
            UNLOCK();
          }
          plVar8 = (longlong *)this->_padding_;
          if (plVar8 != (longlong *)0x0) {
            LOCK();
            piVar3 = (int *)((longlong)plVar8 + 0xc);
            iVar4 = *piVar3;
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar8 + 8))(plVar8,1);
            }
          }
          this->_padding_ = (longlong)pFVar40;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar40);
      }
      lVar39 = local_1610;
      if (*(int *)(pFVar6 + local_1610 + 0x98) == 1) {
        if (this->bGeneratedCancelButton == false) {
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                     &this->OnCancelHotkeyPressed,&local_1248);
          if (((*(int *)&(this->OnCancelHotkeyPressed).field_0x10 != 0) &&
              (plVar8 = *(longlong **)&(this->OnCancelHotkeyPressed).field_0x8,
              plVar8 != (longlong *)0x0)) &&
             (cVar22 = (**(code **)(*plVar8 + 0x38))(), cVar22 != '\0')) {
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
            ~FReadAccessScope(&local_1248);
            goto LAB_142d92db3;
          }
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_1248);
        }
        else {
LAB_142d92db3:
          local_1617 = 0;
          `SCustomDialog::CreateButtonBox'::__l13::<lambda_1>::operator()(&local_1617);
        }
        this->bGeneratedCancelButton = true;
        local_15c8 = (undefined1  [8])0x0;
        local_15c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        local_15c0.DelegateSize = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_15c8,
                   (FWriteAccessScope *)&local_12d8);
        local_12c0 = &local_15c0;
        puVar33 = UE::Core::Private::DelegateAllocate(0x50,&local_15c0);
        if (puVar33 != (undefined8 *)0x0) {
          local_1428 = OnHotkeyPressed;
          uStack_1420 = 0;
          uStack_141c = uVar20;
          pTVar30 = TSharedFromThis<SWidget,1>::AsShared
                              ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_1220);
          pSVar7 = pTVar30->Object;
          pTVar5 = (pTVar30->SharedReferenceCount).ReferenceController;
          if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
            UNLOCK();
            LOCK();
            pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
            UNLOCK();
          }
          *puVar33 = &
                     ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__V__TDelegate___A6AXXZUFDefaultDelegateUserPolicy____H__6B_
          ;
          bVar18 = true;
          bVar17 = true;
          bVar16 = true;
          puVar33[1] = 0;
          puVar33[2] = 0;
          *(undefined4 *)(puVar33 + 3) = 0;
          local_1550 = pTVar5;
          local_1458 = pTVar5;
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
          CopyFrom<FDefaultDelegateUserPolicy>
                    ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(puVar33 + 1),
                     (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                     (local_15f8 + local_1610 + 0x80));
          *(uint *)(puVar33 + 4) = local_1614;
          uVar34 = FDelegateHandle::GenerateNewID();
          puVar33[5] = uVar34;
          *puVar33 = &
                     ___7__TBaseSPMethodDelegateInstance__0A_VSCustomDialog___00__A6AXXZUFDefaultDelegateUserPolicy__V__TDelegate___A6AXXZUFDefaultDelegateUserPolicy____H__6B_
          ;
          puVar33[6] = pSVar7;
          puVar33[7] = pTVar5;
          if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar5->WeakReferenceCount = (atomic<int>)((int)pTVar5->WeakReferenceCount + 1);
            UNLOCK();
          }
          puVar33[8] = local_1428;
          puVar33[9] = CONCAT44(uStack_141c,uStack_1420);
          lVar39 = local_1610;
          pFVar40 = local_1608;
        }
        if (bVar16) {
          bVar16 = false;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_1550);
        }
        if (bVar17) {
          bVar17 = false;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_1458);
        }
        if (bVar18) {
          bVar18 = false;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_1220.SharedReferenceCount.ReferenceController);
        }
        if (local_12d8.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_12d8.Accessor,&local_12d8);
        }
        TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnCancelHotkeyPressed,
                   (TDelegateBase<FNotThreadSafeDelegateMode> *)local_15c8);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_15c8,
                   (FWriteAccessScope *)&local_1340);
        if ((local_15c0.DelegateSize != 0) &&
           (local_15c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
          (*(code *)**(undefined8 **)local_15c0.DelegateAllocator)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&local_15c0,0,0,0x10);
          local_15c0.DelegateSize = 0;
        }
        if (local_1340.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1340.Accessor,&local_1340);
        }
        if (local_15c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free((void *)local_15c0.DelegateAllocator);
        }
        this_04 = (FMRSWRecursiveAccessDetector *)local_15c8;
LAB_142d93240:
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this_04);
      }
      else if (*(int *)(pFVar6 + local_1610 + 0x98) == 2) {
        if ((this->bGeneratedConfirmButton != false) ||
           (bVar21 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                               ((TDelegateBase<FNotThreadSafeDelegateMode> *)
                                &this->OnConfirmHotkeyPressed), bVar21)) {
          local_1616[0] = 0;
          `SCustomDialog::CreateButtonBox'::__l17::<lambda_2>::operator()(local_1616);
        }
        this->bGeneratedConfirmButton = true;
        local_15b0 = (undefined1  [8])0x0;
        local_15a8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        local_15a8.DelegateSize = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_15b0,
                   (FWriteAccessScope *)&local_12b8);
        local_12a0 = &local_15a8;
        puVar33 = UE::Core::Private::DelegateAllocate(0x50,&local_15a8);
        if (puVar33 != (undefined8 *)0x0) {
          local_1418 = OnHotkeyPressed;
          uStack_1410 = 0;
          uStack_140c = uVar20;
          pTVar30 = TSharedFromThis<SWidget,1>::AsShared
                              ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_1510);
          pSVar7 = pTVar30->Object;
          pTVar5 = (pTVar30->SharedReferenceCount).ReferenceController;
          if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
            UNLOCK();
            LOCK();
            pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
            UNLOCK();
          }
          *puVar33 = &
                     ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__V__TDelegate___A6AXXZUFDefaultDelegateUserPolicy____H__6B_
          ;
          bVar19 = true;
          bVar10 = true;
          puVar33[1] = 0;
          puVar33[2] = 0;
          *(undefined4 *)(puVar33 + 3) = 0;
          local_1548 = pTVar5;
          local_1450 = pTVar5;
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
          CopyFrom<FDefaultDelegateUserPolicy>
                    ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(puVar33 + 1),
                     (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                     (local_15f8 + local_1610 + 0x80));
          *(uint *)(puVar33 + 4) = local_1614;
          uVar34 = FDelegateHandle::GenerateNewID();
          puVar33[5] = uVar34;
          *puVar33 = &
                     ___7__TBaseSPMethodDelegateInstance__0A_VSCustomDialog___00__A6AXXZUFDefaultDelegateUserPolicy__V__TDelegate___A6AXXZUFDefaultDelegateUserPolicy____H__6B_
          ;
          puVar33[6] = pSVar7;
          puVar33[7] = pTVar5;
          if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar5->WeakReferenceCount = (atomic<int>)((int)pTVar5->WeakReferenceCount + 1);
            UNLOCK();
          }
          puVar33[8] = local_1418;
          puVar33[9] = CONCAT44(uStack_140c,uStack_1410);
          lVar39 = local_1610;
          pFVar40 = local_1608;
        }
        if (bVar10) {
          bVar10 = false;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_1548);
        }
        if (bVar19) {
          bVar19 = false;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)
                     CONCAT44(local_1510.SharedReferenceCount.ReferenceController._4_4_,
                              local_1510.SharedReferenceCount.ReferenceController._0_4_));
        }
        if (local_12b8.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_12b8.Accessor,&local_12b8);
        }
        TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnConfirmHotkeyPressed,
                   (TDelegateBase<FNotThreadSafeDelegateMode> *)local_15b0);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_15b0,
                   (FWriteAccessScope *)&local_1328);
        if ((local_15a8.DelegateSize != 0) &&
           (local_15a8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
          (*(code *)**(undefined8 **)local_15a8.DelegateAllocator)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&local_15a8,0,0,0x10);
          local_15a8.DelegateSize = 0;
        }
        if (local_1328.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1328.Accessor,&local_1328);
        }
        if (local_15a8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free((void *)local_15a8.DelegateAllocator);
        }
        this_04 = (FMRSWRecursiveAccessDetector *)local_15b0;
        goto LAB_142d93240;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar40);
      local_1610 = lVar39 + 0xa0;
      local_1614 = local_1614 + 1;
      FVar41.ReferenceController = local_1448;
    } while ((int)local_1614 < (param_1->_Buttons).ArrayNum);
  }
  __return_storage_ptr__->Object = (SWidget *)local_1350.Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       local_1350.SharedReferenceCount.ReferenceController;
  if (local_1350.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1350.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1350.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1350.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar41.ReferenceController);
  return __return_storage_ptr__;
}

// CreateContentBox @ 142d932e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSharedRef<SWidget,1> * __thiscall
SCustomDialog::CreateContentBox
          (SCustomDialog *this,TSharedRef<SWidget,1> *__return_storage_ptr__,FArguments *param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  TArray<SScrollBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  SImage *pSVar5;
  TReferenceControllerBase<1> *pTVar6;
  FSlotArguments *pFVar7;
  code *pcVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  int iVar14;
  FArguments *pFVar15;
  FSlot *this_00;
  FSlotArguments *pFVar16;
  FArguments *pFVar17;
  undefined8 *puVar18;
  ulong64 uVar19;
  FArguments *pFVar20;
  TSharedRef<SImage,1> *pTVar21;
  TSharedRef<SBox,1> *pTVar22;
  FArguments *pFVar23;
  FSlotArguments *pFVar24;
  TSharedRef<SWidget,1> *pTVar25;
  TSharedRef<SScrollBox,1> *pTVar26;
  FSlotArguments *pFVar27;
  longlong *plVar28;
  FSlotArguments *pFVar29;
  undefined1 auStackY_15f8 [32];
  T0RequiredArgs local_15a8;
  T0RequiredArgs local_15a7;
  T0RequiredArgs local_15a6;
  T0RequiredArgs local_15a5;
  T0RequiredArgs local_15a4 [4];
  FLLMScope local_15a0;
  FLLMScope local_159c;
  FLLMScope local_1598;
  FLLMScope local_1594;
  FLLMScope local_1590 [2];
  SBox *local_1588;
  FSharedReferencer<1> local_1580;
  SWidget *local_1578;
  TReferenceControllerBase<1> *pTStack_1570;
  SWidget *local_1568;
  FSharedReferencer<1> local_1560;
  undefined8 local_1558;
  undefined8 uStack_1550;
  undefined1 local_1548;
  undefined1 local_1540 [8];
  ForAnyElementType FStack_1538;
  ulonglong local_1530;
  SScrollBox *local_1528;
  TReferenceControllerBase<1> *pTStack_1520;
  undefined8 local_1518;
  FSharedReferencer<1> local_1510;
  EHorizontalAlignment local_1508 [2];
  EVerticalAlignment local_1500 [2];
  EHorizontalAlignment local_14f8 [2];
  FName local_14f0;
  FMemScope local_14e8;
  FSlotArguments *local_14e0;
  FName local_14d8;
  FMemScope local_14d0;
  FName local_14c8;
  FMemScope local_14c0;
  FName local_14b8;
  FMemScope local_14b0;
  FMemScope local_14a8;
  TSharedRef<SWidget,1> *local_14a0;
  FName local_1498;
  TSharedRef<SHorizontalBox,1> local_1490;
  EVerticalAlignment local_1480 [2];
  FSlateBrush *local_1478;
  bool local_1470;
  undefined1 local_1468 [24];
  FSlateBrush *local_1450;
  undefined1 local_1448;
  undefined1 local_1440 [24];
  TAttribute<FOptionalSize> local_1428;
  TAttribute<float> local_1408;
  double local_13e8;
  double dStack_13e0;
  char local_13d8;
  bool local_13d0;
  undefined1 local_13c8 [24];
  longlong local_13b0;
  longlong lStack_13a8;
  undefined1 local_13a0;
  undefined1 local_1398 [24];
  FDestructionSentinel local_1380;
  FDestructionSentinel local_1368;
  longlong *local_1350;
  TSharedRef<SImage,1> local_1348;
  TSharedRef<SBox,1> local_1338;
  TSharedRef<SScrollBox,1> local_1328;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_1318;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_1300;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_12e8;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_12d0;
  TSlateDecl<SScrollBox,RequiredArgs::T0RequiredArgs> local_12b8;
  TSharedRef<SBox,1> local_12a0;
  undefined1 local_1290 [16];
  SBox *local_1280;
  FSharedReferencer<1> local_1278;
  longlong local_1270;
  longlong lStack_1268;
  undefined1 local_1260;
  undefined1 local_1258 [24];
  EHorizontalAlignment local_1240;
  undefined1 local_123c;
  EVerticalAlignment local_1238;
  undefined1 local_1234;
  FSlotArgumentsMixin local_1230;
  TPanelChildren<SBoxPanel::FSlot> *local_11a0;
  int local_1198;
  TAttribute<FMargin> local_1190;
  undefined **local_1160;
  undefined8 *local_1158 [2];
  TReferenceControllerBase<1> *local_1148;
  undefined1 local_1128 [40];
  FSlotArgumentsMixin local_1100;
  TPanelChildren<SBoxPanel::FSlot> *local_1070;
  int local_1068;
  undefined8 *local_1060 [2];
  TReferenceControllerBase<1> *local_1050;
  undefined1 local_1030 [40];
  FSlotArgumentsMixin local_1008;
  undefined1 local_f78 [256];
  FArguments local_e78;
  FArguments local_c70;
  FArguments local_9c8;
  FArguments local_700;
  FArguments local_3c0;
  code *local_78;
  longlong local_68 [3];
  longlong *local_50;
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x142d93302;
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_15f8;
  local_14a0 = __return_storage_ptr__;
  pFVar15 = SHorizontalBox::FArguments::FArguments(&local_e78);
  FLLMScope::FLLMScope(&local_15a0,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_14f0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_14e8,&local_14f0,true);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
            (&local_1318,"SHorizontalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\Dialog\\SCustomDialog.cpp"
             ,0x98,&local_15a8);
  FMemScope::~FMemScope(&local_14e8);
  FLLMScope::~FLLMScope(&local_15a0);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
            (&local_1318,&local_1490,pFVar15);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1318._Widget.SharedReferenceCount.ReferenceController);
  DestructItems<SHorizontalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_e78._Slots.AllocatorInstance.Data,local_e78._Slots.ArrayNum);
  if ((FSlotArguments *)local_e78._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_e78._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_e78);
  this_00 = ::operator_new(0x58);
  pFVar27 = (FSlotArguments *)0x0;
  local_14e0 = pFVar27;
  if (this_00 != (FSlot *)0x0) {
    *(undefined8 *)this_00 = 0;
    *(undefined8 *)&this_00->field_0x8 = 0;
    *(undefined8 *)&this_00->field_0x10 = 0;
    *(undefined8 *)&this_00->field_0x18 = 0;
    *(undefined8 *)&this_00->field_0x20 = 0;
    *(undefined8 *)&this_00->field_0x28 = 0;
    *(undefined8 *)&this_00->field_0x30 = 0;
    *(undefined8 *)&this_00->field_0x38 = 0;
    *(undefined8 *)&this_00->field_0x40 = 0;
    *(undefined8 *)&this_00->field_0x48 = 0;
    *(undefined8 *)&this_00->field_0x50 = 0;
    local_14e0 = (FSlotArguments *)SHorizontalBox::FSlot::FSlot(this_00);
  }
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_1158,(FSlot *)&local_14e0);
  local_1160 = &___7__FScopedWidgetSlotArguments_VFSlot_SHorizontalBox___SBoxPanel__6B_;
  local_1068 = -1;
  local_1070 = (TPanelChildren<SBoxPanel::FSlot> *)&(local_1490.Object)->field_0x218;
  pFVar16 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth((FSlotArguments *)local_1158);
  if (local_1480 != (EVerticalAlignment *)&pFVar16->field_0x50) {
    *(EVerticalAlignment *)&pFVar16->field_0x50 = param_1->_VAlignIcon;
    pFVar16->field_0x54 = 1;
  }
  pFVar29 = pFVar27;
  if (pFVar16 != (FSlotArguments *)0xffffffffffffffb8) {
    pFVar29 = pFVar16;
  }
  puVar1 = &pFVar29->field_0x48;
  if (local_1508 != (EHorizontalAlignment *)puVar1) {
    *(EHorizontalAlignment *)puVar1 = param_1->_HAlignIcon;
    pFVar29->field_0x4c = 1;
  }
  pFVar16 = pFVar27;
  if (puVar1 != (undefined1 *)0x0) {
    pFVar16 = pFVar29;
  }
  pFVar17 = SBox::FArguments::FArguments(&local_700);
  uVar10 = _UNK_1509ecea8;
  uVar12 = ___xmm_00000000410000000000000000000000;
  local_1548 = 1;
  local_1558 = ___xmm_00000000410000000000000000000000;
  uStack_1550 = _UNK_1509ecea8;
  local_1530 = 0;
  local_1540 = (undefined1  [8])0x0;
  FStack_1538.Data = (FScriptContainerElement *)0x0;
  (pFVar17->_Padding).bIsSet = true;
  uVar11 = ___xmm_00000000410000000000000000000000;
  ___xmm_00000000410000000000000000000000 = (undefined4)uVar12;
  _UNK_1509ecea4 = SUB84(uVar12,4);
  uVar9 = _UNK_1509ecea4;
  (pFVar17->_Padding).Value.Left = (float)___xmm_00000000410000000000000000000000;
  ___xmm_00000000410000000000000000000000 = uVar11;
  uVar12 = _UNK_1509ecea8;
  (pFVar17->_Padding).Value.Top = (float)uVar9;
  _UNK_1509ecea8 = (undefined4)uVar10;
  _UNK_1509eceac = SUB84(uVar10,4);
  uVar9 = _UNK_1509eceac;
  (pFVar17->_Padding).Value.Right = (float)_UNK_1509ecea8;
  _UNK_1509ecea8 = uVar12;
  (pFVar17->_Padding).Value.Bottom = (float)uVar9;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar17->_Padding).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1540);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1540,
             (FWriteAccessScope *)&local_1380);
  if (((int)local_1530 != 0) && (FStack_1538.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1538.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1538,0,0,0x10);
    local_1530 = local_1530 & 0xffffffff00000000;
  }
  if (local_1380.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1380.Accessor,&local_1380);
  }
  if (FStack_1538.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1538.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1540);
  local_1450 = (param_1->_Icon).Value;
  local_1448 = (param_1->_Icon).bIsSet;
  TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
            ((TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy> *)local_1440,
             &(param_1->_Icon).Getter);
  local_78 = (code *)0x0;
  local_50 = FMemory::Malloc(0x30,8);
  plVar28 = local_50 + 1;
  *local_50 = (longlong)
              &UE::Core::Private::Function::
               TFunction_OwnedObject<`SCustomDialog::CreateContentBox'::`2'::<lambda_1>,0,1>::
               _vftable_;
  *plVar28 = (longlong)local_1450;
  *(undefined1 *)(local_50 + 2) = local_1448;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_50 + 3),
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1440);
  if (plVar28 != (longlong *)0x0) {
    local_78 = UE::Core::Private::Function::
               TFunctionRefCaller<`SCustomDialog::CreateContentBox'::__l2::<lambda_1>,EVisibility>::
               Call;
  }
  *(undefined1 *)((longlong)&pFVar17->_padding_ + 1) = 1;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar17->_padding_,
             (FWriteAccessScope *)&local_1368);
  local_1350 = &pFVar17->_padding_;
  puVar18 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)local_1350);
  if (puVar18 != (undefined8 *)0x0) {
    *puVar18 = &
               ___7__TCommonDelegateInstanceState___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar19 = FDelegateHandle::GenerateNewID();
    puVar18[2] = uVar19;
    *puVar18 = &
               ___7__TBaseFunctorDelegateInstance___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy__V__TFunction___A6A_AUEVisibility__XZ____V__6B_
    ;
    puVar18[4] = local_78;
    puVar18[9] = 0;
    if (local_78 != (code *)0x0) {
      plVar28 = local_68;
      if (local_50 != (longlong *)0x0) {
        plVar28 = local_50;
      }
      (**(code **)*plVar28)();
    }
  }
  if (local_1368.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1368.Accessor,&local_1368);
  }
  pFVar20 = SImage::FArguments::FArguments(&local_c70);
  local_13d8 = (param_1->_IconDesiredSizeOverride).Value.bIsSet;
  if ((bool)local_13d8 != false) {
    local_13e8 = (param_1->_IconDesiredSizeOverride).Value.TypedValue.field0_0x0._s_0.X;
    dStack_13e0 = (param_1->_IconDesiredSizeOverride).Value.TypedValue.field0_0x0._s_0.Y;
  }
  local_13d0 = (param_1->_IconDesiredSizeOverride).bIsSet;
  TDelegate<TOptional<UE::Math::TVector2<double>_>___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<TOptional<UE::Math::TVector2<double>_>___cdecl(void),FDefaultDelegateUserPolicy>
            ((TDelegate<TOptional<UE::Math::TVector2<double>_>___cdecl(void),FDefaultDelegateUserPolicy>
              *)local_13c8,&(param_1->_IconDesiredSizeOverride).Getter);
  if ((TAttribute<TOptional<UE::Math::TVector2<double>_>_> *)&local_13e8 !=
      &pFVar20->_DesiredSizeOverride) {
    if (local_13d8 == '\0') {
      if ((pFVar20->_DesiredSizeOverride).Value.bIsSet != false) {
        (pFVar20->_DesiredSizeOverride).Value.bIsSet = false;
      }
    }
    else {
      (pFVar20->_DesiredSizeOverride).Value.TypedValue.field0_0x0._s_0.X = local_13e8;
      (pFVar20->_DesiredSizeOverride).Value.TypedValue.field0_0x0._s_0.Y = dStack_13e0;
      (pFVar20->_DesiredSizeOverride).Value.bIsSet = true;
    }
  }
  (pFVar20->_DesiredSizeOverride).bIsSet = local_13d0;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar20->_DesiredSizeOverride).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_13c8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_13c8);
  if ((void *)local_13c8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_13c8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_13c8);
  local_1478 = (param_1->_Icon).Value;
  local_1470 = (param_1->_Icon).bIsSet;
  TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
            ((TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy> *)local_1468,
             &(param_1->_Icon).Getter);
  (pFVar20->_Image).Value = local_1478;
  (pFVar20->_Image).bIsSet = local_1470;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar20->_Image).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1468);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1468);
  if ((void *)local_1468._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1468._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1468);
  FLLMScope::FLLMScope(&local_159c,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_14d8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_14d0,&local_14d8,true);
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
            (&local_12e8,"SImage",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\Dialog\\SCustomDialog.cpp"
             ,0xa3,&local_15a7);
  FMemScope::~FMemScope(&local_14d0);
  FLLMScope::~FLLMScope(&local_159c);
  pTVar21 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_12e8,&local_1348,pFVar20);
  pTVar4 = (pTVar21->SharedReferenceCount).ReferenceController;
  pSVar5 = pTVar21->Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1578 = (pFVar17->_Content).Widget.Object;
  pTStack_1570 = (pFVar17->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar17->_Content).Widget.Object = (SWidget *)pSVar5;
  (pFVar17->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1570);
  FLLMScope::FLLMScope(&local_1598,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_14c8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_14c0,&local_14c8,true);
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
            (&local_1300,"SBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\Dialog\\SCustomDialog.cpp"
             ,0x9f,&local_15a6);
  FMemScope::~FMemScope(&local_14c0);
  FLLMScope::~FLLMScope(&local_1598);
  pTVar22 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1300,&local_12a0,pFVar17);
  pTVar6 = (pTVar22->SharedReferenceCount).ReferenceController;
  local_1588 = pTVar22->Object;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1580.ReferenceController = pTVar6;
  if ((SBox **)&pFVar16->field_0x8 != &local_1588) {
    *(SBox **)&pFVar16->field_0x8 = local_1588;
    local_1588 = (SBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar16->field_0x10,&local_1580);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1580.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_12a0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1300._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1348.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_12e8._Widget.SharedReferenceCount.ReferenceController);
  SImage::FArguments::~FArguments(&local_c70);
  if (local_78 != (code *)0x0) {
    plVar28 = local_68;
    if (local_50 != (longlong *)0x0) {
      plVar28 = local_50;
    }
    (**(code **)(*plVar28 + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1440);
  if ((void *)local_1440._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1440._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1440);
  SBox::FArguments::~FArguments(&local_700);
  local_1160 = &___7__FScopedWidgetSlotArguments_VFSlot_SHorizontalBox___SBoxPanel__6B_;
  if (local_1158[0] != (undefined8 *)0x0) {
    if (local_1068 == -1) {
      TPanelChildren<SBoxPanel::FSlot>::AddSlot(local_1070,(FSlotArguments *)local_1158);
    }
    else {
      TPanelChildren<SBoxPanel::FSlot>::InsertSlot
                (local_1070,(FSlotArguments *)local_1158,local_1068);
    }
  }
  TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_1100);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1128);
  if ((void *)local_1128._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1128._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1128);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1148);
  if (local_1158[0] != (undefined8 *)0x0) {
    (**(code **)*local_1158[0])(local_1158[0],1);
  }
  if (param_1->_UseScrollBox == false) {
    SHorizontalBox::InsertSlot
              (local_1490.Object,(FScopedWidgetSlotArguments<SHorizontalBox::FSlot> *)local_f78,-1);
    local_1408.Value = 1.0;
    local_1408.Getter._16_8_ = 0;
    local_1408.bIsSet = true;
    local_1408.Getter._0_8_ = 0;
    local_1408.Getter._8_8_ = 0;
    pFVar16 = SHorizontalBox::FSlot::FSlotArguments::FillWidth
                        ((FSlotArguments *)(local_f78 + 8),&local_1408);
    if (local_1500 != (EVerticalAlignment *)&pFVar16->field_0x50) {
      *(EVerticalAlignment *)&pFVar16->field_0x50 = param_1->_VAlignContent;
      pFVar16->field_0x54 = 1;
    }
    pFVar29 = pFVar27;
    if (pFVar16 != (FSlotArguments *)0xffffffffffffffb8) {
      pFVar29 = pFVar16;
    }
    puVar1 = &pFVar29->field_0x48;
    if (local_14f8 != (EHorizontalAlignment *)puVar1) {
      *(EHorizontalAlignment *)puVar1 = param_1->_HAlignContent;
      pFVar29->field_0x4c = 1;
    }
    local_1190.Value.Left = (param_1->_ContentAreaPadding).Value.Left;
    local_1190.Value.Top = (param_1->_ContentAreaPadding).Value.Top;
    local_1190.Value.Right = (param_1->_ContentAreaPadding).Value.Right;
    local_1190.Value.Bottom = (param_1->_ContentAreaPadding).Value.Bottom;
    local_1190.bIsSet = (param_1->_ContentAreaPadding).bIsSet;
    if (puVar1 != (undefined1 *)0x0) {
      pFVar27 = pFVar29;
    }
    TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>::
    TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>
              (&local_1190.Getter,&(param_1->_ContentAreaPadding).Getter);
    pFVar27 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                        ((FSlotArgumentsMixin *)&pFVar27->field_0x18,&local_1190);
    TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
              ((FSlotArguments *)pFVar27,&(param_1->_Content).Widget);
    SBoxPanel::FScopedWidgetSlotArguments<SHorizontalBox::FSlot>::
    ~FScopedWidgetSlotArguments<SHorizontalBox::FSlot>
              ((FScopedWidgetSlotArguments<SHorizontalBox::FSlot> *)local_f78);
  }
  else {
    SHorizontalBox::InsertSlot
              (local_1490.Object,(FScopedWidgetSlotArguments<SHorizontalBox::FSlot> *)local_1290,-1)
    ;
    local_1238 = param_1->_VAlignContent;
    local_13b0._0_4_ = (param_1->_ContentAreaPadding).Value.Left;
    local_13b0._4_4_ = (param_1->_ContentAreaPadding).Value.Top;
    lStack_13a8._0_4_ = (param_1->_ContentAreaPadding).Value.Right;
    lStack_13a8._4_4_ = (param_1->_ContentAreaPadding).Value.Bottom;
    local_1240 = param_1->_HAlignContent;
    local_13a0 = (param_1->_ContentAreaPadding).bIsSet;
    local_1234 = 1;
    local_123c = 1;
    TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>::
    TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>
              ((TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy> *)local_1398,
               &(param_1->_ContentAreaPadding).Getter);
    local_1260 = local_13a0;
    local_1270 = local_13b0;
    lStack_1268 = lStack_13a8;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1258,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1398);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1398);
    if ((void *)local_1398._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_1398._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_1398);
    pFVar17 = SBox::FArguments::FArguments(&local_3c0);
    local_1428.Value.Size = param_1->_ScrollBoxMaxHeight;
    local_1428.bIsSet = true;
    local_1428.Getter._0_8_ = 0;
    local_1428.Getter._8_8_ = 0;
    local_1428.Getter._16_8_ = 0;
    pFVar17 = SBox::FArguments::MaxDesiredHeight(pFVar17,&local_1428);
    pFVar23 = SScrollBox::FArguments::FArguments(&local_9c8);
    pFVar24 = SScrollBox::Slot((FSlotArguments *)local_1060);
    local_1560.ReferenceController =
         (param_1->_Content).Widget.SharedReferenceCount.ReferenceController;
    local_1568 = (param_1->_Content).Widget.Object;
    if (local_1560.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_1560.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_1560.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((SWidget **)&pFVar24->field_0x8 != &local_1568) {
      *(SWidget **)&pFVar24->field_0x8 = local_1568;
      local_1568 = (SWidget *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&pFVar24->field_0x10,&local_1560);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1560.ReferenceController);
    pTVar3 = &pFVar23->_Slots;
    pFVar7 = (FSlotArguments *)(pTVar3->AllocatorInstance).Data;
    if (((pFVar7 <= pFVar24) && (pFVar24 < pFVar7 + (pFVar23->_Slots).ArrayMax)) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar13)) {
      pcVar8 = (code *)swi(3);
      pTVar25 = (TSharedRef<SWidget,1> *)(*pcVar8)();
      return pTVar25;
    }
    iVar14 = (pFVar23->_Slots).ArrayNum;
    piVar2 = &(pFVar23->_Slots).ArrayMax;
    if (iVar14 == *piVar2) {
      iVar14 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x8e8,&pTVar3->AllocatorInstance,piVar2);
    }
    (pFVar23->_Slots).ArrayNum = iVar14 + 1;
    SScrollBox::FSlot::FSlotArguments::FSlotArguments
              ((FSlotArguments *)((pTVar3->AllocatorInstance).Data + (longlong)iVar14 * 0xe8),
               pFVar24);
    FLLMScope::FLLMScope(&local_1594,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_14b8 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_14b0,&local_14b8,true);
    TSlateDecl<SScrollBox,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<SScrollBox,RequiredArgs::T0RequiredArgs>
              (&local_12b8,"SScrollBox",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\Dialog\\SCustomDialog.cpp"
               ,0xb3,&local_15a5);
    FMemScope::~FMemScope(&local_14b0);
    FLLMScope::~FLLMScope(&local_1594);
    pTVar26 = TSlateDecl<SScrollBox,RequiredArgs::T0RequiredArgs>::operator<<=
                        (&local_12b8,&local_1328,pFVar23);
    pTVar4 = (pTVar26->SharedReferenceCount).ReferenceController;
    local_1528 = pTVar26->Object;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar6 = (pFVar17->_Content).Widget.SharedReferenceCount.ReferenceController;
    (pFVar17->_Content).Widget.Object = (SWidget *)local_1528;
    (pFVar17->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar4;
    pTStack_1520 = pTVar4;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    FLLMScope::FLLMScope(local_1590,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_1498 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_14a8,&local_1498,true);
    TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
              (&local_12d0,"SBox",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\Dialog\\SCustomDialog.cpp"
               ,0xb0,local_15a4);
    FMemScope::~FMemScope(&local_14a8);
    FLLMScope::~FLLMScope(local_1590);
    pTVar22 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                        (&local_12d0,&local_1338,pFVar17);
    pTVar6 = (pTVar22->SharedReferenceCount).ReferenceController;
    local_1280 = pTVar22->Object;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_1518 = 0;
    local_1510.ReferenceController = pTVar6;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&local_1278,&local_1510);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1510.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1338.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_12d0._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1328.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_12b8._Widget.SharedReferenceCount.ReferenceController);
    TResizingWidgetSlotMixin<SScrollBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
              (&local_1008);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1030);
    if ((void *)local_1030._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_1030._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_1030);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1050);
    if (local_1060[0] != (undefined8 *)0x0) {
      (**(code **)*local_1060[0])(local_1060[0],1);
    }
    SScrollBox::FArguments::~FArguments(&local_9c8);
    SBox::FArguments::~FArguments(&local_3c0);
    local_1290._0_8_ = &___7__FScopedWidgetSlotArguments_VFSlot_SHorizontalBox___SBoxPanel__6B_;
    if ((undefined8 *)local_1290._8_8_ != (undefined8 *)0x0) {
      if (local_1198 == -1) {
        TPanelChildren<SBoxPanel::FSlot>::AddSlot(local_11a0,(FSlotArguments *)(local_1290 + 8));
      }
      else {
        TPanelChildren<SBoxPanel::FSlot>::InsertSlot
                  (local_11a0,(FSlotArguments *)(local_1290 + 8),local_1198);
      }
    }
    TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
              (&local_1230);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1258);
    if ((void *)local_1258._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_1258._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_1258);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1278.ReferenceController);
    if ((undefined8 *)local_1290._8_8_ != (undefined8 *)0x0) {
      (*(code *)**(undefined8 **)local_1290._8_8_)(local_1290._8_8_,1);
    }
  }
  pTVar25 = local_14a0;
  local_14a0->Object = (SWidget *)local_1490.Object;
  (local_14a0->SharedReferenceCount).ReferenceController =
       local_1490.SharedReferenceCount.ReferenceController;
  if (local_1490.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1490.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1490.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1490.SharedReferenceCount.ReferenceController);
  return pTVar25;
}

// ExecuteCancel @ 142da2ce0

void __thiscall SCustomDialog::ExecuteCancel(SCustomDialog *this)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnCancelHotkeyPressed,
             &local_28);
  if ((*(int *)&(this->OnCancelHotkeyPressed).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->OnCancelHotkeyPressed).field_0x8, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// ExecuteConfirm @ 142da2d30

void __thiscall SCustomDialog::ExecuteConfirm(SCustomDialog *this)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnConfirmHotkeyPressed
             ,&local_28);
  if ((*(int *)&(this->OnConfirmHotkeyPressed).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->OnConfirmHotkeyPressed).field_0x8, plVar1 != (longlong *)0x0))
  {
    (**(code **)(*plVar1 + 0x68))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// OnButtonClicked @ 142dbbf90

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SCustomDialog::OnButtonClicked
          (SCustomDialog *this,FReply *__return_storage_ptr__,
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_1,int param_2)

{
  undefined1 local_38 [8];
  ForAnyElementType local_30;
  int local_28;
  FDestructionSentinel local_20;
  
  local_38 = (undefined1  [8])0x0;
  local_30.Data = (FScriptContainerElement *)0x0;
  local_28 = 0;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_38,param_1);
  this->LastPressedButton = param_2;
  if (this->bAutoCloseOnButtonPress != false) {
    SWindow::RequestDestroyWindow((SWindow *)this);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_38,
             (FReadAccessScope *)&local_20);
  if ((local_28 != 0) && (local_30.Data != (FScriptContainerElement *)0x0)) {
    (**(code **)(*(longlong *)local_30.Data + 0x68))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_20);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_38,
             (FWriteAccessScope *)&local_20);
  if ((local_28 != 0) && (local_30.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_30.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
    local_28 = 0;
  }
  if (local_20.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_20.Accessor,&local_20);
  }
  if (local_30.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_38);
  FReply::FReply(__return_storage_ptr__,true);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
  if (*(void **)&param_1->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_1->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_1);
  return __return_storage_ptr__;
}

// OnHotkeyPressed @ 142dbf830

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SCustomDialog::OnHotkeyPressed
          (SCustomDialog *this,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_1,
          int param_2)

{
  longlong *plVar1;
  void *pvVar2;
  FReadAccessScope local_28;
  
  this->LastPressedButton = param_2;
  if (this->bAutoCloseOnButtonPress != false) {
    SWindow::RequestDestroyWindow((SWindow *)this);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,&local_28);
  if ((*(int *)&param_1->field_0x10 != 0) &&
     (plVar1 = *(longlong **)&param_1->field_0x8, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
  pvVar2 = *(void **)&param_1->field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_1);
  return;
}

// OnIsActiveChanged @ 142dbf8b0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall SCustomDialog::OnIsActiveChanged(SCustomDialog *this,FWindowActivateEvent *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  FMRSWRecursiveAccessDetector *pFVar4;
  char cVar5;
  bool bVar6;
  longlong *plVar7;
  FReadAccessScope local_58;
  FWindowActivateEvent local_40;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->GetWidgetToFocusOnActivate,&local_58);
  plVar7 = (longlong *)0x0;
  if (((*(int *)&(this->GetWidgetToFocusOnActivate).field_0x10 == 0) ||
      (plVar3 = *(longlong **)&(this->GetWidgetToFocusOnActivate).field_0x8,
      plVar3 == (longlong *)0x0)) || (cVar5 = (**(code **)(*plVar3 + 0x38))(), cVar5 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_58);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_58);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->GetWidgetToFocusOnActivate,&local_28);
    if (*(int *)&(this->GetWidgetToFocusOnActivate).field_0x10 != 0) {
      plVar7 = *(longlong **)&(this->GetWidgetToFocusOnActivate).field_0x8;
    }
    (**(code **)(*plVar7 + 0x60))(plVar7,&local_58);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    pFVar4 = local_58.DestructionSentinel.Accessor;
    this->_padding_ = local_58.DestructionSentinel._0_8_;
    if ((TReferenceControllerBase<1> *)local_58.DestructionSentinel.Accessor !=
        (TReferenceControllerBase<1> *)this->_padding_) {
      if ((TReferenceControllerBase<1> *)local_58.DestructionSentinel.Accessor !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *(atomic<int> *)((longlong)local_58.DestructionSentinel.Accessor + 0xc) =
             (atomic<int>)
             ((int)*(atomic<int> *)((longlong)local_58.DestructionSentinel.Accessor + 0xc) + 1);
        UNLOCK();
      }
      plVar7 = (longlong *)this->_padding_;
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
      this->_padding_ = (longlong)pFVar4;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_58.DestructionSentinel.Accessor);
  }
  local_40.AffectedWindow.Object = (param_1->AffectedWindow).Object;
  local_40.ActivationType = param_1->ActivationType;
  local_40.AffectedWindow.SharedReferenceCount.ReferenceController =
       (param_1->AffectedWindow).SharedReferenceCount.ReferenceController;
  if (local_40.AffectedWindow.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_40.AffectedWindow.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_40.AffectedWindow.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  if (param_1->ActivationType == EA_ActivateByMouse) {
    local_40.ActivationType = EA_Activate;
  }
  bVar6 = SWindow::OnIsActiveChanged((SWindow *)this,&local_40);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_40.AffectedWindow.SharedReferenceCount.ReferenceController);
  return bVar6;
}

// OnKeyDown @ 142dc04f0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SCustomDialog::OnKeyDown
          (SCustomDialog *this,FReply *__return_storage_ptr__,FGeometry *param_1,FKeyEvent *param_2)

{
  code *pcVar1;
  bool bVar2;
  FReply *pFVar3;
  
  if ((this->CommandList).Object == (FUICommandList *)0x0) {
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
  bVar2 = FUICommandList::ProcessCommandBindings((this->CommandList).Object,param_2);
  if (bVar2) {
    FReply::FReply(__return_storage_ptr__,true);
  }
  else {
    SWidget::OnKeyDown((SWidget *)this,__return_storage_ptr__,param_1,param_2);
  }
  return __return_storage_ptr__;
}

// SetGetWidgetToFocusOnActivate @ 142dd8f60

void __thiscall
SCustomDialog::SetGetWidgetToFocusOnActivate
          (SCustomDialog *this,
          TDelegate<TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy> *param_1)

{
  TDelegate<TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>::operator=
            (&this->GetWidgetToFocusOnActivate,param_1);
  return;
}

// SetOnCancelHotkeyPressed @ 142dd96f0

void __thiscall
SCustomDialog::SetOnCancelHotkeyPressed
          (SCustomDialog *this,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_1)

{
  undefined1 local_res8 [8];
  
  if (this->bGeneratedCancelButton != false) {
    `SCustomDialog::SetOnCancelHotkeyPressed'::__l2::<lambda_1>::operator()(local_res8);
  }
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->OnCancelHotkeyPressed,param_1);
  return;
}

// SetOnConfirmHotkeyPressed @ 142dd9740

void __thiscall
SCustomDialog::SetOnConfirmHotkeyPressed
          (SCustomDialog *this,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_1)

{
  undefined1 local_res8 [8];
  
  if (this->bGeneratedConfirmButton != false) {
    `SCustomDialog::SetOnConfirmHotkeyPressed'::__l2::<lambda_1>::operator()(local_res8);
  }
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->OnConfirmHotkeyPressed,param_1);
  return;
}

// Show @ 142dda070

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SCustomDialog::Show(SCustomDialog *this)

{
  code *pcVar1;
  longlong *plVar2;
  char cVar3;
  FSlateApplication *pFVar4;
  TSharedRef<SWidget,1> *pTVar5;
  <lambda_1> local_res10;
  SWidget *local_48;
  TReferenceControllerBase<1> *local_40;
  longlong local_38;
  TReferenceControllerBase<1> *local_30;
  FReadAccessScope local_28;
  
  pFVar4 = FSlateApplication::Get();
  pcVar1 = *(code **)(*(longlong *)pFVar4 + 0x10);
  pTVar5 = TSharedFromThis<SWidget,1>::AsShared
                     ((TSharedFromThis<SWidget,1> *)&this->_padding_,
                      (TSharedRef<SWidget,1> *)&local_28);
  local_48 = pTVar5->Object;
  local_40 = (pTVar5->SharedReferenceCount).ReferenceController;
  if (local_40 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_40->SharedReferenceCount = (atomic<int>)((int)local_40->SharedReferenceCount + 1);
    UNLOCK();
  }
  (*pcVar1)(pFVar4,&local_38,&local_48,1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_28.DestructionSentinel.Accessor);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnClosed,&local_28);
  if ((*(int *)&(this->OnClosed).field_0x10 != 0) &&
     (plVar2 = *(longlong **)&(this->OnClosed).field_0x8, plVar2 != (longlong *)0x0)) {
    cVar3 = (**(code **)(*plVar2 + 0x38))();
    if (cVar3 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      TMulticastDelegateRegistration<void___cdecl(TSharedRef<SWindow,1>_const_&),FDefaultDelegateUserPolicy>
      ::AddLambda<_SCustomDialog::Show_::__l5::<lambda_1>_>
                ((TMulticastDelegateRegistration<void___cdecl(TSharedRef<SWindow,1>_const_&),FDefaultDelegateUserPolicy>
                  *)(local_38 + 0x630),&local_res10);
      goto LAB_142dda13b;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
LAB_142dda13b:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
  return;
}

// ShowModal @ 142dda160

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall SCustomDialog::ShowModal(SCustomDialog *this)

{
  FSlateApplication *this_00;
  TSharedRef<FGlobalTabmanager,1> *pTVar1;
  TSharedPtr<SWindow,1> *pTVar2;
  TSharedRef<SWidget,1> *pTVar3;
  TSharedPtr<SWidget_const_,1> local_48;
  TSharedRef<SWindow,1> local_38;
  TSharedRef<SWidget,1> local_28;
  TSharedPtr<SWindow,1> local_18;
  
  this_00 = FSlateApplication::Get();
  pTVar1 = FGlobalTabmanager::Get();
  pTVar2 = FGlobalTabmanager::GetRootWindow(pTVar1->Object,&local_18);
  local_48.Object = (SWidget *)pTVar2->Object;
  local_48.SharedReferenceCount.ReferenceController =
       (pTVar2->SharedReferenceCount).ReferenceController;
  if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = TSharedFromThis<SWidget,1>::AsShared
                     ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_28);
  local_38.Object = (SWindow *)pTVar3->Object;
  local_38.SharedReferenceCount.ReferenceController =
       (pTVar3->SharedReferenceCount).ReferenceController;
  if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FSlateApplication::AddModalWindow(this_00,&local_38,&local_48,false);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return this->LastPressedButton;
}

// operator() @ 15049a0d0

bool __thiscall `SCustomDialog::SetOnCancelHotkeyPressed'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1328414993602838622>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1328414993602838622>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15049a110

bool __thiscall `SCustomDialog::SetOnConfirmHotkeyPressed'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1328414993602838630>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1328414993602838630>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15049a2b0

bool __thiscall `SCustomDialog::CreateButtonBox'::__l13::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1328414993602838800>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1328414993602838800>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15049a2f0

bool __thiscall `SCustomDialog::CreateButtonBox'::__l17::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1328414993602838809>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1328414993602838809>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

