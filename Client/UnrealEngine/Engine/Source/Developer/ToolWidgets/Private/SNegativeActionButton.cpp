// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ToolWidgets
// Functions: 3

// Construct @ 142d83940

void __thiscall SNegativeActionButton::Construct(SNegativeActionButton *this,FArguments *param_1)

{
  TSharedPtr<SActionButton,1> *pTVar1;
  longlong *this_00;
  EActionButtonStyle EVar2;
  EActionButtonStyle EVar3;
  TReferenceControllerBase<1> *pTVar4;
  SWidget *pSVar5;
  SActionButton *pSVar6;
  code *pcVar7;
  bool bVar8;
  EActionButtonStyle *pEVar9;
  FArguments *pFVar10;
  FToolWidgetsStyle *this_01;
  EActionButtonStyle *pEVar11;
  FName *pFVar12;
  FActionButtonStyle *pFVar13;
  TSharedRef<SActionButton,1> *pTVar14;
  longlong lVar15;
  char *pcVar16;
  EActionButtonType EVar17;
  EActionButtonType local_res8 [8];
  undefined1 local_res10 [8];
  T0RequiredArgs local_res18 [8];
  FLLMScope local_res20 [2];
  EActionButtonStyle local_4f8 [4];
  SActionButton *local_4e8;
  FSharedReferencer<1> local_4e0;
  EActionButtonType local_4d8;
  undefined1 local_4d7;
  undefined1 local_4d0 [8];
  void *pvStack_4c8;
  undefined8 local_4c0;
  undefined1 local_4b8 [4];
  FName local_4b4;
  FMemScope local_4a8;
  FSlateBrush *local_4a0;
  bool local_498;
  undefined1 local_490 [24];
  initializer_list<TPairInitializer<EActionButtonStyle_const_&,EActionButtonType_const_&>_>
  local_478;
  TPairInitializer<EActionButtonStyle_const_&,EActionButtonType_const_&> local_468;
  EActionButtonStyle *local_458;
  undefined1 *local_450;
  TAttribute<FText> local_448;
  FName local_418;
  FName local_410;
  SWidget *local_408;
  TReferenceControllerBase<1> *pTStack_400;
  TSharedRef<SActionButton,1> local_3f8;
  longlong local_3e8;
  TReferenceControllerBase<1> *pTStack_3e0;
  TSlateDecl<SActionButton,RequiredArgs::T0RequiredArgs> local_3d8;
  FArguments local_3c0;
  
  local_4f8[0] = Warning;
  pEVar9 = TAttribute<enum_EActionButtonStyle>::Get(&param_1->_ActionButtonStyle,local_4f8);
  EVar2 = *pEVar9;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    local_468.Key = local_4f8 + 1;
    local_4f8[1] = 0;
    local_468.Value = local_res8;
    local_res8[0] = Warning;
    local_458 = local_4f8 + 2;
    local_4f8[2] = 1;
    local_450 = local_res10;
    local_478._First = &local_468;
    local_478._Last =
         (TPairInitializer<EActionButtonStyle_const_&,EActionButtonType_const_&> *)&local_448;
    local_res10[0] = 5;
    TMap<enum_EActionButtonStyle,enum_EActionButtonType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EActionButtonStyle,enum_EActionButtonType,0>_>
    ::
    TMap<enum_EActionButtonStyle,enum_EActionButtonType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EActionButtonStyle,enum_EActionButtonType,0>_>
              (&Lookup,&local_478);
    atexit(`UE::ToolWidgets::Private::ActionButtonStyleToActionButtonType'::__l2::
           _dynamic_atexit_destructor_for__Lookup__);
    _Init_thread_footer(&::_TSS0);
  }
  if (Lookup._8_4_ != Lookup._52_4_) {
    lVar15 = 0x155061b58;
    if (Lookup._64_8_ != 0) {
      lVar15 = Lookup._64_8_;
    }
    EVar3 = *(EActionButtonStyle *)(lVar15 + (ulonglong)(Lookup._72_4_ - Error & EVar2) * 4);
    while (EVar3 != ~Warning) {
      pEVar9 = (EActionButtonStyle *)((longlong)(int)EVar3 * 0x10 + Lookup._0_8_);
      if (*pEVar9 == EVar2) {
        pEVar11 = pEVar9 + 1;
        if (pEVar9 == (EActionButtonStyle *)0x0) {
          pEVar11 = (EActionButtonStyle *)0x0;
        }
        if (pEVar11 != (EActionButtonStyle *)0x0) {
          EVar17 = (EActionButtonType)*pEVar11;
          goto LAB_142d839fa;
        }
        break;
      }
      EVar3 = pEVar9[2];
    }
  }
  EVar17 = Default;
LAB_142d839fa:
  pFVar10 = SActionButton::FArguments::FArguments(&local_3c0);
  local_4f8[3] = 0;
  pEVar9 = TAttribute<enum_EActionButtonStyle>::Get(&param_1->_ActionButtonStyle,local_4f8 + 3);
  if (*pEVar9 == Warning) {
    this_01 = UE::ToolWidgets::FToolWidgetsStyle::Get();
    pcVar16 = "NegativeActionButton.Warning";
    pFVar12 = &local_418;
  }
  else {
    this_01 = UE::ToolWidgets::FToolWidgetsStyle::Get();
    pcVar16 = "NegativeActionButton.Error";
    pFVar12 = &local_410;
  }
  pFVar12 = ::FName::FName(pFVar12,pcVar16);
  pFVar13 = ISlateStyle::GetWidgetStyle<FActionButtonStyle>
                      ((ISlateStyle *)this_01,*pFVar12,(char *)0x0,(FActionButtonStyle *)0x0);
  pFVar10->_ActionButtonStyle = pFVar13;
  local_4d7 = 1;
  local_4c0 = 0;
  local_4d0 = (undefined1  [8])0x0;
  pvStack_4c8 = (void *)0x0;
  (pFVar10->_ActionButtonType).Value = EVar17;
  (pFVar10->_ActionButtonType).bIsSet = true;
  local_4d8 = EVar17;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar10->_ActionButtonType).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_4d0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_4d0);
  if (pvStack_4c8 != (void *)0x0) {
    FMemory::Free(pvStack_4c8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_4d0);
  local_448.Value.TextData.Reference = (param_1->_Text).Value.TextData.Reference;
  if (local_448.Value.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_448.Value.TextData.Reference + 8))
              (local_448.Value.TextData.Reference,local_4b8);
  }
  local_448.Value.Flags = (param_1->_Text).Value.Flags;
  local_448.bIsSet = (param_1->_Text).bIsSet;
  local_448.Getter._0_8_ = 0;
  local_448.Getter._8_8_ = 0;
  local_448.Getter._16_4_ = 0;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&local_448.Getter,&(param_1->_Text).Getter);
  pFVar10 = SActionButton::FArguments::Text(pFVar10,&local_448);
  local_4a0 = (param_1->_Icon).Value;
  local_498 = (param_1->_Icon).bIsSet;
  TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
            ((TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy> *)local_490,
             &(param_1->_Icon).Getter);
  (pFVar10->_Icon).Value = local_4a0;
  (pFVar10->_Icon).bIsSet = local_498;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar10->_Icon).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_490);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_490);
  if ((void *)local_490._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_490._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_490);
  TDelegate<FReply___cdecl(void),FDefaultDelegateUserPolicy>::operator=
            (&pFVar10->_OnClicked,&param_1->_OnClicked);
  TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&pFVar10->_OnGetMenuContent,&param_1->_OnGetMenuContent);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&pFVar10->_OnComboBoxOpened,&param_1->_OnComboBoxOpened);
  TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>::operator=
            (&pFVar10->_OnMenuOpenChanged,&param_1->_OnMenuOpenChanged);
  pTVar4 = (param_1->_MenuContent).Widget.SharedReferenceCount.ReferenceController;
  pSVar5 = (param_1->_MenuContent).Widget.Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_408 = (pFVar10->_MenuContent).Widget.Object;
  pTStack_400 = (pFVar10->_MenuContent).Widget.SharedReferenceCount.ReferenceController;
  (pFVar10->_MenuContent).Widget.Object = pSVar5;
  (pFVar10->_MenuContent).Widget.SharedReferenceCount.ReferenceController = pTVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_400);
  FLLMScope::FLLMScope(local_res20,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_4b4 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_4a8,&local_4b4,true);
  TSlateDecl<SActionButton,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SActionButton,RequiredArgs::T0RequiredArgs>
            (&local_3d8,"SActionButton",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\SNegativeActionButton.cpp"
             ,0x22,local_res18);
  FMemScope::~FMemScope(&local_4a8);
  FLLMScope::~FLLMScope(local_res20);
  pTVar14 = TSlateDecl<SActionButton,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_3d8,&local_3f8,pFVar10);
  local_4e0.ReferenceController = (pTVar14->SharedReferenceCount).ReferenceController;
  local_4e8 = pTVar14->Object;
  if (local_4e0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_4e0.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_4e0.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar1 = &this->ActionButton;
  if (pTVar1 != (TSharedPtr<SActionButton,1> *)&local_4e8) {
    pTVar1->Object = local_4e8;
    local_4e8 = (SActionButton *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ActionButton).SharedReferenceCount,&local_4e0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4e0.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3f8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3d8._Widget.SharedReferenceCount.ReferenceController);
  SActionButton::FArguments::~FArguments(&local_3c0);
  if ((pTVar1->Object == (SActionButton *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pSVar6 = pTVar1->Object;
  pTVar4 = (this->ActionButton).SharedReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pSVar6 == (SActionButton *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  this_00 = &this->_padding_;
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
  local_3e8 = this->_padding_;
  pTStack_3e0 = (TReferenceControllerBase<1> *)this->_padding_;
  this->_padding_ = (longlong)pSVar6;
  this->_padding_ = (longlong)pTVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_3e0);
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)this_00);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// SetIsMenuOpen @ 142dd91e0

void __thiscall
SNegativeActionButton::SetIsMenuOpen(SNegativeActionButton *this,bool param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ActionButton.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\SNegativeActionButton.cpp"
                       ,0x42,L"");
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
                    /* WARNING: Could not recover jumptable at 0x000142dd9278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x10))(plVar3,param_1,param_2);
  return;
}

// SetMenuContentWidgetToFocus @ 142dd94c0

void __thiscall
SNegativeActionButton::SetMenuContentWidgetToFocus
          (SNegativeActionButton *this,TWeakPtr<SWidget,1> *param_1)

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
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\SNegativeActionButton.cpp"
                       ,0x3b,L"");
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

