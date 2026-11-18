// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ToolWidgets
// Functions: 1

// Construct @ 142d842e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall SPrimaryButton::Construct(SPrimaryButton *this,FArguments *param_1)

{
  TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy> *pTVar1;
  FButtonStyle *pFVar2;
  bool bVar3;
  void *pvVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  char cVar8;
  FToolWidgetsStyle *this_00;
  FName *pFVar9;
  FActionButtonStyle *pFVar10;
  FSlateBrush *pFVar11;
  longlong lVar12;
  FArguments *pFVar13;
  FMargin *pFVar14;
  TAttribute<FMargin> *pTVar15;
  FMRSWRecursiveAccessDetector *this_01;
  undefined1 local_res10 [8];
  FName local_res18 [2];
  undefined1 local_798 [16];
  undefined1 local_788 [16];
  int local_778;
  FSlateBrush *local_770;
  undefined1 local_768;
  undefined1 local_760 [8];
  ForAnyElementType FStack_758;
  ulonglong local_750;
  FLinearColor_u_0 local_748;
  undefined1 local_738;
  undefined1 local_734;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_730;
  ForAnyElementType FStack_728;
  ulonglong local_720;
  undefined1 local_718;
  undefined1 local_717;
  undefined1 local_710 [8];
  void *pvStack_708;
  undefined4 local_700;
  TSharedRef<SWidget,1> local_6f8;
  undefined8 local_6e8;
  undefined8 uStack_6e0;
  undefined1 local_6d8;
  undefined1 local_6d0 [8];
  void *pvStack_6c8;
  undefined8 local_6c0;
  FSlateBrush *local_6b8;
  char local_6b0;
  undefined1 local_6a8 [24];
  FDestructionSentinel local_690;
  FDestructionSentinel local_678;
  TAttribute<FText> local_660;
  SWidget *local_630;
  TReferenceControllerBase<1> *pTStack_628;
  FReadAccessScope local_620;
  FReadAccessScope local_608;
  FReadAccessScope local_5f0;
  TAttribute<FMargin> local_5d8;
  TAttribute<FMargin> local_5a8;
  FArguments local_578;
  
  this_00 = UE::ToolWidgets::FToolWidgetsStyle::Get();
  pFVar9 = ::FName::FName(local_res18,"PrimaryButton");
  pFVar10 = ISlateStyle::GetWidgetStyle<FActionButtonStyle>
                      ((ISlateStyle *)this_00,*pFVar9,(char *)0x0,(FActionButtonStyle *)0x0);
  bVar3 = (param_1->_Icon).bIsSet;
  if (bVar3 == false) {
    local_768 = 1;
    local_798._0_8_ = &pFVar10->IconBrush;
    if ((pFVar10->IconBrush).bIsSet == false) {
      local_798._0_8_ = (FSlateBrush *)0x0;
    }
    local_798[8] = true;
    local_750 = 0;
    local_760 = (undefined1  [8])0x0;
    FStack_758.Data = (FScriptContainerElement *)0x0;
    local_770 = (FSlateBrush *)local_798._0_8_;
    TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>::
    TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
              ((TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy> *)local_788,
               (TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy> *)local_760)
    ;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_760,
               (FWriteAccessScope *)&local_690);
    if (((int)local_750 != 0) && (FStack_758.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_758.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_758,0,0,0x10);
      local_750 = local_750 & 0xffffffff00000000;
    }
    if (local_690.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_690.Accessor,&local_690);
    }
    if (FStack_758.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_758.Data);
    }
    this_01 = (FMRSWRecursiveAccessDetector *)local_760;
  }
  else {
    local_6b8 = (param_1->_Icon).Value;
    local_6b0 = bVar3;
    TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>::
    TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
              ((TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy> *)local_6a8,
               &(param_1->_Icon).Getter);
    local_798._0_8_ = local_6b8;
    local_798[8] = (bool)local_6b0;
    TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>::
    TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
              ((TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy> *)local_788,
               (TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy> *)local_6a8)
    ;
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_6a8);
    if ((void *)local_6a8._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_6a8._8_8_);
    }
    this_01 = (FMRSWRecursiveAccessDetector *)local_6a8;
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this_01);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_788,&local_620);
  if (((local_778 == 0) || ((FSlateBrush *)local_788._8_8_ == (FSlateBrush *)0x0)) ||
     (cVar8 = (**(code **)(((FSlateBrush *)local_788._8_8_)->_padding_ + 0x38))(), cVar8 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_620);
    if (local_798[8] != false) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_788,&local_608);
      if (((local_778 == 0) || ((FSlateBrush *)local_788._8_8_ == (FSlateBrush *)0x0)) ||
         (cVar8 = (**(code **)(((FSlateBrush *)local_788._8_8_)->_padding_ + 0x38))(), cVar8 == '\0'
         )) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_608);
      }
      else {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_608);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_788,&local_5f0);
        pFVar11 = (FSlateBrush *)0x0;
        if (local_778 != 0) {
          pFVar11 = (FSlateBrush *)local_788._8_8_;
        }
        pFVar11 = (FSlateBrush *)
                  (**(code **)(((FSlateBrush *)&pFVar11->_padding_)->_padding_ + 0x60))();
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_5f0);
        local_798._0_8_ = pFVar11;
      }
      if ((FSlateBrush *)local_798._0_8_ != (FSlateBrush *)0x0) goto LAB_142d8453a;
    }
    lVar12 = 0x10;
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_620);
LAB_142d8453a:
    lVar12 = 0xd30;
    if ((pFVar10->IconButtonStyle).bIsSet == false) {
      lVar12 = 0x10;
    }
  }
  pFVar2 = (FButtonStyle *)((longlong)&pFVar10->_padding_ + lVar12);
  local_738 = 0;
  local_734 = 0;
  local_720 = 0;
  local_748._0_8_ = ___xmm_3f8000003f800000000000003f800000;
  local_748._8_8_ = _UNK_15090c6d8;
  local_730.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_728.Data = (FScriptContainerElement *)0x0;
  UE::ToolWidgets::Private::ActionButton::MakeButtonContent
            (&local_6f8,pFVar10,(TAttribute<FSlateBrush_const_*> *)local_798,
             (TAttribute<FSlateColor> *)&local_748._s_0,&param_1->_Text,(FTextBlockStyle *)0x0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_730,(FWriteAccessScope *)&local_678);
  if (((int)local_720 != 0) && (FStack_728.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_728.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_728,0,0,0x10);
    local_720 = local_720 & 0xffffffff00000000;
  }
  if (local_678.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_678.Accessor,&local_678);
  }
  if (FStack_728.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_728.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_730.AccessDetector);
  pFVar13 = SButton::FArguments::FArguments(&local_578);
  pFVar14 = &(pFVar10->ButtonContentPadding).TypedValue;
  if ((pFVar10->ButtonContentPadding).bIsSet == false) {
    pFVar14 = &DefaultButtonContentPadding;
  }
  local_6e8._0_4_ = pFVar14->Left;
  local_6e8._4_4_ = pFVar14->Top;
  uStack_6e0._0_4_ = pFVar14->Right;
  uStack_6e0._4_4_ = pFVar14->Bottom;
  local_6d8 = 1;
  local_6c0 = 0;
  local_6d0 = (undefined1  [8])0x0;
  pvStack_6c8 = (void *)0x0;
  (pFVar13->_ContentPadding).Value.Left = (float)(undefined4)local_6e8;
  (pFVar13->_ContentPadding).Value.Top = (float)local_6e8._4_4_;
  (pFVar13->_ContentPadding).Value.Right = (float)(undefined4)uStack_6e0;
  (pFVar13->_ContentPadding).Value.Bottom = (float)uStack_6e0._4_4_;
  (pFVar13->_ContentPadding).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar13->_ContentPadding).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_6d0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_6d0);
  if (pvStack_6c8 != (void *)0x0) {
    FMemory::Free(pvStack_6c8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_6d0);
  pFVar13->_ButtonStyle = pFVar2;
  local_718 = (undefined1)param_1->_padding_;
  local_717 = *(undefined1 *)((longlong)&param_1->_padding_ + 1);
  local_710 = (undefined1  [8])0x0;
  pvStack_708 = (void *)0x0;
  local_700 = 0;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)local_710,
             (TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)&param_1->_padding_);
  *(undefined1 *)&pFVar13->_padding_ = local_718;
  *(undefined1 *)((longlong)&pFVar13->_padding_ + 1) = local_717;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar13->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_710);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_710);
  if (pvStack_708 != (void *)0x0) {
    FMemory::Free(pvStack_708);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_710);
  local_660.Value.TextData.Reference = (ITextData *)param_1->_padding_;
  if (local_660.Value.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_660.Value.TextData.Reference + 8))
              (local_660.Value.TextData.Reference,local_res10);
  }
  local_660.Value.Flags = (uint)param_1->_padding_;
  local_660.bIsSet = SUB81(param_1->_padding_,0);
  local_660.Getter._0_8_ = 0;
  local_660.Getter._8_8_ = 0;
  local_660.Getter._16_4_ = 0;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&local_660.Getter,
             (TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)&param_1->_padding_);
  pFVar13 = TSlateBaseNamedArgs<SButton>::ToolTipText
                      ((TSlateBaseNamedArgs<SButton> *)pFVar13,&local_660);
  pFVar13->_HAlign = (uint)(pFVar10->HorizontalContentAlignment).Value;
  pFVar13->_VAlign = VAlign_Center;
  pTVar15 = UE::ToolWidgets::Private::ActionButton::MakeIconPaddingOverride
                      (&local_5d8,(TAttribute<FSlateBrush_const_*> *)local_798,
                       &pFVar2->NormalPadding,&pFVar10->IconNormalPadding);
  fVar5 = (pTVar15->Value).Top;
  fVar6 = (pTVar15->Value).Right;
  fVar7 = (pTVar15->Value).Bottom;
  pTVar1 = &pTVar15->Getter;
  (pFVar13->_NormalPaddingOverride).Value.Left = (pTVar15->Value).Left;
  (pFVar13->_NormalPaddingOverride).Value.Top = fVar5;
  (pFVar13->_NormalPaddingOverride).Value.Right = fVar6;
  (pFVar13->_NormalPaddingOverride).Value.Bottom = fVar7;
  (pFVar13->_NormalPaddingOverride).bIsSet = pTVar15->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar13->_NormalPaddingOverride).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar1);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar1);
  pvVar4 = *(void **)&(pTVar15->Getter).field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)pTVar1);
  pTVar15 = UE::ToolWidgets::Private::ActionButton::MakeIconPaddingOverride
                      (&local_5a8,(TAttribute<FSlateBrush_const_*> *)local_798,
                       &pFVar2->PressedPadding,&pFVar10->IconPressedPadding);
  fVar5 = (pTVar15->Value).Top;
  fVar6 = (pTVar15->Value).Right;
  fVar7 = (pTVar15->Value).Bottom;
  pTVar1 = &pTVar15->Getter;
  (pFVar13->_PressedPaddingOverride).Value.Left = (pTVar15->Value).Left;
  (pFVar13->_PressedPaddingOverride).Value.Top = fVar5;
  (pFVar13->_PressedPaddingOverride).Value.Right = fVar6;
  (pFVar13->_PressedPaddingOverride).Value.Bottom = fVar7;
  (pFVar13->_PressedPaddingOverride).bIsSet = pTVar15->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar13->_PressedPaddingOverride).Getter
             ,(TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar1);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar1);
  pvVar4 = *(void **)&(pTVar15->Getter).field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)pTVar1);
  TDelegate<FReply___cdecl(void),FDefaultDelegateUserPolicy>::operator=
            (&pFVar13->_OnClicked,&param_1->_OnClicked);
  if (local_6f8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_6f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_6f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_630 = (pFVar13->_Content).Widget.Object;
  pTStack_628 = (pFVar13->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar13->_Content).Widget.Object = local_6f8.Object;
  (pFVar13->_Content).Widget.SharedReferenceCount.ReferenceController =
       local_6f8.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_628);
  SButton::Construct((SButton *)this,pFVar13);
  SButton::FArguments::~FArguments(&local_578);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6f8.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_788);
  if ((FSlateBrush *)local_788._8_8_ != (FSlateBrush *)0x0) {
    FMemory::Free((void *)local_788._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_788);
  return;
}

