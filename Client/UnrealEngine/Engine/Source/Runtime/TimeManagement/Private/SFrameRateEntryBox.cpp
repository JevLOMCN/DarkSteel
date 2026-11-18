// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TimeManagement
// Functions: 3

// Construct @ 1460444d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SFrameRateEntryBox::Construct(SFrameRateEntryBox *this,FArguments *param_1)

{
  byte *pbVar1;
  longlong *this_00;
  SWidget *pSVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  SErrorHint *pSVar7;
  FSharedReferencer<1> FVar8;
  SEditableTextBox *pSVar9;
  bool bVar10;
  char cVar11;
  byte bVar12;
  FText *pFVar13;
  FArguments *pFVar14;
  FArguments *pFVar15;
  undefined8 *puVar16;
  TSharedRef<SWidget_const_,1> *pTVar17;
  ulong64 uVar18;
  TSharedRef<SWidget,1> *pTVar19;
  IErrorReportingWidget *pIVar20;
  FArguments *pFVar21;
  undefined4 local_res8 [2];
  FArguments *local_res10;
  T0RequiredArgs local_res18 [8];
  FLLMScope local_res20 [2];
  FLLMScope local_b68 [2];
  FName local_b60;
  undefined4 uStack_b58;
  undefined4 uStack_b54;
  undefined2 local_b50;
  undefined1 local_b48 [8];
  ForAnyElementType FStack_b40;
  ulonglong local_b38;
  undefined2 local_b30;
  undefined1 local_b28 [8];
  ForAnyElementType FStack_b20;
  ulonglong local_b18;
  IErrorReportingWidget *local_b10;
  FSharedReferencer<1> local_b08;
  TSlateDecl<SErrorHint,RequiredArgs::T0RequiredArgs> local_b00;
  TSlateDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs> local_ae8;
  undefined8 local_ad0;
  undefined8 uStack_ac8;
  undefined4 local_ac0;
  bool local_abc;
  undefined1 local_ab8 [8];
  ForAnyElementType FStack_ab0;
  int local_aa8;
  FName local_aa0;
  FMemScope local_a98;
  FMemScope local_a90;
  longlong local_a88;
  undefined8 uStack_a80;
  FDestructionSentinel local_a78;
  FDestructionSentinel local_a60;
  FDestructionSentinel local_a48;
  FDestructionSentinel local_a30;
  FDestructionSentinel local_a18;
  undefined1 *local_a00;
  FDestructionSentinel local_9f8;
  undefined1 *local_9e0;
  FSlateFontInfo local_9d8;
  bool local_978;
  undefined1 local_970 [8];
  ForAnyElementType FStack_968;
  int local_960;
  FText local_958;
  TSharedRef<SWidget_const_,1> local_948;
  TSharedRef<SWidget,1> local_938;
  IErrorReportingWidget *local_928;
  TReferenceControllerBase<1> *pTStack_920;
  FArguments local_918;
  FArguments local_710;
  
  pIVar20 = (IErrorReportingWidget *)0x0;
  local_res8[0] = 0;
  (this->ValueAttribute).Value = (param_1->_Value).Value;
  (this->ValueAttribute).bIsSet = (param_1->_Value).bIsSet;
  local_res10 = param_1;
  TDelegate<FFrameRate___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&(this->ValueAttribute).Getter,&(param_1->_Value).Getter);
  TDelegate<void___cdecl(FFrameRate),FDefaultDelegateUserPolicy>::operator=
            (&this->OnValueChangedDelegate,&param_1->_OnValueChanged);
  (this->HasMultipleValuesAttribute).Value = (param_1->_HasMultipleValues).Value;
  (this->HasMultipleValuesAttribute).bIsSet = (param_1->_HasMultipleValues).bIsSet;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->HasMultipleValuesAttribute).Getter,&(param_1->_HasMultipleValues).Getter);
  pFVar13 = FText::AsLocalizable_Advanced_LocText
                      (&local_958,L"SFrameRateEntryBox",L"ToolTip",
                       L"Enter a custom framerate in any of the following formats:\n\n64fps\n0.001s\n120000/1001 (e.g. for NTSC 120)"
                      );
  SWidget::SetToolTipText((SWidget *)this,pFVar13);
  if (local_958.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_958.TextData.Reference + 0x10))();
  }
  pFVar14 = SErrorHint::FArguments::FArguments(&local_918);
  FLLMScope::FLLMScope(local_res20,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_aa0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_a98,&local_aa0,true);
  TSlateDecl<SErrorHint,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SErrorHint,RequiredArgs::T0RequiredArgs>
            (&local_b00,"SErrorHint",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TimeManagement\\Private\\Widgets\\SFrameRateEntryBox.cpp"
             ,0x16,(T0RequiredArgs *)local_res8);
  FMemScope::~FMemScope(&local_a98);
  FLLMScope::~FLLMScope(local_res20);
  pSVar7 = local_b00._Widget.Object;
  if ((local_b00._Widget.Object == (SErrorHint *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  SWidget::SWidgetConstruct((SWidget *)local_b00._Widget.Object,(FSlateBaseNamedArgs *)pFVar14);
  SErrorHint::Construct(local_b00._Widget.Object,pFVar14);
  if ((local_b00._Widget.Object == (SErrorHint *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (((local_b00._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar11 = (**(code **)((local_b00._Widget.Object)->_padding_ + 0x228))(local_b00._Widget.Object);
    bVar12 = 0;
    if (cVar11 != '\0') goto LAB_1460446d0;
  }
  else {
LAB_1460446d0:
    bVar12 = 0x20;
  }
  *(byte *)&(local_b00._Widget.Object)->_padding_ =
       (byte)(local_b00._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_b00._Widget.Object)->_padding_ =
       (byte)(local_b00._Widget.Object)->_padding_ | bVar12;
  if ((local_b00._Widget.Object == (SErrorHint *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pbVar1 = (byte *)((longlong)&(local_b00._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((local_b00._Widget.Object == (SErrorHint *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar10)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FVar8.ReferenceController = local_b00._Widget.SharedReferenceCount.ReferenceController;
  local_b00._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_b00._Widget.Object = (SErrorHint *)0x0;
  if (pSVar7 == (SErrorHint *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x26c,L"");
    local_b10 = pIVar20;
    if (bVar10) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    local_b10 = (IErrorReportingWidget *)&pSVar7->_padding_;
  }
  local_b08.ReferenceController = FVar8.ReferenceController;
  if (FVar8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar8.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar8.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->ErrorReporting != (TSharedPtr<IErrorReportingWidget,1> *)&local_b10) {
    (this->ErrorReporting).Object = local_b10;
    local_b10 = (IErrorReportingWidget *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ErrorReporting).SharedReferenceCount,&local_b08);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b08.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar8.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (local_918._ErrorText.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_918._ErrorText.TextData.Reference + 0x10))();
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_918);
  pFVar15 = SEditableTextBox::FArguments::FArguments(&local_710);
  (pFVar15->_Text).bIsSet = true;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(pFVar15->_Text).Getter,
             (FWriteAccessScope *)&local_a18);
  local_a00 = &(pFVar15->_Text).Getter.field_0x8;
  puVar16 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_a00);
  pFVar21 = local_res10;
  if (puVar16 != (undefined8 *)0x0) {
    uStack_b54 = uStack_a80._4_4_;
    local_b60 = (FName)GetValueText;
    uStack_b58 = 0;
    pTVar17 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_948);
    pFVar21 = (FArguments *)(pTVar17->SharedReferenceCount).ReferenceController;
    pSVar2 = pTVar17->Object;
    if (pFVar21 != (FArguments *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar21->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pFVar21->_padding_ + 1);
      UNLOCK();
      LOCK();
      *(atomic<int> *)&pFVar21->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pFVar21->_padding_ + 1);
      UNLOCK();
    }
    *puVar16 = &
               ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar18 = FDelegateHandle::GenerateNewID();
    puVar16[2] = uVar18;
    *puVar16 = &
               ___7__TBaseSPMethodDelegateInstance__00__CBVSFrameRateEntryBox___00__A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar16[3] = pSVar2;
    puVar16[4] = pFVar21;
    if (pFVar21 != (FArguments *)0x0) {
      LOCK();
      ((atomic<int> *)&pFVar21->_padding_)[1] =
           (atomic<int>)((int)((atomic<int> *)&pFVar21->_padding_)[1] + 1);
      UNLOCK();
    }
    pIVar20 = (IErrorReportingWidget *)&DAT_00000007;
    *(FName *)(puVar16 + 5) = local_b60;
    puVar16[6] = CONCAT44(uStack_b54,uStack_b58);
  }
  if (((ulonglong)pIVar20 & 4) != 0) {
    pIVar20 = (IErrorReportingWidget *)(ulonglong)((uint)pIVar20 & 0xfffffffb);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar21);
  }
  if (((ulonglong)pIVar20 & 2) != 0) {
    pIVar20 = (IErrorReportingWidget *)(ulonglong)((uint)pIVar20 & 0xfffffffd);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar21);
  }
  if (((ulonglong)pIVar20 & 1) != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_948.SharedReferenceCount.ReferenceController);
  }
  bVar6 = false;
  bVar5 = false;
  bVar10 = false;
  if (local_a18.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a18.Accessor,&local_a18);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar15->_OnTextCommitted,
             (FWriteAccessScope *)&local_9f8);
  local_9e0 = &(pFVar15->_OnTextCommitted).field_0x8;
  puVar16 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_9e0);
  pFVar21 = local_res10;
  if (puVar16 != (undefined8 *)0x0) {
    uStack_b54 = uStack_a80._4_4_;
    local_b60 = (FName)ValueTextComitted;
    uStack_b58 = 0;
    pTVar19 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_938);
    pFVar21 = (FArguments *)(pTVar19->SharedReferenceCount).ReferenceController;
    pSVar2 = pTVar19->Object;
    if (pFVar21 != (FArguments *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar21->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pFVar21->_padding_ + 1);
      UNLOCK();
      LOCK();
      *(atomic<int> *)&pFVar21->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pFVar21->_padding_ + 1);
      UNLOCK();
    }
    bVar6 = true;
    bVar5 = true;
    bVar10 = true;
    *puVar16 = &
               ___7__TCommonDelegateInstanceState___A6AXAEBVFText__W4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar18 = FDelegateHandle::GenerateNewID();
    puVar16[2] = uVar18;
    *puVar16 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSFrameRateEntryBox___00__A6AXAEBVFText__W4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar16[3] = pSVar2;
    puVar16[4] = pFVar21;
    if (pFVar21 != (FArguments *)0x0) {
      LOCK();
      ((atomic<int> *)&pFVar21->_padding_)[1] =
           (atomic<int>)((int)((atomic<int> *)&pFVar21->_padding_)[1] + 1);
      UNLOCK();
    }
    *(FName *)(puVar16 + 5) = local_b60;
    puVar16[6] = CONCAT44(uStack_b54,uStack_b58);
    param_1 = local_res10;
  }
  if (bVar10) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar21);
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar21);
  }
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_938.SharedReferenceCount.ReferenceController);
  }
  if (local_9f8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_9f8.Accessor,&local_9f8);
  }
  pTVar3 = (this->ErrorReporting).SharedReferenceCount.ReferenceController;
  pIVar20 = (this->ErrorReporting).Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_928 = (pFVar15->_ErrorReporting).Object;
  pTStack_920 = (pFVar15->_ErrorReporting).SharedReferenceCount.ReferenceController;
  (pFVar15->_ErrorReporting).Object = pIVar20;
  (pFVar15->_ErrorReporting).SharedReferenceCount.ReferenceController = pTVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_920);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  local_b50 = 0x100;
  local_b48 = (undefined1  [8])0x0;
  FStack_b40.Data = (FScriptContainerElement *)0x0;
  local_b38 = 0;
  (pFVar15->_ClearKeyboardFocusOnCommit).Value = false;
  (pFVar15->_ClearKeyboardFocusOnCommit).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(pFVar15->_ClearKeyboardFocusOnCommit).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_b48);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_b48,
             (FWriteAccessScope *)&local_a78);
  if (((int)local_b38 != 0) && (FStack_b40.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_b40.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_b40,0,0,0x10);
    local_b38 = local_b38 & 0xffffffff00000000;
  }
  if (local_a78.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a78.Accessor,&local_a78);
  }
  if (FStack_b40.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_b40.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_b48);
  local_b30 = 0x101;
  local_b18 = 0;
  local_b28 = (undefined1  [8])0x0;
  FStack_b20.Data = (FScriptContainerElement *)0x0;
  (pFVar15->_SelectAllTextWhenFocused).Value = true;
  (pFVar15->_SelectAllTextWhenFocused).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(pFVar15->_SelectAllTextWhenFocused).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_b28);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_b28,
             (FWriteAccessScope *)&local_a60);
  if (((int)local_b18 != 0) && (FStack_b20.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_b20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_b20,0,0,0x10);
    local_b18 = local_b18 & 0xffffffff00000000;
  }
  if (local_a60.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a60.Accessor,&local_a60);
  }
  if (FStack_b20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_b20.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_b28);
  pFVar15->_Style = param_1->_Style;
  FSlateFontInfo::FSlateFontInfo(&local_9d8,&(param_1->_Font).Value);
  local_978 = (param_1->_Font).bIsSet;
  local_960 = 0;
  local_970 = (undefined1  [8])0x0;
  FStack_968.Data = (FScriptContainerElement *)0x0;
  TDelegate<FSlateFontInfo___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FSlateFontInfo___cdecl(void),FDefaultDelegateUserPolicy> *)local_970,
             &(param_1->_Font).Getter);
  FSlateFontInfo::operator=(&(pFVar15->_Font).Value,&local_9d8);
  (pFVar15->_Font).bIsSet = local_978;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar15->_Font).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_970);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_970,
             (FWriteAccessScope *)&local_a48);
  if ((local_960 != 0) && (FStack_968.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_968.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_968,0,0,0x10);
    local_960 = 0;
  }
  if (local_a48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a48.Accessor,&local_a48);
  }
  if (FStack_968.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_968.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_970);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_9d8.CompositeFont.SharedReferenceCount.ReferenceController);
  local_ad0 = *(undefined8 *)&(param_1->_ForegroundColor).Value.SpecifiedColor.field0_0x0;
  uStack_ac8 = *(undefined8 *)
                ((longlong)&(param_1->_ForegroundColor).Value.SpecifiedColor.field0_0x0 + 8);
  local_ac0._0_1_ = (param_1->_ForegroundColor).Value.ColorUseRule;
  local_ac0._1_1_ = (param_1->_ForegroundColor).Value.ColorTableId;
  local_ac0._2_2_ = *(undefined2 *)&(param_1->_ForegroundColor).Value.field_0x12;
  local_abc = (param_1->_ForegroundColor).bIsSet;
  local_aa8 = 0;
  local_ab8 = (undefined1  [8])0x0;
  FStack_ab0.Data = (FScriptContainerElement *)0x0;
  TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy> *)local_ab8,
             &(param_1->_ForegroundColor).Getter);
  *(undefined8 *)&(pFVar15->_ForegroundColor).Value.SpecifiedColor.field0_0x0 = local_ad0;
  *(undefined8 *)((longlong)&(pFVar15->_ForegroundColor).Value.SpecifiedColor.field0_0x0 + 8) =
       uStack_ac8;
  (pFVar15->_ForegroundColor).Value.ColorUseRule = (undefined1)local_ac0;
  (pFVar15->_ForegroundColor).Value.ColorTableId = local_ac0._1_1_;
  *(undefined2 *)&(pFVar15->_ForegroundColor).Value.field_0x12 = local_ac0._2_2_;
  (pFVar15->_ForegroundColor).bIsSet = local_abc;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar15->_ForegroundColor).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_ab8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_ab8,
             (FWriteAccessScope *)&local_a30);
  if ((local_aa8 != 0) && (FStack_ab0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_ab0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_ab0,0,0,0x10);
    local_aa8 = 0;
  }
  if (local_a30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a30.Accessor,&local_a30);
  }
  if (FStack_ab0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_ab0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_ab8);
  FLLMScope::FLLMScope(local_b68,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_b60 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_a90,&local_b60,true);
  TSlateDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs>
            (&local_ae8,"SEditableTextBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TimeManagement\\Private\\Widgets\\SFrameRateEntryBox.cpp"
             ,0x19,local_res18);
  FMemScope::~FMemScope(&local_a90);
  FLLMScope::~FLLMScope(local_b68);
  pSVar9 = local_ae8._Widget.Object;
  if ((local_ae8._Widget.Object == (SEditableTextBox *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  SWidget::SWidgetConstruct((SWidget *)local_ae8._Widget.Object,(FSlateBaseNamedArgs *)pFVar15);
  SEditableTextBox::Construct(local_ae8._Widget.Object,pFVar15);
  if ((local_ae8._Widget.Object == (SEditableTextBox *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (((local_ae8._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar11 = (**(code **)((local_ae8._Widget.Object)->_padding_ + 0x228))(local_ae8._Widget.Object);
    bVar12 = 0;
    if (cVar11 == '\0') goto LAB_146044ec9;
  }
  bVar12 = 0x20;
LAB_146044ec9:
  *(byte *)&(local_ae8._Widget.Object)->_padding_ =
       (byte)(local_ae8._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_ae8._Widget.Object)->_padding_ =
       (byte)(local_ae8._Widget.Object)->_padding_ | bVar12;
  if ((local_ae8._Widget.Object == (SEditableTextBox *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pbVar1 = (byte *)((longlong)&(local_ae8._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((local_ae8._Widget.Object == (SEditableTextBox *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar10)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FVar8.ReferenceController = local_ae8._Widget.SharedReferenceCount.ReferenceController;
  local_ae8._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_ae8._Widget.Object = (SEditableTextBox *)0x0;
  if ((pSVar9 == (SEditableTextBox *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar10)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  this_00 = &this->_padding_;
  if (FVar8.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    FSlotBase::DetatchParentFromContent((FSlotBase *)this_00);
  }
  else {
    LOCK();
    (FVar8.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar8.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    FSlotBase::DetatchParentFromContent((FSlotBase *)this_00);
    LOCK();
    (FVar8.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar8.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_a88 = this->_padding_;
  uStack_a80 = (TReferenceControllerBase<1> *)this->_padding_;
  this->_padding_ = (longlong)pSVar9;
  this->_padding_ = (longlong)FVar8.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(uStack_a80);
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)this_00);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar8.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar8.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_ae8._Widget.SharedReferenceCount.ReferenceController);
  SEditableTextBox::FArguments::~FArguments(&local_710);
  return;
}

// GetValueText @ 14604d510

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __thiscall
SFrameRateEntryBox::GetValueText(SFrameRateEntryBox *this,FText *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FFrameRate *pFVar3;
  FText *pFVar4;
  FTextFormat *pFVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auStackY_138 [32];
  FFrameRate local_f8;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_f0;
  FText local_e0;
  undefined1 local_d0 [8];
  FText local_c8;
  FTextFormat local_b8;
  FText local_a8;
  FTextFormat local_98;
  FFormatArgumentValue local_88;
  undefined4 local_68;
  longlong local_60;
  longlong *local_58;
  undefined4 local_50;
  undefined4 local_48;
  longlong local_40;
  longlong *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_138;
  pFVar3 = TAttribute<FFrameRate>::Get(&this->ValueAttribute);
  local_f8 = *pFVar3;
  FFrameRate::ToPrettyText(&local_f8,&local_e0);
  auVar8._0_8_ = (double)local_f8.Denominator;
  auVar8._8_8_ = 0;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = (double)local_f8.Numerator / auVar8._0_8_ + __real_3fe0000000000000;
  auVar9 = roundpd(auVar8,auVar9,1);
  if (auVar9._0_8_ == (double)local_f8.Numerator / auVar8._0_8_) {
    FText::FText(__return_storage_ptr__,&local_e0);
    if (local_e0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_e0.TextData.Reference + 0x10))();
    }
  }
  else {
    local_c8.TextData.Reference = local_e0.TextData.Reference;
    if (local_e0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_e0.TextData.Reference + 8))
                (local_e0.TextData.Reference,local_d0);
    }
    local_c8.Flags = local_e0.Flags;
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       (&local_a8,L"SFrameRateEntryBox",L"ValueTextFormat",L"{0} [{1}/{2} fps]");
    pFVar5 = FTextFormat::FTextFormat(&local_98,pFVar4,Default);
    lVar6 = (longlong)local_f8.Denominator;
    lVar7 = (longlong)local_f8.Numerator;
    local_88.Type = Text;
    FText::FText((FText *)&local_88.TextValue,&local_c8);
    if (local_88.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FText *)(*pcVar1)();
        return pFVar4;
      }
    }
    local_68 = 0;
    local_58 = (longlong *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_38 = (longlong *)0x0;
    local_30 = 0;
    local_f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f0.ArrayNum = 3;
    local_60 = lVar7;
    local_40 = lVar6;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,3,0,&local_f0.AllocatorInstance,3,&local_f0.ArrayMax);
    ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
              (local_f0.AllocatorInstance.Data,&local_88,3);
    local_b8.TextFormatData.Object = (pFVar5->TextFormatData).Object;
    local_b8.TextFormatData.SharedReferenceCount.ReferenceController =
         (pFVar5->TextFormatData).SharedReferenceCount.ReferenceController;
    if (local_b8.TextFormatData.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_b8.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_b8.TextFormatData.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    FText::Format(__return_storage_ptr__,&local_b8,&local_f0);
    DestructItems<FFormatArgumentValue,int>
              ((FFormatArgumentValue *)local_f0.AllocatorInstance.Data,local_f0.ArrayNum);
    if ((FFormatArgumentValue *)local_f0.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
      FMemory::Free(local_f0.AllocatorInstance.Data);
    }
    if (local_38 != (longlong *)0x0) {
      (**(code **)(*local_38 + 0x10))();
    }
    if (local_58 != (longlong *)0x0) {
      (**(code **)(*local_58 + 0x10))();
    }
    if (local_88.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_88.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10)
      )();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pFVar5->TextFormatData).SharedReferenceCount.ReferenceController);
    if (local_c8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_c8.TextData.Reference + 0x10))();
    }
    if (local_a8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
    }
    if (local_e0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_e0.TextData.Reference + 0x10))();
    }
  }
  return __return_storage_ptr__;
}

// ValueTextComitted @ 1460507c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
SFrameRateEntryBox::ValueTextComitted(SFrameRateEntryBox *this,FText *param_1,Type param_2)

{
  IErrorReportingWidget *pIVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  FText *pFVar5;
  wchar_t *pwVar6;
  ulonglong uVar7;
  longlong *plVar8;
  undefined1 auStack_c8 [32];
  FFrameRate local_a8;
  undefined1 local_a0;
  undefined1 local_98 [8];
  ForAnyElementType FStack_90;
  ulonglong local_88;
  FDestructionSentinel local_80;
  FText local_68;
  FReadAccessScope local_58;
  TValueOrError<FFrameRate,FExpressionError> local_40;
  ulonglong local_28;
  
  if (param_2 == OnEnter) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_c8;
    pFVar4 = FText::ToString(param_1);
    if ((pFVar4->Data).ArrayNum == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
    ParseFrameRate(&local_40,pwVar6);
    uVar7 = (ulonglong)local_40.Variant.TypeIndex;
    if (2 < uVar7) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pIVar1 = (this->ErrorReporting).Object;
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FFrameRate,FFrameRate,TValueOrError<FFrameRate,FExpressionError>::FWrapErrorType,TValueOrError<struct_FFrameRate,struct_FExpressionError>::FEmptyType>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar7) == '\0') {
      if (pIVar1 == (IErrorReportingWidget *)0x0) {
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
      pIVar1 = (this->ErrorReporting).Object;
      pcVar2 = *(code **)*pIVar1;
      if (local_40.Variant.TypeIndex != 1) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      (*pcVar2)(pIVar1,&local_40);
    }
    else {
      if (pIVar1 == (IErrorReportingWidget *)0x0) {
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
      pIVar1 = (this->ErrorReporting).Object;
      pcVar2 = *(code **)*pIVar1;
      pFVar5 = FText::FText(&local_68);
      (*pcVar2)(pIVar1,pFVar5);
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
      bVar3 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                        ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnValueChangedDelegate)
      ;
      if (bVar3) {
        if (local_40.Variant.TypeIndex != 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L"");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &this->OnValueChangedDelegate,&local_58);
        if (*(int *)&(this->OnValueChangedDelegate).field_0x10 == 0) {
          plVar8 = (longlong *)0x0;
        }
        else {
          plVar8 = *(longlong **)&(this->OnValueChangedDelegate).field_0x8;
        }
        (**(code **)(*plVar8 + 0x60))(plVar8,local_40.Variant._padding_);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_58);
      }
      else {
        bVar3 = TAttribute<FFrameRate>::IsBound(&this->ValueAttribute);
        if (!bVar3) {
          if (local_40.Variant.TypeIndex != 0) {
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index == TypeIndex",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                               ,0x97,L"");
            if (bVar3) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
          local_a8.Numerator = (undefined4)local_40.Variant._padding_;
          local_a8.Denominator = local_40.Variant._padding_._4_4_;
          local_a0 = 1;
          local_88 = 0;
          local_98 = (undefined1  [8])0x0;
          FStack_90.Data = (FScriptContainerElement *)0x0;
          (this->ValueAttribute).Value.Numerator = (undefined4)local_40.Variant._padding_;
          (this->ValueAttribute).Value.Denominator = local_40.Variant._padding_._4_4_;
          (this->ValueAttribute).bIsSet = true;
          TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ValueAttribute).Getter,
                     (TDelegateBase<FNotThreadSafeDelegateMode> *)local_98);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_98,
                     (FWriteAccessScope *)&local_80);
          if (((int)local_88 != 0) && (FStack_90.Data != (FScriptContainerElement *)0x0)) {
            (*(code *)**(undefined8 **)FStack_90.Data)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&FStack_90,0,0,0x10);
            local_88 = local_88 & 0xffffffff00000000;
          }
          if (local_80.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
          }
          if (FStack_90.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_90.Data);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                    ((FMRSWRecursiveAccessDetector *)local_98);
        }
      }
    }
    if (2 < local_40.Variant.TypeIndex) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FFrameRate,TValueOrError<FFrameRate,FExpressionError>::FWrapErrorType,TValueOrError<struct_FFrameRate,struct_FExpressionError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_40.Variant.TypeIndex])(&local_40);
  }
  return;
}

