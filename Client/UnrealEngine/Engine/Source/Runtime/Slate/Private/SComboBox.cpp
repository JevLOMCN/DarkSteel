// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 15

// ~SComboBox<TSharedPtr<FString,1>_> @ 1428bb950

void __thiscall
SComboBox<TSharedPtr<FString,1>_>::~SComboBox<TSharedPtr<FString,1>_>
          (SComboBox<TSharedPtr<FString,1>_> *this)

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

// operator() @ 1428c7330

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`SComboBox<TSharedPtr<FString,1>_>::OnMenuOpenChanged'::__l5::<lambda_1>::operator()
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

// Construct @ 1428e2a40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Removing unreachable block (ram,0x0001428e315b) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SComboBox<TSharedPtr<FString,1>_>::Construct
          (SComboBox<TSharedPtr<FString,1>_> *this,FArguments *param_1)

{
  TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<FString,1>_>,1> *pTVar1;
  atomic<int> aVar2;
  FComboBoxStyle *pFVar3;
  longlong *plVar4;
  SScrollBar *pSVar5;
  SWidget *pSVar6;
  SBox *pSVar7;
  void *pvVar8;
  TReferenceControllerBase<1> *pTVar9;
  FString *pFVar10;
  longlong lVar11;
  code *pcVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  EStyleColor EVar21;
  undefined2 uVar22;
  FArguments *pFVar23;
  bool bVar24;
  FArguments *pFVar25;
  undefined8 *puVar26;
  TSharedRef<SWidget,1> *pTVar27;
  ulong64 uVar28;
  TSharedRef<SListView<TSharedPtr<FString,1>_>,1> *pTVar29;
  TSharedRef<SBox,1> *pTVar30;
  FArguments *pFVar31;
  FText *pFVar32;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> *this_01;
  EPopupMethod *pEVar33;
  FArguments *pFVar34;
  TAttribute<FSlateColor> *pTVar35;
  SListView<TSharedPtr<FString,1>_> *pSVar36;
  FSlateSound *pFVar37;
  TReferenceControllerBase<1> *pTVar38;
  atomic<int> *paVar39;
  TReferenceControllerBase<1> *local_res8;
  SWidget *local_res10;
  T0RequiredArgs local_res18 [8];
  FLLMScope local_res20 [2];
  EPopupMethod local_1558;
  char local_1557;
  FName local_1550;
  undefined4 uStack_1548;
  uint uStack_1544;
  FName local_1540;
  undefined4 uStack_1538;
  uint uStack_1534;
  FLLMScope local_1530 [2];
  undefined1 local_1528 [8];
  ForAnyElementType local_1520;
  int local_1518;
  undefined4 local_1510;
  undefined1 local_150c;
  undefined1 local_1508 [8];
  ForAnyElementType FStack_1500;
  ulonglong local_14f8;
  float local_14f0;
  undefined1 local_14ec;
  undefined1 local_14e8 [8];
  ForAnyElementType FStack_14e0;
  ulonglong local_14d8;
  code *local_14d0;
  FSharedReferencer<1> FStack_14c8;
  undefined1 local_14c0 [16];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_14b0;
  ForAnyElementType FStack_14a8;
  ulonglong local_14a0;
  FButtonStyle *local_1498;
  SWidget *local_1490;
  TReferenceControllerBase<1> *pTStack_1488;
  SBox *local_1480;
  FSharedReferencer<1> local_1478;
  TSharedPtr<SWidget,1> local_1470;
  FString *local_1460;
  undefined8 uStack_1458;
  TObservableArray<TSharedPtr<FString,1>_> *local_1450;
  TReferenceControllerBase<1> *pTStack_1448;
  FMemScope local_1440;
  FMemScope local_1438;
  FComboButtonStyle *local_1430;
  FName local_1428;
  FSharedReferencer<1> FStack_1420;
  FArguments *local_1418;
  TWeakPtr<SWidget,1> local_1410;
  undefined8 local_1400;
  undefined8 uStack_13f8;
  bool local_13f0;
  undefined1 local_13e8 [8];
  void *pvStack_13e0;
  undefined4 local_13d8;
  TSlateDecl<SListView<TSharedPtr<FString,1>_>,RequiredArgs::T0RequiredArgs> local_13d0;
  NamedSlotProperty<SComboButton::FArguments> local_13b8;
  FString *local_13a8;
  TReferenceControllerBase<1> *local_13a0;
  TSharedPtr<FString,1> local_1398;
  FDestructionSentinel local_1388;
  FDestructionSentinel local_1370;
  FDestructionSentinel local_1358;
  FDestructionSentinel local_1340;
  FLinearColor_u_0 local_1328;
  undefined1 local_1318;
  undefined1 local_1314;
  undefined8 local_1310;
  undefined8 uStack_1308;
  undefined8 local_1300;
  FDestructionSentinel local_12f8;
  undefined1 *local_12e0;
  FDestructionSentinel local_12d8;
  undefined1 *local_12c0;
  FDestructionSentinel local_12b8;
  undefined1 *local_12a0;
  FDestructionSentinel local_1298;
  undefined1 *local_1280;
  TAttribute<FText> local_1278;
  TSharedRef<STextBlock,1> local_1248;
  TSharedRef<SListView<TSharedPtr<FString,1>_>,1> local_1238;
  FText local_1228;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_1218;
  TSharedRef<SBox,1> local_1200;
  SListView<TSharedPtr<FString,1>_> *local_11f0;
  TReferenceControllerBase<1> *pTStack_11e8;
  SScrollBar *local_11e0;
  TReferenceControllerBase<1> *pTStack_11d8;
  TSharedRef<SWidget,1> local_11d0;
  TSharedRef<SWidget,1> local_11c0;
  SWidget *local_11b0;
  TReferenceControllerBase<1> *pTStack_11a8;
  SScrollBar *local_11a0;
  TReferenceControllerBase<1> *pTStack_1198;
  TSharedRef<SWidget,1> local_1190;
  TSharedRef<SWidget,1> local_1180;
  TSharedRef<SWidget,1> local_1170;
  FReadAccessScope local_1160;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_1148;
  undefined1 local_1130 [552];
  undefined1 local_f08 [24];
  undefined1 local_ef0 [24];
  undefined1 local_ed8 [56];
  undefined1 local_ea0 [48];
  undefined1 local_e70 [48];
  undefined1 local_e40 [32];
  undefined1 local_e20 [40];
  TAttribute<FSlateColor> local_df8;
  FArguments local_dc8;
  FArguments local_a88;
  FArguments local_5a8;
  undefined8 uStack_48;
  
  uStack_48 = 0x1428e2a5f;
  bVar15 = false;
  bVar14 = false;
  bVar13 = false;
  local_res8 = (TReferenceControllerBase<1> *)((ulonglong)local_res8 & 0xffffffff00000000);
  if ((param_1->_ComboBoxStyle == (FComboBoxStyle *)0x0) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("InArgs._ComboBoxStyle",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Input\\SComboBox.h"
                          ,0xc1,L""), bVar24)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  this->ItemStyle = param_1->_ItemStyle;
  pFVar3 = param_1->_ComboBoxStyle;
  this->ComboBoxStyle = pFVar3;
  fVar17 = (pFVar3->MenuRowPadding).Left;
  fVar18 = (pFVar3->MenuRowPadding).Top;
  fVar19 = (pFVar3->MenuRowPadding).Right;
  fVar20 = (pFVar3->MenuRowPadding).Bottom;
  *(undefined1 *)&this->_padding_ = 0;
  local_1430 = &pFVar3->ComboButtonStyle;
  (this->MenuRowPadding).Left = fVar17;
  (this->MenuRowPadding).Top = fVar18;
  (this->MenuRowPadding).Right = fVar19;
  (this->MenuRowPadding).Bottom = fVar20;
  local_1498 = param_1->_ButtonStyle;
  if (local_1498 == (FButtonStyle *)0x0) {
    local_1498 = &(pFVar3->ComboButtonStyle).ButtonStyle;
  }
  pFVar37 = &(param_1->_PressedSoundOverride).TypedValue;
  if ((param_1->_PressedSoundOverride).bIsSet == false) {
    pFVar37 = &pFVar3->PressedSlateSound;
  }
  FSlateSound::operator=(&this->PressedSound,pFVar37);
  pFVar37 = &(param_1->_SelectionChangeSoundOverride).TypedValue;
  if ((param_1->_SelectionChangeSoundOverride).bIsSet == false) {
    pFVar37 = &this->ComboBoxStyle->SelectionChangeSlateSound;
  }
  FSlateSound::operator=(&this->SelectionChangeSound,pFVar37);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->OnComboBoxOpening,&param_1->_OnComboBoxOpening);
  TDelegate<void___cdecl(TSharedPtr<FString,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>::
  operator=(&this->OnSelectionChanged,&param_1->_OnSelectionChanged);
  if (&param_1->_OnGenerateWidget != &this->OnGenerateWidget) {
    local_1528 = (undefined1  [8])0x0;
    local_1520.Data = (FScriptContainerElement *)0x0;
    local_1518 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->_OnGenerateWidget
               ,&local_1160);
    if ((*(int *)&(param_1->_OnGenerateWidget).field_0x10 != 0) &&
       (plVar4 = *(longlong **)&(param_1->_OnGenerateWidget).field_0x8, plVar4 != (longlong *)0x0))
    {
      (**(code **)(*plVar4 + 0x50))(plVar4,local_1528);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_1160);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnGenerateWidget,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1528);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1528,
               (FWriteAccessScope *)&local_1370);
    if ((local_1518 != 0) && (local_1520.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_1520.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_1520,0,0,0x10);
      local_1518 = 0;
    }
    if (local_1370.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1370.Accessor,&local_1370);
    }
    if (local_1520.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1520.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_1528);
  }
  this->EnableGamepadNavigationMode = param_1->_EnableGamepadNavigationMode;
  this->bControllerInputCaptured = false;
  pTVar38 = (param_1->_CustomScrollbar).SharedReferenceCount.ReferenceController;
  pSVar5 = (param_1->_CustomScrollbar).Object;
  if (pTVar38 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar38->SharedReferenceCount = (atomic<int>)((int)pTVar38->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_11e0 = (this->CustomScrollbar).Object;
  pTStack_11d8 = (this->CustomScrollbar).SharedReferenceCount.ReferenceController;
  (this->CustomScrollbar).Object = pSVar5;
  (this->CustomScrollbar).SharedReferenceCount.ReferenceController = pTVar38;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_11d8);
  local_1418 = SBox::FArguments::FArguments(&local_dc8);
  local_14f0 = param_1->_MaxListHeight;
  local_14ec = 1;
  local_14d8 = 0;
  local_14e8 = (undefined1  [8])0x0;
  FStack_14e0.Data = (FScriptContainerElement *)0x0;
  (local_1418->_MaxDesiredHeight).Value.Size = local_14f0;
  (local_1418->_MaxDesiredHeight).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(local_1418->_MaxDesiredHeight).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_14e8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_14e8,
             (FWriteAccessScope *)&local_1358);
  if (((int)local_14d8 != 0) && (FStack_14e0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_14e0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_14e0,0,0,0x10);
    local_14d8 = local_14d8 & 0xffffffff00000000;
  }
  if (local_1358.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1358.Accessor,&local_1358);
  }
  if (FStack_14e0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_14e0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_14e8);
  pFVar25 = SListView<TSharedPtr<FString,1>_>::FArguments::FArguments(&local_a88);
  pTVar38 = (param_1->_OptionsSource_SharedObservableArray).SharedReferenceCount.ReferenceController
  ;
  local_1450 = (TObservableArray<TSharedPtr<FString,1>_> *)param_1->_OptionsSource_ArrayPointer;
  local_1550 = (FName)param_1->_OptionsSource_ObservableArrayPointer;
  local_1540 = (FName)(param_1->_OptionsSource_SharedObservableArray).Object;
  if (pTVar38 == (TReferenceControllerBase<1> *)0x0) {
    paVar39 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar39 = &pTVar38->SharedReferenceCount;
    LOCK();
    *paVar39 = (atomic<int>)((int)*paVar39 + 1);
    UNLOCK();
  }
  pFVar25->_ListItemsSource_ArrayPointer =
       (TArray<TSharedPtr<FString,1>,TSizedDefaultAllocator<32>_> *)0x0;
  pFVar25->_ListItemsSource_ObservableArrayPointer = (TObservableArray<TSharedPtr<FString,1>_> *)0x0
  ;
  pTVar1 = &pFVar25->_ListItemsSource_SharedObservableArray;
  local_1428.ComparisonIndex.Value = 0;
  local_1428.Number = 0;
  FStack_1420.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (pTVar1 != (TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<FString,1>_>,1> *)
                &local_1428) {
    pTVar1->Object = (TObservableArray<TSharedPtr<FString,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(pFVar25->_ListItemsSource_SharedObservableArray).SharedReferenceCount,&FStack_1420)
    ;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_1420.ReferenceController);
  pFVar25->_ListItemsSource_ArrayPointer = &local_1450->Array;
  pFVar25->_ListItemsSource_ObservableArrayPointer =
       (TObservableArray<TSharedPtr<FString,1>_> *)local_1550;
  if (pTVar38 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar39 = (atomic<int>)((int)*paVar39 + 1);
    UNLOCK();
  }
  local_1450 = pTVar1->Object;
  pTStack_1448 = (pFVar25->_ListItemsSource_SharedObservableArray).SharedReferenceCount.
                 ReferenceController;
  pTVar1->Object = (TObservableArray<TSharedPtr<FString,1>_> *)local_1540;
  (pFVar25->_ListItemsSource_SharedObservableArray).SharedReferenceCount.ReferenceController =
       pTVar38;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1448);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar38);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar25->_OnGenerateRow,
             (FWriteAccessScope *)&local_12f8);
  local_12e0 = &(pFVar25->_OnGenerateRow).field_0x8;
  puVar26 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_12e0);
  pTVar38 = local_res8;
  if (puVar26 != (undefined8 *)0x0) {
    uStack_1534 = uStack_1458._4_4_;
    local_1540 = (FName)GenerateMenuItemRow;
    uStack_1538 = 0;
    pTVar27 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_11d0);
    pTVar38 = (pTVar27->SharedReferenceCount).ReferenceController;
    pSVar6 = pTVar27->Object;
    if (pTVar38 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar38->SharedReferenceCount = (atomic<int>)((int)pTVar38->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar38->SharedReferenceCount = (atomic<int>)((int)pTVar38->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar26 = &
               ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VITableRow___00__V__TSharedPtr_VFString___00__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar28 = FDelegateHandle::GenerateNewID();
    puVar26[2] = uVar28;
    *puVar26 = &
               ___7__TBaseSPMethodDelegateInstance__0A_V__SComboBox_V__TSharedPtr_VFString___00_____00__A6A_AV__TSharedRef_VITableRow___00__V__TSharedPtr_VFString___00__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar26[3] = pSVar6;
    puVar26[4] = pTVar38;
    if (pTVar38 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar38->WeakReferenceCount = (atomic<int>)((int)pTVar38->WeakReferenceCount + 1);
      UNLOCK();
    }
    bVar15 = true;
    bVar14 = true;
    bVar13 = true;
    *(FName *)(puVar26 + 5) = local_1540;
    puVar26[6] = CONCAT44(uStack_1534,uStack_1538);
  }
  if (bVar14) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar38);
  }
  if (bVar15) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar38);
  }
  if (bVar13) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_11d0.SharedReferenceCount.ReferenceController);
  }
  bVar15 = false;
  bVar14 = false;
  bVar13 = false;
  if (local_12f8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_12f8.Accessor,&local_12f8);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar25->_OnSelectionChanged
             ,(FWriteAccessScope *)&local_12d8);
  local_12c0 = &(pFVar25->_OnSelectionChanged).field_0x8;
  puVar26 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_12c0);
  pTVar38 = local_res8;
  if (puVar26 != (undefined8 *)0x0) {
    uStack_1544 = uStack_1458._4_4_;
    local_1550 = (FName)OnSelectionChanged_Internal;
    uStack_1548 = 0;
    pTVar27 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_1190);
    pTVar38 = (pTVar27->SharedReferenceCount).ReferenceController;
    local_1540 = (FName)pTVar27->Object;
    if (pTVar38 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar38->SharedReferenceCount = (atomic<int>)((int)pTVar38->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar38->SharedReferenceCount = (atomic<int>)((int)pTVar38->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar13 = true;
    bVar15 = true;
    bVar14 = true;
    *puVar26 = &
               ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VFString___00__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar28 = FDelegateHandle::GenerateNewID();
    puVar26[2] = uVar28;
    *puVar26 = &
               ___7__TBaseSPMethodDelegateInstance__0A_V__SComboBox_V__TSharedPtr_VFString___00_____00__A6AXV__TSharedPtr_VFString___00__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FName *)(puVar26 + 3) = local_1540;
    puVar26[4] = pTVar38;
    if (pTVar38 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar38->WeakReferenceCount = (atomic<int>)((int)pTVar38->WeakReferenceCount + 1);
      UNLOCK();
    }
    *(FName *)(puVar26 + 5) = local_1550;
    puVar26[6] = CONCAT44(uStack_1544,uStack_1548);
  }
  if (bVar13) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar38);
  }
  if (bVar14) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar38);
  }
  if (bVar15) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1190.SharedReferenceCount.ReferenceController);
  }
  bVar14 = false;
  bVar13 = false;
  if (local_12d8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_12d8.Accessor,&local_12d8);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar25->_OnKeyDownHandler,
             (FWriteAccessScope *)&local_12b8);
  local_12a0 = &(pFVar25->_OnKeyDownHandler).field_0x8;
  puVar26 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_12a0);
  pTVar38 = local_res8;
  if (puVar26 != (undefined8 *)0x0) {
    uStack_1544 = uStack_1458._4_4_;
    local_1550 = (FName)OnKeyDownHandler;
    uStack_1548 = 0;
    pTVar27 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_11c0);
    pTVar38 = (pTVar27->SharedReferenceCount).ReferenceController;
    local_1540 = (FName)pTVar27->Object;
    if (pTVar38 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar38->SharedReferenceCount = (atomic<int>)((int)pTVar38->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar38->SharedReferenceCount = (atomic<int>)((int)pTVar38->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar13 = true;
    bVar14 = true;
    *puVar26 = &
               ___7__TCommonDelegateInstanceState___A6A_AVFReply__AEBUFGeometry__AEBUFKeyEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar28 = FDelegateHandle::GenerateNewID();
    puVar26[2] = uVar28;
    *puVar26 = &
               ___7__TBaseSPMethodDelegateInstance__0A_V__SComboBox_V__TSharedPtr_VFString___00_____00__A6A_AVFReply__AEBUFGeometry__AEBUFKeyEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FName *)(puVar26 + 3) = local_1540;
    puVar26[4] = pTVar38;
    if (pTVar38 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar38->WeakReferenceCount = (atomic<int>)((int)pTVar38->WeakReferenceCount + 1);
      UNLOCK();
    }
    *(FName *)(puVar26 + 5) = local_1550;
    puVar26[6] = CONCAT44(uStack_1544,uStack_1548);
  }
  if (bVar13) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar38);
  }
  if (bVar14) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_11c0.SharedReferenceCount.ReferenceController);
  }
  bVar15 = false;
  bVar14 = false;
  bVar13 = false;
  if (local_12b8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_12b8.Accessor,&local_12b8);
  }
  local_150c = 1;
  local_1510 = 1;
  local_14f8 = 0;
  local_1508 = (undefined1  [8])0x0;
  FStack_1500.Data = (FScriptContainerElement *)0x0;
  (pFVar25->_SelectionMode).Value = Single;
  (pFVar25->_SelectionMode).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar25->_SelectionMode).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1508);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1508,
             (FWriteAccessScope *)&local_1340);
  if (((int)local_14f8 != 0) && (FStack_1500.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1500.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1500,0,0,0x10);
    local_14f8 = local_14f8 & 0xffffffff00000000;
  }
  if (local_1340.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1340.Accessor,&local_1340);
  }
  if (FStack_1500.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1500.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1508);
  pFVar25->_ScrollBarStyle = param_1->_ScrollBarStyle;
  pTVar38 = (param_1->_CustomScrollbar).SharedReferenceCount.ReferenceController;
  pSVar5 = (param_1->_CustomScrollbar).Object;
  if (pTVar38 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar38->SharedReferenceCount = (atomic<int>)((int)pTVar38->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar38->SharedReferenceCount = (atomic<int>)((int)pTVar38->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_11a0 = (pFVar25->_ExternalScrollbar).Object;
  pTStack_1198 = (pFVar25->_ExternalScrollbar).SharedReferenceCount.ReferenceController;
  (pFVar25->_ExternalScrollbar).Object = pSVar5;
  (pFVar25->_ExternalScrollbar).SharedReferenceCount.ReferenceController = pTVar38;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1198);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar38);
  FLLMScope::FLLMScope(local_res20,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1540 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1440,&local_1540,true);
  TSlateDecl<SListView<TSharedPtr<FString,1>_>,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SListView<TSharedPtr<FString,1>_>,RequiredArgs::T0RequiredArgs>
            (&local_13d0,"SComboListType",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Input\\SComboBox.h"
             ,0xda,(T0RequiredArgs *)&local_res8);
  FMemScope::~FMemScope(&local_1440);
  FLLMScope::~FLLMScope(local_res20);
  if (local_13d0._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_13d0._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_13d0._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_11f0 = (this->ComboListView).Object;
  pTStack_11e8 = (this->ComboListView).SharedReferenceCount.ReferenceController;
  (this->ComboListView).Object = local_13d0._Widget.Object;
  (this->ComboListView).SharedReferenceCount.ReferenceController =
       local_13d0._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_11e8);
  pTVar29 = TSlateDecl<SListView<TSharedPtr<FString,1>_>,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_13d0,&local_1238,pFVar25);
  pFVar23 = local_1418;
  pTVar38 = (pTVar29->SharedReferenceCount).ReferenceController;
  pSVar36 = pTVar29->Object;
  if (pTVar38 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar38->SharedReferenceCount = (atomic<int>)((int)pTVar38->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar38->SharedReferenceCount = (atomic<int>)((int)pTVar38->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1490 = (local_1418->_Content).Widget.Object;
  pTStack_1488 = (local_1418->_Content).Widget.SharedReferenceCount.ReferenceController;
  (local_1418->_Content).Widget.Object = (SWidget *)pSVar36;
  (local_1418->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar38;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1488);
  FLLMScope::FLLMScope(local_1530,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1550 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1438,&local_1550,true);
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
            (&local_1218,"SBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Input\\SComboBox.h"
             ,0xd7,(T0RequiredArgs *)&local_res10);
  FMemScope::~FMemScope(&local_1438);
  FLLMScope::~FLLMScope(local_1530);
  pTVar30 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1218,&local_1200,pFVar23);
  local_1478.ReferenceController = (pTVar30->SharedReferenceCount).ReferenceController;
  local_1480 = pTVar30->Object;
  if (local_1478.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1478.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_1478.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->ComboBoxMenuContent != (TSharedPtr<SBox,1> *)&local_1480) {
    (this->ComboBoxMenuContent).Object = local_1480;
    local_1480 = (SBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ComboBoxMenuContent).SharedReferenceCount,&local_1478);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1478.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1200.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1218._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1238.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_13d0._Widget.SharedReferenceCount.ReferenceController);
  SListView<TSharedPtr<FString,1>_>::FArguments::~FArguments(&local_a88);
  SBox::FArguments::~FArguments(&local_dc8);
  local_1470.Object = (param_1->_Content).Widget.Object;
  local_1470.SharedReferenceCount.ReferenceController =
       (param_1->_Content).Widget.SharedReferenceCount.ReferenceController;
  if (local_1470.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1470.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1470.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((param_1->_Content).Widget.Object == SNullWidget::NullWidget.Object) {
    pFVar31 = STextBlock::FArguments::FArguments(&local_5a8);
    pFVar32 = FText::AsLocalizable_Advanced_LocText
                        (&local_1228,L"SComboBox",L"ContentWarning",L"No Content Provided");
    FText::FText(&local_1278.Value,pFVar32);
    local_1278.bIsSet = true;
    local_1278.Getter._16_8_ = 0;
    local_1278.Getter._0_8_ = 0;
    local_1278.Getter._8_8_ = 0;
    pFVar31 = STextBlock::FArguments::Text(pFVar31,&local_1278);
    local_1318 = 0;
    local_1314 = 1;
    local_1300 = 0;
    local_1328 = FLinearColor::Red.field0_0x0;
    local_1310 = 0;
    uStack_1308 = 0;
    pFVar31 = STextBlock::FArguments::ColorAndOpacity
                        (pFVar31,(TAttribute<FSlateColor> *)&local_1328._s_0);
    this_01 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                        (&local_1148,"STextBlock",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Input\\SComboBox.h"
                         ,0xe9,local_res18);
    local_1470.Object = (SWidget *)(this_01->_Widget).Object;
    FStack_14c8.ReferenceController = (this_01->_Widget).SharedReferenceCount.ReferenceController;
    if (FStack_14c8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FStack_14c8.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FStack_14c8.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_14d0 = (code *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&local_1470.SharedReferenceCount,&FStack_14c8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_14c8.ReferenceController);
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=(this_01,&local_1248,pFVar31);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1248.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1148._Widget.SharedReferenceCount.ReferenceController);
    if (local_1228.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1228.TextData.Reference + 0x10))();
    }
    STextBlock::FArguments::~FArguments(&local_5a8);
  }
  local_13b8.OwnerDeclaration = SComboButton::FArguments::FArguments((FArguments *)local_1130);
  (local_13b8.OwnerDeclaration)->_ComboButtonStyle = local_1430;
  (local_13b8.OwnerDeclaration)->_ButtonStyle = local_1498;
  local_1557 = (param_1->_Method).bIsSet;
  if ((bool)local_1557 != false) {
    local_1558 = (param_1->_Method).TypedValue;
  }
  if ((TOptional<EPopupMethod> *)&local_1558 != &(local_13b8.OwnerDeclaration)->_Method) {
    if ((bool)local_1557 == false) {
      if (((local_13b8.OwnerDeclaration)->_Method).bIsSet != false) {
        ((local_13b8.OwnerDeclaration)->_Method).bIsSet = false;
      }
    }
    else {
      pEVar33 = TOptional<enum_EPopupMethod>::GetValue(&local_1558);
      ((local_13b8.OwnerDeclaration)->_Method).TypedValue = *pEVar33;
      ((local_13b8.OwnerDeclaration)->_Method).bIsSet = true;
    }
  }
  local_13b8.SlotContent = &(local_13b8.OwnerDeclaration)->_ButtonContent;
  pTVar27 = TSharedPtr<SWidget,1>::ToSharedRef(&local_1470,&local_1170);
  pFVar34 = NamedSlotProperty<SComboButton::FArguments>::operator[](&local_13b8,pTVar27);
  if (((this->ComboBoxMenuContent).Object == (SBox *)0x0) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x408,L""), bVar24)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  pTVar38 = (this->ComboBoxMenuContent).SharedReferenceCount.ReferenceController;
  pSVar7 = (this->ComboBoxMenuContent).Object;
  if (pTVar38 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar38->SharedReferenceCount = (atomic<int>)((int)pTVar38->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pSVar7 == (SBox *)0x0) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x25d,L""), bVar24)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  if (pTVar38 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar38->SharedReferenceCount = (atomic<int>)((int)pTVar38->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar38->SharedReferenceCount = (atomic<int>)((int)pTVar38->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_11b0 = (pFVar34->_MenuContent).Widget.Object;
  pTStack_11a8 = (pFVar34->_MenuContent).Widget.SharedReferenceCount.ReferenceController;
  (pFVar34->_MenuContent).Widget.Object = (SWidget *)pSVar7;
  (pFVar34->_MenuContent).Widget.SharedReferenceCount.ReferenceController = pTVar38;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_11a8);
  pFVar34->_HasDownArrow = param_1->_HasDownArrow;
  local_1400._0_4_ = (param_1->_ContentPadding).Value.Left;
  local_1400._4_4_ = (param_1->_ContentPadding).Value.Top;
  uStack_13f8._0_4_ = (param_1->_ContentPadding).Value.Right;
  uStack_13f8._4_4_ = (param_1->_ContentPadding).Value.Bottom;
  local_13f0 = (param_1->_ContentPadding).bIsSet;
  local_13d8 = 0;
  local_13e8 = (undefined1  [8])0x0;
  pvStack_13e0 = (void *)0x0;
  TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy> *)local_13e8,
             &(param_1->_ContentPadding).Getter);
  (pFVar34->_ContentPadding).Value.Left = (float)(undefined4)local_1400;
  (pFVar34->_ContentPadding).Value.Top = (float)local_1400._4_4_;
  (pFVar34->_ContentPadding).Value.Right = (float)(undefined4)uStack_13f8;
  (pFVar34->_ContentPadding).Value.Bottom = (float)uStack_13f8._4_4_;
  (pFVar34->_ContentPadding).bIsSet = local_13f0;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar34->_ContentPadding).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_13e8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_13e8);
  if (pvStack_13e0 != (void *)0x0) {
    FMemory::Free(pvStack_13e0);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_13e8);
  pTVar35 = TAttribute<FSlateColor>::TAttribute<FSlateColor>(&local_df8,&param_1->_ForegroundColor);
  uVar16 = *(undefined8 *)((longlong)&(pTVar35->Value).SpecifiedColor.field0_0x0 + 8);
  this_00 = &pTVar35->Getter;
  *(undefined8 *)&(pFVar34->_ForegroundColor).Value.SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(pTVar35->Value).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(pFVar34->_ForegroundColor).Value.SpecifiedColor.field0_0x0 + 8) =
       uVar16;
  EVar21 = (pTVar35->Value).ColorTableId;
  uVar22 = *(undefined2 *)&(pTVar35->Value).field_0x12;
  (pFVar34->_ForegroundColor).Value.ColorUseRule = (pTVar35->Value).ColorUseRule;
  (pFVar34->_ForegroundColor).Value.ColorTableId = EVar21;
  *(undefined2 *)&(pFVar34->_ForegroundColor).Value.field_0x12 = uVar22;
  (pFVar34->_ForegroundColor).bIsSet = pTVar35->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar34->_ForegroundColor).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar8 = *(void **)&(pTVar35->Getter).field_0x8;
  if (pvVar8 != (void *)0x0) {
    FMemory::Free(pvVar8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar34->_OnMenuOpenChanged,
             (FWriteAccessScope *)&local_1298);
  local_1280 = &(pFVar34->_OnMenuOpenChanged).field_0x8;
  puVar26 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_1280);
  if (puVar26 != (undefined8 *)0x0) {
    local_14d0 = OnMenuOpenChanged;
    FStack_14c8.ReferenceController =
         (TReferenceControllerBase<1> *)((ulonglong)uStack_1458._4_4_ << 0x20);
    pTVar27 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_1180);
    pTVar9 = (pTVar27->SharedReferenceCount).ReferenceController;
    local_res10 = pTVar27->Object;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar26 = &___7__TCommonDelegateInstanceState___A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_;
    bVar15 = true;
    bVar14 = true;
    bVar13 = true;
    local_res8 = pTVar9;
    uVar28 = FDelegateHandle::GenerateNewID();
    puVar26[2] = uVar28;
    *puVar26 = &
               ___7__TBaseSPMethodDelegateInstance__0A_V__SComboBox_V__TSharedPtr_VFString___00_____00__A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar26[3] = local_res10;
    puVar26[4] = pTVar9;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->WeakReferenceCount = (atomic<int>)((int)pTVar9->WeakReferenceCount + 1);
      UNLOCK();
    }
    puVar26[5] = local_14d0;
    puVar26[6] = FStack_14c8.ReferenceController;
  }
  pTVar9 = local_res8;
  if (bVar13) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_res8);
  }
  if (bVar14) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  }
  if (bVar15) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1180.SharedReferenceCount.ReferenceController);
  }
  if (local_1298.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1298.Accessor,&local_1298);
  }
  pFVar34->_IsFocusable = param_1->_IsFocusable;
  pFVar34->_CollapseMenuOnParentFocus = param_1->_CollapseMenuOnParentFocus;
  SComboButton::Construct((SComboButton *)this,pFVar34);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1170.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_e20);
  if ((void *)local_e20._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_e20._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_e20);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_e40);
  if ((void *)local_e40._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_e40._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_e40);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_e70);
  if ((void *)local_e70._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_e70._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_e70);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_ea0);
  if ((void *)local_ea0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_ea0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_ea0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_ed8);
  if ((void *)local_ed8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_ed8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_ed8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_ef0);
  if ((void *)local_ef0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_ef0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_ef0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_f08);
  if ((void *)local_f08._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_f08._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_f08);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_1130._544_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_1130._528_8_);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_1130);
  pTVar38 = (this->ComboListView).SharedReferenceCount.ReferenceController;
  local_1410.Object = (SWidget *)(this->ComboListView).Object;
  local_1410.WeakReferenceCount.ReferenceController = pTVar38;
  if (pTVar38 == (TReferenceControllerBase<1> *)0x0) {
    TWeakPtr<SWidget,1>::operator=((TWeakPtr<SWidget,1> *)&this->_padding_,&local_1410);
  }
  else {
    LOCK();
    pTVar38->WeakReferenceCount = (atomic<int>)((int)pTVar38->WeakReferenceCount + 1);
    UNLOCK();
    TWeakPtr<SWidget,1>::operator=((TWeakPtr<SWidget,1> *)&this->_padding_,&local_1410);
    LOCK();
    paVar39 = &pTVar38->WeakReferenceCount;
    aVar2 = *paVar39;
    *paVar39 = (atomic<int>)((int)*paVar39 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar38->_padding_ + 8))(pTVar38,1);
    }
  }
  pTVar38 = (param_1->_InitiallySelectedItem).SharedReferenceCount.ReferenceController;
  pFVar10 = (param_1->_InitiallySelectedItem).Object;
  if (pTVar38 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar38->SharedReferenceCount = (atomic<int>)((int)pTVar38->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1460 = (this->SelectedItem).Object;
  uStack_1458 = (this->SelectedItem).SharedReferenceCount.ReferenceController;
  (this->SelectedItem).Object = pFVar10;
  (this->SelectedItem).SharedReferenceCount.ReferenceController = pTVar38;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(uStack_1458);
  pFVar10 = (this->SelectedItem).Object;
  if (pFVar10 != (FString *)0x0) {
    pTVar38 = (this->SelectedItem).SharedReferenceCount.ReferenceController;
    if (pTVar38 == (TReferenceControllerBase<1> *)0x0) {
      paVar39 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar39 = &pTVar38->SharedReferenceCount;
      LOCK();
      *paVar39 = (atomic<int>)((int)*paVar39 + 1);
      UNLOCK();
    }
    pSVar36 = TSharedPtr<SListView<TSharedPtr<FString,1>_>,1>::operator->(&this->ComboListView);
    lVar11 = pSVar36->_padding_;
    if (pTVar38 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar39 = (atomic<int>)((int)*paVar39 + 1);
      UNLOCK();
    }
    local_13a8 = pFVar10;
    local_13a0 = pTVar38;
    (**(code **)(lVar11 + 0x28))(&pSVar36->_padding_,&local_13a8,1,0);
    pSVar36 = TSharedPtr<SListView<TSharedPtr<FString,1>_>,1>::operator->(&this->ComboListView);
    if (pTVar38 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar39 = (atomic<int>)((int)*paVar39 + 1);
      UNLOCK();
    }
    local_1398.Object = pFVar10;
    local_1398.SharedReferenceCount.ReferenceController = pTVar38;
    SListView<TSharedPtr<FString,1>_>::RequestScrollIntoView(pSVar36,&local_1398,0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar38);
  }
  pSVar36 = TSharedPtr<SListView<TSharedPtr<FString,1>_>,1>::operator->(&this->ComboListView);
  local_14c0._0_8_ = FStyleDefaults::GetNoBrush();
  local_14c0[8] = true;
  local_14a0 = 0;
  local_14b0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_14a8.Data = (FScriptContainerElement *)0x0;
  STableViewBase::SetBackgroundBrush
            ((STableViewBase *)pSVar36,(TAttribute<FSlateBrush_const_*> *)local_14c0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_14b0,(FWriteAccessScope *)&local_1388);
  if (((int)local_14a0 != 0) && (FStack_14a8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_14a8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_14a8,0,0,0x10);
    local_14a0 = local_14a0 & 0xffffffff00000000;
  }
  if (local_1388.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1388.Accessor,&local_1388);
  }
  if (FStack_14a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_14a8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_14b0.AccessDetector);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1470.SharedReferenceCount.ReferenceController);
  return;
}

// CreateAccessibleWidget @ 142911730

TSharedRef<FSlateAccessibleWidget,1> * __thiscall
SComboBox<TSharedPtr<FString,1>_>::CreateAccessibleWidget
          (SComboBox<TSharedPtr<FString,1>_> *this,
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

// GenerateMenuItemRow @ 142938b60

TSharedRef<ITableRow,1> * __thiscall
SComboBox<TSharedPtr<FString,1>_>::GenerateMenuItemRow
          (SComboBox<TSharedPtr<FString,1>_> *this,TSharedRef<ITableRow,1> *__return_storage_ptr__,
          TSharedPtr<FString,1> *param_1,TSharedRef<STableViewBase,1> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  bool bVar3;
  char cVar4;
  FArguments *pFVar5;
  TSlateDecl<SComboRow<TSharedPtr<FString,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
  *pTVar6;
  TSharedRef<SComboRow<TSharedPtr<FString,1>_>,1> *pTVar7;
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
  TSlateDecl<SComboRow<TSharedPtr<FString,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
  local_818;
  TSharedRef<SComboRow<TSharedPtr<FString,1>_>,1> local_800;
  TSlateDecl<SComboRow<TSharedPtr<FString,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
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
  pFVar5 = SComboRow<TSharedPtr<FString,1>_>::FArguments::FArguments((FArguments *)local_7d8);
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
    pTVar6 = MakeTDecl<SComboRow<TSharedPtr<FString,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
                       (&local_818,"SComboRow<OptionType>",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Input\\SComboBox.h"
                        ,0x22d,&local_res8);
    pTVar7 = TSlateDecl<SComboRow<TSharedPtr<FString,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
             ::operator<<=(pTVar6,(TSharedRef<SComboRow<TSharedPtr<FString,1>_>,1> *)&local_830,
                           pFVar5);
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
    pTVar6 = MakeTDecl<SComboRow<TSharedPtr<FString,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
                       (&local_7f0,"SComboRow<OptionType>",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Input\\SComboBox.h"
                        ,0x236,&local_840);
    pTVar7 = TSlateDecl<SComboRow<TSharedPtr<FString,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
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

// GetDefaultAccessibleText @ 14293ec80

TOptional<FText> * __thiscall
SComboBox<TSharedPtr<FString,1>_>::GetDefaultAccessibleText
          (SComboBox<TSharedPtr<FString,1>_> *this,TOptional<FText> *__return_storage_ptr__,
          EAccessibleType param_1)

{
  code *pcVar1;
  bool bVar2;
  FText *pFVar3;
  TOptional<FText> *pTVar4;
  FText local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_struct_TOptional<FText>___cdecl_SComboBox<TSharedPtr<FString,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_struct_TOptional<FText>___cdecl_SComboBox<TSharedPtr<FString,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_struct_TOptional<FText>___cdecl_SComboBox<TSharedPtr<FString,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FString::FString(&`public:_virtual_struct_TOptional<FText>___cdecl_SComboBox<TSharedPtr<FString,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
                          ::__l2::Name,L"Combo Box");
      atexit(`SComboBox<TSharedPtr<FString,1>_>::GetDefaultAccessibleText'::__l2::
             _dynamic_atexit_destructor_for__Name__);
      _Init_thread_footer(&`public:_virtual_struct_TOptional<FText>___cdecl_SComboBox<TSharedPtr<FString,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pFVar3 = FText::FromString(&local_18,
                             &`public:_virtual_struct_TOptional<FText>___cdecl_SComboBox<TSharedPtr<FString,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
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

// IsInteractable @ 1429544f0

bool __thiscall
SComboBox<TSharedPtr<FString,1>_>::IsInteractable(SComboBox<TSharedPtr<FString,1>_> *this)

{
  return (bool)*(undefined1 *)((longlong)&this->_padding_ + 2);
}

// OnButtonClicked @ 142961570

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SComboBox<TSharedPtr<FString,1>_>::OnButtonClicked
          (SComboBox<TSharedPtr<FString,1>_> *this,FReply *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FReply *pFVar3;
  FSlateApplication *this_00;
  longlong *plVar4;
  TSharedPtr<FString,1> *local_48;
  int local_40;
  TSharedPtr<FString,1> local_38;
  FReadAccessScope local_28;
  
  if (((((char)this->_padding_ == '\0') || (this->_padding_ == 0)) || (this->_padding_ == 0)) ||
     (*(int *)(this->_padding_ + 8) < 1)) {
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
  else {
    if ((this->ComboListView).Object == (SListView<TSharedPtr<FString,1>_> *)0x0) {
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
    DestructItems<TSharedPtr<FString,1>,int>(local_48,local_40);
    if (local_48 != (TSharedPtr<FString,1> *)0x0) {
      FMemory::Free(local_48);
    }
  }
  SComboButton::OnButtonClicked((SComboButton *)this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// OnKeyDown @ 1429664e0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SComboBox<TSharedPtr<FString,1>_>::OnKeyDown
          (SComboBox<TSharedPtr<FString,1>_> *this,FReply *__return_storage_ptr__,FGeometry *param_1
          ,FKeyEvent *param_2)

{
  FName FVar1;
  FScriptContainerElement *pFVar2;
  IItemsSource<TSharedPtr<FString,1>_> *pIVar3;
  bool bVar4;
  char cVar5;
  char cVar6;
  FSlateApplication *pFVar7;
  SListView<TSharedPtr<FString,1>_> *pSVar8;
  TSharedRef<SWidget,1> *pTVar9;
  atomic<int> *paVar10;
  longlong *plVar11;
  TSharedPtr<FString,1> *pTVar12;
  TReferenceControllerBase<1> *pTVar13;
  int iVar14;
  SWidget *pSVar15;
  bool bVar16;
  uint uStackX_c;
  undefined1 local_108 [16];
  TSharedPtr<FString,1> *local_f8;
  int local_f0;
  FReply local_e8;
  
  bVar16 = false;
  cVar5 = (**(code **)(this->_padding_ + 0x1b0))();
  if (cVar5 == '\0') goto LAB_1429666c7;
  pFVar7 = FSlateApplication::Get();
  cVar5 = (**(code **)(*(longlong *)pFVar7 + 0xb0))(pFVar7,param_2);
  pFVar7 = FSlateApplication::Get();
  cVar6 = (**(code **)(*(longlong *)pFVar7 + 0xa0))(pFVar7);
  if (this->EnableGamepadNavigationMode == false) {
    if (cVar6 == '\x02') {
      pTVar13 = (this->SelectedItem).SharedReferenceCount.ReferenceController;
      pFVar2 = (FScriptContainerElement *)(this->SelectedItem).Object;
      if (pTVar13 == (TReferenceControllerBase<1> *)0x0) {
        paVar10 = (atomic<int> *)&DAT_00000008;
      }
      else {
        paVar10 = &pTVar13->SharedReferenceCount;
        LOCK();
        *paVar10 = (atomic<int>)((int)*paVar10 + 1);
        UNLOCK();
      }
      if (pFVar2 == (FScriptContainerElement *)0x0) goto LAB_1429667f7;
      if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *paVar10 = (atomic<int>)((int)*paVar10 + 1);
        UNLOCK();
      }
      pSVar8 = TSharedPtr<SListView<TSharedPtr<FString,1>_>,1>::operator->(&this->ComboListView);
      pIVar3 = (pSVar8->ViewSource).Ptr;
      if (pIVar3 == (IItemsSource<TSharedPtr<FString,1>_> *)0x0) {
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
          (SWidget *)
          ((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&((SWidget *)local_108._0_8_)->_padding_ +
          (int)local_108._8_8_); pSVar15 = (SWidget *)&pSVar15->_padding_) {
        if ((((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pSVar15->_padding_)->AllocatorInstance
            ).Data == pFVar2) {
          iVar14 = (int)((longlong)pSVar15 - local_108._0_8_ >> 4);
          if (0 < iVar14) {
            iVar14 = iVar14 + -1;
            goto LAB_1429667be;
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
      pFVar2 = (FScriptContainerElement *)(this->SelectedItem).Object;
      if (pTVar13 == (TReferenceControllerBase<1> *)0x0) {
        paVar10 = (atomic<int> *)&DAT_00000008;
      }
      else {
        paVar10 = &pTVar13->SharedReferenceCount;
        LOCK();
        *paVar10 = (atomic<int>)((int)*paVar10 + 1);
        UNLOCK();
      }
      if (pFVar2 == (FScriptContainerElement *)0x0) goto LAB_1429667f7;
      if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *paVar10 = (atomic<int>)((int)*paVar10 + 1);
        UNLOCK();
      }
      pSVar8 = TSharedPtr<SListView<TSharedPtr<FString,1>_>,1>::operator->(&this->ComboListView);
      pIVar3 = (pSVar8->ViewSource).Ptr;
      if (pIVar3 == (IItemsSource<TSharedPtr<FString,1>_> *)0x0) {
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
          (SWidget *)
          ((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&((SWidget *)local_108._0_8_)->_padding_ +
          (int)local_108._8_8_); pSVar15 = (SWidget *)&pSVar15->_padding_) {
        if ((((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pSVar15->_padding_)->AllocatorInstance
            ).Data == pFVar2) {
          iVar14 = (int)((longlong)pSVar15 - local_108._0_8_ >> 4);
          goto LAB_1429668b3;
        }
      }
      iVar14 = -1;
LAB_1429668b3:
      if (iVar14 < (int)local_108._8_8_ + -1) {
        iVar14 = iVar14 + 1;
LAB_1429667be:
        pTVar12 = TArrayView<TSharedPtr<FString,1>_const_,int>::operator[]
                            ((TArrayView<TSharedPtr<FString,1>_const_,int> *)local_108,iVar14);
        local_108._0_8_ = pTVar12->Object;
        local_108._8_8_ = (pTVar12->SharedReferenceCount).ReferenceController;
        if ((TReferenceControllerBase<1> *)local_108._8_8_ != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          ((TReferenceControllerBase<1> *)local_108._8_8_)->SharedReferenceCount =
               (atomic<int>)
               ((int)((TReferenceControllerBase<1> *)local_108._8_8_)->SharedReferenceCount + 1);
          UNLOCK();
        }
        SetSelectedItem(this,(TSharedPtr<FString,1> *)local_108);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
LAB_1429667f7:
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
    pSVar8 = TSharedPtr<SListView<TSharedPtr<FString,1>_>,1>::operator->(&this->ComboListView);
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
      OnSelectionChanged_Internal(this,(TSharedPtr<FString,1> *)local_108,Direct);
    }
    FReply::FReply(&local_e8,true);
    pTVar9 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&this->_padding_,
                        (TSharedRef<SWidget,1> *)local_108);
    FReply::SetUserFocus(&local_e8,pTVar9,SetDirectly,false);
    FReply::FReply(__return_storage_ptr__,&local_e8);
    FReply::~FReply(&local_e8);
    DestructItems<TSharedPtr<FString,1>,int>(local_f8,local_f0);
    if (local_f8 == (TSharedPtr<FString,1> *)0x0) {
      return __return_storage_ptr__;
    }
    FMemory::Free(local_f8);
    return __return_storage_ptr__;
  }
  if (cVar5 == '\x01') {
    pTVar13 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
LAB_14296669e:
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
    if (FVar1 == EKeys::BackSpace.KeyName) goto LAB_14296669e;
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
LAB_1429666c7:
  SWidget::OnKeyDown((SWidget *)this,__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// OnKeyDownHandler @ 1429692b0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SComboBox<TSharedPtr<FString,1>_>::OnKeyDownHandler
          (SComboBox<TSharedPtr<FString,1>_> *this,FReply *__return_storage_ptr__,FGeometry *param_1
          ,FKeyEvent *param_2)

{
  FName FVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  FReply *pFVar4;
  longlong *plVar5;
  bool bVar6;
  TSharedPtr<FString,1> *local_28;
  int local_20;
  TSharedPtr<FString,1> local_18;
  
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
    if (((this->ComboListView).Object == (SListView<TSharedPtr<FString,1>_> *)0x0) &&
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
      DestructItems<TSharedPtr<FString,1>,int>(local_28,local_20);
      if (local_28 == (TSharedPtr<FString,1> *)0x0) {
        return __return_storage_ptr__;
      }
      FMemory::Free(local_28);
      return __return_storage_ptr__;
    }
    DestructItems<TSharedPtr<FString,1>,int>(local_28,local_20);
    if (local_28 != (TSharedPtr<FString,1> *)0x0) {
      FMemory::Free(local_28);
    }
  }
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnMenuOpenChanged @ 14296a040

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SComboBox<TSharedPtr<FString,1>_>::OnMenuOpenChanged
          (SComboBox<TSharedPtr<FString,1>_> *this,bool param_1)

{
  FString *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  SListView<TSharedPtr<FString,1>_> *pSVar3;
  code *pcVar4;
  bool bVar5;
  FSlateApplication *this_00;
  SComboBox<TSharedPtr<FString,1>_> *local_res18;
  TSharedPtr<FString,1> local_38;
  TSharedPtr<FString,1> local_28;
  code *local_18;
  SComboBox<TSharedPtr<FString,1>_> **local_10;
  
  if (!param_1) {
    pFVar1 = (this->SelectedItem).Object;
    this->bControllerInputCaptured = false;
    if (pFVar1 != (FString *)0x0) {
      pTVar2 = (this->SelectedItem).SharedReferenceCount.ReferenceController;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((this->ComboListView).Object == (SListView<TSharedPtr<FString,1>_> *)0x0) {
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
      SListView<TSharedPtr<FString,1>_>::SetSelection(pSVar3,&local_38,OnNavigation);
      if ((this->ComboListView).Object == (SListView<TSharedPtr<FString,1>_> *)0x0) {
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
      SListView<TSharedPtr<FString,1>_>::RequestScrollIntoView(pSVar3,&local_28,0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    }
    this_00 = FSlateApplication::Get();
    local_10 = &local_res18;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`SComboBox<TSharedPtr<FString,1>_>::OnMenuOpenChanged'::__l5::<lambda_1>,void,FSlateUser_&>
               ::Call;
    local_res18 = this;
    FSlateApplication::ForEachUser
              (this_00,(TFunctionRef<void___cdecl(FSlateUser_&)> *)&local_18,false);
  }
  return;
}

// OnSelectionChanged_Internal @ 1429827f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SComboBox<TSharedPtr<FString,1>_>::OnSelectionChanged_Internal
          (SComboBox<TSharedPtr<FString,1>_> *this,TSharedPtr<FString,1> *param_1,Type param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FString *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  FSlateApplication *this_00;
  TSharedPtr<FString,1> local_18;
  
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
      TDelegate<void___cdecl(TSharedPtr<FString,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
      ::ExecuteIfBound(&this->OnSelectionChanged,&local_18,param_2);
    }
    (**(code **)(this->_padding_ + 0x250))(this,0,1,0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// RefreshOptions @ 142988270

void __thiscall
SComboBox<TSharedPtr<FString,1>_>::RefreshOptions(SComboBox<TSharedPtr<FString,1>_> *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->ComboListView).Object == (SListView<TSharedPtr<FString,1>_> *)0x0) {
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
                    /* WARNING: Could not recover jumptable at 0x0001429882b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(((this->ComboListView).Object)->_padding_ + 0x248))();
  return;
}

// SetSelectedItem @ 142999350

void __thiscall
SComboBox<TSharedPtr<FString,1>_>::SetSelectedItem
          (SComboBox<TSharedPtr<FString,1>_> *this,TSharedPtr<FString,1> *param_1)

{
  FString *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  SListView<TSharedPtr<FString,1>_> *this_00;
  code *pcVar3;
  bool bVar4;
  TSharedPtr<FString,1> local_18;
  
  pFVar1 = param_1->Object;
  if (pFVar1 == (FString *)0x0) {
    if ((this->ComboListView).Object == (SListView<TSharedPtr<FString,1>_> *)0x0) {
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
    SListView<TSharedPtr<FString,1>_>::ClearSelection((this->ComboListView).Object);
  }
  else {
    pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((this->ComboListView).Object == (SListView<TSharedPtr<FString,1>_> *)0x0) {
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
    local_18.Object = pFVar1;
    local_18.SharedReferenceCount.ReferenceController = pTVar2;
    SListView<TSharedPtr<FString,1>_>::SetSelection(this_00,&local_18,Direct);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SupportsKeyboardFocus @ 1429a60f0

bool __thiscall
SComboBox<TSharedPtr<FString,1>_>::SupportsKeyboardFocus(SComboBox<TSharedPtr<FString,1>_> *this)

{
  return (bool)(char)this->_padding_;
}

