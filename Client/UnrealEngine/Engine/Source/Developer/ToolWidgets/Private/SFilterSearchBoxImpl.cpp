// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ToolWidgets
// Functions: 5

// ~SFilterSearchBoxImpl @ 142d67430

void __thiscall SFilterSearchBoxImpl::~SFilterSearchBoxImpl(SFilterSearchBoxImpl *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->GetSearchHistoryVisibility);
  pvVar1 = *(void **)&(this->GetSearchHistoryVisibility).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->GetSearchHistoryVisibility);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnSaveSearchClicked);
  pvVar1 = *(void **)&(this->OnSaveSearchClicked).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSaveSearchClicked);
  SSearchBox::~SSearchBox((SSearchBox *)this);
  return;
}

// operator() @ 142d69a70

/* WARNING: Enum "Type": Some values do not have unique names */

EVisibility __thiscall `SFilterSearchBoxImpl::Construct'::__l2::<lambda_1>::operator()(void *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  TEnumAsByte<EVisibility::Private> TVar4;
  char cVar5;
  EVisibility EVar6;
  uchar *in_RDX;
  FText local_38;
  FReadAccessScope local_28;
  
  lVar1 = *(longlong *)this;
  if ((*(longlong *)(lVar1 + 0x2f8) == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    TVar4.Value = (*pcVar2)();
    return (TEnumAsByte<EVisibility::Private>)(TEnumAsByte<EVisibility::Private>)TVar4.Value;
  }
  SEditableText::GetText(*(SEditableText **)(lVar1 + 0x2f8),&local_38);
  bVar3 = FText::IsEmpty(&local_38);
  EVar6 = EVisibility::Collapsed;
  if (!bVar3) {
    lVar1 = *(longlong *)this;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar1 + 0x6c0),&local_28);
    if (((*(int *)(lVar1 + 0x6d0) == 0) || (*(longlong **)(lVar1 + 0x6c8) == (longlong *)0x0)) ||
       (cVar5 = (**(code **)(**(longlong **)(lVar1 + 0x6c8) + 0x38))(), cVar5 == '\0')) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      EVar6 = EVisibility::Collapsed;
    }
    else {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      EVar6 = EVisibility::Visible;
    }
  }
  *in_RDX = (uchar)EVar6.Value.Value;
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  return (EVisibility)SUB81(in_RDX,0);
}

// operator() @ 142d6ac70

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
`SFilterSearchBoxImpl::Construct'::__l2::<lambda_2>::operator()
          (void *this,FReply *__return_storage_ptr__)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  FReply *pFVar5;
  FText local_38;
  FReadAccessScope local_28;
  
  lVar1 = *(longlong *)this;
  if (*(longlong *)(lVar1 + 0x2f8) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FReply *)(*pcVar3)();
      return pFVar5;
    }
  }
  SEditableText::GetText(*(SEditableText **)(lVar1 + 0x2f8),&local_38);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar1 + 0x6c0),&local_28);
  if ((*(int *)(lVar1 + 0x6d0) != 0) &&
     (plVar2 = *(longlong **)(lVar1 + 0x6c8), plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x68))(plVar2,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  FReply::FReply(__return_storage_ptr__,true);
  return __return_storage_ptr__;
}

// Construct @ 142d81430

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall SFilterSearchBoxImpl::Construct(SFilterSearchBoxImpl *this,FArguments *param_1)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  bool bVar7;
  FArguments *pFVar8;
  ISlateStyle *pIVar9;
  FSearchBoxStyle *pFVar10;
  FSlot *this_00;
  FSlot *pFVar11;
  FSlotArguments *pFVar12;
  FArguments *pFVar13;
  FName *pFVar14;
  undefined8 *puVar15;
  ulong64 uVar16;
  FButtonStyle *pFVar17;
  FArguments *pFVar18;
  TSharedRef<SImage,1> *pTVar19;
  TSharedRef<SButton,1> *pTVar20;
  SHorizontalBox *this_01;
  FText *pFVar21;
  undefined ***pppuVar22;
  undefined1 auStackY_1b48 [32];
  T0RequiredArgs local_1b18;
  T0RequiredArgs local_1b17;
  T0RequiredArgs local_1b16;
  T0RequiredArgs local_1b15;
  FLLMScope local_1b14;
  FLLMScope local_1b10;
  FLLMScope local_1b0c;
  FLLMScope local_1b08 [2];
  undefined2 local_1b00;
  undefined1 local_1af8 [8];
  ForAnyElementType FStack_1af0;
  ulonglong local_1ae8;
  bool local_1ae0;
  bool local_1adf;
  undefined1 local_1ad8 [8];
  ForAnyElementType FStack_1ad0;
  int local_1ac8;
  FSlotArguments *local_1ac0;
  SButton *local_1ab8;
  FSharedReferencer<1> local_1ab0;
  SButton *local_1aa8;
  FSharedReferencer<1> local_1aa0;
  FSlateBrush *local_1a98;
  undefined1 local_1a90;
  undefined1 local_1a88 [8];
  ForAnyElementType FStack_1a80;
  ulonglong local_1a78;
  FSlateBrush *local_1a70;
  undefined1 local_1a68;
  undefined1 local_1a60 [8];
  ForAnyElementType FStack_1a58;
  ulonglong local_1a50;
  undefined8 local_1a48;
  undefined8 uStack_1a40;
  undefined4 local_1a38;
  undefined1 local_1a34;
  undefined1 local_1a30 [8];
  ForAnyElementType FStack_1a28;
  ulonglong local_1a20;
  FText local_1a18;
  bool local_1a08;
  undefined1 local_1a00 [8];
  ForAnyElementType FStack_19f8;
  int local_19f0;
  FText local_19e8;
  bool local_19d8;
  undefined1 local_19d0 [8];
  ForAnyElementType FStack_19c8;
  int local_19c0;
  undefined8 local_19b8;
  undefined8 uStack_19b0;
  undefined1 local_19a8;
  undefined1 local_19a0 [8];
  ForAnyElementType FStack_1998;
  ulonglong local_1990;
  undefined8 local_1988;
  undefined8 uStack_1980;
  undefined1 local_1978;
  undefined1 local_1970 [8];
  ForAnyElementType FStack_1968;
  ulonglong local_1960;
  SImage *local_1958;
  TReferenceControllerBase<1> *pTStack_1950;
  SImage *local_1948;
  TReferenceControllerBase<1> *pTStack_1940;
  undefined1 local_1938 [4];
  undefined1 local_1934 [4];
  FName local_1930;
  FName local_1928;
  FMemScope local_1920;
  FName local_1918;
  FMemScope local_1910;
  FName local_1908;
  FName local_1900;
  FMemScope local_18f8;
  FMemScope local_18f0;
  FName local_18e8;
  FTagMetaData local_18e0;
  FLinearColor_u_0 local_18d0;
  undefined4 local_18c0;
  undefined1 local_18bc;
  undefined8 local_18b8;
  undefined8 uStack_18b0;
  undefined8 local_18a8;
  FDestructionSentinel local_18a0;
  FDestructionSentinel local_1888;
  FDestructionSentinel local_1870;
  FDestructionSentinel local_1858;
  FDestructionSentinel local_1840;
  FDestructionSentinel local_1828;
  FDestructionSentinel local_1810;
  FDestructionSentinel local_17f8;
  FDestructionSentinel local_17e0;
  FDestructionSentinel local_17c8;
  longlong *local_17b0;
  FDestructionSentinel local_17a8;
  undefined1 *local_1790;
  FDestructionSentinel local_1788;
  longlong *local_1770;
  undefined4 local_1758;
  undefined4 local_1744;
  TAttribute<FText> local_1740;
  FName local_1710;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_1708;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_16f0;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_16d8;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_16c0;
  FText local_16a8;
  TSharedRef<SImage,1> local_1698;
  TSharedRef<SButton,1> local_1688;
  TSharedRef<SImage,1> local_1678;
  TSharedRef<SButton,1> local_1668;
  FName local_1658;
  FName local_1650;
  FName local_1648;
  undefined **local_1640;
  FSlotArguments local_1638;
  TPanelChildren<SBoxPanel::FSlot> *local_1550;
  int local_1548;
  undefined1 local_1540 [80];
  undefined4 local_14f0;
  undefined1 local_14ec;
  undefined4 local_14e8;
  undefined1 local_14e4;
  FArguments local_1440;
  FArguments local_1198;
  FArguments local_ef0;
  FArguments local_b38;
  FArguments local_5f8;
  code *local_b8;
  undefined **local_a8;
  SFilterSearchBoxImpl *local_a0;
  undefined ***local_90;
  code *local_88;
  undefined **local_78;
  SFilterSearchBoxImpl *local_70;
  undefined ***local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1b48;
  pFVar8 = SSearchBox::FArguments::FArguments(&local_ef0);
  ::FName::FName(&local_1710,"FilterBar.SearchBox");
  pIVar9 = FAppStyle::Get();
  pFVar10 = (FSearchBoxStyle *)
            (**(code **)((longlong)*pIVar9 + 0xa0))(pIVar9,FSearchBoxStyle::TypeName);
  if (pFVar10 == (FSearchBoxStyle *)0x0) {
    pFVar10 = FSearchBoxStyle::GetDefault();
  }
  pFVar8->_Style = pFVar10;
  local_19e8.TextData.Reference = (param_1->_InitialText).Value.TextData.Reference;
  if (local_19e8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_19e8.TextData.Reference + 8))
              (local_19e8.TextData.Reference,local_1938);
  }
  local_19e8.Flags = (param_1->_InitialText).Value.Flags;
  local_19d8 = (param_1->_InitialText).bIsSet;
  pFVar11 = (FSlot *)0x0;
  local_19d0 = (undefined1  [8])0x0;
  FStack_19c8.Data = (FScriptContainerElement *)0x0;
  local_19c0 = 0;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)local_19d0,
             &(param_1->_InitialText).Getter);
  FText::operator=(&(pFVar8->_InitialText).Value,&local_19e8);
  (pFVar8->_InitialText).bIsSet = local_19d8;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar8->_InitialText).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_19d0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_19d0,
             (FWriteAccessScope *)&local_1888);
  if ((local_19c0 != 0) && (FStack_19c8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_19c8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_19c8,0,0,0x10);
    local_19c0 = 0;
  }
  if (local_1888.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1888.Accessor,&local_1888);
  }
  if (FStack_19c8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_19c8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_19d0);
  if (local_19e8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_19e8.TextData.Reference + 0x10))();
  }
  local_1a18.TextData.Reference = (param_1->_HintText).Value.TextData.Reference;
  if (local_1a18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1a18.TextData.Reference + 8))
              (local_1a18.TextData.Reference,local_1934);
  }
  local_1a18.Flags = (param_1->_HintText).Value.Flags;
  local_1a08 = (param_1->_HintText).bIsSet;
  local_1a00 = (undefined1  [8])0x0;
  FStack_19f8.Data = (FScriptContainerElement *)0x0;
  local_19f0 = 0;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)local_1a00,
             &(param_1->_HintText).Getter);
  FText::operator=(&(pFVar8->_HintText).Value,&local_1a18);
  (pFVar8->_HintText).bIsSet = local_1a08;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar8->_HintText).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1a00);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1a00,
             (FWriteAccessScope *)&local_1870);
  if ((local_19f0 != 0) && (FStack_19f8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_19f8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_19f8,0,0,0x10);
    local_19f0 = 0;
  }
  if (local_1870.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1870.Accessor,&local_1870);
  }
  if (FStack_19f8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_19f8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1a00);
  if (local_1a18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1a18.TextData.Reference + 0x10))();
  }
  TDelegate<void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&pFVar8->_OnTextChanged,&param_1->_OnTextChanged);
  TDelegate<void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>::
  operator=(&pFVar8->_OnTextCommitted,&param_1->_OnTextCommitted);
  local_1b00 = 0x100;
  local_1ae8 = 0;
  local_1af8 = (undefined1  [8])0x0;
  FStack_1af0.Data = (FScriptContainerElement *)0x0;
  (pFVar8->_SelectAllTextWhenFocused).Value = false;
  (pFVar8->_SelectAllTextWhenFocused).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(pFVar8->_SelectAllTextWhenFocused).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1af8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1af8,
             (FWriteAccessScope *)&local_1858);
  if (((int)local_1ae8 != 0) && (FStack_1af0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1af0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1af0,0,0,0x10);
    local_1ae8 = local_1ae8 & 0xffffffff00000000;
  }
  if (local_1858.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1858.Accessor,&local_1858);
  }
  if (FStack_1af0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1af0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1af8);
  local_1ae0 = (param_1->_DelayChangeNotificationsWhileTyping).Value;
  local_1adf = (param_1->_DelayChangeNotificationsWhileTyping).bIsSet;
  local_1ad8 = (undefined1  [8])0x0;
  FStack_1ad0.Data = (FScriptContainerElement *)0x0;
  local_1ac8 = 0;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)local_1ad8,
             &(param_1->_DelayChangeNotificationsWhileTyping).Getter);
  (pFVar8->_DelayChangeNotificationsWhileTyping).Value = local_1ae0;
  (pFVar8->_DelayChangeNotificationsWhileTyping).bIsSet = local_1adf;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(pFVar8->_DelayChangeNotificationsWhileTyping).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1ad8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1ad8,
             (FWriteAccessScope *)&local_1840);
  if ((local_1ac8 != 0) && (FStack_1ad0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1ad0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1ad0,0,0,0x10);
    local_1ac8 = 0;
  }
  if (local_1840.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1840.Accessor,&local_1840);
  }
  if (FStack_1ad0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1ad0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1ad8);
  TDelegate<FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>::
  operator=(&pFVar8->_OnKeyDownHandler,&param_1->_OnKeyDownHandler);
  SSearchBox::Construct((SSearchBox *)this,pFVar8);
  SSearchBox::FArguments::~FArguments(&local_ef0);
  TDelegate<void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&this->OnSaveSearchClicked,&param_1->_OnSaveSearchClicked);
  TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&this->GetSearchHistoryVisibility,&param_1->_GetSearchHistoryVisibility);
  if ((this->_padding_ == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar1 = this->_padding_;
  this_00 = ::operator_new(0x58);
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
    pFVar11 = SHorizontalBox::FSlot::FSlot(this_00);
  }
  local_1ac0 = (FSlotArguments *)pFVar11;
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments(&local_1638,(FSlot *)&local_1ac0);
  local_1548 = -1;
  local_1640 = &___7__FScopedWidgetSlotArguments_VFSlot_SHorizontalBox___SBoxPanel__6B_;
  local_1550 = (TPanelChildren<SBoxPanel::FSlot> *)(lVar1 + 0x218);
  local_1638._80_4_ = 2;
  local_1638._84_1_ = 1;
  local_1638._72_4_ = 3;
  local_1638._76_1_ = 1;
  pFVar12 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(&local_1638);
  local_1ac0 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                         ((FSlotArgumentsMixin *)&pFVar12->field_0x18,__real_c0800000,0.0,0.0,0.0);
  pFVar13 = SButton::FArguments::FArguments(&local_5f8);
  local_18e0._padding_ = (longlong)&___7FTagMetaData__6B_;
  pFVar14 = ::FName::FName(&local_1648,L"CreateFilterFromCurrentSearchButton");
  local_18e0.Tag = *pFVar14;
  pFVar13 = TSlateBaseNamedArgs<SButton>::AddMetaData<FTagMetaData,FTagMetaData>
                      ((TSlateBaseNamedArgs<SButton> *)pFVar13,&local_18e0);
  local_1978 = 1;
  local_1960 = 0;
  local_1988 = 0;
  uStack_1980 = 0;
  local_1970 = (undefined1  [8])0x0;
  FStack_1968.Data = (FScriptContainerElement *)0x0;
  (pFVar13->_ContentPadding).Value.Left = 0.0;
  (pFVar13->_ContentPadding).Value.Top = 0.0;
  (pFVar13->_ContentPadding).Value.Right = 0.0;
  (pFVar13->_ContentPadding).Value.Bottom = 0.0;
  (pFVar13->_ContentPadding).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar13->_ContentPadding).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1970);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1970,
             (FWriteAccessScope *)&local_1828);
  if (((int)local_1960 != 0) && (FStack_1968.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1968.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1968,0,0,0x10);
    local_1960 = local_1960 & 0xffffffff00000000;
  }
  if (local_1828.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1828.Accessor,&local_1828);
  }
  if (FStack_1968.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1968.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1970);
  local_90 = (undefined ***)0x0;
  local_a8 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`SFilterSearchBoxImpl::Construct'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_b8 = UE::Core::Private::Function::
             TFunctionRefCaller<`SFilterSearchBoxImpl::Construct'::__l2::<lambda_1>,EVisibility>::
             Call;
  *(undefined1 *)((longlong)&pFVar13->_padding_ + 1) = 1;
  local_a0 = this;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar13->_padding_,
             (FWriteAccessScope *)&local_17c8);
  local_17b0 = &pFVar13->_padding_;
  puVar15 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)local_17b0);
  if (puVar15 != (undefined8 *)0x0) {
    *puVar15 = &
               ___7__TCommonDelegateInstanceState___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar16 = FDelegateHandle::GenerateNewID();
    puVar15[2] = uVar16;
    *puVar15 = &
               ___7__TBaseFunctorDelegateInstance___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy__V__TFunction___A6A_AUEVisibility__XZ____V__6B_
    ;
    puVar15[4] = local_b8;
    puVar15[9] = 0;
    if (local_b8 != (code *)0x0) {
      pppuVar22 = &local_a8;
      if (local_90 != (undefined ***)0x0) {
        pppuVar22 = local_90;
      }
      (*(code *)**pppuVar22)();
    }
  }
  if (local_17c8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_17c8.Accessor,&local_17c8);
  }
  ::FName::FName(&local_1930,"HoverOnlyButton");
  pIVar9 = FAppStyle::Get();
  pFVar17 = (FButtonStyle *)(**(code **)((longlong)*pIVar9 + 0xa0))(pIVar9,FButtonStyle::TypeName);
  if (pFVar17 == (FButtonStyle *)0x0) {
    pFVar17 = FButtonStyle::GetDefault();
  }
  pFVar13->_ButtonStyle = pFVar17;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar13->_OnClicked,
             (FWriteAccessScope *)&local_17a8);
  local_1790 = &(pFVar13->_OnClicked).field_0x8;
  puVar15 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_1790);
  if (puVar15 != (undefined8 *)0x0) {
    *puVar15 = &
               ___7__TCommonDelegateInstanceState___A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar16 = FDelegateHandle::GenerateNewID();
    puVar15[2] = uVar16;
    *puVar15 = &TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SFilterSearchBoxImpl::Construct'::`2'::<lambda_2>_>
                ::_vftable_;
    puVar15[3] = this;
  }
  if (local_17a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_17a8.Accessor,&local_17a8);
  }
  pFVar18 = SImage::FArguments::FArguments(&local_1440);
  pIVar9 = FAppStyle::Get();
  pcVar4 = *(code **)((longlong)*pIVar9 + 0x50);
  pFVar14 = ::FName::FName(&local_1650,"Icons.PlusCircle");
  local_1a70 = (FSlateBrush *)(*pcVar4)(pIVar9,*pFVar14);
  local_1a68 = 1;
  local_1a60 = (undefined1  [8])0x0;
  FStack_1a58.Data = (FScriptContainerElement *)0x0;
  local_1a50 = 0;
  (pFVar18->_Image).Value = local_1a70;
  (pFVar18->_Image).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar18->_Image).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1a60);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1a60,
             (FWriteAccessScope *)&local_1810);
  if (((int)local_1a50 != 0) && (FStack_1a58.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1a58.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1a58,0,0,0x10);
    local_1a50 = local_1a50 & 0xffffffff00000000;
  }
  if (local_1810.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1810.Accessor,&local_1810);
  }
  if (FStack_1a58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1a58.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1a60);
  uVar5 = _UNK_15090c6d8;
  local_1a34 = 1;
  local_1a48 = ___xmm_3f8000003f800000000000003f800000;
  uStack_1a40 = _UNK_15090c6d8;
  local_1758 = CONCAT22(local_1758._2_2_,2);
  uVar6 = local_1758;
  local_1a38 = local_1758;
  local_1a20 = 0;
  local_1a30 = (undefined1  [8])0x0;
  FStack_1a28.Data = (FScriptContainerElement *)0x0;
  *(undefined8 *)&(pFVar18->_ColorAndOpacity).Value.SpecifiedColor.field0_0x0 =
       ___xmm_3f8000003f800000000000003f800000;
  *(undefined8 *)((longlong)&(pFVar18->_ColorAndOpacity).Value.SpecifiedColor.field0_0x0 + 8) =
       uVar5;
  local_1758._0_1_ = (undefined1)2;
  local_1758._1_1_ = (undefined1)(2 >> 8);
  (pFVar18->_ColorAndOpacity).Value.ColorUseRule = (undefined1)local_1758;
  (pFVar18->_ColorAndOpacity).Value.ColorTableId = local_1758._1_1_;
  *(undefined2 *)&(pFVar18->_ColorAndOpacity).Value.field_0x12 = local_1758._2_2_;
  (pFVar18->_ColorAndOpacity).bIsSet = true;
  local_1758 = uVar6;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar18->_ColorAndOpacity).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1a30);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1a30,
             (FWriteAccessScope *)&local_17f8);
  if (((int)local_1a20 != 0) && (FStack_1a28.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1a28.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1a28,0,0,0x10);
    local_1a20 = local_1a20 & 0xffffffff00000000;
  }
  if (local_17f8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_17f8.Accessor,&local_17f8);
  }
  if (FStack_1a28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1a28.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1a30);
  FLLMScope::FLLMScope(&local_1b14,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1928 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1920,&local_1928,true);
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
            (&local_16f0,"SImage",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\Filters\\SFilterSearchBox.cpp"
             ,0x72,&local_1b18);
  FMemScope::~FMemScope(&local_1920);
  FLLMScope::~FLLMScope(&local_1b14);
  pTVar19 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_16f0,&local_1678,pFVar18);
  pTVar2 = (pTVar19->SharedReferenceCount).ReferenceController;
  local_1958 = pTVar19->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (pFVar13->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar13->_Content).Widget.Object = (SWidget *)local_1958;
  (pFVar13->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar2;
  pTStack_1950 = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  FLLMScope::FLLMScope(&local_1b10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1918 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1910,&local_1918,true);
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>
            (&local_1708,"SButton",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\Filters\\SFilterSearchBox.cpp"
             ,99,&local_1b17);
  FMemScope::~FMemScope(&local_1910);
  FLLMScope::~FLLMScope(&local_1b10);
  pTVar20 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1708,&local_1668,pFVar13);
  pTVar3 = (pTVar20->SharedReferenceCount).ReferenceController;
  local_1ab8 = pTVar20->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1ab0.ReferenceController = pTVar3;
  if ((SButton **)&local_1ac0->field_0x8 != &local_1ab8) {
    *(SButton **)&local_1ac0->field_0x8 = local_1ab8;
    local_1ab8 = (SButton *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&local_1ac0->field_0x10,&local_1ab0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1ab0.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1668.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1708._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1678.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_16f0._Widget.SharedReferenceCount.ReferenceController);
  SImage::FArguments::~FArguments(&local_1440);
  if (local_b8 != (code *)0x0) {
    pppuVar22 = &local_a8;
    if (local_90 != (undefined ***)0x0) {
      pppuVar22 = local_90;
    }
    (*(code *)(*pppuVar22)[2])();
  }
  SButton::FArguments::~FArguments(&local_5f8);
  local_1640 = &___7__FScopedWidgetSlotArguments_VFSlot_SHorizontalBox___SBoxPanel__6B_;
  if (local_1638._0_8_ != 0) {
    if (local_1548 == -1) {
      TPanelChildren<SBoxPanel::FSlot>::AddSlot(local_1550,(FSlotArguments *)&local_1638);
    }
    else {
      TPanelChildren<SBoxPanel::FSlot>::InsertSlot
                (local_1550,(FSlotArguments *)&local_1638,local_1548);
    }
  }
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_1638);
  this_01 = TSharedPtr<SHorizontalBox,1>::operator->
                      ((TSharedPtr<SHorizontalBox,1> *)&this->_padding_);
  SHorizontalBox::InsertSlot
            (this_01,(FScopedWidgetSlotArguments<SHorizontalBox::FSlot> *)local_1540,-1);
  local_14f0 = 3;
  local_14ec = 1;
  local_14e8 = 2;
  local_14e4 = 1;
  pFVar12 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth((FSlotArguments *)(local_1540 + 8));
  pFVar12 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)&pFVar12->field_0x18,0.0,0.0,__real_40800000,0.0);
  pFVar13 = SButton::FArguments::FArguments(&local_b38);
  local_19a8 = 1;
  local_19b8 = 0;
  uStack_19b0 = 0;
  local_1990 = 0;
  local_19a0 = (undefined1  [8])0x0;
  FStack_1998.Data = (FScriptContainerElement *)0x0;
  (pFVar13->_ContentPadding).Value.Left = 0.0;
  (pFVar13->_ContentPadding).Value.Top = 0.0;
  (pFVar13->_ContentPadding).Value.Right = 0.0;
  (pFVar13->_ContentPadding).Value.Bottom = 0.0;
  (pFVar13->_ContentPadding).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar13->_ContentPadding).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_19a0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_19a0,
             (FWriteAccessScope *)&local_17e0);
  if (((int)local_1990 != 0) && (FStack_1998.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1998.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1998,0,0,0x10);
    local_1990 = local_1990 & 0xffffffff00000000;
  }
  if (local_17e0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_17e0.Accessor,&local_17e0);
  }
  if (FStack_1998.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1998.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_19a0);
  ::FName::FName(&local_1908,"HoverOnlyButton");
  pIVar9 = FAppStyle::Get();
  pFVar13 = SButton::FArguments::ButtonStyle(pFVar13,pIVar9,&local_1908,(char *)0x0);
  pFVar13->_ClickMethod = MouseDown;
  TDelegate<FReply___cdecl(void),FDefaultDelegateUserPolicy>::operator=
            (&pFVar13->_OnClicked,&param_1->_OnSearchHistoryClicked);
  pFVar21 = FText::AsLocalizable_Advanced_LocText
                      (&local_16a8,L"CustomTextFilter",L"SearchHistoryToolTipText",
                       L"Click to show the Search History");
  FText::FText(&local_1740.Value,pFVar21);
  local_1740.bIsSet = true;
  local_1740.Getter._16_8_ = 0;
  local_1740.Getter._0_8_ = 0;
  local_1740.Getter._8_8_ = 0;
  pFVar13 = TSlateBaseNamedArgs<SButton>::ToolTipText
                      ((TSlateBaseNamedArgs<SButton> *)pFVar13,&local_1740);
  local_60 = (undefined ***)0x0;
  local_78 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`SFilterSearchBoxImpl::Construct'::`2'::<lambda_3>,0,0>::
              _vftable_;
  local_88 = UE::Core::Private::Function::
             TFunctionRefCaller<`SFilterSearchBoxImpl::Construct'::__l2::<lambda_3>,EVisibility>::
             Call;
  *(undefined1 *)((longlong)&pFVar13->_padding_ + 1) = 1;
  local_70 = this;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar13->_padding_,
             (FWriteAccessScope *)&local_1788);
  local_1770 = &pFVar13->_padding_;
  puVar15 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)local_1770);
  if (puVar15 != (undefined8 *)0x0) {
    *puVar15 = &
               ___7__TCommonDelegateInstanceState___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar16 = FDelegateHandle::GenerateNewID();
    puVar15[2] = uVar16;
    *puVar15 = &
               ___7__TBaseFunctorDelegateInstance___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy__V__TFunction___A6A_AUEVisibility__XZ____V__6B_
    ;
    puVar15[4] = local_88;
    puVar15[9] = 0;
    if (local_88 != (code *)0x0) {
      pppuVar22 = &local_78;
      if (local_60 != (undefined ***)0x0) {
        pppuVar22 = local_60;
      }
      (*(code *)**pppuVar22)();
    }
  }
  if (local_1788.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1788.Accessor,&local_1788);
  }
  pFVar18 = SImage::FArguments::FArguments(&local_1198);
  pIVar9 = FAppStyle::Get();
  pcVar4 = *(code **)((longlong)*pIVar9 + 0x50);
  pFVar14 = ::FName::FName(&local_1658,"Icons.ChevronDown");
  local_1a98 = (FSlateBrush *)(*pcVar4)(pIVar9,*pFVar14);
  local_1a90 = 1;
  local_1a78 = 0;
  local_1a88 = (undefined1  [8])0x0;
  FStack_1a80.Data = (FScriptContainerElement *)0x0;
  (pFVar18->_Image).Value = local_1a98;
  (pFVar18->_Image).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar18->_Image).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1a88);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1a88,
             (FWriteAccessScope *)&local_18a0);
  if (((int)local_1a78 != 0) && (FStack_1a80.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1a80.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1a80,0,0,0x10);
    local_1a78 = local_1a78 & 0xffffffff00000000;
  }
  if (local_18a0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_18a0.Accessor,&local_18a0);
  }
  if (FStack_1a80.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1a80.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1a88);
  local_1744 = CONCAT22(local_1744._2_2_,2);
  local_18c0 = local_1744;
  local_18a8 = 0;
  local_18d0._0_8_ = ___xmm_3f8000003f800000000000003f800000;
  local_18d0._8_8_ = _UNK_15090c6d8;
  local_18bc = 1;
  local_18b8 = 0;
  uStack_18b0 = 0;
  pFVar18 = SImage::FArguments::ColorAndOpacity(pFVar18,(TAttribute<FSlateColor> *)&local_18d0._s_0)
  ;
  FLLMScope::FLLMScope(&local_1b0c,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18e8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_18f0,&local_18e8,true);
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
            (&local_16c0,"SImage",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\Filters\\SFilterSearchBox.cpp"
             ,0x8b,&local_1b16);
  FMemScope::~FMemScope(&local_18f0);
  FLLMScope::~FLLMScope(&local_1b0c);
  pTVar19 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_16c0,&local_1698,pFVar18);
  pTVar2 = (pTVar19->SharedReferenceCount).ReferenceController;
  local_1948 = pTVar19->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (pFVar13->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar13->_Content).Widget.Object = (SWidget *)local_1948;
  (pFVar13->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar2;
  pTStack_1940 = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  FLLMScope::FLLMScope(local_1b08,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1900 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_18f8,&local_1900,true);
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>
            (&local_16d8,"SButton",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\Filters\\SFilterSearchBox.cpp"
             ,0x80,&local_1b15);
  FMemScope::~FMemScope(&local_18f8);
  FLLMScope::~FLLMScope(local_1b08);
  pTVar20 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_16d8,&local_1688,pFVar13);
  pTVar3 = (pTVar20->SharedReferenceCount).ReferenceController;
  local_1aa8 = pTVar20->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1aa0.ReferenceController = pTVar3;
  if ((SButton **)&pFVar12->field_0x8 != &local_1aa8) {
    *(SButton **)&pFVar12->field_0x8 = local_1aa8;
    local_1aa8 = (SButton *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar12->field_0x10,&local_1aa0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1aa0.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1688.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_16d8._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1698.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_16c0._Widget.SharedReferenceCount.ReferenceController);
  SImage::FArguments::~FArguments(&local_1198);
  if (local_88 != (code *)0x0) {
    pppuVar22 = &local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar22 = local_60;
    }
    (*(code *)(*pppuVar22)[2])();
  }
  if (local_16a8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_16a8.TextData.Reference + 0x10))();
  }
  SButton::FArguments::~FArguments(&local_b38);
  SBoxPanel::FScopedWidgetSlotArguments<SHorizontalBox::FSlot>::
  ~FScopedWidgetSlotArguments<SHorizontalBox::FSlot>
            ((FScopedWidgetSlotArguments<SHorizontalBox::FSlot> *)local_1540);
  return;
}

// SetOnSaveSearchHandler @ 142dd98b0

void __thiscall
SFilterSearchBoxImpl::SetOnSaveSearchHandler
          (SFilterSearchBoxImpl *this,
          TDelegate<void___cdecl(FText_const_&),FDefaultDelegateUserPolicy> *param_1)

{
  TDelegate<void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&this->OnSaveSearchClicked,param_1);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
  if (*(void **)&param_1->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_1->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_1);
  return;
}

