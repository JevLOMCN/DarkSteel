// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 29

// ~SComboBox<UObject_*> @ 14698f500

void __thiscall SComboBox<UObject_*>::~SComboBox<UObject_*>(SComboBox<UObject_*> *this)

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

// ~SComboBox<FName> @ 14698f5d0

void __thiscall SComboBox<FName>::~SComboBox<FName>(SComboBox<FName> *this)

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

// operator() @ 146997e50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`SComboBox<UObject_*>::OnMenuOpenChanged'::__l5::<lambda_1>::operator()
          (void *this,FSlateUser *param_1)

{
  bool bVar1;
  TSharedPtr<SWidget_const_,1> local_28;
  TSharedRef<SWidget,1> local_18;
  
  TSharedFromThis<SWidget,1>::AsShared
            ((TSharedFromThis<SWidget,1> *)(*(longlong *)this + 8),&local_18);
  local_28.Object = *(SWidget **)(*(longlong *)this + 0x460);
  local_28.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)(*(longlong *)this + 0x468);
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

// operator() @ 146997ee0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`SComboBox<FName>::OnMenuOpenChanged'::__l5::<lambda_1>::operator()(void *this,FSlateUser *param_1)

{
  bool bVar1;
  TSharedPtr<SWidget_const_,1> local_28;
  TSharedRef<SWidget,1> local_18;
  
  TSharedFromThis<SWidget,1>::AsShared
            ((TSharedFromThis<SWidget,1> *)(*(longlong *)this + 8),&local_18);
  local_28.Object = *(SWidget **)(*(longlong *)this + 0x460);
  local_28.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)(*(longlong *)this + 0x468);
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

// Construct @ 1469a7c40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Removing unreachable block (ram,0x0001469a835c) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SComboBox<UObject_*>::Construct(SComboBox<UObject_*> *this,FArguments *param_1)

{
  TSharedPtr<UE::Slate::Containers::TObservableArray<UObject_*>,1> *pTVar1;
  FComboBoxStyle *pFVar2;
  longlong *plVar3;
  SScrollBar *pSVar4;
  SWidget *pSVar5;
  TReferenceControllerBase<1> *pTVar6;
  UObject *pUVar7;
  code *pcVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  FSharedReferencer<1> FVar16;
  FArguments *pFVar17;
  bool bVar18;
  FArguments *pFVar19;
  undefined8 *puVar20;
  TSharedRef<SWidget,1> *pTVar21;
  ulong64 uVar22;
  TSharedRef<SListView<UObject_*>,1> *pTVar23;
  TSharedRef<SBox,1> *pTVar24;
  FArguments *pFVar25;
  FText *pFVar26;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> *pTVar27;
  EPopupMethod *pEVar28;
  FArguments *pFVar29;
  SListView<UObject_*> *pSVar30;
  FSlateSound *pFVar31;
  atomic<int> *paVar32;
  TReferenceControllerBase<1> *pTVar33;
  TReferenceControllerBase<1> *local_res8;
  SWidget *local_res10;
  FArguments *local_res18;
  FLLMScope local_res20 [2];
  EPopupMethod local_1528;
  char local_1527;
  FName local_1520;
  undefined4 uStack_1518;
  uint uStack_1514;
  FName local_1510;
  undefined4 uStack_1508;
  uint uStack_1504;
  FLLMScope local_1500 [2];
  undefined1 local_14f8 [8];
  ForAnyElementType local_14f0;
  int local_14e8;
  SBox *local_14e0;
  TReferenceControllerBase<1> *pTStack_14d8;
  undefined4 local_14d0;
  undefined1 local_14cc;
  undefined1 local_14c8 [8];
  ForAnyElementType FStack_14c0;
  ulonglong local_14b8;
  float local_14b0;
  undefined1 local_14ac;
  undefined1 local_14a8 [8];
  ForAnyElementType FStack_14a0;
  ulonglong local_1498;
  undefined1 local_1490 [16];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_1480;
  ForAnyElementType FStack_1478;
  ulonglong local_1470;
  FButtonStyle *local_1468;
  SBox *local_1460;
  FSharedReferencer<1> local_1458;
  TSharedRef<SWidget,1> local_1450;
  TSharedPtr<SWidget,1> local_1440;
  SListView<UObject_*> *local_1430;
  TReferenceControllerBase<1> *pTStack_1428;
  SScrollBar *local_1420;
  TReferenceControllerBase<1> *pTStack_1418;
  FArguments *local_1410;
  FMemScope local_1408;
  FComboButtonStyle *local_1400;
  FMemScope local_13f8;
  FName local_13f0;
  FSharedReferencer<1> FStack_13e8;
  TSlateDecl<SListView<UObject_*>,RequiredArgs::T0RequiredArgs> local_13e0;
  NamedSlotProperty<SComboButton::FArguments> local_13c8;
  TWeakPtr<SWidget,1> local_13b8;
  FDestructionSentinel local_13a8;
  FDestructionSentinel local_1390;
  FDestructionSentinel local_1378;
  FDestructionSentinel local_1360;
  FLinearColor_u_0 local_1348;
  undefined1 local_1338;
  undefined1 local_1334;
  undefined8 local_1330;
  undefined8 uStack_1328;
  undefined8 local_1320;
  FDestructionSentinel local_1318;
  undefined1 *local_1300;
  FDestructionSentinel local_12f8;
  undefined1 *local_12e0;
  FDestructionSentinel local_12d8;
  undefined1 *local_12c0;
  FDestructionSentinel local_12b8;
  undefined1 *local_12a0;
  TAttribute<FText> local_1298;
  TSharedRef<SWidget,1> local_1268;
  SListView<UObject_*> *local_1258;
  TReferenceControllerBase<1> *pTStack_1250;
  TSharedRef<SWidget,1> local_1248;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_1238;
  TSharedRef<SWidget,1> local_1220;
  TSharedRef<SWidget,1> local_1210;
  TObservableArray<UObject_*> *local_1200;
  TReferenceControllerBase<1> *pTStack_11f8;
  TSharedRef<SBox,1> local_11f0;
  FText local_11e0;
  TSharedRef<STextBlock,1> local_11d0;
  TSharedRef<SListView<UObject_*>,1> local_11c0;
  TSharedRef<SBox,1> local_11b0;
  SScrollBar *local_11a0;
  TReferenceControllerBase<1> *pTStack_1198;
  TAttribute<FMargin> local_1190;
  FLinearColor_u_0 local_1160;
  undefined4 local_1150;
  undefined1 local_114c;
  TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy> local_1148;
  FReadAccessScope local_1130;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_1118;
  FArguments local_1100;
  FArguments local_dc8;
  FArguments local_a88;
  FArguments local_5a8;
  undefined8 uStack_48;
  
  uStack_48 = 0x1469a7c5f;
  bVar11 = false;
  bVar10 = false;
  bVar9 = false;
  local_res8 = (TReferenceControllerBase<1> *)((ulonglong)local_res8 & 0xffffffff00000000);
  if ((param_1->_ComboBoxStyle == (FComboBoxStyle *)0x0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("InArgs._ComboBoxStyle",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Input\\SComboBox.h"
                          ,0xc1,L""), bVar18)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  this->ItemStyle = param_1->_ItemStyle;
  pFVar2 = param_1->_ComboBoxStyle;
  this->ComboBoxStyle = pFVar2;
  fVar12 = (pFVar2->MenuRowPadding).Left;
  fVar13 = (pFVar2->MenuRowPadding).Top;
  fVar14 = (pFVar2->MenuRowPadding).Right;
  fVar15 = (pFVar2->MenuRowPadding).Bottom;
  *(undefined1 *)&this->_padding_ = 0;
  local_1400 = &pFVar2->ComboButtonStyle;
  (this->MenuRowPadding).Left = fVar12;
  (this->MenuRowPadding).Top = fVar13;
  (this->MenuRowPadding).Right = fVar14;
  (this->MenuRowPadding).Bottom = fVar15;
  local_1468 = param_1->_ButtonStyle;
  if (local_1468 == (FButtonStyle *)0x0) {
    local_1468 = &(pFVar2->ComboButtonStyle).ButtonStyle;
  }
  pFVar31 = &(param_1->_PressedSoundOverride).TypedValue;
  if ((param_1->_PressedSoundOverride).bIsSet == false) {
    pFVar31 = &pFVar2->PressedSlateSound;
  }
  FSlateSound::operator=(&this->PressedSound,pFVar31);
  pFVar31 = &(param_1->_SelectionChangeSoundOverride).TypedValue;
  if ((param_1->_SelectionChangeSoundOverride).bIsSet == false) {
    pFVar31 = &this->ComboBoxStyle->SelectionChangeSlateSound;
  }
  FSlateSound::operator=(&this->SelectionChangeSound,pFVar31);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->OnComboBoxOpening,&param_1->_OnComboBoxOpening);
  TDelegate<void___cdecl(UObject_*,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>::operator=
            (&this->OnSelectionChanged,&param_1->_OnSelectionChanged);
  if (&param_1->_OnGenerateWidget != &this->OnGenerateWidget) {
    local_14f8 = (undefined1  [8])0x0;
    local_14f0.Data = (FScriptContainerElement *)0x0;
    local_14e8 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->_OnGenerateWidget
               ,&local_1130);
    if ((*(int *)&(param_1->_OnGenerateWidget).field_0x10 != 0) &&
       (plVar3 = *(longlong **)&(param_1->_OnGenerateWidget).field_0x8, plVar3 != (longlong *)0x0))
    {
      (**(code **)(*plVar3 + 0x50))(plVar3,local_14f8);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_1130);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnGenerateWidget,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_14f8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_14f8,
               (FWriteAccessScope *)&local_1360);
    if ((local_14e8 != 0) && (local_14f0.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_14f0.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_14f0,0,0,0x10);
      local_14e8 = 0;
    }
    if (local_1360.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1360.Accessor,&local_1360);
    }
    if (local_14f0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_14f0.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_14f8);
  }
  this->EnableGamepadNavigationMode = param_1->_EnableGamepadNavigationMode;
  this->bControllerInputCaptured = false;
  pTVar33 = (param_1->_CustomScrollbar).SharedReferenceCount.ReferenceController;
  pSVar4 = (param_1->_CustomScrollbar).Object;
  if (pTVar33 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar33->SharedReferenceCount = (atomic<int>)((int)pTVar33->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1420 = (this->CustomScrollbar).Object;
  pTStack_1418 = (this->CustomScrollbar).SharedReferenceCount.ReferenceController;
  (this->CustomScrollbar).Object = pSVar4;
  (this->CustomScrollbar).SharedReferenceCount.ReferenceController = pTVar33;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1418);
  local_1410 = SBox::FArguments::FArguments(&local_dc8);
  local_14b0 = param_1->_MaxListHeight;
  local_14ac = 1;
  local_1498 = 0;
  local_14a8 = (undefined1  [8])0x0;
  FStack_14a0.Data = (FScriptContainerElement *)0x0;
  (local_1410->_MaxDesiredHeight).Value.Size = local_14b0;
  (local_1410->_MaxDesiredHeight).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(local_1410->_MaxDesiredHeight).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_14a8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_14a8,
             (FWriteAccessScope *)&local_1390);
  if (((int)local_1498 != 0) && (FStack_14a0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_14a0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_14a0,0,0,0x10);
    local_1498 = local_1498 & 0xffffffff00000000;
  }
  if (local_1390.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1390.Accessor,&local_1390);
  }
  if (FStack_14a0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_14a0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_14a8);
  pFVar19 = SListView<UObject_*>::FArguments::FArguments(&local_a88);
  pTVar33 = (param_1->_OptionsSource_SharedObservableArray).SharedReferenceCount.ReferenceController
  ;
  local_1420 = (SScrollBar *)param_1->_OptionsSource_ArrayPointer;
  local_1520 = (FName)param_1->_OptionsSource_ObservableArrayPointer;
  local_1510 = (FName)(param_1->_OptionsSource_SharedObservableArray).Object;
  if (pTVar33 == (TReferenceControllerBase<1> *)0x0) {
    paVar32 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar32 = &pTVar33->SharedReferenceCount;
    LOCK();
    *paVar32 = (atomic<int>)((int)*paVar32 + 1);
    UNLOCK();
  }
  pFVar19->_ListItemsSource_ArrayPointer = (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)0x0;
  pFVar19->_ListItemsSource_ObservableArrayPointer = (TObservableArray<UObject_*> *)0x0;
  pTVar1 = &pFVar19->_ListItemsSource_SharedObservableArray;
  local_13f0.ComparisonIndex.Value = 0;
  local_13f0.Number = 0;
  FStack_13e8.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (pTVar1 != (TSharedPtr<UE::Slate::Containers::TObservableArray<UObject_*>,1> *)&local_13f0) {
    pTVar1->Object = (TObservableArray<UObject_*> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(pFVar19->_ListItemsSource_SharedObservableArray).SharedReferenceCount,&FStack_13e8)
    ;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_13e8.ReferenceController);
  pFVar19->_ListItemsSource_ArrayPointer =
       (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)local_1420;
  pFVar19->_ListItemsSource_ObservableArrayPointer = (TObservableArray<UObject_*> *)local_1520;
  if (pTVar33 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar32 = (atomic<int>)((int)*paVar32 + 1);
    UNLOCK();
  }
  local_1200 = pTVar1->Object;
  pTStack_11f8 = (pFVar19->_ListItemsSource_SharedObservableArray).SharedReferenceCount.
                 ReferenceController;
  pTVar1->Object = (TObservableArray<UObject_*> *)local_1510;
  (pFVar19->_ListItemsSource_SharedObservableArray).SharedReferenceCount.ReferenceController =
       pTVar33;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_11f8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar33);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar19->_OnGenerateRow,
             (FWriteAccessScope *)&local_1318);
  local_1300 = &(pFVar19->_OnGenerateRow).field_0x8;
  puVar20 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_1300);
  pTVar33 = local_res8;
  if (puVar20 != (undefined8 *)0x0) {
    uStack_1504 = local_1450.SharedReferenceCount.ReferenceController._4_4_;
    local_1510 = (FName)GenerateMenuItemRow;
    uStack_1508 = 0;
    pTVar21 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_1210);
    pTVar33 = (pTVar21->SharedReferenceCount).ReferenceController;
    pSVar5 = pTVar21->Object;
    if (pTVar33 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar33->SharedReferenceCount = (atomic<int>)((int)pTVar33->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar33->SharedReferenceCount = (atomic<int>)((int)pTVar33->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar20 = &
               ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VITableRow___00__PEAVUObject__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar22 = FDelegateHandle::GenerateNewID();
    puVar20[2] = uVar22;
    *puVar20 = &
               ___7__TBaseSPMethodDelegateInstance__0A_V__SComboBox_PEAVUObject_____00__A6A_AV__TSharedRef_VITableRow___00__PEAVUObject__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar20[3] = pSVar5;
    puVar20[4] = pTVar33;
    if (pTVar33 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar33->WeakReferenceCount = (atomic<int>)((int)pTVar33->WeakReferenceCount + 1);
      UNLOCK();
    }
    bVar11 = true;
    bVar10 = true;
    bVar9 = true;
    *(FName *)(puVar20 + 5) = local_1510;
    puVar20[6] = CONCAT44(uStack_1504,uStack_1508);
  }
  if (bVar10) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar33);
  }
  if (bVar11) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar33);
  }
  if (bVar9) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1210.SharedReferenceCount.ReferenceController);
  }
  bVar11 = false;
  bVar10 = false;
  bVar9 = false;
  if (local_1318.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1318.Accessor,&local_1318);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar19->_OnSelectionChanged
             ,(FWriteAccessScope *)&local_12f8);
  local_12e0 = &(pFVar19->_OnSelectionChanged).field_0x8;
  puVar20 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_12e0);
  pTVar33 = local_res8;
  if (puVar20 != (undefined8 *)0x0) {
    uStack_1514 = local_1450.SharedReferenceCount.ReferenceController._4_4_;
    local_1520 = (FName)OnSelectionChanged_Internal;
    uStack_1518 = 0;
    pTVar21 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_1220);
    pTVar33 = (pTVar21->SharedReferenceCount).ReferenceController;
    local_1510 = (FName)pTVar21->Object;
    if (pTVar33 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar33->SharedReferenceCount = (atomic<int>)((int)pTVar33->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar33->SharedReferenceCount = (atomic<int>)((int)pTVar33->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar9 = true;
    bVar11 = true;
    bVar10 = true;
    *puVar20 = &
               ___7__TCommonDelegateInstanceState___A6AXPEAVUObject__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar22 = FDelegateHandle::GenerateNewID();
    puVar20[2] = uVar22;
    *puVar20 = &
               ___7__TBaseSPMethodDelegateInstance__0A_V__SComboBox_PEAVUObject_____00__A6AXPEAVUObject__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FName *)(puVar20 + 3) = local_1510;
    puVar20[4] = pTVar33;
    if (pTVar33 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar33->WeakReferenceCount = (atomic<int>)((int)pTVar33->WeakReferenceCount + 1);
      UNLOCK();
    }
    *(FName *)(puVar20 + 5) = local_1520;
    puVar20[6] = CONCAT44(uStack_1514,uStack_1518);
  }
  if (bVar9) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar33);
  }
  if (bVar10) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar33);
  }
  if (bVar11) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1220.SharedReferenceCount.ReferenceController);
  }
  bVar10 = false;
  bVar9 = false;
  if (local_12f8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_12f8.Accessor,&local_12f8);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar19->_OnKeyDownHandler,
             (FWriteAccessScope *)&local_12d8);
  local_12c0 = &(pFVar19->_OnKeyDownHandler).field_0x8;
  puVar20 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_12c0);
  pTVar33 = local_res8;
  if (puVar20 != (undefined8 *)0x0) {
    uStack_1514 = local_1450.SharedReferenceCount.ReferenceController._4_4_;
    local_1520 = (FName)OnKeyDownHandler;
    uStack_1518 = 0;
    pTVar21 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_1248);
    pTVar33 = (pTVar21->SharedReferenceCount).ReferenceController;
    local_1510 = (FName)pTVar21->Object;
    if (pTVar33 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar33->SharedReferenceCount = (atomic<int>)((int)pTVar33->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar33->SharedReferenceCount = (atomic<int>)((int)pTVar33->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar9 = true;
    bVar10 = true;
    *puVar20 = &
               ___7__TCommonDelegateInstanceState___A6A_AVFReply__AEBUFGeometry__AEBUFKeyEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar22 = FDelegateHandle::GenerateNewID();
    puVar20[2] = uVar22;
    *puVar20 = &
               ___7__TBaseSPMethodDelegateInstance__0A_V__SComboBox_PEAVUObject_____00__A6A_AVFReply__AEBUFGeometry__AEBUFKeyEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FName *)(puVar20 + 3) = local_1510;
    puVar20[4] = pTVar33;
    if (pTVar33 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar33->WeakReferenceCount = (atomic<int>)((int)pTVar33->WeakReferenceCount + 1);
      UNLOCK();
    }
    *(FName *)(puVar20 + 5) = local_1520;
    puVar20[6] = CONCAT44(uStack_1514,uStack_1518);
  }
  if (bVar9) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar33);
  }
  if (bVar10) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1248.SharedReferenceCount.ReferenceController);
  }
  bVar11 = false;
  bVar10 = false;
  bVar9 = false;
  if (local_12d8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_12d8.Accessor,&local_12d8);
  }
  local_14cc = 1;
  local_14d0 = 1;
  local_14b8 = 0;
  local_14c8 = (undefined1  [8])0x0;
  FStack_14c0.Data = (FScriptContainerElement *)0x0;
  (pFVar19->_SelectionMode).Value = Single;
  (pFVar19->_SelectionMode).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar19->_SelectionMode).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_14c8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_14c8,
             (FWriteAccessScope *)&local_1378);
  if (((int)local_14b8 != 0) && (FStack_14c0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_14c0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_14c0,0,0,0x10);
    local_14b8 = local_14b8 & 0xffffffff00000000;
  }
  if (local_1378.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1378.Accessor,&local_1378);
  }
  if (FStack_14c0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_14c0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_14c8);
  pFVar19->_ScrollBarStyle = param_1->_ScrollBarStyle;
  pTVar33 = (param_1->_CustomScrollbar).SharedReferenceCount.ReferenceController;
  pSVar4 = (param_1->_CustomScrollbar).Object;
  if (pTVar33 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar33->SharedReferenceCount = (atomic<int>)((int)pTVar33->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar33->SharedReferenceCount = (atomic<int>)((int)pTVar33->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_11a0 = (pFVar19->_ExternalScrollbar).Object;
  pTStack_1198 = (pFVar19->_ExternalScrollbar).SharedReferenceCount.ReferenceController;
  (pFVar19->_ExternalScrollbar).Object = pSVar4;
  (pFVar19->_ExternalScrollbar).SharedReferenceCount.ReferenceController = pTVar33;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1198);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar33);
  FLLMScope::FLLMScope(local_res20,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1510 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_13f8,&local_1510,true);
  TSlateDecl<SListView<UObject_*>,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SListView<UObject_*>,RequiredArgs::T0RequiredArgs>
            (&local_13e0,"SComboListType",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Input\\SComboBox.h"
             ,0xda,(T0RequiredArgs *)&local_res8);
  FMemScope::~FMemScope(&local_13f8);
  FLLMScope::~FLLMScope(local_res20);
  if (local_13e0._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_13e0._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_13e0._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_1258 = (this->ComboListView).Object;
  pTStack_1250 = (this->ComboListView).SharedReferenceCount.ReferenceController;
  (this->ComboListView).Object = local_13e0._Widget.Object;
  (this->ComboListView).SharedReferenceCount.ReferenceController =
       local_13e0._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1250);
  pTVar23 = TSlateDecl<SListView<UObject_*>,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_13e0,&local_11c0,pFVar19);
  pFVar17 = local_1410;
  pTVar33 = (pTVar23->SharedReferenceCount).ReferenceController;
  local_1430 = pTVar23->Object;
  if (pTVar33 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar33->SharedReferenceCount = (atomic<int>)((int)pTVar33->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar33->SharedReferenceCount = (atomic<int>)((int)pTVar33->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar6 = (local_1410->_Content).Widget.SharedReferenceCount.ReferenceController;
  (local_1410->_Content).Widget.Object = (SWidget *)local_1430;
  (local_1410->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar33;
  pTStack_1428 = pTVar33;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  FLLMScope::FLLMScope(local_1500,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1520 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1408,&local_1520,true);
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
            (&local_1238,"SBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Input\\SComboBox.h"
             ,0xd7,(T0RequiredArgs *)&local_res10);
  FMemScope::~FMemScope(&local_1408);
  FLLMScope::~FLLMScope(local_1500);
  pTVar24 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1238,&local_11b0,pFVar17);
  local_1458.ReferenceController = (pTVar24->SharedReferenceCount).ReferenceController;
  local_1460 = pTVar24->Object;
  if (local_1458.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1458.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_1458.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->ComboBoxMenuContent != (TSharedPtr<SBox,1> *)&local_1460) {
    (this->ComboBoxMenuContent).Object = local_1460;
    local_1460 = (SBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ComboBoxMenuContent).SharedReferenceCount,&local_1458);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1458.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_11b0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1238._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar33);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_11c0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_13e0._Widget.SharedReferenceCount.ReferenceController);
  SListView<UObject_*>::FArguments::~FArguments(&local_a88);
  SBox::FArguments::~FArguments(&local_dc8);
  local_1440.SharedReferenceCount.ReferenceController =
       (param_1->_Content).Widget.SharedReferenceCount.ReferenceController;
  local_1440.Object = (param_1->_Content).Widget.Object;
  if (local_1440.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1440.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1440.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((param_1->_Content).Widget.Object == SNullWidget::NullWidget.Object) {
    pFVar25 = STextBlock::FArguments::FArguments(&local_5a8);
    pFVar26 = FText::AsLocalizable_Advanced_LocText
                        (&local_11e0,L"SComboBox",L"ContentWarning",L"No Content Provided");
    FText::FText(&local_1298.Value,pFVar26);
    local_1298.bIsSet = true;
    local_1298.Getter._16_8_ = 0;
    local_1298.Getter._0_8_ = 0;
    local_1298.Getter._8_8_ = 0;
    pFVar25 = STextBlock::FArguments::Text(pFVar25,&local_1298);
    local_1338 = 0;
    local_1334 = 1;
    local_1320 = 0;
    local_1348 = FLinearColor::Red.field0_0x0;
    local_1330 = 0;
    uStack_1328 = 0;
    pFVar25 = STextBlock::FArguments::ColorAndOpacity
                        (pFVar25,(TAttribute<FSlateColor> *)&local_1348._s_0);
    pTVar27 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                        (&local_1118,"STextBlock",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Input\\SComboBox.h"
                         ,0xe9,(T0RequiredArgs *)&local_res18);
    pTVar27 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::Expose<SWidget>
                        (pTVar27,&local_1440);
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=(pTVar27,&local_11d0,pFVar25);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_11d0.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1118._Widget.SharedReferenceCount.ReferenceController);
    if (local_11e0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_11e0.TextData.Reference + 0x10))();
    }
    STextBlock::FArguments::~FArguments(&local_5a8);
  }
  FVar16.ReferenceController = local_1440.SharedReferenceCount.ReferenceController;
  local_13c8.OwnerDeclaration = SComboButton::FArguments::FArguments(&local_1100);
  (local_13c8.OwnerDeclaration)->_ComboButtonStyle = local_1400;
  (local_13c8.OwnerDeclaration)->_ButtonStyle = local_1468;
  local_1527 = (param_1->_Method).bIsSet;
  if ((bool)local_1527 != false) {
    local_1528 = (param_1->_Method).TypedValue;
  }
  if ((TOptional<EPopupMethod> *)&local_1528 != &(local_13c8.OwnerDeclaration)->_Method) {
    if ((bool)local_1527 == false) {
      if (((local_13c8.OwnerDeclaration)->_Method).bIsSet != false) {
        ((local_13c8.OwnerDeclaration)->_Method).bIsSet = false;
      }
    }
    else {
      pEVar28 = TOptional<enum_EPopupMethod>::GetValue(&local_1528);
      ((local_13c8.OwnerDeclaration)->_Method).TypedValue = *pEVar28;
      ((local_13c8.OwnerDeclaration)->_Method).bIsSet = true;
    }
  }
  local_13c8.SlotContent = &(local_13c8.OwnerDeclaration)->_ButtonContent;
  pTVar21 = TSharedPtr<SWidget,1>::ToSharedRef(&local_1440,&local_1450);
  pFVar29 = NamedSlotProperty<SComboButton::FArguments>::operator[](&local_13c8,pTVar21);
  pTVar24 = TSharedPtr<SBox,1>::ToSharedRef(&this->ComboBoxMenuContent,&local_11f0);
  pTVar33 = (pTVar24->SharedReferenceCount).ReferenceController;
  local_14e0 = pTVar24->Object;
  if (pTVar33 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar33->SharedReferenceCount = (atomic<int>)((int)pTVar33->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar33->SharedReferenceCount = (atomic<int>)((int)pTVar33->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar6 = (pFVar29->_MenuContent).Widget.SharedReferenceCount.ReferenceController;
  (pFVar29->_MenuContent).Widget.Object = (SWidget *)local_14e0;
  (pFVar29->_MenuContent).Widget.SharedReferenceCount.ReferenceController = pTVar33;
  pTStack_14d8 = pTVar33;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  pFVar29->_HasDownArrow = param_1->_HasDownArrow;
  local_1190.Value.Left = (param_1->_ContentPadding).Value.Left;
  local_1190.Value.Top = (param_1->_ContentPadding).Value.Top;
  local_1190.Value.Right = (param_1->_ContentPadding).Value.Right;
  local_1190.Value.Bottom = (param_1->_ContentPadding).Value.Bottom;
  local_1190.bIsSet = (param_1->_ContentPadding).bIsSet;
  local_1190.Getter._16_4_ = 0;
  local_1190.Getter._0_8_ = 0;
  local_1190.Getter._8_8_ = 0;
  TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&local_1190.Getter,&(param_1->_ContentPadding).Getter);
  pFVar29 = SComboButton::FArguments::ContentPadding(pFVar29,&local_1190);
  local_1150._0_1_ = (param_1->_ForegroundColor).Value.ColorUseRule;
  local_1150._1_1_ = (param_1->_ForegroundColor).Value.ColorTableId;
  local_1150._2_2_ = *(undefined2 *)&(param_1->_ForegroundColor).Value.field_0x12;
  local_1160._0_8_ = *(undefined8 *)&(param_1->_ForegroundColor).Value.SpecifiedColor.field0_0x0;
  local_1160._8_8_ =
       *(undefined8 *)((longlong)&(param_1->_ForegroundColor).Value.SpecifiedColor.field0_0x0 + 8);
  local_114c = (param_1->_ForegroundColor).bIsSet;
  TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
            (&local_1148,&(param_1->_ForegroundColor).Getter);
  pFVar29 = SComboButton::FArguments::ForegroundColor
                      (pFVar29,(TAttribute<FSlateColor> *)&local_1160._s_0);
  local_res18 = pFVar29;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar29->_OnMenuOpenChanged,
             (FWriteAccessScope *)&local_12b8);
  local_12a0 = &(pFVar29->_OnMenuOpenChanged).field_0x8;
  puVar20 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_12a0);
  if (puVar20 != (undefined8 *)0x0) {
    local_14e0 = (SBox *)OnMenuOpenChanged;
    pTStack_14d8 = (TReferenceControllerBase<1> *)
                   ((ulonglong)local_1450.SharedReferenceCount.ReferenceController._4_4_ << 0x20);
    pTVar21 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_1268);
    pTVar6 = (pTVar21->SharedReferenceCount).ReferenceController;
    local_res10 = pTVar21->Object;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar20 = &___7__TCommonDelegateInstanceState___A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_;
    bVar11 = true;
    bVar10 = true;
    bVar9 = true;
    local_res8 = pTVar6;
    uVar22 = FDelegateHandle::GenerateNewID();
    puVar20[2] = uVar22;
    *puVar20 = &
               ___7__TBaseSPMethodDelegateInstance__0A_V__SComboBox_PEAVUObject_____00__A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar20[3] = local_res10;
    puVar20[4] = pTVar6;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
      UNLOCK();
    }
    puVar20[5] = local_14e0;
    puVar20[6] = pTStack_14d8;
  }
  pTVar6 = local_res8;
  if (bVar9) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_res8);
  }
  if (bVar10) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
  if (bVar11) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1268.SharedReferenceCount.ReferenceController);
  }
  if (local_12b8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_12b8.Accessor,&local_12b8);
  }
  local_res18->_IsFocusable = param_1->_IsFocusable;
  local_res18->_CollapseMenuOnParentFocus = param_1->_CollapseMenuOnParentFocus;
  SComboButton::Construct((SComboButton *)this,local_res18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar33);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_11f0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)
             CONCAT44(local_1450.SharedReferenceCount.ReferenceController._4_4_,
                      local_1450.SharedReferenceCount.ReferenceController._0_4_));
  SComboButton::FArguments::~FArguments(&local_1100);
  local_13b8.Object = (SWidget *)(this->ComboListView).Object;
  local_13b8.WeakReferenceCount.ReferenceController =
       (this->ComboListView).SharedReferenceCount.ReferenceController;
  if (local_13b8.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_13b8.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_13b8.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  SComboButton::SetMenuContentWidgetToFocus((SComboButton *)this,&local_13b8);
  pUVar7 = param_1->_InitiallySelectedItem;
  this->SelectedItem = pUVar7;
  if (pUVar7 != (UObject *)0x0) {
    pSVar30 = TSharedPtr<SListView<UObject_*>,1>::operator->(&this->ComboListView);
    (**(code **)(pSVar30->_padding_ + 0x28))(&pSVar30->_padding_,pUVar7,1,0);
    pSVar30 = TSharedPtr<SListView<UObject_*>,1>::operator->(&this->ComboListView);
    pSVar30->ItemToScrollIntoView = pUVar7;
    pSVar30->UserRequestingScrollIntoView = 0;
    STableViewBase::RequestLayoutRefresh((STableViewBase *)pSVar30);
  }
  pSVar30 = TSharedPtr<SListView<UObject_*>,1>::operator->(&this->ComboListView);
  local_1490._0_8_ = FStyleDefaults::GetNoBrush();
  local_1490[8] = true;
  local_1470 = 0;
  local_1480.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_1478.Data = (FScriptContainerElement *)0x0;
  STableViewBase::SetBackgroundBrush
            ((STableViewBase *)pSVar30,(TAttribute<FSlateBrush_const_*> *)local_1490);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_1480,(FWriteAccessScope *)&local_13a8);
  if (((int)local_1470 != 0) && (FStack_1478.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1478.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1478,0,0,0x10);
    local_1470 = local_1470 & 0xffffffff00000000;
  }
  if (local_13a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_13a8.Accessor,&local_13a8);
  }
  if (FStack_1478.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1478.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_1480.AccessDetector);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar16.ReferenceController);
  return;
}

// Construct @ 1469a8cf0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Removing unreachable block (ram,0x0001469a9411) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SComboBox<FName>::Construct(SComboBox<FName> *this,FArguments *param_1)

{
  TSharedPtr<UE::Slate::Containers::TObservableArray<FName>,1> *pTVar1;
  FComboBoxStyle *pFVar2;
  longlong *plVar3;
  SScrollBar *pSVar4;
  SWidget *pSVar5;
  TReferenceControllerBase<1> *pTVar6;
  FName FVar7;
  code *pcVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  FSharedReferencer<1> FVar16;
  FArguments *pFVar17;
  bool bVar18;
  char cVar19;
  byte bVar20;
  FArguments *pFVar21;
  undefined8 *puVar22;
  TSharedRef<SWidget,1> *pTVar23;
  ulong64 uVar24;
  SListView<FName> *pSVar25;
  SListView<FName> *pSVar26;
  TSharedRef<SBox,1> *pTVar27;
  FArguments *pFVar28;
  FText *pFVar29;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> *pTVar30;
  EPopupMethod *pEVar31;
  FArguments *pFVar32;
  FSlateSound *pFVar33;
  atomic<int> *paVar34;
  TReferenceControllerBase<1> *pTVar35;
  TReferenceControllerBase<1> *local_res8;
  SWidget *local_res10;
  FArguments *local_res18;
  FLLMScope local_res20 [2];
  EPopupMethod local_1508;
  char local_1507;
  SScrollBar *local_1500;
  TReferenceControllerBase<1> *pTStack_14f8;
  FName local_14f0;
  undefined4 uStack_14e8;
  uint uStack_14e4;
  FLLMScope local_14e0 [2];
  undefined1 local_14d8 [8];
  ForAnyElementType local_14d0;
  int local_14c8;
  SBox *local_14c0;
  TReferenceControllerBase<1> *pTStack_14b8;
  undefined4 local_14b0;
  undefined1 local_14ac;
  undefined1 local_14a8 [8];
  ForAnyElementType FStack_14a0;
  ulonglong local_1498;
  float local_1490;
  undefined1 local_148c;
  undefined1 local_1488 [8];
  ForAnyElementType FStack_1480;
  ulonglong local_1478;
  TSlateDecl<SListView<FName>,RequiredArgs::T0RequiredArgs> local_1470;
  undefined1 local_1458 [16];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_1448;
  ForAnyElementType FStack_1440;
  ulonglong local_1438;
  FArguments *local_1430;
  FButtonStyle *local_1428;
  SBox *local_1420;
  FSharedReferencer<1> local_1418;
  TSharedRef<SWidget,1> local_1410;
  TSharedPtr<SWidget,1> local_1400;
  TObservableArray<FName> *local_13f0;
  TReferenceControllerBase<1> *pTStack_13e8;
  FMemScope local_13e0;
  FName local_13d8;
  FMemScope local_13d0;
  FComboButtonStyle *local_13c8;
  FName local_13c0;
  FSharedReferencer<1> FStack_13b8;
  NamedSlotProperty<SComboButton::FArguments> local_13b0;
  TWeakPtr<SWidget,1> local_13a0;
  FDestructionSentinel local_1390;
  FDestructionSentinel local_1378;
  FDestructionSentinel local_1360;
  FDestructionSentinel local_1348;
  FLinearColor_u_0 local_1330;
  undefined1 local_1320;
  undefined1 local_131c;
  undefined8 local_1318;
  undefined8 uStack_1310;
  undefined8 local_1308;
  FDestructionSentinel local_1300;
  undefined1 *local_12e8;
  FDestructionSentinel local_12e0;
  undefined1 *local_12c8;
  FDestructionSentinel local_12c0;
  undefined1 *local_12a8;
  FDestructionSentinel local_12a0;
  undefined1 *local_1288;
  TAttribute<FText> local_1280;
  SListView<FName> *local_1250;
  TReferenceControllerBase<1> *pTStack_1248;
  TSharedRef<SWidget,1> local_1240;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_1230;
  TSharedRef<SWidget,1> local_1218;
  SScrollBar *local_1208;
  TReferenceControllerBase<1> *pTStack_1200;
  TSharedRef<SBox,1> local_11f8;
  FText local_11e8;
  TSharedRef<STextBlock,1> local_11d8;
  TSharedRef<SBox,1> local_11c8;
  SWidget *local_11b8;
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
  
  uStack_48 = 0x1469a8d0f;
  bVar11 = false;
  bVar10 = false;
  bVar9 = false;
  local_res8 = (TReferenceControllerBase<1> *)((ulonglong)local_res8 & 0xffffffff00000000);
  if ((param_1->_ComboBoxStyle == (FComboBoxStyle *)0x0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("InArgs._ComboBoxStyle",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Input\\SComboBox.h"
                          ,0xc1,L""), bVar18)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  this->ItemStyle = param_1->_ItemStyle;
  pFVar2 = param_1->_ComboBoxStyle;
  this->ComboBoxStyle = pFVar2;
  fVar12 = (pFVar2->MenuRowPadding).Left;
  fVar13 = (pFVar2->MenuRowPadding).Top;
  fVar14 = (pFVar2->MenuRowPadding).Right;
  fVar15 = (pFVar2->MenuRowPadding).Bottom;
  *(undefined1 *)&this->_padding_ = 0;
  local_13c8 = &pFVar2->ComboButtonStyle;
  (this->MenuRowPadding).Left = fVar12;
  (this->MenuRowPadding).Top = fVar13;
  (this->MenuRowPadding).Right = fVar14;
  (this->MenuRowPadding).Bottom = fVar15;
  local_1428 = param_1->_ButtonStyle;
  if (local_1428 == (FButtonStyle *)0x0) {
    local_1428 = &(pFVar2->ComboButtonStyle).ButtonStyle;
  }
  pFVar33 = &(param_1->_PressedSoundOverride).TypedValue;
  if ((param_1->_PressedSoundOverride).bIsSet == false) {
    pFVar33 = &pFVar2->PressedSlateSound;
  }
  FSlateSound::operator=(&this->PressedSound,pFVar33);
  pFVar33 = &(param_1->_SelectionChangeSoundOverride).TypedValue;
  if ((param_1->_SelectionChangeSoundOverride).bIsSet == false) {
    pFVar33 = &this->ComboBoxStyle->SelectionChangeSlateSound;
  }
  FSlateSound::operator=(&this->SelectionChangeSound,pFVar33);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->OnComboBoxOpening,&param_1->_OnComboBoxOpening);
  TDelegate<void___cdecl(FName,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>::operator=
            (&this->OnSelectionChanged,&param_1->_OnSelectionChanged);
  if (&param_1->_OnGenerateWidget != &this->OnGenerateWidget) {
    local_14d8 = (undefined1  [8])0x0;
    local_14d0.Data = (FScriptContainerElement *)0x0;
    local_14c8 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->_OnGenerateWidget
               ,&local_1128);
    if ((*(int *)&(param_1->_OnGenerateWidget).field_0x10 != 0) &&
       (plVar3 = *(longlong **)&(param_1->_OnGenerateWidget).field_0x8, plVar3 != (longlong *)0x0))
    {
      (**(code **)(*plVar3 + 0x50))(plVar3,local_14d8);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_1128);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnGenerateWidget,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_14d8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_14d8,
               (FWriteAccessScope *)&local_1348);
    if ((local_14c8 != 0) && (local_14d0.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_14d0.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_14d0,0,0,0x10);
      local_14c8 = 0;
    }
    if (local_1348.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1348.Accessor,&local_1348);
    }
    if (local_14d0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_14d0.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_14d8);
  }
  this->EnableGamepadNavigationMode = param_1->_EnableGamepadNavigationMode;
  this->bControllerInputCaptured = false;
  pTVar35 = (param_1->_CustomScrollbar).SharedReferenceCount.ReferenceController;
  pSVar4 = (param_1->_CustomScrollbar).Object;
  if (pTVar35 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar35->SharedReferenceCount = (atomic<int>)((int)pTVar35->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1208 = (this->CustomScrollbar).Object;
  pTStack_1200 = (this->CustomScrollbar).SharedReferenceCount.ReferenceController;
  (this->CustomScrollbar).Object = pSVar4;
  (this->CustomScrollbar).SharedReferenceCount.ReferenceController = pTVar35;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1200);
  local_1430 = SBox::FArguments::FArguments(&local_dc0);
  local_1490 = param_1->_MaxListHeight;
  local_148c = 1;
  local_1478 = 0;
  local_1488 = (undefined1  [8])0x0;
  FStack_1480.Data = (FScriptContainerElement *)0x0;
  (local_1430->_MaxDesiredHeight).Value.Size = local_1490;
  (local_1430->_MaxDesiredHeight).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(local_1430->_MaxDesiredHeight).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1488);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1488,
             (FWriteAccessScope *)&local_1378);
  if (((int)local_1478 != 0) && (FStack_1480.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1480.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1480,0,0,0x10);
    local_1478 = local_1478 & 0xffffffff00000000;
  }
  if (local_1378.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1378.Accessor,&local_1378);
  }
  if (FStack_1480.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1480.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1488);
  pFVar21 = SListView<FName>::FArguments::FArguments(&local_a80);
  pTVar35 = (param_1->_OptionsSource_SharedObservableArray).SharedReferenceCount.ReferenceController
  ;
  local_13f0 = (TObservableArray<FName> *)param_1->_OptionsSource_ArrayPointer;
  local_1500 = (SScrollBar *)param_1->_OptionsSource_ObservableArrayPointer;
  local_14f0 = (FName)(param_1->_OptionsSource_SharedObservableArray).Object;
  if (pTVar35 == (TReferenceControllerBase<1> *)0x0) {
    paVar34 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar34 = &pTVar35->SharedReferenceCount;
    LOCK();
    *paVar34 = (atomic<int>)((int)*paVar34 + 1);
    UNLOCK();
  }
  pFVar21->_ListItemsSource_ArrayPointer = (TArray<FName,TSizedDefaultAllocator<32>_> *)0x0;
  pFVar21->_ListItemsSource_ObservableArrayPointer = (TObservableArray<FName> *)0x0;
  pTVar1 = &pFVar21->_ListItemsSource_SharedObservableArray;
  local_13c0.ComparisonIndex.Value = 0;
  local_13c0.Number = 0;
  FStack_13b8.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (pTVar1 != (TSharedPtr<UE::Slate::Containers::TObservableArray<FName>,1> *)&local_13c0) {
    pTVar1->Object = (TObservableArray<FName> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(pFVar21->_ListItemsSource_SharedObservableArray).SharedReferenceCount,&FStack_13b8)
    ;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_13b8.ReferenceController);
  pFVar21->_ListItemsSource_ArrayPointer = &local_13f0->Array;
  pFVar21->_ListItemsSource_ObservableArrayPointer = (TObservableArray<FName> *)local_1500;
  if (pTVar35 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar34 = (atomic<int>)((int)*paVar34 + 1);
    UNLOCK();
  }
  local_13f0 = pTVar1->Object;
  pTStack_13e8 = (pFVar21->_ListItemsSource_SharedObservableArray).SharedReferenceCount.
                 ReferenceController;
  pTVar1->Object = (TObservableArray<FName> *)local_14f0;
  (pFVar21->_ListItemsSource_SharedObservableArray).SharedReferenceCount.ReferenceController =
       pTVar35;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_13e8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar35);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar21->_OnGenerateRow,
             (FWriteAccessScope *)&local_1300);
  local_12e8 = &(pFVar21->_OnGenerateRow).field_0x8;
  puVar22 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_12e8);
  pTVar35 = local_res8;
  if (puVar22 != (undefined8 *)0x0) {
    uStack_14e4 = local_1410.SharedReferenceCount.ReferenceController._4_4_;
    local_14f0 = (FName)GenerateMenuItemRow;
    uStack_14e8 = 0;
    pTVar23 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_1218);
    pTVar35 = (pTVar23->SharedReferenceCount).ReferenceController;
    pSVar5 = pTVar23->Object;
    if (pTVar35 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar35->SharedReferenceCount = (atomic<int>)((int)pTVar35->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar35->SharedReferenceCount = (atomic<int>)((int)pTVar35->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar22 = &
               ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VITableRow___00__VFName__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar24 = FDelegateHandle::GenerateNewID();
    puVar22[2] = uVar24;
    *puVar22 = &
               ___7__TBaseSPMethodDelegateInstance__0A_V__SComboBox_VFName_____00__A6A_AV__TSharedRef_VITableRow___00__VFName__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar22[3] = pSVar5;
    puVar22[4] = pTVar35;
    if (pTVar35 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar35->WeakReferenceCount = (atomic<int>)((int)pTVar35->WeakReferenceCount + 1);
      UNLOCK();
    }
    bVar11 = true;
    bVar10 = true;
    bVar9 = true;
    *(FName *)(puVar22 + 5) = local_14f0;
    puVar22[6] = CONCAT44(uStack_14e4,uStack_14e8);
  }
  if (bVar10) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar35);
  }
  if (bVar11) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar35);
  }
  if (bVar9) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1218.SharedReferenceCount.ReferenceController);
  }
  bVar11 = false;
  bVar10 = false;
  bVar9 = false;
  if (local_1300.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1300.Accessor,&local_1300);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar21->_OnSelectionChanged
             ,(FWriteAccessScope *)&local_12e0);
  local_12c8 = &(pFVar21->_OnSelectionChanged).field_0x8;
  puVar22 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_12c8);
  pTVar35 = local_res8;
  if (puVar22 != (undefined8 *)0x0) {
    local_1500 = (SScrollBar *)OnSelectionChanged_Internal;
    pTStack_14f8 = (TReferenceControllerBase<1> *)
                   ((ulonglong)local_1410.SharedReferenceCount.ReferenceController._4_4_ << 0x20);
    pTVar23 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_1240);
    pTVar35 = (pTVar23->SharedReferenceCount).ReferenceController;
    local_14f0 = (FName)pTVar23->Object;
    if (pTVar35 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar35->SharedReferenceCount = (atomic<int>)((int)pTVar35->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar35->SharedReferenceCount = (atomic<int>)((int)pTVar35->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar9 = true;
    bVar11 = true;
    bVar10 = true;
    *puVar22 = &
               ___7__TCommonDelegateInstanceState___A6AXVFName__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar24 = FDelegateHandle::GenerateNewID();
    puVar22[2] = uVar24;
    *puVar22 = &
               ___7__TBaseSPMethodDelegateInstance__0A_V__SComboBox_VFName_____00__A6AXVFName__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FName *)(puVar22 + 3) = local_14f0;
    puVar22[4] = pTVar35;
    if (pTVar35 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar35->WeakReferenceCount = (atomic<int>)((int)pTVar35->WeakReferenceCount + 1);
      UNLOCK();
    }
    puVar22[5] = local_1500;
    puVar22[6] = pTStack_14f8;
  }
  if (bVar9) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar35);
  }
  if (bVar10) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar35);
  }
  if (bVar11) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1240.SharedReferenceCount.ReferenceController);
  }
  bVar10 = false;
  bVar9 = false;
  if (local_12e0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_12e0.Accessor,&local_12e0);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar21->_OnKeyDownHandler,
             (FWriteAccessScope *)&local_12c0);
  local_12a8 = &(pFVar21->_OnKeyDownHandler).field_0x8;
  puVar22 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_12a8);
  pTVar35 = local_res8;
  if (puVar22 != (undefined8 *)0x0) {
    local_1500 = (SScrollBar *)OnKeyDownHandler;
    pTStack_14f8 = (TReferenceControllerBase<1> *)
                   ((ulonglong)local_1410.SharedReferenceCount.ReferenceController._4_4_ << 0x20);
    pTVar23 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_1198);
    pTVar35 = (pTVar23->SharedReferenceCount).ReferenceController;
    local_14f0 = (FName)pTVar23->Object;
    if (pTVar35 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar35->SharedReferenceCount = (atomic<int>)((int)pTVar35->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar35->SharedReferenceCount = (atomic<int>)((int)pTVar35->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar9 = true;
    bVar10 = true;
    *puVar22 = &
               ___7__TCommonDelegateInstanceState___A6A_AVFReply__AEBUFGeometry__AEBUFKeyEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar24 = FDelegateHandle::GenerateNewID();
    puVar22[2] = uVar24;
    *puVar22 = &
               ___7__TBaseSPMethodDelegateInstance__0A_V__SComboBox_VFName_____00__A6A_AVFReply__AEBUFGeometry__AEBUFKeyEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FName *)(puVar22 + 3) = local_14f0;
    puVar22[4] = pTVar35;
    if (pTVar35 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar35->WeakReferenceCount = (atomic<int>)((int)pTVar35->WeakReferenceCount + 1);
      UNLOCK();
    }
    puVar22[5] = local_1500;
    puVar22[6] = pTStack_14f8;
  }
  if (bVar9) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar35);
  }
  if (bVar10) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1198.SharedReferenceCount.ReferenceController);
  }
  bVar11 = false;
  bVar10 = false;
  bVar9 = false;
  if (local_12c0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_12c0.Accessor,&local_12c0);
  }
  local_14ac = 1;
  local_14b0 = 1;
  local_1498 = 0;
  local_14a8 = (undefined1  [8])0x0;
  FStack_14a0.Data = (FScriptContainerElement *)0x0;
  (pFVar21->_SelectionMode).Value = Single;
  (pFVar21->_SelectionMode).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar21->_SelectionMode).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_14a8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_14a8,
             (FWriteAccessScope *)&local_1360);
  if (((int)local_1498 != 0) && (FStack_14a0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_14a0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_14a0,0,0,0x10);
    local_1498 = local_1498 & 0xffffffff00000000;
  }
  if (local_1360.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1360.Accessor,&local_1360);
  }
  if (FStack_14a0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_14a0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_14a8);
  pFVar21->_ScrollBarStyle = param_1->_ScrollBarStyle;
  pTVar35 = (param_1->_CustomScrollbar).SharedReferenceCount.ReferenceController;
  pSVar4 = (param_1->_CustomScrollbar).Object;
  if (pTVar35 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar35->SharedReferenceCount = (atomic<int>)((int)pTVar35->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar35->SharedReferenceCount = (atomic<int>)((int)pTVar35->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1500 = (pFVar21->_ExternalScrollbar).Object;
  pTStack_14f8 = (pFVar21->_ExternalScrollbar).SharedReferenceCount.ReferenceController;
  (pFVar21->_ExternalScrollbar).Object = pSVar4;
  (pFVar21->_ExternalScrollbar).SharedReferenceCount.ReferenceController = pTVar35;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_14f8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar35);
  FLLMScope::FLLMScope(local_res20,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_14f0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_13e0,&local_14f0,true);
  TSlateDecl<SListView<FName>,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SListView<FName>,RequiredArgs::T0RequiredArgs>
            (&local_1470,"SComboListType",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Input\\SComboBox.h"
             ,0xda,(T0RequiredArgs *)&local_res8);
  FMemScope::~FMemScope(&local_13e0);
  FLLMScope::~FLLMScope(local_res20);
  if (local_1470._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1470._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1470._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_1250 = (this->ComboListView).Object;
  pTStack_1248 = (this->ComboListView).SharedReferenceCount.ReferenceController;
  (this->ComboListView).Object = local_1470._Widget.Object;
  (this->ComboListView).SharedReferenceCount.ReferenceController =
       local_1470._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1248);
  pSVar25 = TSharedPtr<SListView<FName>,1>::operator->(&local_1470._Widget);
  SWidget::SWidgetConstruct((SWidget *)pSVar25,(FSlateBaseNamedArgs *)pFVar21);
  pSVar25 = local_1470._Widget.Object;
  SListView<FName>::Construct(local_1470._Widget.Object,pFVar21);
  pSVar26 = TSharedPtr<SListView<FName>,1>::operator->(&local_1470._Widget);
  if ((pSVar26->field_0x30 & 0x10) == 0) {
    cVar19 = (**(code **)(*(longlong *)pSVar26 + 0x228))(pSVar26);
    bVar20 = 0;
    if (cVar19 == '\0') goto LAB_1469a965e;
  }
  bVar20 = 0x20;
LAB_1469a965e:
  pSVar26->field_0x30 = pSVar26->field_0x30 & 0xdf;
  pSVar26->field_0x30 = pSVar26->field_0x30 | bVar20;
  pSVar26 = TSharedPtr<SListView<FName>,1>::operator->(&local_1470._Widget);
  pSVar26->field_0x31 = pSVar26->field_0x31 | 4;
  if ((local_1470._Widget.Object == (SListView<FName> *)0x0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar18)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  FVar16.ReferenceController = local_1470._Widget.SharedReferenceCount.ReferenceController;
  local_1470._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_1470._Widget.Object = (SListView<FName> *)0x0;
  if ((pSVar25 == (SListView<FName> *)0x0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar18)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pFVar17 = local_1430;
  if (FVar16.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar16.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar16.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (FVar16.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar16.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_11b8 = (local_1430->_Content).Widget.Object;
  pTStack_11b0 = (local_1430->_Content).Widget.SharedReferenceCount.ReferenceController;
  (local_1430->_Content).Widget.Object = (SWidget *)pSVar25;
  (local_1430->_Content).Widget.SharedReferenceCount.ReferenceController =
       FVar16.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_11b0);
  FLLMScope::FLLMScope(local_14e0,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_13d8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_13d0,&local_13d8,true);
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
            (&local_1230,"SBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Input\\SComboBox.h"
             ,0xd7,(T0RequiredArgs *)&local_res10);
  FMemScope::~FMemScope(&local_13d0);
  FLLMScope::~FLLMScope(local_14e0);
  pTVar27 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1230,&local_11c8,pFVar17);
  local_1418.ReferenceController = (pTVar27->SharedReferenceCount).ReferenceController;
  local_1420 = pTVar27->Object;
  if (local_1418.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1418.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_1418.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->ComboBoxMenuContent != (TSharedPtr<SBox,1> *)&local_1420) {
    (this->ComboBoxMenuContent).Object = local_1420;
    local_1420 = (SBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ComboBoxMenuContent).SharedReferenceCount,&local_1418);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1418.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_11c8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1230._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar16.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar16.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1470._Widget.SharedReferenceCount.ReferenceController);
  SListView<FName>::FArguments::~FArguments(&local_a80);
  SBox::FArguments::~FArguments(&local_dc0);
  local_1400.SharedReferenceCount.ReferenceController =
       (param_1->_Content).Widget.SharedReferenceCount.ReferenceController;
  local_1400.Object = (param_1->_Content).Widget.Object;
  if (local_1400.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1400.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1400.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((param_1->_Content).Widget.Object == SNullWidget::NullWidget.Object) {
    pFVar28 = STextBlock::FArguments::FArguments(&local_5a0);
    pFVar29 = FText::AsLocalizable_Advanced_LocText
                        (&local_11e8,L"SComboBox",L"ContentWarning",L"No Content Provided");
    FText::FText(&local_1280.Value,pFVar29);
    local_1280.bIsSet = true;
    local_1280.Getter._16_8_ = 0;
    local_1280.Getter._0_8_ = 0;
    local_1280.Getter._8_8_ = 0;
    pFVar28 = STextBlock::FArguments::Text(pFVar28,&local_1280);
    local_1320 = 0;
    local_131c = 1;
    local_1308 = 0;
    local_1330 = FLinearColor::Red.field0_0x0;
    local_1318 = 0;
    uStack_1310 = 0;
    pFVar28 = STextBlock::FArguments::ColorAndOpacity
                        (pFVar28,(TAttribute<FSlateColor> *)&local_1330._s_0);
    pTVar30 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                        (&local_1110,"STextBlock",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Input\\SComboBox.h"
                         ,0xe9,(T0RequiredArgs *)&local_res18);
    pTVar30 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::Expose<SWidget>
                        (pTVar30,&local_1400);
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=(pTVar30,&local_11d8,pFVar28);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_11d8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1110._Widget.SharedReferenceCount.ReferenceController);
    if (local_11e8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_11e8.TextData.Reference + 0x10))();
    }
    STextBlock::FArguments::~FArguments(&local_5a0);
  }
  FVar16.ReferenceController = local_1400.SharedReferenceCount.ReferenceController;
  local_13b0.OwnerDeclaration = SComboButton::FArguments::FArguments(&local_10f8);
  (local_13b0.OwnerDeclaration)->_ComboButtonStyle = local_13c8;
  (local_13b0.OwnerDeclaration)->_ButtonStyle = local_1428;
  local_1507 = (param_1->_Method).bIsSet;
  if ((bool)local_1507 != false) {
    local_1508 = (param_1->_Method).TypedValue;
  }
  if ((TOptional<EPopupMethod> *)&local_1508 != &(local_13b0.OwnerDeclaration)->_Method) {
    if ((bool)local_1507 == false) {
      if (((local_13b0.OwnerDeclaration)->_Method).bIsSet != false) {
        ((local_13b0.OwnerDeclaration)->_Method).bIsSet = false;
      }
    }
    else {
      pEVar31 = TOptional<enum_EPopupMethod>::GetValue(&local_1508);
      ((local_13b0.OwnerDeclaration)->_Method).TypedValue = *pEVar31;
      ((local_13b0.OwnerDeclaration)->_Method).bIsSet = true;
    }
  }
  local_13b0.SlotContent = &(local_13b0.OwnerDeclaration)->_ButtonContent;
  pTVar23 = TSharedPtr<SWidget,1>::ToSharedRef(&local_1400,&local_1410);
  pFVar32 = NamedSlotProperty<SComboButton::FArguments>::operator[](&local_13b0,pTVar23);
  pTVar27 = TSharedPtr<SBox,1>::ToSharedRef(&this->ComboBoxMenuContent,&local_11f8);
  pTVar35 = (pTVar27->SharedReferenceCount).ReferenceController;
  local_14c0 = pTVar27->Object;
  if (pTVar35 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar35->SharedReferenceCount = (atomic<int>)((int)pTVar35->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar35->SharedReferenceCount = (atomic<int>)((int)pTVar35->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar6 = (pFVar32->_MenuContent).Widget.SharedReferenceCount.ReferenceController;
  (pFVar32->_MenuContent).Widget.Object = (SWidget *)local_14c0;
  (pFVar32->_MenuContent).Widget.SharedReferenceCount.ReferenceController = pTVar35;
  pTStack_14b8 = pTVar35;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  pFVar32->_HasDownArrow = param_1->_HasDownArrow;
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
  pFVar32 = SComboButton::FArguments::ContentPadding(pFVar32,&local_1188);
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
  pFVar32 = SComboButton::FArguments::ForegroundColor
                      (pFVar32,(TAttribute<FSlateColor> *)&local_1158._s_0);
  local_res18 = pFVar32;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar32->_OnMenuOpenChanged,
             (FWriteAccessScope *)&local_12a0);
  local_1288 = &(pFVar32->_OnMenuOpenChanged).field_0x8;
  puVar22 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_1288);
  if (puVar22 != (undefined8 *)0x0) {
    local_14c0 = (SBox *)OnMenuOpenChanged;
    pTStack_14b8 = (TReferenceControllerBase<1> *)
                   ((ulonglong)local_1410.SharedReferenceCount.ReferenceController._4_4_ << 0x20);
    pTVar23 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_11a8);
    pTVar6 = (pTVar23->SharedReferenceCount).ReferenceController;
    local_res10 = pTVar23->Object;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar22 = &___7__TCommonDelegateInstanceState___A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_;
    bVar11 = true;
    bVar10 = true;
    bVar9 = true;
    local_res8 = pTVar6;
    uVar24 = FDelegateHandle::GenerateNewID();
    puVar22[2] = uVar24;
    *puVar22 = &
               ___7__TBaseSPMethodDelegateInstance__0A_V__SComboBox_VFName_____00__A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar22[3] = local_res10;
    puVar22[4] = pTVar6;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
      UNLOCK();
    }
    puVar22[5] = local_14c0;
    puVar22[6] = pTStack_14b8;
  }
  pTVar6 = local_res8;
  if (bVar9) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_res8);
  }
  if (bVar10) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
  if (bVar11) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_11a8.SharedReferenceCount.ReferenceController);
  }
  if (local_12a0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_12a0.Accessor,&local_12a0);
  }
  local_res18->_IsFocusable = param_1->_IsFocusable;
  local_res18->_CollapseMenuOnParentFocus = param_1->_CollapseMenuOnParentFocus;
  SComboButton::Construct((SComboButton *)this,local_res18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar35);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_11f8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)
             CONCAT44(local_1410.SharedReferenceCount.ReferenceController._4_4_,
                      local_1410.SharedReferenceCount.ReferenceController._0_4_));
  SComboButton::FArguments::~FArguments(&local_10f8);
  local_13a0.Object = (SWidget *)(this->ComboListView).Object;
  local_13a0.WeakReferenceCount.ReferenceController =
       (this->ComboListView).SharedReferenceCount.ReferenceController;
  if (local_13a0.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_13a0.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_13a0.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  SComboButton::SetMenuContentWidgetToFocus((SComboButton *)this,&local_13a0);
  FVar7 = param_1->_InitiallySelectedItem;
  this->SelectedItem = FVar7;
  if (FVar7 != (FName)0x0) {
    pSVar25 = TSharedPtr<SListView<FName>,1>::operator->(&this->ComboListView);
    (**(code **)(*(longlong *)&pSVar25->field_0x588 + 0x28))(&pSVar25->field_0x588,FVar7,1,0);
    pSVar25 = TSharedPtr<SListView<FName>,1>::operator->(&this->ComboListView);
    pSVar25->ItemToScrollIntoView = FVar7;
    pSVar25->UserRequestingScrollIntoView = 0;
    STableViewBase::RequestLayoutRefresh((STableViewBase *)pSVar25);
  }
  pSVar25 = TSharedPtr<SListView<FName>,1>::operator->(&this->ComboListView);
  local_1458._0_8_ = FStyleDefaults::GetNoBrush();
  local_1458[8] = true;
  local_1438 = 0;
  local_1448.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_1440.Data = (FScriptContainerElement *)0x0;
  STableViewBase::SetBackgroundBrush
            ((STableViewBase *)pSVar25,(TAttribute<FSlateBrush_const_*> *)local_1458);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_1448,(FWriteAccessScope *)&local_1390);
  if (((int)local_1438 != 0) && (FStack_1440.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1440.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1440,0,0,0x10);
    local_1438 = local_1438 & 0xffffffff00000000;
  }
  if (local_1390.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1390.Accessor,&local_1390);
  }
  if (FStack_1440.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1440.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_1448.AccessDetector);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar16.ReferenceController);
  return;
}

// CreateAccessibleWidget @ 1469b2380

TSharedRef<FSlateAccessibleWidget,1> * __thiscall
SComboBox<UObject_*>::CreateAccessibleWidget
          (SComboBox<UObject_*> *this,TSharedRef<FSlateAccessibleWidget,1> *__return_storage_ptr__)

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
           (longlong)
           &SComboBox<UObject*___ptr64>::FSlateAccessibleComboBox::
            _vftable__for__FSlateAccessibleWidget__;
      this_00[1]._padding_ =
           (longlong)
           &SComboBox<UObject*___ptr64>::FSlateAccessibleComboBox::
            _vftable__for__IAccessibleProperty__;
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
           (longlong)
           &SComboBox<UObject*___ptr64>::FSlateAccessibleComboBox::
            _vftable__for__FSlateAccessibleWidget__;
      this_00[1]._padding_ =
           (longlong)
           &SComboBox<UObject*___ptr64>::FSlateAccessibleComboBox::
            _vftable__for__IAccessibleProperty__;
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

// CreateAccessibleWidget @ 1469b2500

TSharedRef<FSlateAccessibleWidget,1> * __thiscall
SComboBox<FName>::CreateAccessibleWidget
          (SComboBox<FName> *this,TSharedRef<FSlateAccessibleWidget,1> *__return_storage_ptr__)

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

// GenerateMenuItemRow @ 1469c9f60

TSharedRef<ITableRow,1> * __thiscall
SComboBox<UObject_*>::GenerateMenuItemRow
          (SComboBox<UObject_*> *this,TSharedRef<ITableRow,1> *__return_storage_ptr__,
          UObject *param_1,TSharedRef<STableViewBase,1> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  bool bVar3;
  char cVar4;
  FArguments *pFVar5;
  TSlateDecl<SComboRow<UObject_*>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
  *pTVar6;
  TSharedRef<SComboRow<UObject_*>,1> *pTVar7;
  FArguments *pFVar8;
  FText *pFVar9;
  TSharedRef<STextBlock,1> *pTVar10;
  longlong *plVar11;
  T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&> local_res8;
  FText local_898;
  bool local_888;
  undefined1 local_880 [8];
  ForAnyElementType FStack_878;
  ulonglong local_870;
  FLLMScope local_868 [2];
  STextBlock *local_860;
  TReferenceControllerBase<1> *pTStack_858;
  bool local_850;
  T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&> local_848;
  TReferenceControllerBase<1> *local_840;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_838;
  FName local_820;
  longlong *local_818;
  FMRSWRecursiveAccessDetector *local_810;
  bool local_808;
  TSlateDecl<SComboRow<UObject_*>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
  local_800;
  TSharedRef<SComboRow<UObject_*>,1> local_7e8;
  TSlateDecl<SComboRow<UObject_*>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
  local_7d8;
  undefined1 local_7c0 [552];
  undefined1 local_598 [24];
  FArguments local_580;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnGenerateWidget,
             (FReadAccessScope *)&local_838);
  if (((*(int *)&(this->OnGenerateWidget).field_0x10 == 0) ||
      (plVar11 = *(longlong **)&(this->OnGenerateWidget).field_0x8, plVar11 == (longlong *)0x0)) ||
     (cVar4 = (**(code **)(*plVar11 + 0x38))(), cVar4 == '\0')) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_838);
  pFVar5 = SComboRow<UObject_*>::FArguments::FArguments((FArguments *)local_7c0);
  if (bVar3) {
    pFVar5->_Style = this->ItemStyle;
    local_898.TextData.Reference = *(ITextData **)&this->MenuRowPadding;
    local_898.Flags = (uint)(this->MenuRowPadding).Right;
    local_898._12_4_ = (this->MenuRowPadding).Bottom;
    local_888 = true;
    plVar11 = (longlong *)0x0;
    local_870 = 0;
    local_880 = (undefined1  [8])0x0;
    FStack_878.Data = (FScriptContainerElement *)0x0;
    *(ITextData **)&(pFVar5->_Padding).Value = local_898.TextData.Reference;
    (pFVar5->_Padding).Value.Right = (float)local_898.Flags;
    (pFVar5->_Padding).Value.Bottom = (float)local_898._12_4_;
    (pFVar5->_Padding).bIsSet = true;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar5->_Padding).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_880);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_880,
               (FWriteAccessScope *)&local_818);
    if (((int)local_870 != 0) && (FStack_878.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_878.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_878,0,0,0x10);
      local_870 = local_870 & 0xffffffff00000000;
    }
    if (local_808 == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_810,(FDestructionSentinel *)&local_818)
      ;
    }
    if (FStack_878.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_878.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_880);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnGenerateWidget,
               (FReadAccessScope *)&local_838);
    if (*(int *)&(this->OnGenerateWidget).field_0x10 != 0) {
      plVar11 = *(longlong **)&(this->OnGenerateWidget).field_0x8;
    }
    (**(code **)(*plVar11 + 0x60))(plVar11,&local_848,param_1);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_838);
    if (local_840 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_840->SharedReferenceCount = (atomic<int>)((int)local_840->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar1 = (pFVar5->_Content).Widget.SharedReferenceCount.ReferenceController;
    (pFVar5->_Content).Widget.Object = (SWidget *)local_848.Arg0;
    (pFVar5->_Content).Widget.SharedReferenceCount.ReferenceController = local_840;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    local_res8.Arg0 = param_2;
    pTVar6 = MakeTDecl<SComboRow<UObject_*>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
                       (&local_800,"SComboRow<OptionType>",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Input\\SComboBox.h"
                        ,0x22d,&local_res8);
    pTVar7 = TSlateDecl<SComboRow<UObject_*>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
             ::operator<<=(pTVar6,(TSharedRef<SComboRow<UObject_*>,1> *)&local_860,pFVar5);
    __return_storage_ptr__->Object = (ITableRow *)pTVar7->Object;
    pTVar1 = (pTVar7->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_858)
    ;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_800._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_840);
  }
  else {
    pFVar8 = STextBlock::FArguments::FArguments(&local_580);
    pFVar9 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)&local_818,L"SlateCore",L"ComboBoxMissingOnGenerateWidgetMethod",
                        L"Please provide a .OnGenerateWidget() handler.");
    FText::FText(&local_898,pFVar9);
    local_888 = true;
    local_870 = 0;
    local_880 = (undefined1  [8])0x0;
    FStack_878.Data = (FScriptContainerElement *)0x0;
    FText::operator=(&(pFVar8->_Text).Value,&local_898);
    (pFVar8->_Text).bIsSet = local_888;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar8->_Text).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_880);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_880,
               (FWriteAccessScope *)&local_860);
    if (((int)local_870 != 0) && (FStack_878.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_878.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_878,0,0,0x10);
      local_870 = local_870 & 0xffffffff00000000;
    }
    if (local_850 == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)pTStack_858,(FDestructionSentinel *)&local_860);
    }
    if (FStack_878.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_878.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_880);
    if (local_898.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_898.TextData.Reference + 0x10))();
    }
    FLLMScope::FLLMScope(local_868,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_820 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope((FMemScope *)&local_860,&local_820,true);
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
              (&local_838,"STextBlock",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Input\\SComboBox.h"
               ,0x238,(T0RequiredArgs *)&local_res8);
    FMemScope::~FMemScope((FMemScope *)&local_860);
    FLLMScope::~FLLMScope(local_868);
    pTVar10 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                        (&local_838,(TSharedRef<STextBlock,1> *)&local_800,pFVar8);
    pTVar1 = (pTVar10->SharedReferenceCount).ReferenceController;
    local_860 = pTVar10->Object;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar2 = (pFVar5->_Content).Widget.SharedReferenceCount.ReferenceController;
    (pFVar5->_Content).Widget.Object = (SWidget *)local_860;
    (pFVar5->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar1;
    pTStack_858 = pTVar1;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    local_848.Arg0 = param_2;
    pTVar6 = MakeTDecl<SComboRow<UObject_*>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
                       (&local_7d8,"SComboRow<OptionType>",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Input\\SComboBox.h"
                        ,0x236,&local_848);
    pTVar7 = TSlateDecl<SComboRow<UObject_*>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
             ::operator<<=(pTVar6,&local_7e8,pFVar5);
    __return_storage_ptr__->Object = (ITableRow *)pTVar7->Object;
    pTVar2 = (pTVar7->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_7e8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_7d8._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_800._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_838._Widget.SharedReferenceCount.ReferenceController);
    if ((ITextData *)local_818 != (ITextData *)0x0) {
      (**(code **)(*local_818 + 0x10))();
    }
    STextBlock::FArguments::~FArguments(&local_580);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_598);
  if ((void *)local_598._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_598._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_598);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_7c0._520_8_);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_7c0);
  return __return_storage_ptr__;
}

// GenerateMenuItemRow @ 1469ca470

TSharedRef<ITableRow,1> * __thiscall
SComboBox<FName>::GenerateMenuItemRow
          (SComboBox<FName> *this,TSharedRef<ITableRow,1> *__return_storage_ptr__,FName param_1,
          TSharedRef<STableViewBase,1> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  bool bVar3;
  char cVar4;
  FArguments *pFVar5;
  TSlateDecl<SComboRow<FName>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
  *pTVar6;
  TSharedRef<SComboRow<FName>,1> *pTVar7;
  FArguments *pFVar8;
  FText *pFVar9;
  TSharedRef<STextBlock,1> *pTVar10;
  longlong *plVar11;
  T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&> local_res8;
  FText local_898;
  bool local_888;
  undefined1 local_880 [8];
  ForAnyElementType FStack_878;
  ulonglong local_870;
  FLLMScope local_868 [2];
  STextBlock *local_860;
  TReferenceControllerBase<1> *pTStack_858;
  bool local_850;
  T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&> local_848;
  TReferenceControllerBase<1> *local_840;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_838;
  FName local_820;
  longlong *local_818;
  FMRSWRecursiveAccessDetector *local_810;
  bool local_808;
  TSlateDecl<SComboRow<FName>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
  local_800;
  TSharedRef<SComboRow<FName>,1> local_7e8;
  TSlateDecl<SComboRow<FName>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
  local_7d8;
  undefined1 local_7c0 [552];
  undefined1 local_598 [24];
  FArguments local_580;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnGenerateWidget,
             (FReadAccessScope *)&local_838);
  if (((*(int *)&(this->OnGenerateWidget).field_0x10 == 0) ||
      (plVar11 = *(longlong **)&(this->OnGenerateWidget).field_0x8, plVar11 == (longlong *)0x0)) ||
     (cVar4 = (**(code **)(*plVar11 + 0x38))(), cVar4 == '\0')) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_838);
  if (bVar3) {
    pFVar5 = SComboRow<FName>::FArguments::FArguments((FArguments *)local_7c0);
    plVar11 = (longlong *)0x0;
    pFVar5->_Style = this->ItemStyle;
    local_898.TextData.Reference = *(ITextData **)&this->MenuRowPadding;
    local_898.Flags = (uint)(this->MenuRowPadding).Right;
    local_898._12_4_ = (this->MenuRowPadding).Bottom;
    local_888 = true;
    local_870 = 0;
    local_880 = (undefined1  [8])0x0;
    FStack_878.Data = (FScriptContainerElement *)0x0;
    *(ITextData **)&(pFVar5->_Padding).Value = local_898.TextData.Reference;
    (pFVar5->_Padding).Value.Right = (float)local_898.Flags;
    (pFVar5->_Padding).Value.Bottom = (float)local_898._12_4_;
    (pFVar5->_Padding).bIsSet = true;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar5->_Padding).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_880);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_880,
               (FWriteAccessScope *)&local_818);
    if (((int)local_870 != 0) && (FStack_878.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_878.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_878,0,0,0x10);
      local_870 = local_870 & 0xffffffff00000000;
    }
    if (local_808 == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_810,(FDestructionSentinel *)&local_818)
      ;
    }
    if (FStack_878.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_878.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_880);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnGenerateWidget,
               (FReadAccessScope *)&local_838);
    if (*(int *)&(this->OnGenerateWidget).field_0x10 != 0) {
      plVar11 = *(longlong **)&(this->OnGenerateWidget).field_0x8;
    }
    (**(code **)(*plVar11 + 0x60))(plVar11,&local_848,param_1);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_838);
    if (local_840 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_840->SharedReferenceCount = (atomic<int>)((int)local_840->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar1 = (pFVar5->_Content).Widget.SharedReferenceCount.ReferenceController;
    (pFVar5->_Content).Widget.Object = (SWidget *)local_848.Arg0;
    (pFVar5->_Content).Widget.SharedReferenceCount.ReferenceController = local_840;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    local_res8.Arg0 = param_2;
    pTVar6 = MakeTDecl<SComboRow<FName>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
                       (&local_800,"SComboRow<OptionType>",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Input\\SComboBox.h"
                        ,0x22d,&local_res8);
    pTVar7 = TSlateDecl<SComboRow<FName>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
             ::operator<<=(pTVar6,(TSharedRef<SComboRow<FName>,1> *)&local_860,pFVar5);
    __return_storage_ptr__->Object = (ITableRow *)pTVar7->Object;
    pTVar1 = (pTVar7->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_858)
    ;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_800._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_840);
  }
  else {
    pFVar5 = SComboRow<FName>::FArguments::FArguments((FArguments *)local_7c0);
    pFVar8 = STextBlock::FArguments::FArguments(&local_580);
    pFVar9 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)&local_818,L"SlateCore",L"ComboBoxMissingOnGenerateWidgetMethod",
                        L"Please provide a .OnGenerateWidget() handler.");
    FText::FText(&local_898,pFVar9);
    local_888 = true;
    local_870 = 0;
    local_880 = (undefined1  [8])0x0;
    FStack_878.Data = (FScriptContainerElement *)0x0;
    FText::operator=(&(pFVar8->_Text).Value,&local_898);
    (pFVar8->_Text).bIsSet = local_888;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar8->_Text).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_880);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_880,
               (FWriteAccessScope *)&local_860);
    if (((int)local_870 != 0) && (FStack_878.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_878.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_878,0,0,0x10);
      local_870 = local_870 & 0xffffffff00000000;
    }
    if (local_850 == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)pTStack_858,(FDestructionSentinel *)&local_860);
    }
    if (FStack_878.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_878.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_880);
    if (local_898.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_898.TextData.Reference + 0x10))();
    }
    FLLMScope::FLLMScope(local_868,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_820 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope((FMemScope *)&local_860,&local_820,true);
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
              (&local_838,"STextBlock",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Input\\SComboBox.h"
               ,0x238,(T0RequiredArgs *)&local_res8);
    FMemScope::~FMemScope((FMemScope *)&local_860);
    FLLMScope::~FLLMScope(local_868);
    pTVar10 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                        (&local_838,(TSharedRef<STextBlock,1> *)&local_800,pFVar8);
    pTVar1 = (pTVar10->SharedReferenceCount).ReferenceController;
    local_860 = pTVar10->Object;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar2 = (pFVar5->_Content).Widget.SharedReferenceCount.ReferenceController;
    (pFVar5->_Content).Widget.Object = (SWidget *)local_860;
    (pFVar5->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar1;
    pTStack_858 = pTVar1;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    local_848.Arg0 = param_2;
    pTVar6 = MakeTDecl<SComboRow<FName>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
                       (&local_7d8,"SComboRow<OptionType>",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Input\\SComboBox.h"
                        ,0x236,&local_848);
    pTVar7 = TSlateDecl<SComboRow<FName>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
             ::operator<<=(pTVar6,&local_7e8,pFVar5);
    __return_storage_ptr__->Object = (ITableRow *)pTVar7->Object;
    pTVar2 = (pTVar7->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_7e8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_7d8._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_800._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_838._Widget.SharedReferenceCount.ReferenceController);
    if ((ITextData *)local_818 != (ITextData *)0x0) {
      (**(code **)(*local_818 + 0x10))();
    }
    STextBlock::FArguments::~FArguments(&local_580);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_598);
  if ((void *)local_598._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_598._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_598);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_7c0._520_8_);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_7c0);
  return __return_storage_ptr__;
}

// GetDefaultAccessibleText @ 1469ced30

TOptional<FText> * __thiscall
SComboBox<UObject_*>::GetDefaultAccessibleText
          (SComboBox<UObject_*> *this,TOptional<FText> *__return_storage_ptr__,
          EAccessibleType param_1)

{
  code *pcVar1;
  bool bVar2;
  FText *pFVar3;
  TOptional<FText> *pTVar4;
  FText local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_struct_TOptional<FText>___cdecl_SComboBox<UObject*___ptr64>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_struct_TOptional<FText>___cdecl_SComboBox<UObject*___ptr64>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_struct_TOptional<FText>___cdecl_SComboBox<UObject*___ptr64>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FString::FString(&`public:_virtual_struct_TOptional<FText>___cdecl_SComboBox<UObject*___ptr64>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
                          ::__l2::Name,L"Combo Box");
      atexit(`SComboBox<UObject_*>::GetDefaultAccessibleText'::__l2::
             _dynamic_atexit_destructor_for__Name__);
      _Init_thread_footer(&`public:_virtual_struct_TOptional<FText>___cdecl_SComboBox<UObject*___ptr64>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pFVar3 = FText::FromString(&local_18,
                             &`public:_virtual_struct_TOptional<FText>___cdecl_SComboBox<UObject*___ptr64>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
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

// GetDefaultAccessibleText @ 1469cee10

TOptional<FText> * __thiscall
SComboBox<FName>::GetDefaultAccessibleText
          (SComboBox<FName> *this,TOptional<FText> *__return_storage_ptr__,EAccessibleType param_1)

{
  code *pcVar1;
  bool bVar2;
  FText *pFVar3;
  TOptional<FText> *pTVar4;
  FText local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_struct_TOptional<FText>___cdecl_SComboBox<FName>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_struct_TOptional<FText>___cdecl_SComboBox<FName>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_struct_TOptional<FText>___cdecl_SComboBox<FName>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FString::FString(&`public:_virtual_struct_TOptional<FText>___cdecl_SComboBox<FName>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
                          ::__l2::Name,L"Combo Box");
      atexit(`SComboBox<FName>::GetDefaultAccessibleText'::__l2::
             _dynamic_atexit_destructor_for__Name__);
      _Init_thread_footer(&`public:_virtual_struct_TOptional<FText>___cdecl_SComboBox<FName>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pFVar3 = FText::FromString(&local_18,
                             &`public:_virtual_struct_TOptional<FText>___cdecl_SComboBox<FName>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
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

// IsInteractable @ 1469e18f0

bool __thiscall SComboBox<UObject_*>::IsInteractable(SComboBox<UObject_*> *this)

{
  return (bool)*(undefined1 *)((longlong)&this->_padding_ + 2);
}

// IsInteractable @ 1469e1900

bool __thiscall SComboBox<FName>::IsInteractable(SComboBox<FName> *this)

{
  return (bool)*(undefined1 *)((longlong)&this->_padding_ + 2);
}

// OnButtonClicked @ 1469e5c10

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SComboBox<UObject_*>::OnButtonClicked(SComboBox<UObject_*> *this,FReply *__return_storage_ptr__)

{
  UObject *pUVar1;
  code *pcVar2;
  bool bVar3;
  FReply *pFVar4;
  FSlateApplication *pFVar5;
  longlong *plVar6;
  undefined8 *local_38;
  int local_30;
  FReadAccessScope local_28;
  
  bVar3 = SMenuAnchor::IsOpen((SMenuAnchor *)this);
  if (bVar3) {
    if ((this->ComboListView).Object == (SListView<UObject_*> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FReply *)(*pcVar2)();
        return pFVar4;
      }
    }
    plVar6 = &((this->ComboListView).Object)->_padding_;
    (**(code **)(*plVar6 + 0xd0))(plVar6,&local_38);
    if (0 < local_30) {
      pUVar1 = (UObject *)*local_38;
      if (pUVar1 != this->SelectedItem) {
        pFVar5 = FSlateApplication::Get();
        FSlateApplication::PlaySound(pFVar5,&this->SelectionChangeSound,0);
        this->SelectedItem = pUVar1;
        TDelegate<void___cdecl(UObject_*,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>::
        ExecuteIfBound(&this->OnSelectionChanged,pUVar1,Direct);
      }
      (**(code **)(this->_padding_ + 0x250))(this,0,1,0);
    }
    if (local_38 != (undefined8 *)0x0) {
      FMemory::Free(local_38);
    }
  }
  else {
    pFVar5 = FSlateApplication::Get();
    FSlateApplication::PlaySound(pFVar5,&this->PressedSound,0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnComboBoxOpening,
               &local_28);
    if ((*(int *)&(this->OnComboBoxOpening).field_0x10 != 0) &&
       (plVar6 = *(longlong **)&(this->OnComboBoxOpening).field_0x8, plVar6 != (longlong *)0x0)) {
      (**(code **)(*plVar6 + 0x68))();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
  }
  SComboButton::OnButtonClicked((SComboButton *)this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// OnButtonClicked @ 1469e5d60

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SComboBox<FName>::OnButtonClicked(SComboBox<FName> *this,FReply *__return_storage_ptr__)

{
  FName FVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  FReply *pFVar5;
  FSlateApplication *pFVar6;
  undefined1 *puVar7;
  FName *local_38;
  int local_30;
  FReadAccessScope local_28;
  
  bVar4 = SMenuAnchor::IsOpen((SMenuAnchor *)this);
  if (bVar4) {
    if ((this->ComboListView).Object == (SListView<FName> *)0x0) {
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
    puVar7 = &((this->ComboListView).Object)->field_0x588;
    (**(code **)(*(longlong *)puVar7 + 0xd0))(puVar7,&local_38);
    if (0 < local_30) {
      FVar1 = *local_38;
      if (FVar1 != this->SelectedItem) {
        pFVar6 = FSlateApplication::Get();
        FSlateApplication::PlaySound(pFVar6,&this->SelectionChangeSound,0);
        this->SelectedItem = FVar1;
        TDelegate<void___cdecl(FName,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>::
        ExecuteIfBound(&this->OnSelectionChanged,FVar1,Direct);
      }
      (**(code **)(this->_padding_ + 0x250))(this,0,1,0);
    }
    if (local_38 != (FName *)0x0) {
      FMemory::Free(local_38);
    }
  }
  else {
    pFVar6 = FSlateApplication::Get();
    FSlateApplication::PlaySound(pFVar6,&this->PressedSound,0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnComboBoxOpening,
               &local_28);
    if ((*(int *)&(this->OnComboBoxOpening).field_0x10 != 0) &&
       (plVar2 = *(longlong **)&(this->OnComboBoxOpening).field_0x8, plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x68))();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
  }
  SComboButton::OnButtonClicked((SComboButton *)this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// OnKeyDown @ 1469e96f0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SComboBox<UObject_*>::OnKeyDown
          (SComboBox<UObject_*> *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FKeyEvent *param_2)

{
  FName FVar1;
  UObject *pUVar2;
  IItemsSource<UObject_*> *pIVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  FSlateApplication *pFVar10;
  SListView<UObject_*> *pSVar11;
  TSharedRef<SWidget,1> *pTVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  FReply *pFVar15;
  int iVar16;
  TReferenceControllerBase<1> *pTVar17;
  uint uVar18;
  uint uVar19;
  longlong *plVar20;
  uint uStackX_c;
  undefined8 *local_148;
  int local_140;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined8 local_128;
  undefined4 uStack_120;
  longlong *local_118;
  undefined8 uStack_110;
  TSharedRef<SWidget,1> local_108;
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  FReply local_d8;
  
  bVar8 = false;
  cVar6 = (**(code **)(this->_padding_ + 0x1b0))();
  if (cVar6 == '\0') {
LAB_1469e98c2:
    SWidget::OnKeyDown((SWidget *)this,__return_storage_ptr__,param_1,param_2);
  }
  else {
    pFVar10 = FSlateApplication::Get();
    cVar6 = (**(code **)(*(longlong *)pFVar10 + 0xb0))(pFVar10,param_2);
    pFVar10 = FSlateApplication::Get();
    cVar7 = (**(code **)(*(longlong *)pFVar10 + 0xa0))(pFVar10);
    if (this->EnableGamepadNavigationMode == false) {
      if (cVar7 == '\x02') {
        pUVar2 = this->SelectedItem;
        if (pUVar2 != (UObject *)0x0) {
          pSVar11 = TSharedPtr<SListView<UObject_*>,1>::operator->(&this->ComboListView);
          pIVar3 = (pSVar11->ViewSource).Ptr;
          if (pIVar3 == (IItemsSource<UObject_*> *)0x0) {
            local_138 = 0;
            puVar13 = &local_138;
            uStack_130 = 0;
          }
          else {
            puVar13 = (undefined8 *)(**(code **)((longlong)*pIVar3 + 8))(pIVar3,local_f8);
          }
          plVar20 = (longlong *)*puVar13;
          plVar14 = plVar20;
          if (plVar20 != plVar20 + (int)puVar13[1]) {
            while ((UObject *)*plVar14 != pUVar2) {
              plVar14 = plVar14 + 1;
              if (plVar14 == plVar20 + (int)puVar13[1]) {
                FReply::FReply(__return_storage_ptr__,true);
                return __return_storage_ptr__;
              }
            }
            iVar9 = (int)((longlong)plVar14 - (longlong)plVar20 >> 3);
            if (0 < iVar9) {
              uVar18 = iVar9 - 1;
              uVar19 = 0;
              if ((int)uVar18 < (int)puVar13[1]) {
                uVar19 = ~uVar18 >> 0x1f;
              }
              if ((uVar19 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0x14f,
                                     L"Array index out of bounds: %lld from an array of size %lld"),
                 bVar8)) {
                pcVar4 = (code *)swi(3);
                pFVar15 = (FReply *)(*pcVar4)();
                return pFVar15;
              }
              goto LAB_1469e9abc;
            }
          }
        }
      }
      else {
        if (cVar7 != '\x03') {
          SComboButton::OnKeyDown((SComboButton *)this,__return_storage_ptr__,param_1,param_2);
          return __return_storage_ptr__;
        }
        pUVar2 = this->SelectedItem;
        if (pUVar2 != (UObject *)0x0) {
          pSVar11 = TSharedPtr<SListView<UObject_*>,1>::operator->(&this->ComboListView);
          pIVar3 = (pSVar11->ViewSource).Ptr;
          if (pIVar3 == (IItemsSource<UObject_*> *)0x0) {
            local_128 = 0;
            puVar13 = &local_128;
            uStack_120 = 0;
          }
          else {
            puVar13 = (undefined8 *)(**(code **)((longlong)*pIVar3 + 8))(pIVar3,local_e8);
          }
          plVar20 = (longlong *)*puVar13;
          uStack_110 = puVar13[1];
          iVar9 = (int)puVar13[1];
          for (plVar14 = plVar20; plVar14 != plVar20 + iVar9; plVar14 = plVar14 + 1) {
            if ((UObject *)*plVar14 == pUVar2) {
              iVar16 = (int)((longlong)plVar14 - (longlong)plVar20 >> 3);
              goto LAB_1469e9a6a;
            }
          }
          iVar16 = -1;
LAB_1469e9a6a:
          local_118 = plVar20;
          if (iVar16 < iVar9 + -1) {
            uVar18 = iVar16 + 1;
            uVar19 = 0;
            if ((int)uVar18 < iVar9) {
              uVar19 = ~uVar18 >> 0x1f;
            }
            if ((uVar19 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0x14f,
                                   L"Array index out of bounds: %lld from an array of size %lld"),
               bVar8)) {
              pcVar4 = (code *)swi(3);
              pFVar15 = (FReply *)(*pcVar4)();
              return pFVar15;
            }
LAB_1469e9abc:
            SetSelectedItem(this,(UObject *)plVar20[(int)uVar18]);
          }
        }
      }
    }
    else {
      if (cVar6 == '\0') {
        if (this->bControllerInputCaptured == false) {
          this->bControllerInputCaptured = true;
          pFVar10 = FSlateApplication::Get();
          FSlateApplication::PlaySound(pFVar10,&this->PressedSound,0);
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::ExecuteIfBound
                    (&this->OnComboBoxOpening);
          SComboButton::OnButtonClicked((SComboButton *)this,__return_storage_ptr__);
          return __return_storage_ptr__;
        }
        this->bControllerInputCaptured = false;
        pSVar11 = TSharedPtr<SListView<UObject_*>,1>::operator->(&this->ComboListView);
        (**(code **)(pSVar11->_padding_ + 0xd0))(&pSVar11->_padding_,&local_148);
        if (0 < local_140) {
          OnSelectionChanged_Internal(this,(UObject *)*local_148,Direct);
        }
        FReply::FReply(&local_d8,true);
        pTVar12 = TSharedFromThis<SWidget,1>::AsShared
                            ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_108);
        FReply::SetUserFocus(&local_d8,pTVar12,SetDirectly,false);
        FReply::FReply(__return_storage_ptr__,&local_d8);
        FReply::~FReply(&local_d8);
        if (local_148 == (undefined8 *)0x0) {
          return __return_storage_ptr__;
        }
        FMemory::Free(local_148);
        return __return_storage_ptr__;
      }
      if (cVar6 == '\x01') {
        pTVar17 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
LAB_1469e9895:
        bVar5 = true;
      }
      else {
        pTVar17 = (param_2->Key).KeyDetails.SharedReferenceCount.ReferenceController;
        FVar1 = (param_2->Key).KeyName;
        if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar17->SharedReferenceCount = (atomic<int>)((int)pTVar17->SharedReferenceCount + 1);
          UNLOCK();
        }
        bVar8 = true;
        if (FVar1 == EKeys::BackSpace.KeyName) goto LAB_1469e9895;
        bVar5 = false;
      }
      if (bVar8) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar17)
        ;
      }
      bVar8 = this->bControllerInputCaptured;
      if (bVar5) {
        OnMenuOpenChanged(this,false);
      }
      if (bVar8 == false) goto LAB_1469e98c2;
    }
    FReply::FReply(__return_storage_ptr__,true);
  }
  return __return_storage_ptr__;
}

// OnKeyDown @ 1469e9b00

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SComboBox<FName>::OnKeyDown
          (SComboBox<FName> *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FKeyEvent *param_2)

{
  FName FVar1;
  IItemsSource<FName> *pIVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  FSlateApplication *pFVar9;
  SListView<FName> *pSVar10;
  TSharedRef<SWidget,1> *pTVar11;
  undefined8 *puVar12;
  FName *pFVar13;
  FReply *pFVar14;
  int iVar15;
  TReferenceControllerBase<1> *pTVar16;
  uint uVar17;
  uint uVar18;
  FName *pFVar19;
  uint uStackX_c;
  FName *local_148;
  int local_140;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined8 local_128;
  undefined4 uStack_120;
  FName *local_118;
  undefined8 uStack_110;
  TSharedRef<SWidget,1> local_108;
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  FReply local_d8;
  
  bVar7 = false;
  cVar5 = (**(code **)(this->_padding_ + 0x1b0))();
  if (cVar5 == '\0') {
LAB_1469e9cd2:
    SWidget::OnKeyDown((SWidget *)this,__return_storage_ptr__,param_1,param_2);
  }
  else {
    pFVar9 = FSlateApplication::Get();
    cVar5 = (**(code **)(*(longlong *)pFVar9 + 0xb0))(pFVar9,param_2);
    pFVar9 = FSlateApplication::Get();
    cVar6 = (**(code **)(*(longlong *)pFVar9 + 0xa0))(pFVar9);
    if (this->EnableGamepadNavigationMode == false) {
      if (cVar6 == '\x02') {
        FVar1 = this->SelectedItem;
        if (FVar1 != (FName)0x0) {
          pSVar10 = TSharedPtr<SListView<FName>,1>::operator->(&this->ComboListView);
          pIVar2 = (pSVar10->ViewSource).Ptr;
          if (pIVar2 == (IItemsSource<FName> *)0x0) {
            local_138 = 0;
            puVar12 = &local_138;
            uStack_130 = 0;
          }
          else {
            puVar12 = (undefined8 *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_f8);
          }
          pFVar19 = (FName *)*puVar12;
          pFVar13 = pFVar19;
          if (pFVar19 != pFVar19 + (int)puVar12[1]) {
            while (*pFVar13 != FVar1) {
              pFVar13 = pFVar13 + 1;
              if (pFVar13 == pFVar19 + (int)puVar12[1]) {
                FReply::FReply(__return_storage_ptr__,true);
                return __return_storage_ptr__;
              }
            }
            iVar8 = (int)((longlong)pFVar13 - (longlong)pFVar19 >> 3);
            if (0 < iVar8) {
              uVar17 = iVar8 - 1;
              uVar18 = 0;
              if ((int)uVar17 < (int)puVar12[1]) {
                uVar18 = ~uVar17 >> 0x1f;
              }
              if ((uVar18 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0x14f,
                                     L"Array index out of bounds: %lld from an array of size %lld"),
                 bVar7)) {
                pcVar3 = (code *)swi(3);
                pFVar14 = (FReply *)(*pcVar3)();
                return pFVar14;
              }
              goto LAB_1469e9ecc;
            }
          }
        }
      }
      else {
        if (cVar6 != '\x03') {
          SComboButton::OnKeyDown((SComboButton *)this,__return_storage_ptr__,param_1,param_2);
          return __return_storage_ptr__;
        }
        FVar1 = this->SelectedItem;
        if (FVar1 != (FName)0x0) {
          pSVar10 = TSharedPtr<SListView<FName>,1>::operator->(&this->ComboListView);
          pIVar2 = (pSVar10->ViewSource).Ptr;
          if (pIVar2 == (IItemsSource<FName> *)0x0) {
            local_128 = 0;
            puVar12 = &local_128;
            uStack_120 = 0;
          }
          else {
            puVar12 = (undefined8 *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_e8);
          }
          pFVar19 = (FName *)*puVar12;
          uStack_110 = puVar12[1];
          iVar8 = (int)puVar12[1];
          for (pFVar13 = pFVar19; pFVar13 != pFVar19 + iVar8; pFVar13 = pFVar13 + 1) {
            if (*pFVar13 == FVar1) {
              iVar15 = (int)((longlong)pFVar13 - (longlong)pFVar19 >> 3);
              goto LAB_1469e9e7a;
            }
          }
          iVar15 = -1;
LAB_1469e9e7a:
          local_118 = pFVar19;
          if (iVar15 < iVar8 + -1) {
            uVar17 = iVar15 + 1;
            uVar18 = 0;
            if ((int)uVar17 < iVar8) {
              uVar18 = ~uVar17 >> 0x1f;
            }
            if ((uVar18 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0x14f,
                                   L"Array index out of bounds: %lld from an array of size %lld"),
               bVar7)) {
              pcVar3 = (code *)swi(3);
              pFVar14 = (FReply *)(*pcVar3)();
              return pFVar14;
            }
LAB_1469e9ecc:
            SetSelectedItem(this,pFVar19[(int)uVar17]);
          }
        }
      }
    }
    else {
      if (cVar5 == '\0') {
        if (this->bControllerInputCaptured == false) {
          this->bControllerInputCaptured = true;
          pFVar9 = FSlateApplication::Get();
          FSlateApplication::PlaySound(pFVar9,&this->PressedSound,0);
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::ExecuteIfBound
                    (&this->OnComboBoxOpening);
          SComboButton::OnButtonClicked((SComboButton *)this,__return_storage_ptr__);
          return __return_storage_ptr__;
        }
        this->bControllerInputCaptured = false;
        pSVar10 = TSharedPtr<SListView<FName>,1>::operator->(&this->ComboListView);
        (**(code **)(*(longlong *)&pSVar10->field_0x588 + 0xd0))(&pSVar10->field_0x588,&local_148);
        if (0 < local_140) {
          OnSelectionChanged_Internal(this,*local_148,Direct);
        }
        FReply::FReply(&local_d8,true);
        pTVar11 = TSharedFromThis<SWidget,1>::AsShared
                            ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_108);
        FReply::SetUserFocus(&local_d8,pTVar11,SetDirectly,false);
        FReply::FReply(__return_storage_ptr__,&local_d8);
        FReply::~FReply(&local_d8);
        if (local_148 == (FName *)0x0) {
          return __return_storage_ptr__;
        }
        FMemory::Free(local_148);
        return __return_storage_ptr__;
      }
      if (cVar5 == '\x01') {
        pTVar16 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
LAB_1469e9ca5:
        bVar4 = true;
      }
      else {
        pTVar16 = (param_2->Key).KeyDetails.SharedReferenceCount.ReferenceController;
        FVar1 = (param_2->Key).KeyName;
        if (pTVar16 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar16->SharedReferenceCount = (atomic<int>)((int)pTVar16->SharedReferenceCount + 1);
          UNLOCK();
        }
        bVar7 = true;
        if (FVar1 == EKeys::BackSpace.KeyName) goto LAB_1469e9ca5;
        bVar4 = false;
      }
      if (bVar7) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar16)
        ;
      }
      bVar7 = this->bControllerInputCaptured;
      if (bVar4) {
        OnMenuOpenChanged(this,false);
      }
      if (bVar7 == false) goto LAB_1469e9cd2;
    }
    FReply::FReply(__return_storage_ptr__,true);
  }
  return __return_storage_ptr__;
}

// OnKeyDownHandler @ 1469ea560

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SComboBox<UObject_*>::OnKeyDownHandler
          (SComboBox<UObject_*> *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FKeyEvent *param_2)

{
  FName FVar1;
  TReferenceControllerBase<1> *pTVar2;
  UObject *pUVar3;
  code *pcVar4;
  FReply *pFVar5;
  FSlateApplication *this_00;
  bool bVar6;
  undefined8 *local_18;
  int local_10;
  
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
    if (((this->ComboListView).Object == (SListView<UObject_*> *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      pFVar5 = (FReply *)(*pcVar4)();
      return pFVar5;
    }
    (**(code **)(((this->ComboListView).Object)->_padding_ + 0xd0))();
    if (0 < local_10) {
      pUVar3 = (UObject *)*local_18;
      if (pUVar3 != this->SelectedItem) {
        this_00 = FSlateApplication::Get();
        FSlateApplication::PlaySound(this_00,&this->SelectionChangeSound,0);
        this->SelectedItem = pUVar3;
        TDelegate<void___cdecl(UObject_*,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>::
        ExecuteIfBound(&this->OnSelectionChanged,pUVar3,OnKeyPress);
      }
      (**(code **)(this->_padding_ + 0x250))(this,0,1,0);
      FReply::FReply(__return_storage_ptr__,true);
      if (local_18 == (undefined8 *)0x0) {
        return __return_storage_ptr__;
      }
      FMemory::Free(local_18);
      return __return_storage_ptr__;
    }
    if (local_18 != (undefined8 *)0x0) {
      FMemory::Free(local_18);
    }
  }
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnKeyDownHandler @ 1469ea6b0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SComboBox<FName>::OnKeyDownHandler
          (SComboBox<FName> *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FKeyEvent *param_2)

{
  FName FVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  FReply *pFVar4;
  FSlateApplication *this_00;
  bool bVar5;
  FName *local_18;
  int local_10;
  
  FVar1 = (param_2->Key).KeyName;
  pTVar2 = (param_2->Key).KeyDetails.SharedReferenceCount.ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar5 = FVar1 == EKeys::Enter.KeyName;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (bVar5) {
    if (((this->ComboListView).Object == (SListView<FName> *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      pFVar4 = (FReply *)(*pcVar3)();
      return pFVar4;
    }
    (**(code **)(*(longlong *)&((this->ComboListView).Object)->field_0x588 + 0xd0))();
    if (0 < local_10) {
      FVar1 = *local_18;
      if (FVar1 != this->SelectedItem) {
        this_00 = FSlateApplication::Get();
        FSlateApplication::PlaySound(this_00,&this->SelectionChangeSound,0);
        this->SelectedItem = FVar1;
        TDelegate<void___cdecl(FName,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>::
        ExecuteIfBound(&this->OnSelectionChanged,FVar1,OnKeyPress);
      }
      (**(code **)(this->_padding_ + 0x250))(this,0,1,0);
      FReply::FReply(__return_storage_ptr__,true);
      if (local_18 == (FName *)0x0) {
        return __return_storage_ptr__;
      }
      FMemory::Free(local_18);
      return __return_storage_ptr__;
    }
    if (local_18 != (FName *)0x0) {
      FMemory::Free(local_18);
    }
  }
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnMenuOpenChanged @ 1469ebce0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SComboBox<UObject_*>::OnMenuOpenChanged(SComboBox<UObject_*> *this,bool param_1)

{
  UObject *pUVar1;
  SListView<UObject_*> *pSVar2;
  code *pcVar3;
  bool bVar4;
  FSlateApplication *this_00;
  UObject *local_res18;
  SComboBox<UObject_*> *local_res20;
  TOptional<UObject_*> local_28;
  code *local_18;
  SComboBox<UObject_*> **local_10;
  
  if (!param_1) {
    pUVar1 = this->SelectedItem;
    this->bControllerInputCaptured = false;
    if (pUVar1 != (UObject *)0x0) {
      if ((this->ComboListView).Object == (SListView<UObject_*> *)0x0) {
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
      pSVar2 = (this->ComboListView).Object;
      local_res18 = pUVar1;
      SListView<UObject_*>::Private_FindNextSelectableOrNavigable(pSVar2,&local_28,&local_res18);
      if (local_28.bIsSet != false) {
        SListView<UObject_*>::Private_SetSelection(pSVar2,local_28.TypedValue,OnNavigation);
      }
      if ((this->ComboListView).Object == (SListView<UObject_*> *)0x0) {
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
      pSVar2 = (this->ComboListView).Object;
      pSVar2->ItemToScrollIntoView = pUVar1;
      pSVar2->UserRequestingScrollIntoView = 0;
      STableViewBase::RequestLayoutRefresh((STableViewBase *)pSVar2);
    }
    this_00 = FSlateApplication::Get();
    local_10 = &local_res20;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`SComboBox<UObject_*>::OnMenuOpenChanged'::__l5::<lambda_1>,void,FSlateUser_&>
               ::Call;
    local_res20 = this;
    FSlateApplication::ForEachUser
              (this_00,(TFunctionRef<void___cdecl(FSlateUser_&)> *)&local_18,false);
  }
  return;
}

// OnMenuOpenChanged @ 1469ebe10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SComboBox<FName>::OnMenuOpenChanged(SComboBox<FName> *this,bool param_1)

{
  FName FVar1;
  SListView<FName> *this_00;
  code *pcVar2;
  bool bVar3;
  FSlateApplication *this_01;
  SComboBox<FName> *local_res18 [2];
  code *local_18;
  SComboBox<FName> **local_10;
  
  if (!param_1) {
    FVar1 = this->SelectedItem;
    this->bControllerInputCaptured = false;
    if (FVar1 != (FName)0x0) {
      if ((this->ComboListView).Object == (SListView<FName> *)0x0) {
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
      SListView<FName>::SetSelection((this->ComboListView).Object,FVar1,OnNavigation);
      if ((this->ComboListView).Object == (SListView<FName> *)0x0) {
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
      this_00 = (this->ComboListView).Object;
      *(FName *)&(this_00->ItemToScrollIntoView).ComparisonIndex = FVar1;
      this_00->UserRequestingScrollIntoView = 0;
      STableViewBase::RequestLayoutRefresh((STableViewBase *)this_00);
    }
    this_01 = FSlateApplication::Get();
    local_10 = local_res18;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`SComboBox<FName>::OnMenuOpenChanged'::__l5::<lambda_1>,void,FSlateUser_&>
               ::Call;
    local_res18[0] = this;
    FSlateApplication::ForEachUser
              (this_01,(TFunctionRef<void___cdecl(FSlateUser_&)> *)&local_18,false);
  }
  return;
}

// OnSelectionChanged_Internal @ 1469f0350

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SComboBox<UObject_*>::OnSelectionChanged_Internal
          (SComboBox<UObject_*> *this,UObject *param_1,Type param_2)

{
  FSlateApplication *this_00;
  
  if (param_2 != OnNavigation) {
    if (param_1 != this->SelectedItem) {
      this_00 = FSlateApplication::Get();
      FSlateApplication::PlaySound(this_00,&this->SelectionChangeSound,0);
      this->SelectedItem = param_1;
      TDelegate<void___cdecl(UObject_*,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>::
      ExecuteIfBound(&this->OnSelectionChanged,param_1,param_2);
    }
    (**(code **)(this->_padding_ + 0x250))(this,0,1,0);
  }
  return;
}

// OnSelectionChanged_Internal @ 1469f03e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SComboBox<FName>::OnSelectionChanged_Internal(SComboBox<FName> *this,FName param_1,Type param_2)

{
  FSlateApplication *this_00;
  
  if (param_2 != OnNavigation) {
    if (param_1 != this->SelectedItem) {
      this_00 = FSlateApplication::Get();
      FSlateApplication::PlaySound(this_00,&this->SelectionChangeSound,0);
      this->SelectedItem = param_1;
      TDelegate<void___cdecl(FName,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>::
      ExecuteIfBound(&this->OnSelectionChanged,param_1,param_2);
    }
    (**(code **)(this->_padding_ + 0x250))(this,0,1,0);
  }
  return;
}

// RefreshOptions @ 146a09140

void __thiscall SComboBox<FName>::RefreshOptions(SComboBox<FName> *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->ComboListView).Object == (SListView<FName> *)0x0) {
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
                    /* WARNING: Could not recover jumptable at 0x000146a09188. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(this->ComboListView).Object + 0x248))();
  return;
}

// SetSelectedItem @ 146a1a710

void __thiscall SComboBox<UObject_*>::SetSelectedItem(SComboBox<UObject_*> *this,UObject *param_1)

{
  SListView<UObject_*> *pSVar1;
  code *pcVar2;
  bool bVar3;
  UObject *local_res10 [3];
  TOptional<UObject_*> local_18;
  
  pSVar1 = (this->ComboListView).Object;
  if (param_1 == (UObject *)0x0) {
    if (pSVar1 == (SListView<UObject_*> *)0x0) {
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
    SListView<UObject_*>::ClearSelection((this->ComboListView).Object);
  }
  else {
    if (pSVar1 == (SListView<UObject_*> *)0x0) {
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
    pSVar1 = (this->ComboListView).Object;
    local_res10[0] = param_1;
    SListView<UObject_*>::Private_FindNextSelectableOrNavigable(pSVar1,&local_18,local_res10);
    if (local_18.bIsSet != false) {
      SListView<UObject_*>::Private_SetSelection(pSVar1,local_18.TypedValue,Direct);
      return;
    }
  }
  return;
}

// SetSelectedItem @ 146a1a7f0

void __thiscall SComboBox<FName>::SetSelectedItem(SComboBox<FName> *this,FName param_1)

{
  SListView<FName> *pSVar1;
  code *pcVar2;
  bool bVar3;
  
  pSVar1 = (this->ComboListView).Object;
  if (param_1 == (FName)0x0) {
    if (pSVar1 == (SListView<FName> *)0x0) {
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
    SListView<FName>::ClearSelection((this->ComboListView).Object);
    return;
  }
  if (pSVar1 == (SListView<FName> *)0x0) {
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
  SListView<FName>::SetSelection((this->ComboListView).Object,param_1,Direct);
  return;
}

// SupportsKeyboardFocus @ 146a1f600

bool __thiscall SComboBox<UObject_*>::SupportsKeyboardFocus(SComboBox<UObject_*> *this)

{
  return (bool)(char)this->_padding_;
}

// SupportsKeyboardFocus @ 146a1f610

bool __thiscall SComboBox<FName>::SupportsKeyboardFocus(SComboBox<FName> *this)

{
  return (bool)(char)this->_padding_;
}

