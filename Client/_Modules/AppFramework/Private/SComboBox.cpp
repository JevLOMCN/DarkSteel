// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 28

// ~SComboBox<TSharedPtr<enum_ESelectionMode::Type,1>_> @ 142f37680

void __thiscall
SComboBox<TSharedPtr<enum_ESelectionMode::Type,1>_>::
~SComboBox<TSharedPtr<enum_ESelectionMode::Type,1>_>(void *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x4c8));
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x4a0));
  if (*(void **)((longlong)this + 0x4a8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x4a8));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 0x4a0));
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x488));
  if (*(void **)((longlong)this + 0x490) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x490));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 0x488));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x480));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x470));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x460));
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x440));
  if (*(void **)((longlong)this + 0x448) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x448));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 0x440));
  SComboButton::~SComboButton(this);
  return;
}

// operator() @ 142f48980

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`SComboBox<TSharedPtr<enum_ESelectionMode::Type,1>_>::OnMenuOpenChanged'::__l5::<lambda_1>::
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

// Construct @ 142f5cc30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Removing unreachable block (ram,0x000142f5d351) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SComboBox<TSharedPtr<enum_ESelectionMode::Type,1>_>::Construct(void *this,FArguments *param_1)

{
  byte *pbVar1;
  TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<ESelectionMode::Type,1>_>,1> *pTVar2
  ;
  FComboBoxStyle *pFVar3;
  longlong *plVar4;
  TReferenceControllerBase<1> *pTVar5;
  SScrollBar *pSVar6;
  SWidget *pSVar7;
  Type *pTVar8;
  longlong lVar9;
  code *pcVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  TReferenceControllerBase<1> *pTVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  FArguments *pFVar17;
  bool bVar18;
  char cVar19;
  byte bVar20;
  FArguments *pFVar21;
  undefined8 *puVar22;
  TSharedRef<SWidget,1> *pTVar23;
  ulong64 uVar24;
  SListView<TSharedPtr<ESelectionMode::Type,1>_> *pSVar25;
  TSharedRef<SBox,1> *pTVar26;
  FArguments *pFVar27;
  FText *pFVar28;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> *pTVar29;
  EPopupMethod *pEVar30;
  FArguments *pFVar31;
  FSlateSound *pFVar32;
  SWidget *pSVar33;
  atomic<int> *paVar34;
  SWidget *local_res8;
  FArguments *local_res10;
  T0RequiredArgs local_res18 [8];
  FLLMScope local_res20 [2];
  EPopupMethod local_1528;
  char local_1527;
  SScrollBar *local_1520;
  TReferenceControllerBase<1> *pTStack_1518;
  FName local_1510;
  undefined4 uStack_1508;
  undefined4 uStack_1504;
  FLLMScope local_1500 [2];
  undefined1 local_14f8 [8];
  ForAnyElementType local_14f0;
  int local_14e8;
  SBox *local_14e0;
  TReferenceControllerBase<1> *pTStack_14d8;
  float local_14d0;
  undefined1 local_14cc;
  undefined1 local_14c8 [8];
  ForAnyElementType FStack_14c0;
  ulonglong local_14b8;
  SWidget *local_14b0;
  TReferenceControllerBase<1> *local_14a8;
  undefined1 local_1498 [16];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_1488;
  ForAnyElementType FStack_1480;
  ulonglong local_1478;
  FArguments *local_1470;
  FButtonStyle *local_1468;
  SBox *local_1460;
  FSharedReferencer<1> local_1458;
  undefined8 local_1450;
  undefined8 uStack_1448;
  TSharedPtr<SWidget,1> local_1440;
  undefined4 local_1430;
  undefined1 local_142c;
  TDelegateBase<FNotThreadSafeDelegateMode> local_1428;
  TObservableArray<TSharedPtr<ESelectionMode::Type,1>_> *local_1410;
  TReferenceControllerBase<1> *pTStack_1408;
  FMemScope local_1400;
  FName local_13f8;
  FMemScope local_13f0;
  FComboButtonStyle *local_13e8;
  FName local_13e0;
  FSharedReferencer<1> FStack_13d8;
  Type *local_13d0;
  TReferenceControllerBase<1> *local_13c8;
  TSharedPtr<ESelectionMode::Type,1> local_13c0;
  NamedSlotProperty<SComboButton::FArguments> local_13b0;
  TWeakPtr<SWidget,1> local_13a0;
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
  SWidget *local_1268;
  TReferenceControllerBase<1> *pTStack_1260;
  undefined8 local_1258;
  TReferenceControllerBase<1> *pTStack_1250;
  TSharedRef<SWidget,1> local_1248;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_1238;
  TSharedRef<SWidget,1> local_1220;
  undefined8 local_1210;
  TReferenceControllerBase<1> *pTStack_1208;
  TSharedRef<SWidget,1> local_1200;
  TSharedRef<SBox,1> local_11f0;
  TSharedRef<SWidget,1> local_11e0;
  TSharedRef<STextBlock,1> local_11d0;
  TSharedRef<SBox,1> local_11c0;
  FText local_11b0;
  TSharedRef<SWidget,1> local_11a0;
  TAttribute<FMargin> local_1190;
  FLinearColor_u_0 local_1160;
  undefined4 local_1150;
  undefined1 local_114c;
  TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy> local_1148;
  FReadAccessScope local_1130;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_1118;
  FArguments local_1100;
  FArguments local_dc8;
  undefined1 local_a88 [1248];
  FArguments local_5a8;
  undefined8 uStack_48;
  
  uStack_48 = 0x142f5cc4f;
  bVar13 = false;
  bVar12 = false;
  bVar11 = false;
  local_res8 = (SWidget *)((ulonglong)local_res8 & 0xffffffff00000000);
  if ((param_1->_ComboBoxStyle == (FComboBoxStyle *)0x0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("InArgs._ComboBoxStyle",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Input\\SComboBox.h"
                          ,0xc1,L""), bVar18)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  *(FTableRowStyle **)((longlong)this + 0x420) = param_1->_ItemStyle;
  pFVar3 = param_1->_ComboBoxStyle;
  *(FComboBoxStyle **)((longlong)this + 0x428) = pFVar3;
  uVar15 = *(undefined8 *)&pFVar3->MenuRowPadding;
  uVar16 = *(undefined8 *)&(pFVar3->MenuRowPadding).Right;
  *(undefined1 *)((longlong)this + 0x220) = 0;
  local_13e8 = &pFVar3->ComboButtonStyle;
  *(undefined8 *)((longlong)this + 0x430) = uVar15;
  *(undefined8 *)((longlong)this + 0x438) = uVar16;
  local_1468 = param_1->_ButtonStyle;
  if (local_1468 == (FButtonStyle *)0x0) {
    local_1468 = &(pFVar3->ComboButtonStyle).ButtonStyle;
  }
  pFVar32 = &(param_1->_PressedSoundOverride).TypedValue;
  if ((param_1->_PressedSoundOverride).bIsSet == false) {
    pFVar32 = &pFVar3->PressedSlateSound;
  }
  FSlateSound::operator=((FSlateSound *)((longlong)this + 0x3f0),pFVar32);
  pFVar32 = &(param_1->_SelectionChangeSoundOverride).TypedValue;
  if ((param_1->_SelectionChangeSoundOverride).bIsSet == false) {
    pFVar32 = (FSlateSound *)(*(longlong *)((longlong)this + 0x428) + 0x588);
  }
  FSlateSound::operator=((FSlateSound *)((longlong)this + 0x408),pFVar32);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::operator=
            ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)((longlong)this + 0x488),
             &param_1->_OnComboBoxOpening);
  TDelegate<void___cdecl(TSharedPtr<enum_ESelectionMode::Type,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
  ::operator=((void *)((longlong)this + 0x440),&param_1->_OnSelectionChanged);
  if (&param_1->_OnGenerateWidget !=
      (TDelegate<TSharedRef<SWidget,1>___cdecl(TSharedPtr<ESelectionMode::Type,1>),FDefaultDelegateUserPolicy>
       *)((longlong)this + 0x4a0)) {
    local_14f8 = (undefined1  [8])0x0;
    local_14f0.Data = (FScriptContainerElement *)0x0;
    local_14e8 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->_OnGenerateWidget
               ,&local_1130);
    if ((*(int *)&(param_1->_OnGenerateWidget).field_0x10 != 0) &&
       (plVar4 = *(longlong **)&(param_1->_OnGenerateWidget).field_0x8, plVar4 != (longlong *)0x0))
    {
      (**(code **)(*plVar4 + 0x50))(plVar4,local_14f8);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_1130);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x4a0),
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
  *(bool *)((longlong)this + 0x4b8) = param_1->_EnableGamepadNavigationMode;
  *(undefined1 *)((longlong)this + 0x4b9) = 0;
  pTVar5 = (param_1->_CustomScrollbar).SharedReferenceCount.ReferenceController;
  pSVar6 = (param_1->_CustomScrollbar).Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1210 = *(undefined8 *)((longlong)this + 0x478);
  pTStack_1208 = *(TReferenceControllerBase<1> **)((longlong)this + 0x480);
  *(SScrollBar **)((longlong)this + 0x478) = pSVar6;
  *(TReferenceControllerBase<1> **)((longlong)this + 0x480) = pTVar5;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1208);
  local_1470 = SBox::FArguments::FArguments(&local_dc8);
  local_14d0 = param_1->_MaxListHeight;
  local_14cc = 1;
  local_14b8 = 0;
  local_14c8 = (undefined1  [8])0x0;
  FStack_14c0.Data = (FScriptContainerElement *)0x0;
  (local_1470->_MaxDesiredHeight).Value.Size = local_14d0;
  (local_1470->_MaxDesiredHeight).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(local_1470->_MaxDesiredHeight).Getter,
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
  pFVar21 = SListView<TSharedPtr<enum_ESelectionMode::Type,1>_>::FArguments::FArguments(local_a88);
  pTVar5 = (param_1->_OptionsSource_SharedObservableArray).SharedReferenceCount.ReferenceController;
  local_1410 = (TObservableArray<TSharedPtr<ESelectionMode::Type,1>_> *)
               param_1->_OptionsSource_ArrayPointer;
  local_1520 = (SScrollBar *)param_1->_OptionsSource_ObservableArrayPointer;
  local_1510 = (FName)(param_1->_OptionsSource_SharedObservableArray).Object;
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
    paVar34 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar34 = &pTVar5->SharedReferenceCount;
    LOCK();
    *paVar34 = (atomic<int>)((int)*paVar34 + 1);
    UNLOCK();
  }
  pFVar21->_ListItemsSource_ArrayPointer =
       (TArray<TSharedPtr<ESelectionMode::Type,1>,TSizedDefaultAllocator<32>_> *)0x0;
  pFVar21->_ListItemsSource_ObservableArrayPointer =
       (TObservableArray<TSharedPtr<ESelectionMode::Type,1>_> *)0x0;
  pTVar2 = &pFVar21->_ListItemsSource_SharedObservableArray;
  local_13e0.ComparisonIndex.Value = 0;
  local_13e0.Number = 0;
  FStack_13d8.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (pTVar2 != (TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<ESelectionMode::Type,1>_>,1>
                 *)&local_13e0) {
    pTVar2->Object = (TObservableArray<TSharedPtr<ESelectionMode::Type,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(pFVar21->_ListItemsSource_SharedObservableArray).SharedReferenceCount,&FStack_13d8)
    ;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_13d8.ReferenceController);
  pFVar21->_ListItemsSource_ArrayPointer = &local_1410->Array;
  pFVar21->_ListItemsSource_ObservableArrayPointer =
       (TObservableArray<TSharedPtr<ESelectionMode::Type,1>_> *)local_1520;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar34 = (atomic<int>)((int)*paVar34 + 1);
    UNLOCK();
  }
  local_1410 = pTVar2->Object;
  pTStack_1408 = (pFVar21->_ListItemsSource_SharedObservableArray).SharedReferenceCount.
                 ReferenceController;
  pTVar2->Object = (TObservableArray<TSharedPtr<ESelectionMode::Type,1>_> *)local_1510;
  (pFVar21->_ListItemsSource_SharedObservableArray).SharedReferenceCount.ReferenceController =
       pTVar5;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1408);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar21->_OnGenerateRow,
             (FWriteAccessScope *)&local_1318);
  local_1300 = &(pFVar21->_OnGenerateRow).field_0x8;
  puVar22 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_1300);
  pSVar33 = local_res8;
  if (puVar22 != (undefined8 *)0x0) {
    uStack_1504 = uStack_1448._4_4_;
    local_1510 = (FName)GenerateMenuItemRow;
    uStack_1508 = 0;
    pTVar23 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)((longlong)this + 8),&local_1220);
    pSVar33 = (SWidget *)(pTVar23->SharedReferenceCount).ReferenceController;
    pSVar7 = pTVar23->Object;
    if (pSVar33 != (SWidget *)0x0) {
      LOCK();
      *(atomic<int> *)&pSVar33->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar33->_padding_ + 1);
      UNLOCK();
      LOCK();
      *(atomic<int> *)&pSVar33->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar33->_padding_ + 1);
      UNLOCK();
    }
    *puVar22 = &
               ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VITableRow___00__V__TSharedPtr_W4Type_ESelectionMode___00__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar24 = FDelegateHandle::GenerateNewID();
    puVar22[2] = uVar24;
    *puVar22 = &
               ___7__TBaseSPMethodDelegateInstance__0A_V__SComboBox_V__TSharedPtr_W4Type_ESelectionMode___00_____00__A6A_AV__TSharedRef_VITableRow___00__V__TSharedPtr_W4Type_ESelectionMode___00__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar22[3] = pSVar7;
    puVar22[4] = pSVar33;
    if (pSVar33 != (SWidget *)0x0) {
      LOCK();
      ((atomic<int> *)&pSVar33->_padding_)[1] =
           (atomic<int>)((int)((atomic<int> *)&pSVar33->_padding_)[1] + 1);
      UNLOCK();
    }
    bVar13 = true;
    bVar12 = true;
    bVar11 = true;
    *(FName *)(puVar22 + 5) = local_1510;
    puVar22[6] = CONCAT44(uStack_1504,uStack_1508);
  }
  if (bVar12) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar33);
  }
  if (bVar13) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar33);
  }
  if (bVar11) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1220.SharedReferenceCount.ReferenceController);
  }
  bVar13 = false;
  bVar12 = false;
  bVar11 = false;
  if (local_1318.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1318.Accessor,&local_1318);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar21->_OnSelectionChanged
             ,(FWriteAccessScope *)&local_12f8);
  local_12e0 = &(pFVar21->_OnSelectionChanged).field_0x8;
  puVar22 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_12e0);
  pSVar33 = local_res8;
  if (puVar22 != (undefined8 *)0x0) {
    local_1520 = (SScrollBar *)OnSelectionChanged_Internal;
    pTStack_1518 = (TReferenceControllerBase<1> *)((ulonglong)uStack_1448 & 0xffffffff00000000);
    pTVar23 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)((longlong)this + 8),&local_11a0);
    pSVar33 = (SWidget *)(pTVar23->SharedReferenceCount).ReferenceController;
    local_1510 = (FName)pTVar23->Object;
    if (pSVar33 != (SWidget *)0x0) {
      LOCK();
      *(atomic<int> *)&pSVar33->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar33->_padding_ + 1);
      UNLOCK();
      LOCK();
      *(atomic<int> *)&pSVar33->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar33->_padding_ + 1);
      UNLOCK();
    }
    bVar11 = true;
    bVar13 = true;
    bVar12 = true;
    *puVar22 = &
               ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_W4Type_ESelectionMode___00__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar24 = FDelegateHandle::GenerateNewID();
    puVar22[2] = uVar24;
    *puVar22 = &
               ___7__TBaseSPMethodDelegateInstance__0A_V__SComboBox_V__TSharedPtr_W4Type_ESelectionMode___00_____00__A6AXV__TSharedPtr_W4Type_ESelectionMode___00__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FName *)(puVar22 + 3) = local_1510;
    puVar22[4] = pSVar33;
    if (pSVar33 != (SWidget *)0x0) {
      LOCK();
      ((atomic<int> *)&pSVar33->_padding_)[1] =
           (atomic<int>)((int)((atomic<int> *)&pSVar33->_padding_)[1] + 1);
      UNLOCK();
    }
    puVar22[5] = local_1520;
    puVar22[6] = pTStack_1518;
  }
  if (bVar11) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar33);
  }
  if (bVar12) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar33);
  }
  if (bVar13) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_11a0.SharedReferenceCount.ReferenceController);
  }
  bVar12 = false;
  bVar11 = false;
  if (local_12f8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_12f8.Accessor,&local_12f8);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar21->_OnKeyDownHandler,
             (FWriteAccessScope *)&local_12d8);
  local_12c0 = &(pFVar21->_OnKeyDownHandler).field_0x8;
  puVar22 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_12c0);
  pSVar33 = local_res8;
  if (puVar22 != (undefined8 *)0x0) {
    local_1520 = (SScrollBar *)OnKeyDownHandler;
    pTStack_1518 = (TReferenceControllerBase<1> *)((ulonglong)uStack_1448 & 0xffffffff00000000);
    pTVar23 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)((longlong)this + 8),&local_1248);
    pSVar33 = (SWidget *)(pTVar23->SharedReferenceCount).ReferenceController;
    local_1510 = (FName)pTVar23->Object;
    if (pSVar33 != (SWidget *)0x0) {
      LOCK();
      *(atomic<int> *)&pSVar33->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar33->_padding_ + 1);
      UNLOCK();
      LOCK();
      *(atomic<int> *)&pSVar33->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar33->_padding_ + 1);
      UNLOCK();
    }
    bVar11 = true;
    bVar12 = true;
    *puVar22 = &
               ___7__TCommonDelegateInstanceState___A6A_AVFReply__AEBUFGeometry__AEBUFKeyEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar24 = FDelegateHandle::GenerateNewID();
    puVar22[2] = uVar24;
    *puVar22 = &
               ___7__TBaseSPMethodDelegateInstance__0A_V__SComboBox_V__TSharedPtr_W4Type_ESelectionMode___00_____00__A6A_AVFReply__AEBUFGeometry__AEBUFKeyEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FName *)(puVar22 + 3) = local_1510;
    puVar22[4] = pSVar33;
    if (pSVar33 != (SWidget *)0x0) {
      LOCK();
      ((atomic<int> *)&pSVar33->_padding_)[1] =
           (atomic<int>)((int)((atomic<int> *)&pSVar33->_padding_)[1] + 1);
      UNLOCK();
    }
    puVar22[5] = local_1520;
    puVar22[6] = pTStack_1518;
  }
  if (bVar11) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar33);
  }
  if (bVar12) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1248.SharedReferenceCount.ReferenceController);
  }
  bVar13 = false;
  bVar12 = false;
  bVar11 = false;
  if (local_12d8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_12d8.Accessor,&local_12d8);
  }
  local_142c = 1;
  local_1430 = 1;
  local_1428._16_8_ = 0;
  local_1428._0_8_ = 0;
  local_1428._8_8_ = 0;
  (pFVar21->_SelectionMode).Value = Single;
  (pFVar21->_SelectionMode).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar21->_SelectionMode).Getter,
             &local_1428);
  TAttribute<enum_ESelectionMode::Type>::~TAttribute<enum_ESelectionMode::Type>(&local_1430);
  pFVar21->_ScrollBarStyle = param_1->_ScrollBarStyle;
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
  local_1520 = (pFVar21->_ExternalScrollbar).Object;
  pTStack_1518 = (pFVar21->_ExternalScrollbar).SharedReferenceCount.ReferenceController;
  (pFVar21->_ExternalScrollbar).Object = pSVar6;
  (pFVar21->_ExternalScrollbar).SharedReferenceCount.ReferenceController = pTVar5;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1518);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  FLLMScope::FLLMScope(local_res20,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1510 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1400,&local_1510,true);
  TSlateDecl<SListView<TSharedPtr<enum_ESelectionMode::Type,1>_>,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SListView<TSharedPtr<enum_ESelectionMode::Type,1>_>,RequiredArgs::T0RequiredArgs>
            (&local_14b0,"SComboListType",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Input\\SComboBox.h"
             ,0xda,(T0RequiredArgs *)&local_res8);
  FMemScope::~FMemScope(&local_1400);
  FLLMScope::~FLLMScope(local_res20);
  if (local_14a8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_14a8->SharedReferenceCount = (atomic<int>)((int)local_14a8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1258 = *(undefined8 *)((longlong)this + 0x468);
  pTStack_1250 = *(TReferenceControllerBase<1> **)((longlong)this + 0x470);
  *(SWidget **)((longlong)this + 0x468) = local_14b0;
  *(TReferenceControllerBase<1> **)((longlong)this + 0x470) = local_14a8;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1250);
  pSVar25 = TSharedPtr<SListView<TSharedPtr<enum_ESelectionMode::Type,1>_>,1>::operator->
                      (&local_14b0);
  SWidget::SWidgetConstruct((SWidget *)pSVar25,(FSlateBaseNamedArgs *)pFVar21);
  pSVar33 = local_14b0;
  SListView<TSharedPtr<enum_ESelectionMode::Type,1>_>::Construct(local_14b0,pFVar21);
  pSVar25 = TSharedPtr<SListView<TSharedPtr<enum_ESelectionMode::Type,1>_>,1>::operator->
                      (&local_14b0);
  if ((pSVar25->_padding_ & 0x10) == 0) {
    cVar19 = (**(code **)(pSVar25->_padding_ + 0x228))(pSVar25);
    bVar20 = 0;
    if (cVar19 == '\0') goto LAB_142f5d532;
  }
  bVar20 = 0x20;
LAB_142f5d532:
  *(byte *)&pSVar25->_padding_ = (byte)pSVar25->_padding_ & 0xdf;
  *(byte *)&pSVar25->_padding_ = (byte)pSVar25->_padding_ | bVar20;
  pSVar25 = TSharedPtr<SListView<TSharedPtr<enum_ESelectionMode::Type,1>_>,1>::operator->
                      (&local_14b0);
  pbVar1 = (byte *)((longlong)&pSVar25->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((local_14b0 == (SWidget *)0x0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar18)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pTVar5 = local_14a8;
  local_14a8 = (TReferenceControllerBase<1> *)0x0;
  local_14b0 = (SWidget *)0x0;
  if ((pSVar33 == (SWidget *)0x0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar18)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pFVar17 = local_1470;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1268 = (local_1470->_Content).Widget.Object;
  pTStack_1260 = (local_1470->_Content).Widget.SharedReferenceCount.ReferenceController;
  (local_1470->_Content).Widget.Object = pSVar33;
  (local_1470->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar5;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1260);
  FLLMScope::FLLMScope(local_1500,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_13f8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_13f0,&local_13f8,true);
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
            (&local_1238,"SBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Input\\SComboBox.h"
             ,0xd7,(T0RequiredArgs *)&local_res10);
  FMemScope::~FMemScope(&local_13f0);
  FLLMScope::~FLLMScope(local_1500);
  pTVar26 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1238,&local_11c0,pFVar17);
  local_1458.ReferenceController = (pTVar26->SharedReferenceCount).ReferenceController;
  local_1460 = pTVar26->Object;
  if (local_1458.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1458.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_1458.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((SBox **)((longlong)this + 0x4c0) != &local_1460) {
    *(SBox **)((longlong)this + 0x4c0) = local_1460;
    local_1460 = (SBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)this + 0x4c8),&local_1458);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1458.ReferenceController);
  TSharedRef<SBox,1>::~TSharedRef<SBox,1>(&local_11c0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1238._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_14a8);
  SListView<TSharedPtr<enum_ESelectionMode::Type,1>_>::FArguments::~FArguments(local_a88);
  SBox::FArguments::~FArguments(&local_dc8);
  local_1440.Object = (param_1->_Content).Widget.Object;
  local_1440.SharedReferenceCount.ReferenceController =
       (param_1->_Content).Widget.SharedReferenceCount.ReferenceController;
  if (local_1440.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1440.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1440.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((param_1->_Content).Widget.Object == SNullWidget::NullWidget.Object) {
    pFVar27 = STextBlock::FArguments::FArguments(&local_5a8);
    pFVar28 = FText::AsLocalizable_Advanced_LocText
                        (&local_11b0,L"SComboBox",L"ContentWarning",L"No Content Provided");
    FText::FText(&local_1298.Value,pFVar28);
    local_1298.bIsSet = true;
    local_1298.Getter._16_8_ = 0;
    local_1298.Getter._0_8_ = 0;
    local_1298.Getter._8_8_ = 0;
    pFVar27 = STextBlock::FArguments::Text(pFVar27,&local_1298);
    local_1338 = 0;
    local_1334 = 1;
    local_1320 = 0;
    local_1348 = FLinearColor::Red.field0_0x0;
    local_1330 = 0;
    uStack_1328 = 0;
    pFVar27 = STextBlock::FArguments::ColorAndOpacity
                        (pFVar27,(TAttribute<FSlateColor> *)&local_1348._s_0);
    pTVar29 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                        (&local_1118,"STextBlock",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Input\\SComboBox.h"
                         ,0xe9,local_res18);
    pTVar29 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::Expose<SWidget>
                        (pTVar29,&local_1440);
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=(pTVar29,&local_11d0,pFVar27);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_11d0.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1118._Widget.SharedReferenceCount.ReferenceController);
    if (local_11b0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_11b0.TextData.Reference + 0x10))();
    }
    STextBlock::FArguments::~FArguments(&local_5a8);
  }
  local_13b0.OwnerDeclaration = SComboButton::FArguments::FArguments(&local_1100);
  (local_13b0.OwnerDeclaration)->_ComboButtonStyle = local_13e8;
  (local_13b0.OwnerDeclaration)->_ButtonStyle = local_1468;
  local_1527 = (param_1->_Method).bIsSet;
  if ((bool)local_1527 != false) {
    local_1528 = (param_1->_Method).TypedValue;
  }
  if ((TOptional<EPopupMethod> *)&local_1528 != &(local_13b0.OwnerDeclaration)->_Method) {
    if ((bool)local_1527 == false) {
      if (((local_13b0.OwnerDeclaration)->_Method).bIsSet != false) {
        ((local_13b0.OwnerDeclaration)->_Method).bIsSet = false;
      }
    }
    else {
      pEVar30 = TOptional<enum_EPopupMethod>::GetValue(&local_1528);
      ((local_13b0.OwnerDeclaration)->_Method).TypedValue = *pEVar30;
      ((local_13b0.OwnerDeclaration)->_Method).bIsSet = true;
    }
  }
  local_13b0.SlotContent = &(local_13b0.OwnerDeclaration)->_ButtonContent;
  pTVar23 = TSharedPtr<SWidget,1>::ToSharedRef(&local_1440,&local_11e0);
  pFVar31 = NamedSlotProperty<SComboButton::FArguments>::operator[](&local_13b0,pTVar23);
  pTVar26 = TSharedPtr<SBox,1>::ToSharedRef
                      ((TSharedPtr<SBox,1> *)((longlong)this + 0x4c0),&local_11f0);
  pTVar5 = (pTVar26->SharedReferenceCount).ReferenceController;
  local_14e0 = pTVar26->Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar14 = (pFVar31->_MenuContent).Widget.SharedReferenceCount.ReferenceController;
  (pFVar31->_MenuContent).Widget.Object = (SWidget *)local_14e0;
  (pFVar31->_MenuContent).Widget.SharedReferenceCount.ReferenceController = pTVar5;
  pTStack_14d8 = pTVar5;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
  pFVar31->_HasDownArrow = param_1->_HasDownArrow;
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
  pFVar31 = SComboButton::FArguments::ContentPadding(pFVar31,&local_1190);
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
  pFVar31 = SComboButton::FArguments::ForegroundColor
                      (pFVar31,(TAttribute<FSlateColor> *)&local_1160._s_0);
  local_res10 = pFVar31;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar31->_OnMenuOpenChanged,
             (FWriteAccessScope *)&local_12b8);
  local_12a0 = &(pFVar31->_OnMenuOpenChanged).field_0x8;
  puVar22 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_12a0);
  pSVar33 = local_res8;
  if (puVar22 != (undefined8 *)0x0) {
    local_14e0 = (SBox *)OnMenuOpenChanged;
    pTStack_14d8 = (TReferenceControllerBase<1> *)((ulonglong)uStack_1448._4_4_ << 0x20);
    pTVar23 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)((longlong)this + 8),&local_1200);
    pSVar33 = (SWidget *)(pTVar23->SharedReferenceCount).ReferenceController;
    local_res8 = pTVar23->Object;
    if (pSVar33 != (SWidget *)0x0) {
      LOCK();
      *(atomic<int> *)&pSVar33->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar33->_padding_ + 1);
      UNLOCK();
      LOCK();
      *(atomic<int> *)&pSVar33->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar33->_padding_ + 1);
      UNLOCK();
    }
    bVar13 = true;
    bVar12 = true;
    bVar11 = true;
    *puVar22 = &___7__TCommonDelegateInstanceState___A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar24 = FDelegateHandle::GenerateNewID();
    puVar22[2] = uVar24;
    *puVar22 = &
               ___7__TBaseSPMethodDelegateInstance__0A_V__SComboBox_V__TSharedPtr_W4Type_ESelectionMode___00_____00__A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar22[3] = local_res8;
    puVar22[4] = pSVar33;
    if (pSVar33 != (SWidget *)0x0) {
      LOCK();
      ((atomic<int> *)&pSVar33->_padding_)[1] =
           (atomic<int>)((int)((atomic<int> *)&pSVar33->_padding_)[1] + 1);
      UNLOCK();
    }
    puVar22[5] = local_14e0;
    puVar22[6] = pTStack_14d8;
  }
  if (bVar11) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar33);
  }
  if (bVar12) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar33);
  }
  if (bVar13) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1200.SharedReferenceCount.ReferenceController);
  }
  if (local_12b8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_12b8.Accessor,&local_12b8);
  }
  local_res10->_IsFocusable = param_1->_IsFocusable;
  local_res10->_CollapseMenuOnParentFocus = param_1->_CollapseMenuOnParentFocus;
  SComboButton::Construct(this,local_res10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  TSharedRef<SBox,1>::~TSharedRef<SBox,1>(&local_11f0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_11e0.SharedReferenceCount.ReferenceController);
  SComboButton::FArguments::~FArguments(&local_1100);
  local_13a0.Object = *(SWidget **)((longlong)this + 0x468);
  local_13a0.WeakReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)((longlong)this + 0x470);
  if (local_13a0.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_13a0.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_13a0.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  SComboButton::SetMenuContentWidgetToFocus(this,&local_13a0);
  pTVar5 = (param_1->_InitiallySelectedItem).SharedReferenceCount.ReferenceController;
  pTVar8 = (param_1->_InitiallySelectedItem).Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1450 = *(undefined8 *)((longlong)this + 0x458);
  uStack_1448 = *(TReferenceControllerBase<1> **)((longlong)this + 0x460);
  *(Type **)((longlong)this + 0x458) = pTVar8;
  *(TReferenceControllerBase<1> **)((longlong)this + 0x460) = pTVar5;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(uStack_1448);
  pTVar8 = *(Type **)((longlong)this + 0x458);
  if (pTVar8 != (Type *)0x0) {
    pTVar5 = *(TReferenceControllerBase<1> **)((longlong)this + 0x460);
    if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
      paVar34 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar34 = &pTVar5->SharedReferenceCount;
      LOCK();
      *paVar34 = (atomic<int>)((int)*paVar34 + 1);
      UNLOCK();
    }
    pSVar25 = TSharedPtr<SListView<TSharedPtr<enum_ESelectionMode::Type,1>_>,1>::operator->
                        ((void *)((longlong)this + 0x468));
    lVar9 = pSVar25->_padding_;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar34 = (atomic<int>)((int)*paVar34 + 1);
      UNLOCK();
    }
    local_13d0 = pTVar8;
    local_13c8 = pTVar5;
    (**(code **)(lVar9 + 0x28))(&pSVar25->_padding_,&local_13d0,1,0);
    pSVar25 = TSharedPtr<SListView<TSharedPtr<enum_ESelectionMode::Type,1>_>,1>::operator->
                        ((void *)((longlong)this + 0x468));
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar34 = (atomic<int>)((int)*paVar34 + 1);
      UNLOCK();
    }
    local_13c0.Object = pTVar8;
    local_13c0.SharedReferenceCount.ReferenceController = pTVar5;
    SListView<TSharedPtr<enum_ESelectionMode::Type,1>_>::RequestScrollIntoView
              (pSVar25,&local_13c0,0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  }
  pSVar25 = TSharedPtr<SListView<TSharedPtr<enum_ESelectionMode::Type,1>_>,1>::operator->
                      ((void *)((longlong)this + 0x468));
  local_1498._0_8_ = FStyleDefaults::GetNoBrush();
  local_1498[8] = true;
  local_1478 = 0;
  local_1488.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_1480.Data = (FScriptContainerElement *)0x0;
  STableViewBase::SetBackgroundBrush
            ((STableViewBase *)pSVar25,(TAttribute<FSlateBrush_const_*> *)local_1498);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_1488,(FWriteAccessScope *)&local_1390);
  if (((int)local_1478 != 0) && (FStack_1480.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1480.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1480,0,0,0x10);
    local_1478 = local_1478 & 0xffffffff00000000;
  }
  if (local_1390.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1390.Accessor,&local_1390);
  }
  if (FStack_1480.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1480.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_1488.AccessDetector);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1440.SharedReferenceCount.ReferenceController);
  return;
}

// CreateAccessibleWidget @ 142fa2bb0

TSharedRef<FSlateAccessibleWidget,1> * __thiscall
SComboBox<TSharedPtr<enum_ESelectionMode::Type,1>_>::CreateAccessibleWidget
          (void *this,TSharedRef<FSlateAccessibleWidget,1> *__return_storage_ptr__)

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
                       ((TSharedFromThis<SWidget,1> *)((longlong)this + 8),&local_18);
    TVar8.Object = (FSlateAccessibleWidget *)(pTVar5->SharedReferenceCount).ReferenceController;
    local_28.Object = pTVar5->Object;
    local_28.WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)TVar8.Object;
    if (TVar8.Object == (FSlateAccessibleWidget *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
      FSlateAccessibleWidget::FSlateAccessibleWidget(this_00,&local_28,ComboBox);
      this_00->_padding_ =
           (longlong)
           &SComboBox<TSharedPtr<ESelectionMode::Type,1>_>::FSlateAccessibleComboBox::
            _vftable__for__FSlateAccessibleWidget__;
      this_00[1]._padding_ =
           (longlong)
           &SComboBox<TSharedPtr<ESelectionMode::Type,1>_>::FSlateAccessibleComboBox::
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
           &SComboBox<TSharedPtr<ESelectionMode::Type,1>_>::FSlateAccessibleComboBox::
            _vftable__for__FSlateAccessibleWidget__;
      this_00[1]._padding_ =
           (longlong)
           &SComboBox<TSharedPtr<ESelectionMode::Type,1>_>::FSlateAccessibleComboBox::
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

// GenerateMenuItemRow @ 142fcaf20

TSharedRef<ITableRow,1> * __thiscall
SComboBox<TSharedPtr<enum_ESelectionMode::Type,1>_>::GenerateMenuItemRow
          (void *this,TSharedRef<ITableRow,1> *__return_storage_ptr__,
          TSharedPtr<ESelectionMode::Type,1> *param_1,TSharedRef<STableViewBase,1> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  bool bVar3;
  char cVar4;
  FArguments *pFVar5;
  TSlateDecl<SComboRow<TSharedPtr<ESelectionMode::Type,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
  *pTVar6;
  TSharedRef<SComboRow<TSharedPtr<ESelectionMode::Type,1>_>,1> *pTVar7;
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
  TSlateDecl<SComboRow<TSharedPtr<ESelectionMode::Type,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
  local_818;
  TSharedRef<SComboRow<TSharedPtr<ESelectionMode::Type,1>_>,1> local_800;
  TSlateDecl<SComboRow<TSharedPtr<ESelectionMode::Type,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
  local_7f0;
  FSlateBaseNamedArgs local_7d8;
  TReferenceControllerBase<1> *local_5d0;
  undefined1 local_5b0 [24];
  FArguments local_598;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x4a0),
             (FReadAccessScope *)&local_858);
  if (((*(int *)((longlong)this + 0x4b0) == 0) ||
      (*(longlong **)((longlong)this + 0x4a8) == (longlong *)0x0)) ||
     (cVar4 = (**(code **)(**(longlong **)((longlong)this + 0x4a8) + 0x38))(), cVar4 == '\0')) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_858);
  pFVar5 = SComboRow<TSharedPtr<enum_ESelectionMode::Type,1>_>::FArguments::FArguments(&local_7d8);
  if (bVar3) {
    pFVar5->_Style = *(FTableRowStyle **)((longlong)this + 0x420);
    local_8a8.TextData.Reference = *(ITextData **)((longlong)this + 0x430);
    local_8a8._8_8_ = *(undefined8 *)((longlong)this + 0x438);
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
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x4a0),
               (FReadAccessScope *)&local_858);
    if (*(int *)((longlong)this + 0x4b0) != 0) {
      plVar11 = *(longlong **)((longlong)this + 0x4a8);
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
    pTVar6 = MakeTDecl<SComboRow<TSharedPtr<enum_ESelectionMode::Type,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
                       (&local_818,"SComboRow<OptionType>",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Input\\SComboBox.h"
                        ,0x22d,&local_res8);
    pTVar7 = TSlateDecl<SComboRow<TSharedPtr<enum_ESelectionMode::Type,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
             ::operator<<=(pTVar6,(TSharedRef<SComboRow<TSharedPtr<ESelectionMode::Type,1>_>,1> *)
                                  &local_830,pFVar5);
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
    pTVar6 = MakeTDecl<SComboRow<TSharedPtr<enum_ESelectionMode::Type,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
                       (&local_7f0,"SComboRow<OptionType>",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Input\\SComboBox.h"
                        ,0x236,&local_840);
    pTVar7 = TSlateDecl<SComboRow<TSharedPtr<enum_ESelectionMode::Type,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
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
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_5d0);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs(&local_7d8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// GetDefaultAccessibleText @ 142fd21d0

TOptional<FText> * __thiscall
SComboBox<TSharedPtr<enum_ESelectionMode::Type,1>_>::GetDefaultAccessibleText
          (void *this,TOptional<FText> *__return_storage_ptr__,EAccessibleType param_1)

{
  code *pcVar1;
  bool bVar2;
  FText *pFVar3;
  TOptional<FText> *pTVar4;
  FText local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_struct_TOptional<FText>___cdecl_SComboBox<TSharedPtr<ESelectionMode::Type,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_struct_TOptional<FText>___cdecl_SComboBox<TSharedPtr<ESelectionMode::Type,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_struct_TOptional<FText>___cdecl_SComboBox<TSharedPtr<ESelectionMode::Type,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FString::FString(&`public:_virtual_struct_TOptional<FText>___cdecl_SComboBox<TSharedPtr<ESelectionMode::Type,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
                          ::__l2::Name,L"Combo Box");
      atexit(`SComboBox<TSharedPtr<enum_ESelectionMode::Type,1>_>::GetDefaultAccessibleText'::__l2::
             _dynamic_atexit_destructor_for__Name__);
      _Init_thread_footer(&`public:_virtual_struct_TOptional<FText>___cdecl_SComboBox<TSharedPtr<ESelectionMode::Type,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pFVar3 = FText::FromString(&local_18,
                             &`public:_virtual_struct_TOptional<FText>___cdecl_SComboBox<TSharedPtr<ESelectionMode::Type,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
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

// IsInteractable @ 142fe2df0

bool __thiscall SComboBox<TSharedPtr<enum_ESelectionMode::Type,1>_>::IsInteractable(void *this)

{
  return (bool)*(undefined1 *)((longlong)this + 0x3a);
}

// OnButtonClicked @ 142fee2d0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SComboBox<TSharedPtr<enum_ESelectionMode::Type,1>_>::OnButtonClicked
          (void *this,FReply *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FReply *pFVar3;
  FSlateApplication *this_00;
  longlong *plVar4;
  TSharedPtr<ESelectionMode::Type,1> *local_48;
  int local_40;
  TSharedPtr<ESelectionMode::Type,1> local_38;
  FReadAccessScope local_28;
  
  bVar2 = SMenuAnchor::IsOpen(this);
  if (bVar2) {
    if (*(longlong *)((longlong)this + 0x468) == 0) {
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
    plVar4 = (longlong *)(*(longlong *)((longlong)this + 0x468) + 0x588);
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
    DestructItems<TSharedPtr<enum_ESelectionMode::Type,1>,int>(local_48,local_40);
    if (local_48 != (TSharedPtr<ESelectionMode::Type,1> *)0x0) {
      FMemory::Free(local_48);
    }
  }
  else {
    this_00 = FSlateApplication::Get();
    FSlateApplication::PlaySound(this_00,(FSlateSound *)((longlong)this + 0x3f0),0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x488),
               &local_28);
    if ((*(int *)((longlong)this + 0x498) != 0) &&
       (*(longlong **)((longlong)this + 0x490) != (longlong *)0x0)) {
      (**(code **)(**(longlong **)((longlong)this + 0x490) + 0x68))();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
  }
  SComboButton::OnButtonClicked(this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// OnKeyDown @ 142ff1e80

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SComboBox<TSharedPtr<enum_ESelectionMode::Type,1>_>::OnKeyDown
          (void *this,FReply *__return_storage_ptr__,FGeometry *param_1,FKeyEvent *param_2)

{
  FName FVar1;
  longlong lVar2;
  IItemsSource<TSharedPtr<ESelectionMode::Type,1>_> *pIVar3;
  bool bVar4;
  char cVar5;
  char cVar6;
  FSlateApplication *pFVar7;
  SListView<TSharedPtr<ESelectionMode::Type,1>_> *pSVar8;
  TSharedRef<SWidget,1> *pTVar9;
  atomic<int> *paVar10;
  TSharedPtr<ESelectionMode::Type,1> *pTVar11;
  TReferenceControllerBase<1> *pTVar12;
  int iVar13;
  SWidget *pSVar14;
  bool bVar15;
  uint uStackX_c;
  TSharedRef<SWidget,1> local_108;
  TSharedPtr<ESelectionMode::Type,1> *local_f8;
  int local_f0;
  FReply local_e8;
  
  bVar15 = false;
  cVar5 = (**(code **)(*(longlong *)this + 0x1b0))();
  if (cVar5 == '\0') goto LAB_142ff2067;
  pFVar7 = FSlateApplication::Get();
  cVar5 = (**(code **)(*(longlong *)pFVar7 + 0xb0))(pFVar7,param_2);
  pFVar7 = FSlateApplication::Get();
  cVar6 = (**(code **)(*(longlong *)pFVar7 + 0xa0))(pFVar7);
  if (*(char *)((longlong)this + 0x4b8) == '\0') {
    if (cVar6 == '\x02') {
      pTVar12 = *(TReferenceControllerBase<1> **)((longlong)this + 0x460);
      lVar2 = *(longlong *)((longlong)this + 0x458);
      if (pTVar12 == (TReferenceControllerBase<1> *)0x0) {
        paVar10 = (atomic<int> *)&DAT_00000008;
      }
      else {
        paVar10 = &pTVar12->SharedReferenceCount;
        LOCK();
        *paVar10 = (atomic<int>)((int)*paVar10 + 1);
        UNLOCK();
      }
      if (lVar2 == 0) goto LAB_142ff2197;
      if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *paVar10 = (atomic<int>)((int)*paVar10 + 1);
        UNLOCK();
      }
      pSVar8 = TSharedPtr<SListView<TSharedPtr<enum_ESelectionMode::Type,1>_>,1>::operator->
                         ((void *)((longlong)this + 0x468));
      pIVar3 = (pSVar8->ViewSource).Ptr;
      if (pIVar3 == (IItemsSource<TSharedPtr<ESelectionMode::Type,1>_> *)0x0) {
        local_108.Object = (SWidget *)0x0;
        pTVar9 = &local_108;
        local_108.SharedReferenceCount.ReferenceController =
             local_108.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
      }
      else {
        pTVar9 = (TSharedRef<SWidget,1> *)(**(code **)((longlong)*pIVar3 + 8))(pIVar3,&local_108);
      }
      local_108.Object = pTVar9->Object;
      local_108.SharedReferenceCount.ReferenceController =
           (pTVar9->SharedReferenceCount).ReferenceController;
      for (pSVar14 = local_108.Object;
          pSVar14 !=
          (SWidget *)
          (&(local_108.Object)->_padding_ +
          (longlong)(int)local_108.SharedReferenceCount.ReferenceController * 2);
          pSVar14 = (SWidget *)&pSVar14->_padding_) {
        if (pSVar14->_padding_ == lVar2) {
          iVar13 = (int)((longlong)pSVar14 - (longlong)local_108.Object >> 4);
          if (0 < iVar13) {
            iVar13 = iVar13 + -1;
            goto LAB_142ff215e;
          }
          break;
        }
      }
    }
    else {
      if (cVar6 != '\x03') {
        SComboButton::OnKeyDown(this,__return_storage_ptr__,param_1,param_2);
        return __return_storage_ptr__;
      }
      pTVar12 = *(TReferenceControllerBase<1> **)((longlong)this + 0x460);
      lVar2 = *(longlong *)((longlong)this + 0x458);
      if (pTVar12 == (TReferenceControllerBase<1> *)0x0) {
        paVar10 = (atomic<int> *)&DAT_00000008;
      }
      else {
        paVar10 = &pTVar12->SharedReferenceCount;
        LOCK();
        *paVar10 = (atomic<int>)((int)*paVar10 + 1);
        UNLOCK();
      }
      if (lVar2 == 0) goto LAB_142ff2197;
      if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *paVar10 = (atomic<int>)((int)*paVar10 + 1);
        UNLOCK();
      }
      pSVar8 = TSharedPtr<SListView<TSharedPtr<enum_ESelectionMode::Type,1>_>,1>::operator->
                         ((void *)((longlong)this + 0x468));
      pIVar3 = (pSVar8->ViewSource).Ptr;
      if (pIVar3 == (IItemsSource<TSharedPtr<ESelectionMode::Type,1>_> *)0x0) {
        local_108.Object = (SWidget *)0x0;
        pTVar9 = &local_108;
        local_108.SharedReferenceCount.ReferenceController =
             local_108.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
      }
      else {
        pTVar9 = (TSharedRef<SWidget,1> *)(**(code **)((longlong)*pIVar3 + 8))(pIVar3,&local_108);
      }
      local_108.Object = pTVar9->Object;
      local_108.SharedReferenceCount.ReferenceController =
           (pTVar9->SharedReferenceCount).ReferenceController;
      for (pSVar14 = local_108.Object;
          pSVar14 !=
          (SWidget *)
          (&(local_108.Object)->_padding_ +
          (longlong)(int)local_108.SharedReferenceCount.ReferenceController * 2);
          pSVar14 = (SWidget *)&pSVar14->_padding_) {
        if (pSVar14->_padding_ == lVar2) {
          iVar13 = (int)((longlong)pSVar14 - (longlong)local_108.Object >> 4);
          goto LAB_142ff2253;
        }
      }
      iVar13 = -1;
LAB_142ff2253:
      if (iVar13 < (int)local_108.SharedReferenceCount.ReferenceController + -1) {
        iVar13 = iVar13 + 1;
LAB_142ff215e:
        pTVar11 = TArrayView<TSharedPtr<enum_ESelectionMode::Type,1>_const_,int>::operator[]
                            (&local_108,iVar13);
        local_108.Object = (SWidget *)pTVar11->Object;
        local_108.SharedReferenceCount.ReferenceController =
             (pTVar11->SharedReferenceCount).ReferenceController;
        if (local_108.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_108.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_108.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        SetSelectedItem(this,(TSharedPtr<ESelectionMode::Type,1> *)&local_108);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
LAB_142ff2197:
    FReply::FReply(__return_storage_ptr__,true);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
    return __return_storage_ptr__;
  }
  if (cVar5 == '\0') {
    if (*(char *)((longlong)this + 0x4b9) == '\0') {
      *(undefined1 *)((longlong)this + 0x4b9) = 1;
      pFVar7 = FSlateApplication::Get();
      FSlateApplication::PlaySound(pFVar7,(FSlateSound *)((longlong)this + 0x3f0),0);
      TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::ExecuteIfBound
                ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                 ((longlong)this + 0x488));
      SComboButton::OnButtonClicked(this,__return_storage_ptr__);
      return __return_storage_ptr__;
    }
    *(undefined1 *)((longlong)this + 0x4b9) = 0;
    pSVar8 = TSharedPtr<SListView<TSharedPtr<enum_ESelectionMode::Type,1>_>,1>::operator->
                       ((void *)((longlong)this + 0x468));
    (**(code **)(pSVar8->_padding_ + 0xd0))(&pSVar8->_padding_,&local_f8);
    if (0 < local_f0) {
      local_108.Object = (SWidget *)local_f8->Object;
      local_108.SharedReferenceCount.ReferenceController =
           (local_f8->SharedReferenceCount).ReferenceController;
      if (local_108.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_108.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_108.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      OnSelectionChanged_Internal(this,(TSharedPtr<ESelectionMode::Type,1> *)&local_108,Direct);
    }
    FReply::FReply(&local_e8,true);
    pTVar9 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)((longlong)this + 8),&local_108);
    FReply::SetUserFocus(&local_e8,pTVar9,SetDirectly,false);
    FReply::FReply(__return_storage_ptr__,&local_e8);
    FReply::~FReply(&local_e8);
    DestructItems<TSharedPtr<enum_ESelectionMode::Type,1>,int>(local_f8,local_f0);
    if (local_f8 == (TSharedPtr<ESelectionMode::Type,1> *)0x0) {
      return __return_storage_ptr__;
    }
    FMemory::Free(local_f8);
    return __return_storage_ptr__;
  }
  if (cVar5 == '\x01') {
    pTVar12 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
LAB_142ff203e:
    bVar4 = true;
  }
  else {
    pTVar12 = (param_2->Key).KeyDetails.SharedReferenceCount.ReferenceController;
    FVar1 = (param_2->Key).KeyName;
    if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar15 = true;
    if (FVar1 == EKeys::BackSpace.KeyName) goto LAB_142ff203e;
    bVar4 = false;
  }
  if (bVar15) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  }
  cVar5 = *(char *)((longlong)this + 0x4b9);
  if (bVar4) {
    OnMenuOpenChanged(this,false);
  }
  if (cVar5 != '\0') {
    FReply::FReply(__return_storage_ptr__,true);
    return __return_storage_ptr__;
  }
LAB_142ff2067:
  SWidget::OnKeyDown(this,__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// OnKeyDownHandler @ 142ff3250

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SComboBox<TSharedPtr<enum_ESelectionMode::Type,1>_>::OnKeyDownHandler
          (void *this,FReply *__return_storage_ptr__,FGeometry *param_1,FKeyEvent *param_2)

{
  FName FVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  FReply *pFVar4;
  longlong *plVar5;
  bool bVar6;
  TSharedPtr<ESelectionMode::Type,1> *local_28;
  int local_20;
  TSharedPtr<ESelectionMode::Type,1> local_18;
  
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
    if ((*(longlong *)((longlong)this + 0x468) == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      pFVar4 = (FReply *)(*pcVar3)();
      return pFVar4;
    }
    plVar5 = (longlong *)(*(longlong *)((longlong)this + 0x468) + 0x588);
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
      DestructItems<TSharedPtr<enum_ESelectionMode::Type,1>,int>(local_28,local_20);
      if (local_28 == (TSharedPtr<ESelectionMode::Type,1> *)0x0) {
        return __return_storage_ptr__;
      }
      FMemory::Free(local_28);
      return __return_storage_ptr__;
    }
    DestructItems<TSharedPtr<enum_ESelectionMode::Type,1>,int>(local_28,local_20);
    if (local_28 != (TSharedPtr<ESelectionMode::Type,1> *)0x0) {
      FMemory::Free(local_28);
    }
  }
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnMenuOpenChanged @ 142ff4540

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SComboBox<TSharedPtr<enum_ESelectionMode::Type,1>_>::OnMenuOpenChanged(void *this,bool param_1)

{
  Type *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  void *pvVar3;
  code *pcVar4;
  bool bVar5;
  FSlateApplication *this_00;
  void *local_res18;
  TSharedPtr<ESelectionMode::Type,1> local_38;
  TSharedPtr<ESelectionMode::Type,1> local_28;
  code *local_18;
  void **local_10;
  
  if (!param_1) {
    pTVar1 = *(Type **)((longlong)this + 0x458);
    *(undefined1 *)((longlong)this + 0x4b9) = 0;
    if (pTVar1 != (Type *)0x0) {
      pTVar2 = *(TReferenceControllerBase<1> **)((longlong)this + 0x460);
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (*(longlong *)((longlong)this + 0x468) == 0) {
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
      pvVar3 = *(void **)((longlong)this + 0x468);
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_38.Object = pTVar1;
      local_38.SharedReferenceCount.ReferenceController = pTVar2;
      SListView<TSharedPtr<enum_ESelectionMode::Type,1>_>::SetSelection
                (pvVar3,&local_38,OnNavigation);
      if (*(longlong *)((longlong)this + 0x468) == 0) {
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
      pvVar3 = *(void **)((longlong)this + 0x468);
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_28.Object = pTVar1;
      local_28.SharedReferenceCount.ReferenceController = pTVar2;
      SListView<TSharedPtr<enum_ESelectionMode::Type,1>_>::RequestScrollIntoView(pvVar3,&local_28,0)
      ;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    }
    this_00 = FSlateApplication::Get();
    local_10 = &local_res18;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`SComboBox<TSharedPtr<enum_ESelectionMode::Type,1>_>::OnMenuOpenChanged'::__l5::<lambda_1>,void,FSlateUser_&>
               ::Call;
    local_res18 = this;
    FSlateApplication::ForEachUser
              (this_00,(TFunctionRef<void___cdecl(FSlateUser_&)> *)&local_18,false);
  }
  return;
}

// OnSelectionChanged_Internal @ 142ff8170

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SComboBox<TSharedPtr<enum_ESelectionMode::Type,1>_>::OnSelectionChanged_Internal
          (void *this,TSharedPtr<ESelectionMode::Type,1> *param_1,Type param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  Type *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  FSlateApplication *this_00;
  TSharedPtr<ESelectionMode::Type,1> local_18;
  
  if (param_2 != OnNavigation) {
    if (param_1->Object != *(Type **)((longlong)this + 0x458)) {
      this_00 = FSlateApplication::Get();
      FSlateApplication::PlaySound(this_00,(FSlateSound *)((longlong)this + 0x408),0);
      pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
      pTVar2 = param_1->Object;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      pTVar3 = *(TReferenceControllerBase<1> **)((longlong)this + 0x460);
      *(Type **)((longlong)this + 0x458) = pTVar2;
      *(TReferenceControllerBase<1> **)((longlong)this + 0x460) = pTVar1;
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
      TDelegate<void___cdecl(TSharedPtr<enum_ESelectionMode::Type,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
      ::ExecuteIfBound((void *)((longlong)this + 0x440),&local_18,param_2);
    }
    (**(code **)(*(longlong *)this + 0x250))(this,0,1,0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetSelectedItem @ 14300db40

void __thiscall
SComboBox<TSharedPtr<enum_ESelectionMode::Type,1>_>::SetSelectedItem
          (void *this,TSharedPtr<ESelectionMode::Type,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  void *this_00;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  Type *pTVar5;
  TSharedPtr<ESelectionMode::Type,1> local_18;
  
  pTVar5 = param_1->Object;
  if (pTVar5 == (Type *)0x0) {
    if (*(longlong *)((longlong)this + 0x468) == 0) {
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
    lVar2 = *(longlong *)((longlong)this + 0x468);
    pTVar5 = TAttribute<enum_ESelectionMode::Type>::Get((void *)(lVar2 + 1000));
    if ((*pTVar5 != None) && (*(int *)(lVar2 + 0x810) != *(int *)(lVar2 + 0x83c))) {
      (**(code **)(*(longlong *)(lVar2 + 0x588) + 0x30))(lVar2 + 0x588);
      (**(code **)(*(longlong *)(lVar2 + 0x588) + 0x40))(lVar2 + 0x588,3);
    }
  }
  else {
    pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (*(longlong *)((longlong)this + 0x468) == 0) {
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
    this_00 = *(void **)((longlong)this + 0x468);
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_18.Object = pTVar5;
    local_18.SharedReferenceCount.ReferenceController = pTVar1;
    SListView<TSharedPtr<enum_ESelectionMode::Type,1>_>::SetSelection(this_00,&local_18,Direct);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SupportsKeyboardFocus @ 14300e7d0

bool __thiscall
SComboBox<TSharedPtr<enum_ESelectionMode::Type,1>_>::SupportsKeyboardFocus(void *this)

{
  return (bool)*(undefined1 *)((longlong)this + 0x3a0);
}

// ~SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_> @ 14305d830

void __thiscall
SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>::
~SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>
          (SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_> *this)

{
  void *pvVar1;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ComboBoxMenuContent).SharedReferenceCount.ReferenceController);
  TDelegate<TSharedRef<SWidget,1>___cdecl(TSharedPtr<FTextStyles::FFontFamily,1>),FDefaultDelegateUserPolicy>
  ::
  ~TDelegate<TSharedRef<SWidget,1>___cdecl(TSharedPtr<FTextStyles::FFontFamily,1>),FDefaultDelegateUserPolicy>
            (&this->OnGenerateWidget);
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
  TSharedPtr<FTextStyles::FFontFamily,1>::~TSharedPtr<FTextStyles::FFontFamily,1>
            (&this->SelectedItem);
  TDelegate<void___cdecl(TSharedPtr<FTextStyles::FFontFamily,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
  ::
  ~TDelegate<void___cdecl(TSharedPtr<FTextStyles::FFontFamily,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
            (&this->OnSelectionChanged);
  SComboButton::~SComboButton((SComboButton *)this);
  return;
}

// operator() @ 1430651f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>::OnMenuOpenChanged'::__l5::<lambda_1>::
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

// Construct @ 14306f730

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Removing unreachable block (ram,0x00014306fe4b) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>::Construct
          (SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_> *this,FArguments *param_1)

{
  byte *pbVar1;
  TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<FTextStyles::FFontFamily,1>_>,1>
  *pTVar2;
  FComboBoxStyle *pFVar3;
  longlong *plVar4;
  TReferenceControllerBase<1> *pTVar5;
  SScrollBar *pSVar6;
  FFontFamily *pFVar7;
  code *pcVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  TReferenceControllerBase<1> *pTVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  FSharedReferencer<1> FVar17;
  bool bVar18;
  char cVar19;
  byte bVar20;
  FArguments *pFVar21;
  FArguments *pFVar22;
  undefined8 *puVar23;
  TSharedRef<SWidget,1> *pTVar24;
  ulong64 uVar25;
  SListView<TSharedPtr<FTextStyles::FFontFamily,1>_> *pSVar26;
  SListView<TSharedPtr<FTextStyles::FFontFamily,1>_> *pSVar27;
  TSharedRef<SBox,1> *pTVar28;
  FArguments *pFVar29;
  FText *pFVar30;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> *pTVar31;
  EPopupMethod *pEVar32;
  FArguments *pFVar33;
  FSlateSound *pFVar34;
  undefined4 local_res8 [2];
  T0RequiredArgs local_res10 [8];
  T0RequiredArgs local_res18 [8];
  FLLMScope local_res20 [2];
  EPopupMethod local_15b8;
  char local_15b7;
  FName local_15b0;
  undefined4 uStack_15a8;
  undefined4 uStack_15a4;
  FLLMScope local_15a0 [2];
  float local_1598;
  undefined1 local_1594;
  undefined1 local_1590 [8];
  ForAnyElementType FStack_1588;
  ulonglong local_1580;
  TSharedPtr<SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>,1> local_1578;
  TSlateDecl<SListView<TSharedPtr<FTextStyles::FFontFamily,1>_>,RequiredArgs::T0RequiredArgs>
  local_1568;
  undefined1 local_1550 [16];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_1540;
  ForAnyElementType FStack_1538;
  ulonglong local_1530;
  FButtonStyle *local_1528;
  SBox *local_1520;
  FSharedReferencer<1> local_1518 [2];
  TSharedPtr<FTextStyles::FFontFamily,1> local_1508;
  SBox *local_14f8;
  TReferenceControllerBase<1> *pTStack_14f0;
  TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<FTextStyles::FFontFamily,1>_>,1>
  local_14e8;
  TSharedRef<SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>,1> local_14d8;
  TSharedRef<SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>,1> local_14c8;
  SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_> *local_14b8;
  TReferenceControllerBase<1> *pTStack_14b0;
  TSharedPtr<SWidget,1> local_14a8;
  TSharedRef<SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>,1> local_1498;
  TSharedPtr<FTextStyles::FFontFamily,1> local_1488;
  undefined4 local_1478;
  undefined1 local_1474;
  TDelegateBase<FNotThreadSafeDelegateMode> local_1470;
  TArray<TSharedPtr<FTextStyles::FFontFamily,1>,TSizedDefaultAllocator<32>_> *local_1458;
  TObservableArray<TSharedPtr<FTextStyles::FFontFamily,1>_> *local_1450;
  TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<FTextStyles::FFontFamily,1>_>,1>
  local_1448;
  FMemScope local_1438;
  FName local_1430;
  FMemScope local_1428;
  FComboButtonStyle *local_1420;
  TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<FTextStyles::FFontFamily,1>_>,1>
  local_1418;
  TSharedPtr<SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>,1> local_1408;
  TSharedPtr<SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>,1> local_13f8;
  TSharedPtr<SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>,1> local_13e8;
  TDelegateBase<FNotThreadSafeDelegateMode> local_13d8;
  NamedSlotProperty<SComboButton::FArguments> local_13c0;
  TWeakPtr<SWidget,1> local_13b0;
  FLinearColor_u_0 local_13a0;
  undefined1 local_1390;
  undefined1 local_138c;
  undefined8 local_1388;
  undefined8 uStack_1380;
  undefined8 local_1378;
  FDestructionSentinel local_1370;
  FDestructionSentinel local_1358;
  FDestructionSentinel local_1340;
  undefined1 *local_1328;
  FDestructionSentinel local_1320;
  undefined1 *local_1308;
  FDestructionSentinel local_1300;
  undefined1 *local_12e8;
  FDestructionSentinel local_12e0;
  undefined1 *local_12c8;
  TAttribute<FText> local_12c0;
  TSharedRef<SWidget,1> local_1290;
  TSharedRef<SBox,1> local_1280;
  TSharedRef<SWidget,1> local_1270;
  FFontFamily *local_1258;
  TReferenceControllerBase<1> *pTStack_1250;
  TSharedRef<SBox,1> local_1248;
  SWidget *local_1238;
  TReferenceControllerBase<1> *pTStack_1230;
  SListView<TSharedPtr<FTextStyles::FFontFamily,1>_> *local_1228;
  TReferenceControllerBase<1> *pTStack_1220;
  TSharedRef<STextBlock,1> local_1218;
  FText local_1208;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_11f8;
  SScrollBar *local_11e0;
  TReferenceControllerBase<1> *pTStack_11d8;
  TSharedRef<SWidget,1> local_11d0;
  TSharedRef<SWidget,1> local_11c0;
  TSharedRef<SWidget,1> local_11b0;
  SScrollBar *local_11a0;
  TReferenceControllerBase<1> *pTStack_1198;
  FLinearColor_u_0 local_1190;
  undefined4 local_1180;
  undefined1 local_117c;
  TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy> local_1178;
  FReadAccessScope local_1160;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_1148;
  TAttribute<FMargin> local_1130;
  FArguments local_1100;
  FArguments local_dc8;
  FArguments local_a88;
  FArguments local_5a8;
  undefined8 uStack_48;
  
  uStack_48 = 0x14306f74f;
  bVar11 = false;
  bVar10 = false;
  bVar9 = false;
  local_res8[0] = 0;
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
  pFVar3 = param_1->_ComboBoxStyle;
  this->ComboBoxStyle = pFVar3;
  fVar13 = (pFVar3->MenuRowPadding).Left;
  fVar14 = (pFVar3->MenuRowPadding).Top;
  fVar15 = (pFVar3->MenuRowPadding).Right;
  fVar16 = (pFVar3->MenuRowPadding).Bottom;
  *(undefined1 *)&this->_padding_ = 0;
  local_1420 = &pFVar3->ComboButtonStyle;
  (this->MenuRowPadding).Left = fVar13;
  (this->MenuRowPadding).Top = fVar14;
  (this->MenuRowPadding).Right = fVar15;
  (this->MenuRowPadding).Bottom = fVar16;
  local_1528 = param_1->_ButtonStyle;
  if (local_1528 == (FButtonStyle *)0x0) {
    local_1528 = &(pFVar3->ComboButtonStyle).ButtonStyle;
  }
  pFVar34 = &(param_1->_PressedSoundOverride).TypedValue;
  if ((param_1->_PressedSoundOverride).bIsSet == false) {
    pFVar34 = &pFVar3->PressedSlateSound;
  }
  FSlateSound::operator=(&this->PressedSound,pFVar34);
  pFVar34 = &(param_1->_SelectionChangeSoundOverride).TypedValue;
  if ((param_1->_SelectionChangeSoundOverride).bIsSet == false) {
    pFVar34 = &this->ComboBoxStyle->SelectionChangeSlateSound;
  }
  FSlateSound::operator=(&this->SelectionChangeSound,pFVar34);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->OnComboBoxOpening,&param_1->_OnComboBoxOpening);
  TDelegate<void___cdecl(TSharedPtr<FTextStyles::FFontFamily,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
  ::operator=(&this->OnSelectionChanged,&param_1->_OnSelectionChanged);
  if (&param_1->_OnGenerateWidget != &this->OnGenerateWidget) {
    local_13d8._0_8_ = 0;
    local_13d8._8_8_ = 0;
    local_13d8._16_4_ = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->_OnGenerateWidget
               ,&local_1160);
    if ((*(int *)&(param_1->_OnGenerateWidget).field_0x10 != 0) &&
       (plVar4 = *(longlong **)&(param_1->_OnGenerateWidget).field_0x8, plVar4 != (longlong *)0x0))
    {
      (**(code **)(*plVar4 + 0x50))(plVar4,&local_13d8);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_1160);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnGenerateWidget,&local_13d8);
    TDelegate<TSharedRef<SWidget,1>___cdecl(TSharedPtr<FTextStyles::FFontFamily,1>),FDefaultDelegateUserPolicy>
    ::
    ~TDelegate<TSharedRef<SWidget,1>___cdecl(TSharedPtr<FTextStyles::FFontFamily,1>),FDefaultDelegateUserPolicy>
              ((TDelegate<TSharedRef<SWidget,1>___cdecl(TSharedPtr<FTextStyles::FFontFamily,1>),FDefaultDelegateUserPolicy>
                *)&local_13d8);
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
  local_11a0 = (this->CustomScrollbar).Object;
  pTStack_1198 = (this->CustomScrollbar).SharedReferenceCount.ReferenceController;
  (this->CustomScrollbar).Object = pSVar6;
  (this->CustomScrollbar).SharedReferenceCount.ReferenceController = pTVar5;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1198);
  pFVar21 = SBox::FArguments::FArguments(&local_dc8);
  local_1598 = param_1->_MaxListHeight;
  local_1594 = 1;
  local_1580 = 0;
  local_1590 = (undefined1  [8])0x0;
  FStack_1588.Data = (FScriptContainerElement *)0x0;
  (pFVar21->_MaxDesiredHeight).Value.Size = local_1598;
  (pFVar21->_MaxDesiredHeight).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar21->_MaxDesiredHeight).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1590);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1590,
             (FWriteAccessScope *)&local_1370);
  if (((int)local_1580 != 0) && (FStack_1588.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1588.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1588,0,0,0x10);
    local_1580 = local_1580 & 0xffffffff00000000;
  }
  if (local_1370.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1370.Accessor,&local_1370);
  }
  if (FStack_1588.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1588.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1590);
  pFVar22 = SListView<TSharedPtr<FTextStyles::FFontFamily,1>_>::FArguments::FArguments(&local_a88);
  local_1458 = param_1->_OptionsSource_ArrayPointer;
  local_1448.SharedReferenceCount.ReferenceController =
       (param_1->_OptionsSource_SharedObservableArray).SharedReferenceCount.ReferenceController;
  local_1450 = param_1->_OptionsSource_ObservableArrayPointer;
  local_1448.Object = (param_1->_OptionsSource_SharedObservableArray).Object;
  if (local_1448.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1448.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1448.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar2 = &pFVar22->_ListItemsSource_SharedObservableArray;
  pFVar22->_ListItemsSource_ArrayPointer =
       (TArray<TSharedPtr<FTextStyles::FFontFamily,1>,TSizedDefaultAllocator<32>_> *)0x0;
  pFVar22->_ListItemsSource_ObservableArrayPointer =
       (TObservableArray<TSharedPtr<FTextStyles::FFontFamily,1>_> *)0x0;
  local_1418.Object = (TObservableArray<TSharedPtr<FTextStyles::FFontFamily,1>_> *)0x0;
  local_1418.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (pTVar2 != &local_1418) {
    pTVar2->Object = (TObservableArray<TSharedPtr<FTextStyles::FFontFamily,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(pFVar22->_ListItemsSource_SharedObservableArray).SharedReferenceCount,
               &local_1418.SharedReferenceCount);
  }
  TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<FTextStyles::FFontFamily,1>_>,1>::
  ~TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<FTextStyles::FFontFamily,1>_>,1>
            (&local_1418);
  pFVar22->_ListItemsSource_ArrayPointer = local_1458;
  pFVar22->_ListItemsSource_ObservableArrayPointer = local_1450;
  if (local_1448.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1448.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1448.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_14e8.Object = pTVar2->Object;
  local_14e8.SharedReferenceCount.ReferenceController =
       (pFVar22->_ListItemsSource_SharedObservableArray).SharedReferenceCount.ReferenceController;
  pTVar2->Object = local_1448.Object;
  (pFVar22->_ListItemsSource_SharedObservableArray).SharedReferenceCount.ReferenceController =
       local_1448.SharedReferenceCount.ReferenceController;
  TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<FTextStyles::FFontFamily,1>_>,1>::
  ~TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<FTextStyles::FFontFamily,1>_>,1>
            (&local_14e8);
  TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<FTextStyles::FFontFamily,1>_>,1>::
  ~TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<FTextStyles::FFontFamily,1>_>,1>
            (&local_1448);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar22->_OnGenerateRow,
             (FWriteAccessScope *)&local_1340);
  local_1328 = &(pFVar22->_OnGenerateRow).field_0x8;
  puVar23 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_1328);
  if (puVar23 != (undefined8 *)0x0) {
    uStack_15a4 = local_1508.SharedReferenceCount.ReferenceController._4_4_;
    local_15b0 = (FName)GenerateMenuItemRow;
    uStack_15a8 = 0;
    pTVar24 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_11b0);
    local_14d8.Object = (SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_> *)pTVar24->Object;
    local_14d8.SharedReferenceCount.ReferenceController =
         (pTVar24->SharedReferenceCount).ReferenceController;
    if (local_14d8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_14d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_14d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      (local_14d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_14d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar23 = &
               ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VITableRow___00__V__TSharedPtr_UFFontFamily_FTextStyles___00__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    local_1408.Object = local_14d8.Object;
    local_1408.SharedReferenceCount.ReferenceController =
         local_14d8.SharedReferenceCount.ReferenceController;
    uVar25 = FDelegateHandle::GenerateNewID();
    puVar23[2] = uVar25;
    *puVar23 = &
               ___7__TBaseSPMethodDelegateInstance__0A_V__SComboBox_V__TSharedPtr_UFFontFamily_FTextStyles___00_____00__A6A_AV__TSharedRef_VITableRow___00__V__TSharedPtr_UFFontFamily_FTextStyles___00__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar23[3] = local_1408.Object;
    puVar23[4] = local_1408.SharedReferenceCount.ReferenceController;
    if (local_1408.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_1408.SharedReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_1408.SharedReferenceCount.ReferenceController)->WeakReferenceCount + 1);
      UNLOCK();
    }
    bVar11 = true;
    bVar10 = true;
    bVar9 = true;
    *(FName *)(puVar23 + 5) = local_15b0;
    puVar23[6] = CONCAT44(uStack_15a4,uStack_15a8);
  }
  if (bVar10) {
    TSharedPtr<SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>,1>::
    ~TSharedPtr<SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>,1>(&local_1408);
  }
  if (bVar11) {
    TSharedRef<SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>,1>::
    ~TSharedRef<SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>,1>(&local_14d8);
  }
  if (bVar9) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_11b0.SharedReferenceCount.ReferenceController);
  }
  bVar11 = false;
  bVar10 = false;
  bVar9 = false;
  if (local_1340.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1340.Accessor,&local_1340);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar22->_OnSelectionChanged
             ,(FWriteAccessScope *)&local_1320);
  local_1308 = &(pFVar22->_OnSelectionChanged).field_0x8;
  puVar23 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_1308);
  if (puVar23 != (undefined8 *)0x0) {
    uStack_15a4 = local_1508.SharedReferenceCount.ReferenceController._4_4_;
    local_15b0 = (FName)OnSelectionChanged_Internal;
    uStack_15a8 = 0;
    pTVar24 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_11c0);
    local_14c8.Object = (SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_> *)pTVar24->Object;
    local_14c8.SharedReferenceCount.ReferenceController =
         (pTVar24->SharedReferenceCount).ReferenceController;
    if (local_14c8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_14c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_14c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      (local_14c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_14c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar9 = true;
    bVar11 = true;
    bVar10 = true;
    *puVar23 = &
               ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_UFFontFamily_FTextStyles___00__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    local_13f8.Object = local_14c8.Object;
    local_13f8.SharedReferenceCount.ReferenceController =
         local_14c8.SharedReferenceCount.ReferenceController;
    uVar25 = FDelegateHandle::GenerateNewID();
    puVar23[2] = uVar25;
    *puVar23 = &
               ___7__TBaseSPMethodDelegateInstance__0A_V__SComboBox_V__TSharedPtr_UFFontFamily_FTextStyles___00_____00__A6AXV__TSharedPtr_UFFontFamily_FTextStyles___00__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar23[3] = local_13f8.Object;
    puVar23[4] = local_13f8.SharedReferenceCount.ReferenceController;
    if (local_13f8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_13f8.SharedReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_13f8.SharedReferenceCount.ReferenceController)->WeakReferenceCount + 1);
      UNLOCK();
    }
    *(FName *)(puVar23 + 5) = local_15b0;
    puVar23[6] = CONCAT44(uStack_15a4,uStack_15a8);
  }
  if (bVar9) {
    TSharedPtr<SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>,1>::
    ~TSharedPtr<SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>,1>(&local_13f8);
  }
  if (bVar10) {
    TSharedRef<SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>,1>::
    ~TSharedRef<SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>,1>(&local_14c8);
  }
  if (bVar11) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_11c0.SharedReferenceCount.ReferenceController);
  }
  bVar10 = false;
  bVar9 = false;
  if (local_1320.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1320.Accessor,&local_1320);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar22->_OnKeyDownHandler,
             (FWriteAccessScope *)&local_1300);
  local_12e8 = &(pFVar22->_OnKeyDownHandler).field_0x8;
  puVar23 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_12e8);
  if (puVar23 != (undefined8 *)0x0) {
    uStack_15a4 = local_1508.SharedReferenceCount.ReferenceController._4_4_;
    local_15b0 = (FName)OnKeyDownHandler;
    uStack_15a8 = 0;
    pTVar24 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_11d0);
    local_1578.Object = (SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_> *)pTVar24->Object;
    local_1578.SharedReferenceCount.ReferenceController =
         (pTVar24->SharedReferenceCount).ReferenceController;
    if (local_1578.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_1578.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_1578.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      (local_1578.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_1578.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar9 = true;
    bVar10 = true;
    *puVar23 = &
               ___7__TCommonDelegateInstanceState___A6A_AVFReply__AEBUFGeometry__AEBUFKeyEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    local_14b8 = local_1578.Object;
    pTStack_14b0 = local_1578.SharedReferenceCount.ReferenceController;
    uVar25 = FDelegateHandle::GenerateNewID();
    puVar23[2] = uVar25;
    *puVar23 = &
               ___7__TBaseSPMethodDelegateInstance__0A_V__SComboBox_V__TSharedPtr_UFFontFamily_FTextStyles___00_____00__A6A_AVFReply__AEBUFGeometry__AEBUFKeyEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar23[3] = local_1578.Object;
    puVar23[4] = local_1578.SharedReferenceCount.ReferenceController;
    if (local_1578.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_1578.SharedReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_1578.SharedReferenceCount.ReferenceController)->WeakReferenceCount + 1);
      UNLOCK();
    }
    *(FName *)(puVar23 + 5) = local_15b0;
    puVar23[6] = CONCAT44(uStack_15a4,uStack_15a8);
  }
  if (bVar9) {
    TSharedPtr<SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>,1>::
    ~TSharedPtr<SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>,1>(&local_1578);
  }
  if (bVar10) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_11d0.SharedReferenceCount.ReferenceController);
  }
  bVar11 = false;
  bVar10 = false;
  bVar9 = false;
  if (local_1300.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1300.Accessor,&local_1300);
  }
  local_1474 = 1;
  local_1478 = 1;
  local_1470._16_8_ = 0;
  local_1470._0_8_ = 0;
  local_1470._8_8_ = 0;
  (pFVar22->_SelectionMode).Value = Single;
  (pFVar22->_SelectionMode).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar22->_SelectionMode).Getter,
             &local_1470);
  TAttribute<enum_ESelectionMode::Type>::~TAttribute<enum_ESelectionMode::Type>(&local_1478);
  pFVar22->_ScrollBarStyle = param_1->_ScrollBarStyle;
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
  local_11e0 = (pFVar22->_ExternalScrollbar).Object;
  pTStack_11d8 = (pFVar22->_ExternalScrollbar).SharedReferenceCount.ReferenceController;
  (pFVar22->_ExternalScrollbar).Object = pSVar6;
  (pFVar22->_ExternalScrollbar).SharedReferenceCount.ReferenceController = pTVar5;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_11d8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  FLLMScope::FLLMScope(local_res20,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_15b0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1438,&local_15b0,true);
  TSlateDecl<SListView<TSharedPtr<FTextStyles::FFontFamily,1>_>,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SListView<TSharedPtr<FTextStyles::FFontFamily,1>_>,RequiredArgs::T0RequiredArgs>
            (&local_1568,"SComboListType",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Input\\SComboBox.h"
             ,0xda,(T0RequiredArgs *)local_res8);
  FMemScope::~FMemScope(&local_1438);
  FLLMScope::~FLLMScope(local_res20);
  if (local_1568._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1568._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1568._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_1228 = (this->ComboListView).Object;
  pTStack_1220 = (this->ComboListView).SharedReferenceCount.ReferenceController;
  (this->ComboListView).Object = local_1568._Widget.Object;
  (this->ComboListView).SharedReferenceCount.ReferenceController =
       local_1568._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1220);
  pSVar26 = TSharedPtr<SListView<TSharedPtr<FTextStyles::FFontFamily,1>_>,1>::operator->
                      (&local_1568._Widget);
  SWidget::SWidgetConstruct((SWidget *)pSVar26,(FSlateBaseNamedArgs *)pFVar22);
  pSVar26 = local_1568._Widget.Object;
  SListView<TSharedPtr<FTextStyles::FFontFamily,1>_>::Construct(local_1568._Widget.Object,pFVar22);
  pSVar27 = TSharedPtr<SListView<TSharedPtr<FTextStyles::FFontFamily,1>_>,1>::operator->
                      (&local_1568._Widget);
  if ((pSVar27->_padding_ & 0x10) == 0) {
    cVar19 = (**(code **)(pSVar27->_padding_ + 0x228))(pSVar27);
    bVar20 = 0;
    if (cVar19 == '\0') goto LAB_14307003a;
  }
  bVar20 = 0x20;
LAB_14307003a:
  *(byte *)&pSVar27->_padding_ = (byte)pSVar27->_padding_ & 0xdf;
  *(byte *)&pSVar27->_padding_ = (byte)pSVar27->_padding_ | bVar20;
  pSVar27 = TSharedPtr<SListView<TSharedPtr<FTextStyles::FFontFamily,1>_>,1>::operator->
                      (&local_1568._Widget);
  pbVar1 = (byte *)((longlong)&pSVar27->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((local_1568._Widget.Object == (SListView<TSharedPtr<FTextStyles::FFontFamily,1>_> *)0x0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar18)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  FVar17.ReferenceController = local_1568._Widget.SharedReferenceCount.ReferenceController;
  local_1568._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_1568._Widget.Object = (SListView<TSharedPtr<FTextStyles::FFontFamily,1>_> *)0x0;
  if ((pSVar26 == (SListView<TSharedPtr<FTextStyles::FFontFamily,1>_> *)0x0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar18)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if (FVar17.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar17.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar17.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (FVar17.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar17.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1238 = (pFVar21->_Content).Widget.Object;
  pTStack_1230 = (pFVar21->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar21->_Content).Widget.Object = (SWidget *)pSVar26;
  (pFVar21->_Content).Widget.SharedReferenceCount.ReferenceController = FVar17.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1230);
  FLLMScope::FLLMScope(local_15a0,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1430 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1428,&local_1430,true);
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
            (&local_11f8,"SBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Input\\SComboBox.h"
             ,0xd7,local_res10);
  FMemScope::~FMemScope(&local_1428);
  FLLMScope::~FLLMScope(local_15a0);
  pTVar28 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_11f8,&local_1248,pFVar21);
  local_1518[0].ReferenceController = (pTVar28->SharedReferenceCount).ReferenceController;
  local_1520 = pTVar28->Object;
  if (local_1518[0].ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1518[0].ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_1518[0].ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->ComboBoxMenuContent != (TSharedPtr<SBox,1> *)&local_1520) {
    (this->ComboBoxMenuContent).Object = local_1520;
    local_1520 = (SBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ComboBoxMenuContent).SharedReferenceCount,local_1518);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1518[0].ReferenceController);
  TSharedRef<SBox,1>::~TSharedRef<SBox,1>(&local_1248);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_11f8._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar17.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar17.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1568._Widget.SharedReferenceCount.ReferenceController);
  SListView<TSharedPtr<FTextStyles::FFontFamily,1>_>::FArguments::~FArguments(&local_a88);
  SBox::FArguments::~FArguments(&local_dc8);
  local_14a8.SharedReferenceCount.ReferenceController =
       (param_1->_Content).Widget.SharedReferenceCount.ReferenceController;
  local_14a8.Object = (param_1->_Content).Widget.Object;
  if (local_14a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_14a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_14a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((param_1->_Content).Widget.Object == SNullWidget::NullWidget.Object) {
    pFVar29 = STextBlock::FArguments::FArguments(&local_5a8);
    pFVar30 = FText::AsLocalizable_Advanced_LocText
                        (&local_1208,L"SComboBox",L"ContentWarning",L"No Content Provided");
    FText::FText(&local_12c0.Value,pFVar30);
    local_12c0.bIsSet = true;
    local_12c0.Getter._16_8_ = 0;
    local_12c0.Getter._0_8_ = 0;
    local_12c0.Getter._8_8_ = 0;
    pFVar29 = STextBlock::FArguments::Text(pFVar29,&local_12c0);
    local_1390 = 0;
    local_138c = 1;
    local_1378 = 0;
    local_13a0 = FLinearColor::Red.field0_0x0;
    local_1388 = 0;
    uStack_1380 = 0;
    pFVar29 = STextBlock::FArguments::ColorAndOpacity
                        (pFVar29,(TAttribute<FSlateColor> *)&local_13a0._s_0);
    pTVar31 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                        (&local_1148,"STextBlock",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Input\\SComboBox.h"
                         ,0xe9,local_res18);
    pTVar31 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::Expose<SWidget>
                        (pTVar31,&local_14a8);
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=(pTVar31,&local_1218,pFVar29);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1218.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1148._Widget.SharedReferenceCount.ReferenceController);
    if (local_1208.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1208.TextData.Reference + 0x10))();
    }
    STextBlock::FArguments::~FArguments(&local_5a8);
  }
  FVar17.ReferenceController = local_14a8.SharedReferenceCount.ReferenceController;
  local_13c0.OwnerDeclaration = SComboButton::FArguments::FArguments(&local_1100);
  (local_13c0.OwnerDeclaration)->_ComboButtonStyle = local_1420;
  (local_13c0.OwnerDeclaration)->_ButtonStyle = local_1528;
  local_15b7 = (param_1->_Method).bIsSet;
  if ((bool)local_15b7 != false) {
    local_15b8 = (param_1->_Method).TypedValue;
  }
  if ((TOptional<EPopupMethod> *)&local_15b8 != &(local_13c0.OwnerDeclaration)->_Method) {
    if ((bool)local_15b7 == false) {
      if (((local_13c0.OwnerDeclaration)->_Method).bIsSet != false) {
        ((local_13c0.OwnerDeclaration)->_Method).bIsSet = false;
      }
    }
    else {
      pEVar32 = TOptional<enum_EPopupMethod>::GetValue(&local_15b8);
      ((local_13c0.OwnerDeclaration)->_Method).TypedValue = *pEVar32;
      ((local_13c0.OwnerDeclaration)->_Method).bIsSet = true;
    }
  }
  local_13c0.SlotContent = &(local_13c0.OwnerDeclaration)->_ButtonContent;
  pTVar24 = TSharedPtr<SWidget,1>::ToSharedRef(&local_14a8,&local_1270);
  pFVar33 = NamedSlotProperty<SComboButton::FArguments>::operator[](&local_13c0,pTVar24);
  pTVar28 = TSharedPtr<SBox,1>::ToSharedRef(&this->ComboBoxMenuContent,&local_1280);
  pTVar5 = (pTVar28->SharedReferenceCount).ReferenceController;
  local_14f8 = pTVar28->Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar12 = (pFVar33->_MenuContent).Widget.SharedReferenceCount.ReferenceController;
  (pFVar33->_MenuContent).Widget.Object = (SWidget *)local_14f8;
  (pFVar33->_MenuContent).Widget.SharedReferenceCount.ReferenceController = pTVar5;
  pTStack_14f0 = pTVar5;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  pFVar33->_HasDownArrow = param_1->_HasDownArrow;
  local_1130.Value.Left = (param_1->_ContentPadding).Value.Left;
  local_1130.Value.Top = (param_1->_ContentPadding).Value.Top;
  local_1130.Value.Right = (param_1->_ContentPadding).Value.Right;
  local_1130.Value.Bottom = (param_1->_ContentPadding).Value.Bottom;
  local_1130.bIsSet = (param_1->_ContentPadding).bIsSet;
  TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>
            (&local_1130.Getter,&(param_1->_ContentPadding).Getter);
  pFVar33 = SComboButton::FArguments::ContentPadding(pFVar33,&local_1130);
  local_1180._0_1_ = (param_1->_ForegroundColor).Value.ColorUseRule;
  local_1180._1_1_ = (param_1->_ForegroundColor).Value.ColorTableId;
  local_1180._2_2_ = *(undefined2 *)&(param_1->_ForegroundColor).Value.field_0x12;
  local_1190._0_8_ = *(undefined8 *)&(param_1->_ForegroundColor).Value.SpecifiedColor.field0_0x0;
  local_1190._8_8_ =
       *(undefined8 *)((longlong)&(param_1->_ForegroundColor).Value.SpecifiedColor.field0_0x0 + 8);
  local_117c = (param_1->_ForegroundColor).bIsSet;
  TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
            (&local_1178,&(param_1->_ForegroundColor).Getter);
  pFVar33 = SComboButton::FArguments::ForegroundColor
                      (pFVar33,(TAttribute<FSlateColor> *)&local_1190._s_0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar33->_OnMenuOpenChanged,
             (FWriteAccessScope *)&local_12e0);
  local_12c8 = &(pFVar33->_OnMenuOpenChanged).field_0x8;
  puVar23 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_12c8);
  if (puVar23 != (undefined8 *)0x0) {
    local_1578.Object = (SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_> *)OnMenuOpenChanged;
    local_1578.SharedReferenceCount.ReferenceController =
         local_1508.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
    pTVar24 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_1290);
    local_1498.Object = (SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_> *)pTVar24->Object;
    local_1498.SharedReferenceCount.ReferenceController =
         (pTVar24->SharedReferenceCount).ReferenceController;
    if (local_1498.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_1498.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_1498.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      (local_1498.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_1498.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar11 = true;
    bVar10 = true;
    bVar9 = true;
    *puVar23 = &___7__TCommonDelegateInstanceState___A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_;
    local_13e8.Object = local_1498.Object;
    local_13e8.SharedReferenceCount.ReferenceController =
         local_1498.SharedReferenceCount.ReferenceController;
    uVar25 = FDelegateHandle::GenerateNewID();
    puVar23[2] = uVar25;
    *puVar23 = &
               ___7__TBaseSPMethodDelegateInstance__0A_V__SComboBox_V__TSharedPtr_UFFontFamily_FTextStyles___00_____00__A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar23[3] = local_13e8.Object;
    puVar23[4] = local_13e8.SharedReferenceCount.ReferenceController;
    if (local_13e8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_13e8.SharedReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_13e8.SharedReferenceCount.ReferenceController)->WeakReferenceCount + 1);
      UNLOCK();
    }
    puVar23[5] = local_1578.Object;
    puVar23[6] = local_1578.SharedReferenceCount.ReferenceController;
  }
  if (bVar9) {
    TSharedPtr<SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>,1>::
    ~TSharedPtr<SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>,1>(&local_13e8);
  }
  if (bVar10) {
    TSharedRef<SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>,1>::
    ~TSharedRef<SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>,1>(&local_1498);
  }
  if (bVar11) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1290.SharedReferenceCount.ReferenceController);
  }
  if (local_12e0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_12e0.Accessor,&local_12e0);
  }
  pFVar33->_IsFocusable = param_1->_IsFocusable;
  pFVar33->_CollapseMenuOnParentFocus = param_1->_CollapseMenuOnParentFocus;
  SComboButton::Construct((SComboButton *)this,pFVar33);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  TSharedRef<SBox,1>::~TSharedRef<SBox,1>(&local_1280);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1270.SharedReferenceCount.ReferenceController);
  SComboButton::FArguments::~FArguments(&local_1100);
  local_13b0.Object = (SWidget *)(this->ComboListView).Object;
  local_13b0.WeakReferenceCount.ReferenceController =
       (this->ComboListView).SharedReferenceCount.ReferenceController;
  if (local_13b0.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_13b0.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_13b0.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  SComboButton::SetMenuContentWidgetToFocus((SComboButton *)this,&local_13b0);
  TSharedPtr<FTextStyles::FFontFamily,1>::operator=
            (&this->SelectedItem,&param_1->_InitiallySelectedItem);
  pFVar7 = (this->SelectedItem).Object;
  if (pFVar7 != (FFontFamily *)0x0) {
    local_1488.SharedReferenceCount.ReferenceController =
         (this->SelectedItem).SharedReferenceCount.ReferenceController;
    if (local_1488.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_1488.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_1488.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_1488.Object = pFVar7;
    pSVar26 = TSharedPtr<SListView<TSharedPtr<FTextStyles::FFontFamily,1>_>,1>::operator->
                        (&this->ComboListView);
    local_1258 = local_1488.Object;
    pTStack_1250 = local_1488.SharedReferenceCount.ReferenceController;
    pcVar8 = *(code **)(pSVar26->_padding_ + 0x28);
    if (local_1488.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_1488.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_1488.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    (*pcVar8)(&pSVar26->_padding_,&local_1258,1,0);
    pSVar26 = TSharedPtr<SListView<TSharedPtr<FTextStyles::FFontFamily,1>_>,1>::operator->
                        (&this->ComboListView);
    local_1508.Object = local_1488.Object;
    local_1508.SharedReferenceCount.ReferenceController =
         local_1488.SharedReferenceCount.ReferenceController;
    if (local_1488.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_1488.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_1488.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SListView<TSharedPtr<FTextStyles::FFontFamily,1>_>::RequestScrollIntoView(pSVar26,&local_1508,0)
    ;
    TSharedPtr<FTextStyles::FFontFamily,1>::~TSharedPtr<FTextStyles::FFontFamily,1>(&local_1488);
  }
  pSVar26 = TSharedPtr<SListView<TSharedPtr<FTextStyles::FFontFamily,1>_>,1>::operator->
                      (&this->ComboListView);
  local_1550._0_8_ = FStyleDefaults::GetNoBrush();
  local_1550[8] = true;
  local_1530 = 0;
  local_1540.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_1538.Data = (FScriptContainerElement *)0x0;
  STableViewBase::SetBackgroundBrush
            ((STableViewBase *)pSVar26,(TAttribute<FSlateBrush_const_*> *)local_1550);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_1540,(FWriteAccessScope *)&local_1358);
  if (((int)local_1530 != 0) && (FStack_1538.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1538.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1538,0,0,0x10);
    local_1530 = local_1530 & 0xffffffff00000000;
  }
  if (local_1358.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1358.Accessor,&local_1358);
  }
  if (FStack_1538.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1538.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_1540.AccessDetector);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar17.ReferenceController);
  return;
}

// CreateAccessibleWidget @ 1430a71a0

TSharedRef<FSlateAccessibleWidget,1> * __thiscall
SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>::CreateAccessibleWidget
          (SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_> *this,
          TSharedRef<FSlateAccessibleWidget,1> *__return_storage_ptr__)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  code *pcVar3;
  FSharedReferencer<1> FVar4;
  bool bVar5;
  FSlateAccessibleWidget *this_00;
  TSharedRef<SWidget,1> *pTVar6;
  TSharedRef<FSlateAccessibleWidget,1> *pTVar7;
  bool bVar8;
  TRawPtrProxy<FSlateAccessibleWidget> local_res10;
  TWeakPtr<SWidget,1> local_38;
  TSharedRef<SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>,1> local_28;
  TSharedRef<SWidget,1> local_18;
  
  bVar8 = false;
  local_res10.Object = local_res10.Object & 0xffffffff00000000;
  this_00 = ::operator_new(0x70);
  if (this_00 == (FSlateAccessibleWidget *)0x0) {
    this_00 = (FSlateAccessibleWidget *)0x0;
  }
  else {
    pTVar6 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_18);
    local_28.Object = (SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_> *)pTVar6->Object;
    local_28.SharedReferenceCount.ReferenceController =
         (pTVar6->SharedReferenceCount).ReferenceController;
    if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    FVar4.ReferenceController = local_28.SharedReferenceCount.ReferenceController;
    if (local_28.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
      local_38.Object = (SWidget *)local_28.Object;
      local_38.WeakReferenceCount.ReferenceController =
           local_28.SharedReferenceCount.ReferenceController;
      FSlateAccessibleWidget::FSlateAccessibleWidget(this_00,&local_38,ComboBox);
      this_00->_padding_ =
           (longlong)&FSlateAccessibleComboBox::_vftable__for__FSlateAccessibleWidget__;
      this_00[1]._padding_ =
           (longlong)&FSlateAccessibleComboBox::_vftable__for__IAccessibleProperty__;
    }
    else {
      LOCK();
      (local_28.SharedReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_28.SharedReferenceCount.ReferenceController)->WeakReferenceCount + 1);
      UNLOCK();
      local_38.Object = (SWidget *)local_28.Object;
      local_38.WeakReferenceCount.ReferenceController =
           local_28.SharedReferenceCount.ReferenceController;
      LOCK();
      (local_28.SharedReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_28.SharedReferenceCount.ReferenceController)->WeakReferenceCount + 1);
      UNLOCK();
      FSlateAccessibleWidget::FSlateAccessibleWidget(this_00,&local_38,ComboBox);
      this_00->_padding_ =
           (longlong)&FSlateAccessibleComboBox::_vftable__for__FSlateAccessibleWidget__;
      this_00[1]._padding_ =
           (longlong)&FSlateAccessibleComboBox::_vftable__for__IAccessibleProperty__;
      LOCK();
      paVar1 = &(FVar4.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((FVar4.ReferenceController)->_padding_ + 8))(FVar4.ReferenceController,1);
      }
    }
    bVar8 = true;
    if (((this_00->_padding_ != 0) && (this_00->_padding_ != 0)) &&
       (0 < *(int *)(this_00->_padding_ + 8))) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InObject || !InObject->DoesSharedInstanceExist()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x7a5,L"Trying to share an already-shared object");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TSharedRef<FSlateAccessibleWidget,1> *)(*pcVar3)();
        return pTVar7;
      }
    }
  }
  local_res10.Object = this_00;
  TSharedRef<FSlateAccessibleWidget,1>::TSharedRef<FSlateAccessibleWidget,1><FSlateAccessibleWidget>
            (__return_storage_ptr__,&local_res10);
  if (bVar8) {
    TSharedRef<SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>,1>::
    ~TSharedRef<SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>,1>(&local_28);
  }
  return __return_storage_ptr__;
}

// GenerateMenuItemRow @ 1430c5260

TSharedRef<ITableRow,1> * __thiscall
SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>::GenerateMenuItemRow
          (SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_> *this,
          TSharedRef<ITableRow,1> *__return_storage_ptr__,
          TSharedPtr<FTextStyles::FFontFamily,1> *param_1,TSharedRef<STableViewBase,1> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  bool bVar3;
  char cVar4;
  FArguments *pFVar5;
  TSlateDecl<SComboRow<TSharedPtr<FTextStyles::FFontFamily,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
  *pTVar6;
  TSharedRef<SComboRow<TSharedPtr<FTextStyles::FFontFamily,1>_>,1> *pTVar7;
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
  TSharedPtr<FTextStyles::FFontFamily,1> local_858;
  longlong *local_848;
  FMRSWRecursiveAccessDetector *local_840;
  bool local_838;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_828;
  TSharedRef<SComboRow<TSharedPtr<FTextStyles::FFontFamily,1>_>,1> local_808;
  TSlateDecl<SComboRow<TSharedPtr<FTextStyles::FFontFamily,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
  local_7f8;
  TSlateDecl<SComboRow<TSharedPtr<FTextStyles::FFontFamily,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
  local_7e0;
  undefined1 local_7c8 [552];
  undefined1 local_5a0 [24];
  FArguments local_588;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnGenerateWidget,
             (FReadAccessScope *)&local_848);
  if (((*(int *)&(this->OnGenerateWidget).field_0x10 == 0) ||
      (plVar11 = *(longlong **)&(this->OnGenerateWidget).field_0x8, plVar11 == (longlong *)0x0)) ||
     (cVar4 = (**(code **)(*plVar11 + 0x38))(), cVar4 == '\0')) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_848);
  pFVar5 = SComboRow<TSharedPtr<FTextStyles::FFontFamily,1>_>::FArguments::FArguments
                     ((FArguments *)local_7c8);
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
               (FWriteAccessScope *)&local_848);
    if (((int)local_880 != 0) && (FStack_888.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_888.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_888,0,0,0x10);
      local_880 = local_880 & 0xffffffff00000000;
    }
    if (local_838 == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_840,(FDestructionSentinel *)&local_848)
      ;
    }
    if (FStack_888.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_888.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_890);
    local_858.Object = param_1->Object;
    local_858.SharedReferenceCount.ReferenceController =
         (param_1->SharedReferenceCount).ReferenceController;
    if (local_858.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_858.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_858.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnGenerateWidget,
               (FReadAccessScope *)&local_848);
    if (*(int *)&(this->OnGenerateWidget).field_0x10 != 0) {
      plVar11 = *(longlong **)&(this->OnGenerateWidget).field_0x8;
    }
    local_828._Widget.Object = (STextBlock *)local_858.Object;
    local_828._Widget.SharedReferenceCount.ReferenceController =
         local_858.SharedReferenceCount.ReferenceController;
    local_858.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_858.Object = (FFontFamily *)0x0;
    (**(code **)(*plVar11 + 0x60))(plVar11,&local_870,&local_828);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_848);
    TSharedPtr<FTextStyles::FFontFamily,1>::~TSharedPtr<FTextStyles::FFontFamily,1>(&local_858);
    if (pTStack_868 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTStack_868->SharedReferenceCount = (atomic<int>)((int)pTStack_868->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar1 = (pFVar5->_Content).Widget.SharedReferenceCount.ReferenceController;
    (pFVar5->_Content).Widget.Object = (SWidget *)local_870;
    (pFVar5->_Content).Widget.SharedReferenceCount.ReferenceController = pTStack_868;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    local_res8.Arg0 = param_2;
    pTVar6 = MakeTDecl<SComboRow<TSharedPtr<FTextStyles::FFontFamily,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
                       (&local_7f8,"SComboRow<OptionType>",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Input\\SComboBox.h"
                        ,0x22d,&local_res8);
    pTVar7 = TSlateDecl<SComboRow<TSharedPtr<FTextStyles::FFontFamily,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
             ::operator<<=(pTVar6,&local_808,pFVar5);
    __return_storage_ptr__->Object = (ITableRow *)pTVar7->Object;
    pTVar1 = (pTVar7->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_808.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_7f8._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_868)
    ;
  }
  else {
    pFVar8 = STextBlock::FArguments::FArguments(&local_588);
    pFVar9 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)&local_848,L"SlateCore",L"ComboBoxMissingOnGenerateWidgetMethod",
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
    local_828._Widget.Object = (STextBlock *)LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope((FMemScope *)&local_870,(FName *)&local_828,true);
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
              (&local_828,"STextBlock",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Input\\SComboBox.h"
               ,0x238,(T0RequiredArgs *)&local_res8);
    FMemScope::~FMemScope((FMemScope *)&local_870);
    FLLMScope::~FLLMScope(local_878);
    pTVar10 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                        (&local_828,(TSharedRef<STextBlock,1> *)&local_7f8,pFVar8);
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
    local_858.Object = (FFontFamily *)param_2;
    pTVar6 = MakeTDecl<SComboRow<TSharedPtr<FTextStyles::FFontFamily,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
                       (&local_7e0,"SComboRow<OptionType>",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Input\\SComboBox.h"
                        ,0x236,(T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&> *)&local_858);
    pTVar7 = TSlateDecl<SComboRow<TSharedPtr<FTextStyles::FFontFamily,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
             ::operator<<=(pTVar6,&local_808,pFVar5);
    __return_storage_ptr__->Object = (ITableRow *)pTVar7->Object;
    pTVar2 = (pTVar7->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_808.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_7e0._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_7f8._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_828._Widget.SharedReferenceCount.ReferenceController);
    if ((ITextData *)local_848 != (ITextData *)0x0) {
      (**(code **)(*local_848 + 0x10))();
    }
    STextBlock::FArguments::~FArguments(&local_588);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_5a0);
  if ((void *)local_5a0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_5a0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_5a0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_7c8._520_8_);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_7c8);
  TSharedPtr<FTextStyles::FFontFamily,1>::~TSharedPtr<FTextStyles::FFontFamily,1>(param_1);
  return __return_storage_ptr__;
}

// GetDefaultAccessibleText @ 1430c8a00

TOptional<FText> * __thiscall
SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>::GetDefaultAccessibleText
          (SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_> *this,
          TOptional<FText> *__return_storage_ptr__,EAccessibleType param_1)

{
  code *pcVar1;
  bool bVar2;
  FText *pFVar3;
  TOptional<FText> *pTVar4;
  FText local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_struct_TOptional<FText>___cdecl_SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_struct_TOptional<FText>___cdecl_SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_struct_TOptional<FText>___cdecl_SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FString::FString(&`public:_virtual_struct_TOptional<FText>___cdecl_SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
                          ::__l2::Name,L"Combo Box");
      atexit(`SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>::GetDefaultAccessibleText'::__l2::
             _dynamic_atexit_destructor_for__Name__);
      _Init_thread_footer(&`public:_virtual_struct_TOptional<FText>___cdecl_SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pFVar3 = FText::FromString(&local_18,
                             &`public:_virtual_struct_TOptional<FText>___cdecl_SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
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

// IsInteractable @ 1430d3370

bool __thiscall
SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>::IsInteractable
          (SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_> *this)

{
  return (bool)*(undefined1 *)((longlong)&this->_padding_ + 2);
}

// OnButtonClicked @ 1430d9200

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>::OnButtonClicked
          (SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_> *this,FReply *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FReply *pFVar3;
  FSlateApplication *this_00;
  longlong *plVar4;
  TSharedPtr<FTextStyles::FFontFamily,1> *local_48;
  int local_40;
  TSharedPtr<FTextStyles::FFontFamily,1> local_38;
  FReadAccessScope local_28;
  
  bVar2 = SMenuAnchor::IsOpen((SMenuAnchor *)this);
  if (bVar2) {
    if ((this->ComboListView).Object == (SListView<TSharedPtr<FTextStyles::FFontFamily,1>_> *)0x0) {
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
    DestructItems<TSharedPtr<FTextStyles::FFontFamily,1>,int>(local_48,local_40);
    if (local_48 != (TSharedPtr<FTextStyles::FFontFamily,1> *)0x0) {
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

// OnKeyDown @ 1430dbb60

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>::OnKeyDown
          (SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_> *this,FReply *__return_storage_ptr__,
          FGeometry *param_1,FKeyEvent *param_2)

{
  FName FVar1;
  IItemsSource<TSharedPtr<FTextStyles::FFontFamily,1>_> *pIVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  FSlateApplication *pFVar6;
  SListView<TSharedPtr<FTextStyles::FFontFamily,1>_> *pSVar7;
  TSharedRef<SWidget,1> *pTVar8;
  TSharedPtr<FTextStyles::FFontFamily,1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  int iVar11;
  SWidget *pSVar12;
  bool bVar13;
  uint uStackX_c;
  TSharedPtr<FTextStyles::FFontFamily,1> local_128;
  TSharedPtr<FTextStyles::FFontFamily,1> local_118;
  TSharedPtr<FTextStyles::FFontFamily,1> local_108;
  undefined1 local_f8 [16];
  FReply local_e8;
  
  bVar13 = false;
  cVar4 = (**(code **)(this->_padding_ + 0x1b0))();
  if (cVar4 == '\0') goto LAB_1430dbd47;
  pFVar6 = FSlateApplication::Get();
  cVar4 = (**(code **)(*(longlong *)pFVar6 + 0xb0))(pFVar6,param_2);
  pFVar6 = FSlateApplication::Get();
  cVar5 = (**(code **)(*(longlong *)pFVar6 + 0xa0))(pFVar6);
  if (this->EnableGamepadNavigationMode == false) {
    if (cVar5 == '\x02') {
      local_128.SharedReferenceCount.ReferenceController =
           (this->SelectedItem).SharedReferenceCount.ReferenceController;
      local_128.Object = (this->SelectedItem).Object;
      if (local_128.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_128.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_128.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (local_128.Object == (FFontFamily *)0x0) goto LAB_1430dbe91;
      if (local_128.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_128.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_128.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_108.Object = local_128.Object;
      local_108.SharedReferenceCount.ReferenceController =
           local_128.SharedReferenceCount.ReferenceController;
      pSVar7 = TSharedPtr<SListView<TSharedPtr<FTextStyles::FFontFamily,1>_>,1>::operator->
                         (&this->ComboListView);
      pIVar2 = (pSVar7->ViewSource).Ptr;
      if (pIVar2 == (IItemsSource<TSharedPtr<FTextStyles::FFontFamily,1>_> *)0x0) {
        local_118.Object = (FFontFamily *)0x0;
        pTVar9 = &local_118;
        local_118.SharedReferenceCount.ReferenceController =
             local_118.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
      }
      else {
        pTVar9 = (TSharedPtr<FTextStyles::FFontFamily,1> *)
                 (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_f8);
      }
      local_f8._0_8_ = pTVar9->Object;
      local_f8._8_8_ = (pTVar9->SharedReferenceCount).ReferenceController;
      for (pSVar12 = (SWidget *)local_f8._0_8_;
          pSVar12 !=
          (SWidget *)((FText *)&((SWidget *)local_f8._0_8_)->_padding_ + (int)local_f8._8_8_);
          pSVar12 = (SWidget *)&pSVar12->_padding_) {
        if ((FFontFamily *)(((FText *)&pSVar12->_padding_)->TextData).Reference == local_108.Object)
        {
          iVar11 = (int)((longlong)pSVar12 - local_f8._0_8_ >> 4);
          if (0 < iVar11) {
            pTVar9 = TArrayView<TSharedPtr<FTextStyles::FFontFamily,1>_const_,int>::operator[]
                               ((TArrayView<TSharedPtr<FTextStyles::FFontFamily,1>_const_,int> *)
                                local_f8,iVar11 + -1);
            local_118.Object = pTVar9->Object;
            local_118.SharedReferenceCount.ReferenceController =
                 (pTVar9->SharedReferenceCount).ReferenceController;
            if (local_118.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_118.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_118.SharedReferenceCount.ReferenceController)->SharedReferenceCount
                   + 1);
              UNLOCK();
            }
            SetSelectedItem(this,&local_118);
          }
          break;
        }
      }
      pTVar9 = &local_108;
    }
    else {
      if (cVar5 != '\x03') {
        SComboButton::OnKeyDown((SComboButton *)this,__return_storage_ptr__,param_1,param_2);
        return __return_storage_ptr__;
      }
      local_128.SharedReferenceCount.ReferenceController =
           (this->SelectedItem).SharedReferenceCount.ReferenceController;
      local_128.Object = (this->SelectedItem).Object;
      if (local_128.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_128.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_128.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (local_128.Object == (FFontFamily *)0x0) goto LAB_1430dbe91;
      if (local_128.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_128.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_128.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_118.Object = local_128.Object;
      local_118.SharedReferenceCount.ReferenceController =
           local_128.SharedReferenceCount.ReferenceController;
      pSVar7 = TSharedPtr<SListView<TSharedPtr<FTextStyles::FFontFamily,1>_>,1>::operator->
                         (&this->ComboListView);
      pIVar2 = (pSVar7->ViewSource).Ptr;
      if (pIVar2 == (IItemsSource<TSharedPtr<FTextStyles::FFontFamily,1>_> *)0x0) {
        local_108.Object = (FFontFamily *)0x0;
        pTVar9 = &local_108;
        local_108.SharedReferenceCount.ReferenceController =
             local_108.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
      }
      else {
        pTVar9 = (TSharedPtr<FTextStyles::FFontFamily,1> *)
                 (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_f8);
      }
      local_f8._0_8_ = pTVar9->Object;
      local_f8._8_8_ = (pTVar9->SharedReferenceCount).ReferenceController;
      for (pSVar12 = (SWidget *)local_f8._0_8_;
          pSVar12 !=
          (SWidget *)((FText *)&((SWidget *)local_f8._0_8_)->_padding_ + (int)local_f8._8_8_);
          pSVar12 = (SWidget *)&pSVar12->_padding_) {
        if ((FFontFamily *)(((FText *)&pSVar12->_padding_)->TextData).Reference == local_118.Object)
        {
          iVar11 = (int)((longlong)pSVar12 - local_f8._0_8_ >> 4);
          goto LAB_1430dbf6a;
        }
      }
      iVar11 = -1;
LAB_1430dbf6a:
      if (iVar11 < (int)local_f8._8_8_ + -1) {
        pTVar9 = TArrayView<TSharedPtr<FTextStyles::FFontFamily,1>_const_,int>::operator[]
                           ((TArrayView<TSharedPtr<FTextStyles::FFontFamily,1>_const_,int> *)
                            local_f8,iVar11 + 1);
        local_108.Object = pTVar9->Object;
        local_108.SharedReferenceCount.ReferenceController =
             (pTVar9->SharedReferenceCount).ReferenceController;
        if (local_108.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_108.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_108.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        SetSelectedItem(this,&local_108);
      }
      pTVar9 = &local_118;
    }
    TSharedPtr<FTextStyles::FFontFamily,1>::~TSharedPtr<FTextStyles::FFontFamily,1>(pTVar9);
LAB_1430dbe91:
    FReply::FReply(__return_storage_ptr__,true);
    TSharedPtr<FTextStyles::FFontFamily,1>::~TSharedPtr<FTextStyles::FFontFamily,1>(&local_128);
    return __return_storage_ptr__;
  }
  if (cVar4 == '\0') {
    if (this->bControllerInputCaptured == false) {
      this->bControllerInputCaptured = true;
      pFVar6 = FSlateApplication::Get();
      FSlateApplication::PlaySound(pFVar6,&this->PressedSound,0);
      TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::ExecuteIfBound
                (&this->OnComboBoxOpening);
      SComboButton::OnButtonClicked((SComboButton *)this,__return_storage_ptr__);
      return __return_storage_ptr__;
    }
    this->bControllerInputCaptured = false;
    pSVar7 = TSharedPtr<SListView<TSharedPtr<FTextStyles::FFontFamily,1>_>,1>::operator->
                       (&this->ComboListView);
    (**(code **)(pSVar7->_padding_ + 0xd0))(&pSVar7->_padding_,&local_128);
    if (0 < (int)local_128.SharedReferenceCount.ReferenceController) {
      local_118.Object = (FFontFamily *)((local_128.Object)->DisplayName).TextData.Reference;
      local_118.SharedReferenceCount.ReferenceController =
           ((FSharedReferencer<1> *)&((local_128.Object)->DisplayName).Flags)->ReferenceController;
      if (local_118.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_118.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_118.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      OnSelectionChanged_Internal(this,&local_118,Direct);
    }
    FReply::FReply(&local_e8,true);
    pTVar8 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&this->_padding_,
                        (TSharedRef<SWidget,1> *)local_f8);
    FReply::SetUserFocus(&local_e8,pTVar8,SetDirectly,false);
    FReply::FReply(__return_storage_ptr__,&local_e8);
    FReply::~FReply(&local_e8);
    DestructItems<TSharedPtr<FTextStyles::FFontFamily,1>,int>
              ((TSharedPtr<FTextStyles::FFontFamily,1> *)local_128.Object,
               (int)local_128.SharedReferenceCount.ReferenceController);
    if (local_128.Object == (FFontFamily *)0x0) {
      return __return_storage_ptr__;
    }
    FMemory::Free(local_128.Object);
    return __return_storage_ptr__;
  }
  if (cVar4 == '\x01') {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
LAB_1430dbd1e:
    bVar3 = true;
  }
  else {
    pTVar10 = (param_2->Key).KeyDetails.SharedReferenceCount.ReferenceController;
    FVar1 = (param_2->Key).KeyName;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar13 = true;
    if (FVar1 == EKeys::BackSpace.KeyName) goto LAB_1430dbd1e;
    bVar3 = false;
  }
  if (bVar13) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
  bVar13 = this->bControllerInputCaptured;
  if (bVar3) {
    OnMenuOpenChanged(this,false);
  }
  if (bVar13 != false) {
    FReply::FReply(__return_storage_ptr__,true);
    return __return_storage_ptr__;
  }
LAB_1430dbd47:
  SWidget::OnKeyDown((SWidget *)this,__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// OnKeyDownHandler @ 1430dc360

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>::OnKeyDownHandler
          (SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_> *this,FReply *__return_storage_ptr__,
          FGeometry *param_1,FKeyEvent *param_2)

{
  FName FVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  FReply *pFVar4;
  longlong *plVar5;
  bool bVar6;
  TSharedPtr<FTextStyles::FFontFamily,1> *local_28;
  int local_20;
  TSharedPtr<FTextStyles::FFontFamily,1> local_18;
  
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
    if (((this->ComboListView).Object == (SListView<TSharedPtr<FTextStyles::FFontFamily,1>_> *)0x0)
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
      DestructItems<TSharedPtr<FTextStyles::FFontFamily,1>,int>(local_28,local_20);
      if (local_28 == (TSharedPtr<FTextStyles::FFontFamily,1> *)0x0) {
        return __return_storage_ptr__;
      }
      FMemory::Free(local_28);
      return __return_storage_ptr__;
    }
    DestructItems<TSharedPtr<FTextStyles::FFontFamily,1>,int>(local_28,local_20);
    if (local_28 != (TSharedPtr<FTextStyles::FFontFamily,1> *)0x0) {
      FMemory::Free(local_28);
    }
  }
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnMenuOpenChanged @ 1430dd6a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>::OnMenuOpenChanged
          (SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_> *this,bool param_1)

{
  FFontFamily *pFVar1;
  SListView<TSharedPtr<FTextStyles::FFontFamily,1>_> *pSVar2;
  code *pcVar3;
  bool bVar4;
  FSlateApplication *this_00;
  SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_> *local_res18 [2];
  TSharedPtr<FTextStyles::FFontFamily,1> local_48;
  code *local_38;
  SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_> **local_30;
  TSharedPtr<FTextStyles::FFontFamily,1> local_28;
  TSharedPtr<FTextStyles::FFontFamily,1> local_18;
  
  if (!param_1) {
    pFVar1 = (this->SelectedItem).Object;
    this->bControllerInputCaptured = false;
    if (pFVar1 != (FFontFamily *)0x0) {
      local_48.SharedReferenceCount.ReferenceController =
           (this->SelectedItem).SharedReferenceCount.ReferenceController;
      if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_48.Object = pFVar1;
      if ((this->ComboListView).Object == (SListView<TSharedPtr<FTextStyles::FFontFamily,1>_> *)0x0)
      {
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
      local_28.Object = local_48.Object;
      local_28.SharedReferenceCount.ReferenceController =
           local_48.SharedReferenceCount.ReferenceController;
      if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      SListView<TSharedPtr<FTextStyles::FFontFamily,1>_>::SetSelection
                (pSVar2,&local_28,OnNavigation);
      if ((this->ComboListView).Object == (SListView<TSharedPtr<FTextStyles::FFontFamily,1>_> *)0x0)
      {
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
      local_18.Object = local_48.Object;
      local_18.SharedReferenceCount.ReferenceController =
           local_48.SharedReferenceCount.ReferenceController;
      if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      SListView<TSharedPtr<FTextStyles::FFontFamily,1>_>::RequestScrollIntoView(pSVar2,&local_18,0);
      TSharedPtr<FTextStyles::FFontFamily,1>::~TSharedPtr<FTextStyles::FFontFamily,1>(&local_48);
    }
    this_00 = FSlateApplication::Get();
    local_30 = local_res18;
    local_38 = UE::Core::Private::Function::
               TFunctionRefCaller<`SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>::OnMenuOpenChanged'::__l5::<lambda_1>,void,FSlateUser_&>
               ::Call;
    local_res18[0] = this;
    FSlateApplication::ForEachUser
              (this_00,(TFunctionRef<void___cdecl(FSlateUser_&)> *)&local_38,false);
  }
  return;
}

// OnSelectionChanged_Internal @ 1430e2510

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>::OnSelectionChanged_Internal
          (SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_> *this,
          TSharedPtr<FTextStyles::FFontFamily,1> *param_1,Type param_2)

{
  FFontFamily *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  FSlateApplication *this_00;
  TSharedPtr<FTextStyles::FFontFamily,1> local_18;
  
  if (param_2 != OnNavigation) {
    if (param_1->Object != (this->SelectedItem).Object) {
      this_00 = FSlateApplication::Get();
      FSlateApplication::PlaySound(this_00,&this->SelectionChangeSound,0);
      pFVar1 = param_1->Object;
      pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_18.Object = (this->SelectedItem).Object;
      local_18.SharedReferenceCount.ReferenceController =
           (this->SelectedItem).SharedReferenceCount.ReferenceController;
      (this->SelectedItem).Object = pFVar1;
      (this->SelectedItem).SharedReferenceCount.ReferenceController = pTVar2;
      TSharedPtr<FTextStyles::FFontFamily,1>::~TSharedPtr<FTextStyles::FFontFamily,1>(&local_18);
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
      TDelegate<void___cdecl(TSharedPtr<FTextStyles::FFontFamily,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
      ::ExecuteIfBound(&this->OnSelectionChanged,&local_18,param_2);
    }
    (**(code **)(this->_padding_ + 0x250))(this,0,1,0);
  }
  TSharedPtr<FTextStyles::FFontFamily,1>::~TSharedPtr<FTextStyles::FFontFamily,1>(param_1);
  return;
}

// SetSelectedItem @ 1430f0010

void __thiscall
SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>::SetSelectedItem
          (SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_> *this,
          TSharedPtr<FTextStyles::FFontFamily,1> *param_1)

{
  SListView<TSharedPtr<FTextStyles::FFontFamily,1>_> *pSVar1;
  code *pcVar2;
  bool bVar3;
  Type *pTVar4;
  TSharedPtr<FTextStyles::FFontFamily,1> local_28;
  TSharedPtr<FTextStyles::FFontFamily,1> local_18;
  
  local_28.Object = param_1->Object;
  if (local_28.Object == (FFontFamily *)0x0) {
    if ((this->ComboListView).Object == (SListView<TSharedPtr<FTextStyles::FFontFamily,1>_> *)0x0) {
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
    pTVar4 = TAttribute<enum_ESelectionMode::Type>::Get(&pSVar1->_padding_);
    if ((*pTVar4 != None) &&
       (*(int *)&(pSVar1->SelectedItems).Elements.field_0x8 !=
        *(int *)&(pSVar1->SelectedItems).Elements.field_0x34)) {
      (**(code **)(pSVar1->_padding_ + 0x30))(&pSVar1->_padding_);
      (**(code **)(pSVar1->_padding_ + 0x40))(&pSVar1->_padding_,3);
    }
    TSharedPtr<FTextStyles::FFontFamily,1>::~TSharedPtr<FTextStyles::FFontFamily,1>(param_1);
    return;
  }
  local_28.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((this->ComboListView).Object == (SListView<TSharedPtr<FTextStyles::FFontFamily,1>_> *)0x0) {
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
  local_18.Object = local_28.Object;
  local_18.SharedReferenceCount.ReferenceController =
       local_28.SharedReferenceCount.ReferenceController;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SListView<TSharedPtr<FTextStyles::FFontFamily,1>_>::SetSelection(pSVar1,&local_18,Direct);
  TSharedPtr<FTextStyles::FFontFamily,1>::~TSharedPtr<FTextStyles::FFontFamily,1>(&local_28);
  TSharedPtr<FTextStyles::FFontFamily,1>::~TSharedPtr<FTextStyles::FFontFamily,1>(param_1);
  return;
}

// SupportsKeyboardFocus @ 1430fb040

bool __thiscall
SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>::SupportsKeyboardFocus
          (SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_> *this)

{
  return (bool)(char)this->_padding_;
}

