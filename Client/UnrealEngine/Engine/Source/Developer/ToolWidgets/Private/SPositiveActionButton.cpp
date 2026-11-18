// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ToolWidgets
// Functions: 3

// Construct @ 142d83e90

void __thiscall SPositiveActionButton::Construct(SPositiveActionButton *this,FArguments *param_1)

{
  TSharedPtr<SActionButton,1> *pTVar1;
  longlong *this_00;
  TReferenceControllerBase<1> *pTVar2;
  SWidget *pSVar3;
  SActionButton *pSVar4;
  code *pcVar5;
  bool bVar6;
  FArguments *pFVar7;
  FToolWidgetsStyle *this_01;
  FName *pFVar8;
  FActionButtonStyle *pFVar9;
  TSharedRef<SActionButton,1> *pTVar10;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res10 [2];
  undefined1 local_res18 [8];
  FName local_res20;
  FText local_478;
  bool local_468;
  undefined1 local_460 [8];
  ForAnyElementType FStack_458;
  int local_450;
  SActionButton *local_448;
  FSharedReferencer<1> local_440;
  FMemScope local_438;
  FSlateBrush *local_430;
  bool local_428;
  undefined1 local_420 [24];
  FDestructionSentinel local_408;
  FName local_3f0;
  SWidget *local_3e8;
  TReferenceControllerBase<1> *pTStack_3e0;
  TSharedRef<SActionButton,1> local_3d8;
  longlong local_3c8;
  TReferenceControllerBase<1> *pTStack_3c0;
  TSlateDecl<SActionButton,RequiredArgs::T0RequiredArgs> local_3b8;
  FArguments local_3a0;
  
  if ((param_1->_Icon).bIsSet == false) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InArgs._Icon.IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\SPositiveActionButton.cpp"
                       ,0xc,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar7 = SActionButton::FArguments::FArguments(&local_3a0);
  this_01 = UE::ToolWidgets::FToolWidgetsStyle::Get();
  pFVar8 = ::FName::FName(&local_3f0,"PositiveActionButton");
  pFVar9 = ISlateStyle::GetWidgetStyle<FActionButtonStyle>
                     ((ISlateStyle *)this_01,*pFVar8,(char *)0x0,(FActionButtonStyle *)0x0);
  pFVar7->_ActionButtonStyle = pFVar9;
  local_478.TextData.Reference = (param_1->_Text).Value.TextData.Reference;
  if (local_478.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_478.TextData.Reference + 8))
              (local_478.TextData.Reference,local_res18);
  }
  local_478.Flags = (param_1->_Text).Value.Flags;
  local_468 = (param_1->_Text).bIsSet;
  local_460 = (undefined1  [8])0x0;
  FStack_458.Data = (FScriptContainerElement *)0x0;
  local_450 = 0;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)local_460,
             &(param_1->_Text).Getter);
  FText::operator=(&(pFVar7->_Text).Value,&local_478);
  (pFVar7->_Text).bIsSet = local_468;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar7->_Text).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_460);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_460,
             (FWriteAccessScope *)&local_408);
  if ((local_450 != 0) && (FStack_458.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_458.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_458,0,0,0x10);
    local_450 = 0;
  }
  if (local_408.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_408.Accessor,&local_408);
  }
  if (FStack_458.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_458.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_460);
  if (local_478.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_478.TextData.Reference + 0x10))();
  }
  local_430 = (param_1->_Icon).Value;
  local_428 = (param_1->_Icon).bIsSet;
  TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
            ((TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy> *)local_420,
             &(param_1->_Icon).Getter);
  (pFVar7->_Icon).Value = local_430;
  (pFVar7->_Icon).bIsSet = local_428;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar7->_Icon).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_420);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_420);
  if ((void *)local_420._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_420._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_420);
  TDelegate<FReply___cdecl(void),FDefaultDelegateUserPolicy>::operator=
            (&pFVar7->_OnClicked,&param_1->_OnClicked);
  TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&pFVar7->_OnGetMenuContent,&param_1->_OnGetMenuContent);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&pFVar7->_OnComboBoxOpened,&param_1->_OnComboBoxOpened);
  TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>::operator=
            (&pFVar7->_OnMenuOpenChanged,&param_1->_OnMenuOpenChanged);
  pTVar2 = (param_1->_MenuContent).Widget.SharedReferenceCount.ReferenceController;
  pSVar3 = (param_1->_MenuContent).Widget.Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_3e8 = (pFVar7->_MenuContent).Widget.Object;
  pTStack_3e0 = (pFVar7->_MenuContent).Widget.SharedReferenceCount.ReferenceController;
  (pFVar7->_MenuContent).Widget.Object = pSVar3;
  (pFVar7->_MenuContent).Widget.SharedReferenceCount.ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_3e0);
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res20 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_438,&local_res20,true);
  TSlateDecl<SActionButton,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SActionButton,RequiredArgs::T0RequiredArgs>
            (&local_3b8,"SActionButton",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\SPositiveActionButton.cpp"
             ,0xf,local_res8);
  FMemScope::~FMemScope(&local_438);
  FLLMScope::~FLLMScope(local_res10);
  pTVar10 = TSlateDecl<SActionButton,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_3b8,&local_3d8,pFVar7);
  local_440.ReferenceController = (pTVar10->SharedReferenceCount).ReferenceController;
  local_448 = pTVar10->Object;
  if (local_440.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_440.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_440.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar1 = &this->ActionButton;
  if (pTVar1 != (TSharedPtr<SActionButton,1> *)&local_448) {
    pTVar1->Object = local_448;
    local_448 = (SActionButton *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ActionButton).SharedReferenceCount,&local_440);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_440.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3d8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3b8._Widget.SharedReferenceCount.ReferenceController);
  SActionButton::FArguments::~FArguments(&local_3a0);
  if (pTVar1->Object == (SActionButton *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pSVar4 = pTVar1->Object;
  pTVar2 = (this->ActionButton).SharedReferenceCount.ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pSVar4 == (SActionButton *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  this_00 = &this->_padding_;
  if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
    FSlotBase::DetatchParentFromContent((FSlotBase *)this_00);
  }
  else {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    FSlotBase::DetatchParentFromContent((FSlotBase *)this_00);
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_3c8 = this->_padding_;
  pTStack_3c0 = (TReferenceControllerBase<1> *)this->_padding_;
  this->_padding_ = (longlong)pSVar4;
  this->_padding_ = (longlong)pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_3c0);
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)this_00);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return;
}

// SetIsMenuOpen @ 142dd9290

void __thiscall
SPositiveActionButton::SetIsMenuOpen(SPositiveActionButton *this,bool param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ActionButton.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\SPositiveActionButton.cpp"
                       ,0x2b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->_padding_ == 0) {
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
  plVar3 = (longlong *)(this->_padding_ + 0x2a8);
                    /* WARNING: Could not recover jumptable at 0x000142dd9328. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x10))(plVar3,param_1,param_2);
  return;
}

// SetMenuContentWidgetToFocus @ 142dd95a0

void __thiscall
SPositiveActionButton::SetMenuContentWidgetToFocus
          (SPositiveActionButton *this,TWeakPtr<SWidget,1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  longlong *plVar6;
  SWidget *local_18;
  TReferenceControllerBase<1> *local_10;
  
  if (this->_padding_ == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ActionButton.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\SPositiveActionButton.cpp"
                       ,0x24,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (this->_padding_ == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  plVar6 = (longlong *)(this->_padding_ + 0x2a8);
  pcVar4 = *(code **)(*plVar6 + 8);
  local_18 = param_1->Object;
  local_10 = (param_1->WeakReferenceCount).ReferenceController;
  if (local_10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_10->WeakReferenceCount = (atomic<int>)((int)local_10->WeakReferenceCount + 1);
    UNLOCK();
  }
  (*pcVar4)(plVar6,&local_18);
  pTVar3 = (param_1->WeakReferenceCount).ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  return;
}

