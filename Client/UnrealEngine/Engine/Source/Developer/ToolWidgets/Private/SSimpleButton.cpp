// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ToolWidgets
// Functions: 1

// Construct @ 142d8c2d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall SSimpleButton::Construct(SSimpleButton *this,FArguments *param_1)

{
  bool bVar1;
  undefined1 uVar2;
  longlong lVar3;
  FToolWidgetsStyle *this_00;
  FName *pFVar4;
  FActionButtonStyle *pFVar5;
  FArguments *this_01;
  FMargin *pFVar6;
  ISlateStyle *pIVar7;
  FButtonStyle *pFVar8;
  FMRSWRecursiveAccessDetector *this_02;
  char *pcVar9;
  undefined1 local_res10 [8];
  FName local_res18;
  FName local_res20;
  undefined1 local_730 [8];
  ForAnyElementType FStack_728;
  int local_720;
  FSlateBrush *local_718;
  undefined1 local_710;
  undefined1 local_708 [8];
  ForAnyElementType FStack_700;
  ulonglong local_6f8;
  FText local_6f0;
  undefined1 local_6e0;
  undefined1 local_6d8 [8];
  ForAnyElementType FStack_6d0;
  int local_6c8;
  FLinearColor_u_0 local_6c0;
  undefined1 local_6b0;
  undefined1 local_6ac;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_6a8;
  ForAnyElementType FStack_6a0;
  ulonglong local_698;
  undefined8 local_690;
  undefined8 uStack_688;
  undefined1 local_680;
  undefined1 local_678 [8];
  ForAnyElementType FStack_670;
  ulonglong local_668;
  TSharedRef<SWidget,1> local_660;
  undefined1 local_650 [16];
  undefined1 local_640 [24];
  FSlateBrush *local_628;
  char local_620;
  undefined1 local_618 [24];
  FDestructionSentinel local_600;
  FDestructionSentinel local_5e8;
  FDestructionSentinel local_5d0;
  FDestructionSentinel local_5b8;
  FDestructionSentinel local_5a0;
  SWidget *local_588;
  TReferenceControllerBase<1> *pTStack_580;
  FArguments local_578;
  
  this_00 = UE::ToolWidgets::FToolWidgetsStyle::Get();
  pcVar9 = "SimpleButton";
  pFVar4 = ::FName::FName(&local_res18,"SimpleButton");
  pFVar5 = ISlateStyle::GetWidgetStyle<FActionButtonStyle>
                     ((ISlateStyle *)this_00,*pFVar4,(char *)0x0,(FActionButtonStyle *)0x0);
  bVar1 = (param_1->_Icon).bIsSet;
  if (bVar1 == false) {
    local_710 = 1;
    local_718 = &(pFVar5->IconBrush).TypedValue;
    if ((pFVar5->IconBrush).bIsSet == false) {
      local_718 = (FSlateBrush *)0x0;
    }
    local_650[8] = true;
    local_6f8 = 0;
    local_708 = (undefined1  [8])0x0;
    FStack_700.Data = (FScriptContainerElement *)0x0;
    local_650._0_8_ = local_718;
    TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>::
    TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
              ((TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy> *)local_640,
               (TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy> *)local_708)
    ;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_708,
               (FWriteAccessScope *)&local_600);
    if (((int)local_6f8 != 0) && (FStack_700.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_700.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_700,0,0,0x10);
      local_6f8 = local_6f8 & 0xffffffff00000000;
    }
    if (local_600.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_600.Accessor,&local_600);
    }
    if (FStack_700.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_700.Data);
    }
    this_02 = (FMRSWRecursiveAccessDetector *)local_708;
  }
  else {
    local_628 = (param_1->_Icon).Value;
    local_620 = bVar1;
    TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>::
    TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
              ((TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy> *)local_618,
               &(param_1->_Icon).Getter);
    local_650._0_8_ = local_628;
    local_650[8] = (bool)local_620;
    TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>::
    TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
              ((TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy> *)local_640,
               (TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy> *)local_618)
    ;
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_618);
    if ((void *)local_618._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_618._8_8_);
    }
    this_02 = (FMRSWRecursiveAccessDetector *)local_618;
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this_02);
  local_6b0 = 0;
  local_6ac = 0;
  local_698 = 0;
  local_6c0._0_8_ = ___xmm_3f8000003f800000000000003f800000;
  local_6c0._8_8_ = _UNK_15090c6d8;
  local_6a8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_6a0.Data = (FScriptContainerElement *)0x0;
  UE::ToolWidgets::Private::ActionButton::MakeButtonContent
            (&local_660,pFVar5,(TAttribute<FSlateBrush_const_*> *)local_650,
             (TAttribute<FSlateColor> *)&local_6c0._s_0,&param_1->_Text,(FTextBlockStyle *)0x0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_6a8,(FWriteAccessScope *)&local_5e8);
  if (((int)local_698 != 0) && (FStack_6a0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_6a0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_6a0,0,0,0x10);
    local_698 = local_698 & 0xffffffff00000000;
  }
  if (local_5e8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_5e8.Accessor,&local_5e8);
  }
  if (FStack_6a0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_6a0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_6a8.AccessDetector);
  this_01 = SButton::FArguments::FArguments(&local_578);
  pFVar6 = &(pFVar5->ButtonContentPadding).TypedValue;
  if ((pFVar5->ButtonContentPadding).bIsSet == false) {
    pFVar6 = &DefaultButtonContentPadding;
  }
  local_690._0_4_ = pFVar6->Left;
  local_690._4_4_ = pFVar6->Top;
  uStack_688._0_4_ = pFVar6->Right;
  uStack_688._4_4_ = pFVar6->Bottom;
  local_680 = 1;
  local_668 = 0;
  local_678 = (undefined1  [8])0x0;
  FStack_670.Data = (FScriptContainerElement *)0x0;
  (this_01->_ContentPadding).Value.Left = (float)(undefined4)local_690;
  (this_01->_ContentPadding).Value.Top = (float)local_690._4_4_;
  (this_01->_ContentPadding).Value.Right = (float)(undefined4)uStack_688;
  (this_01->_ContentPadding).Value.Bottom = (float)uStack_688._4_4_;
  (this_01->_ContentPadding).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this_01->_ContentPadding).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_678);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_678,
             (FWriteAccessScope *)&local_5d0);
  if (((int)local_668 != 0) && (FStack_670.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_670.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_670,0,0,0x10);
    local_668 = local_668 & 0xffffffff00000000;
  }
  if (local_5d0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_5d0.Accessor,&local_5d0);
  }
  if (FStack_670.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_670.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_678);
  pIVar7 = FAppStyle::Get();
  if ((param_1->_Text).bIsSet != false) {
    pcVar9 = "SimpleButtonLabelAndIcon";
  }
  pFVar4 = ::FName::FName(&local_res20,pcVar9);
  pFVar8 = (FButtonStyle *)
           (**(code **)((longlong)*pIVar7 + 0xa0))(pIVar7,FButtonStyle::TypeName,*pFVar4,0,1);
  if (pFVar8 == (FButtonStyle *)0x0) {
    pFVar8 = FButtonStyle::GetDefault();
  }
  this_01->_ButtonStyle = pFVar8;
  lVar3 = param_1->_padding_;
  uVar2 = *(undefined1 *)((longlong)&param_1->_padding_ + 1);
  local_730 = (undefined1  [8])0x0;
  FStack_728.Data = (FScriptContainerElement *)0x0;
  local_720 = 0;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)local_730,
             (TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)&param_1->_padding_);
  *(char *)&this_01->_padding_ = (char)lVar3;
  *(undefined1 *)((longlong)&this_01->_padding_ + 1) = uVar2;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this_01->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_730);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_730,
             (FWriteAccessScope *)&local_5b8);
  if ((local_720 != 0) && (FStack_728.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_728.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_728,0,0,0x10);
    local_720 = 0;
  }
  if (local_5b8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_5b8.Accessor,&local_5b8);
  }
  if (FStack_728.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_728.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_730);
  local_6f0.TextData.Reference = (ITextData *)param_1->_padding_;
  if (local_6f0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_6f0.TextData.Reference + 8))
              (local_6f0.TextData.Reference,local_res10);
  }
  local_6f0.Flags = (uint)param_1->_padding_;
  local_6e0 = (undefined1)param_1->_padding_;
  local_6d8 = (undefined1  [8])0x0;
  FStack_6d0.Data = (FScriptContainerElement *)0x0;
  local_6c8 = 0;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)local_6d8,
             (TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)&param_1->_padding_);
  FText::operator=((FText *)this_01,&local_6f0);
  *(undefined1 *)&this_01->_padding_ = local_6e0;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this_01->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_6d8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_6d8,
             (FWriteAccessScope *)&local_5a0);
  if ((local_6c8 != 0) && (FStack_6d0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_6d0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_6d0,0,0,0x10);
    local_6c8 = 0;
  }
  if (local_5a0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_5a0.Accessor,&local_5a0);
  }
  if (FStack_6d0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_6d0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_6d8);
  if (local_6f0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_6f0.TextData.Reference + 0x10))();
  }
  this_01->_HAlign = (uint)(pFVar5->HorizontalContentAlignment).Value;
  this_01->_VAlign = VAlign_Center;
  TDelegate<FReply___cdecl(void),FDefaultDelegateUserPolicy>::operator=
            (&this_01->_OnClicked,&param_1->_OnClicked);
  if (local_660.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_660.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_660.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_588 = (this_01->_Content).Widget.Object;
  pTStack_580 = (this_01->_Content).Widget.SharedReferenceCount.ReferenceController;
  (this_01->_Content).Widget.Object = local_660.Object;
  (this_01->_Content).Widget.SharedReferenceCount.ReferenceController =
       local_660.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_580);
  SButton::Construct((SButton *)this,this_01);
  SButton::FArguments::~FArguments(&local_578);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_660.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_640);
  if ((void *)local_640._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_640._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_640);
  return;
}

