// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 10

// ~SComboButton @ 1427ba5b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SComboButton::~SComboButton(SComboButton *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  void *pvVar4;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ForegroundArrowImage).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ShadowImage).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->HBox).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ButtonPtr).SharedReferenceCount.ReferenceController);
  pTVar3 = (this->ContentWidgetPtr).WeakReferenceCount.ReferenceController;
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
  pTVar3 = (this->WidgetToFocusPtr).WeakReferenceCount.ReferenceController;
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
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnComboBoxOpened);
  pvVar4 = *(void **)&(this->OnComboBoxOpened).field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnComboBoxOpened);
  SMenuAnchor::~SMenuAnchor((SMenuAnchor *)this);
  return;
}

// Construct @ 142859620

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SComboButton::Construct(SComboButton *this,FArguments *param_1)

{
  atomic<int> *paVar1;
  undefined1 *puVar2;
  atomic<int> aVar3;
  bool bVar4;
  FComboButtonStyle *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  SWidget *pSVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  code *pcVar11;
  TReferenceControllerBase<1> *pTVar12;
  bool bVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  bool bVar17;
  FArguments *pFVar18;
  FArguments *pFVar19;
  undefined8 *puVar20;
  TSharedRef<SWidget,1> *pTVar21;
  ulong64 uVar22;
  FArguments *pFVar23;
  FSlot *pFVar24;
  FSlotArguments *pFVar25;
  FSizeParam *pFVar26;
  FArguments *pFVar27;
  FSlotArguments *pFVar28;
  FArguments *pFVar29;
  TSharedRef<SImage,1> *pTVar30;
  TSharedRef<SOverlay,1> *pTVar31;
  TSharedRef<SHorizontalBox,1> *pTVar32;
  TSharedRef<SButton,1> *pTVar33;
  FSlotArguments *pFVar34;
  longlong *plVar35;
  FSlotArguments *pFVar36;
  FName FVar37;
  FButtonStyle *pFVar38;
  bool bVar39;
  FName local_res8;
  T0RequiredArgs local_res10 [8];
  T0RequiredArgs local_res18 [8];
  T0RequiredArgs local_res20 [8];
  T0RequiredArgs local_1ad8;
  T0RequiredArgs local_1ad7;
  EPopupMethod local_1ad6 [2];
  FLLMScope local_1ad4;
  FLLMScope local_1ad0;
  FLLMScope local_1acc;
  FLLMScope local_1ac8;
  FLLMScope local_1ac4;
  undefined1 local_1ac0 [8];
  ForAnyElementType local_1ab8;
  int local_1ab0;
  TReferenceControllerBase<1> *local_1aa8;
  undefined4 uStack_1aa0;
  uint uStack_1a9c;
  SImage *local_1a98;
  FSharedReferencer<1> local_1a90;
  SImage *local_1a88;
  FSharedReferencer<1> local_1a80;
  FArguments *local_1a78;
  SWidget *local_1a70;
  FSharedReferencer<1> local_1a68;
  undefined8 local_1a60;
  FSharedReferencer<1> local_1a58;
  SHorizontalBox *local_1a50;
  TReferenceControllerBase<1> *pTStack_1a48;
  SButton *local_1a40;
  TReferenceControllerBase<1> *pTStack_1a38;
  EMenuPlacement local_1a30;
  bool local_1a2c;
  undefined1 local_1a28 [24];
  undefined8 local_1a10;
  undefined8 uStack_1a08;
  undefined4 local_1a00;
  bool local_19fc;
  undefined1 local_19f8 [8];
  void *pvStack_19f0;
  undefined4 local_19e8;
  FName local_19e0;
  FMemScope local_19d8;
  FName local_19d0;
  FMemScope local_19c8;
  FArguments *local_19c0;
  FName local_19b8;
  FMemScope local_19b0;
  FArguments *local_19a8;
  FName local_19a0;
  FMemScope local_1998;
  undefined1 local_1990 [4];
  undefined1 local_198c [4];
  undefined1 local_1988 [8];
  EHorizontalAlignment local_1980 [2];
  EVerticalAlignment local_1978 [2];
  undefined4 local_1970 [2];
  undefined4 local_1968 [2];
  FAccessibleWidgetData local_1960;
  FSlotArguments *local_18f8;
  FSlotArguments *local_18f0;
  FMemScope local_18e8;
  undefined8 local_18e0;
  undefined8 uStack_18d8;
  bool local_18d0;
  undefined1 local_18c8 [8];
  void *pvStack_18c0;
  undefined4 local_18b8;
  FAccessibleWidgetData local_18b0;
  char local_1848;
  TAttribute<EVisibility> local_1840;
  TAttribute<float> local_1820;
  TAttribute<EVisibility> local_1800;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_17e0;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_17c8;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_17b0;
  undefined8 local_1798;
  undefined8 uStack_1790;
  undefined1 local_1788;
  undefined1 local_1780 [8];
  void *pvStack_1778;
  undefined8 local_1770;
  TAttribute<FMargin> local_1768;
  undefined8 local_1738;
  undefined8 uStack_1730;
  undefined1 local_1728 [8];
  undefined1 local_1720 [8];
  void *pvStack_1718;
  undefined8 local_1710;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_1708;
  TSharedRef<SImage,1> local_16f0;
  undefined8 local_16e0;
  undefined8 uStack_16d8;
  char local_16d0;
  undefined1 local_16c8 [8];
  void *pvStack_16c0;
  undefined4 local_16b8;
  SWidget *local_16b0;
  TReferenceControllerBase<1> *local_16a8;
  TAttribute<FSlateBrush_const_*> local_16a0;
  TAttribute<FSlateBrush_const_*> local_1678;
  FDestructionSentinel local_1650;
  FLinearColor_u_0 local_1638;
  undefined1 local_1628;
  undefined1 local_1624;
  undefined8 local_1620;
  undefined8 uStack_1618;
  undefined8 local_1610;
  FLinearColor_u_0 local_1608;
  undefined4 local_15f8;
  undefined1 local_15f4;
  undefined8 local_15f0;
  undefined8 uStack_15e8;
  undefined8 local_15e0;
  FDestructionSentinel local_15d8;
  undefined1 *local_15c0;
  undefined4 local_15a8;
  TAttribute<FText> local_15a0;
  FLinearColor_u_0 local_1570;
  undefined4 local_1560;
  undefined1 local_155c;
  TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy> local_1558;
  SImage *local_1540;
  TReferenceControllerBase<1> *pTStack_1538;
  undefined8 local_1530;
  undefined8 uStack_1528;
  undefined8 local_1520;
  undefined8 uStack_1518;
  code *local_1508;
  longlong lStack_1500;
  TSharedRef<SWidget,1> local_14f8;
  TSharedRef<SImage,1> local_14e8;
  TSharedRef<SButton,1> local_14d8;
  TSharedRef<SHorizontalBox,1> local_14c8;
  TSharedRef<SOverlay,1> local_14b8;
  SButton *local_14a8;
  TReferenceControllerBase<1> *pTStack_14a0;
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs> local_1498;
  SImage *local_1480;
  TReferenceControllerBase<1> *pTStack_1478;
  SHorizontalBox *local_1470;
  TReferenceControllerBase<1> *pTStack_1468;
  undefined1 local_1460 [16];
  undefined1 local_1450 [32];
  undefined1 local_1430 [24];
  FReadAccessScope local_1418;
  undefined1 local_1400 [16];
  FSharedReferencer<1> local_13f0 [3];
  undefined1 local_13d8;
  TDelegateBase<FNotThreadSafeDelegateMode> local_13d0;
  undefined4 local_13b8;
  undefined1 local_13b4;
  uint local_13b0;
  undefined1 local_13ac;
  TOptional<FSizeParam> local_13a8;
  undefined1 local_1318 [56];
  void *local_12e0;
  FSlotArguments local_12b8;
  undefined1 local_1258 [552];
  undefined1 local_1030 [24];
  undefined1 local_1018 [32];
  undefined1 local_ff8 [32];
  FSlot *local_fd8 [29];
  FArguments local_ef0;
  FArguments local_ce8;
  FArguments local_ae0;
  FArguments local_838;
  FArguments local_590;
  undefined8 uStack_48;
  
  uStack_48 = 0x14285963f;
  bVar13 = false;
  bVar39 = false;
  bVar4 = false;
  local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
  if ((param_1->_ComboButtonStyle == (FComboButtonStyle *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("InArgs._ComboButtonStyle",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SComboButton.cpp"
                          ,0xc,L""), bVar17)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  this->Style = param_1->_ComboButtonStyle;
  pFVar38 = param_1->_ButtonStyle;
  if (pFVar38 == (FButtonStyle *)0x0) {
    pFVar38 = &param_1->_ComboButtonStyle->ButtonStyle;
  }
  this->MenuBorderBrush = &param_1->_ComboButtonStyle->MenuBorderBrush;
  pFVar5 = param_1->_ComboButtonStyle;
  fVar14 = (pFVar5->MenuBorderPadding).Top;
  fVar15 = (pFVar5->MenuBorderPadding).Right;
  fVar16 = (pFVar5->MenuBorderPadding).Bottom;
  (this->MenuBorderPadding).Left = (pFVar5->MenuBorderPadding).Left;
  (this->MenuBorderPadding).Top = fVar14;
  (this->MenuBorderPadding).Right = fVar15;
  (this->MenuBorderPadding).Bottom = fVar16;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->OnComboBoxOpened,&param_1->_OnComboBoxOpened);
  (this->ContentWidgetPtr).Object = (param_1->_MenuContent).Widget.Object;
  pTVar6 = (param_1->_MenuContent).Widget.SharedReferenceCount.ReferenceController;
  if (pTVar6 != (this->ContentWidgetPtr).WeakReferenceCount.ReferenceController) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar7 = (this->ContentWidgetPtr).WeakReferenceCount.ReferenceController;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar7->WeakReferenceCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)(pTVar7->_padding_ + 8))(pTVar7,1);
      }
    }
    (this->ContentWidgetPtr).WeakReferenceCount.ReferenceController = pTVar6;
  }
  this->bIsFocusable = param_1->_IsFocusable;
  if ((*(float *)&param_1->_ComboButtonStyle->ShadowOffset != 0.0) ||
     (local_res8 = (FName)((ulonglong)local_res8 & 0xffffffffffffff00),
     *(float *)&(param_1->_ComboButtonStyle->ShadowOffset).field_0x4 != 0.0)) {
    local_res8.ComparisonIndex.Value._0_1_ = 1;
  }
  pFVar18 = SMenuAnchor::FArguments::FArguments((FArguments *)local_1258);
  local_1a30 = (param_1->_MenuPlacement).Value;
  local_1a2c = (param_1->_MenuPlacement).bIsSet;
  local_1a78 = pFVar18;
  TDelegate<enum_EMenuPlacement___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<enum_EMenuPlacement___cdecl(void),FDefaultDelegateUserPolicy>
            (local_1a28,&(param_1->_MenuPlacement).Getter);
  (pFVar18->_Placement).Value = local_1a30;
  (pFVar18->_Placement).bIsSet = local_1a2c;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar18->_Placement).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1a28);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1a28);
  if ((void *)local_1a28._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1a28._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1a28);
  bVar17 = (param_1->_Method).bIsSet;
  if (bVar17 != false) {
    local_1ad6[0] = (param_1->_Method).TypedValue;
  }
  if ((TOptional<EPopupMethod> *)local_1ad6 != &pFVar18->_Method) {
    if (bVar17 == false) {
      if ((pFVar18->_Method).bIsSet != false) {
        (pFVar18->_Method).bIsSet = false;
      }
    }
    else {
      (pFVar18->_Method).TypedValue = local_1ad6[0];
      (pFVar18->_Method).bIsSet = true;
    }
  }
  if (&param_1->_OnMenuOpenChanged != &pFVar18->_OnMenuOpenChanged) {
    local_1ac0 = (undefined1  [8])0x0;
    local_1ab8.Data = (FScriptContainerElement *)0x0;
    local_1ab0 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &param_1->_OnMenuOpenChanged,&local_1418);
    if ((*(int *)&(param_1->_OnMenuOpenChanged).field_0x10 != 0) &&
       (plVar35 = *(longlong **)&(param_1->_OnMenuOpenChanged).field_0x8, plVar35 != (longlong *)0x0
       )) {
      (**(code **)(*plVar35 + 0x50))(plVar35,local_1ac0);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_1418);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar18->_OnMenuOpenChanged,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1ac0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1ac0,
               (FWriteAccessScope *)&local_1650);
    if ((local_1ab0 != 0) && (local_1ab8.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_1ab8.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_1ab8,0,0,0x10);
      local_1ab0 = 0;
    }
    if (local_1650.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1650.Accessor,&local_1650);
    }
    if (local_1ab8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1ab8.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_1ac0);
  }
  TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>::operator=
            (&pFVar18->_OnGetMenuContent,&param_1->_OnGetMenuContent);
  pFVar18->_IsCollapsedByParent = param_1->_CollapseMenuOnParentFocus;
  pFVar19 = SButton::FArguments::FArguments(&local_590);
  pFVar19->_ButtonStyle = pFVar38;
  pFVar19->_ClickMethod = MouseDown;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar19->_OnClicked,
             (FWriteAccessScope *)&local_15d8);
  local_15c0 = &(pFVar19->_OnClicked).field_0x8;
  puVar20 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_15c0);
  FVar37 = local_res8;
  if (puVar20 != (undefined8 *)0x0) {
    uStack_1a9c = local_16f0.SharedReferenceCount.ReferenceController._4_4_;
    local_1aa8 = (TReferenceControllerBase<1> *)_vcall__600__flat______;
    uStack_1aa0 = 0;
    pTVar21 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_14f8);
    FVar37 = (FName)(pTVar21->SharedReferenceCount).ReferenceController;
    pSVar8 = pTVar21->Object;
    if (FVar37 != (FName)0x0) {
      LOCK();
      *(atomic<int> *)((longlong)FVar37 + 8) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)FVar37 + 8) + 1);
      UNLOCK();
      LOCK();
      *(atomic<int> *)((longlong)FVar37 + 8) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)FVar37 + 8) + 1);
      UNLOCK();
    }
    *puVar20 = &
               ___7__TCommonDelegateInstanceState___A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar22 = FDelegateHandle::GenerateNewID();
    puVar20[2] = uVar22;
    *puVar20 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSComboButton___00__A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar20[3] = pSVar8;
    *(FName *)(puVar20 + 4) = FVar37;
    if (FVar37 != (FName)0x0) {
      LOCK();
      *(atomic<int> *)((longlong)FVar37 + 0xc) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)FVar37 + 0xc) + 1);
      UNLOCK();
    }
    bVar13 = true;
    bVar39 = true;
    bVar4 = true;
    puVar20[5] = local_1aa8;
    puVar20[6] = CONCAT44(uStack_1a9c,uStack_1aa0);
  }
  if (bVar4) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)FVar37);
  }
  if (bVar39) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)FVar37);
  }
  if (bVar13) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_14f8.SharedReferenceCount.ReferenceController);
  }
  if (local_15d8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_15d8.Accessor,&local_15d8);
  }
  local_15a0.Value.TextData.Reference = (ITextData *)param_1->_padding_;
  if (local_15a0.Value.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_15a0.Value.TextData.Reference + 8))
              (local_15a0.Value.TextData.Reference,local_1990);
  }
  local_15a0.Value.Flags = (uint)param_1->_padding_;
  local_15a0.bIsSet = SUB81(param_1->_padding_,0);
  local_15a0.Getter._0_8_ = 0;
  local_15a0.Getter._8_8_ = 0;
  local_15a0.Getter._16_4_ = 0;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&local_15a0.Getter,
             (TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)&param_1->_padding_);
  uStack_1aa0 = 0;
  local_1aa8 = (TReferenceControllerBase<1> *)GetFilteredToolTipText;
  lStack_1500 = (ulonglong)uStack_1a9c << 0x20;
  local_1508 = GetFilteredToolTipText;
  pFVar19 = TSlateBaseNamedArgs<SButton>::ToolTipText<SComboButton,TAttribute<FText>_>
                      ((TSlateBaseNamedArgs<SButton> *)pFVar19,this,(pmf_e056f93f *)&local_1508,
                       &local_15a0);
  bVar4 = (param_1->_ContentPadding).bIsSet;
  bVar39 = bVar4 == false;
  if (bVar39) {
    pFVar5 = param_1->_ComboButtonStyle;
    puVar20 = &local_1738;
    local_1728[0] = 1;
    local_1738._0_4_ = (pFVar5->ContentPadding).Left;
    local_1738._4_4_ = (pFVar5->ContentPadding).Top;
    uStack_1730._0_4_ = (pFVar5->ContentPadding).Right;
    uStack_1730._4_4_ = (pFVar5->ContentPadding).Bottom;
    local_1710 = 0;
    local_1720 = (undefined1  [8])0x0;
    pvStack_1718 = (void *)0x0;
  }
  else {
    local_16e0._0_4_ = (param_1->_ContentPadding).Value.Left;
    local_16e0._4_4_ = (param_1->_ContentPadding).Value.Top;
    uStack_16d8._0_4_ = (param_1->_ContentPadding).Value.Right;
    uStack_16d8._4_4_ = (param_1->_ContentPadding).Value.Bottom;
    local_16b8 = 0;
    local_16c8 = (undefined1  [8])0x0;
    pvStack_16c0 = (void *)0x0;
    local_16d0 = bVar4;
    TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy> *)local_16c8,
               &(param_1->_ContentPadding).Getter);
    puVar20 = &local_16e0;
  }
  pFVar36 = (FSlotArguments *)0x0;
  local_18e0 = *puVar20;
  uStack_18d8 = puVar20[1];
  local_18d0 = *(bool *)(puVar20 + 2);
  local_18b8 = 0;
  local_18c8 = (undefined1  [8])0x0;
  pvStack_18c0 = (void *)0x0;
  TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy> *)local_18c8,
             (TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy> *)(puVar20 + 3));
  (pFVar19->_ContentPadding).Value.Left = (float)(undefined4)local_18e0;
  (pFVar19->_ContentPadding).Value.Top = (float)local_18e0._4_4_;
  (pFVar19->_ContentPadding).Value.Right = (float)(undefined4)uStack_18d8;
  (pFVar19->_ContentPadding).Value.Bottom = (float)uStack_18d8._4_4_;
  (pFVar19->_ContentPadding).bIsSet = local_18d0;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar19->_ContentPadding).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_18c8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_18c8);
  if (pvStack_18c0 != (void *)0x0) {
    FMemory::Free(pvStack_18c0);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_18c8);
  local_1570._0_8_ = *(undefined8 *)&(param_1->_ForegroundColor).Value.SpecifiedColor.field0_0x0;
  local_1570._8_8_ =
       *(undefined8 *)((longlong)&(param_1->_ForegroundColor).Value.SpecifiedColor.field0_0x0 + 8);
  local_1560._0_1_ = (param_1->_ForegroundColor).Value.ColorUseRule;
  local_1560._1_1_ = (param_1->_ForegroundColor).Value.ColorTableId;
  local_1560._2_2_ = *(undefined2 *)&(param_1->_ForegroundColor).Value.field_0x12;
  local_155c = (param_1->_ForegroundColor).bIsSet;
  local_1558._16_4_ = 0;
  local_1558._0_8_ = 0;
  local_1558._8_8_ = 0;
  TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&local_1558,&(param_1->_ForegroundColor).Getter);
  pFVar19 = SButton::FArguments::ForegroundColor
                      (pFVar19,(TAttribute<FSlateColor> *)&local_1570._s_0);
  local_1a00._0_1_ = (param_1->_ButtonColorAndOpacity).Value.ColorUseRule;
  local_1a00._1_1_ = (param_1->_ButtonColorAndOpacity).Value.ColorTableId;
  local_1a00._2_2_ = *(undefined2 *)&(param_1->_ButtonColorAndOpacity).Value.field_0x12;
  local_1a10 = *(undefined8 *)&(param_1->_ButtonColorAndOpacity).Value.SpecifiedColor.field0_0x0;
  uStack_1a08 = *(undefined8 *)
                 ((longlong)&(param_1->_ButtonColorAndOpacity).Value.SpecifiedColor.field0_0x0 + 8);
  local_19fc = (param_1->_ButtonColorAndOpacity).bIsSet;
  local_19f8 = (undefined1  [8])0x0;
  pvStack_19f0 = (void *)0x0;
  local_19e8 = 0;
  local_19a8 = pFVar19;
  TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy> *)local_19f8,
             &(param_1->_ButtonColorAndOpacity).Getter);
  *(undefined8 *)&(pFVar19->_ButtonColorAndOpacity).Value.SpecifiedColor.field0_0x0 = local_1a10;
  *(undefined8 *)((longlong)&(pFVar19->_ButtonColorAndOpacity).Value.SpecifiedColor.field0_0x0 + 8)
       = uStack_1a08;
  (pFVar19->_ButtonColorAndOpacity).Value.ColorUseRule = (undefined1)local_1a00;
  (pFVar19->_ButtonColorAndOpacity).Value.ColorTableId = local_1a00._1_1_;
  *(undefined2 *)&(pFVar19->_ButtonColorAndOpacity).Value.field_0x12 = local_1a00._2_2_;
  (pFVar19->_ButtonColorAndOpacity).bIsSet = local_19fc;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar19->_ButtonColorAndOpacity).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_19f8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_19f8);
  if (pvStack_19f0 != (void *)0x0) {
    FMemory::Free(pvStack_19f0);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_19f8);
  pFVar19->_IsFocusable = param_1->_IsFocusable;
  local_1960.bCanChildrenBeAccessible = '\0';
  local_1960.AccessibleBehavior = NotAccessible;
  local_1960.AccessibleSummaryBehavior = NotAccessible;
  FText::FText(&local_1960.AccessibleText.Value);
  local_1960.AccessibleText.bIsSet = false;
  local_1960.AccessibleText.Getter._16_8_ = 0;
  local_1960.AccessibleText.Getter._0_8_ = 0;
  local_1960.AccessibleText.Getter._8_8_ = 0;
  FText::FText(&local_1960.AccessibleSummaryText.Value);
  local_1960.AccessibleSummaryText.bIsSet = false;
  local_1960.AccessibleSummaryText.Getter._16_8_ = 0;
  local_18b0._0_1_ = local_18b0._0_1_ ^ (local_18b0._0_1_ ^ local_1960._0_1_) & 1;
  local_18b0.AccessibleBehavior = local_1960.AccessibleBehavior;
  local_18b0.AccessibleSummaryBehavior = local_1960.AccessibleSummaryBehavior;
  local_1960.AccessibleSummaryText.Getter._0_8_ = 0;
  local_1960.AccessibleSummaryText.Getter._8_8_ = 0;
  FText::FText(&local_18b0.AccessibleText.Value,&local_1960.AccessibleText.Value);
  local_18b0.AccessibleText.bIsSet = local_1960.AccessibleText.bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_18b0.AccessibleText.Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&local_1960.AccessibleText.Getter);
  FText::FText(&local_18b0.AccessibleSummaryText.Value,&local_1960.AccessibleSummaryText.Value);
  local_18b0.AccessibleSummaryText.bIsSet = local_1960.AccessibleSummaryText.bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_18b0.AccessibleSummaryText.Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&local_1960.AccessibleSummaryText.Getter);
  local_1848 = '\x01';
  plVar35 = &pFVar19->_padding_;
  if (&local_18b0 != (FAccessibleWidgetData *)plVar35) {
    if ((char)pFVar19->_padding_ != '\0') {
      FAccessibleWidgetData::~FAccessibleWidgetData((FAccessibleWidgetData *)plVar35);
    }
    *(byte *)plVar35 = (byte)*plVar35 ^ (local_18b0._0_1_ ^ (byte)*plVar35) & 1;
    *(EAccessibleBehavior *)((longlong)&pFVar19->_padding_ + 1) = local_18b0.AccessibleBehavior;
    *(EAccessibleBehavior *)((longlong)&pFVar19->_padding_ + 2) =
         local_18b0.AccessibleSummaryBehavior;
    pFVar19->_padding_ = 0;
    pFVar19->_padding_ = (longlong)local_18b0.AccessibleText.Value.TextData.Reference;
    if (local_18b0.AccessibleText.Value.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18b0.AccessibleText.Value.TextData.Reference + 8))
                (local_18b0.AccessibleText.Value.TextData.Reference,local_198c);
    }
    *(uint *)&pFVar19->_padding_ = local_18b0.AccessibleText.Value.Flags;
    *(bool *)&pFVar19->_padding_ = local_18b0.AccessibleText.bIsSet;
    pFVar19->_padding_ = 0;
    pFVar19->_padding_ = 0;
    *(undefined4 *)&pFVar19->_padding_ = 0;
    TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)&pFVar19->_padding_,
               &local_18b0.AccessibleText.Getter);
    pFVar19->_padding_ = 0;
    pFVar19->_padding_ = (longlong)local_18b0.AccessibleSummaryText.Value.TextData.Reference;
    if (local_18b0.AccessibleSummaryText.Value.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18b0.AccessibleSummaryText.Value.TextData.Reference + 8))
                (local_18b0.AccessibleSummaryText.Value.TextData.Reference,local_1988);
    }
    *(uint *)&pFVar19->_padding_ = local_18b0.AccessibleSummaryText.Value.Flags;
    *(bool *)&pFVar19->_padding_ = local_18b0.AccessibleSummaryText.bIsSet;
    pFVar19->_padding_ = 0;
    pFVar19->_padding_ = 0;
    *(undefined4 *)&pFVar19->_padding_ = 0;
    TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)&pFVar19->_padding_,
               &local_18b0.AccessibleSummaryText.Getter);
    *(undefined1 *)&pFVar19->_padding_ = 1;
    if (local_1848 == '\0') goto LAB_142859f12;
  }
  FAccessibleWidgetData::~FAccessibleWidgetData(&local_18b0);
LAB_142859f12:
  pFVar23 = SHorizontalBox::FArguments::FArguments(&local_ce8);
  pFVar24 = ::operator_new(0x58);
  local_18f8 = pFVar36;
  if (pFVar24 != (FSlot *)0x0) {
    *(undefined8 *)pFVar24 = 0;
    *(undefined8 *)&pFVar24->field_0x8 = 0;
    *(undefined8 *)&pFVar24->field_0x10 = 0;
    *(undefined8 *)&pFVar24->field_0x18 = 0;
    *(undefined8 *)&pFVar24->field_0x20 = 0;
    *(undefined8 *)&pFVar24->field_0x28 = 0;
    *(undefined8 *)&pFVar24->field_0x30 = 0;
    *(undefined8 *)&pFVar24->field_0x38 = 0;
    *(undefined8 *)&pFVar24->field_0x40 = 0;
    *(undefined8 *)&pFVar24->field_0x48 = 0;
    *(undefined8 *)&pFVar24->field_0x50 = 0;
    local_18f8 = (FSlotArguments *)SHorizontalBox::FSlot::FSlot(pFVar24);
  }
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_fd8,(FSlot *)&local_18f8);
  this->ButtonContentSlot = local_fd8[0];
  local_1820.Value = 1.0;
  local_1820.Getter._16_8_ = 0;
  local_1820.bIsSet = true;
  local_1820.Getter._0_8_ = 0;
  local_1820.Getter._8_8_ = 0;
  pFVar25 = SHorizontalBox::FSlot::FSlotArguments::FillWidth
                      ((FSlotArguments *)local_fd8,&local_1820);
  puVar2 = &pFVar25->field_0x48;
  if (local_1980 != (EHorizontalAlignment *)puVar2) {
    *(EHorizontalAlignment *)puVar2 = param_1->_HAlign;
    pFVar25->field_0x4c = 1;
  }
  pFVar34 = pFVar36;
  if (puVar2 != (undefined1 *)0x0) {
    pFVar34 = pFVar25;
  }
  if (local_1978 != (EVerticalAlignment *)&pFVar34->field_0x50) {
    *(EVerticalAlignment *)&pFVar34->field_0x50 = param_1->_VAlign;
    pFVar34->field_0x54 = 1;
  }
  local_1a68.ReferenceController =
       (param_1->_ButtonContent).Widget.SharedReferenceCount.ReferenceController;
  pFVar25 = pFVar36;
  if (pFVar34 != (FSlotArguments *)0xffffffffffffffb8) {
    pFVar25 = pFVar34;
  }
  local_1a70 = (param_1->_ButtonContent).Widget.Object;
  if (local_1a68.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1a68.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_1a68.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((SWidget **)&pFVar25->field_0x8 != &local_1a70) {
    *(SWidget **)&pFVar25->field_0x8 = local_1a70;
    local_1a70 = (SWidget *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar25->field_0x10,&local_1a68);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1a68.ReferenceController);
  local_19c0 = SHorizontalBox::FArguments::operator+(pFVar23,pFVar25);
  pFVar24 = ::operator_new(0x58);
  local_18f0 = pFVar36;
  if (pFVar24 != (FSlot *)0x0) {
    *(undefined8 *)pFVar24 = 0;
    *(undefined8 *)&pFVar24->field_0x8 = 0;
    *(undefined8 *)&pFVar24->field_0x10 = 0;
    *(undefined8 *)&pFVar24->field_0x18 = 0;
    *(undefined8 *)&pFVar24->field_0x20 = 0;
    *(undefined8 *)&pFVar24->field_0x28 = 0;
    *(undefined8 *)&pFVar24->field_0x30 = 0;
    *(undefined8 *)&pFVar24->field_0x38 = 0;
    *(undefined8 *)&pFVar24->field_0x40 = 0;
    *(undefined8 *)&pFVar24->field_0x48 = 0;
    *(undefined8 *)&pFVar24->field_0x50 = 0;
    local_18f0 = (FSlotArguments *)SHorizontalBox::FSlot::FSlot(pFVar24);
  }
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_1400,(FSlot *)&local_18f0);
  pFVar26 = (FSizeParam *)FAuto::FAuto((FAuto *)local_1460);
  TOptional<FSizeParam>::operator=(&local_13a8,pFVar26);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1430);
  if ((void *)local_1430._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1430._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1430);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1450);
  if ((void *)local_1450._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1450._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1450);
  local_13b8 = 3;
  local_13b4 = 1;
  if (param_1->_HasDownArrow == false) {
    local_13b0 = 2;
    local_1530 = 0;
    uStack_1528 = 0;
    puVar20 = &local_1530;
  }
  else {
    pFVar5 = param_1->_ComboButtonStyle;
    local_13b0 = (uint)(pFVar5->DownArrowAlign).Value;
    puVar20 = &local_1520;
    local_1520._0_4_ = (pFVar5->DownArrowPadding).Left;
    local_1520._4_4_ = (pFVar5->DownArrowPadding).Top;
    uStack_1518._0_4_ = (pFVar5->DownArrowPadding).Right;
    uStack_1518._4_4_ = (pFVar5->DownArrowPadding).Bottom;
  }
  local_13ac = 1;
  local_1798 = *puVar20;
  uStack_1790 = puVar20[1];
  local_1788 = 1;
  local_1770 = 0;
  local_13d8 = 1;
  local_1780 = (undefined1  [8])0x0;
  pvStack_1778 = (void *)0x0;
  local_13f0[1].ReferenceController = (TReferenceControllerBase<1> *)local_1798;
  local_13f0[2].ReferenceController = (TReferenceControllerBase<1> *)uStack_1790;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            (&local_13d0,(TDelegateBase<FNotThreadSafeDelegateMode> *)local_1780);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1780);
  if (pvStack_1778 != (void *)0x0) {
    FMemory::Free(pvStack_1778);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1780);
  pFVar27 = SOverlay::FArguments::FArguments(&local_ef0);
  pFVar25 = (FSlotArguments *)SOverlay::Slot(&local_12b8,0);
  if (local_1970 != (undefined4 *)&pFVar25->field_0x50) {
    *(undefined4 *)&pFVar25->field_0x50 = 1;
    pFVar25->field_0x54 = 1;
  }
  pFVar34 = pFVar36;
  if (pFVar25 != (FSlotArguments *)0xffffffffffffffb8) {
    pFVar34 = pFVar25;
  }
  local_1768.Value.Top = *(float *)&(param_1->_ComboButtonStyle->ShadowOffset).field_0x4;
  local_1768.Value.Left = *(float *)&param_1->_ComboButtonStyle->ShadowOffset;
  local_1768.Getter._0_8_ = 0;
  local_1768.Getter._8_8_ = 0;
  local_1768.Value.Right = 0.0;
  local_1768.Value.Bottom = 0.0;
  local_1768.bIsSet = true;
  local_1768.Getter._16_8_ = 0;
  pFVar28 = TPaddingWidgetSlotMixin<SOverlay::FOverlaySlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)&pFVar34->field_0x18,&local_1768);
  pFVar29 = SImage::FArguments::FArguments(&local_838);
  if ((param_1->_HasDownArrow == false) ||
     (local_1840.Value = EVisibility::Visible, (char)local_res8.ComparisonIndex.Value == '\0')) {
    local_1840.Value = EVisibility::Collapsed;
  }
  local_1840.bIsSet = true;
  local_1840.Getter._16_8_ = 0;
  local_1840.Getter._0_8_ = 0;
  local_1840.Getter._8_8_ = 0;
  pFVar29 = TSlateBaseNamedArgs<SImage>::Visibility
                      ((TSlateBaseNamedArgs<SImage> *)pFVar29,&local_1840);
  local_16a0.Value = &param_1->_ComboButtonStyle->DownArrowImage;
  local_16a0.bIsSet = true;
  local_16a0.Getter._0_8_ = 0;
  local_16a0.Getter._8_8_ = 0;
  local_16a0.Getter._16_8_ = 0;
  pFVar29 = SImage::FArguments::Image(pFVar29,&local_16a0);
  local_1638._0_8_ = *(undefined8 *)&(param_1->_ComboButtonStyle->ShadowColorAndOpacity).field0_0x0;
  local_1638._8_8_ =
       *(undefined8 *)
        ((longlong)&(param_1->_ComboButtonStyle->ShadowColorAndOpacity).field0_0x0 + 8);
  local_1628 = 0;
  local_1624 = 1;
  local_1620 = 0;
  uStack_1618 = 0;
  local_1610 = 0;
  pFVar29 = SImage::FArguments::ColorAndOpacity(pFVar29,(TAttribute<FSlateColor> *)&local_1638._s_0)
  ;
  FLLMScope::FLLMScope(&local_1ad4,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_18e8,&local_res8,true);
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
            (&local_1708,"SImage",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SComboButton.cpp"
             ,0x47,local_res10);
  FMemScope::~FMemScope(&local_18e8);
  FLLMScope::~FLLMScope(&local_1ad4);
  if (local_1708._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1708._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1708._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_1540 = (this->ShadowImage).Object;
  pTStack_1538 = (this->ShadowImage).SharedReferenceCount.ReferenceController;
  (this->ShadowImage).Object = local_1708._Widget.Object;
  (this->ShadowImage).SharedReferenceCount.ReferenceController =
       local_1708._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1538);
  pTVar30 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1708,&local_16f0,pFVar29);
  local_1a98 = pTVar30->Object;
  local_1aa8 = (pTVar30->SharedReferenceCount).ReferenceController;
  if (local_1aa8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_1aa8->SharedReferenceCount = (atomic<int>)((int)local_1aa8->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    local_1aa8->SharedReferenceCount = (atomic<int>)((int)local_1aa8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1a90.ReferenceController = local_1aa8;
  if ((SImage **)&pFVar28->_padding_ != &local_1a98) {
    pFVar28->_padding_ = (longlong)local_1a98;
    local_1a98 = (SImage *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar28->_padding_,&local_1a90);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1a90.ReferenceController);
  pFVar27 = SOverlay::FArguments::operator+(pFVar27,pFVar28);
  pFVar25 = (FSlotArguments *)SOverlay::Slot((FSlotArguments *)local_1318,0);
  if (local_1968 != (undefined4 *)&pFVar25->field_0x50) {
    *(undefined4 *)&pFVar25->field_0x50 = 1;
    pFVar25->field_0x54 = 1;
  }
  if (pFVar25 != (FSlotArguments *)0xffffffffffffffb8) {
    pFVar36 = pFVar25;
  }
  pFVar29 = SImage::FArguments::FArguments(&local_ae0);
  local_1800.bIsSet = true;
  local_1800.Value = EVisibility::Collapsed;
  if (param_1->_HasDownArrow != false) {
    local_1800.Value = EVisibility::Visible;
  }
  local_1800.Getter._0_8_ = 0;
  local_1800.Getter._8_8_ = 0;
  local_1800.Getter._16_8_ = 0;
  pFVar29 = TSlateBaseNamedArgs<SImage>::Visibility
                      ((TSlateBaseNamedArgs<SImage> *)pFVar29,&local_1800);
  local_1678.Value = &param_1->_ComboButtonStyle->DownArrowImage;
  local_1678.bIsSet = true;
  local_1678.Getter._0_8_ = 0;
  local_1678.Getter._8_8_ = 0;
  local_1678.Getter._16_8_ = 0;
  pFVar29 = SImage::FArguments::Image(pFVar29,&local_1678);
  local_15a8 = CONCAT22(local_15a8._2_2_,2);
  local_15f8 = local_15a8;
  local_1608._0_8_ = ___xmm_3f8000003f800000000000003f800000;
  local_1608._8_8_ = _UNK_15090c6d8;
  local_15f4 = 1;
  local_15f0 = 0;
  uStack_15e8 = 0;
  local_15e0 = 0;
  pFVar29 = SImage::FArguments::ColorAndOpacity(pFVar29,(TAttribute<FSlateColor> *)&local_1608._s_0)
  ;
  FLLMScope::FLLMScope(&local_1ad0,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_19e0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_19d8,&local_19e0,true);
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
            (&local_17b0,"SImage",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SComboButton.cpp"
             ,0x4f,local_res18);
  FMemScope::~FMemScope(&local_19d8);
  FLLMScope::~FLLMScope(&local_1ad0);
  if (local_17b0._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_17b0._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_17b0._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_1480 = (this->ForegroundArrowImage).Object;
  pTStack_1478 = (this->ForegroundArrowImage).SharedReferenceCount.ReferenceController;
  (this->ForegroundArrowImage).Object = local_17b0._Widget.Object;
  (this->ForegroundArrowImage).SharedReferenceCount.ReferenceController =
       local_17b0._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1478);
  pTVar30 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_17b0,&local_14e8,pFVar29);
  pTVar6 = (pTVar30->SharedReferenceCount).ReferenceController;
  local_1a88 = pTVar30->Object;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1a80.ReferenceController = pTVar6;
  if ((SImage **)&pFVar36->field_0x8 != &local_1a88) {
    *(SImage **)&pFVar36->field_0x8 = local_1a88;
    local_1a88 = (SImage *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar36->field_0x10,&local_1a80);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1a80.ReferenceController);
  pFVar27 = SOverlay::FArguments::operator+(pFVar27,(FSlotArguments *)pFVar36);
  FLLMScope::FLLMScope(&local_1acc,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_19d0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_19c8,&local_19d0,true);
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>
            (&local_1498,"SOverlay",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SComboButton.cpp"
             ,0x41,local_res20);
  FMemScope::~FMemScope(&local_19c8);
  FLLMScope::~FLLMScope(&local_1acc);
  pTVar31 = TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1498,&local_14b8,pFVar27);
  pTVar7 = (pTVar31->SharedReferenceCount).ReferenceController;
  local_1400._8_8_ = pTVar31->Object;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1a60 = 0;
  local_1a58.ReferenceController = pTVar7;
  SharedPointerInternals::FSharedReferencer<1>::operator=
            ((FSharedReferencer<1> *)(local_1400 + 0x10),&local_1a58);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1a58.ReferenceController);
  pFVar23 = SHorizontalBox::FArguments::operator+(local_19c0,(FSlotArguments *)local_1400);
  FLLMScope::FLLMScope(&local_1ac8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_19b8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_19b0,&local_19b8,true);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
            (&local_17c8,"SHorizontalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SComboButton.cpp"
             ,0x31,&local_1ad8);
  FMemScope::~FMemScope(&local_19b0);
  FLLMScope::~FLLMScope(&local_1ac8);
  if (local_17c8._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_17c8._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_17c8._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_1470 = (this->HBox).Object;
  pTStack_1468 = (this->HBox).SharedReferenceCount.ReferenceController;
  (this->HBox).Object = local_17c8._Widget.Object;
  (this->HBox).SharedReferenceCount.ReferenceController =
       local_17c8._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1468);
  pTVar32 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_17c8,&local_14c8,pFVar23);
  pFVar19 = local_19a8;
  pTVar9 = (pTVar32->SharedReferenceCount).ReferenceController;
  local_1a50 = pTVar32->Object;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar10 = (local_19a8->_Content).Widget.SharedReferenceCount.ReferenceController;
  (local_19a8->_Content).Widget.Object = (SWidget *)local_1a50;
  (local_19a8->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar9;
  pTStack_1a48 = pTVar9;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  FLLMScope::FLLMScope(&local_1ac4,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_19a0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1998,&local_19a0,true);
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>
            (&local_17e0,"SButton",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SComboButton.cpp"
             ,0x21,&local_1ad7);
  FMemScope::~FMemScope(&local_1998);
  FLLMScope::~FLLMScope(&local_1ac4);
  if (local_17e0._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_17e0._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_17e0._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_14a8 = (this->ButtonPtr).Object;
  pTStack_14a0 = (this->ButtonPtr).SharedReferenceCount.ReferenceController;
  (this->ButtonPtr).Object = local_17e0._Widget.Object;
  (this->ButtonPtr).SharedReferenceCount.ReferenceController =
       local_17e0._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_14a0);
  pTVar33 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_17e0,&local_14d8,pFVar19);
  pTVar10 = (pTVar33->SharedReferenceCount).ReferenceController;
  local_1a40 = pTVar33->Object;
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar12 = (local_1a78->_Content).Widget.SharedReferenceCount.ReferenceController;
  (local_1a78->_Content).Widget.Object = (SWidget *)local_1a40;
  (local_1a78->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar10;
  pTStack_1a38 = pTVar10;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  SMenuAnchor::Construct((SMenuAnchor *)this,local_1a78);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_14d8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_17e0._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_14c8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_17c8._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_14b8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1498._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_14e8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_17b0._Widget.SharedReferenceCount.ReferenceController);
  SImage::FArguments::~FArguments(&local_ae0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_1318 + 0x30));
  if (local_12e0 != (void *)0x0) {
    FMemory::Free(local_12e0);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)(local_1318 + 0x30));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_1318._16_8_);
  if ((undefined8 *)local_1318._0_8_ != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)local_1318._0_8_)(local_1318._0_8_,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1aa8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)
             CONCAT44(local_16f0.SharedReferenceCount.ReferenceController._4_4_,
                      local_16f0.SharedReferenceCount.ReferenceController._0_4_));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1708._Widget.SharedReferenceCount.ReferenceController);
  SImage::FArguments::~FArguments(&local_838);
  SOverlay::FOverlaySlot::FSlotArguments::~FSlotArguments(&local_12b8);
  DestructItems<SOverlay::FOverlaySlot::FSlotArguments,int>
            ((FSlotArguments *)local_ef0._Slots.AllocatorInstance.Data,local_ef0._Slots.ArrayNum);
  if ((FSlotArguments *)local_ef0._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_ef0._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_ef0);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments((FSlotArguments *)local_1400);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments((FSlotArguments *)local_fd8);
  DestructItems<SHorizontalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_ce8._Slots.AllocatorInstance.Data,local_ce8._Slots.ArrayNum);
  if ((FSlotArguments *)local_ce8._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_ce8._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_ce8);
  FAccessibleWidgetData::~FAccessibleWidgetData(&local_1960);
  if (bVar39) {
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1720);
    if (pvStack_1718 != (void *)0x0) {
      FMemory::Free(pvStack_1718);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_1720);
  }
  if (!bVar39) {
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_16c8);
    if (pvStack_16c0 != (void *)0x0) {
      FMemory::Free(pvStack_16c0);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_16c8);
  }
  SButton::FArguments::~FArguments(&local_590);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_ff8);
  if ((void *)local_ff8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_ff8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_ff8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1018);
  if ((void *)local_1018._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1018._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1018);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1030);
  if ((void *)local_1030._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1030._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1030);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_1258._544_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_1258._512_8_);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_1258);
  pcVar11 = *(code **)(this->_padding_ + 0x248);
  local_16b0 = (param_1->_MenuContent).Widget.Object;
  local_16a8 = (param_1->_MenuContent).Widget.SharedReferenceCount.ReferenceController;
  if (local_16a8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_16a8->SharedReferenceCount = (atomic<int>)((int)local_16a8->SharedReferenceCount + 1);
    UNLOCK();
  }
  (*pcVar11)(this,&local_16b0);
  return;
}

// GetFilteredToolTipText @ 142876630

/* WARNING: Enum "Type": Some values do not have unique names */

FText * __thiscall
SComboButton::GetFilteredToolTipText
          (SComboButton *this,FText *__return_storage_ptr__,TAttribute<FText> *param_1)

{
  ITextData *pIVar1;
  void *pvVar2;
  bool bVar3;
  FText *pFVar4;
  undefined1 local_res20 [8];
  
  bVar3 = SMenuAnchor::IsOpen((SMenuAnchor *)this);
  if (bVar3) {
    pFVar4 = FText::GetEmpty();
  }
  else {
    pFVar4 = TAttribute<FText>::Get(param_1);
  }
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar1 = (pFVar4->TextData).Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res20);
  }
  __return_storage_ptr__->Flags = pFVar4->Flags;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  pvVar2 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&param_1->Getter);
  pIVar1 = (param_1->Value).TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  return __return_storage_ptr__;
}

// OnButtonClicked @ 142884e10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall SComboButton::OnButtonClicked(SComboButton *this,FReply *__return_storage_ptr__)

{
  code *pcVar1;
  atomic<int> aVar2;
  FSharedReferencer<1> FVar3;
  bool bVar4;
  char cVar5;
  atomic<int> aVar6;
  int iVar7;
  SWidget *pSVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  FReply *pFVar11;
  FReadAccessScope *this_00;
  FSharedReferencer<1> FVar12;
  SWidget *pSVar13;
  SWidget *local_98;
  FSharedReferencer<1> FStack_90;
  undefined8 local_88;
  FSharedReferencer<1> local_80;
  undefined8 local_78;
  FSharedReferencer<1> local_70;
  TSharedRef<SWidget,1> local_68;
  undefined1 local_58 [8];
  TReferenceControllerBase<1> *local_50;
  FReadAccessScope local_48;
  FReadAccessScope local_30;
  
  pSVar13 = (SWidget *)0x0;
  pcVar1 = *(code **)(this->_padding_ + 0x250);
  bVar4 = SMenuAnchor::ShouldOpenDueToClick((SMenuAnchor *)this);
  (*pcVar1)(this,bVar4,0);
  bVar4 = SMenuAnchor::IsOpen((SMenuAnchor *)this);
  if (bVar4) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnComboBoxOpened,
               &local_48);
    if (((*(int *)&(this->OnComboBoxOpened).field_0x10 == 0) ||
        (plVar10 = *(longlong **)&(this->OnComboBoxOpened).field_0x8, plVar10 == (longlong *)0x0))
       || (cVar5 = (**(code **)(*plVar10 + 0x38))(), cVar5 == '\0')) {
      this_00 = &local_48;
    }
    else {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_48);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnComboBoxOpened,
                 &local_30);
      if (*(int *)&(this->OnComboBoxOpened).field_0x10 == 0) {
        (**(code **)(_DAT_00000000 + 0x60))();
        this_00 = &local_30;
      }
      else {
        (**(code **)(**(longlong **)&(this->OnComboBoxOpened).field_0x8 + 0x60))();
        this_00 = &local_30;
      }
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (this_00);
  }
  FReply::FReply(__return_storage_ptr__,true);
  bVar4 = SMenuAnchor::IsOpen((SMenuAnchor *)this);
  if (!bVar4) {
    return __return_storage_ptr__;
  }
  FStack_90.ReferenceController = (this->WidgetToFocusPtr).WeakReferenceCount.ReferenceController;
  local_98 = (SWidget *)0x0;
  if (FStack_90.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = (FStack_90.ReferenceController)->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        FStack_90.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142884f37;
      }
      LOCK();
      aVar6 = (FStack_90.ReferenceController)->SharedReferenceCount;
      bVar4 = aVar2 == aVar6;
      if (bVar4) {
        (FStack_90.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar6 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar6;
    } while (!bVar4);
    if (FStack_90.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      local_98 = (this->WidgetToFocusPtr).Object;
    }
  }
LAB_142884f37:
  if (this->bIsFocusable != false) {
    bVar4 = false;
    FVar12.ReferenceController = FStack_90.ReferenceController;
    if (local_98 != (SWidget *)0x0) goto LAB_14288508f;
    if (this->_padding_ != 0) {
      pSVar8 = TSharedPtr<SWidget,1>::operator->((TSharedPtr<SWidget,1> *)&this->_padding_);
      puVar9 = (undefined8 *)(**(code **)(pSVar8->_padding_ + 0x180))(pSVar8);
      iVar7 = (**(code **)*puVar9)(puVar9);
      if (iVar7 == 1) {
        pSVar8 = TSharedPtr<SWidget,1>::operator->((TSharedPtr<SWidget,1> *)&this->_padding_);
        plVar10 = (longlong *)(**(code **)(pSVar8->_padding_ + 0x180))(pSVar8);
        plVar10 = (longlong *)(**(code **)(*plVar10 + 0x10))(plVar10,local_58,0);
        local_70.ReferenceController = (TReferenceControllerBase<1> *)plVar10[1];
        local_98 = (SWidget *)*plVar10;
        if (local_70.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_70.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(local_70.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_78 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_90,&local_70);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_70.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_50);
        if (local_98 != (SWidget *)0x0) goto LAB_14288508c;
      }
    }
    FVar3.ReferenceController = FStack_90.ReferenceController;
    FVar12.ReferenceController = (TReferenceControllerBase<1> *)this->_padding_;
    local_98 = (SWidget *)this->_padding_;
    if (FVar12.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar12.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar12.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FStack_90.ReferenceController = FVar12.ReferenceController;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar3.ReferenceController);
    bVar4 = false;
    if (local_98 != (SWidget *)0x0) goto LAB_14288508f;
    local_80.ReferenceController = (this->ContentWidgetPtr).WeakReferenceCount.ReferenceController;
    if (local_80.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      aVar2 = (local_80.ReferenceController)->SharedReferenceCount;
      do {
        if (aVar2 == (atomic<int>)0x0) {
          local_80.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          goto LAB_142885066;
        }
        LOCK();
        aVar6 = (local_80.ReferenceController)->SharedReferenceCount;
        bVar4 = aVar2 == aVar6;
        if (bVar4) {
          (local_80.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
          aVar6 = aVar2;
        }
        UNLOCK();
        aVar2 = aVar6;
      } while (!bVar4);
      pSVar13 = (this->ContentWidgetPtr).Object;
    }
LAB_142885066:
    local_88 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_90,&local_80);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_80.ReferenceController);
    local_98 = pSVar13;
  }
LAB_14288508c:
  bVar4 = local_98 == (SWidget *)0x0;
  FVar12.ReferenceController = FStack_90.ReferenceController;
LAB_14288508f:
  if (local_98 != (SWidget *)0x0) {
    if ((bVar4) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      pFVar11 = (FReply *)(*pcVar1)();
      return pFVar11;
    }
    local_68.Object = local_98;
    local_68.SharedReferenceCount.ReferenceController = FStack_90.ReferenceController;
    if (FVar12.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar12.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar12.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((local_98 == (SWidget *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      pFVar11 = (FReply *)(*pcVar1)();
      return pFVar11;
    }
    FReply::SetUserFocus(__return_storage_ptr__,&local_68,SetDirectly,false);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar12.ReferenceController);
  return __return_storage_ptr__;
}

// OnKeyDown @ 142886d90

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SComboButton::OnKeyDown
          (SComboButton *this,FReply *__return_storage_ptr__,FGeometry *param_1,FKeyEvent *param_2)

{
  char cVar1;
  FSlateApplication *pFVar2;
  FReply *pFVar3;
  FReply local_c8;
  
  FReply::FReply(__return_storage_ptr__,false);
  pFVar2 = FSlateApplication::Get();
  cVar1 = (**(code **)(*(longlong *)pFVar2 + 0xb0))(pFVar2,param_2);
  if (cVar1 == '\0') {
    pFVar3 = (FReply *)(**(code **)(this->_padding_ + 600))(this,&local_c8);
    FReply::operator=(__return_storage_ptr__,pFVar3);
    FReply::~FReply(&local_c8);
  }
  return __return_storage_ptr__;
}

// SetButtonContentPadding @ 142895840

void __thiscall SComboButton::SetButtonContentPadding(SComboButton *this,FMargin *param_1)

{
  SButton *pSVar1;
  code *pcVar2;
  bool bVar3;
  FDestructionSentinel local_58;
  undefined1 local_40 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  if ((this->ButtonPtr).Object == (SButton *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ButtonPtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SComboButton.cpp"
                       ,0xc2,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((this->ButtonPtr).Object == (SButton *)0x0) {
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
  local_40._0_4_ = param_1->Left;
  local_40._4_4_ = param_1->Top;
  local_40._8_4_ = param_1->Right;
  local_40._12_4_ = param_1->Bottom;
  pSVar1 = (this->ButtonPtr).Object;
  local_40[0x10] = true;
  local_18 = 0;
  local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_20.Data = (FScriptContainerElement *)0x0;
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&pSVar1->ContentPaddingAttribute,(SWidget *)pSVar1,(TAttribute<FMargin> *)local_40,
           None);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_28,(FWriteAccessScope *)&local_58);
  if (((int)local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
    local_18 = local_18 & 0xffffffff00000000;
  }
  if (local_58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
  }
  if (FStack_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_20.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_28.AccessDetector);
  return;
}

// SetHasDownArrow @ 142896980

void __thiscall SComboButton::SetHasDownArrow(SComboButton *this,bool param_1)

{
  SHorizontalBox *pSVar1;
  FComboButtonStyle *pFVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  FSlot *pFVar6;
  undefined8 *puVar7;
  uint uVar8;
  ISlateAttributeContainer *pIVar9;
  undefined1 local_b8 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_a0;
  ForAnyElementType FStack_98;
  ulonglong local_90;
  TAttribute<EVisibility> local_88;
  TAttribute<EVisibility> local_68;
  FDestructionSentinel local_48;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  if ((*(float *)&this->Style->ShadowOffset == 0.0) &&
     (*(float *)&(this->Style->ShadowOffset).field_0x4 == 0.0)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  pSVar1 = (this->HBox).Object;
  if ((pSVar1 == (SHorizontalBox *)0x0) || (*(int *)&pSVar1->field_0x240 < 2)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("HBox && HBox->NumSlots() >= 2",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SComboButton.cpp"
                       ,0xca,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if ((this->HBox).Object == (SHorizontalBox *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar6 = SHorizontalBox::GetSlot((this->HBox).Object,1);
  if (param_1) {
    uVar8 = (uint)(this->Style->DownArrowAlign).Value;
  }
  else {
    uVar8 = 2;
  }
  if (*(uint *)&pFVar6->field_0x3c != uVar8) {
    *(uint *)&pFVar6->field_0x3c = uVar8;
    FSlotBase::Invalidate((FSlotBase *)pFVar6,Layout);
  }
  if ((this->HBox).Object == (SHorizontalBox *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar6 = SHorizontalBox::GetSlot((this->HBox).Object,1);
  if (param_1) {
    pFVar2 = this->Style;
    puVar7 = &local_30;
    local_30._0_4_ = (pFVar2->DownArrowPadding).Left;
    local_30._4_4_ = (pFVar2->DownArrowPadding).Top;
    uStack_28._0_4_ = (pFVar2->DownArrowPadding).Right;
    uStack_28._4_4_ = (pFVar2->DownArrowPadding).Bottom;
  }
  else {
    puVar7 = &local_20;
    local_20 = 0;
    uStack_18 = 0;
  }
  local_b8._0_8_ = *puVar7;
  local_b8._8_8_ = puVar7[1];
  local_b8[0x10] = true;
  local_90 = 0;
  pIVar9 = (ISlateAttributeContainer *)&pFVar6->field_0x20;
  local_a0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_98.Data = (FScriptContainerElement *)0x0;
  if (&pFVar6->field_0x28 == (undefined1 *)0x0) {
    pIVar9 = (ISlateAttributeContainer *)&DAT_00000020;
  }
  SlateAttributePrivate::
  TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
  ::Assign((TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
            *)&pFVar6->field_0x28,pIVar9,(TAttribute<FMargin> *)local_b8,None);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_a0,(FWriteAccessScope *)&local_48);
  if (((int)local_90 != 0) && (FStack_98.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_98.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_98,0,0,0x10);
    local_90 = local_90 & 0xffffffff00000000;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  if (FStack_98.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_98.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_a0.AccessDetector);
  if ((this->ForegroundArrowImage).Object == (SImage *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ForegroundArrowImage",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SComboButton.cpp"
                       ,0xce,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((this->ForegroundArrowImage).Object == (SImage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
  local_88.bIsSet = true;
  local_88.Getter._0_8_ = 0;
  local_88.Getter._8_8_ = 0;
  local_88.Value.Value.Value = EVisibility::Collapsed.Value.Value;
  if (param_1) {
    local_88.Value.Value.Value = EVisibility::Visible.Value.Value;
  }
  local_88.Getter._16_8_ = 0;
  SLeafWidget::SetVisibility((SLeafWidget *)(this->ForegroundArrowImage).Object,&local_88);
  if ((this->ShadowImage).Object == (SImage *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ShadowImage",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SComboButton.cpp"
                       ,0xd0,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((this->ShadowImage).Object == (SImage *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
  if ((!param_1) || (local_68.Value.Value.Value = EVisibility::Visible.Value.Value, !bVar4)) {
    local_68.Value.Value.Value = EVisibility::Collapsed.Value.Value;
  }
  local_68.bIsSet = true;
  local_68.Getter._16_8_ = 0;
  local_68.Getter._0_8_ = 0;
  local_68.Getter._8_8_ = 0;
  SLeafWidget::SetVisibility((SLeafWidget *)(this->ShadowImage).Object,&local_68);
  return;
}

// SetMenuContent @ 1428978a0

void __thiscall SComboButton::SetMenuContent(SComboButton *this,TSharedRef<SWidget,1> *param_1)

{
  longlong *plVar1;
  TReferenceControllerBase<1> *pTVar2;
  SWidget *pSVar3;
  longlong lVar4;
  longlong lVar5;
  TReferenceControllerBase<1> *pTVar6;
  FSharedReferencer<1> FVar7;
  FArguments *pFVar8;
  TSharedRef<SBorder,1> *pTVar9;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res10 [2];
  FName local_res18;
  FMemScope local_res20;
  FDestructionSentinel local_4a8;
  FSlateBrush *local_490;
  undefined1 local_488;
  undefined1 local_480 [8];
  ForAnyElementType FStack_478;
  ulonglong local_470;
  SBorder *local_468;
  FSharedReferencer<1> local_460;
  undefined8 local_458;
  undefined8 uStack_450;
  undefined1 local_448;
  undefined1 local_440 [8];
  ForAnyElementType FStack_438;
  ulonglong local_430;
  TSharedRef<SBorder,1> local_428;
  FArguments local_418;
  
  pFVar8 = SBorder::FArguments::FArguments(&local_418);
  local_490 = this->MenuBorderBrush;
  local_488 = 1;
  local_480 = (undefined1  [8])0x0;
  FStack_478.Data = (FScriptContainerElement *)0x0;
  local_470 = 0;
  (pFVar8->_BorderImage).Value = local_490;
  (pFVar8->_BorderImage).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar8->_BorderImage).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_480);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_480,
             (FWriteAccessScope *)&local_4a8);
  if (((int)local_470 != 0) && (FStack_478.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_478.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_478,0,0,0x10);
    local_470 = local_470 & 0xffffffff00000000;
  }
  if (local_4a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4a8.Accessor,&local_4a8);
  }
  if (FStack_478.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_478.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_480);
  local_458._0_4_ = (this->MenuBorderPadding).Left;
  local_458._4_4_ = (this->MenuBorderPadding).Top;
  uStack_450._0_4_ = (this->MenuBorderPadding).Right;
  uStack_450._4_4_ = (this->MenuBorderPadding).Bottom;
  local_448 = 1;
  local_430 = 0;
  local_440 = (undefined1  [8])0x0;
  FStack_438.Data = (FScriptContainerElement *)0x0;
  (pFVar8->_Padding).Value.Left = (float)(undefined4)local_458;
  (pFVar8->_Padding).Value.Top = (float)local_458._4_4_;
  (pFVar8->_Padding).Value.Right = (float)(undefined4)uStack_450;
  (pFVar8->_Padding).Value.Bottom = (float)uStack_450._4_4_;
  (pFVar8->_Padding).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar8->_Padding).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_440);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_440,
             (FWriteAccessScope *)&local_4a8);
  if (((int)local_430 != 0) && (FStack_438.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_438.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_438,0,0,0x10);
    local_430 = local_430 & 0xffffffff00000000;
  }
  if (local_4a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4a8.Accessor,&local_4a8);
  }
  if (FStack_438.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_438.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_440);
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  pSVar3 = param_1->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar6 = (pFVar8->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar8->_Content).Widget.Object = pSVar3;
  (pFVar8->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_res20,&local_res18,true);
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>
            ((TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> *)&local_4a8,"SBorder",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SComboButton.cpp"
             ,0xb3,local_res8);
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res10);
  pTVar9 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                     ((TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> *)&local_4a8,&local_428,
                      pFVar8);
  local_460.ReferenceController = (pTVar9->SharedReferenceCount).ReferenceController;
  local_468 = pTVar9->Object;
  if (local_460.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_460.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_460.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  plVar1 = &this->_padding_;
  if ((SBorder **)plVar1 != &local_468) {
    *plVar1 = (longlong)local_468;
    local_468 = (SBorder *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&this->_padding_,&local_460);
  }
  FVar7.ReferenceController = local_460.ReferenceController;
  lVar4 = this->_padding_;
  lVar5 = *plVar1;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  pTVar2 = (TReferenceControllerBase<1> *)this->_padding_;
  this->_padding_ = lVar5;
  this->_padding_ = lVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar7.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_428.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_4a8.Accessor);
  SBorder::FArguments::~FArguments(&local_418);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetOnGetMenuContent @ 142897dc0

void __thiscall
SComboButton::SetOnGetMenuContent
          (SComboButton *this,
          TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy> *param_1)

{
  TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>::operator=
            ((TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy> *)
             &this->_padding_,param_1);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
  if (*(void **)&param_1->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_1->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_1);
  return;
}

// SComboButton @ 1428b9aa0

/* WARNING: Enum "Type": Some values do not have unique names */

SComboButton * __thiscall SComboButton::SComboButton(SComboButton *this)

{
  SMenuAnchor::SMenuAnchor((SMenuAnchor *)this);
  this->_padding_ = (longlong)&_vftable__for__SPanel__;
  this->_padding_ = (longlong)&_vftable__for__IMenuHost__;
  *(undefined8 *)&this->OnComboBoxOpened = 0;
  *(undefined8 *)&(this->OnComboBoxOpened).field_0x8 = 0;
  *(undefined4 *)&(this->OnComboBoxOpened).field_0x10 = 0;
  (this->WidgetToFocusPtr).Object = (SWidget *)0x0;
  (this->WidgetToFocusPtr).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->MenuBorderPadding).Left = 0.0;
  (this->MenuBorderPadding).Top = 0.0;
  (this->MenuBorderPadding).Right = 0.0;
  (this->MenuBorderPadding).Bottom = 0.0;
  (this->ContentWidgetPtr).Object = (SWidget *)0x0;
  (this->ContentWidgetPtr).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ButtonPtr).Object = (SButton *)0x0;
  (this->ButtonPtr).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->HBox).Object = (SHorizontalBox *)0x0;
  (this->HBox).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->ShadowImage).Object = (SImage *)0x0;
  (this->ShadowImage).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->ForegroundArrowImage).Object = (SImage *)0x0;
  (this->ForegroundArrowImage).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

