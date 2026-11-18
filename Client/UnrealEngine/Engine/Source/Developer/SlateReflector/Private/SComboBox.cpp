// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateReflector
// Functions: 42

// ~SComboBox<TSharedPtr<int,1>_> @ 142e0d5c0

void __thiscall
SComboBox<TSharedPtr<int,1>_>::~SComboBox<TSharedPtr<int,1>_>(SComboBox<TSharedPtr<int,1>_> *this)

{
  void *pvVar1;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ComboBoxMenuContent).SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnGenerateWidget);
  pvVar1 = *(void **)&(this->OnGenerateWidget).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnGenerateWidget);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnComboBoxOpening);
  pvVar1 = *(void **)&(this->OnComboBoxOpening).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnComboBoxOpening);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CustomScrollbar).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ComboListView).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SelectedItem).SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnSelectionChanged);
  pvVar1 = *(void **)&(this->OnSelectionChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSelectionChanged);
  SComboButton::~SComboButton((SComboButton *)this);
  return;
}

// ~SComboBox<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> @ 142e0d690

void __thiscall
SComboBox<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>::
~SComboBox<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>
          (SComboBox<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *this)

{
  void *pvVar1;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ComboBoxMenuContent).SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnGenerateWidget);
  pvVar1 = *(void **)&(this->OnGenerateWidget).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnGenerateWidget);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnComboBoxOpening);
  pvVar1 = *(void **)&(this->OnComboBoxOpening).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnComboBoxOpening);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CustomScrollbar).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ComboListView).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SelectedItem).SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnSelectionChanged);
  pvVar1 = *(void **)&(this->OnSelectionChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSelectionChanged);
  SComboButton::~SComboButton((SComboButton *)this);
  return;
}

// ~SComboBox<TSharedPtr<FWidgetReflectorNodeBase,1>_> @ 142e0d760

void __thiscall
SComboBox<TSharedPtr<FWidgetReflectorNodeBase,1>_>::
~SComboBox<TSharedPtr<FWidgetReflectorNodeBase,1>_>
          (SComboBox<TSharedPtr<FWidgetReflectorNodeBase,1>_> *this)

{
  void *pvVar1;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ComboBoxMenuContent).SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnGenerateWidget);
  pvVar1 = *(void **)&(this->OnGenerateWidget).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnGenerateWidget);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnComboBoxOpening);
  pvVar1 = *(void **)&(this->OnComboBoxOpening).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnComboBoxOpening);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CustomScrollbar).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ComboListView).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SelectedItem).SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnSelectionChanged);
  pvVar1 = *(void **)&(this->OnSelectionChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSelectionChanged);
  SComboButton::~SComboButton((SComboButton *)this);
  return;
}

// operator() @ 142e1c870

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`SComboBox<TSharedPtr<int,1>_>::OnMenuOpenChanged'::__l5::<lambda_1>::operator()
          (void *this,FSlateUser *param_1)

{
  bool bVar1;
  TSharedPtr<SWidget_const_,1> local_28;
  TSharedRef<SWidget,1> local_18;
  
  TSharedFromThis<SWidget,1>::AsShared
            ((TSharedFromThis<SWidget,1> *)(*(longlong *)this + 8),&local_18);
  local_28.Object = *(SWidget **)(*(longlong *)this + 0x468);
  local_28.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)(*(longlong *)this + 0x470);
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar1 = FSlateUser::IsWidgetInFocusPath(param_1,&local_28);
  if (bVar1) {
    FSlateUser::SetFocus(param_1,&local_18,SetDirectly);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return;
}

// operator() @ 142e1c900

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`SComboBox<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>::OnMenuOpenChanged'::__l5::
<lambda_1>::operator()(void *this,FSlateUser *param_1)

{
  bool bVar1;
  TSharedPtr<SWidget_const_,1> local_28;
  TSharedRef<SWidget,1> local_18;
  
  TSharedFromThis<SWidget,1>::AsShared
            ((TSharedFromThis<SWidget,1> *)(*(longlong *)this + 8),&local_18);
  local_28.Object = *(SWidget **)(*(longlong *)this + 0x468);
  local_28.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)(*(longlong *)this + 0x470);
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar1 = FSlateUser::IsWidgetInFocusPath(param_1,&local_28);
  if (bVar1) {
    FSlateUser::SetFocus(param_1,&local_18,SetDirectly);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return;
}

// operator() @ 142e1c990

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`SComboBox<TSharedPtr<FWidgetReflectorNodeBase,1>_>::OnMenuOpenChanged'::__l5::<lambda_1>::
operator()(void *this,FSlateUser *param_1)

{
  bool bVar1;
  TSharedPtr<SWidget_const_,1> local_28;
  TSharedRef<SWidget,1> local_18;
  
  TSharedFromThis<SWidget,1>::AsShared
            ((TSharedFromThis<SWidget,1> *)(*(longlong *)this + 8),&local_18);
  local_28.Object = *(SWidget **)(*(longlong *)this + 0x468);
  local_28.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)(*(longlong *)this + 0x470);
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar1 = FSlateUser::IsWidgetInFocusPath(param_1,&local_28);
  if (bVar1) {
    FSlateUser::SetFocus(param_1,&local_18,SetDirectly);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return;
}

// Construct @ 142e321e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Removing unreachable block (ram,0x000142e32901) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SComboBox<TSharedPtr<int,1>_>::Construct(SComboBox<TSharedPtr<int,1>_> *this,FArguments *param_1)

{
  byte *pbVar1;
  TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1> *pTVar2;
  FComboBoxStyle *pFVar3;
  longlong *plVar4;
  TReferenceControllerBase<1> *pTVar5;
  SScrollBar *pSVar6;
  SWidget *pSVar7;
  int *piVar8;
  longlong lVar9;
  code *pcVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  TReferenceControllerBase<1> *pTVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  FSharedReferencer<1> FVar19;
  FArguments *pFVar20;
  bool bVar21;
  char cVar22;
  byte bVar23;
  FArguments *pFVar24;
  undefined8 *puVar25;
  TSharedRef<SWidget,1> *pTVar26;
  ulong64 uVar27;
  SListView<TSharedPtr<int,1>_> *pSVar28;
  SListView<TSharedPtr<int,1>_> *pSVar29;
  TSharedRef<SBox,1> *pTVar30;
  FArguments *pFVar31;
  FText *pFVar32;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> *pTVar33;
  EPopupMethod *pEVar34;
  FArguments *pFVar35;
  FSlateSound *pFVar36;
  SWidget *pSVar37;
  atomic<int> *paVar38;
  SWidget *local_res8;
  FArguments *local_res10;
  T0RequiredArgs local_res18 [8];
  FLLMScope local_res20 [2];
  EPopupMethod local_1538;
  char local_1537;
  SScrollBar *local_1530;
  TReferenceControllerBase<1> *pTStack_1528;
  FName local_1520;
  undefined4 uStack_1518;
  undefined4 uStack_1514;
  FLLMScope local_1510 [2];
  undefined1 local_1508 [8];
  ForAnyElementType local_1500;
  int local_14f8;
  SBox *local_14f0;
  TReferenceControllerBase<1> *pTStack_14e8;
  undefined4 local_14e0;
  undefined1 local_14dc;
  undefined1 local_14d8 [8];
  ForAnyElementType FStack_14d0;
  ulonglong local_14c8;
  float local_14c0;
  undefined1 local_14bc;
  undefined1 local_14b8 [8];
  ForAnyElementType FStack_14b0;
  ulonglong local_14a8;
  TSlateDecl<SListView<TSharedPtr<int,1>_>,RequiredArgs::T0RequiredArgs> local_14a0;
  undefined1 local_1488 [16];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_1478;
  ForAnyElementType FStack_1470;
  ulonglong local_1468;
  FArguments *local_1460;
  FButtonStyle *local_1458;
  SBox *local_1450;
  FSharedReferencer<1> local_1448;
  int *local_1440;
  undefined8 uStack_1438;
  TSharedPtr<SWidget,1> local_1430;
  TObservableArray<TSharedPtr<int,1>_> *local_1420;
  TReferenceControllerBase<1> *pTStack_1418;
  FMemScope local_1410;
  FName local_1408;
  FMemScope local_1400;
  FComboButtonStyle *local_13f8;
  FName local_13f0;
  FSharedReferencer<1> FStack_13e8;
  NamedSlotProperty<SComboButton::FArguments> local_13e0;
  TWeakPtr<SWidget,1> local_13d0;
  int *local_13c0;
  TReferenceControllerBase<1> *local_13b8;
  TSharedPtr<int,1> local_13b0;
  FDestructionSentinel local_13a0;
  FDestructionSentinel local_1388;
  FDestructionSentinel local_1370;
  FLinearColor_u_0 local_1358;
  undefined1 local_1348;
  undefined1 local_1344;
  undefined8 local_1340;
  undefined8 uStack_1338;
  undefined8 local_1330;
  FDestructionSentinel local_1328;
  FDestructionSentinel local_1310;
  undefined1 *local_12f8;
  FDestructionSentinel local_12f0;
  undefined1 *local_12d8;
  FDestructionSentinel local_12d0;
  undefined1 *local_12b8;
  FDestructionSentinel local_12b0;
  undefined1 *local_1298;
  TAttribute<FText> local_1290;
  SScrollBar *local_1260;
  TReferenceControllerBase<1> *pTStack_1258;
  TSharedRef<SWidget,1> local_1250;
  TSharedRef<STextBlock,1> local_1240;
  TSharedRef<SBox,1> local_1230;
  TSharedRef<SBox,1> local_1220;
  TSharedRef<SWidget,1> local_1210;
  TSharedRef<SWidget,1> local_1200;
  FText local_11f0;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_11e0;
  SWidget *local_11c8;
  TReferenceControllerBase<1> *pTStack_11c0;
  SListView<TSharedPtr<int,1>_> *local_11b8;
  TReferenceControllerBase<1> *pTStack_11b0;
  TSharedRef<SWidget,1> local_11a8;
  TSharedRef<SWidget,1> local_1198;
  TAttribute<FMargin> local_1188;
  FLinearColor_u_0 local_1158;
  undefined4 local_1148;
  undefined1 local_1144;
  TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy> local_1140;
  FReadAccessScope local_1128;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_1110;
  FArguments local_10f8;
  FArguments local_dc0;
  FArguments local_a80;
  FArguments local_5a0;
  undefined8 uStack_48;
  
  uStack_48 = 0x142e321ff;
  bVar13 = false;
  bVar12 = false;
  bVar11 = false;
  local_res8 = (SWidget *)((ulonglong)local_res8 & 0xffffffff00000000);
  if ((param_1->_ComboBoxStyle == (FComboBoxStyle *)0x0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("InArgs._ComboBoxStyle",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Input\\SComboBox.h"
                          ,0xc1,L""), bVar21)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  this->ItemStyle = param_1->_ItemStyle;
  pFVar3 = param_1->_ComboBoxStyle;
  this->ComboBoxStyle = pFVar3;
  fVar15 = (pFVar3->MenuRowPadding).Left;
  fVar16 = (pFVar3->MenuRowPadding).Top;
  fVar17 = (pFVar3->MenuRowPadding).Right;
  fVar18 = (pFVar3->MenuRowPadding).Bottom;
  *(undefined1 *)&this->_padding_ = 0;
  local_13f8 = &pFVar3->ComboButtonStyle;
  (this->MenuRowPadding).Left = fVar15;
  (this->MenuRowPadding).Top = fVar16;
  (this->MenuRowPadding).Right = fVar17;
  (this->MenuRowPadding).Bottom = fVar18;
  local_1458 = param_1->_ButtonStyle;
  if (local_1458 == (FButtonStyle *)0x0) {
    local_1458 = &(pFVar3->ComboButtonStyle).ButtonStyle;
  }
  pFVar36 = &(param_1->_PressedSoundOverride).TypedValue;
  if ((param_1->_PressedSoundOverride).bIsSet == false) {
    pFVar36 = &pFVar3->PressedSlateSound;
  }
  FSlateSound::operator=(&this->PressedSound,pFVar36);
  pFVar36 = &(param_1->_SelectionChangeSoundOverride).TypedValue;
  if ((param_1->_SelectionChangeSoundOverride).bIsSet == false) {
    pFVar36 = &this->ComboBoxStyle->SelectionChangeSlateSound;
  }
  FSlateSound::operator=(&this->SelectionChangeSound,pFVar36);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::operator=
            (&this->OnComboBoxOpening,&param_1->_OnComboBoxOpening);
  TDelegate<void___cdecl(TSharedPtr<int,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>::
  operator=(&this->OnSelectionChanged,&param_1->_OnSelectionChanged);
  if (&param_1->_OnGenerateWidget != &this->OnGenerateWidget) {
    local_1508 = (undefined1  [8])0x0;
    local_1500.Data = (FScriptContainerElement *)0x0;
    local_14f8 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->_OnGenerateWidget
               ,&local_1128);
    if ((*(int *)&(param_1->_OnGenerateWidget).field_0x10 != 0) &&
       (plVar4 = *(longlong **)&(param_1->_OnGenerateWidget).field_0x8, plVar4 != (longlong *)0x0))
    {
      (**(code **)(*plVar4 + 0x50))(plVar4,local_1508);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_1128);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnGenerateWidget,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1508);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1508,
               (FWriteAccessScope *)&local_1328);
    if ((local_14f8 != 0) && (local_1500.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_1500.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_1500,0,0,0x10);
      local_14f8 = 0;
    }
    if (local_1328.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1328.Accessor,&local_1328);
    }
    if (local_1500.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1500.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_1508);
  }
  this->EnableGamepadNavigationMode = param_1->_EnableGamepadNavigationMode;
  this->bControllerInputCaptured = false;
  pTVar5 = (param_1->_CustomScrollbar).SharedReferenceCount.ReferenceController;
  pSVar6 = (param_1->_CustomScrollbar).Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1260 = (this->CustomScrollbar).Object;
  pTStack_1258 = (this->CustomScrollbar).SharedReferenceCount.ReferenceController;
  (this->CustomScrollbar).Object = pSVar6;
  (this->CustomScrollbar).SharedReferenceCount.ReferenceController = pTVar5;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1258);
  local_1460 = SBox::FArguments::FArguments(&local_dc0);
  local_14c0 = param_1->_MaxListHeight;
  local_14bc = 1;
  local_14a8 = 0;
  local_14b8 = (undefined1  [8])0x0;
  FStack_14b0.Data = (FScriptContainerElement *)0x0;
  (local_1460->_MaxDesiredHeight).Value.Size = local_14c0;
  (local_1460->_MaxDesiredHeight).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(local_1460->_MaxDesiredHeight).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_14b8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_14b8,
             (FWriteAccessScope *)&local_1370);
  if (((int)local_14a8 != 0) && (FStack_14b0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_14b0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_14b0,0,0,0x10);
    local_14a8 = local_14a8 & 0xffffffff00000000;
  }
  if (local_1370.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1370.Accessor,&local_1370);
  }
  if (FStack_14b0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_14b0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_14b8);
  pFVar24 = SListView<TSharedPtr<int,1>_>::FArguments::FArguments(&local_a80);
  pTVar5 = (param_1->_OptionsSource_SharedObservableArray).SharedReferenceCount.ReferenceController;
  local_1420 = (TObservableArray<TSharedPtr<int,1>_> *)param_1->_OptionsSource_ArrayPointer;
  local_1530 = (SScrollBar *)param_1->_OptionsSource_ObservableArrayPointer;
  local_1520 = (FName)(param_1->_OptionsSource_SharedObservableArray).Object;
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
    paVar38 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar38 = &pTVar5->SharedReferenceCount;
    LOCK();
    *paVar38 = (atomic<int>)((int)*paVar38 + 1);
    UNLOCK();
  }
  pFVar24->_ListItemsSource_ArrayPointer =
       (TArray<TSharedPtr<int,1>,TSizedDefaultAllocator<32>_> *)0x0;
  pFVar24->_ListItemsSource_ObservableArrayPointer = (TObservableArray<TSharedPtr<int,1>_> *)0x0;
  pTVar2 = &pFVar24->_ListItemsSource_SharedObservableArray;
  local_13f0.ComparisonIndex.Value = 0;
  local_13f0.Number = 0;
  FStack_13e8.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (pTVar2 != (TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<int,1>_>,1> *)
                &local_13f0) {
    pTVar2->Object = (TObservableArray<TSharedPtr<int,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(pFVar24->_ListItemsSource_SharedObservableArray).SharedReferenceCount,&FStack_13e8)
    ;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_13e8.ReferenceController);
  pFVar24->_ListItemsSource_ArrayPointer = &local_1420->Array;
  pFVar24->_ListItemsSource_ObservableArrayPointer =
       (TObservableArray<TSharedPtr<int,1>_> *)local_1530;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar38 = (atomic<int>)((int)*paVar38 + 1);
    UNLOCK();
  }
  local_1420 = pTVar2->Object;
  pTStack_1418 = (pFVar24->_ListItemsSource_SharedObservableArray).SharedReferenceCount.
                 ReferenceController;
  pTVar2->Object = (TObservableArray<TSharedPtr<int,1>_> *)local_1520;
  (pFVar24->_ListItemsSource_SharedObservableArray).SharedReferenceCount.ReferenceController =
       pTVar5;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1418);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar24->_OnGenerateRow,
             (FWriteAccessScope *)&local_1310);
  local_12f8 = &(pFVar24->_OnGenerateRow).field_0x8;
  puVar25 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_12f8);
  pSVar37 = local_res8;
  if (puVar25 != (undefined8 *)0x0) {
    uStack_1514 = uStack_1438._4_4_;
    local_1520 = (FName)GenerateMenuItemRow;
    uStack_1518 = 0;
    pTVar26 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_1250);
    pSVar37 = (SWidget *)(pTVar26->SharedReferenceCount).ReferenceController;
    pSVar7 = pTVar26->Object;
    if (pSVar37 != (SWidget *)0x0) {
      LOCK();
      *(atomic<int> *)&pSVar37->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar37->_padding_ + 1);
      UNLOCK();
      LOCK();
      *(atomic<int> *)&pSVar37->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar37->_padding_ + 1);
      UNLOCK();
    }
    *puVar25 = &
               ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VITableRow___00__V__TSharedPtr_H_00__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar27 = FDelegateHandle::GenerateNewID();
    puVar25[2] = uVar27;
    *puVar25 = &
               ___7__TBaseSPMethodDelegateInstance__0A_V__SComboBox_V__TSharedPtr_H_00_____00__A6A_AV__TSharedRef_VITableRow___00__V__TSharedPtr_H_00__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar25[3] = pSVar7;
    puVar25[4] = pSVar37;
    if (pSVar37 != (SWidget *)0x0) {
      LOCK();
      ((atomic<int> *)&pSVar37->_padding_)[1] =
           (atomic<int>)((int)((atomic<int> *)&pSVar37->_padding_)[1] + 1);
      UNLOCK();
    }
    bVar13 = true;
    bVar12 = true;
    bVar11 = true;
    *(FName *)(puVar25 + 5) = local_1520;
    puVar25[6] = CONCAT44(uStack_1514,uStack_1518);
  }
  if (bVar12) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar37);
  }
  if (bVar13) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar37);
  }
  if (bVar11) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1250.SharedReferenceCount.ReferenceController);
  }
  bVar13 = false;
  bVar12 = false;
  bVar11 = false;
  if (local_1310.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1310.Accessor,&local_1310);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar24->_OnSelectionChanged
             ,(FWriteAccessScope *)&local_12f0);
  local_12d8 = &(pFVar24->_OnSelectionChanged).field_0x8;
  puVar25 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_12d8);
  pSVar37 = local_res8;
  if (puVar25 != (undefined8 *)0x0) {
    local_1530 = (SScrollBar *)OnSelectionChanged_Internal;
    pTStack_1528 = (TReferenceControllerBase<1> *)((ulonglong)uStack_1438 & 0xffffffff00000000);
    pTVar26 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_1198);
    pSVar37 = (SWidget *)(pTVar26->SharedReferenceCount).ReferenceController;
    local_1520 = (FName)pTVar26->Object;
    if (pSVar37 != (SWidget *)0x0) {
      LOCK();
      *(atomic<int> *)&pSVar37->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar37->_padding_ + 1);
      UNLOCK();
      LOCK();
      *(atomic<int> *)&pSVar37->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar37->_padding_ + 1);
      UNLOCK();
    }
    bVar11 = true;
    bVar13 = true;
    bVar12 = true;
    *puVar25 = &
               ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_H_00__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar27 = FDelegateHandle::GenerateNewID();
    puVar25[2] = uVar27;
    *puVar25 = &
               ___7__TBaseSPMethodDelegateInstance__0A_V__SComboBox_V__TSharedPtr_H_00_____00__A6AXV__TSharedPtr_H_00__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FName *)(puVar25 + 3) = local_1520;
    puVar25[4] = pSVar37;
    if (pSVar37 != (SWidget *)0x0) {
      LOCK();
      ((atomic<int> *)&pSVar37->_padding_)[1] =
           (atomic<int>)((int)((atomic<int> *)&pSVar37->_padding_)[1] + 1);
      UNLOCK();
    }
    puVar25[5] = local_1530;
    puVar25[6] = pTStack_1528;
  }
  if (bVar11) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar37);
  }
  if (bVar12) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar37);
  }
  if (bVar13) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1198.SharedReferenceCount.ReferenceController);
  }
  bVar12 = false;
  bVar11 = false;
  if (local_12f0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_12f0.Accessor,&local_12f0);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar24->_OnKeyDownHandler,
             (FWriteAccessScope *)&local_12d0);
  local_12b8 = &(pFVar24->_OnKeyDownHandler).field_0x8;
  puVar25 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_12b8);
  pSVar37 = local_res8;
  if (puVar25 != (undefined8 *)0x0) {
    local_1530 = (SScrollBar *)OnKeyDownHandler;
    pTStack_1528 = (TReferenceControllerBase<1> *)((ulonglong)uStack_1438 & 0xffffffff00000000);
    pTVar26 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_11a8);
    pSVar37 = (SWidget *)(pTVar26->SharedReferenceCount).ReferenceController;
    local_1520 = (FName)pTVar26->Object;
    if (pSVar37 != (SWidget *)0x0) {
      LOCK();
      *(atomic<int> *)&pSVar37->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar37->_padding_ + 1);
      UNLOCK();
      LOCK();
      *(atomic<int> *)&pSVar37->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar37->_padding_ + 1);
      UNLOCK();
    }
    bVar11 = true;
    bVar12 = true;
    *puVar25 = &
               ___7__TCommonDelegateInstanceState___A6A_AVFReply__AEBUFGeometry__AEBUFKeyEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar27 = FDelegateHandle::GenerateNewID();
    puVar25[2] = uVar27;
    *puVar25 = &
               ___7__TBaseSPMethodDelegateInstance__0A_V__SComboBox_V__TSharedPtr_H_00_____00__A6A_AVFReply__AEBUFGeometry__AEBUFKeyEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FName *)(puVar25 + 3) = local_1520;
    puVar25[4] = pSVar37;
    if (pSVar37 != (SWidget *)0x0) {
      LOCK();
      ((atomic<int> *)&pSVar37->_padding_)[1] =
           (atomic<int>)((int)((atomic<int> *)&pSVar37->_padding_)[1] + 1);
      UNLOCK();
    }
    puVar25[5] = local_1530;
    puVar25[6] = pTStack_1528;
  }
  if (bVar11) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar37);
  }
  if (bVar12) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_11a8.SharedReferenceCount.ReferenceController);
  }
  bVar13 = false;
  bVar12 = false;
  bVar11 = false;
  if (local_12d0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_12d0.Accessor,&local_12d0);
  }
  local_14dc = 1;
  local_14e0 = 1;
  local_14c8 = 0;
  local_14d8 = (undefined1  [8])0x0;
  FStack_14d0.Data = (FScriptContainerElement *)0x0;
  (pFVar24->_SelectionMode).Value = Single;
  (pFVar24->_SelectionMode).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar24->_SelectionMode).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_14d8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_14d8,
             (FWriteAccessScope *)&local_13a0);
  if (((int)local_14c8 != 0) && (FStack_14d0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_14d0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_14d0,0,0,0x10);
    local_14c8 = local_14c8 & 0xffffffff00000000;
  }
  if (local_13a0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_13a0.Accessor,&local_13a0);
  }
  if (FStack_14d0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_14d0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_14d8);
  pFVar24->_ScrollBarStyle = param_1->_ScrollBarStyle;
  pTVar5 = (param_1->_CustomScrollbar).SharedReferenceCount.ReferenceController;
  pSVar6 = (param_1->_CustomScrollbar).Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1530 = (pFVar24->_ExternalScrollbar).Object;
  pTStack_1528 = (pFVar24->_ExternalScrollbar).SharedReferenceCount.ReferenceController;
  (pFVar24->_ExternalScrollbar).Object = pSVar6;
  (pFVar24->_ExternalScrollbar).SharedReferenceCount.ReferenceController = pTVar5;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1528);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  FLLMScope::FLLMScope(local_res20,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1520 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1410,&local_1520,true);
  TSlateDecl<SListView<TSharedPtr<int,1>_>,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SListView<TSharedPtr<int,1>_>,RequiredArgs::T0RequiredArgs>
            (&local_14a0,"SComboListType",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Input\\SComboBox.h"
             ,0xda,(T0RequiredArgs *)&local_res8);
  FMemScope::~FMemScope(&local_1410);
  FLLMScope::~FLLMScope(local_res20);
  if (local_14a0._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_14a0._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_14a0._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_11b8 = (this->ComboListView).Object;
  pTStack_11b0 = (this->ComboListView).SharedReferenceCount.ReferenceController;
  (this->ComboListView).Object = local_14a0._Widget.Object;
  (this->ComboListView).SharedReferenceCount.ReferenceController =
       local_14a0._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_11b0);
  pSVar28 = TSharedPtr<SListView<TSharedPtr<int,1>_>,1>::operator->(&local_14a0._Widget);
  SWidget::SWidgetConstruct((SWidget *)pSVar28,(FSlateBaseNamedArgs *)pFVar24);
  pSVar28 = local_14a0._Widget.Object;
  SListView<TSharedPtr<int,1>_>::Construct(local_14a0._Widget.Object,pFVar24);
  pSVar29 = TSharedPtr<SListView<TSharedPtr<int,1>_>,1>::operator->(&local_14a0._Widget);
  if ((pSVar29->_padding_ & 0x10) == 0) {
    cVar22 = (**(code **)(pSVar29->_padding_ + 0x228))(pSVar29);
    bVar23 = 0;
    if (cVar22 == '\0') goto LAB_142e32b4e;
  }
  bVar23 = 0x20;
LAB_142e32b4e:
  *(byte *)&pSVar29->_padding_ = (byte)pSVar29->_padding_ & 0xdf;
  *(byte *)&pSVar29->_padding_ = (byte)pSVar29->_padding_ | bVar23;
  pSVar29 = TSharedPtr<SListView<TSharedPtr<int,1>_>,1>::operator->(&local_14a0._Widget);
  pbVar1 = (byte *)((longlong)&pSVar29->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((local_14a0._Widget.Object == (SListView<TSharedPtr<int,1>_> *)0x0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar21)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  FVar19.ReferenceController = local_14a0._Widget.SharedReferenceCount.ReferenceController;
  local_14a0._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_14a0._Widget.Object = (SListView<TSharedPtr<int,1>_> *)0x0;
  if ((pSVar28 == (SListView<TSharedPtr<int,1>_> *)0x0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar21)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pFVar20 = local_1460;
  if (FVar19.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar19.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar19.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (FVar19.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar19.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_11c8 = (local_1460->_Content).Widget.Object;
  pTStack_11c0 = (local_1460->_Content).Widget.SharedReferenceCount.ReferenceController;
  (local_1460->_Content).Widget.Object = (SWidget *)pSVar28;
  (local_1460->_Content).Widget.SharedReferenceCount.ReferenceController =
       FVar19.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_11c0);
  FLLMScope::FLLMScope(local_1510,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1408 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1400,&local_1408,true);
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
            (&local_11e0,"SBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Input\\SComboBox.h"
             ,0xd7,(T0RequiredArgs *)&local_res10);
  FMemScope::~FMemScope(&local_1400);
  FLLMScope::~FLLMScope(local_1510);
  pTVar30 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_11e0,&local_1230,pFVar20);
  local_1448.ReferenceController = (pTVar30->SharedReferenceCount).ReferenceController;
  local_1450 = pTVar30->Object;
  if (local_1448.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1448.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_1448.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->ComboBoxMenuContent != (TSharedPtr<SBox,1> *)&local_1450) {
    (this->ComboBoxMenuContent).Object = local_1450;
    local_1450 = (SBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ComboBoxMenuContent).SharedReferenceCount,&local_1448);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1448.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1230.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_11e0._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar19.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar19.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_14a0._Widget.SharedReferenceCount.ReferenceController);
  SListView<TSharedPtr<int,1>_>::FArguments::~FArguments(&local_a80);
  SBox::FArguments::~FArguments(&local_dc0);
  local_1430.Object = (param_1->_Content).Widget.Object;
  local_1430.SharedReferenceCount.ReferenceController =
       (param_1->_Content).Widget.SharedReferenceCount.ReferenceController;
  if (local_1430.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1430.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1430.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((param_1->_Content).Widget.Object == SNullWidget::NullWidget.Object) {
    pFVar31 = STextBlock::FArguments::FArguments(&local_5a0);
    pFVar32 = FText::AsLocalizable_Advanced_LocText
                        (&local_11f0,L"SComboBox",L"ContentWarning",L"No Content Provided");
    FText::FText(&local_1290.Value,pFVar32);
    local_1290.bIsSet = true;
    local_1290.Getter._16_8_ = 0;
    local_1290.Getter._0_8_ = 0;
    local_1290.Getter._8_8_ = 0;
    pFVar31 = STextBlock::FArguments::Text(pFVar31,&local_1290);
    local_1348 = 0;
    local_1344 = 1;
    local_1330 = 0;
    local_1358 = FLinearColor::Red.field0_0x0;
    local_1340 = 0;
    uStack_1338 = 0;
    pFVar31 = STextBlock::FArguments::ColorAndOpacity
                        (pFVar31,(TAttribute<FSlateColor> *)&local_1358._s_0);
    pTVar33 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                        (&local_1110,"STextBlock",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Input\\SComboBox.h"
                         ,0xe9,local_res18);
    pTVar33 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::Expose<SWidget>
                        (pTVar33,&local_1430);
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=(pTVar33,&local_1240,pFVar31);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1240.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1110._Widget.SharedReferenceCount.ReferenceController);
    if (local_11f0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_11f0.TextData.Reference + 0x10))();
    }
    STextBlock::FArguments::~FArguments(&local_5a0);
  }
  local_13e0.OwnerDeclaration = SComboButton::FArguments::FArguments(&local_10f8);
  (local_13e0.OwnerDeclaration)->_ComboButtonStyle = local_13f8;
  (local_13e0.OwnerDeclaration)->_ButtonStyle = local_1458;
  local_1537 = (param_1->_Method).bIsSet;
  if ((bool)local_1537 != false) {
    local_1538 = (param_1->_Method).TypedValue;
  }
  if ((TOptional<EPopupMethod> *)&local_1538 != &(local_13e0.OwnerDeclaration)->_Method) {
    if ((bool)local_1537 == false) {
      if (((local_13e0.OwnerDeclaration)->_Method).bIsSet != false) {
        ((local_13e0.OwnerDeclaration)->_Method).bIsSet = false;
      }
    }
    else {
      pEVar34 = TOptional<enum_EPopupMethod>::GetValue(&local_1538);
      ((local_13e0.OwnerDeclaration)->_Method).TypedValue = *pEVar34;
      ((local_13e0.OwnerDeclaration)->_Method).bIsSet = true;
    }
  }
  local_13e0.SlotContent = &(local_13e0.OwnerDeclaration)->_ButtonContent;
  pTVar26 = TSharedPtr<SWidget,1>::ToSharedRef(&local_1430,&local_1200);
  pFVar35 = NamedSlotProperty<SComboButton::FArguments>::operator[](&local_13e0,pTVar26);
  pTVar30 = TSharedPtr<SBox,1>::ToSharedRef(&this->ComboBoxMenuContent,&local_1220);
  pTVar5 = (pTVar30->SharedReferenceCount).ReferenceController;
  local_14f0 = pTVar30->Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar14 = (pFVar35->_MenuContent).Widget.SharedReferenceCount.ReferenceController;
  (pFVar35->_MenuContent).Widget.Object = (SWidget *)local_14f0;
  (pFVar35->_MenuContent).Widget.SharedReferenceCount.ReferenceController = pTVar5;
  pTStack_14e8 = pTVar5;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
  pFVar35->_HasDownArrow = param_1->_HasDownArrow;
  local_1188.Value.Left = (param_1->_ContentPadding).Value.Left;
  local_1188.Value.Top = (param_1->_ContentPadding).Value.Top;
  local_1188.Value.Right = (param_1->_ContentPadding).Value.Right;
  local_1188.Value.Bottom = (param_1->_ContentPadding).Value.Bottom;
  local_1188.bIsSet = (param_1->_ContentPadding).bIsSet;
  local_1188.Getter._16_4_ = 0;
  local_1188.Getter._0_8_ = 0;
  local_1188.Getter._8_8_ = 0;
  TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&local_1188.Getter,&(param_1->_ContentPadding).Getter);
  pFVar35 = SComboButton::FArguments::ContentPadding(pFVar35,&local_1188);
  local_1148._0_1_ = (param_1->_ForegroundColor).Value.ColorUseRule;
  local_1148._1_1_ = (param_1->_ForegroundColor).Value.ColorTableId;
  local_1148._2_2_ = *(undefined2 *)&(param_1->_ForegroundColor).Value.field_0x12;
  local_1158._0_8_ = *(undefined8 *)&(param_1->_ForegroundColor).Value.SpecifiedColor.field0_0x0;
  local_1158._8_8_ =
       *(undefined8 *)((longlong)&(param_1->_ForegroundColor).Value.SpecifiedColor.field0_0x0 + 8);
  local_1144 = (param_1->_ForegroundColor).bIsSet;
  TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
            (&local_1140,&(param_1->_ForegroundColor).Getter);
  pFVar35 = SComboButton::FArguments::ForegroundColor
                      (pFVar35,(TAttribute<FSlateColor> *)&local_1158._s_0);
  local_res10 = pFVar35;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar35->_OnMenuOpenChanged,
             (FWriteAccessScope *)&local_12b0);
  local_1298 = &(pFVar35->_OnMenuOpenChanged).field_0x8;
  puVar25 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_1298);
  pSVar37 = local_res8;
  if (puVar25 != (undefined8 *)0x0) {
    local_14f0 = (SBox *)OnMenuOpenChanged;
    pTStack_14e8 = (TReferenceControllerBase<1> *)((ulonglong)uStack_1438._4_4_ << 0x20);
    pTVar26 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_1210);
    pSVar37 = (SWidget *)(pTVar26->SharedReferenceCount).ReferenceController;
    local_res8 = pTVar26->Object;
    if (pSVar37 != (SWidget *)0x0) {
      LOCK();
      *(atomic<int> *)&pSVar37->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar37->_padding_ + 1);
      UNLOCK();
      LOCK();
      *(atomic<int> *)&pSVar37->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar37->_padding_ + 1);
      UNLOCK();
    }
    bVar13 = true;
    bVar12 = true;
    bVar11 = true;
    *puVar25 = &___7__TCommonDelegateInstanceState___A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar27 = FDelegateHandle::GenerateNewID();
    puVar25[2] = uVar27;
    *puVar25 = &
               ___7__TBaseSPMethodDelegateInstance__0A_V__SComboBox_V__TSharedPtr_H_00_____00__A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar25[3] = local_res8;
    puVar25[4] = pSVar37;
    if (pSVar37 != (SWidget *)0x0) {
      LOCK();
      ((atomic<int> *)&pSVar37->_padding_)[1] =
           (atomic<int>)((int)((atomic<int> *)&pSVar37->_padding_)[1] + 1);
      UNLOCK();
    }
    puVar25[5] = local_14f0;
    puVar25[6] = pTStack_14e8;
  }
  if (bVar11) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar37);
  }
  if (bVar12) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar37);
  }
  if (bVar13) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1210.SharedReferenceCount.ReferenceController);
  }
  if (local_12b0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_12b0.Accessor,&local_12b0);
  }
  local_res10->_IsFocusable = param_1->_IsFocusable;
  local_res10->_CollapseMenuOnParentFocus = param_1->_CollapseMenuOnParentFocus;
  SComboButton::Construct((SComboButton *)this,local_res10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1220.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1200.SharedReferenceCount.ReferenceController);
  SComboButton::FArguments::~FArguments(&local_10f8);
  local_13d0.Object = (SWidget *)(this->ComboListView).Object;
  local_13d0.WeakReferenceCount.ReferenceController =
       (this->ComboListView).SharedReferenceCount.ReferenceController;
  if (local_13d0.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_13d0.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_13d0.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  SComboButton::SetMenuContentWidgetToFocus((SComboButton *)this,&local_13d0);
  pTVar5 = (param_1->_InitiallySelectedItem).SharedReferenceCount.ReferenceController;
  piVar8 = (param_1->_InitiallySelectedItem).Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1440 = (this->SelectedItem).Object;
  uStack_1438 = (this->SelectedItem).SharedReferenceCount.ReferenceController;
  (this->SelectedItem).Object = piVar8;
  (this->SelectedItem).SharedReferenceCount.ReferenceController = pTVar5;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(uStack_1438);
  piVar8 = (this->SelectedItem).Object;
  if (piVar8 != (int *)0x0) {
    pTVar5 = (this->SelectedItem).SharedReferenceCount.ReferenceController;
    if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
      paVar38 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar38 = &pTVar5->SharedReferenceCount;
      LOCK();
      *paVar38 = (atomic<int>)((int)*paVar38 + 1);
      UNLOCK();
    }
    pSVar28 = TSharedPtr<SListView<TSharedPtr<int,1>_>,1>::operator->(&this->ComboListView);
    lVar9 = pSVar28->_padding_;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar38 = (atomic<int>)((int)*paVar38 + 1);
      UNLOCK();
    }
    local_13c0 = piVar8;
    local_13b8 = pTVar5;
    (**(code **)(lVar9 + 0x28))(&pSVar28->_padding_,&local_13c0,1,0);
    pSVar28 = TSharedPtr<SListView<TSharedPtr<int,1>_>,1>::operator->(&this->ComboListView);
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar38 = (atomic<int>)((int)*paVar38 + 1);
      UNLOCK();
    }
    local_13b0.Object = piVar8;
    local_13b0.SharedReferenceCount.ReferenceController = pTVar5;
    SListView<TSharedPtr<int,1>_>::RequestScrollIntoView(pSVar28,&local_13b0,0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  }
  pSVar28 = TSharedPtr<SListView<TSharedPtr<int,1>_>,1>::operator->(&this->ComboListView);
  local_1488._0_8_ = FStyleDefaults::GetNoBrush();
  local_1488[8] = true;
  local_1468 = 0;
  local_1478.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_1470.Data = (FScriptContainerElement *)0x0;
  STableViewBase::SetBackgroundBrush
            ((STableViewBase *)pSVar28,(TAttribute<FSlateBrush_const_*> *)local_1488);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_1478,(FWriteAccessScope *)&local_1388);
  if (((int)local_1468 != 0) && (FStack_1470.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1470.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1470,0,0,0x10);
    local_1468 = local_1468 & 0xffffffff00000000;
  }
  if (local_1388.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1388.Accessor,&local_1388);
  }
  if (FStack_1470.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1470.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_1478.AccessDetector);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1430.SharedReferenceCount.ReferenceController);
  return;
}

// Construct @ 142e333b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Removing unreachable block (ram,0x000142e33ad1) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SComboBox<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>::Construct
          (SComboBox<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *this,
          FArguments *param_1)

{
  byte *pbVar1;
  TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,1>
  *pTVar2;
  FComboBoxStyle *pFVar3;
  longlong *plVar4;
  TReferenceControllerBase<1> *pTVar5;
  SScrollBar *pSVar6;
  SWidget *pSVar7;
  FWidgetSnapshotTarget *pFVar8;
  longlong lVar9;
  code *pcVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  TReferenceControllerBase<1> *pTVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  FSharedReferencer<1> FVar19;
  FArguments *pFVar20;
  bool bVar21;
  char cVar22;
  byte bVar23;
  FArguments *pFVar24;
  undefined8 *puVar25;
  TSharedRef<SWidget,1> *pTVar26;
  ulong64 uVar27;
  SListView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *pSVar28;
  SListView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *pSVar29;
  TSharedRef<SBox,1> *pTVar30;
  FArguments *pFVar31;
  FText *pFVar32;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> *pTVar33;
  EPopupMethod *pEVar34;
  FArguments *pFVar35;
  FSlateSound *pFVar36;
  SWidget *pSVar37;
  atomic<int> *paVar38;
  SWidget *local_res8;
  FArguments *local_res10;
  T0RequiredArgs local_res18 [8];
  FLLMScope local_res20 [2];
  EPopupMethod local_1538;
  char local_1537;
  SScrollBar *local_1530;
  TReferenceControllerBase<1> *pTStack_1528;
  FName local_1520;
  undefined4 uStack_1518;
  undefined4 uStack_1514;
  FLLMScope local_1510 [2];
  undefined1 local_1508 [8];
  ForAnyElementType local_1500;
  int local_14f8;
  SBox *local_14f0;
  TReferenceControllerBase<1> *pTStack_14e8;
  undefined4 local_14e0;
  undefined1 local_14dc;
  undefined1 local_14d8 [8];
  ForAnyElementType FStack_14d0;
  ulonglong local_14c8;
  float local_14c0;
  undefined1 local_14bc;
  undefined1 local_14b8 [8];
  ForAnyElementType FStack_14b0;
  ulonglong local_14a8;
  TSlateDecl<SListView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,RequiredArgs::T0RequiredArgs>
  local_14a0;
  undefined1 local_1488 [16];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_1478;
  ForAnyElementType FStack_1470;
  ulonglong local_1468;
  FArguments *local_1460;
  FButtonStyle *local_1458;
  SBox *local_1450;
  FSharedReferencer<1> local_1448;
  FWidgetSnapshotTarget *local_1440;
  undefined8 uStack_1438;
  TSharedPtr<SWidget,1> local_1430;
  TObservableArray<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *local_1420;
  TReferenceControllerBase<1> *pTStack_1418;
  FMemScope local_1410;
  FName local_1408;
  FMemScope local_1400;
  FComboButtonStyle *local_13f8;
  FName local_13f0;
  FSharedReferencer<1> FStack_13e8;
  NamedSlotProperty<SComboButton::FArguments> local_13e0;
  TWeakPtr<SWidget,1> local_13d0;
  FWidgetSnapshotTarget *local_13c0;
  TReferenceControllerBase<1> *local_13b8;
  TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1> local_13b0;
  FDestructionSentinel local_13a0;
  FDestructionSentinel local_1388;
  FDestructionSentinel local_1370;
  FLinearColor_u_0 local_1358;
  undefined1 local_1348;
  undefined1 local_1344;
  undefined8 local_1340;
  undefined8 uStack_1338;
  undefined8 local_1330;
  FDestructionSentinel local_1328;
  FDestructionSentinel local_1310;
  undefined1 *local_12f8;
  FDestructionSentinel local_12f0;
  undefined1 *local_12d8;
  FDestructionSentinel local_12d0;
  undefined1 *local_12b8;
  FDestructionSentinel local_12b0;
  undefined1 *local_1298;
  TAttribute<FText> local_1290;
  SScrollBar *local_1260;
  TReferenceControllerBase<1> *pTStack_1258;
  TSharedRef<SWidget,1> local_1250;
  TSharedRef<STextBlock,1> local_1240;
  TSharedRef<SBox,1> local_1230;
  TSharedRef<SBox,1> local_1220;
  TSharedRef<SWidget,1> local_1210;
  TSharedRef<SWidget,1> local_1200;
  FText local_11f0;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_11e0;
  SWidget *local_11c8;
  TReferenceControllerBase<1> *pTStack_11c0;
  SListView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *local_11b8;
  TReferenceControllerBase<1> *pTStack_11b0;
  TSharedRef<SWidget,1> local_11a8;
  TSharedRef<SWidget,1> local_1198;
  TAttribute<FMargin> local_1188;
  FLinearColor_u_0 local_1158;
  undefined4 local_1148;
  undefined1 local_1144;
  TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy> local_1140;
  FReadAccessScope local_1128;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_1110;
  FArguments local_10f8;
  FArguments local_dc0;
  FArguments local_a80;
  FArguments local_5a0;
  undefined8 uStack_48;
  
  uStack_48 = 0x142e333cf;
  bVar13 = false;
  bVar12 = false;
  bVar11 = false;
  local_res8 = (SWidget *)((ulonglong)local_res8 & 0xffffffff00000000);
  if ((param_1->_ComboBoxStyle == (FComboBoxStyle *)0x0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("InArgs._ComboBoxStyle",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Input\\SComboBox.h"
                          ,0xc1,L""), bVar21)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  this->ItemStyle = param_1->_ItemStyle;
  pFVar3 = param_1->_ComboBoxStyle;
  this->ComboBoxStyle = pFVar3;
  fVar15 = (pFVar3->MenuRowPadding).Left;
  fVar16 = (pFVar3->MenuRowPadding).Top;
  fVar17 = (pFVar3->MenuRowPadding).Right;
  fVar18 = (pFVar3->MenuRowPadding).Bottom;
  *(undefined1 *)&this->_padding_ = 0;
  local_13f8 = &pFVar3->ComboButtonStyle;
  (this->MenuRowPadding).Left = fVar15;
  (this->MenuRowPadding).Top = fVar16;
  (this->MenuRowPadding).Right = fVar17;
  (this->MenuRowPadding).Bottom = fVar18;
  local_1458 = param_1->_ButtonStyle;
  if (local_1458 == (FButtonStyle *)0x0) {
    local_1458 = &(pFVar3->ComboButtonStyle).ButtonStyle;
  }
  pFVar36 = &(param_1->_PressedSoundOverride).TypedValue;
  if ((param_1->_PressedSoundOverride).bIsSet == false) {
    pFVar36 = &pFVar3->PressedSlateSound;
  }
  FSlateSound::operator=(&this->PressedSound,pFVar36);
  pFVar36 = &(param_1->_SelectionChangeSoundOverride).TypedValue;
  if ((param_1->_SelectionChangeSoundOverride).bIsSet == false) {
    pFVar36 = &this->ComboBoxStyle->SelectionChangeSlateSound;
  }
  FSlateSound::operator=(&this->SelectionChangeSound,pFVar36);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::operator=
            (&this->OnComboBoxOpening,&param_1->_OnComboBoxOpening);
  TDelegate<void___cdecl(TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
  ::operator=(&this->OnSelectionChanged,&param_1->_OnSelectionChanged);
  if (&param_1->_OnGenerateWidget != &this->OnGenerateWidget) {
    local_1508 = (undefined1  [8])0x0;
    local_1500.Data = (FScriptContainerElement *)0x0;
    local_14f8 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->_OnGenerateWidget
               ,&local_1128);
    if ((*(int *)&(param_1->_OnGenerateWidget).field_0x10 != 0) &&
       (plVar4 = *(longlong **)&(param_1->_OnGenerateWidget).field_0x8, plVar4 != (longlong *)0x0))
    {
      (**(code **)(*plVar4 + 0x50))(plVar4,local_1508);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_1128);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnGenerateWidget,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1508);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1508,
               (FWriteAccessScope *)&local_1328);
    if ((local_14f8 != 0) && (local_1500.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_1500.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_1500,0,0,0x10);
      local_14f8 = 0;
    }
    if (local_1328.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1328.Accessor,&local_1328);
    }
    if (local_1500.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1500.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_1508);
  }
  this->EnableGamepadNavigationMode = param_1->_EnableGamepadNavigationMode;
  this->bControllerInputCaptured = false;
  pTVar5 = (param_1->_CustomScrollbar).SharedReferenceCount.ReferenceController;
  pSVar6 = (param_1->_CustomScrollbar).Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1260 = (this->CustomScrollbar).Object;
  pTStack_1258 = (this->CustomScrollbar).SharedReferenceCount.ReferenceController;
  (this->CustomScrollbar).Object = pSVar6;
  (this->CustomScrollbar).SharedReferenceCount.ReferenceController = pTVar5;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1258);
  local_1460 = SBox::FArguments::FArguments(&local_dc0);
  local_14c0 = param_1->_MaxListHeight;
  local_14bc = 1;
  local_14a8 = 0;
  local_14b8 = (undefined1  [8])0x0;
  FStack_14b0.Data = (FScriptContainerElement *)0x0;
  (local_1460->_MaxDesiredHeight).Value.Size = local_14c0;
  (local_1460->_MaxDesiredHeight).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(local_1460->_MaxDesiredHeight).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_14b8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_14b8,
             (FWriteAccessScope *)&local_1370);
  if (((int)local_14a8 != 0) && (FStack_14b0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_14b0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_14b0,0,0,0x10);
    local_14a8 = local_14a8 & 0xffffffff00000000;
  }
  if (local_1370.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1370.Accessor,&local_1370);
  }
  if (FStack_14b0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_14b0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_14b8);
  pFVar24 = SListView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>::FArguments::
            FArguments(&local_a80);
  pTVar5 = (param_1->_OptionsSource_SharedObservableArray).SharedReferenceCount.ReferenceController;
  local_1420 = (TObservableArray<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *)
               param_1->_OptionsSource_ArrayPointer;
  local_1530 = (SScrollBar *)param_1->_OptionsSource_ObservableArrayPointer;
  local_1520 = (FName)(param_1->_OptionsSource_SharedObservableArray).Object;
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
    paVar38 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar38 = &pTVar5->SharedReferenceCount;
    LOCK();
    *paVar38 = (atomic<int>)((int)*paVar38 + 1);
    UNLOCK();
  }
  pFVar24->_ListItemsSource_ArrayPointer =
       (TArray<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>,TSizedDefaultAllocator<32>_>
        *)0x0;
  pFVar24->_ListItemsSource_ObservableArrayPointer =
       (TObservableArray<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *)0x0;
  pTVar2 = &pFVar24->_ListItemsSource_SharedObservableArray;
  local_13f0.ComparisonIndex.Value = 0;
  local_13f0.Number = 0;
  FStack_13e8.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (pTVar2 != (TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,1>
                 *)&local_13f0) {
    pTVar2->Object =
         (TObservableArray<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(pFVar24->_ListItemsSource_SharedObservableArray).SharedReferenceCount,&FStack_13e8)
    ;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_13e8.ReferenceController);
  pFVar24->_ListItemsSource_ArrayPointer = &local_1420->Array;
  pFVar24->_ListItemsSource_ObservableArrayPointer =
       (TObservableArray<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *)local_1530;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar38 = (atomic<int>)((int)*paVar38 + 1);
    UNLOCK();
  }
  local_1420 = pTVar2->Object;
  pTStack_1418 = (pFVar24->_ListItemsSource_SharedObservableArray).SharedReferenceCount.
                 ReferenceController;
  pTVar2->Object =
       (TObservableArray<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *)local_1520;
  (pFVar24->_ListItemsSource_SharedObservableArray).SharedReferenceCount.ReferenceController =
       pTVar5;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1418);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar24->_OnGenerateRow,
             (FWriteAccessScope *)&local_1310);
  local_12f8 = &(pFVar24->_OnGenerateRow).field_0x8;
  puVar25 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_12f8);
  pSVar37 = local_res8;
  if (puVar25 != (undefined8 *)0x0) {
    uStack_1514 = uStack_1438._4_4_;
    local_1520 = (FName)GenerateMenuItemRow;
    uStack_1518 = 0;
    pTVar26 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_1250);
    pSVar37 = (SWidget *)(pTVar26->SharedReferenceCount).ReferenceController;
    pSVar7 = pTVar26->Object;
    if (pSVar37 != (SWidget *)0x0) {
      LOCK();
      *(atomic<int> *)&pSVar37->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar37->_padding_ + 1);
      UNLOCK();
      LOCK();
      *(atomic<int> *)&pSVar37->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar37->_padding_ + 1);
      UNLOCK();
    }
    *puVar25 = &
               ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VITableRow___00__V__TSharedPtr_UFWidgetSnapshotTarget_WidgetReflectorImpl___00__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar27 = FDelegateHandle::GenerateNewID();
    puVar25[2] = uVar27;
    *puVar25 = &
               ___7__TBaseSPMethodDelegateInstance__0A_V__SComboBox_V__TSharedPtr_UFWidgetSnapshotTarget_WidgetReflectorImpl___00_____00__A6A_AV__TSharedRef_VITableRow___00__V__TSharedPtr_UFWidgetSnapshotTarget_WidgetReflectorImpl___00__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar25[3] = pSVar7;
    puVar25[4] = pSVar37;
    if (pSVar37 != (SWidget *)0x0) {
      LOCK();
      ((atomic<int> *)&pSVar37->_padding_)[1] =
           (atomic<int>)((int)((atomic<int> *)&pSVar37->_padding_)[1] + 1);
      UNLOCK();
    }
    bVar13 = true;
    bVar12 = true;
    bVar11 = true;
    *(FName *)(puVar25 + 5) = local_1520;
    puVar25[6] = CONCAT44(uStack_1514,uStack_1518);
  }
  if (bVar12) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar37);
  }
  if (bVar13) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar37);
  }
  if (bVar11) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1250.SharedReferenceCount.ReferenceController);
  }
  bVar13 = false;
  bVar12 = false;
  bVar11 = false;
  if (local_1310.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1310.Accessor,&local_1310);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar24->_OnSelectionChanged
             ,(FWriteAccessScope *)&local_12f0);
  local_12d8 = &(pFVar24->_OnSelectionChanged).field_0x8;
  puVar25 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_12d8);
  pSVar37 = local_res8;
  if (puVar25 != (undefined8 *)0x0) {
    local_1530 = (SScrollBar *)OnSelectionChanged_Internal;
    pTStack_1528 = (TReferenceControllerBase<1> *)((ulonglong)uStack_1438 & 0xffffffff00000000);
    pTVar26 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_1198);
    pSVar37 = (SWidget *)(pTVar26->SharedReferenceCount).ReferenceController;
    local_1520 = (FName)pTVar26->Object;
    if (pSVar37 != (SWidget *)0x0) {
      LOCK();
      *(atomic<int> *)&pSVar37->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar37->_padding_ + 1);
      UNLOCK();
      LOCK();
      *(atomic<int> *)&pSVar37->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar37->_padding_ + 1);
      UNLOCK();
    }
    bVar11 = true;
    bVar13 = true;
    bVar12 = true;
    *puVar25 = &
               ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_UFWidgetSnapshotTarget_WidgetReflectorImpl___00__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar27 = FDelegateHandle::GenerateNewID();
    puVar25[2] = uVar27;
    *puVar25 = &
               ___7__TBaseSPMethodDelegateInstance__0A_V__SComboBox_V__TSharedPtr_UFWidgetSnapshotTarget_WidgetReflectorImpl___00_____00__A6AXV__TSharedPtr_UFWidgetSnapshotTarget_WidgetReflectorImpl___00__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FName *)(puVar25 + 3) = local_1520;
    puVar25[4] = pSVar37;
    if (pSVar37 != (SWidget *)0x0) {
      LOCK();
      ((atomic<int> *)&pSVar37->_padding_)[1] =
           (atomic<int>)((int)((atomic<int> *)&pSVar37->_padding_)[1] + 1);
      UNLOCK();
    }
    puVar25[5] = local_1530;
    puVar25[6] = pTStack_1528;
  }
  if (bVar11) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar37);
  }
  if (bVar12) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar37);
  }
  if (bVar13) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1198.SharedReferenceCount.ReferenceController);
  }
  bVar12 = false;
  bVar11 = false;
  if (local_12f0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_12f0.Accessor,&local_12f0);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar24->_OnKeyDownHandler,
             (FWriteAccessScope *)&local_12d0);
  local_12b8 = &(pFVar24->_OnKeyDownHandler).field_0x8;
  puVar25 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_12b8);
  pSVar37 = local_res8;
  if (puVar25 != (undefined8 *)0x0) {
    local_1530 = (SScrollBar *)OnKeyDownHandler;
    pTStack_1528 = (TReferenceControllerBase<1> *)((ulonglong)uStack_1438 & 0xffffffff00000000);
    pTVar26 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_11a8);
    pSVar37 = (SWidget *)(pTVar26->SharedReferenceCount).ReferenceController;
    local_1520 = (FName)pTVar26->Object;
    if (pSVar37 != (SWidget *)0x0) {
      LOCK();
      *(atomic<int> *)&pSVar37->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar37->_padding_ + 1);
      UNLOCK();
      LOCK();
      *(atomic<int> *)&pSVar37->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar37->_padding_ + 1);
      UNLOCK();
    }
    bVar11 = true;
    bVar12 = true;
    *puVar25 = &
               ___7__TCommonDelegateInstanceState___A6A_AVFReply__AEBUFGeometry__AEBUFKeyEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar27 = FDelegateHandle::GenerateNewID();
    puVar25[2] = uVar27;
    *puVar25 = &
               ___7__TBaseSPMethodDelegateInstance__0A_V__SComboBox_V__TSharedPtr_UFWidgetSnapshotTarget_WidgetReflectorImpl___00_____00__A6A_AVFReply__AEBUFGeometry__AEBUFKeyEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FName *)(puVar25 + 3) = local_1520;
    puVar25[4] = pSVar37;
    if (pSVar37 != (SWidget *)0x0) {
      LOCK();
      ((atomic<int> *)&pSVar37->_padding_)[1] =
           (atomic<int>)((int)((atomic<int> *)&pSVar37->_padding_)[1] + 1);
      UNLOCK();
    }
    puVar25[5] = local_1530;
    puVar25[6] = pTStack_1528;
  }
  if (bVar11) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar37);
  }
  if (bVar12) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_11a8.SharedReferenceCount.ReferenceController);
  }
  bVar13 = false;
  bVar12 = false;
  bVar11 = false;
  if (local_12d0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_12d0.Accessor,&local_12d0);
  }
  local_14dc = 1;
  local_14e0 = 1;
  local_14c8 = 0;
  local_14d8 = (undefined1  [8])0x0;
  FStack_14d0.Data = (FScriptContainerElement *)0x0;
  (pFVar24->_SelectionMode).Value = Single;
  (pFVar24->_SelectionMode).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar24->_SelectionMode).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_14d8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_14d8,
             (FWriteAccessScope *)&local_13a0);
  if (((int)local_14c8 != 0) && (FStack_14d0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_14d0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_14d0,0,0,0x10);
    local_14c8 = local_14c8 & 0xffffffff00000000;
  }
  if (local_13a0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_13a0.Accessor,&local_13a0);
  }
  if (FStack_14d0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_14d0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_14d8);
  pFVar24->_ScrollBarStyle = param_1->_ScrollBarStyle;
  pTVar5 = (param_1->_CustomScrollbar).SharedReferenceCount.ReferenceController;
  pSVar6 = (param_1->_CustomScrollbar).Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1530 = (pFVar24->_ExternalScrollbar).Object;
  pTStack_1528 = (pFVar24->_ExternalScrollbar).SharedReferenceCount.ReferenceController;
  (pFVar24->_ExternalScrollbar).Object = pSVar6;
  (pFVar24->_ExternalScrollbar).SharedReferenceCount.ReferenceController = pTVar5;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1528);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  FLLMScope::FLLMScope(local_res20,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1520 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1410,&local_1520,true);
  TSlateDecl<SListView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,RequiredArgs::T0RequiredArgs>
  ::
  TSlateDecl<SListView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,RequiredArgs::T0RequiredArgs>
            (&local_14a0,"SComboListType",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Input\\SComboBox.h"
             ,0xda,(T0RequiredArgs *)&local_res8);
  FMemScope::~FMemScope(&local_1410);
  FLLMScope::~FLLMScope(local_res20);
  if (local_14a0._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_14a0._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_14a0._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_11b8 = (this->ComboListView).Object;
  pTStack_11b0 = (this->ComboListView).SharedReferenceCount.ReferenceController;
  (this->ComboListView).Object = local_14a0._Widget.Object;
  (this->ComboListView).SharedReferenceCount.ReferenceController =
       local_14a0._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_11b0);
  pSVar28 = TSharedPtr<SListView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,1>::
            operator->(&local_14a0._Widget);
  SWidget::SWidgetConstruct((SWidget *)pSVar28,(FSlateBaseNamedArgs *)pFVar24);
  pSVar28 = local_14a0._Widget.Object;
  SListView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>::Construct
            (local_14a0._Widget.Object,pFVar24);
  pSVar29 = TSharedPtr<SListView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,1>::
            operator->(&local_14a0._Widget);
  if ((pSVar29->_padding_ & 0x10) == 0) {
    cVar22 = (**(code **)(pSVar29->_padding_ + 0x228))(pSVar29);
    bVar23 = 0;
    if (cVar22 == '\0') goto LAB_142e33d1e;
  }
  bVar23 = 0x20;
LAB_142e33d1e:
  *(byte *)&pSVar29->_padding_ = (byte)pSVar29->_padding_ & 0xdf;
  *(byte *)&pSVar29->_padding_ = (byte)pSVar29->_padding_ | bVar23;
  pSVar29 = TSharedPtr<SListView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,1>::
            operator->(&local_14a0._Widget);
  pbVar1 = (byte *)((longlong)&pSVar29->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((local_14a0._Widget.Object ==
       (SListView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *)0x0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar21)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  FVar19.ReferenceController = local_14a0._Widget.SharedReferenceCount.ReferenceController;
  local_14a0._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_14a0._Widget.Object =
       (SListView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *)0x0;
  if ((pSVar28 == (SListView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *)0x0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar21)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pFVar20 = local_1460;
  if (FVar19.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar19.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar19.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (FVar19.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar19.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_11c8 = (local_1460->_Content).Widget.Object;
  pTStack_11c0 = (local_1460->_Content).Widget.SharedReferenceCount.ReferenceController;
  (local_1460->_Content).Widget.Object = (SWidget *)pSVar28;
  (local_1460->_Content).Widget.SharedReferenceCount.ReferenceController =
       FVar19.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_11c0);
  FLLMScope::FLLMScope(local_1510,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1408 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1400,&local_1408,true);
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
            (&local_11e0,"SBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Input\\SComboBox.h"
             ,0xd7,(T0RequiredArgs *)&local_res10);
  FMemScope::~FMemScope(&local_1400);
  FLLMScope::~FLLMScope(local_1510);
  pTVar30 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_11e0,&local_1230,pFVar20);
  local_1448.ReferenceController = (pTVar30->SharedReferenceCount).ReferenceController;
  local_1450 = pTVar30->Object;
  if (local_1448.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1448.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_1448.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->ComboBoxMenuContent != (TSharedPtr<SBox,1> *)&local_1450) {
    (this->ComboBoxMenuContent).Object = local_1450;
    local_1450 = (SBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ComboBoxMenuContent).SharedReferenceCount,&local_1448);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1448.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1230.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_11e0._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar19.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar19.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_14a0._Widget.SharedReferenceCount.ReferenceController);
  SListView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>::FArguments::~FArguments
            (&local_a80);
  SBox::FArguments::~FArguments(&local_dc0);
  local_1430.Object = (param_1->_Content).Widget.Object;
  local_1430.SharedReferenceCount.ReferenceController =
       (param_1->_Content).Widget.SharedReferenceCount.ReferenceController;
  if (local_1430.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1430.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1430.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((param_1->_Content).Widget.Object == SNullWidget::NullWidget.Object) {
    pFVar31 = STextBlock::FArguments::FArguments(&local_5a0);
    pFVar32 = FText::AsLocalizable_Advanced_LocText
                        (&local_11f0,L"SComboBox",L"ContentWarning",L"No Content Provided");
    FText::FText(&local_1290.Value,pFVar32);
    local_1290.bIsSet = true;
    local_1290.Getter._16_8_ = 0;
    local_1290.Getter._0_8_ = 0;
    local_1290.Getter._8_8_ = 0;
    pFVar31 = STextBlock::FArguments::Text(pFVar31,&local_1290);
    local_1348 = 0;
    local_1344 = 1;
    local_1330 = 0;
    local_1358 = FLinearColor::Red.field0_0x0;
    local_1340 = 0;
    uStack_1338 = 0;
    pFVar31 = STextBlock::FArguments::ColorAndOpacity
                        (pFVar31,(TAttribute<FSlateColor> *)&local_1358._s_0);
    pTVar33 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                        (&local_1110,"STextBlock",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Input\\SComboBox.h"
                         ,0xe9,local_res18);
    pTVar33 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::Expose<SWidget>
                        (pTVar33,&local_1430);
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=(pTVar33,&local_1240,pFVar31);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1240.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1110._Widget.SharedReferenceCount.ReferenceController);
    if (local_11f0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_11f0.TextData.Reference + 0x10))();
    }
    STextBlock::FArguments::~FArguments(&local_5a0);
  }
  local_13e0.OwnerDeclaration = SComboButton::FArguments::FArguments(&local_10f8);
  (local_13e0.OwnerDeclaration)->_ComboButtonStyle = local_13f8;
  (local_13e0.OwnerDeclaration)->_ButtonStyle = local_1458;
  local_1537 = (param_1->_Method).bIsSet;
  if ((bool)local_1537 != false) {
    local_1538 = (param_1->_Method).TypedValue;
  }
  if ((TOptional<EPopupMethod> *)&local_1538 != &(local_13e0.OwnerDeclaration)->_Method) {
    if ((bool)local_1537 == false) {
      if (((local_13e0.OwnerDeclaration)->_Method).bIsSet != false) {
        ((local_13e0.OwnerDeclaration)->_Method).bIsSet = false;
      }
    }
    else {
      pEVar34 = TOptional<enum_EPopupMethod>::GetValue(&local_1538);
      ((local_13e0.OwnerDeclaration)->_Method).TypedValue = *pEVar34;
      ((local_13e0.OwnerDeclaration)->_Method).bIsSet = true;
    }
  }
  local_13e0.SlotContent = &(local_13e0.OwnerDeclaration)->_ButtonContent;
  pTVar26 = TSharedPtr<SWidget,1>::ToSharedRef(&local_1430,&local_1200);
  pFVar35 = NamedSlotProperty<SComboButton::FArguments>::operator[](&local_13e0,pTVar26);
  pTVar30 = TSharedPtr<SBox,1>::ToSharedRef(&this->ComboBoxMenuContent,&local_1220);
  pTVar5 = (pTVar30->SharedReferenceCount).ReferenceController;
  local_14f0 = pTVar30->Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar14 = (pFVar35->_MenuContent).Widget.SharedReferenceCount.ReferenceController;
  (pFVar35->_MenuContent).Widget.Object = (SWidget *)local_14f0;
  (pFVar35->_MenuContent).Widget.SharedReferenceCount.ReferenceController = pTVar5;
  pTStack_14e8 = pTVar5;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
  pFVar35->_HasDownArrow = param_1->_HasDownArrow;
  local_1188.Value.Left = (param_1->_ContentPadding).Value.Left;
  local_1188.Value.Top = (param_1->_ContentPadding).Value.Top;
  local_1188.Value.Right = (param_1->_ContentPadding).Value.Right;
  local_1188.Value.Bottom = (param_1->_ContentPadding).Value.Bottom;
  local_1188.bIsSet = (param_1->_ContentPadding).bIsSet;
  local_1188.Getter._16_4_ = 0;
  local_1188.Getter._0_8_ = 0;
  local_1188.Getter._8_8_ = 0;
  TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&local_1188.Getter,&(param_1->_ContentPadding).Getter);
  pFVar35 = SComboButton::FArguments::ContentPadding(pFVar35,&local_1188);
  local_1148._0_1_ = (param_1->_ForegroundColor).Value.ColorUseRule;
  local_1148._1_1_ = (param_1->_ForegroundColor).Value.ColorTableId;
  local_1148._2_2_ = *(undefined2 *)&(param_1->_ForegroundColor).Value.field_0x12;
  local_1158._0_8_ = *(undefined8 *)&(param_1->_ForegroundColor).Value.SpecifiedColor.field0_0x0;
  local_1158._8_8_ =
       *(undefined8 *)((longlong)&(param_1->_ForegroundColor).Value.SpecifiedColor.field0_0x0 + 8);
  local_1144 = (param_1->_ForegroundColor).bIsSet;
  TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
            (&local_1140,&(param_1->_ForegroundColor).Getter);
  pFVar35 = SComboButton::FArguments::ForegroundColor
                      (pFVar35,(TAttribute<FSlateColor> *)&local_1158._s_0);
  local_res10 = pFVar35;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar35->_OnMenuOpenChanged,
             (FWriteAccessScope *)&local_12b0);
  local_1298 = &(pFVar35->_OnMenuOpenChanged).field_0x8;
  puVar25 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_1298);
  pSVar37 = local_res8;
  if (puVar25 != (undefined8 *)0x0) {
    local_14f0 = (SBox *)OnMenuOpenChanged;
    pTStack_14e8 = (TReferenceControllerBase<1> *)((ulonglong)uStack_1438._4_4_ << 0x20);
    pTVar26 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_1210);
    pSVar37 = (SWidget *)(pTVar26->SharedReferenceCount).ReferenceController;
    local_res8 = pTVar26->Object;
    if (pSVar37 != (SWidget *)0x0) {
      LOCK();
      *(atomic<int> *)&pSVar37->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar37->_padding_ + 1);
      UNLOCK();
      LOCK();
      *(atomic<int> *)&pSVar37->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar37->_padding_ + 1);
      UNLOCK();
    }
    bVar13 = true;
    bVar12 = true;
    bVar11 = true;
    *puVar25 = &___7__TCommonDelegateInstanceState___A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar27 = FDelegateHandle::GenerateNewID();
    puVar25[2] = uVar27;
    *puVar25 = &
               ___7__TBaseSPMethodDelegateInstance__0A_V__SComboBox_V__TSharedPtr_UFWidgetSnapshotTarget_WidgetReflectorImpl___00_____00__A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar25[3] = local_res8;
    puVar25[4] = pSVar37;
    if (pSVar37 != (SWidget *)0x0) {
      LOCK();
      ((atomic<int> *)&pSVar37->_padding_)[1] =
           (atomic<int>)((int)((atomic<int> *)&pSVar37->_padding_)[1] + 1);
      UNLOCK();
    }
    puVar25[5] = local_14f0;
    puVar25[6] = pTStack_14e8;
  }
  if (bVar11) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar37);
  }
  if (bVar12) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar37);
  }
  if (bVar13) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1210.SharedReferenceCount.ReferenceController);
  }
  if (local_12b0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_12b0.Accessor,&local_12b0);
  }
  local_res10->_IsFocusable = param_1->_IsFocusable;
  local_res10->_CollapseMenuOnParentFocus = param_1->_CollapseMenuOnParentFocus;
  SComboButton::Construct((SComboButton *)this,local_res10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1220.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1200.SharedReferenceCount.ReferenceController);
  SComboButton::FArguments::~FArguments(&local_10f8);
  local_13d0.Object = (SWidget *)(this->ComboListView).Object;
  local_13d0.WeakReferenceCount.ReferenceController =
       (this->ComboListView).SharedReferenceCount.ReferenceController;
  if (local_13d0.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_13d0.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_13d0.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  SComboButton::SetMenuContentWidgetToFocus((SComboButton *)this,&local_13d0);
  pTVar5 = (param_1->_InitiallySelectedItem).SharedReferenceCount.ReferenceController;
  pFVar8 = (param_1->_InitiallySelectedItem).Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1440 = (this->SelectedItem).Object;
  uStack_1438 = (this->SelectedItem).SharedReferenceCount.ReferenceController;
  (this->SelectedItem).Object = pFVar8;
  (this->SelectedItem).SharedReferenceCount.ReferenceController = pTVar5;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(uStack_1438);
  pFVar8 = (this->SelectedItem).Object;
  if (pFVar8 != (FWidgetSnapshotTarget *)0x0) {
    pTVar5 = (this->SelectedItem).SharedReferenceCount.ReferenceController;
    if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
      paVar38 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar38 = &pTVar5->SharedReferenceCount;
      LOCK();
      *paVar38 = (atomic<int>)((int)*paVar38 + 1);
      UNLOCK();
    }
    pSVar28 = TSharedPtr<SListView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,1>::
              operator->(&this->ComboListView);
    lVar9 = pSVar28->_padding_;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar38 = (atomic<int>)((int)*paVar38 + 1);
      UNLOCK();
    }
    local_13c0 = pFVar8;
    local_13b8 = pTVar5;
    (**(code **)(lVar9 + 0x28))(&pSVar28->_padding_,&local_13c0,1,0);
    pSVar28 = TSharedPtr<SListView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,1>::
              operator->(&this->ComboListView);
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar38 = (atomic<int>)((int)*paVar38 + 1);
      UNLOCK();
    }
    local_13b0.Object = pFVar8;
    local_13b0.SharedReferenceCount.ReferenceController = pTVar5;
    SListView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>::RequestScrollIntoView
              (pSVar28,&local_13b0,0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  }
  pSVar28 = TSharedPtr<SListView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,1>::
            operator->(&this->ComboListView);
  local_1488._0_8_ = FStyleDefaults::GetNoBrush();
  local_1488[8] = true;
  local_1468 = 0;
  local_1478.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_1470.Data = (FScriptContainerElement *)0x0;
  STableViewBase::SetBackgroundBrush
            ((STableViewBase *)pSVar28,(TAttribute<FSlateBrush_const_*> *)local_1488);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_1478,(FWriteAccessScope *)&local_1388);
  if (((int)local_1468 != 0) && (FStack_1470.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1470.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1470,0,0,0x10);
    local_1468 = local_1468 & 0xffffffff00000000;
  }
  if (local_1388.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1388.Accessor,&local_1388);
  }
  if (FStack_1470.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1470.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_1478.AccessDetector);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1430.SharedReferenceCount.ReferenceController);
  return;
}

// Construct @ 142e34580

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Removing unreachable block (ram,0x000142e34ca1) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SComboBox<TSharedPtr<FWidgetReflectorNodeBase,1>_>::Construct
          (SComboBox<TSharedPtr<FWidgetReflectorNodeBase,1>_> *this,FArguments *param_1)

{
  byte *pbVar1;
  TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<FWidgetReflectorNodeBase,1>_>,1>
  *pTVar2;
  FComboBoxStyle *pFVar3;
  longlong *plVar4;
  TReferenceControllerBase<1> *pTVar5;
  SScrollBar *pSVar6;
  SWidget *pSVar7;
  FWidgetReflectorNodeBase *pFVar8;
  longlong lVar9;
  code *pcVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  TReferenceControllerBase<1> *pTVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  FSharedReferencer<1> FVar19;
  FArguments *pFVar20;
  bool bVar21;
  char cVar22;
  byte bVar23;
  FArguments *pFVar24;
  undefined8 *puVar25;
  TSharedRef<SWidget,1> *pTVar26;
  ulong64 uVar27;
  SListView<TSharedPtr<FWidgetReflectorNodeBase,1>_> *pSVar28;
  SListView<TSharedPtr<FWidgetReflectorNodeBase,1>_> *pSVar29;
  TSharedRef<SBox,1> *pTVar30;
  FArguments *pFVar31;
  FText *pFVar32;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> *pTVar33;
  EPopupMethod *pEVar34;
  FArguments *pFVar35;
  FSlateSound *pFVar36;
  SWidget *pSVar37;
  atomic<int> *paVar38;
  SWidget *local_res8;
  FArguments *local_res10;
  T0RequiredArgs local_res18 [8];
  FLLMScope local_res20 [2];
  EPopupMethod local_1538;
  char local_1537;
  SScrollBar *local_1530;
  TReferenceControllerBase<1> *pTStack_1528;
  FName local_1520;
  undefined4 uStack_1518;
  undefined4 uStack_1514;
  FLLMScope local_1510 [2];
  undefined1 local_1508 [8];
  ForAnyElementType local_1500;
  int local_14f8;
  SBox *local_14f0;
  TReferenceControllerBase<1> *pTStack_14e8;
  undefined4 local_14e0;
  undefined1 local_14dc;
  undefined1 local_14d8 [8];
  ForAnyElementType FStack_14d0;
  ulonglong local_14c8;
  float local_14c0;
  undefined1 local_14bc;
  undefined1 local_14b8 [8];
  ForAnyElementType FStack_14b0;
  ulonglong local_14a8;
  TSlateDecl<SListView<TSharedPtr<FWidgetReflectorNodeBase,1>_>,RequiredArgs::T0RequiredArgs>
  local_14a0;
  undefined1 local_1488 [16];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_1478;
  ForAnyElementType FStack_1470;
  ulonglong local_1468;
  FArguments *local_1460;
  FButtonStyle *local_1458;
  SBox *local_1450;
  FSharedReferencer<1> local_1448;
  FWidgetReflectorNodeBase *local_1440;
  undefined8 uStack_1438;
  TSharedPtr<SWidget,1> local_1430;
  TObservableArray<TSharedPtr<FWidgetReflectorNodeBase,1>_> *local_1420;
  TReferenceControllerBase<1> *pTStack_1418;
  FMemScope local_1410;
  FName local_1408;
  FMemScope local_1400;
  FComboButtonStyle *local_13f8;
  FName local_13f0;
  FSharedReferencer<1> FStack_13e8;
  NamedSlotProperty<SComboButton::FArguments> local_13e0;
  TWeakPtr<SWidget,1> local_13d0;
  FWidgetReflectorNodeBase *local_13c0;
  TReferenceControllerBase<1> *local_13b8;
  TSharedPtr<FWidgetReflectorNodeBase,1> local_13b0;
  FDestructionSentinel local_13a0;
  FDestructionSentinel local_1388;
  FDestructionSentinel local_1370;
  FLinearColor_u_0 local_1358;
  undefined1 local_1348;
  undefined1 local_1344;
  undefined8 local_1340;
  undefined8 uStack_1338;
  undefined8 local_1330;
  FDestructionSentinel local_1328;
  FDestructionSentinel local_1310;
  undefined1 *local_12f8;
  FDestructionSentinel local_12f0;
  undefined1 *local_12d8;
  FDestructionSentinel local_12d0;
  undefined1 *local_12b8;
  FDestructionSentinel local_12b0;
  undefined1 *local_1298;
  TAttribute<FText> local_1290;
  SScrollBar *local_1260;
  TReferenceControllerBase<1> *pTStack_1258;
  TSharedRef<SWidget,1> local_1250;
  TSharedRef<STextBlock,1> local_1240;
  TSharedRef<SBox,1> local_1230;
  TSharedRef<SBox,1> local_1220;
  TSharedRef<SWidget,1> local_1210;
  TSharedRef<SWidget,1> local_1200;
  FText local_11f0;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_11e0;
  SWidget *local_11c8;
  TReferenceControllerBase<1> *pTStack_11c0;
  SListView<TSharedPtr<FWidgetReflectorNodeBase,1>_> *local_11b8;
  TReferenceControllerBase<1> *pTStack_11b0;
  TSharedRef<SWidget,1> local_11a8;
  TSharedRef<SWidget,1> local_1198;
  TAttribute<FMargin> local_1188;
  FLinearColor_u_0 local_1158;
  undefined4 local_1148;
  undefined1 local_1144;
  TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy> local_1140;
  FReadAccessScope local_1128;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_1110;
  FArguments local_10f8;
  FArguments local_dc0;
  FArguments local_a80;
  FArguments local_5a0;
  undefined8 uStack_48;
  
  uStack_48 = 0x142e3459f;
  bVar13 = false;
  bVar12 = false;
  bVar11 = false;
  local_res8 = (SWidget *)((ulonglong)local_res8 & 0xffffffff00000000);
  if ((param_1->_ComboBoxStyle == (FComboBoxStyle *)0x0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("InArgs._ComboBoxStyle",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Input\\SComboBox.h"
                          ,0xc1,L""), bVar21)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  this->ItemStyle = param_1->_ItemStyle;
  pFVar3 = param_1->_ComboBoxStyle;
  this->ComboBoxStyle = pFVar3;
  fVar15 = (pFVar3->MenuRowPadding).Left;
  fVar16 = (pFVar3->MenuRowPadding).Top;
  fVar17 = (pFVar3->MenuRowPadding).Right;
  fVar18 = (pFVar3->MenuRowPadding).Bottom;
  *(undefined1 *)&this->_padding_ = 0;
  local_13f8 = &pFVar3->ComboButtonStyle;
  (this->MenuRowPadding).Left = fVar15;
  (this->MenuRowPadding).Top = fVar16;
  (this->MenuRowPadding).Right = fVar17;
  (this->MenuRowPadding).Bottom = fVar18;
  local_1458 = param_1->_ButtonStyle;
  if (local_1458 == (FButtonStyle *)0x0) {
    local_1458 = &(pFVar3->ComboButtonStyle).ButtonStyle;
  }
  pFVar36 = &(param_1->_PressedSoundOverride).TypedValue;
  if ((param_1->_PressedSoundOverride).bIsSet == false) {
    pFVar36 = &pFVar3->PressedSlateSound;
  }
  FSlateSound::operator=(&this->PressedSound,pFVar36);
  pFVar36 = &(param_1->_SelectionChangeSoundOverride).TypedValue;
  if ((param_1->_SelectionChangeSoundOverride).bIsSet == false) {
    pFVar36 = &this->ComboBoxStyle->SelectionChangeSlateSound;
  }
  FSlateSound::operator=(&this->SelectionChangeSound,pFVar36);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::operator=
            (&this->OnComboBoxOpening,&param_1->_OnComboBoxOpening);
  TDelegate<void___cdecl(TSharedPtr<FWidgetReflectorNodeBase,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
  ::operator=(&this->OnSelectionChanged,&param_1->_OnSelectionChanged);
  if (&param_1->_OnGenerateWidget != &this->OnGenerateWidget) {
    local_1508 = (undefined1  [8])0x0;
    local_1500.Data = (FScriptContainerElement *)0x0;
    local_14f8 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->_OnGenerateWidget
               ,&local_1128);
    if ((*(int *)&(param_1->_OnGenerateWidget).field_0x10 != 0) &&
       (plVar4 = *(longlong **)&(param_1->_OnGenerateWidget).field_0x8, plVar4 != (longlong *)0x0))
    {
      (**(code **)(*plVar4 + 0x50))(plVar4,local_1508);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_1128);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnGenerateWidget,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1508);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1508,
               (FWriteAccessScope *)&local_1328);
    if ((local_14f8 != 0) && (local_1500.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_1500.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_1500,0,0,0x10);
      local_14f8 = 0;
    }
    if (local_1328.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1328.Accessor,&local_1328);
    }
    if (local_1500.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1500.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_1508);
  }
  this->EnableGamepadNavigationMode = param_1->_EnableGamepadNavigationMode;
  this->bControllerInputCaptured = false;
  pTVar5 = (param_1->_CustomScrollbar).SharedReferenceCount.ReferenceController;
  pSVar6 = (param_1->_CustomScrollbar).Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1260 = (this->CustomScrollbar).Object;
  pTStack_1258 = (this->CustomScrollbar).SharedReferenceCount.ReferenceController;
  (this->CustomScrollbar).Object = pSVar6;
  (this->CustomScrollbar).SharedReferenceCount.ReferenceController = pTVar5;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1258);
  local_1460 = SBox::FArguments::FArguments(&local_dc0);
  local_14c0 = param_1->_MaxListHeight;
  local_14bc = 1;
  local_14a8 = 0;
  local_14b8 = (undefined1  [8])0x0;
  FStack_14b0.Data = (FScriptContainerElement *)0x0;
  (local_1460->_MaxDesiredHeight).Value.Size = local_14c0;
  (local_1460->_MaxDesiredHeight).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(local_1460->_MaxDesiredHeight).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_14b8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_14b8,
             (FWriteAccessScope *)&local_1370);
  if (((int)local_14a8 != 0) && (FStack_14b0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_14b0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_14b0,0,0,0x10);
    local_14a8 = local_14a8 & 0xffffffff00000000;
  }
  if (local_1370.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1370.Accessor,&local_1370);
  }
  if (FStack_14b0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_14b0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_14b8);
  pFVar24 = SListView<TSharedPtr<FWidgetReflectorNodeBase,1>_>::FArguments::FArguments(&local_a80);
  pTVar5 = (param_1->_OptionsSource_SharedObservableArray).SharedReferenceCount.ReferenceController;
  local_1420 = (TObservableArray<TSharedPtr<FWidgetReflectorNodeBase,1>_> *)
               param_1->_OptionsSource_ArrayPointer;
  local_1530 = (SScrollBar *)param_1->_OptionsSource_ObservableArrayPointer;
  local_1520 = (FName)(param_1->_OptionsSource_SharedObservableArray).Object;
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
    paVar38 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar38 = &pTVar5->SharedReferenceCount;
    LOCK();
    *paVar38 = (atomic<int>)((int)*paVar38 + 1);
    UNLOCK();
  }
  pFVar24->_ListItemsSource_ArrayPointer =
       (TArray<TSharedPtr<FWidgetReflectorNodeBase,1>,TSizedDefaultAllocator<32>_> *)0x0;
  pFVar24->_ListItemsSource_ObservableArrayPointer =
       (TObservableArray<TSharedPtr<FWidgetReflectorNodeBase,1>_> *)0x0;
  pTVar2 = &pFVar24->_ListItemsSource_SharedObservableArray;
  local_13f0.ComparisonIndex.Value = 0;
  local_13f0.Number = 0;
  FStack_13e8.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (pTVar2 != (TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<FWidgetReflectorNodeBase,1>_>,1>
                 *)&local_13f0) {
    pTVar2->Object = (TObservableArray<TSharedPtr<FWidgetReflectorNodeBase,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(pFVar24->_ListItemsSource_SharedObservableArray).SharedReferenceCount,&FStack_13e8)
    ;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_13e8.ReferenceController);
  pFVar24->_ListItemsSource_ArrayPointer = &local_1420->Array;
  pFVar24->_ListItemsSource_ObservableArrayPointer =
       (TObservableArray<TSharedPtr<FWidgetReflectorNodeBase,1>_> *)local_1530;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar38 = (atomic<int>)((int)*paVar38 + 1);
    UNLOCK();
  }
  local_1420 = pTVar2->Object;
  pTStack_1418 = (pFVar24->_ListItemsSource_SharedObservableArray).SharedReferenceCount.
                 ReferenceController;
  pTVar2->Object = (TObservableArray<TSharedPtr<FWidgetReflectorNodeBase,1>_> *)local_1520;
  (pFVar24->_ListItemsSource_SharedObservableArray).SharedReferenceCount.ReferenceController =
       pTVar5;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1418);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar24->_OnGenerateRow,
             (FWriteAccessScope *)&local_1310);
  local_12f8 = &(pFVar24->_OnGenerateRow).field_0x8;
  puVar25 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_12f8);
  pSVar37 = local_res8;
  if (puVar25 != (undefined8 *)0x0) {
    uStack_1514 = uStack_1438._4_4_;
    local_1520 = (FName)GenerateMenuItemRow;
    uStack_1518 = 0;
    pTVar26 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_1250);
    pSVar37 = (SWidget *)(pTVar26->SharedReferenceCount).ReferenceController;
    pSVar7 = pTVar26->Object;
    if (pSVar37 != (SWidget *)0x0) {
      LOCK();
      *(atomic<int> *)&pSVar37->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar37->_padding_ + 1);
      UNLOCK();
      LOCK();
      *(atomic<int> *)&pSVar37->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar37->_padding_ + 1);
      UNLOCK();
    }
    *puVar25 = &
               ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VITableRow___00__V__TSharedPtr_VFWidgetReflectorNodeBase___00__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar27 = FDelegateHandle::GenerateNewID();
    puVar25[2] = uVar27;
    *puVar25 = &
               ___7__TBaseSPMethodDelegateInstance__0A_V__SComboBox_V__TSharedPtr_VFWidgetReflectorNodeBase___00_____00__A6A_AV__TSharedRef_VITableRow___00__V__TSharedPtr_VFWidgetReflectorNodeBase___00__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar25[3] = pSVar7;
    puVar25[4] = pSVar37;
    if (pSVar37 != (SWidget *)0x0) {
      LOCK();
      ((atomic<int> *)&pSVar37->_padding_)[1] =
           (atomic<int>)((int)((atomic<int> *)&pSVar37->_padding_)[1] + 1);
      UNLOCK();
    }
    bVar13 = true;
    bVar12 = true;
    bVar11 = true;
    *(FName *)(puVar25 + 5) = local_1520;
    puVar25[6] = CONCAT44(uStack_1514,uStack_1518);
  }
  if (bVar12) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar37);
  }
  if (bVar13) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar37);
  }
  if (bVar11) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1250.SharedReferenceCount.ReferenceController);
  }
  bVar13 = false;
  bVar12 = false;
  bVar11 = false;
  if (local_1310.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1310.Accessor,&local_1310);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar24->_OnSelectionChanged
             ,(FWriteAccessScope *)&local_12f0);
  local_12d8 = &(pFVar24->_OnSelectionChanged).field_0x8;
  puVar25 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_12d8);
  pSVar37 = local_res8;
  if (puVar25 != (undefined8 *)0x0) {
    local_1530 = (SScrollBar *)OnSelectionChanged_Internal;
    pTStack_1528 = (TReferenceControllerBase<1> *)((ulonglong)uStack_1438 & 0xffffffff00000000);
    pTVar26 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_1198);
    pSVar37 = (SWidget *)(pTVar26->SharedReferenceCount).ReferenceController;
    local_1520 = (FName)pTVar26->Object;
    if (pSVar37 != (SWidget *)0x0) {
      LOCK();
      *(atomic<int> *)&pSVar37->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar37->_padding_ + 1);
      UNLOCK();
      LOCK();
      *(atomic<int> *)&pSVar37->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar37->_padding_ + 1);
      UNLOCK();
    }
    bVar11 = true;
    bVar13 = true;
    bVar12 = true;
    *puVar25 = &
               ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VFWidgetReflectorNodeBase___00__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar27 = FDelegateHandle::GenerateNewID();
    puVar25[2] = uVar27;
    *puVar25 = &
               ___7__TBaseSPMethodDelegateInstance__0A_V__SComboBox_V__TSharedPtr_VFWidgetReflectorNodeBase___00_____00__A6AXV__TSharedPtr_VFWidgetReflectorNodeBase___00__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FName *)(puVar25 + 3) = local_1520;
    puVar25[4] = pSVar37;
    if (pSVar37 != (SWidget *)0x0) {
      LOCK();
      ((atomic<int> *)&pSVar37->_padding_)[1] =
           (atomic<int>)((int)((atomic<int> *)&pSVar37->_padding_)[1] + 1);
      UNLOCK();
    }
    puVar25[5] = local_1530;
    puVar25[6] = pTStack_1528;
  }
  if (bVar11) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar37);
  }
  if (bVar12) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar37);
  }
  if (bVar13) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1198.SharedReferenceCount.ReferenceController);
  }
  bVar12 = false;
  bVar11 = false;
  if (local_12f0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_12f0.Accessor,&local_12f0);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar24->_OnKeyDownHandler,
             (FWriteAccessScope *)&local_12d0);
  local_12b8 = &(pFVar24->_OnKeyDownHandler).field_0x8;
  puVar25 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_12b8);
  pSVar37 = local_res8;
  if (puVar25 != (undefined8 *)0x0) {
    local_1530 = (SScrollBar *)OnKeyDownHandler;
    pTStack_1528 = (TReferenceControllerBase<1> *)((ulonglong)uStack_1438 & 0xffffffff00000000);
    pTVar26 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_11a8);
    pSVar37 = (SWidget *)(pTVar26->SharedReferenceCount).ReferenceController;
    local_1520 = (FName)pTVar26->Object;
    if (pSVar37 != (SWidget *)0x0) {
      LOCK();
      *(atomic<int> *)&pSVar37->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar37->_padding_ + 1);
      UNLOCK();
      LOCK();
      *(atomic<int> *)&pSVar37->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar37->_padding_ + 1);
      UNLOCK();
    }
    bVar11 = true;
    bVar12 = true;
    *puVar25 = &
               ___7__TCommonDelegateInstanceState___A6A_AVFReply__AEBUFGeometry__AEBUFKeyEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar27 = FDelegateHandle::GenerateNewID();
    puVar25[2] = uVar27;
    *puVar25 = &
               ___7__TBaseSPMethodDelegateInstance__0A_V__SComboBox_V__TSharedPtr_VFWidgetReflectorNodeBase___00_____00__A6A_AVFReply__AEBUFGeometry__AEBUFKeyEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FName *)(puVar25 + 3) = local_1520;
    puVar25[4] = pSVar37;
    if (pSVar37 != (SWidget *)0x0) {
      LOCK();
      ((atomic<int> *)&pSVar37->_padding_)[1] =
           (atomic<int>)((int)((atomic<int> *)&pSVar37->_padding_)[1] + 1);
      UNLOCK();
    }
    puVar25[5] = local_1530;
    puVar25[6] = pTStack_1528;
  }
  if (bVar11) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar37);
  }
  if (bVar12) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_11a8.SharedReferenceCount.ReferenceController);
  }
  bVar13 = false;
  bVar12 = false;
  bVar11 = false;
  if (local_12d0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_12d0.Accessor,&local_12d0);
  }
  local_14dc = 1;
  local_14e0 = 1;
  local_14c8 = 0;
  local_14d8 = (undefined1  [8])0x0;
  FStack_14d0.Data = (FScriptContainerElement *)0x0;
  (pFVar24->_SelectionMode).Value = Single;
  (pFVar24->_SelectionMode).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar24->_SelectionMode).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_14d8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_14d8,
             (FWriteAccessScope *)&local_13a0);
  if (((int)local_14c8 != 0) && (FStack_14d0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_14d0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_14d0,0,0,0x10);
    local_14c8 = local_14c8 & 0xffffffff00000000;
  }
  if (local_13a0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_13a0.Accessor,&local_13a0);
  }
  if (FStack_14d0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_14d0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_14d8);
  pFVar24->_ScrollBarStyle = param_1->_ScrollBarStyle;
  pTVar5 = (param_1->_CustomScrollbar).SharedReferenceCount.ReferenceController;
  pSVar6 = (param_1->_CustomScrollbar).Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1530 = (pFVar24->_ExternalScrollbar).Object;
  pTStack_1528 = (pFVar24->_ExternalScrollbar).SharedReferenceCount.ReferenceController;
  (pFVar24->_ExternalScrollbar).Object = pSVar6;
  (pFVar24->_ExternalScrollbar).SharedReferenceCount.ReferenceController = pTVar5;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1528);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  FLLMScope::FLLMScope(local_res20,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1520 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1410,&local_1520,true);
  TSlateDecl<SListView<TSharedPtr<FWidgetReflectorNodeBase,1>_>,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SListView<TSharedPtr<FWidgetReflectorNodeBase,1>_>,RequiredArgs::T0RequiredArgs>
            (&local_14a0,"SComboListType",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Input\\SComboBox.h"
             ,0xda,(T0RequiredArgs *)&local_res8);
  FMemScope::~FMemScope(&local_1410);
  FLLMScope::~FLLMScope(local_res20);
  if (local_14a0._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_14a0._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_14a0._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_11b8 = (this->ComboListView).Object;
  pTStack_11b0 = (this->ComboListView).SharedReferenceCount.ReferenceController;
  (this->ComboListView).Object = local_14a0._Widget.Object;
  (this->ComboListView).SharedReferenceCount.ReferenceController =
       local_14a0._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_11b0);
  pSVar28 = TSharedPtr<SListView<TSharedPtr<FWidgetReflectorNodeBase,1>_>,1>::operator->
                      (&local_14a0._Widget);
  SWidget::SWidgetConstruct((SWidget *)pSVar28,(FSlateBaseNamedArgs *)pFVar24);
  pSVar28 = local_14a0._Widget.Object;
  SListView<TSharedPtr<FWidgetReflectorNodeBase,1>_>::Construct(local_14a0._Widget.Object,pFVar24);
  pSVar29 = TSharedPtr<SListView<TSharedPtr<FWidgetReflectorNodeBase,1>_>,1>::operator->
                      (&local_14a0._Widget);
  if ((pSVar29->_padding_ & 0x10) == 0) {
    cVar22 = (**(code **)(pSVar29->_padding_ + 0x228))(pSVar29);
    bVar23 = 0;
    if (cVar22 == '\0') goto LAB_142e34eee;
  }
  bVar23 = 0x20;
LAB_142e34eee:
  *(byte *)&pSVar29->_padding_ = (byte)pSVar29->_padding_ & 0xdf;
  *(byte *)&pSVar29->_padding_ = (byte)pSVar29->_padding_ | bVar23;
  pSVar29 = TSharedPtr<SListView<TSharedPtr<FWidgetReflectorNodeBase,1>_>,1>::operator->
                      (&local_14a0._Widget);
  pbVar1 = (byte *)((longlong)&pSVar29->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((local_14a0._Widget.Object == (SListView<TSharedPtr<FWidgetReflectorNodeBase,1>_> *)0x0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar21)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  FVar19.ReferenceController = local_14a0._Widget.SharedReferenceCount.ReferenceController;
  local_14a0._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_14a0._Widget.Object = (SListView<TSharedPtr<FWidgetReflectorNodeBase,1>_> *)0x0;
  if ((pSVar28 == (SListView<TSharedPtr<FWidgetReflectorNodeBase,1>_> *)0x0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar21)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pFVar20 = local_1460;
  if (FVar19.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar19.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar19.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (FVar19.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar19.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_11c8 = (local_1460->_Content).Widget.Object;
  pTStack_11c0 = (local_1460->_Content).Widget.SharedReferenceCount.ReferenceController;
  (local_1460->_Content).Widget.Object = (SWidget *)pSVar28;
  (local_1460->_Content).Widget.SharedReferenceCount.ReferenceController =
       FVar19.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_11c0);
  FLLMScope::FLLMScope(local_1510,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1408 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1400,&local_1408,true);
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
            (&local_11e0,"SBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Input\\SComboBox.h"
             ,0xd7,(T0RequiredArgs *)&local_res10);
  FMemScope::~FMemScope(&local_1400);
  FLLMScope::~FLLMScope(local_1510);
  pTVar30 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_11e0,&local_1230,pFVar20);
  local_1448.ReferenceController = (pTVar30->SharedReferenceCount).ReferenceController;
  local_1450 = pTVar30->Object;
  if (local_1448.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1448.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_1448.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->ComboBoxMenuContent != (TSharedPtr<SBox,1> *)&local_1450) {
    (this->ComboBoxMenuContent).Object = local_1450;
    local_1450 = (SBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ComboBoxMenuContent).SharedReferenceCount,&local_1448);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1448.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1230.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_11e0._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar19.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar19.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_14a0._Widget.SharedReferenceCount.ReferenceController);
  SListView<TSharedPtr<FWidgetReflectorNodeBase,1>_>::FArguments::~FArguments(&local_a80);
  SBox::FArguments::~FArguments(&local_dc0);
  local_1430.Object = (param_1->_Content).Widget.Object;
  local_1430.SharedReferenceCount.ReferenceController =
       (param_1->_Content).Widget.SharedReferenceCount.ReferenceController;
  if (local_1430.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1430.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1430.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((param_1->_Content).Widget.Object == SNullWidget::NullWidget.Object) {
    pFVar31 = STextBlock::FArguments::FArguments(&local_5a0);
    pFVar32 = FText::AsLocalizable_Advanced_LocText
                        (&local_11f0,L"SComboBox",L"ContentWarning",L"No Content Provided");
    FText::FText(&local_1290.Value,pFVar32);
    local_1290.bIsSet = true;
    local_1290.Getter._16_8_ = 0;
    local_1290.Getter._0_8_ = 0;
    local_1290.Getter._8_8_ = 0;
    pFVar31 = STextBlock::FArguments::Text(pFVar31,&local_1290);
    local_1348 = 0;
    local_1344 = 1;
    local_1330 = 0;
    local_1358 = FLinearColor::Red.field0_0x0;
    local_1340 = 0;
    uStack_1338 = 0;
    pFVar31 = STextBlock::FArguments::ColorAndOpacity
                        (pFVar31,(TAttribute<FSlateColor> *)&local_1358._s_0);
    pTVar33 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                        (&local_1110,"STextBlock",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Input\\SComboBox.h"
                         ,0xe9,local_res18);
    pTVar33 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::Expose<SWidget>
                        (pTVar33,&local_1430);
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=(pTVar33,&local_1240,pFVar31);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1240.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1110._Widget.SharedReferenceCount.ReferenceController);
    if (local_11f0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_11f0.TextData.Reference + 0x10))();
    }
    STextBlock::FArguments::~FArguments(&local_5a0);
  }
  local_13e0.OwnerDeclaration = SComboButton::FArguments::FArguments(&local_10f8);
  (local_13e0.OwnerDeclaration)->_ComboButtonStyle = local_13f8;
  (local_13e0.OwnerDeclaration)->_ButtonStyle = local_1458;
  local_1537 = (param_1->_Method).bIsSet;
  if ((bool)local_1537 != false) {
    local_1538 = (param_1->_Method).TypedValue;
  }
  if ((TOptional<EPopupMethod> *)&local_1538 != &(local_13e0.OwnerDeclaration)->_Method) {
    if ((bool)local_1537 == false) {
      if (((local_13e0.OwnerDeclaration)->_Method).bIsSet != false) {
        ((local_13e0.OwnerDeclaration)->_Method).bIsSet = false;
      }
    }
    else {
      pEVar34 = TOptional<enum_EPopupMethod>::GetValue(&local_1538);
      ((local_13e0.OwnerDeclaration)->_Method).TypedValue = *pEVar34;
      ((local_13e0.OwnerDeclaration)->_Method).bIsSet = true;
    }
  }
  local_13e0.SlotContent = &(local_13e0.OwnerDeclaration)->_ButtonContent;
  pTVar26 = TSharedPtr<SWidget,1>::ToSharedRef(&local_1430,&local_1200);
  pFVar35 = NamedSlotProperty<SComboButton::FArguments>::operator[](&local_13e0,pTVar26);
  pTVar30 = TSharedPtr<SBox,1>::ToSharedRef(&this->ComboBoxMenuContent,&local_1220);
  pTVar5 = (pTVar30->SharedReferenceCount).ReferenceController;
  local_14f0 = pTVar30->Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar14 = (pFVar35->_MenuContent).Widget.SharedReferenceCount.ReferenceController;
  (pFVar35->_MenuContent).Widget.Object = (SWidget *)local_14f0;
  (pFVar35->_MenuContent).Widget.SharedReferenceCount.ReferenceController = pTVar5;
  pTStack_14e8 = pTVar5;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
  pFVar35->_HasDownArrow = param_1->_HasDownArrow;
  local_1188.Value.Left = (param_1->_ContentPadding).Value.Left;
  local_1188.Value.Top = (param_1->_ContentPadding).Value.Top;
  local_1188.Value.Right = (param_1->_ContentPadding).Value.Right;
  local_1188.Value.Bottom = (param_1->_ContentPadding).Value.Bottom;
  local_1188.bIsSet = (param_1->_ContentPadding).bIsSet;
  local_1188.Getter._16_4_ = 0;
  local_1188.Getter._0_8_ = 0;
  local_1188.Getter._8_8_ = 0;
  TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&local_1188.Getter,&(param_1->_ContentPadding).Getter);
  pFVar35 = SComboButton::FArguments::ContentPadding(pFVar35,&local_1188);
  local_1148._0_1_ = (param_1->_ForegroundColor).Value.ColorUseRule;
  local_1148._1_1_ = (param_1->_ForegroundColor).Value.ColorTableId;
  local_1148._2_2_ = *(undefined2 *)&(param_1->_ForegroundColor).Value.field_0x12;
  local_1158._0_8_ = *(undefined8 *)&(param_1->_ForegroundColor).Value.SpecifiedColor.field0_0x0;
  local_1158._8_8_ =
       *(undefined8 *)((longlong)&(param_1->_ForegroundColor).Value.SpecifiedColor.field0_0x0 + 8);
  local_1144 = (param_1->_ForegroundColor).bIsSet;
  TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
            (&local_1140,&(param_1->_ForegroundColor).Getter);
  pFVar35 = SComboButton::FArguments::ForegroundColor
                      (pFVar35,(TAttribute<FSlateColor> *)&local_1158._s_0);
  local_res10 = pFVar35;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar35->_OnMenuOpenChanged,
             (FWriteAccessScope *)&local_12b0);
  local_1298 = &(pFVar35->_OnMenuOpenChanged).field_0x8;
  puVar25 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_1298);
  pSVar37 = local_res8;
  if (puVar25 != (undefined8 *)0x0) {
    local_14f0 = (SBox *)OnMenuOpenChanged;
    pTStack_14e8 = (TReferenceControllerBase<1> *)((ulonglong)uStack_1438._4_4_ << 0x20);
    pTVar26 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_1210);
    pSVar37 = (SWidget *)(pTVar26->SharedReferenceCount).ReferenceController;
    local_res8 = pTVar26->Object;
    if (pSVar37 != (SWidget *)0x0) {
      LOCK();
      *(atomic<int> *)&pSVar37->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar37->_padding_ + 1);
      UNLOCK();
      LOCK();
      *(atomic<int> *)&pSVar37->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar37->_padding_ + 1);
      UNLOCK();
    }
    bVar13 = true;
    bVar12 = true;
    bVar11 = true;
    *puVar25 = &___7__TCommonDelegateInstanceState___A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar27 = FDelegateHandle::GenerateNewID();
    puVar25[2] = uVar27;
    *puVar25 = &
               ___7__TBaseSPMethodDelegateInstance__0A_V__SComboBox_V__TSharedPtr_VFWidgetReflectorNodeBase___00_____00__A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar25[3] = local_res8;
    puVar25[4] = pSVar37;
    if (pSVar37 != (SWidget *)0x0) {
      LOCK();
      ((atomic<int> *)&pSVar37->_padding_)[1] =
           (atomic<int>)((int)((atomic<int> *)&pSVar37->_padding_)[1] + 1);
      UNLOCK();
    }
    puVar25[5] = local_14f0;
    puVar25[6] = pTStack_14e8;
  }
  if (bVar11) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar37);
  }
  if (bVar12) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar37);
  }
  if (bVar13) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1210.SharedReferenceCount.ReferenceController);
  }
  if (local_12b0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_12b0.Accessor,&local_12b0);
  }
  local_res10->_IsFocusable = param_1->_IsFocusable;
  local_res10->_CollapseMenuOnParentFocus = param_1->_CollapseMenuOnParentFocus;
  SComboButton::Construct((SComboButton *)this,local_res10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1220.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1200.SharedReferenceCount.ReferenceController);
  SComboButton::FArguments::~FArguments(&local_10f8);
  local_13d0.Object = (SWidget *)(this->ComboListView).Object;
  local_13d0.WeakReferenceCount.ReferenceController =
       (this->ComboListView).SharedReferenceCount.ReferenceController;
  if (local_13d0.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_13d0.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_13d0.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  SComboButton::SetMenuContentWidgetToFocus((SComboButton *)this,&local_13d0);
  pTVar5 = (param_1->_InitiallySelectedItem).SharedReferenceCount.ReferenceController;
  pFVar8 = (param_1->_InitiallySelectedItem).Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1440 = (this->SelectedItem).Object;
  uStack_1438 = (this->SelectedItem).SharedReferenceCount.ReferenceController;
  (this->SelectedItem).Object = pFVar8;
  (this->SelectedItem).SharedReferenceCount.ReferenceController = pTVar5;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(uStack_1438);
  pFVar8 = (this->SelectedItem).Object;
  if (pFVar8 != (FWidgetReflectorNodeBase *)0x0) {
    pTVar5 = (this->SelectedItem).SharedReferenceCount.ReferenceController;
    if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
      paVar38 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar38 = &pTVar5->SharedReferenceCount;
      LOCK();
      *paVar38 = (atomic<int>)((int)*paVar38 + 1);
      UNLOCK();
    }
    pSVar28 = TSharedPtr<SListView<TSharedPtr<FWidgetReflectorNodeBase,1>_>,1>::operator->
                        (&this->ComboListView);
    lVar9 = pSVar28->_padding_;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar38 = (atomic<int>)((int)*paVar38 + 1);
      UNLOCK();
    }
    local_13c0 = pFVar8;
    local_13b8 = pTVar5;
    (**(code **)(lVar9 + 0x28))(&pSVar28->_padding_,&local_13c0,1,0);
    pSVar28 = TSharedPtr<SListView<TSharedPtr<FWidgetReflectorNodeBase,1>_>,1>::operator->
                        (&this->ComboListView);
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar38 = (atomic<int>)((int)*paVar38 + 1);
      UNLOCK();
    }
    local_13b0.Object = pFVar8;
    local_13b0.SharedReferenceCount.ReferenceController = pTVar5;
    SListView<TSharedPtr<FWidgetReflectorNodeBase,1>_>::RequestScrollIntoView(pSVar28,&local_13b0,0)
    ;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  }
  pSVar28 = TSharedPtr<SListView<TSharedPtr<FWidgetReflectorNodeBase,1>_>,1>::operator->
                      (&this->ComboListView);
  local_1488._0_8_ = FStyleDefaults::GetNoBrush();
  local_1488[8] = true;
  local_1468 = 0;
  local_1478.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_1470.Data = (FScriptContainerElement *)0x0;
  STableViewBase::SetBackgroundBrush
            ((STableViewBase *)pSVar28,(TAttribute<FSlateBrush_const_*> *)local_1488);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_1478,(FWriteAccessScope *)&local_1388);
  if (((int)local_1468 != 0) && (FStack_1470.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1470.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1470,0,0,0x10);
    local_1468 = local_1468 & 0xffffffff00000000;
  }
  if (local_1388.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1388.Accessor,&local_1388);
  }
  if (FStack_1470.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1470.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_1478.AccessDetector);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1430.SharedReferenceCount.ReferenceController);
  return;
}

// CreateAccessibleWidget @ 142e56090

TSharedRef<FSlateAccessibleWidget,1> * __thiscall
SComboBox<TSharedPtr<int,1>_>::CreateAccessibleWidget
          (SComboBox<TSharedPtr<int,1>_> *this,
          TSharedRef<FSlateAccessibleWidget,1> *__return_storage_ptr__)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  code *pcVar3;
  bool bVar4;
  FSlateAccessibleWidget *this_00;
  TSharedRef<SWidget,1> *pTVar5;
  TSharedRef<FSlateAccessibleWidget,1> *pTVar6;
  bool bVar7;
  TRawPtrProxy<FSlateAccessibleWidget> TVar8;
  TRawPtrProxy<FSlateAccessibleWidget> local_res10;
  TWeakPtr<SWidget,1> local_28;
  TSharedRef<SWidget,1> local_18;
  
  bVar7 = false;
  local_res10.Object = local_res10.Object & 0xffffffff00000000;
  this_00 = ::operator_new(0x70);
  if (this_00 == (FSlateAccessibleWidget *)0x0) {
    this_00 = (FSlateAccessibleWidget *)0x0;
    TVar8.Object = local_res10.Object;
  }
  else {
    pTVar5 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_18);
    TVar8.Object = (FSlateAccessibleWidget *)(pTVar5->SharedReferenceCount).ReferenceController;
    local_28.Object = pTVar5->Object;
    local_28.WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)TVar8.Object;
    if (TVar8.Object == (FSlateAccessibleWidget *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
      FSlateAccessibleWidget::FSlateAccessibleWidget(this_00,&local_28,ComboBox);
      this_00->_padding_ =
           (longlong)&FSlateAccessibleComboBox::_vftable__for__FSlateAccessibleWidget__;
      this_00[1]._padding_ =
           (longlong)&FSlateAccessibleComboBox::_vftable__for__IAccessibleProperty__;
    }
    else {
      LOCK();
      *(atomic<int> *)&(TVar8.Object)->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&(TVar8.Object)->_padding_ + 1);
      UNLOCK();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
      LOCK();
      ((atomic<int> *)&(TVar8.Object)->_padding_)[1] =
           (atomic<int>)((int)((atomic<int> *)&(TVar8.Object)->_padding_)[1] + 1);
      UNLOCK();
      LOCK();
      ((atomic<int> *)&(TVar8.Object)->_padding_)[1] =
           (atomic<int>)((int)((atomic<int> *)&(TVar8.Object)->_padding_)[1] + 1);
      UNLOCK();
      FSlateAccessibleWidget::FSlateAccessibleWidget(this_00,&local_28,ComboBox);
      this_00->_padding_ =
           (longlong)&FSlateAccessibleComboBox::_vftable__for__FSlateAccessibleWidget__;
      this_00[1]._padding_ =
           (longlong)&FSlateAccessibleComboBox::_vftable__for__IAccessibleProperty__;
      LOCK();
      paVar1 = (atomic<int> *)&(TVar8.Object)->_padding_ + 1;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((TVar8.Object)->_padding_ + 8))(TVar8.Object,1);
      }
    }
    bVar7 = true;
    if (((this_00->_padding_ != 0) && (this_00->_padding_ != 0)) &&
       (0 < *(int *)(this_00->_padding_ + 8))) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InObject || !InObject->DoesSharedInstanceExist()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x7a5,L"Trying to share an already-shared object");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TSharedRef<FSlateAccessibleWidget,1> *)(*pcVar3)();
        return pTVar6;
      }
    }
  }
  local_res10.Object = this_00;
  TSharedRef<FSlateAccessibleWidget,1>::TSharedRef<FSlateAccessibleWidget,1><FSlateAccessibleWidget>
            (__return_storage_ptr__,&local_res10);
  if (bVar7) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)TVar8.Object);
  }
  return __return_storage_ptr__;
}

// CreateAccessibleWidget @ 142e56210

TSharedRef<FSlateAccessibleWidget,1> * __thiscall
SComboBox<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>::CreateAccessibleWidget
          (SComboBox<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *this,
          TSharedRef<FSlateAccessibleWidget,1> *__return_storage_ptr__)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  code *pcVar3;
  bool bVar4;
  FSlateAccessibleWidget *this_00;
  TSharedRef<SWidget,1> *pTVar5;
  TSharedRef<FSlateAccessibleWidget,1> *pTVar6;
  bool bVar7;
  TRawPtrProxy<FSlateAccessibleWidget> TVar8;
  TRawPtrProxy<FSlateAccessibleWidget> local_res10;
  TWeakPtr<SWidget,1> local_28;
  TSharedRef<SWidget,1> local_18;
  
  bVar7 = false;
  local_res10.Object = local_res10.Object & 0xffffffff00000000;
  this_00 = ::operator_new(0x70);
  if (this_00 == (FSlateAccessibleWidget *)0x0) {
    this_00 = (FSlateAccessibleWidget *)0x0;
    TVar8.Object = local_res10.Object;
  }
  else {
    pTVar5 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_18);
    TVar8.Object = (FSlateAccessibleWidget *)(pTVar5->SharedReferenceCount).ReferenceController;
    local_28.Object = pTVar5->Object;
    local_28.WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)TVar8.Object;
    if (TVar8.Object == (FSlateAccessibleWidget *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
      FSlateAccessibleWidget::FSlateAccessibleWidget(this_00,&local_28,ComboBox);
      this_00->_padding_ =
           (longlong)&FSlateAccessibleComboBox::_vftable__for__FSlateAccessibleWidget__;
      this_00[1]._padding_ =
           (longlong)&FSlateAccessibleComboBox::_vftable__for__IAccessibleProperty__;
    }
    else {
      LOCK();
      *(atomic<int> *)&(TVar8.Object)->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&(TVar8.Object)->_padding_ + 1);
      UNLOCK();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
      LOCK();
      ((atomic<int> *)&(TVar8.Object)->_padding_)[1] =
           (atomic<int>)((int)((atomic<int> *)&(TVar8.Object)->_padding_)[1] + 1);
      UNLOCK();
      LOCK();
      ((atomic<int> *)&(TVar8.Object)->_padding_)[1] =
           (atomic<int>)((int)((atomic<int> *)&(TVar8.Object)->_padding_)[1] + 1);
      UNLOCK();
      FSlateAccessibleWidget::FSlateAccessibleWidget(this_00,&local_28,ComboBox);
      this_00->_padding_ =
           (longlong)&FSlateAccessibleComboBox::_vftable__for__FSlateAccessibleWidget__;
      this_00[1]._padding_ =
           (longlong)&FSlateAccessibleComboBox::_vftable__for__IAccessibleProperty__;
      LOCK();
      paVar1 = (atomic<int> *)&(TVar8.Object)->_padding_ + 1;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((TVar8.Object)->_padding_ + 8))(TVar8.Object,1);
      }
    }
    bVar7 = true;
    if (((this_00->_padding_ != 0) && (this_00->_padding_ != 0)) &&
       (0 < *(int *)(this_00->_padding_ + 8))) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InObject || !InObject->DoesSharedInstanceExist()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x7a5,L"Trying to share an already-shared object");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TSharedRef<FSlateAccessibleWidget,1> *)(*pcVar3)();
        return pTVar6;
      }
    }
  }
  local_res10.Object = this_00;
  TSharedRef<FSlateAccessibleWidget,1>::TSharedRef<FSlateAccessibleWidget,1><FSlateAccessibleWidget>
            (__return_storage_ptr__,&local_res10);
  if (bVar7) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)TVar8.Object);
  }
  return __return_storage_ptr__;
}

// CreateAccessibleWidget @ 142e56390

TSharedRef<FSlateAccessibleWidget,1> * __thiscall
SComboBox<TSharedPtr<FWidgetReflectorNodeBase,1>_>::CreateAccessibleWidget
          (SComboBox<TSharedPtr<FWidgetReflectorNodeBase,1>_> *this,
          TSharedRef<FSlateAccessibleWidget,1> *__return_storage_ptr__)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  code *pcVar3;
  bool bVar4;
  FSlateAccessibleWidget *this_00;
  TSharedRef<SWidget,1> *pTVar5;
  TSharedRef<FSlateAccessibleWidget,1> *pTVar6;
  bool bVar7;
  TRawPtrProxy<FSlateAccessibleWidget> TVar8;
  TRawPtrProxy<FSlateAccessibleWidget> local_res10;
  TWeakPtr<SWidget,1> local_28;
  TSharedRef<SWidget,1> local_18;
  
  bVar7 = false;
  local_res10.Object = local_res10.Object & 0xffffffff00000000;
  this_00 = ::operator_new(0x70);
  if (this_00 == (FSlateAccessibleWidget *)0x0) {
    this_00 = (FSlateAccessibleWidget *)0x0;
    TVar8.Object = local_res10.Object;
  }
  else {
    pTVar5 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_18);
    TVar8.Object = (FSlateAccessibleWidget *)(pTVar5->SharedReferenceCount).ReferenceController;
    local_28.Object = pTVar5->Object;
    local_28.WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)TVar8.Object;
    if (TVar8.Object == (FSlateAccessibleWidget *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
      FSlateAccessibleWidget::FSlateAccessibleWidget(this_00,&local_28,ComboBox);
      this_00->_padding_ =
           (longlong)&FSlateAccessibleComboBox::_vftable__for__FSlateAccessibleWidget__;
      this_00[1]._padding_ =
           (longlong)&FSlateAccessibleComboBox::_vftable__for__IAccessibleProperty__;
    }
    else {
      LOCK();
      *(atomic<int> *)&(TVar8.Object)->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&(TVar8.Object)->_padding_ + 1);
      UNLOCK();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
      LOCK();
      ((atomic<int> *)&(TVar8.Object)->_padding_)[1] =
           (atomic<int>)((int)((atomic<int> *)&(TVar8.Object)->_padding_)[1] + 1);
      UNLOCK();
      LOCK();
      ((atomic<int> *)&(TVar8.Object)->_padding_)[1] =
           (atomic<int>)((int)((atomic<int> *)&(TVar8.Object)->_padding_)[1] + 1);
      UNLOCK();
      FSlateAccessibleWidget::FSlateAccessibleWidget(this_00,&local_28,ComboBox);
      this_00->_padding_ =
           (longlong)&FSlateAccessibleComboBox::_vftable__for__FSlateAccessibleWidget__;
      this_00[1]._padding_ =
           (longlong)&FSlateAccessibleComboBox::_vftable__for__IAccessibleProperty__;
      LOCK();
      paVar1 = (atomic<int> *)&(TVar8.Object)->_padding_ + 1;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((TVar8.Object)->_padding_ + 8))(TVar8.Object,1);
      }
    }
    bVar7 = true;
    if (((this_00->_padding_ != 0) && (this_00->_padding_ != 0)) &&
       (0 < *(int *)(this_00->_padding_ + 8))) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InObject || !InObject->DoesSharedInstanceExist()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x7a5,L"Trying to share an already-shared object");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TSharedRef<FSlateAccessibleWidget,1> *)(*pcVar3)();
        return pTVar6;
      }
    }
  }
  local_res10.Object = this_00;
  TSharedRef<FSlateAccessibleWidget,1>::TSharedRef<FSlateAccessibleWidget,1><FSlateAccessibleWidget>
            (__return_storage_ptr__,&local_res10);
  if (bVar7) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)TVar8.Object);
  }
  return __return_storage_ptr__;
}

// GenerateMenuItemRow @ 142e8ba80

TSharedRef<ITableRow,1> * __thiscall
SComboBox<TSharedPtr<int,1>_>::GenerateMenuItemRow
          (SComboBox<TSharedPtr<int,1>_> *this,TSharedRef<ITableRow,1> *__return_storage_ptr__,
          TSharedPtr<int,1> *param_1,TSharedRef<STableViewBase,1> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  bool bVar3;
  char cVar4;
  FArguments *pFVar5;
  TSlateDecl<SComboRow<TSharedPtr<int,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
  *pTVar6;
  TSharedRef<SComboRow<TSharedPtr<int,1>_>,1> *pTVar7;
  FArguments *pFVar8;
  FText *pFVar9;
  TSharedRef<STextBlock,1> *pTVar10;
  longlong *plVar11;
  T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&> local_res8;
  FText local_8a8;
  bool local_898;
  undefined1 local_890 [8];
  ForAnyElementType FStack_888;
  ulonglong local_880;
  FLLMScope local_878 [2];
  STextBlock *local_870;
  TReferenceControllerBase<1> *pTStack_868;
  bool local_860;
  longlong *local_858;
  FMRSWRecursiveAccessDetector *local_850;
  bool local_848;
  T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&> local_840;
  TReferenceControllerBase<1> *local_838;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_830;
  TSlateDecl<SComboRow<TSharedPtr<int,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
  local_818;
  TSharedRef<SComboRow<TSharedPtr<int,1>_>,1> local_800;
  TSlateDecl<SComboRow<TSharedPtr<int,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
  local_7f0;
  undefined1 local_7d8 [552];
  undefined1 local_5b0 [24];
  FArguments local_598;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnGenerateWidget,
             (FReadAccessScope *)&local_858);
  if (((*(int *)&(this->OnGenerateWidget).field_0x10 == 0) ||
      (plVar11 = *(longlong **)&(this->OnGenerateWidget).field_0x8, plVar11 == (longlong *)0x0)) ||
     (cVar4 = (**(code **)(*plVar11 + 0x38))(), cVar4 == '\0')) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_858);
  pFVar5 = SComboRow<TSharedPtr<int,1>_>::FArguments::FArguments((FArguments *)local_7d8);
  if (bVar3) {
    pFVar5->_Style = this->ItemStyle;
    local_8a8.TextData.Reference = *(ITextData **)&this->MenuRowPadding;
    local_8a8.Flags = (uint)(this->MenuRowPadding).Right;
    local_8a8._12_4_ = (this->MenuRowPadding).Bottom;
    local_898 = true;
    plVar11 = (longlong *)0x0;
    local_880 = 0;
    local_890 = (undefined1  [8])0x0;
    FStack_888.Data = (FScriptContainerElement *)0x0;
    *(ITextData **)&(pFVar5->_Padding).Value = local_8a8.TextData.Reference;
    (pFVar5->_Padding).Value.Right = (float)local_8a8.Flags;
    (pFVar5->_Padding).Value.Bottom = (float)local_8a8._12_4_;
    (pFVar5->_Padding).bIsSet = true;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar5->_Padding).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_890);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_890,
               (FWriteAccessScope *)&local_858);
    if (((int)local_880 != 0) && (FStack_888.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_888.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_888,0,0,0x10);
      local_880 = local_880 & 0xffffffff00000000;
    }
    if (local_848 == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_850,(FDestructionSentinel *)&local_858)
      ;
    }
    if (FStack_888.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_888.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_890);
    pTStack_868 = (param_1->SharedReferenceCount).ReferenceController;
    local_870 = (STextBlock *)param_1->Object;
    if (pTStack_868 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTStack_868->SharedReferenceCount = (atomic<int>)((int)pTStack_868->SharedReferenceCount + 1);
      UNLOCK();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnGenerateWidget,
               (FReadAccessScope *)&local_858);
    if (*(int *)&(this->OnGenerateWidget).field_0x10 != 0) {
      plVar11 = *(longlong **)&(this->OnGenerateWidget).field_0x8;
    }
    (**(code **)(*plVar11 + 0x60))(plVar11,&local_840,&local_870);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_858);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    if (local_838 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_838->SharedReferenceCount = (atomic<int>)((int)local_838->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar1 = (pFVar5->_Content).Widget.SharedReferenceCount.ReferenceController;
    (pFVar5->_Content).Widget.Object = (SWidget *)local_840.Arg0;
    (pFVar5->_Content).Widget.SharedReferenceCount.ReferenceController = local_838;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    local_res8.Arg0 = param_2;
    pTVar6 = MakeTDecl<SComboRow<TSharedPtr<int,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
                       (&local_818,"SComboRow<OptionType>",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Input\\SComboBox.h"
                        ,0x22d,&local_res8);
    pTVar7 = TSlateDecl<SComboRow<TSharedPtr<int,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
             ::operator<<=(pTVar6,(TSharedRef<SComboRow<TSharedPtr<int,1>_>,1> *)&local_830,pFVar5);
    __return_storage_ptr__->Object = (ITableRow *)pTVar7->Object;
    pTVar1 = (pTVar7->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_830._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_818._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_838);
  }
  else {
    pFVar8 = STextBlock::FArguments::FArguments(&local_598);
    pFVar9 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)&local_858,L"SlateCore",L"ComboBoxMissingOnGenerateWidgetMethod",
                        L"Please provide a .OnGenerateWidget() handler.");
    FText::FText(&local_8a8,pFVar9);
    local_898 = true;
    local_880 = 0;
    local_890 = (undefined1  [8])0x0;
    FStack_888.Data = (FScriptContainerElement *)0x0;
    FText::operator=(&(pFVar8->_Text).Value,&local_8a8);
    (pFVar8->_Text).bIsSet = local_898;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar8->_Text).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_890);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_890,
               (FWriteAccessScope *)&local_870);
    if (((int)local_880 != 0) && (FStack_888.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_888.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_888,0,0,0x10);
      local_880 = local_880 & 0xffffffff00000000;
    }
    if (local_860 == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)pTStack_868,(FDestructionSentinel *)&local_870);
    }
    if (FStack_888.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_888.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_890);
    if (local_8a8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_8a8.TextData.Reference + 0x10))();
    }
    FLLMScope::FLLMScope(local_878,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_830._Widget.Object = (STextBlock *)LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope((FMemScope *)&local_870,(FName *)&local_830,true);
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
              (&local_830,"STextBlock",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Input\\SComboBox.h"
               ,0x238,(T0RequiredArgs *)&local_res8);
    FMemScope::~FMemScope((FMemScope *)&local_870);
    FLLMScope::~FLLMScope(local_878);
    pTVar10 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                        (&local_830,(TSharedRef<STextBlock,1> *)&local_818,pFVar8);
    pTVar1 = (pTVar10->SharedReferenceCount).ReferenceController;
    local_870 = pTVar10->Object;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar2 = (pFVar5->_Content).Widget.SharedReferenceCount.ReferenceController;
    (pFVar5->_Content).Widget.Object = (SWidget *)local_870;
    (pFVar5->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar1;
    pTStack_868 = pTVar1;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    local_840.Arg0 = param_2;
    pTVar6 = MakeTDecl<SComboRow<TSharedPtr<int,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
                       (&local_7f0,"SComboRow<OptionType>",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Input\\SComboBox.h"
                        ,0x236,&local_840);
    pTVar7 = TSlateDecl<SComboRow<TSharedPtr<int,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
             ::operator<<=(pTVar6,&local_800,pFVar5);
    __return_storage_ptr__->Object = (ITableRow *)pTVar7->Object;
    pTVar2 = (pTVar7->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_800.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_7f0._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_818._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_830._Widget.SharedReferenceCount.ReferenceController);
    if ((ITextData *)local_858 != (ITextData *)0x0) {
      (**(code **)(*local_858 + 0x10))();
    }
    STextBlock::FArguments::~FArguments(&local_598);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_5b0);
  if ((void *)local_5b0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_5b0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_5b0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_7d8._520_8_);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_7d8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// GenerateMenuItemRow @ 142e8bfc0

TSharedRef<ITableRow,1> * __thiscall
SComboBox<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>::GenerateMenuItemRow
          (SComboBox<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *this,
          TSharedRef<ITableRow,1> *__return_storage_ptr__,
          TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1> *param_1,
          TSharedRef<STableViewBase,1> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  bool bVar3;
  char cVar4;
  FArguments *pFVar5;
  TSlateDecl<SComboRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
  *pTVar6;
  TSharedRef<SComboRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,1> *pTVar7;
  FArguments *pFVar8;
  FText *pFVar9;
  TSharedRef<STextBlock,1> *pTVar10;
  longlong *plVar11;
  T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&> local_res8;
  FText local_8a8;
  bool local_898;
  undefined1 local_890 [8];
  ForAnyElementType FStack_888;
  ulonglong local_880;
  FLLMScope local_878 [2];
  STextBlock *local_870;
  TReferenceControllerBase<1> *pTStack_868;
  bool local_860;
  longlong *local_858;
  FMRSWRecursiveAccessDetector *local_850;
  bool local_848;
  T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&> local_840;
  TReferenceControllerBase<1> *local_838;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_830;
  TSlateDecl<SComboRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
  local_818;
  TSharedRef<SComboRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,1> local_800;
  TSlateDecl<SComboRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
  local_7f0;
  undefined1 local_7d8 [552];
  undefined1 local_5b0 [24];
  FArguments local_598;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnGenerateWidget,
             (FReadAccessScope *)&local_858);
  if (((*(int *)&(this->OnGenerateWidget).field_0x10 == 0) ||
      (plVar11 = *(longlong **)&(this->OnGenerateWidget).field_0x8, plVar11 == (longlong *)0x0)) ||
     (cVar4 = (**(code **)(*plVar11 + 0x38))(), cVar4 == '\0')) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_858);
  pFVar5 = SComboRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>::FArguments::
           FArguments((FArguments *)local_7d8);
  if (bVar3) {
    pFVar5->_Style = this->ItemStyle;
    local_8a8.TextData.Reference = *(ITextData **)&this->MenuRowPadding;
    local_8a8.Flags = (uint)(this->MenuRowPadding).Right;
    local_8a8._12_4_ = (this->MenuRowPadding).Bottom;
    local_898 = true;
    plVar11 = (longlong *)0x0;
    local_880 = 0;
    local_890 = (undefined1  [8])0x0;
    FStack_888.Data = (FScriptContainerElement *)0x0;
    *(ITextData **)&(pFVar5->_Padding).Value = local_8a8.TextData.Reference;
    (pFVar5->_Padding).Value.Right = (float)local_8a8.Flags;
    (pFVar5->_Padding).Value.Bottom = (float)local_8a8._12_4_;
    (pFVar5->_Padding).bIsSet = true;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar5->_Padding).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_890);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_890,
               (FWriteAccessScope *)&local_858);
    if (((int)local_880 != 0) && (FStack_888.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_888.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_888,0,0,0x10);
      local_880 = local_880 & 0xffffffff00000000;
    }
    if (local_848 == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_850,(FDestructionSentinel *)&local_858)
      ;
    }
    if (FStack_888.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_888.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_890);
    pTStack_868 = (param_1->SharedReferenceCount).ReferenceController;
    local_870 = (STextBlock *)param_1->Object;
    if (pTStack_868 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTStack_868->SharedReferenceCount = (atomic<int>)((int)pTStack_868->SharedReferenceCount + 1);
      UNLOCK();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnGenerateWidget,
               (FReadAccessScope *)&local_858);
    if (*(int *)&(this->OnGenerateWidget).field_0x10 != 0) {
      plVar11 = *(longlong **)&(this->OnGenerateWidget).field_0x8;
    }
    (**(code **)(*plVar11 + 0x60))(plVar11,&local_840,&local_870);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_858);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    if (local_838 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_838->SharedReferenceCount = (atomic<int>)((int)local_838->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar1 = (pFVar5->_Content).Widget.SharedReferenceCount.ReferenceController;
    (pFVar5->_Content).Widget.Object = (SWidget *)local_840.Arg0;
    (pFVar5->_Content).Widget.SharedReferenceCount.ReferenceController = local_838;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    local_res8.Arg0 = param_2;
    pTVar6 = MakeTDecl<SComboRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
                       (&local_818,"SComboRow<OptionType>",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Input\\SComboBox.h"
                        ,0x22d,&local_res8);
    pTVar7 = TSlateDecl<SComboRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
             ::operator<<=(pTVar6,(TSharedRef<SComboRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,1>
                                   *)&local_830,pFVar5);
    __return_storage_ptr__->Object = (ITableRow *)pTVar7->Object;
    pTVar1 = (pTVar7->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_830._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_818._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_838);
  }
  else {
    pFVar8 = STextBlock::FArguments::FArguments(&local_598);
    pFVar9 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)&local_858,L"SlateCore",L"ComboBoxMissingOnGenerateWidgetMethod",
                        L"Please provide a .OnGenerateWidget() handler.");
    FText::FText(&local_8a8,pFVar9);
    local_898 = true;
    local_880 = 0;
    local_890 = (undefined1  [8])0x0;
    FStack_888.Data = (FScriptContainerElement *)0x0;
    FText::operator=(&(pFVar8->_Text).Value,&local_8a8);
    (pFVar8->_Text).bIsSet = local_898;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar8->_Text).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_890);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_890,
               (FWriteAccessScope *)&local_870);
    if (((int)local_880 != 0) && (FStack_888.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_888.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_888,0,0,0x10);
      local_880 = local_880 & 0xffffffff00000000;
    }
    if (local_860 == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)pTStack_868,(FDestructionSentinel *)&local_870);
    }
    if (FStack_888.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_888.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_890);
    if (local_8a8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_8a8.TextData.Reference + 0x10))();
    }
    FLLMScope::FLLMScope(local_878,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_830._Widget.Object = (STextBlock *)LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope((FMemScope *)&local_870,(FName *)&local_830,true);
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
              (&local_830,"STextBlock",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Input\\SComboBox.h"
               ,0x238,(T0RequiredArgs *)&local_res8);
    FMemScope::~FMemScope((FMemScope *)&local_870);
    FLLMScope::~FLLMScope(local_878);
    pTVar10 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                        (&local_830,(TSharedRef<STextBlock,1> *)&local_818,pFVar8);
    pTVar1 = (pTVar10->SharedReferenceCount).ReferenceController;
    local_870 = pTVar10->Object;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar2 = (pFVar5->_Content).Widget.SharedReferenceCount.ReferenceController;
    (pFVar5->_Content).Widget.Object = (SWidget *)local_870;
    (pFVar5->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar1;
    pTStack_868 = pTVar1;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    local_840.Arg0 = param_2;
    pTVar6 = MakeTDecl<SComboRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
                       (&local_7f0,"SComboRow<OptionType>",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Input\\SComboBox.h"
                        ,0x236,&local_840);
    pTVar7 = TSlateDecl<SComboRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
             ::operator<<=(pTVar6,&local_800,pFVar5);
    __return_storage_ptr__->Object = (ITableRow *)pTVar7->Object;
    pTVar2 = (pTVar7->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_800.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_7f0._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_818._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_830._Widget.SharedReferenceCount.ReferenceController);
    if ((ITextData *)local_858 != (ITextData *)0x0) {
      (**(code **)(*local_858 + 0x10))();
    }
    STextBlock::FArguments::~FArguments(&local_598);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_5b0);
  if ((void *)local_5b0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_5b0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_5b0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_7d8._520_8_);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_7d8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// GenerateMenuItemRow @ 142e8c500

TSharedRef<ITableRow,1> * __thiscall
SComboBox<TSharedPtr<FWidgetReflectorNodeBase,1>_>::GenerateMenuItemRow
          (SComboBox<TSharedPtr<FWidgetReflectorNodeBase,1>_> *this,
          TSharedRef<ITableRow,1> *__return_storage_ptr__,
          TSharedPtr<FWidgetReflectorNodeBase,1> *param_1,TSharedRef<STableViewBase,1> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  bool bVar3;
  char cVar4;
  FArguments *pFVar5;
  TSlateDecl<SComboRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
  *pTVar6;
  TSharedRef<SComboRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>,1> *pTVar7;
  FArguments *pFVar8;
  FText *pFVar9;
  TSharedRef<STextBlock,1> *pTVar10;
  longlong *plVar11;
  T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&> local_res8;
  FText local_8a8;
  bool local_898;
  undefined1 local_890 [8];
  ForAnyElementType FStack_888;
  ulonglong local_880;
  FLLMScope local_878 [2];
  STextBlock *local_870;
  TReferenceControllerBase<1> *pTStack_868;
  bool local_860;
  longlong *local_858;
  FMRSWRecursiveAccessDetector *local_850;
  bool local_848;
  T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&> local_840;
  TReferenceControllerBase<1> *local_838;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_830;
  TSlateDecl<SComboRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
  local_818;
  TSharedRef<SComboRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>,1> local_800;
  TSlateDecl<SComboRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
  local_7f0;
  undefined1 local_7d8 [552];
  undefined1 local_5b0 [24];
  FArguments local_598;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnGenerateWidget,
             (FReadAccessScope *)&local_858);
  if (((*(int *)&(this->OnGenerateWidget).field_0x10 == 0) ||
      (plVar11 = *(longlong **)&(this->OnGenerateWidget).field_0x8, plVar11 == (longlong *)0x0)) ||
     (cVar4 = (**(code **)(*plVar11 + 0x38))(), cVar4 == '\0')) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_858);
  pFVar5 = SComboRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>::FArguments::FArguments
                     ((FArguments *)local_7d8);
  if (bVar3) {
    pFVar5->_Style = this->ItemStyle;
    local_8a8.TextData.Reference = *(ITextData **)&this->MenuRowPadding;
    local_8a8.Flags = (uint)(this->MenuRowPadding).Right;
    local_8a8._12_4_ = (this->MenuRowPadding).Bottom;
    local_898 = true;
    plVar11 = (longlong *)0x0;
    local_880 = 0;
    local_890 = (undefined1  [8])0x0;
    FStack_888.Data = (FScriptContainerElement *)0x0;
    *(ITextData **)&(pFVar5->_Padding).Value = local_8a8.TextData.Reference;
    (pFVar5->_Padding).Value.Right = (float)local_8a8.Flags;
    (pFVar5->_Padding).Value.Bottom = (float)local_8a8._12_4_;
    (pFVar5->_Padding).bIsSet = true;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar5->_Padding).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_890);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_890,
               (FWriteAccessScope *)&local_858);
    if (((int)local_880 != 0) && (FStack_888.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_888.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_888,0,0,0x10);
      local_880 = local_880 & 0xffffffff00000000;
    }
    if (local_848 == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_850,(FDestructionSentinel *)&local_858)
      ;
    }
    if (FStack_888.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_888.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_890);
    pTStack_868 = (param_1->SharedReferenceCount).ReferenceController;
    local_870 = (STextBlock *)param_1->Object;
    if (pTStack_868 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTStack_868->SharedReferenceCount = (atomic<int>)((int)pTStack_868->SharedReferenceCount + 1);
      UNLOCK();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnGenerateWidget,
               (FReadAccessScope *)&local_858);
    if (*(int *)&(this->OnGenerateWidget).field_0x10 != 0) {
      plVar11 = *(longlong **)&(this->OnGenerateWidget).field_0x8;
    }
    (**(code **)(*plVar11 + 0x60))(plVar11,&local_840,&local_870);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_858);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    if (local_838 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_838->SharedReferenceCount = (atomic<int>)((int)local_838->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar1 = (pFVar5->_Content).Widget.SharedReferenceCount.ReferenceController;
    (pFVar5->_Content).Widget.Object = (SWidget *)local_840.Arg0;
    (pFVar5->_Content).Widget.SharedReferenceCount.ReferenceController = local_838;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    local_res8.Arg0 = param_2;
    pTVar6 = MakeTDecl<SComboRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
                       (&local_818,"SComboRow<OptionType>",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Input\\SComboBox.h"
                        ,0x22d,&local_res8);
    pTVar7 = TSlateDecl<SComboRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
             ::operator<<=(pTVar6,(TSharedRef<SComboRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>,1>
                                   *)&local_830,pFVar5);
    __return_storage_ptr__->Object = (ITableRow *)pTVar7->Object;
    pTVar1 = (pTVar7->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_830._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_818._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_838);
  }
  else {
    pFVar8 = STextBlock::FArguments::FArguments(&local_598);
    pFVar9 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)&local_858,L"SlateCore",L"ComboBoxMissingOnGenerateWidgetMethod",
                        L"Please provide a .OnGenerateWidget() handler.");
    FText::FText(&local_8a8,pFVar9);
    local_898 = true;
    local_880 = 0;
    local_890 = (undefined1  [8])0x0;
    FStack_888.Data = (FScriptContainerElement *)0x0;
    FText::operator=(&(pFVar8->_Text).Value,&local_8a8);
    (pFVar8->_Text).bIsSet = local_898;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar8->_Text).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_890);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_890,
               (FWriteAccessScope *)&local_870);
    if (((int)local_880 != 0) && (FStack_888.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_888.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_888,0,0,0x10);
      local_880 = local_880 & 0xffffffff00000000;
    }
    if (local_860 == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)pTStack_868,(FDestructionSentinel *)&local_870);
    }
    if (FStack_888.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_888.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_890);
    if (local_8a8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_8a8.TextData.Reference + 0x10))();
    }
    FLLMScope::FLLMScope(local_878,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_830._Widget.Object = (STextBlock *)LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope((FMemScope *)&local_870,(FName *)&local_830,true);
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
              (&local_830,"STextBlock",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Input\\SComboBox.h"
               ,0x238,(T0RequiredArgs *)&local_res8);
    FMemScope::~FMemScope((FMemScope *)&local_870);
    FLLMScope::~FLLMScope(local_878);
    pTVar10 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                        (&local_830,(TSharedRef<STextBlock,1> *)&local_818,pFVar8);
    pTVar1 = (pTVar10->SharedReferenceCount).ReferenceController;
    local_870 = pTVar10->Object;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar2 = (pFVar5->_Content).Widget.SharedReferenceCount.ReferenceController;
    (pFVar5->_Content).Widget.Object = (SWidget *)local_870;
    (pFVar5->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar1;
    pTStack_868 = pTVar1;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    local_840.Arg0 = param_2;
    pTVar6 = MakeTDecl<SComboRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
                       (&local_7f0,"SComboRow<OptionType>",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Input\\SComboBox.h"
                        ,0x236,&local_840);
    pTVar7 = TSlateDecl<SComboRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
             ::operator<<=(pTVar6,&local_800,pFVar5);
    __return_storage_ptr__->Object = (ITableRow *)pTVar7->Object;
    pTVar2 = (pTVar7->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_800.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_7f0._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_818._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_830._Widget.SharedReferenceCount.ReferenceController);
    if ((ITextData *)local_858 != (ITextData *)0x0) {
      (**(code **)(*local_858 + 0x10))();
    }
    STextBlock::FArguments::~FArguments(&local_598);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_5b0);
  if ((void *)local_5b0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_5b0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_5b0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_7d8._520_8_);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_7d8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// GetDefaultAccessibleText @ 142e9ad50

TOptional<FText> * __thiscall
SComboBox<TSharedPtr<int,1>_>::GetDefaultAccessibleText
          (SComboBox<TSharedPtr<int,1>_> *this,TOptional<FText> *__return_storage_ptr__,
          EAccessibleType param_1)

{
  code *pcVar1;
  bool bVar2;
  FText *pFVar3;
  TOptional<FText> *pTVar4;
  FText local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_struct_TOptional<FText>___cdecl_SComboBox<TSharedPtr<int,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_struct_TOptional<FText>___cdecl_SComboBox<TSharedPtr<int,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_struct_TOptional<FText>___cdecl_SComboBox<TSharedPtr<int,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FString::FString(&`public:_virtual_struct_TOptional<FText>___cdecl_SComboBox<TSharedPtr<int,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
                          ::__l2::Name,L"Combo Box");
      atexit(`SComboBox<TSharedPtr<int,1>_>::GetDefaultAccessibleText'::__l2::
             _dynamic_atexit_destructor_for__Name__);
      _Init_thread_footer(&`public:_virtual_struct_TOptional<FText>___cdecl_SComboBox<TSharedPtr<int,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pFVar3 = FText::FromString(&local_18,
                             &`public:_virtual_struct_TOptional<FText>___cdecl_SComboBox<TSharedPtr<int,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
                              ::__l2::Name);
  FText::FText((FText *)__return_storage_ptr__,pFVar3);
  if ((__return_storage_ptr__->field0_0x0).TypedValue.TextData.Reference == (ITextData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TOptional<FText> *)(*pcVar1)();
      return pTVar4;
    }
  }
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// GetDefaultAccessibleText @ 142e9ae30

TOptional<FText> * __thiscall
SComboBox<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>::GetDefaultAccessibleText
          (SComboBox<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *this,
          TOptional<FText> *__return_storage_ptr__,EAccessibleType param_1)

{
  code *pcVar1;
  bool bVar2;
  FText *pFVar3;
  TOptional<FText> *pTVar4;
  FText local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_struct_TOptional<FText>___cdecl_SComboBox<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_struct_TOptional<FText>___cdecl_SComboBox<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_struct_TOptional<FText>___cdecl_SComboBox<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FString::FString(&`public:_virtual_struct_TOptional<FText>___cdecl_SComboBox<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
                          ::__l2::Name,L"Combo Box");
      atexit(`SComboBox<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>::
             GetDefaultAccessibleText'::__l2::_dynamic_atexit_destructor_for__Name__);
      _Init_thread_footer(&`public:_virtual_struct_TOptional<FText>___cdecl_SComboBox<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pFVar3 = FText::FromString(&local_18,
                             &`public:_virtual_struct_TOptional<FText>___cdecl_SComboBox<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
                              ::__l2::Name);
  FText::FText((FText *)__return_storage_ptr__,pFVar3);
  if ((__return_storage_ptr__->field0_0x0).TypedValue.TextData.Reference == (ITextData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TOptional<FText> *)(*pcVar1)();
      return pTVar4;
    }
  }
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// GetDefaultAccessibleText @ 142e9af10

TOptional<FText> * __thiscall
SComboBox<TSharedPtr<FWidgetReflectorNodeBase,1>_>::GetDefaultAccessibleText
          (SComboBox<TSharedPtr<FWidgetReflectorNodeBase,1>_> *this,
          TOptional<FText> *__return_storage_ptr__,EAccessibleType param_1)

{
  code *pcVar1;
  bool bVar2;
  FText *pFVar3;
  TOptional<FText> *pTVar4;
  FText local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_struct_TOptional<FText>___cdecl_SComboBox<TSharedPtr<FWidgetReflectorNodeBase,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_struct_TOptional<FText>___cdecl_SComboBox<TSharedPtr<FWidgetReflectorNodeBase,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_struct_TOptional<FText>___cdecl_SComboBox<TSharedPtr<FWidgetReflectorNodeBase,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FString::FString(&`public:_virtual_struct_TOptional<FText>___cdecl_SComboBox<TSharedPtr<FWidgetReflectorNodeBase,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
                          ::__l2::Name,L"Combo Box");
      atexit(`SComboBox<TSharedPtr<FWidgetReflectorNodeBase,1>_>::GetDefaultAccessibleText'::__l2::
             _dynamic_atexit_destructor_for__Name__);
      _Init_thread_footer(&`public:_virtual_struct_TOptional<FText>___cdecl_SComboBox<TSharedPtr<FWidgetReflectorNodeBase,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pFVar3 = FText::FromString(&local_18,
                             &`public:_virtual_struct_TOptional<FText>___cdecl_SComboBox<TSharedPtr<FWidgetReflectorNodeBase,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
                              ::__l2::Name);
  FText::FText((FText *)__return_storage_ptr__,pFVar3);
  if ((__return_storage_ptr__->field0_0x0).TypedValue.TextData.Reference == (ITextData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TOptional<FText> *)(*pcVar1)();
      return pTVar4;
    }
  }
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// IsInteractable @ 142ebb8a0

bool __thiscall SComboBox<TSharedPtr<int,1>_>::IsInteractable(SComboBox<TSharedPtr<int,1>_> *this)

{
  return (bool)*(undefined1 *)((longlong)&this->_padding_ + 2);
}

// IsInteractable @ 142ebb8b0

bool __thiscall
SComboBox<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>::IsInteractable
          (SComboBox<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *this)

{
  return (bool)*(undefined1 *)((longlong)&this->_padding_ + 2);
}

// IsInteractable @ 142ebb8c0

bool __thiscall
SComboBox<TSharedPtr<FWidgetReflectorNodeBase,1>_>::IsInteractable
          (SComboBox<TSharedPtr<FWidgetReflectorNodeBase,1>_> *this)

{
  return (bool)*(undefined1 *)((longlong)&this->_padding_ + 2);
}

// OnButtonClicked @ 142ec5d70

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SComboBox<TSharedPtr<int,1>_>::OnButtonClicked
          (SComboBox<TSharedPtr<int,1>_> *this,FReply *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FReply *pFVar3;
  FSlateApplication *this_00;
  longlong *plVar4;
  TSharedPtr<int,1> *local_48;
  int local_40;
  TSharedPtr<int,1> local_38;
  FReadAccessScope local_28;
  
  bVar2 = SMenuAnchor::IsOpen((SMenuAnchor *)this);
  if (bVar2) {
    if ((this->ComboListView).Object == (SListView<TSharedPtr<int,1>_> *)0x0) {
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
    plVar4 = &((this->ComboListView).Object)->_padding_;
    (**(code **)(*plVar4 + 0xd0))(plVar4,&local_48);
    if (0 < local_40) {
      local_38.Object = local_48->Object;
      local_38.SharedReferenceCount.ReferenceController =
           (local_48->SharedReferenceCount).ReferenceController;
      if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      OnSelectionChanged_Internal(this,&local_38,Direct);
    }
    DestructItems<TSharedPtr<int,1>,int>(local_48,local_40);
    if (local_48 != (TSharedPtr<int,1> *)0x0) {
      FMemory::Free(local_48);
    }
  }
  else {
    this_00 = FSlateApplication::Get();
    FSlateApplication::PlaySound(this_00,&this->PressedSound,0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnComboBoxOpening,
               &local_28);
    if ((*(int *)&(this->OnComboBoxOpening).field_0x10 != 0) &&
       (plVar4 = *(longlong **)&(this->OnComboBoxOpening).field_0x8, plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 0x68))();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
  }
  SComboButton::OnButtonClicked((SComboButton *)this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// OnButtonClicked @ 142ec5eb0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SComboBox<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>::OnButtonClicked
          (SComboBox<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *this,
          FReply *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FReply *pFVar3;
  FSlateApplication *this_00;
  longlong *plVar4;
  TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1> *local_48;
  int local_40;
  TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1> local_38;
  FReadAccessScope local_28;
  
  bVar2 = SMenuAnchor::IsOpen((SMenuAnchor *)this);
  if (bVar2) {
    if ((this->ComboListView).Object ==
        (SListView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *)0x0) {
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
    plVar4 = &((this->ComboListView).Object)->_padding_;
    (**(code **)(*plVar4 + 0xd0))(plVar4,&local_48);
    if (0 < local_40) {
      local_38.Object = local_48->Object;
      local_38.SharedReferenceCount.ReferenceController =
           (local_48->SharedReferenceCount).ReferenceController;
      if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      OnSelectionChanged_Internal(this,&local_38,Direct);
    }
    DestructItems<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>,int>(local_48,local_40);
    if (local_48 != (TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1> *)0x0) {
      FMemory::Free(local_48);
    }
  }
  else {
    this_00 = FSlateApplication::Get();
    FSlateApplication::PlaySound(this_00,&this->PressedSound,0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnComboBoxOpening,
               &local_28);
    if ((*(int *)&(this->OnComboBoxOpening).field_0x10 != 0) &&
       (plVar4 = *(longlong **)&(this->OnComboBoxOpening).field_0x8, plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 0x68))();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
  }
  SComboButton::OnButtonClicked((SComboButton *)this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// OnButtonClicked @ 142ec5ff0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SComboBox<TSharedPtr<FWidgetReflectorNodeBase,1>_>::OnButtonClicked
          (SComboBox<TSharedPtr<FWidgetReflectorNodeBase,1>_> *this,FReply *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FReply *pFVar3;
  FSlateApplication *this_00;
  longlong *plVar4;
  TSharedPtr<FWidgetReflectorNodeBase,1> *local_48;
  int local_40;
  TSharedPtr<FWidgetReflectorNodeBase,1> local_38;
  FReadAccessScope local_28;
  
  bVar2 = SMenuAnchor::IsOpen((SMenuAnchor *)this);
  if (bVar2) {
    if ((this->ComboListView).Object == (SListView<TSharedPtr<FWidgetReflectorNodeBase,1>_> *)0x0) {
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
    plVar4 = &((this->ComboListView).Object)->_padding_;
    (**(code **)(*plVar4 + 0xd0))(plVar4,&local_48);
    if (0 < local_40) {
      local_38.Object = local_48->Object;
      local_38.SharedReferenceCount.ReferenceController =
           (local_48->SharedReferenceCount).ReferenceController;
      if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      OnSelectionChanged_Internal(this,&local_38,Direct);
    }
    DestructItems<TSharedPtr<FWidgetReflectorNodeBase,1>,int>(local_48,local_40);
    if (local_48 != (TSharedPtr<FWidgetReflectorNodeBase,1> *)0x0) {
      FMemory::Free(local_48);
    }
  }
  else {
    this_00 = FSlateApplication::Get();
    FSlateApplication::PlaySound(this_00,&this->PressedSound,0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnComboBoxOpening,
               &local_28);
    if ((*(int *)&(this->OnComboBoxOpening).field_0x10 != 0) &&
       (plVar4 = *(longlong **)&(this->OnComboBoxOpening).field_0x8, plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 0x68))();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
  }
  SComboButton::OnButtonClicked((SComboButton *)this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// OnKeyDown @ 142ecdc60

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SComboBox<TSharedPtr<int,1>_>::OnKeyDown
          (SComboBox<TSharedPtr<int,1>_> *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FKeyEvent *param_2)

{
  FName FVar1;
  int *piVar2;
  IItemsSource<TSharedPtr<int,1>_> *pIVar3;
  bool bVar4;
  char cVar5;
  char cVar6;
  FSlateApplication *pFVar7;
  SListView<TSharedPtr<int,1>_> *pSVar8;
  TSharedRef<SWidget,1> *pTVar9;
  atomic<int> *paVar10;
  longlong *plVar11;
  TSharedPtr<int,1> *pTVar12;
  TReferenceControllerBase<1> *pTVar13;
  int iVar14;
  SWidget *pSVar15;
  bool bVar16;
  uint uStackX_c;
  undefined1 local_108 [16];
  TSharedPtr<int,1> *local_f8;
  int local_f0;
  FReply local_e8;
  
  bVar16 = false;
  cVar5 = (**(code **)(this->_padding_ + 0x1b0))();
  if (cVar5 == '\0') goto LAB_142ecde47;
  pFVar7 = FSlateApplication::Get();
  cVar5 = (**(code **)(*(longlong *)pFVar7 + 0xb0))(pFVar7,param_2);
  pFVar7 = FSlateApplication::Get();
  cVar6 = (**(code **)(*(longlong *)pFVar7 + 0xa0))(pFVar7);
  if (this->EnableGamepadNavigationMode == false) {
    if (cVar6 == '\x02') {
      pTVar13 = (this->SelectedItem).SharedReferenceCount.ReferenceController;
      piVar2 = (this->SelectedItem).Object;
      if (pTVar13 == (TReferenceControllerBase<1> *)0x0) {
        paVar10 = (atomic<int> *)&DAT_00000008;
      }
      else {
        paVar10 = &pTVar13->SharedReferenceCount;
        LOCK();
        *paVar10 = (atomic<int>)((int)*paVar10 + 1);
        UNLOCK();
      }
      if (piVar2 == (int *)0x0) goto LAB_142ecdf77;
      if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *paVar10 = (atomic<int>)((int)*paVar10 + 1);
        UNLOCK();
      }
      pSVar8 = TSharedPtr<SListView<TSharedPtr<int,1>_>,1>::operator->(&this->ComboListView);
      pIVar3 = (pSVar8->ViewSource).Ptr;
      if (pIVar3 == (IItemsSource<TSharedPtr<int,1>_> *)0x0) {
        local_108._0_8_ = (SWidget *)0x0;
        plVar11 = (longlong *)local_108;
        local_108._8_8_ = local_108._8_8_ & 0xffffffff00000000;
      }
      else {
        plVar11 = (longlong *)(**(code **)((longlong)*pIVar3 + 8))(pIVar3,local_108);
      }
      local_108._0_8_ = *plVar11;
      local_108._8_8_ = plVar11[1];
      for (pSVar15 = (SWidget *)local_108._0_8_;
          pSVar15 !=
          (SWidget *)(&((SWidget *)local_108._0_8_)->_padding_ + (longlong)(int)local_108._8_8_ * 2)
          ; pSVar15 = (SWidget *)&pSVar15->_padding_) {
        if ((int *)pSVar15->_padding_ == piVar2) {
          iVar14 = (int)((longlong)pSVar15 - local_108._0_8_ >> 4);
          if (0 < iVar14) {
            iVar14 = iVar14 + -1;
            goto LAB_142ecdf3e;
          }
          break;
        }
      }
    }
    else {
      if (cVar6 != '\x03') {
        SComboButton::OnKeyDown((SComboButton *)this,__return_storage_ptr__,param_1,param_2);
        return __return_storage_ptr__;
      }
      pTVar13 = (this->SelectedItem).SharedReferenceCount.ReferenceController;
      piVar2 = (this->SelectedItem).Object;
      if (pTVar13 == (TReferenceControllerBase<1> *)0x0) {
        paVar10 = (atomic<int> *)&DAT_00000008;
      }
      else {
        paVar10 = &pTVar13->SharedReferenceCount;
        LOCK();
        *paVar10 = (atomic<int>)((int)*paVar10 + 1);
        UNLOCK();
      }
      if (piVar2 == (int *)0x0) goto LAB_142ecdf77;
      if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *paVar10 = (atomic<int>)((int)*paVar10 + 1);
        UNLOCK();
      }
      pSVar8 = TSharedPtr<SListView<TSharedPtr<int,1>_>,1>::operator->(&this->ComboListView);
      pIVar3 = (pSVar8->ViewSource).Ptr;
      if (pIVar3 == (IItemsSource<TSharedPtr<int,1>_> *)0x0) {
        local_108._0_8_ = (SWidget *)0x0;
        plVar11 = (longlong *)local_108;
        local_108._8_8_ = local_108._8_8_ & 0xffffffff00000000;
      }
      else {
        plVar11 = (longlong *)(**(code **)((longlong)*pIVar3 + 8))(pIVar3,local_108);
      }
      local_108._0_8_ = *plVar11;
      local_108._8_8_ = plVar11[1];
      for (pSVar15 = (SWidget *)local_108._0_8_;
          pSVar15 !=
          (SWidget *)(&((SWidget *)local_108._0_8_)->_padding_ + (longlong)(int)local_108._8_8_ * 2)
          ; pSVar15 = (SWidget *)&pSVar15->_padding_) {
        if ((int *)pSVar15->_padding_ == piVar2) {
          iVar14 = (int)((longlong)pSVar15 - local_108._0_8_ >> 4);
          goto LAB_142ece033;
        }
      }
      iVar14 = -1;
LAB_142ece033:
      if (iVar14 < (int)local_108._8_8_ + -1) {
        iVar14 = iVar14 + 1;
LAB_142ecdf3e:
        pTVar12 = TArrayView<TSharedPtr<int,1>_const_,int>::operator[]
                            ((TArrayView<TSharedPtr<int,1>_const_,int> *)local_108,iVar14);
        local_108._0_8_ = pTVar12->Object;
        local_108._8_8_ = (pTVar12->SharedReferenceCount).ReferenceController;
        if ((TReferenceControllerBase<1> *)local_108._8_8_ != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          ((TReferenceControllerBase<1> *)local_108._8_8_)->SharedReferenceCount =
               (atomic<int>)
               ((int)((TReferenceControllerBase<1> *)local_108._8_8_)->SharedReferenceCount + 1);
          UNLOCK();
        }
        SetSelectedItem(this,(TSharedPtr<int,1> *)local_108);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
LAB_142ecdf77:
    FReply::FReply(__return_storage_ptr__,true);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
    return __return_storage_ptr__;
  }
  if (cVar5 == '\0') {
    if (this->bControllerInputCaptured == false) {
      this->bControllerInputCaptured = true;
      pFVar7 = FSlateApplication::Get();
      FSlateApplication::PlaySound(pFVar7,&this->PressedSound,0);
      TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::ExecuteIfBound
                (&this->OnComboBoxOpening);
      SComboButton::OnButtonClicked((SComboButton *)this,__return_storage_ptr__);
      return __return_storage_ptr__;
    }
    this->bControllerInputCaptured = false;
    pSVar8 = TSharedPtr<SListView<TSharedPtr<int,1>_>,1>::operator->(&this->ComboListView);
    (**(code **)(pSVar8->_padding_ + 0xd0))(&pSVar8->_padding_,&local_f8);
    if (0 < local_f0) {
      local_108._0_8_ = local_f8->Object;
      local_108._8_8_ = (local_f8->SharedReferenceCount).ReferenceController;
      if ((TReferenceControllerBase<1> *)local_108._8_8_ != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        ((TReferenceControllerBase<1> *)local_108._8_8_)->SharedReferenceCount =
             (atomic<int>)
             ((int)((TReferenceControllerBase<1> *)local_108._8_8_)->SharedReferenceCount + 1);
        UNLOCK();
      }
      OnSelectionChanged_Internal(this,(TSharedPtr<int,1> *)local_108,Direct);
    }
    FReply::FReply(&local_e8,true);
    pTVar9 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&this->_padding_,
                        (TSharedRef<SWidget,1> *)local_108);
    FReply::SetUserFocus(&local_e8,pTVar9,SetDirectly,false);
    FReply::FReply(__return_storage_ptr__,&local_e8);
    FReply::~FReply(&local_e8);
    DestructItems<TSharedPtr<int,1>,int>(local_f8,local_f0);
    if (local_f8 == (TSharedPtr<int,1> *)0x0) {
      return __return_storage_ptr__;
    }
    FMemory::Free(local_f8);
    return __return_storage_ptr__;
  }
  if (cVar5 == '\x01') {
    pTVar13 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
LAB_142ecde1e:
    bVar4 = true;
  }
  else {
    pTVar13 = (param_2->Key).KeyDetails.SharedReferenceCount.ReferenceController;
    FVar1 = (param_2->Key).KeyName;
    if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar16 = true;
    if (FVar1 == EKeys::BackSpace.KeyName) goto LAB_142ecde1e;
    bVar4 = false;
  }
  if (bVar16) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  }
  bVar16 = this->bControllerInputCaptured;
  if (bVar4) {
    OnMenuOpenChanged(this,false);
  }
  if (bVar16 != false) {
    FReply::FReply(__return_storage_ptr__,true);
    return __return_storage_ptr__;
  }
LAB_142ecde47:
  SWidget::OnKeyDown((SWidget *)this,__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// OnKeyDown @ 142ece070

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SComboBox<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>::OnKeyDown
          (SComboBox<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *this,
          FReply *__return_storage_ptr__,FGeometry *param_1,FKeyEvent *param_2)

{
  FName FVar1;
  FWidgetSnapshotTarget *pFVar2;
  IItemsSource<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *pIVar3;
  bool bVar4;
  char cVar5;
  char cVar6;
  FSlateApplication *pFVar7;
  SListView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *pSVar8;
  TSharedRef<SWidget,1> *pTVar9;
  atomic<int> *paVar10;
  longlong *plVar11;
  TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1> *pTVar12;
  TReferenceControllerBase<1> *pTVar13;
  int iVar14;
  SWidget *pSVar15;
  bool bVar16;
  uint uStackX_c;
  undefined1 local_108 [16];
  TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1> *local_f8;
  int local_f0;
  FReply local_e8;
  
  bVar16 = false;
  cVar5 = (**(code **)(this->_padding_ + 0x1b0))();
  if (cVar5 == '\0') goto LAB_142ece257;
  pFVar7 = FSlateApplication::Get();
  cVar5 = (**(code **)(*(longlong *)pFVar7 + 0xb0))(pFVar7,param_2);
  pFVar7 = FSlateApplication::Get();
  cVar6 = (**(code **)(*(longlong *)pFVar7 + 0xa0))(pFVar7);
  if (this->EnableGamepadNavigationMode == false) {
    if (cVar6 == '\x02') {
      pTVar13 = (this->SelectedItem).SharedReferenceCount.ReferenceController;
      pFVar2 = (this->SelectedItem).Object;
      if (pTVar13 == (TReferenceControllerBase<1> *)0x0) {
        paVar10 = (atomic<int> *)&DAT_00000008;
      }
      else {
        paVar10 = &pTVar13->SharedReferenceCount;
        LOCK();
        *paVar10 = (atomic<int>)((int)*paVar10 + 1);
        UNLOCK();
      }
      if (pFVar2 == (FWidgetSnapshotTarget *)0x0) goto LAB_142ece387;
      if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *paVar10 = (atomic<int>)((int)*paVar10 + 1);
        UNLOCK();
      }
      pSVar8 = TSharedPtr<SListView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,1>::
               operator->(&this->ComboListView);
      pIVar3 = (pSVar8->ViewSource).Ptr;
      if (pIVar3 == (IItemsSource<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *)0x0)
      {
        local_108._0_8_ = (SWidget *)0x0;
        plVar11 = (longlong *)local_108;
        local_108._8_8_ = local_108._8_8_ & 0xffffffff00000000;
      }
      else {
        plVar11 = (longlong *)(**(code **)((longlong)*pIVar3 + 8))(pIVar3,local_108);
      }
      local_108._0_8_ = *plVar11;
      local_108._8_8_ = plVar11[1];
      for (pSVar15 = (SWidget *)local_108._0_8_;
          pSVar15 !=
          (SWidget *)((FText *)&((SWidget *)local_108._0_8_)->_padding_ + (int)local_108._8_8_);
          pSVar15 = (SWidget *)&pSVar15->_padding_) {
        if ((FWidgetSnapshotTarget *)(((FText *)&pSVar15->_padding_)->TextData).Reference == pFVar2)
        {
          iVar14 = (int)((longlong)pSVar15 - local_108._0_8_ >> 4);
          if (0 < iVar14) {
            iVar14 = iVar14 + -1;
            goto LAB_142ece34e;
          }
          break;
        }
      }
    }
    else {
      if (cVar6 != '\x03') {
        SComboButton::OnKeyDown((SComboButton *)this,__return_storage_ptr__,param_1,param_2);
        return __return_storage_ptr__;
      }
      pTVar13 = (this->SelectedItem).SharedReferenceCount.ReferenceController;
      pFVar2 = (this->SelectedItem).Object;
      if (pTVar13 == (TReferenceControllerBase<1> *)0x0) {
        paVar10 = (atomic<int> *)&DAT_00000008;
      }
      else {
        paVar10 = &pTVar13->SharedReferenceCount;
        LOCK();
        *paVar10 = (atomic<int>)((int)*paVar10 + 1);
        UNLOCK();
      }
      if (pFVar2 == (FWidgetSnapshotTarget *)0x0) goto LAB_142ece387;
      if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *paVar10 = (atomic<int>)((int)*paVar10 + 1);
        UNLOCK();
      }
      pSVar8 = TSharedPtr<SListView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,1>::
               operator->(&this->ComboListView);
      pIVar3 = (pSVar8->ViewSource).Ptr;
      if (pIVar3 == (IItemsSource<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *)0x0)
      {
        local_108._0_8_ = (SWidget *)0x0;
        plVar11 = (longlong *)local_108;
        local_108._8_8_ = local_108._8_8_ & 0xffffffff00000000;
      }
      else {
        plVar11 = (longlong *)(**(code **)((longlong)*pIVar3 + 8))(pIVar3,local_108);
      }
      local_108._0_8_ = *plVar11;
      local_108._8_8_ = plVar11[1];
      for (pSVar15 = (SWidget *)local_108._0_8_;
          pSVar15 !=
          (SWidget *)((FText *)&((SWidget *)local_108._0_8_)->_padding_ + (int)local_108._8_8_);
          pSVar15 = (SWidget *)&pSVar15->_padding_) {
        if ((FWidgetSnapshotTarget *)(((FText *)&pSVar15->_padding_)->TextData).Reference == pFVar2)
        {
          iVar14 = (int)((longlong)pSVar15 - local_108._0_8_ >> 4);
          goto LAB_142ece443;
        }
      }
      iVar14 = -1;
LAB_142ece443:
      if (iVar14 < (int)local_108._8_8_ + -1) {
        iVar14 = iVar14 + 1;
LAB_142ece34e:
        pTVar12 = TArrayView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_const_,int>::
                  operator[]((TArrayView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_const_,int>
                              *)local_108,iVar14);
        local_108._0_8_ = pTVar12->Object;
        local_108._8_8_ = (pTVar12->SharedReferenceCount).ReferenceController;
        if ((TReferenceControllerBase<1> *)local_108._8_8_ != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          ((TReferenceControllerBase<1> *)local_108._8_8_)->SharedReferenceCount =
               (atomic<int>)
               ((int)((TReferenceControllerBase<1> *)local_108._8_8_)->SharedReferenceCount + 1);
          UNLOCK();
        }
        SetSelectedItem(this,(TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1> *)local_108);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
LAB_142ece387:
    FReply::FReply(__return_storage_ptr__,true);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
    return __return_storage_ptr__;
  }
  if (cVar5 == '\0') {
    if (this->bControllerInputCaptured == false) {
      this->bControllerInputCaptured = true;
      pFVar7 = FSlateApplication::Get();
      FSlateApplication::PlaySound(pFVar7,&this->PressedSound,0);
      TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::ExecuteIfBound
                (&this->OnComboBoxOpening);
      SComboButton::OnButtonClicked((SComboButton *)this,__return_storage_ptr__);
      return __return_storage_ptr__;
    }
    this->bControllerInputCaptured = false;
    pSVar8 = TSharedPtr<SListView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,1>::
             operator->(&this->ComboListView);
    (**(code **)(pSVar8->_padding_ + 0xd0))(&pSVar8->_padding_,&local_f8);
    if (0 < local_f0) {
      local_108._0_8_ = local_f8->Object;
      local_108._8_8_ = (local_f8->SharedReferenceCount).ReferenceController;
      if ((TReferenceControllerBase<1> *)local_108._8_8_ != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        ((TReferenceControllerBase<1> *)local_108._8_8_)->SharedReferenceCount =
             (atomic<int>)
             ((int)((TReferenceControllerBase<1> *)local_108._8_8_)->SharedReferenceCount + 1);
        UNLOCK();
      }
      OnSelectionChanged_Internal
                (this,(TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1> *)local_108,Direct);
    }
    FReply::FReply(&local_e8,true);
    pTVar9 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&this->_padding_,
                        (TSharedRef<SWidget,1> *)local_108);
    FReply::SetUserFocus(&local_e8,pTVar9,SetDirectly,false);
    FReply::FReply(__return_storage_ptr__,&local_e8);
    FReply::~FReply(&local_e8);
    DestructItems<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>,int>(local_f8,local_f0);
    if (local_f8 == (TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1> *)0x0) {
      return __return_storage_ptr__;
    }
    FMemory::Free(local_f8);
    return __return_storage_ptr__;
  }
  if (cVar5 == '\x01') {
    pTVar13 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
LAB_142ece22e:
    bVar4 = true;
  }
  else {
    pTVar13 = (param_2->Key).KeyDetails.SharedReferenceCount.ReferenceController;
    FVar1 = (param_2->Key).KeyName;
    if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar16 = true;
    if (FVar1 == EKeys::BackSpace.KeyName) goto LAB_142ece22e;
    bVar4 = false;
  }
  if (bVar16) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  }
  bVar16 = this->bControllerInputCaptured;
  if (bVar4) {
    OnMenuOpenChanged(this,false);
  }
  if (bVar16 != false) {
    FReply::FReply(__return_storage_ptr__,true);
    return __return_storage_ptr__;
  }
LAB_142ece257:
  SWidget::OnKeyDown((SWidget *)this,__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// OnKeyDown @ 142ece480

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SComboBox<TSharedPtr<FWidgetReflectorNodeBase,1>_>::OnKeyDown
          (SComboBox<TSharedPtr<FWidgetReflectorNodeBase,1>_> *this,FReply *__return_storage_ptr__,
          FGeometry *param_1,FKeyEvent *param_2)

{
  FName FVar1;
  FWidgetReflectorNodeBase *pFVar2;
  IItemsSource<TSharedPtr<FWidgetReflectorNodeBase,1>_> *pIVar3;
  bool bVar4;
  char cVar5;
  char cVar6;
  FSlateApplication *pFVar7;
  SListView<TSharedPtr<FWidgetReflectorNodeBase,1>_> *pSVar8;
  TSharedRef<SWidget,1> *pTVar9;
  atomic<int> *paVar10;
  longlong *plVar11;
  TSharedPtr<FWidgetReflectorNodeBase,1> *pTVar12;
  TReferenceControllerBase<1> *pTVar13;
  int iVar14;
  SWidget *pSVar15;
  bool bVar16;
  uint uStackX_c;
  undefined1 local_108 [16];
  TSharedPtr<FWidgetReflectorNodeBase,1> *local_f8;
  int local_f0;
  FReply local_e8;
  
  bVar16 = false;
  cVar5 = (**(code **)(this->_padding_ + 0x1b0))();
  if (cVar5 == '\0') goto LAB_142ece667;
  pFVar7 = FSlateApplication::Get();
  cVar5 = (**(code **)(*(longlong *)pFVar7 + 0xb0))(pFVar7,param_2);
  pFVar7 = FSlateApplication::Get();
  cVar6 = (**(code **)(*(longlong *)pFVar7 + 0xa0))(pFVar7);
  if (this->EnableGamepadNavigationMode == false) {
    if (cVar6 == '\x02') {
      pTVar13 = (this->SelectedItem).SharedReferenceCount.ReferenceController;
      pFVar2 = (this->SelectedItem).Object;
      if (pTVar13 == (TReferenceControllerBase<1> *)0x0) {
        paVar10 = (atomic<int> *)&DAT_00000008;
      }
      else {
        paVar10 = &pTVar13->SharedReferenceCount;
        LOCK();
        *paVar10 = (atomic<int>)((int)*paVar10 + 1);
        UNLOCK();
      }
      if (pFVar2 == (FWidgetReflectorNodeBase *)0x0) goto LAB_142ece797;
      if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *paVar10 = (atomic<int>)((int)*paVar10 + 1);
        UNLOCK();
      }
      pSVar8 = TSharedPtr<SListView<TSharedPtr<FWidgetReflectorNodeBase,1>_>,1>::operator->
                         (&this->ComboListView);
      pIVar3 = (pSVar8->ViewSource).Ptr;
      if (pIVar3 == (IItemsSource<TSharedPtr<FWidgetReflectorNodeBase,1>_> *)0x0) {
        local_108._0_8_ = (SWidget *)0x0;
        plVar11 = (longlong *)local_108;
        local_108._8_8_ = local_108._8_8_ & 0xffffffff00000000;
      }
      else {
        plVar11 = (longlong *)(**(code **)((longlong)*pIVar3 + 8))(pIVar3,local_108);
      }
      local_108._0_8_ = *plVar11;
      local_108._8_8_ = plVar11[1];
      for (pSVar15 = (SWidget *)local_108._0_8_;
          pSVar15 !=
          (SWidget *)(&((SWidget *)local_108._0_8_)->_padding_ + (longlong)(int)local_108._8_8_ * 2)
          ; pSVar15 = (SWidget *)&pSVar15->_padding_) {
        if ((FWidgetReflectorNodeBase *)pSVar15->_padding_ == pFVar2) {
          iVar14 = (int)((longlong)pSVar15 - local_108._0_8_ >> 4);
          if (0 < iVar14) {
            iVar14 = iVar14 + -1;
            goto LAB_142ece75e;
          }
          break;
        }
      }
    }
    else {
      if (cVar6 != '\x03') {
        SComboButton::OnKeyDown((SComboButton *)this,__return_storage_ptr__,param_1,param_2);
        return __return_storage_ptr__;
      }
      pTVar13 = (this->SelectedItem).SharedReferenceCount.ReferenceController;
      pFVar2 = (this->SelectedItem).Object;
      if (pTVar13 == (TReferenceControllerBase<1> *)0x0) {
        paVar10 = (atomic<int> *)&DAT_00000008;
      }
      else {
        paVar10 = &pTVar13->SharedReferenceCount;
        LOCK();
        *paVar10 = (atomic<int>)((int)*paVar10 + 1);
        UNLOCK();
      }
      if (pFVar2 == (FWidgetReflectorNodeBase *)0x0) goto LAB_142ece797;
      if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *paVar10 = (atomic<int>)((int)*paVar10 + 1);
        UNLOCK();
      }
      pSVar8 = TSharedPtr<SListView<TSharedPtr<FWidgetReflectorNodeBase,1>_>,1>::operator->
                         (&this->ComboListView);
      pIVar3 = (pSVar8->ViewSource).Ptr;
      if (pIVar3 == (IItemsSource<TSharedPtr<FWidgetReflectorNodeBase,1>_> *)0x0) {
        local_108._0_8_ = (SWidget *)0x0;
        plVar11 = (longlong *)local_108;
        local_108._8_8_ = local_108._8_8_ & 0xffffffff00000000;
      }
      else {
        plVar11 = (longlong *)(**(code **)((longlong)*pIVar3 + 8))(pIVar3,local_108);
      }
      local_108._0_8_ = *plVar11;
      local_108._8_8_ = plVar11[1];
      for (pSVar15 = (SWidget *)local_108._0_8_;
          pSVar15 !=
          (SWidget *)(&((SWidget *)local_108._0_8_)->_padding_ + (longlong)(int)local_108._8_8_ * 2)
          ; pSVar15 = (SWidget *)&pSVar15->_padding_) {
        if ((FWidgetReflectorNodeBase *)pSVar15->_padding_ == pFVar2) {
          iVar14 = (int)((longlong)pSVar15 - local_108._0_8_ >> 4);
          goto LAB_142ece853;
        }
      }
      iVar14 = -1;
LAB_142ece853:
      if (iVar14 < (int)local_108._8_8_ + -1) {
        iVar14 = iVar14 + 1;
LAB_142ece75e:
        pTVar12 = TArrayView<TSharedPtr<FWidgetReflectorNodeBase,1>_const_,int>::operator[]
                            ((TArrayView<TSharedPtr<FWidgetReflectorNodeBase,1>_const_,int> *)
                             local_108,iVar14);
        local_108._0_8_ = pTVar12->Object;
        local_108._8_8_ = (pTVar12->SharedReferenceCount).ReferenceController;
        if ((TReferenceControllerBase<1> *)local_108._8_8_ != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          ((TReferenceControllerBase<1> *)local_108._8_8_)->SharedReferenceCount =
               (atomic<int>)
               ((int)((TReferenceControllerBase<1> *)local_108._8_8_)->SharedReferenceCount + 1);
          UNLOCK();
        }
        SetSelectedItem(this,(TSharedPtr<FWidgetReflectorNodeBase,1> *)local_108);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
LAB_142ece797:
    FReply::FReply(__return_storage_ptr__,true);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
    return __return_storage_ptr__;
  }
  if (cVar5 == '\0') {
    if (this->bControllerInputCaptured == false) {
      this->bControllerInputCaptured = true;
      pFVar7 = FSlateApplication::Get();
      FSlateApplication::PlaySound(pFVar7,&this->PressedSound,0);
      TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::ExecuteIfBound
                (&this->OnComboBoxOpening);
      SComboButton::OnButtonClicked((SComboButton *)this,__return_storage_ptr__);
      return __return_storage_ptr__;
    }
    this->bControllerInputCaptured = false;
    pSVar8 = TSharedPtr<SListView<TSharedPtr<FWidgetReflectorNodeBase,1>_>,1>::operator->
                       (&this->ComboListView);
    (**(code **)(pSVar8->_padding_ + 0xd0))(&pSVar8->_padding_,&local_f8);
    if (0 < local_f0) {
      local_108._0_8_ = local_f8->Object;
      local_108._8_8_ = (local_f8->SharedReferenceCount).ReferenceController;
      if ((TReferenceControllerBase<1> *)local_108._8_8_ != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        ((TReferenceControllerBase<1> *)local_108._8_8_)->SharedReferenceCount =
             (atomic<int>)
             ((int)((TReferenceControllerBase<1> *)local_108._8_8_)->SharedReferenceCount + 1);
        UNLOCK();
      }
      OnSelectionChanged_Internal(this,(TSharedPtr<FWidgetReflectorNodeBase,1> *)local_108,Direct);
    }
    FReply::FReply(&local_e8,true);
    pTVar9 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&this->_padding_,
                        (TSharedRef<SWidget,1> *)local_108);
    FReply::SetUserFocus(&local_e8,pTVar9,SetDirectly,false);
    FReply::FReply(__return_storage_ptr__,&local_e8);
    FReply::~FReply(&local_e8);
    DestructItems<TSharedPtr<FWidgetReflectorNodeBase,1>,int>(local_f8,local_f0);
    if (local_f8 == (TSharedPtr<FWidgetReflectorNodeBase,1> *)0x0) {
      return __return_storage_ptr__;
    }
    FMemory::Free(local_f8);
    return __return_storage_ptr__;
  }
  if (cVar5 == '\x01') {
    pTVar13 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
LAB_142ece63e:
    bVar4 = true;
  }
  else {
    pTVar13 = (param_2->Key).KeyDetails.SharedReferenceCount.ReferenceController;
    FVar1 = (param_2->Key).KeyName;
    if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar16 = true;
    if (FVar1 == EKeys::BackSpace.KeyName) goto LAB_142ece63e;
    bVar4 = false;
  }
  if (bVar16) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  }
  bVar16 = this->bControllerInputCaptured;
  if (bVar4) {
    OnMenuOpenChanged(this,false);
  }
  if (bVar16 != false) {
    FReply::FReply(__return_storage_ptr__,true);
    return __return_storage_ptr__;
  }
LAB_142ece667:
  SWidget::OnKeyDown((SWidget *)this,__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// OnKeyDownHandler @ 142ecf440

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SComboBox<TSharedPtr<int,1>_>::OnKeyDownHandler
          (SComboBox<TSharedPtr<int,1>_> *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FKeyEvent *param_2)

{
  FName FVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  FReply *pFVar4;
  longlong *plVar5;
  bool bVar6;
  TSharedPtr<int,1> *local_28;
  int local_20;
  TSharedPtr<int,1> local_18;
  
  FVar1 = (param_2->Key).KeyName;
  pTVar2 = (param_2->Key).KeyDetails.SharedReferenceCount.ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar6 = FVar1 == EKeys::Enter.KeyName;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (bVar6) {
    if (((this->ComboListView).Object == (SListView<TSharedPtr<int,1>_> *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      pFVar4 = (FReply *)(*pcVar3)();
      return pFVar4;
    }
    plVar5 = &((this->ComboListView).Object)->_padding_;
    (**(code **)(*plVar5 + 0xd0))(plVar5,&local_28);
    if (0 < local_20) {
      local_18.Object = local_28->Object;
      local_18.SharedReferenceCount.ReferenceController =
           (local_28->SharedReferenceCount).ReferenceController;
      if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      OnSelectionChanged_Internal(this,&local_18,OnKeyPress);
      FReply::FReply(__return_storage_ptr__,true);
      DestructItems<TSharedPtr<int,1>,int>(local_28,local_20);
      if (local_28 == (TSharedPtr<int,1> *)0x0) {
        return __return_storage_ptr__;
      }
      FMemory::Free(local_28);
      return __return_storage_ptr__;
    }
    DestructItems<TSharedPtr<int,1>,int>(local_28,local_20);
    if (local_28 != (TSharedPtr<int,1> *)0x0) {
      FMemory::Free(local_28);
    }
  }
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnKeyDownHandler @ 142ecf580

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SComboBox<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>::OnKeyDownHandler
          (SComboBox<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *this,
          FReply *__return_storage_ptr__,FGeometry *param_1,FKeyEvent *param_2)

{
  FName FVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  FReply *pFVar4;
  longlong *plVar5;
  bool bVar6;
  TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1> *local_28;
  int local_20;
  TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1> local_18;
  
  FVar1 = (param_2->Key).KeyName;
  pTVar2 = (param_2->Key).KeyDetails.SharedReferenceCount.ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar6 = FVar1 == EKeys::Enter.KeyName;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (bVar6) {
    if (((this->ComboListView).Object ==
         (SListView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      pFVar4 = (FReply *)(*pcVar3)();
      return pFVar4;
    }
    plVar5 = &((this->ComboListView).Object)->_padding_;
    (**(code **)(*plVar5 + 0xd0))(plVar5,&local_28);
    if (0 < local_20) {
      local_18.Object = local_28->Object;
      local_18.SharedReferenceCount.ReferenceController =
           (local_28->SharedReferenceCount).ReferenceController;
      if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      OnSelectionChanged_Internal(this,&local_18,OnKeyPress);
      FReply::FReply(__return_storage_ptr__,true);
      DestructItems<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>,int>(local_28,local_20)
      ;
      if (local_28 == (TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1> *)0x0) {
        return __return_storage_ptr__;
      }
      FMemory::Free(local_28);
      return __return_storage_ptr__;
    }
    DestructItems<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>,int>(local_28,local_20);
    if (local_28 != (TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1> *)0x0) {
      FMemory::Free(local_28);
    }
  }
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnKeyDownHandler @ 142ecf6c0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SComboBox<TSharedPtr<FWidgetReflectorNodeBase,1>_>::OnKeyDownHandler
          (SComboBox<TSharedPtr<FWidgetReflectorNodeBase,1>_> *this,FReply *__return_storage_ptr__,
          FGeometry *param_1,FKeyEvent *param_2)

{
  FName FVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  FReply *pFVar4;
  longlong *plVar5;
  bool bVar6;
  TSharedPtr<FWidgetReflectorNodeBase,1> *local_28;
  int local_20;
  TSharedPtr<FWidgetReflectorNodeBase,1> local_18;
  
  FVar1 = (param_2->Key).KeyName;
  pTVar2 = (param_2->Key).KeyDetails.SharedReferenceCount.ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar6 = FVar1 == EKeys::Enter.KeyName;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (bVar6) {
    if (((this->ComboListView).Object == (SListView<TSharedPtr<FWidgetReflectorNodeBase,1>_> *)0x0)
       && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      pFVar4 = (FReply *)(*pcVar3)();
      return pFVar4;
    }
    plVar5 = &((this->ComboListView).Object)->_padding_;
    (**(code **)(*plVar5 + 0xd0))(plVar5,&local_28);
    if (0 < local_20) {
      local_18.Object = local_28->Object;
      local_18.SharedReferenceCount.ReferenceController =
           (local_28->SharedReferenceCount).ReferenceController;
      if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      OnSelectionChanged_Internal(this,&local_18,OnKeyPress);
      FReply::FReply(__return_storage_ptr__,true);
      DestructItems<TSharedPtr<FWidgetReflectorNodeBase,1>,int>(local_28,local_20);
      if (local_28 == (TSharedPtr<FWidgetReflectorNodeBase,1> *)0x0) {
        return __return_storage_ptr__;
      }
      FMemory::Free(local_28);
      return __return_storage_ptr__;
    }
    DestructItems<TSharedPtr<FWidgetReflectorNodeBase,1>,int>(local_28,local_20);
    if (local_28 != (TSharedPtr<FWidgetReflectorNodeBase,1> *)0x0) {
      FMemory::Free(local_28);
    }
  }
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnMenuOpenChanged @ 142ed27d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SComboBox<TSharedPtr<int,1>_>::OnMenuOpenChanged(SComboBox<TSharedPtr<int,1>_> *this,bool param_1)

{
  int *piVar1;
  TReferenceControllerBase<1> *pTVar2;
  SListView<TSharedPtr<int,1>_> *pSVar3;
  code *pcVar4;
  bool bVar5;
  FSlateApplication *this_00;
  SComboBox<TSharedPtr<int,1>_> *local_res18;
  TSharedPtr<int,1> local_38;
  TSharedPtr<int,1> local_28;
  code *local_18;
  SComboBox<TSharedPtr<int,1>_> **local_10;
  
  if (!param_1) {
    piVar1 = (this->SelectedItem).Object;
    this->bControllerInputCaptured = false;
    if (piVar1 != (int *)0x0) {
      pTVar2 = (this->SelectedItem).SharedReferenceCount.ReferenceController;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((this->ComboListView).Object == (SListView<TSharedPtr<int,1>_> *)0x0) {
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
      pSVar3 = (this->ComboListView).Object;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_38.Object = piVar1;
      local_38.SharedReferenceCount.ReferenceController = pTVar2;
      SListView<TSharedPtr<int,1>_>::SetSelection(pSVar3,&local_38,OnNavigation);
      if ((this->ComboListView).Object == (SListView<TSharedPtr<int,1>_> *)0x0) {
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
      pSVar3 = (this->ComboListView).Object;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_28.Object = piVar1;
      local_28.SharedReferenceCount.ReferenceController = pTVar2;
      SListView<TSharedPtr<int,1>_>::RequestScrollIntoView(pSVar3,&local_28,0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    }
    this_00 = FSlateApplication::Get();
    local_10 = &local_res18;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`SComboBox<TSharedPtr<int,1>_>::OnMenuOpenChanged'::__l5::<lambda_1>,void,FSlateUser_&>
               ::Call;
    local_res18 = this;
    FSlateApplication::ForEachUser
              (this_00,(TFunctionRef<void___cdecl(FSlateUser_&)> *)&local_18,false);
  }
  return;
}

// OnMenuOpenChanged @ 142ed2920

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SComboBox<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>::OnMenuOpenChanged
          (SComboBox<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *this,bool param_1)

{
  FWidgetSnapshotTarget *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  SListView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *pSVar3;
  code *pcVar4;
  bool bVar5;
  FSlateApplication *this_00;
  SComboBox<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *local_res18;
  TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1> local_38;
  TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1> local_28;
  code *local_18;
  SComboBox<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> **local_10;
  
  if (!param_1) {
    pFVar1 = (this->SelectedItem).Object;
    this->bControllerInputCaptured = false;
    if (pFVar1 != (FWidgetSnapshotTarget *)0x0) {
      pTVar2 = (this->SelectedItem).SharedReferenceCount.ReferenceController;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((this->ComboListView).Object ==
          (SListView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *)0x0) {
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
      pSVar3 = (this->ComboListView).Object;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_38.Object = pFVar1;
      local_38.SharedReferenceCount.ReferenceController = pTVar2;
      SListView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>::SetSelection
                (pSVar3,&local_38,OnNavigation);
      if ((this->ComboListView).Object ==
          (SListView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *)0x0) {
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
      pSVar3 = (this->ComboListView).Object;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_28.Object = pFVar1;
      local_28.SharedReferenceCount.ReferenceController = pTVar2;
      SListView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>::RequestScrollIntoView
                (pSVar3,&local_28,0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    }
    this_00 = FSlateApplication::Get();
    local_10 = &local_res18;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`SComboBox<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>::OnMenuOpenChanged'::__l5::<lambda_1>,void,FSlateUser_&>
               ::Call;
    local_res18 = this;
    FSlateApplication::ForEachUser
              (this_00,(TFunctionRef<void___cdecl(FSlateUser_&)> *)&local_18,false);
  }
  return;
}

// OnMenuOpenChanged @ 142ed2a70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SComboBox<TSharedPtr<FWidgetReflectorNodeBase,1>_>::OnMenuOpenChanged
          (SComboBox<TSharedPtr<FWidgetReflectorNodeBase,1>_> *this,bool param_1)

{
  FWidgetReflectorNodeBase *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  SListView<TSharedPtr<FWidgetReflectorNodeBase,1>_> *pSVar3;
  code *pcVar4;
  bool bVar5;
  FSlateApplication *this_00;
  SComboBox<TSharedPtr<FWidgetReflectorNodeBase,1>_> *local_res18;
  TSharedPtr<FWidgetReflectorNodeBase,1> local_38;
  TSharedPtr<FWidgetReflectorNodeBase,1> local_28;
  code *local_18;
  SComboBox<TSharedPtr<FWidgetReflectorNodeBase,1>_> **local_10;
  
  if (!param_1) {
    pFVar1 = (this->SelectedItem).Object;
    this->bControllerInputCaptured = false;
    if (pFVar1 != (FWidgetReflectorNodeBase *)0x0) {
      pTVar2 = (this->SelectedItem).SharedReferenceCount.ReferenceController;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((this->ComboListView).Object == (SListView<TSharedPtr<FWidgetReflectorNodeBase,1>_> *)0x0)
      {
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
      pSVar3 = (this->ComboListView).Object;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_38.Object = pFVar1;
      local_38.SharedReferenceCount.ReferenceController = pTVar2;
      SListView<TSharedPtr<FWidgetReflectorNodeBase,1>_>::SetSelection
                (pSVar3,&local_38,OnNavigation);
      if ((this->ComboListView).Object == (SListView<TSharedPtr<FWidgetReflectorNodeBase,1>_> *)0x0)
      {
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
      pSVar3 = (this->ComboListView).Object;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_28.Object = pFVar1;
      local_28.SharedReferenceCount.ReferenceController = pTVar2;
      SListView<TSharedPtr<FWidgetReflectorNodeBase,1>_>::RequestScrollIntoView(pSVar3,&local_28,0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    }
    this_00 = FSlateApplication::Get();
    local_10 = &local_res18;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`SComboBox<TSharedPtr<FWidgetReflectorNodeBase,1>_>::OnMenuOpenChanged'::__l5::<lambda_1>,void,FSlateUser_&>
               ::Call;
    local_res18 = this;
    FSlateApplication::ForEachUser
              (this_00,(TFunctionRef<void___cdecl(FSlateUser_&)> *)&local_18,false);
  }
  return;
}

// OnSelectionChanged_Internal @ 142ede930

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SComboBox<TSharedPtr<int,1>_>::OnSelectionChanged_Internal
          (SComboBox<TSharedPtr<int,1>_> *this,TSharedPtr<int,1> *param_1,Type param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  int *piVar2;
  TReferenceControllerBase<1> *pTVar3;
  FSlateApplication *this_00;
  TSharedPtr<int,1> local_18;
  
  if (param_2 != OnNavigation) {
    if (param_1->Object != (this->SelectedItem).Object) {
      this_00 = FSlateApplication::Get();
      FSlateApplication::PlaySound(this_00,&this->SelectionChangeSound,0);
      pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
      piVar2 = param_1->Object;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      pTVar3 = (this->SelectedItem).SharedReferenceCount.ReferenceController;
      (this->SelectedItem).Object = piVar2;
      (this->SelectedItem).SharedReferenceCount.ReferenceController = pTVar1;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      local_18.Object = param_1->Object;
      local_18.SharedReferenceCount.ReferenceController =
           (param_1->SharedReferenceCount).ReferenceController;
      if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      TDelegate<void___cdecl(TSharedPtr<int,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>::
      ExecuteIfBound(&this->OnSelectionChanged,&local_18,param_2);
    }
    (**(code **)(this->_padding_ + 0x250))(this,0,1,0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnSelectionChanged_Internal @ 142edea20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SComboBox<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>::OnSelectionChanged_Internal
          (SComboBox<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *this,
          TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1> *param_1,Type param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FWidgetSnapshotTarget *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  FSlateApplication *this_00;
  TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1> local_18;
  
  if (param_2 != OnNavigation) {
    if (param_1->Object != (this->SelectedItem).Object) {
      this_00 = FSlateApplication::Get();
      FSlateApplication::PlaySound(this_00,&this->SelectionChangeSound,0);
      pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
      pFVar2 = param_1->Object;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      pTVar3 = (this->SelectedItem).SharedReferenceCount.ReferenceController;
      (this->SelectedItem).Object = pFVar2;
      (this->SelectedItem).SharedReferenceCount.ReferenceController = pTVar1;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      local_18.Object = param_1->Object;
      local_18.SharedReferenceCount.ReferenceController =
           (param_1->SharedReferenceCount).ReferenceController;
      if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      TDelegate<void___cdecl(TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
      ::ExecuteIfBound(&this->OnSelectionChanged,&local_18,param_2);
    }
    (**(code **)(this->_padding_ + 0x250))(this,0,1,0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnSelectionChanged_Internal @ 142edeb10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SComboBox<TSharedPtr<FWidgetReflectorNodeBase,1>_>::OnSelectionChanged_Internal
          (SComboBox<TSharedPtr<FWidgetReflectorNodeBase,1>_> *this,
          TSharedPtr<FWidgetReflectorNodeBase,1> *param_1,Type param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FWidgetReflectorNodeBase *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  FSlateApplication *this_00;
  TSharedPtr<FWidgetReflectorNodeBase,1> local_18;
  
  if (param_2 != OnNavigation) {
    if (param_1->Object != (this->SelectedItem).Object) {
      this_00 = FSlateApplication::Get();
      FSlateApplication::PlaySound(this_00,&this->SelectionChangeSound,0);
      pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
      pFVar2 = param_1->Object;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      pTVar3 = (this->SelectedItem).SharedReferenceCount.ReferenceController;
      (this->SelectedItem).Object = pFVar2;
      (this->SelectedItem).SharedReferenceCount.ReferenceController = pTVar1;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      local_18.Object = param_1->Object;
      local_18.SharedReferenceCount.ReferenceController =
           (param_1->SharedReferenceCount).ReferenceController;
      if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      TDelegate<void___cdecl(TSharedPtr<FWidgetReflectorNodeBase,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
      ::ExecuteIfBound(&this->OnSelectionChanged,&local_18,param_2);
    }
    (**(code **)(this->_padding_ + 0x250))(this,0,1,0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetSelectedItem @ 142f05080

void __thiscall
SComboBox<TSharedPtr<int,1>_>::SetSelectedItem
          (SComboBox<TSharedPtr<int,1>_> *this,TSharedPtr<int,1> *param_1)

{
  int *piVar1;
  TReferenceControllerBase<1> *pTVar2;
  SListView<TSharedPtr<int,1>_> *this_00;
  code *pcVar3;
  bool bVar4;
  TSharedPtr<int,1> local_18;
  
  piVar1 = param_1->Object;
  if (piVar1 == (int *)0x0) {
    if ((this->ComboListView).Object == (SListView<TSharedPtr<int,1>_> *)0x0) {
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
    SListView<TSharedPtr<int,1>_>::ClearSelection((this->ComboListView).Object);
  }
  else {
    pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((this->ComboListView).Object == (SListView<TSharedPtr<int,1>_> *)0x0) {
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
    this_00 = (this->ComboListView).Object;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_18.Object = piVar1;
    local_18.SharedReferenceCount.ReferenceController = pTVar2;
    SListView<TSharedPtr<int,1>_>::SetSelection(this_00,&local_18,Direct);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetSelectedItem @ 142f05190

void __thiscall
SComboBox<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>::SetSelectedItem
          (SComboBox<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *this,
          TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1> *param_1)

{
  FWidgetSnapshotTarget *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  SListView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *pSVar3;
  code *pcVar4;
  bool bVar5;
  Type *pTVar6;
  TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1> local_18;
  
  pFVar1 = param_1->Object;
  if (pFVar1 == (FWidgetSnapshotTarget *)0x0) {
    if ((this->ComboListView).Object ==
        (SListView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *)0x0) {
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
    pSVar3 = (this->ComboListView).Object;
    pTVar6 = TAttribute<enum_ESelectionMode::Type>::Get(&pSVar3->_padding_);
    if ((*pTVar6 != None) &&
       (*(int *)&(pSVar3->SelectedItems).Elements.field_0x8 !=
        *(int *)&(pSVar3->SelectedItems).Elements.field_0x34)) {
      (**(code **)(pSVar3->_padding_ + 0x30))(&pSVar3->_padding_);
      (**(code **)(pSVar3->_padding_ + 0x40))(&pSVar3->_padding_,3);
    }
  }
  else {
    pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((this->ComboListView).Object ==
        (SListView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *)0x0) {
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
    pSVar3 = (this->ComboListView).Object;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_18.Object = pFVar1;
    local_18.SharedReferenceCount.ReferenceController = pTVar2;
    SListView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>::SetSelection
              (pSVar3,&local_18,Direct);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetSelectedItem @ 142f052d0

void __thiscall
SComboBox<TSharedPtr<FWidgetReflectorNodeBase,1>_>::SetSelectedItem
          (SComboBox<TSharedPtr<FWidgetReflectorNodeBase,1>_> *this,
          TSharedPtr<FWidgetReflectorNodeBase,1> *param_1)

{
  FWidgetReflectorNodeBase *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  SListView<TSharedPtr<FWidgetReflectorNodeBase,1>_> *pSVar3;
  code *pcVar4;
  bool bVar5;
  Type *pTVar6;
  TSharedPtr<FWidgetReflectorNodeBase,1> local_18;
  
  pFVar1 = param_1->Object;
  if (pFVar1 == (FWidgetReflectorNodeBase *)0x0) {
    if ((this->ComboListView).Object == (SListView<TSharedPtr<FWidgetReflectorNodeBase,1>_> *)0x0) {
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
    pSVar3 = (this->ComboListView).Object;
    pTVar6 = TAttribute<enum_ESelectionMode::Type>::Get(&pSVar3->_padding_);
    if ((*pTVar6 != None) &&
       (*(int *)&(pSVar3->SelectedItems).Elements.field_0x8 !=
        *(int *)&(pSVar3->SelectedItems).Elements.field_0x34)) {
      (**(code **)(pSVar3->_padding_ + 0x30))(&pSVar3->_padding_);
      (**(code **)(pSVar3->_padding_ + 0x40))(&pSVar3->_padding_,3);
    }
  }
  else {
    pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((this->ComboListView).Object == (SListView<TSharedPtr<FWidgetReflectorNodeBase,1>_> *)0x0) {
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
    pSVar3 = (this->ComboListView).Object;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_18.Object = pFVar1;
    local_18.SharedReferenceCount.ReferenceController = pTVar2;
    SListView<TSharedPtr<FWidgetReflectorNodeBase,1>_>::SetSelection(pSVar3,&local_18,Direct);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SupportsKeyboardFocus @ 142f0cb20

bool __thiscall
SComboBox<TSharedPtr<int,1>_>::SupportsKeyboardFocus(SComboBox<TSharedPtr<int,1>_> *this)

{
  return (bool)(char)this->_padding_;
}

// SupportsKeyboardFocus @ 142f0cb30

bool __thiscall
SComboBox<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>::SupportsKeyboardFocus
          (SComboBox<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *this)

{
  return (bool)(char)this->_padding_;
}

// SupportsKeyboardFocus @ 142f0cb40

bool __thiscall
SComboBox<TSharedPtr<FWidgetReflectorNodeBase,1>_>::SupportsKeyboardFocus
          (SComboBox<TSharedPtr<FWidgetReflectorNodeBase,1>_> *this)

{
  return (bool)(char)this->_padding_;
}

