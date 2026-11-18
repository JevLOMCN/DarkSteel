// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ToolWidgets
// Functions: 3

// Construct @ 142d8c8c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall SSimpleComboButton::Construct(SSimpleComboButton *this,FArguments *param_1)

{
  undefined8 *puVar1;
  bool bVar2;
  FName FVar3;
  TReferenceControllerBase<1> *pTVar4;
  SWidget *pSVar5;
  char cVar6;
  FToolWidgetsStyle *this_00;
  FName *pFVar7;
  FActionButtonStyle *pFVar8;
  FSlateBrush *pFVar9;
  ISlateStyle *pIVar10;
  FTextBlockStyle *pFVar11;
  longlong lVar12;
  FArguments *pFVar13;
  FMRSWRecursiveAccessDetector *this_01;
  undefined1 local_res10 [8];
  FName local_res18;
  FName local_res20;
  undefined1 local_578 [16];
  undefined1 local_568 [16];
  int local_558;
  FSlateBrush *local_550;
  undefined1 local_548;
  undefined1 local_540 [8];
  ForAnyElementType FStack_538;
  ulonglong local_530;
  FLinearColor_u_0 local_528;
  undefined1 local_518;
  undefined1 local_514;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_510;
  ForAnyElementType FStack_508;
  ulonglong local_500;
  undefined1 local_4f8;
  undefined1 local_4f7;
  undefined1 local_4f0 [8];
  void *pvStack_4e8;
  undefined4 local_4e0;
  TSharedRef<SWidget,1> local_4d8;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  undefined1 local_4b8;
  undefined1 local_4b0 [8];
  void *pvStack_4a8;
  undefined8 local_4a0;
  FSlateBrush *local_498;
  char local_490;
  undefined1 local_488 [24];
  undefined8 local_470;
  undefined8 uStack_468;
  bool local_460;
  undefined1 local_458 [24];
  FDestructionSentinel local_440;
  FDestructionSentinel local_428;
  TAttribute<FText> local_410;
  FName local_3e0;
  SWidget *local_3d8;
  TReferenceControllerBase<1> *pTStack_3d0;
  SWidget *local_3c8;
  TReferenceControllerBase<1> *pTStack_3c0;
  FReadAccessScope local_3b8;
  FReadAccessScope local_3a0;
  FReadAccessScope local_388;
  FArguments local_370;
  
  this_00 = UE::ToolWidgets::FToolWidgetsStyle::Get();
  pFVar7 = ::FName::FName(&local_res18,"SimpleComboButton");
  pFVar8 = ISlateStyle::GetWidgetStyle<FActionButtonStyle>
                     ((ISlateStyle *)this_00,*pFVar7,(char *)0x0,(FActionButtonStyle *)0x0);
  bVar2 = (param_1->_Icon).bIsSet;
  if (bVar2 == false) {
    local_548 = 1;
    local_578._0_8_ = &pFVar8->IconBrush;
    if ((pFVar8->IconBrush).bIsSet == false) {
      local_578._0_8_ = (FSlateBrush *)0x0;
    }
    local_578[8] = true;
    local_530 = 0;
    local_540 = (undefined1  [8])0x0;
    FStack_538.Data = (FScriptContainerElement *)0x0;
    local_550 = (FSlateBrush *)local_578._0_8_;
    TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>::
    TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
              ((TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy> *)local_568,
               (TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy> *)local_540)
    ;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_540,
               (FWriteAccessScope *)&local_440);
    if (((int)local_530 != 0) && (FStack_538.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_538.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_538,0,0,0x10);
      local_530 = local_530 & 0xffffffff00000000;
    }
    if (local_440.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_440.Accessor,&local_440);
    }
    if (FStack_538.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_538.Data);
    }
    this_01 = (FMRSWRecursiveAccessDetector *)local_540;
  }
  else {
    local_498 = (param_1->_Icon).Value;
    local_490 = bVar2;
    TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>::
    TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
              ((TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy> *)local_488,
               &(param_1->_Icon).Getter);
    local_578._0_8_ = local_498;
    local_578[8] = local_490;
    TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>::
    TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
              ((TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy> *)local_568,
               (TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy> *)local_488)
    ;
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_488);
    if ((void *)local_488._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_488._8_8_);
    }
    this_01 = (FMRSWRecursiveAccessDetector *)local_488;
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this_01);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_568,&local_3b8);
  if (((local_558 == 0) || ((FSlateBrush *)local_568._8_8_ == (FSlateBrush *)0x0)) ||
     (cVar6 = (**(code **)(((FSlateBrush *)local_568._8_8_)->_padding_ + 0x38))(), cVar6 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_3b8);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_3b8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_568,&local_388);
    pFVar9 = (FSlateBrush *)0x0;
    if (local_558 != 0) {
      pFVar9 = (FSlateBrush *)local_568._8_8_;
    }
    pFVar9 = (FSlateBrush *)(**(code **)(((FSlateBrush *)&pFVar9->_padding_)->_padding_ + 0x60))();
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_388);
    local_578._0_8_ = pFVar9;
  }
  if ((FSlateBrush *)local_578._0_8_ == (FSlateBrush *)0x0) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_568,&local_3a0);
    if (((local_558 == 0) || ((FSlateBrush *)local_568._8_8_ == (FSlateBrush *)0x0)) ||
       (cVar6 = (**(code **)(((FSlateBrush *)local_568._8_8_)->_padding_ + 0x38))(), cVar6 == '\0'))
    {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_3a0);
      bVar2 = false;
      goto LAB_142d8cb01;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_3a0);
  }
  bVar2 = true;
LAB_142d8cb01:
  if (param_1->_UsesSmallText == false) {
    pFVar7 = ::FName::FName(&local_3e0,"SmallButtonText");
    FVar3 = *pFVar7;
    pIVar10 = FAppStyle::Get();
    pFVar11 = (FTextBlockStyle *)
              (**(code **)((longlong)*pIVar10 + 0xa0))(pIVar10,FTextBlockStyle::TypeName,FVar3,0,1);
  }
  else {
    pFVar7 = ::FName::FName(&local_res20,"SmallText");
    FVar3 = *pFVar7;
    pIVar10 = FAppStyle::Get();
    pFVar11 = (FTextBlockStyle *)
              (**(code **)((longlong)*pIVar10 + 0xa0))(pIVar10,FTextBlockStyle::TypeName,FVar3,0,1);
  }
  if (pFVar11 == (FTextBlockStyle *)0x0) {
    pFVar11 = FTextBlockStyle::GetDefault();
  }
  local_518 = 0;
  local_514 = 0;
  local_500 = 0;
  local_528._0_8_ = ___xmm_3f8000003f800000000000003f800000;
  local_528._8_8_ = _UNK_15090c6d8;
  local_510.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_508.Data = (FScriptContainerElement *)0x0;
  UE::ToolWidgets::Private::ActionButton::MakeButtonContent
            (&local_4d8,pFVar8,(TAttribute<FSlateBrush_const_*> *)local_578,
             (TAttribute<FSlateColor> *)&local_528._s_0,&param_1->_Text,pFVar11);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_510,(FWriteAccessScope *)&local_428);
  if (((int)local_500 != 0) && (FStack_508.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_508.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_508,0,0,0x10);
    local_500 = local_500 & 0xffffffff00000000;
  }
  if (local_428.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_428.Accessor,&local_428);
  }
  if (FStack_508.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_508.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_510.AccessDetector);
  lVar12 = 0x924;
  if ((pFVar8->ComboButtonContentPadding).bIsSet == false) {
    lVar12 = 0x8f0;
  }
  puVar1 = (undefined8 *)((longlong)&pFVar8->_padding_ + lVar12);
  local_4c8 = *puVar1;
  uStack_4c0 = puVar1[1];
  local_4b8 = 1;
  local_4a0 = 0;
  local_4b0 = (undefined1  [8])0x0;
  pvStack_4a8 = (void *)0x0;
  pFVar13 = SComboButton::FArguments::FArguments(&local_370);
  pFVar13->_HasDownArrow = param_1->_HasDownArrow;
  local_460 = (bool)local_4b8;
  local_470 = local_4c8;
  uStack_468 = uStack_4c0;
  TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>
            ((TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy> *)local_458,
             (TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy> *)local_4b0);
  (pFVar13->_ContentPadding).Value.Left = (float)(undefined4)local_470;
  (pFVar13->_ContentPadding).Value.Top = (float)local_470._4_4_;
  (pFVar13->_ContentPadding).Value.Right = (float)(undefined4)uStack_468;
  (pFVar13->_ContentPadding).Value.Bottom = (float)uStack_468._4_4_;
  (pFVar13->_ContentPadding).bIsSet = local_460;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar13->_ContentPadding).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_458);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_458);
  if ((void *)local_458._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_458._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_458);
  if (bVar2) {
    lVar12 = 0xd30;
    if ((pFVar8->IconButtonStyle).bIsSet == false) {
      lVar12 = 0x10;
    }
  }
  else {
    lVar12 = 0x10;
  }
  pFVar13->_ButtonStyle = (FButtonStyle *)((longlong)&pFVar8->_padding_ + lVar12);
  pFVar13->_ComboButtonStyle = &pFVar8->ComboButtonStyle;
  local_4f8 = (undefined1)param_1->_padding_;
  local_4f7 = *(undefined1 *)((longlong)&param_1->_padding_ + 1);
  local_4f0 = (undefined1  [8])0x0;
  pvStack_4e8 = (void *)0x0;
  local_4e0 = 0;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)local_4f0,
             (TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)&param_1->_padding_);
  *(undefined1 *)&pFVar13->_padding_ = local_4f8;
  *(undefined1 *)((longlong)&pFVar13->_padding_ + 1) = local_4f7;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar13->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_4f0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_4f0);
  if (pvStack_4e8 != (void *)0x0) {
    FMemory::Free(pvStack_4e8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_4f0);
  local_410.Value.TextData.Reference = (ITextData *)param_1->_padding_;
  if (local_410.Value.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_410.Value.TextData.Reference + 8))
              (local_410.Value.TextData.Reference,local_res10);
  }
  local_410.Value.Flags = (uint)param_1->_padding_;
  local_410.bIsSet = SUB81(param_1->_padding_,0);
  local_410.Getter._0_8_ = 0;
  local_410.Getter._8_8_ = 0;
  local_410.Getter._16_4_ = 0;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&local_410.Getter,
             (TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)&param_1->_padding_);
  pFVar13 = TSlateBaseNamedArgs<SComboButton>::ToolTipText
                      ((TSlateBaseNamedArgs<SComboButton> *)pFVar13,&local_410);
  pFVar13->_HAlign = (uint)(pFVar8->HorizontalContentAlignment).Value;
  pFVar13->_VAlign = VAlign_Center;
  if (local_4d8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_4d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_4d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_3d8 = (pFVar13->_ButtonContent).Widget.Object;
  pTStack_3d0 = (pFVar13->_ButtonContent).Widget.SharedReferenceCount.ReferenceController;
  (pFVar13->_ButtonContent).Widget.Object = local_4d8.Object;
  (pFVar13->_ButtonContent).Widget.SharedReferenceCount.ReferenceController =
       local_4d8.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_3d0);
  pTVar4 = (param_1->_MenuContent).Widget.SharedReferenceCount.ReferenceController;
  pSVar5 = (param_1->_MenuContent).Widget.Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_3c8 = (pFVar13->_MenuContent).Widget.Object;
  pTStack_3c0 = (pFVar13->_MenuContent).Widget.SharedReferenceCount.ReferenceController;
  (pFVar13->_MenuContent).Widget.Object = pSVar5;
  (pFVar13->_MenuContent).Widget.SharedReferenceCount.ReferenceController = pTVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_3c0);
  TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&pFVar13->_OnGetMenuContent,&param_1->_OnGetMenuContent);
  TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>::operator=
            (&pFVar13->_OnMenuOpenChanged,&param_1->_OnMenuOpenChanged);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&pFVar13->_OnComboBoxOpened,&param_1->_OnComboBoxOpened);
  SComboButton::Construct((SComboButton *)this,pFVar13);
  SComboButton::FArguments::~FArguments(&local_370);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_4b0);
  if (pvStack_4a8 != (void *)0x0) {
    FMemory::Free(pvStack_4a8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_4b0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4d8.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_568);
  if ((FSlateBrush *)local_568._8_8_ != (FSlateBrush *)0x0) {
    FMemory::Free((void *)local_568._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_568);
  return;
}

// SetIsMenuOpen @ 142dd9340

void __thiscall
SSimpleComboButton::SetIsMenuOpen(SSimpleComboButton *this,bool param_1,bool param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000142dd934d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)&this[-1].field_0x8 + 0x250))();
  return;
}

// SetMenuContentWidgetToFocus @ 142dd9680

void __thiscall
SSimpleComboButton::SetMenuContentWidgetToFocus
          (SSimpleComboButton *this,TWeakPtr<SWidget,1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  TWeakPtr<SWidget,1> local_18;
  
  local_18.Object = param_1->Object;
  local_18.WeakReferenceCount.ReferenceController =
       (param_1->WeakReferenceCount).ReferenceController;
  if (local_18.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  SComboButton::SetMenuContentWidgetToFocus((SComboButton *)&this[-1].field_0x8,&local_18);
  pTVar3 = (param_1->WeakReferenceCount).ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
                    /* WARNING: Could not recover jumptable at 0x000142dd96d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
      return;
    }
  }
  return;
}

