// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 5

// AsWidget @ 1429c8790

TSharedRef<SWidget,1> * __thiscall
SPopupErrorText::AsWidget(SPopupErrorText *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  SWidget *pSVar2;
  TSharedRef<SWidget,1> *pTVar3;
  TSharedRef<SWidget,1> local_18;
  
  pTVar3 = TSharedFromThis<SWidget,1>::AsShared
                     ((TSharedFromThis<SWidget,1> *)&this[-1]._padding_,&local_18);
  pTVar1 = (pTVar3->SharedReferenceCount).ReferenceController;
  pSVar2 = pTVar3->Object;
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    __return_storage_ptr__->Object = pSVar2;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    __return_storage_ptr__->Object = pSVar2;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// Construct @ 1429d6610

void __thiscall SPopupErrorText::Construct(SPopupErrorText *this,FArguments *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  FArguments *pFVar6;
  ISlateStyle *pIVar7;
  FComboButtonStyle *pFVar8;
  FArguments *pFVar9;
  FText *pFVar10;
  TSharedRef<SErrorText,1> *pTVar11;
  T0RequiredArgs local_res8 [8];
  T0RequiredArgs local_res10 [8];
  FLLMScope local_res18 [2];
  FName local_res20;
  FName local_af8;
  TReferenceControllerBase<1> *pTStack_af0;
  SErrorText *local_ae8;
  FSharedReferencer<1> local_ae0;
  bool local_ad8;
  SErrorText *local_ad0;
  FSharedReferencer<1> local_ac8;
  bool local_ac0;
  undefined4 local_ab8;
  undefined1 local_ab4;
  undefined1 local_ab0 [8];
  ForAnyElementType FStack_aa8;
  ulonglong local_aa0;
  FName local_a98;
  undefined8 local_a90;
  undefined8 uStack_a88;
  undefined1 local_a80;
  undefined1 local_a78 [8];
  ForAnyElementType FStack_a70;
  ulonglong local_a68;
  FSlateFontInfo local_a60;
  bool local_a00;
  undefined1 local_9f8 [8];
  ForAnyElementType FStack_9f0;
  int local_9e8;
  FSlateFontInfo local_9e0;
  bool local_980;
  undefined1 local_978 [8];
  ForAnyElementType FStack_970;
  int local_968;
  TSharedRef<SErrorText,1> local_960;
  TSharedRef<SErrorText,1> local_950;
  FText local_940;
  undefined1 local_930 [552];
  undefined1 local_708 [24];
  undefined1 local_6f0 [24];
  undefined1 local_6d8 [56];
  undefined1 local_6a0 [48];
  undefined1 local_670 [48];
  undefined1 local_640 [32];
  undefined1 local_620 [40];
  FArguments local_5f8;
  FArguments local_320;
  
  pFVar6 = SComboButton::FArguments::FArguments((FArguments *)local_930);
  ::FName::FName(&local_res20,"MessageLogListingComboButton");
  pIVar7 = FAppStyle::Get();
  pFVar8 = (FComboButtonStyle *)
           (**(code **)((longlong)*pIVar7 + 0xa0))
                     (pIVar7,FComboButtonStyle::TypeName,local_res20,0,1);
  if (pFVar8 == (FComboButtonStyle *)0x0) {
    pFVar8 = FComboButtonStyle::GetDefault();
  }
  pFVar6->_ComboButtonStyle = pFVar8;
  pFVar6->_HasDownArrow = false;
  local_a80 = 1;
  local_a90 = 0;
  uStack_a88 = 0;
  local_a68 = 0;
  local_a78 = (undefined1  [8])0x0;
  FStack_a70.Data = (FScriptContainerElement *)0x0;
  (pFVar6->_ContentPadding).Value.Left = 0.0;
  (pFVar6->_ContentPadding).Value.Top = 0.0;
  (pFVar6->_ContentPadding).Value.Right = 0.0;
  (pFVar6->_ContentPadding).Value.Bottom = 0.0;
  (pFVar6->_ContentPadding).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar6->_ContentPadding).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_a78);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a78,
             (FWriteAccessScope *)&local_ad0);
  if (((int)local_a68 != 0) && (FStack_a70.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_a70.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_a70,0,0,0x10);
    local_a68 = local_a68 & 0xffffffff00000000;
  }
  if (local_ac0 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_ac8.ReferenceController,
               (FDestructionSentinel *)&local_ad0);
  }
  if (FStack_a70.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_a70.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_a78);
  pFVar6->_IsFocusable = false;
  pFVar9 = SErrorText::FArguments::FArguments(&local_320);
  pFVar10 = FText::AsLocalizable_Advanced_LocText(&local_940,L"UnrealEd",L"Error",L"!");
  pIVar1 = (pFVar9->_ErrorText).TextData.Reference;
  pIVar2 = (pFVar10->TextData).Reference;
  if (pIVar1 != pIVar2) {
    (pFVar9->_ErrorText).TextData.Reference = pIVar2;
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res18);
    }
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
    }
  }
  (pFVar9->_ErrorText).Flags = pFVar10->Flags;
  pIVar1 = (pFVar10->TextData).Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  FSlateFontInfo::FSlateFontInfo(&local_a60,&(param_1->_Font).Value);
  local_a00 = (param_1->_Font).bIsSet;
  local_9e8 = 0;
  local_9f8 = (undefined1  [8])0x0;
  FStack_9f0.Data = (FScriptContainerElement *)0x0;
  TDelegate<FSlateFontInfo___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FSlateFontInfo___cdecl(void),FDefaultDelegateUserPolicy> *)local_9f8,
             &(param_1->_Font).Getter);
  FSlateFontInfo::operator=(&(pFVar9->_Font).Value,&local_a60);
  (pFVar9->_Font).bIsSet = local_a00;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar9->_Font).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_9f8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_9f8,
             (FWriteAccessScope *)&local_ad0);
  if ((local_9e8 != 0) && (FStack_9f0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_9f0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_9f0,0,0,0x10);
    local_9e8 = 0;
  }
  if (local_ac0 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_ac8.ReferenceController,
               (FDestructionSentinel *)&local_ad0);
  }
  if (FStack_9f0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_9f0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_9f8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a60.CompositeFont.SharedReferenceCount.ReferenceController);
  FLLMScope::FLLMScope(local_res18,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_a98 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope((FMemScope *)&local_af8,&local_a98,true);
  TSlateDecl<SErrorText,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SErrorText,RequiredArgs::T0RequiredArgs>
            ((TSlateDecl<SErrorText,RequiredArgs::T0RequiredArgs> *)&local_ad0,"SErrorText",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Notifications\\SPopUpErrorText.cpp"
             ,0xf,local_res8);
  FMemScope::~FMemScope((FMemScope *)&local_af8);
  FLLMScope::~FLLMScope(local_res18);
  if (local_ac8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_ac8.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_ac8.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (this->HasErrorSymbol).SharedReferenceCount.ReferenceController;
  (this->HasErrorSymbol).Object = local_ad0;
  (this->HasErrorSymbol).SharedReferenceCount.ReferenceController = local_ac8.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  pTVar11 = TSlateDecl<SErrorText,RequiredArgs::T0RequiredArgs>::operator<<=
                      ((TSlateDecl<SErrorText,RequiredArgs::T0RequiredArgs> *)&local_ad0,&local_950,
                       pFVar9);
  pTVar3 = (pTVar11->SharedReferenceCount).ReferenceController;
  local_af8 = (FName)pTVar11->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar4 = (pFVar6->_ButtonContent).Widget.SharedReferenceCount.ReferenceController;
  (pFVar6->_ButtonContent).Widget.Object = (SWidget *)local_af8;
  (pFVar6->_ButtonContent).Widget.SharedReferenceCount.ReferenceController = pTVar3;
  pTStack_af0 = pTVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  local_ab4 = 1;
  local_ab8 = 0;
  local_aa0 = 0;
  local_ab0 = (undefined1  [8])0x0;
  FStack_aa8.Data = (FScriptContainerElement *)0x0;
  (pFVar6->_MenuPlacement).Value = MenuPlacement_BelowAnchor;
  (pFVar6->_MenuPlacement).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar6->_MenuPlacement).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_ab0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_ab0,
             (FWriteAccessScope *)&local_ae8);
  if (((int)local_aa0 != 0) && (FStack_aa8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_aa8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_aa8,0,0,0x10);
    local_aa0 = local_aa0 & 0xffffffff00000000;
  }
  if (local_ad8 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_ae0.ReferenceController,
               (FDestructionSentinel *)&local_ae8);
  }
  if (FStack_aa8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_aa8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_ab0);
  pFVar9 = SErrorText::FArguments::FArguments(&local_5f8);
  FSlateFontInfo::FSlateFontInfo(&local_9e0,&(param_1->_Font).Value);
  local_980 = (param_1->_Font).bIsSet;
  local_968 = 0;
  local_978 = (undefined1  [8])0x0;
  FStack_970.Data = (FScriptContainerElement *)0x0;
  TDelegate<FSlateFontInfo___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FSlateFontInfo___cdecl(void),FDefaultDelegateUserPolicy> *)local_978,
             &(param_1->_Font).Getter);
  FSlateFontInfo::operator=(&(pFVar9->_Font).Value,&local_9e0);
  (pFVar9->_Font).bIsSet = local_980;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar9->_Font).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_978);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_978,
             (FWriteAccessScope *)&local_ae8);
  if ((local_968 != 0) && (FStack_970.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_970.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_970,0,0,0x10);
    local_968 = 0;
  }
  if (local_ad8 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_ae0.ReferenceController,
               (FDestructionSentinel *)&local_ae8);
  }
  if (FStack_970.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_970.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_978);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_9e0.CompositeFont.SharedReferenceCount.ReferenceController);
  FLLMScope::FLLMScope(local_res18,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_af8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope((FMemScope *)&local_a98,&local_af8,true);
  TSlateDecl<SErrorText,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SErrorText,RequiredArgs::T0RequiredArgs>
            ((TSlateDecl<SErrorText,RequiredArgs::T0RequiredArgs> *)&local_ae8,"SErrorText",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Notifications\\SPopUpErrorText.cpp"
             ,0x16,local_res10);
  FMemScope::~FMemScope((FMemScope *)&local_a98);
  FLLMScope::~FLLMScope(local_res18);
  if (local_ae0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_ae0.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_ae0.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar4 = (this->ErrorText).SharedReferenceCount.ReferenceController;
  (this->ErrorText).Object = local_ae8;
  (this->ErrorText).SharedReferenceCount.ReferenceController = local_ae0.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  pTVar11 = TSlateDecl<SErrorText,RequiredArgs::T0RequiredArgs>::operator<<=
                      ((TSlateDecl<SErrorText,RequiredArgs::T0RequiredArgs> *)&local_ae8,&local_960,
                       pFVar9);
  pTVar4 = (pTVar11->SharedReferenceCount).ReferenceController;
  local_af8 = (FName)pTVar11->Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = (pFVar6->_MenuContent).Widget.SharedReferenceCount.ReferenceController;
  (pFVar6->_MenuContent).Widget.Object = (SWidget *)local_af8;
  (pFVar6->_MenuContent).Widget.SharedReferenceCount.ReferenceController = pTVar4;
  pTStack_af0 = pTVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SComboButton::Construct((SComboButton *)this,pFVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_960.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_ae0.ReferenceController);
  SErrorText::FArguments::~FArguments(&local_5f8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_950.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_ac8.ReferenceController);
  SErrorText::FArguments::~FArguments(&local_320);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_620);
  if ((void *)local_620._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_620._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_620);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_640);
  if ((void *)local_640._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_640._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_640);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_670);
  if ((void *)local_670._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_670._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_670);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_6a0);
  if ((void *)local_6a0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_6a0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_6a0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_6d8);
  if ((void *)local_6d8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_6d8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_6d8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_6f0);
  if ((void *)local_6f0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_6f0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_6f0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_708);
  if ((void *)local_708._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_708._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_708);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_930._544_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_930._528_8_);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_930);
  return;
}

// HasError @ 1429f3220

bool __thiscall SPopupErrorText::HasError(SPopupErrorText *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001429f3269. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(*(longlong *)(this->_padding_ + 0x2e0) + 0x10))();
  return (bool)uVar3;
}

// SetError @ 142a09760

void __thiscall SPopupErrorText::SetError(SPopupErrorText *this,FString *param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  FText *pFVar5;
  longlong *plVar6;
  undefined1 local_res8 [8];
  ITextData *local_38;
  uint local_30;
  FText local_28;
  
  iVar1 = (param_1->Data).ArrayNum;
  if (this->_padding_ == 0) {
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
  plVar6 = (longlong *)(this->_padding_ + 0x2e0);
  (**(code **)(*plVar6 + 8))(plVar6,param_1);
  if (this->_padding_ == 0) {
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
  lVar2 = this->_padding_;
  pcVar3 = (code *)**(undefined8 **)(lVar2 + 0x2e0);
  if (iVar1 < 2) {
    pFVar5 = FText::GetEmpty();
    local_38 = (pFVar5->TextData).Reference;
    if (local_38 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_38 + 8))(local_38,local_res8);
    }
    local_30 = pFVar5->Flags;
    (*pcVar3)(lVar2 + 0x2e0,&local_38);
    local_28.TextData.Reference = local_38;
  }
  else {
    pFVar5 = FText::AsLocalizable_Advanced_LocText(&local_28,L"UnrealEd",L"Error",L"!");
    (*pcVar3)(lVar2 + 0x2e0,pFVar5);
  }
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a098a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this[-1]._padding_ + 0x250))(&this[-1]._padding_,1 < iVar1,0,0);
  return;
}

// SetError @ 142a098c0

void __thiscall SPopupErrorText::SetError(SPopupErrorText *this,FText *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  FString *pFVar1;
  
  UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 8);
  pFVar1 = FText::ToString(param_1);
                    /* WARNING: Could not recover jumptable at 0x000142a098ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(this,pFVar1);
  return;
}

