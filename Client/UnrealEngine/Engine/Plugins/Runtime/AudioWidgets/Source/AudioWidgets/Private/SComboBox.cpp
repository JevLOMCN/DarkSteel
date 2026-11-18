// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 14

// ~SComboBox<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_> @ 14d8baa70

void __thiscall
SComboBox<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>::
~SComboBox<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>(void *this)

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

// operator() @ 14d8c90d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`SComboBox<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>::OnMenuOpenChanged'::__l5::<lambda_1>
::operator()(void *this,FSlateUser *param_1)

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

// Construct @ 14d8e61c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Removing unreachable block (ram,0x00014d8e68e1) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SComboBox<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>::Construct
          (void *this,FArguments *param_1)

{
  byte *pbVar1;
  TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_>,1>
  *pTVar2;
  FComboBoxStyle *pFVar3;
  longlong *plVar4;
  TReferenceControllerBase<1> *pTVar5;
  SScrollBar *pSVar6;
  SWidget *pSVar7;
  EAudioOscilloscopeTriggerMode *pEVar8;
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
  SListView<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_> *pSVar25;
  TSharedRef<SBox,1> *pTVar26;
  FArguments *pFVar27;
  FText *pFVar28;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> *pTVar29;
  EPopupMethod *pEVar30;
  FArguments *pFVar31;
  TAttribute<FSlateColor> *pTVar32;
  FSlateSound *pFVar33;
  SWidget *pSVar34;
  atomic<int> *paVar35;
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
  SWidget *local_14a0;
  TReferenceControllerBase<1> *local_1498;
  undefined1 local_1488 [16];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_1478;
  ForAnyElementType FStack_1470;
  ulonglong local_1468;
  FArguments *local_1460;
  FButtonStyle *local_1458;
  SBox *local_1450;
  FSharedReferencer<1> local_1448;
  undefined8 local_1440;
  undefined8 uStack_1438;
  TSharedPtr<SWidget,1> local_1430;
  TObservableArray<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_> *local_1420;
  TReferenceControllerBase<1> *pTStack_1418;
  FMemScope local_1410;
  FName local_1408;
  FMemScope local_1400;
  FComboButtonStyle *local_13f8;
  FName local_13f0;
  FSharedReferencer<1> FStack_13e8;
  NamedSlotProperty<SComboButton::FArguments> local_13e0;
  TWeakPtr<SWidget,1> local_13d0;
  EAudioOscilloscopeTriggerMode *local_13c0;
  TReferenceControllerBase<1> *local_13b8;
  TSharedPtr<EAudioOscilloscopeTriggerMode,1> local_13b0;
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
  undefined8 local_1260;
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
  undefined8 local_11b8;
  TReferenceControllerBase<1> *pTStack_11b0;
  TSharedRef<SWidget,1> local_11a8;
  TSharedRef<SWidget,1> local_1198;
  FReadAccessScope local_1188;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_1170;
  TAttribute<FMargin> local_1158;
  TAttribute<FSlateColor> local_1128;
  FArguments local_10f8;
  FArguments local_dc0;
  undefined1 local_a80 [1248];
  FArguments local_5a0;
  undefined8 uStack_48;
  
  uStack_48 = 0x14d8e61df;
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
  local_13f8 = &pFVar3->ComboButtonStyle;
  *(undefined8 *)((longlong)this + 0x430) = uVar15;
  *(undefined8 *)((longlong)this + 0x438) = uVar16;
  local_1458 = param_1->_ButtonStyle;
  if (local_1458 == (FButtonStyle *)0x0) {
    local_1458 = &(pFVar3->ComboButtonStyle).ButtonStyle;
  }
  pFVar33 = &(param_1->_PressedSoundOverride).TypedValue;
  if ((param_1->_PressedSoundOverride).bIsSet == false) {
    pFVar33 = &pFVar3->PressedSlateSound;
  }
  FSlateSound::operator=((FSlateSound *)((longlong)this + 0x3f0),pFVar33);
  pFVar33 = &(param_1->_SelectionChangeSoundOverride).TypedValue;
  if ((param_1->_SelectionChangeSoundOverride).bIsSet == false) {
    pFVar33 = (FSlateSound *)(*(longlong *)((longlong)this + 0x428) + 0x588);
  }
  FSlateSound::operator=((FSlateSound *)((longlong)this + 0x408),pFVar33);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)((longlong)this + 0x488),
             &param_1->_OnComboBoxOpening);
  TDelegate<void___cdecl(TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
  ::operator=((void *)((longlong)this + 0x440),&param_1->_OnSelectionChanged);
  if (&param_1->_OnGenerateWidget !=
      (TDelegate<TSharedRef<SWidget,1>___cdecl(TSharedPtr<EAudioOscilloscopeTriggerMode,1>),FDefaultDelegateUserPolicy>
       *)((longlong)this + 0x4a0)) {
    local_1508 = (undefined1  [8])0x0;
    local_1500.Data = (FScriptContainerElement *)0x0;
    local_14f8 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->_OnGenerateWidget
               ,&local_1188);
    if ((*(int *)&(param_1->_OnGenerateWidget).field_0x10 != 0) &&
       (plVar4 = *(longlong **)&(param_1->_OnGenerateWidget).field_0x8, plVar4 != (longlong *)0x0))
    {
      (**(code **)(*plVar4 + 0x50))(plVar4,local_1508);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_1188);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x4a0),
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
  *(bool *)((longlong)this + 0x4b8) = param_1->_EnableGamepadNavigationMode;
  *(undefined1 *)((longlong)this + 0x4b9) = 0;
  pTVar5 = (param_1->_CustomScrollbar).SharedReferenceCount.ReferenceController;
  pSVar6 = (param_1->_CustomScrollbar).Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1260 = *(undefined8 *)((longlong)this + 0x478);
  pTStack_1258 = *(TReferenceControllerBase<1> **)((longlong)this + 0x480);
  *(SScrollBar **)((longlong)this + 0x478) = pSVar6;
  *(TReferenceControllerBase<1> **)((longlong)this + 0x480) = pTVar5;
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
  pFVar21 = SListView<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>::FArguments::FArguments
                      (local_a80);
  pTVar5 = (param_1->_OptionsSource_SharedObservableArray).SharedReferenceCount.ReferenceController;
  local_1420 = (TObservableArray<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_> *)
               param_1->_OptionsSource_ArrayPointer;
  local_1530 = (SScrollBar *)param_1->_OptionsSource_ObservableArrayPointer;
  local_1520 = (FName)(param_1->_OptionsSource_SharedObservableArray).Object;
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
    paVar35 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar35 = &pTVar5->SharedReferenceCount;
    LOCK();
    *paVar35 = (atomic<int>)((int)*paVar35 + 1);
    UNLOCK();
  }
  pFVar21->_ListItemsSource_ArrayPointer =
       (TArray<TSharedPtr<EAudioOscilloscopeTriggerMode,1>,TSizedDefaultAllocator<32>_> *)0x0;
  pFVar21->_ListItemsSource_ObservableArrayPointer =
       (TObservableArray<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_> *)0x0;
  pTVar2 = &pFVar21->_ListItemsSource_SharedObservableArray;
  local_13f0.ComparisonIndex.Value = 0;
  local_13f0.Number = 0;
  FStack_13e8.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (pTVar2 != (TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_>,1>
                 *)&local_13f0) {
    pTVar2->Object = (TObservableArray<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(pFVar21->_ListItemsSource_SharedObservableArray).SharedReferenceCount,&FStack_13e8)
    ;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_13e8.ReferenceController);
  pFVar21->_ListItemsSource_ArrayPointer = &local_1420->Array;
  pFVar21->_ListItemsSource_ObservableArrayPointer =
       (TObservableArray<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_> *)local_1530;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar35 = (atomic<int>)((int)*paVar35 + 1);
    UNLOCK();
  }
  local_1420 = pTVar2->Object;
  pTStack_1418 = (pFVar21->_ListItemsSource_SharedObservableArray).SharedReferenceCount.
                 ReferenceController;
  pTVar2->Object = (TObservableArray<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_> *)local_1520;
  (pFVar21->_ListItemsSource_SharedObservableArray).SharedReferenceCount.ReferenceController =
       pTVar5;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1418);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar21->_OnGenerateRow,
             (FWriteAccessScope *)&local_1310);
  local_12f8 = &(pFVar21->_OnGenerateRow).field_0x8;
  puVar22 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_12f8);
  pSVar34 = local_res8;
  if (puVar22 != (undefined8 *)0x0) {
    uStack_1514 = uStack_1438._4_4_;
    local_1520 = (FName)GenerateMenuItemRow;
    uStack_1518 = 0;
    pTVar23 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)((longlong)this + 8),&local_1250);
    pSVar34 = (SWidget *)(pTVar23->SharedReferenceCount).ReferenceController;
    pSVar7 = pTVar23->Object;
    if (pSVar34 != (SWidget *)0x0) {
      LOCK();
      *(atomic<int> *)&pSVar34->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar34->_padding_ + 1);
      UNLOCK();
      LOCK();
      *(atomic<int> *)&pSVar34->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar34->_padding_ + 1);
      UNLOCK();
    }
    *puVar22 = &
               ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VITableRow___00__V__TSharedPtr_W4EAudioOscilloscopeTriggerMode___00__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar24 = FDelegateHandle::GenerateNewID();
    puVar22[2] = uVar24;
    *puVar22 = &
               ___7__TBaseSPMethodDelegateInstance__0A_V__SComboBox_V__TSharedPtr_W4EAudioOscilloscopeTriggerMode___00_____00__A6A_AV__TSharedRef_VITableRow___00__V__TSharedPtr_W4EAudioOscilloscopeTriggerMode___00__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar22[3] = pSVar7;
    puVar22[4] = pSVar34;
    if (pSVar34 != (SWidget *)0x0) {
      LOCK();
      ((atomic<int> *)&pSVar34->_padding_)[1] =
           (atomic<int>)((int)((atomic<int> *)&pSVar34->_padding_)[1] + 1);
      UNLOCK();
    }
    bVar13 = true;
    bVar12 = true;
    bVar11 = true;
    *(FName *)(puVar22 + 5) = local_1520;
    puVar22[6] = CONCAT44(uStack_1514,uStack_1518);
  }
  if (bVar12) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar34);
  }
  if (bVar13) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar34);
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
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar21->_OnSelectionChanged
             ,(FWriteAccessScope *)&local_12f0);
  local_12d8 = &(pFVar21->_OnSelectionChanged).field_0x8;
  puVar22 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_12d8);
  pSVar34 = local_res8;
  if (puVar22 != (undefined8 *)0x0) {
    local_1530 = (SScrollBar *)OnSelectionChanged_Internal;
    pTStack_1528 = (TReferenceControllerBase<1> *)((ulonglong)uStack_1438 & 0xffffffff00000000);
    pTVar23 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)((longlong)this + 8),&local_1198);
    pSVar34 = (SWidget *)(pTVar23->SharedReferenceCount).ReferenceController;
    local_1520 = (FName)pTVar23->Object;
    if (pSVar34 != (SWidget *)0x0) {
      LOCK();
      *(atomic<int> *)&pSVar34->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar34->_padding_ + 1);
      UNLOCK();
      LOCK();
      *(atomic<int> *)&pSVar34->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar34->_padding_ + 1);
      UNLOCK();
    }
    bVar11 = true;
    bVar13 = true;
    bVar12 = true;
    *puVar22 = &
               ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_W4EAudioOscilloscopeTriggerMode___00__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar24 = FDelegateHandle::GenerateNewID();
    puVar22[2] = uVar24;
    *puVar22 = &
               ___7__TBaseSPMethodDelegateInstance__0A_V__SComboBox_V__TSharedPtr_W4EAudioOscilloscopeTriggerMode___00_____00__A6AXV__TSharedPtr_W4EAudioOscilloscopeTriggerMode___00__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FName *)(puVar22 + 3) = local_1520;
    puVar22[4] = pSVar34;
    if (pSVar34 != (SWidget *)0x0) {
      LOCK();
      ((atomic<int> *)&pSVar34->_padding_)[1] =
           (atomic<int>)((int)((atomic<int> *)&pSVar34->_padding_)[1] + 1);
      UNLOCK();
    }
    puVar22[5] = local_1530;
    puVar22[6] = pTStack_1528;
  }
  if (bVar11) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar34);
  }
  if (bVar12) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar34);
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
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar21->_OnKeyDownHandler,
             (FWriteAccessScope *)&local_12d0);
  local_12b8 = &(pFVar21->_OnKeyDownHandler).field_0x8;
  puVar22 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_12b8);
  pSVar34 = local_res8;
  if (puVar22 != (undefined8 *)0x0) {
    local_1530 = (SScrollBar *)OnKeyDownHandler;
    pTStack_1528 = (TReferenceControllerBase<1> *)((ulonglong)uStack_1438 & 0xffffffff00000000);
    pTVar23 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)((longlong)this + 8),&local_11a8);
    pSVar34 = (SWidget *)(pTVar23->SharedReferenceCount).ReferenceController;
    local_1520 = (FName)pTVar23->Object;
    if (pSVar34 != (SWidget *)0x0) {
      LOCK();
      *(atomic<int> *)&pSVar34->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar34->_padding_ + 1);
      UNLOCK();
      LOCK();
      *(atomic<int> *)&pSVar34->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar34->_padding_ + 1);
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
               ___7__TBaseSPMethodDelegateInstance__0A_V__SComboBox_V__TSharedPtr_W4EAudioOscilloscopeTriggerMode___00_____00__A6A_AVFReply__AEBUFGeometry__AEBUFKeyEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FName *)(puVar22 + 3) = local_1520;
    puVar22[4] = pSVar34;
    if (pSVar34 != (SWidget *)0x0) {
      LOCK();
      ((atomic<int> *)&pSVar34->_padding_)[1] =
           (atomic<int>)((int)((atomic<int> *)&pSVar34->_padding_)[1] + 1);
      UNLOCK();
    }
    puVar22[5] = local_1530;
    puVar22[6] = pTStack_1528;
  }
  if (bVar11) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar34);
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
  (pFVar21->_SelectionMode).Value = Single;
  (pFVar21->_SelectionMode).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar21->_SelectionMode).Getter,
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
  local_1530 = (pFVar21->_ExternalScrollbar).Object;
  pTStack_1528 = (pFVar21->_ExternalScrollbar).SharedReferenceCount.ReferenceController;
  (pFVar21->_ExternalScrollbar).Object = pSVar6;
  (pFVar21->_ExternalScrollbar).SharedReferenceCount.ReferenceController = pTVar5;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1528);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  FLLMScope::FLLMScope(local_res20,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1520 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1410,&local_1520,true);
  TSlateDecl<SListView<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>,RequiredArgs::T0RequiredArgs>
  ::
  TSlateDecl<SListView<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>,RequiredArgs::T0RequiredArgs>
            (&local_14a0,"SComboListType",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Input\\SComboBox.h"
             ,0xda,(T0RequiredArgs *)&local_res8);
  FMemScope::~FMemScope(&local_1410);
  FLLMScope::~FLLMScope(local_res20);
  if (local_1498 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_1498->SharedReferenceCount = (atomic<int>)((int)local_1498->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_11b8 = *(undefined8 *)((longlong)this + 0x468);
  pTStack_11b0 = *(TReferenceControllerBase<1> **)((longlong)this + 0x470);
  *(SWidget **)((longlong)this + 0x468) = local_14a0;
  *(TReferenceControllerBase<1> **)((longlong)this + 0x470) = local_1498;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_11b0);
  pSVar25 = TSharedPtr<SListView<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>,1>::operator->
                      (&local_14a0);
  SWidget::SWidgetConstruct((SWidget *)pSVar25,(FSlateBaseNamedArgs *)pFVar21);
  pSVar34 = local_14a0;
  SListView<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>::Construct(local_14a0,pFVar21);
  pSVar25 = TSharedPtr<SListView<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>,1>::operator->
                      (&local_14a0);
  if ((pSVar25->_padding_ & 0x10) == 0) {
    cVar19 = (**(code **)(pSVar25->_padding_ + 0x228))(pSVar25);
    bVar20 = 0;
    if (cVar19 == '\0') goto LAB_14d8e6b2e;
  }
  bVar20 = 0x20;
LAB_14d8e6b2e:
  *(byte *)&pSVar25->_padding_ = (byte)pSVar25->_padding_ & 0xdf;
  *(byte *)&pSVar25->_padding_ = (byte)pSVar25->_padding_ | bVar20;
  pSVar25 = TSharedPtr<SListView<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>,1>::operator->
                      (&local_14a0);
  pbVar1 = (byte *)((longlong)&pSVar25->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((local_14a0 == (SWidget *)0x0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar18)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pTVar5 = local_1498;
  local_1498 = (TReferenceControllerBase<1> *)0x0;
  local_14a0 = (SWidget *)0x0;
  if ((pSVar34 == (SWidget *)0x0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar18)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pFVar17 = local_1460;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_11c8 = (local_1460->_Content).Widget.Object;
  pTStack_11c0 = (local_1460->_Content).Widget.SharedReferenceCount.ReferenceController;
  (local_1460->_Content).Widget.Object = pSVar34;
  (local_1460->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar5;
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
  pTVar26 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_11e0,&local_1230,pFVar17);
  local_1448.ReferenceController = (pTVar26->SharedReferenceCount).ReferenceController;
  local_1450 = pTVar26->Object;
  if (local_1448.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1448.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_1448.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((SBox **)((longlong)this + 0x4c0) != &local_1450) {
    *(SBox **)((longlong)this + 0x4c0) = local_1450;
    local_1450 = (SBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)this + 0x4c8),&local_1448);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1448.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1230.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_11e0._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1498);
  SListView<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>::FArguments::~FArguments(local_a80);
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
    pFVar27 = STextBlock::FArguments::FArguments(&local_5a0);
    pFVar28 = FText::AsLocalizable_Advanced_LocText
                        (&local_11f0,L"SComboBox",L"ContentWarning",L"No Content Provided");
    FText::FText(&local_1290.Value,pFVar28);
    local_1290.bIsSet = true;
    local_1290.Getter._16_8_ = 0;
    local_1290.Getter._0_8_ = 0;
    local_1290.Getter._8_8_ = 0;
    pFVar27 = STextBlock::FArguments::Text(pFVar27,&local_1290);
    local_1348 = 0;
    local_1344 = 1;
    local_1330 = 0;
    local_1358 = FLinearColor::Red.field0_0x0;
    local_1340 = 0;
    uStack_1338 = 0;
    pFVar27 = STextBlock::FArguments::ColorAndOpacity
                        (pFVar27,(TAttribute<FSlateColor> *)&local_1358._s_0);
    pTVar29 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                        (&local_1170,"STextBlock",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Input\\SComboBox.h"
                         ,0xe9,local_res18);
    pTVar29 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::Expose<SWidget>
                        (pTVar29,&local_1430);
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=(pTVar29,&local_1240,pFVar27);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1240.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1170._Widget.SharedReferenceCount.ReferenceController);
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
      pEVar30 = TOptional<enum_EPopupMethod>::GetValue(&local_1538);
      ((local_13e0.OwnerDeclaration)->_Method).TypedValue = *pEVar30;
      ((local_13e0.OwnerDeclaration)->_Method).bIsSet = true;
    }
  }
  local_13e0.SlotContent = &(local_13e0.OwnerDeclaration)->_ButtonContent;
  pTVar23 = TSharedPtr<SWidget,1>::ToSharedRef(&local_1430,&local_1200);
  pFVar31 = NamedSlotProperty<SComboButton::FArguments>::operator[](&local_13e0,pTVar23);
  pTVar26 = TSharedPtr<SBox,1>::ToSharedRef
                      ((TSharedPtr<SBox,1> *)((longlong)this + 0x4c0),&local_1220);
  pTVar5 = (pTVar26->SharedReferenceCount).ReferenceController;
  local_14f0 = pTVar26->Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar14 = (pFVar31->_MenuContent).Widget.SharedReferenceCount.ReferenceController;
  (pFVar31->_MenuContent).Widget.Object = (SWidget *)local_14f0;
  (pFVar31->_MenuContent).Widget.SharedReferenceCount.ReferenceController = pTVar5;
  pTStack_14e8 = pTVar5;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
  pFVar31->_HasDownArrow = param_1->_HasDownArrow;
  local_1158.Value.Left = (param_1->_ContentPadding).Value.Left;
  local_1158.Value.Top = (param_1->_ContentPadding).Value.Top;
  local_1158.Value.Right = (param_1->_ContentPadding).Value.Right;
  local_1158.Value.Bottom = (param_1->_ContentPadding).Value.Bottom;
  local_1158.bIsSet = (param_1->_ContentPadding).bIsSet;
  TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>
            (&local_1158.Getter,&(param_1->_ContentPadding).Getter);
  pFVar31 = SComboButton::FArguments::ContentPadding(pFVar31,&local_1158);
  pTVar32 = TAttribute<FSlateColor>::TAttribute<FSlateColor>(&local_1128,&param_1->_ForegroundColor)
  ;
  pFVar31 = SComboButton::FArguments::ForegroundColor(pFVar31,pTVar32);
  local_res10 = pFVar31;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar31->_OnMenuOpenChanged,
             (FWriteAccessScope *)&local_12b0);
  local_1298 = &(pFVar31->_OnMenuOpenChanged).field_0x8;
  puVar22 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_1298);
  pSVar34 = local_res8;
  if (puVar22 != (undefined8 *)0x0) {
    local_14f0 = (SBox *)OnMenuOpenChanged;
    pTStack_14e8 = (TReferenceControllerBase<1> *)((ulonglong)uStack_1438._4_4_ << 0x20);
    pTVar23 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)((longlong)this + 8),&local_1210);
    pSVar34 = (SWidget *)(pTVar23->SharedReferenceCount).ReferenceController;
    local_res8 = pTVar23->Object;
    if (pSVar34 != (SWidget *)0x0) {
      LOCK();
      *(atomic<int> *)&pSVar34->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar34->_padding_ + 1);
      UNLOCK();
      LOCK();
      *(atomic<int> *)&pSVar34->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar34->_padding_ + 1);
      UNLOCK();
    }
    bVar13 = true;
    bVar12 = true;
    bVar11 = true;
    *puVar22 = &___7__TCommonDelegateInstanceState___A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar24 = FDelegateHandle::GenerateNewID();
    puVar22[2] = uVar24;
    *puVar22 = &
               ___7__TBaseSPMethodDelegateInstance__0A_V__SComboBox_V__TSharedPtr_W4EAudioOscilloscopeTriggerMode___00_____00__A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar22[3] = local_res8;
    puVar22[4] = pSVar34;
    if (pSVar34 != (SWidget *)0x0) {
      LOCK();
      ((atomic<int> *)&pSVar34->_padding_)[1] =
           (atomic<int>)((int)((atomic<int> *)&pSVar34->_padding_)[1] + 1);
      UNLOCK();
    }
    puVar22[5] = local_14f0;
    puVar22[6] = pTStack_14e8;
  }
  if (bVar11) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar34);
  }
  if (bVar12) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar34);
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
  SComboButton::Construct(this,local_res10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1220.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1200.SharedReferenceCount.ReferenceController);
  SComboButton::FArguments::~FArguments(&local_10f8);
  local_13d0.Object = *(SWidget **)((longlong)this + 0x468);
  local_13d0.WeakReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)((longlong)this + 0x470);
  if (local_13d0.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_13d0.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_13d0.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  SComboButton::SetMenuContentWidgetToFocus(this,&local_13d0);
  pTVar5 = (param_1->_InitiallySelectedItem).SharedReferenceCount.ReferenceController;
  pEVar8 = (param_1->_InitiallySelectedItem).Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1440 = *(undefined8 *)((longlong)this + 0x458);
  uStack_1438 = *(TReferenceControllerBase<1> **)((longlong)this + 0x460);
  *(EAudioOscilloscopeTriggerMode **)((longlong)this + 0x458) = pEVar8;
  *(TReferenceControllerBase<1> **)((longlong)this + 0x460) = pTVar5;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(uStack_1438);
  pEVar8 = *(EAudioOscilloscopeTriggerMode **)((longlong)this + 0x458);
  if (pEVar8 != (EAudioOscilloscopeTriggerMode *)0x0) {
    pTVar5 = *(TReferenceControllerBase<1> **)((longlong)this + 0x460);
    if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
      paVar35 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar35 = &pTVar5->SharedReferenceCount;
      LOCK();
      *paVar35 = (atomic<int>)((int)*paVar35 + 1);
      UNLOCK();
    }
    pSVar25 = TSharedPtr<SListView<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>,1>::operator->
                        ((void *)((longlong)this + 0x468));
    lVar9 = pSVar25->_padding_;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar35 = (atomic<int>)((int)*paVar35 + 1);
      UNLOCK();
    }
    local_13c0 = pEVar8;
    local_13b8 = pTVar5;
    (**(code **)(lVar9 + 0x28))(&pSVar25->_padding_,&local_13c0,1,0);
    pSVar25 = TSharedPtr<SListView<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>,1>::operator->
                        ((void *)((longlong)this + 0x468));
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar35 = (atomic<int>)((int)*paVar35 + 1);
      UNLOCK();
    }
    local_13b0.Object = pEVar8;
    local_13b0.SharedReferenceCount.ReferenceController = pTVar5;
    SListView<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>::RequestScrollIntoView
              (pSVar25,&local_13b0,0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  }
  pSVar25 = TSharedPtr<SListView<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>,1>::operator->
                      ((void *)((longlong)this + 0x468));
  local_1488._0_8_ = FStyleDefaults::GetNoBrush();
  local_1488[8] = true;
  local_1468 = 0;
  local_1478.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_1470.Data = (FScriptContainerElement *)0x0;
  STableViewBase::SetBackgroundBrush
            ((STableViewBase *)pSVar25,(TAttribute<FSlateBrush_const_*> *)local_1488);
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

// CreateAccessibleWidget @ 14d8f0c90

TSharedRef<FSlateAccessibleWidget,1> * __thiscall
SComboBox<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>::CreateAccessibleWidget
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
           &SComboBox<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_>::FSlateAccessibleComboBox::
            _vftable__for__FSlateAccessibleWidget__;
      this_00[1]._padding_ =
           (longlong)
           &SComboBox<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_>::FSlateAccessibleComboBox::
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
           &SComboBox<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_>::FSlateAccessibleComboBox::
            _vftable__for__FSlateAccessibleWidget__;
      this_00[1]._padding_ =
           (longlong)
           &SComboBox<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_>::FSlateAccessibleComboBox::
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

// GenerateMenuItemRow @ 14d926b20

TSharedRef<ITableRow,1> * __thiscall
SComboBox<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>::GenerateMenuItemRow
          (void *this,TSharedRef<ITableRow,1> *__return_storage_ptr__,
          TSharedPtr<EAudioOscilloscopeTriggerMode,1> *param_1,TSharedRef<STableViewBase,1> *param_2
          )

{
  TReferenceControllerBase<1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  bool bVar3;
  char cVar4;
  FArguments *pFVar5;
  TSlateDecl<SComboRow<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
  *pTVar6;
  TSharedRef<SComboRow<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_>,1> *pTVar7;
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
  TSlateDecl<SComboRow<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
  local_818;
  TSharedRef<SComboRow<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_>,1> local_800;
  TSlateDecl<SComboRow<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
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
  pFVar5 = SComboRow<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>::FArguments::FArguments
                     (&local_7d8);
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
    pTVar6 = MakeTDecl<SComboRow<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
                       (&local_818,"SComboRow<OptionType>",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Input\\SComboBox.h"
                        ,0x22d,&local_res8);
    pTVar7 = TSlateDecl<SComboRow<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
             ::operator<<=(pTVar6,(TSharedRef<SComboRow<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_>,1>
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
    pTVar6 = MakeTDecl<SComboRow<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
                       (&local_7f0,"SComboRow<OptionType>",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Input\\SComboBox.h"
                        ,0x236,&local_840);
    pTVar7 = TSlateDecl<SComboRow<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
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

// GetDefaultAccessibleText @ 14d92d170

TOptional<FText> * __thiscall
SComboBox<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>::GetDefaultAccessibleText
          (void *this,TOptional<FText> *__return_storage_ptr__,EAccessibleType param_1)

{
  code *pcVar1;
  bool bVar2;
  FText *pFVar3;
  TOptional<FText> *pTVar4;
  FText local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_struct_TOptional<FText>___cdecl_SComboBox<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_struct_TOptional<FText>___cdecl_SComboBox<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_struct_TOptional<FText>___cdecl_SComboBox<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FString::FString(&`public:_virtual_struct_TOptional<FText>___cdecl_SComboBox<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
                          ::__l2::Name,L"Combo Box");
      atexit(`SComboBox<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>::
             GetDefaultAccessibleText'::__l2::_dynamic_atexit_destructor_for__Name__);
      _Init_thread_footer(&`public:_virtual_struct_TOptional<FText>___cdecl_SComboBox<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pFVar3 = FText::FromString(&local_18,
                             &`public:_virtual_struct_TOptional<FText>___cdecl_SComboBox<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
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

// IsInteractable @ 14d93d5a0

bool __thiscall
SComboBox<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>::IsInteractable(void *this)

{
  return (bool)*(undefined1 *)((longlong)this + 0x3a);
}

// OnButtonClicked @ 14d94a140

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SComboBox<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>::OnButtonClicked
          (void *this,FReply *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FReply *pFVar3;
  FSlateApplication *this_00;
  longlong *plVar4;
  TSharedPtr<EAudioOscilloscopeTriggerMode,1> *local_48;
  int local_40;
  TSharedPtr<EAudioOscilloscopeTriggerMode,1> local_38;
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
    DestructItems<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>,int>(local_48,local_40);
    if (local_48 != (TSharedPtr<EAudioOscilloscopeTriggerMode,1> *)0x0) {
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

// OnKeyDown @ 14d94bd20

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SComboBox<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>::OnKeyDown
          (void *this,FReply *__return_storage_ptr__,FGeometry *param_1,FKeyEvent *param_2)

{
  FName FVar1;
  longlong lVar2;
  IItemsSource<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_> *pIVar3;
  bool bVar4;
  char cVar5;
  char cVar6;
  FSlateApplication *pFVar7;
  SListView<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_> *pSVar8;
  TSharedRef<SWidget,1> *pTVar9;
  atomic<int> *paVar10;
  TSharedPtr<EAudioOscilloscopeTriggerMode,1> *pTVar11;
  TReferenceControllerBase<1> *pTVar12;
  int iVar13;
  SWidget *pSVar14;
  bool bVar15;
  uint uStackX_c;
  TSharedRef<SWidget,1> local_108;
  TSharedPtr<EAudioOscilloscopeTriggerMode,1> *local_f8;
  int local_f0;
  FReply local_e8;
  
  bVar15 = false;
  cVar5 = (**(code **)(*(longlong *)this + 0x1b0))();
  if (cVar5 == '\0') goto LAB_14d94bf07;
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
      if (lVar2 == 0) goto LAB_14d94c037;
      if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *paVar10 = (atomic<int>)((int)*paVar10 + 1);
        UNLOCK();
      }
      pSVar8 = TSharedPtr<SListView<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>,1>::
               operator->((void *)((longlong)this + 0x468));
      pIVar3 = (pSVar8->ViewSource).Ptr;
      if (pIVar3 == (IItemsSource<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_> *)0x0) {
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
            goto LAB_14d94bffe;
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
      if (lVar2 == 0) goto LAB_14d94c037;
      if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *paVar10 = (atomic<int>)((int)*paVar10 + 1);
        UNLOCK();
      }
      pSVar8 = TSharedPtr<SListView<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>,1>::
               operator->((void *)((longlong)this + 0x468));
      pIVar3 = (pSVar8->ViewSource).Ptr;
      if (pIVar3 == (IItemsSource<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_> *)0x0) {
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
          goto LAB_14d94c0f3;
        }
      }
      iVar13 = -1;
LAB_14d94c0f3:
      if (iVar13 < (int)local_108.SharedReferenceCount.ReferenceController + -1) {
        iVar13 = iVar13 + 1;
LAB_14d94bffe:
        pTVar11 = TArrayView<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_const_,int>::
                  operator[](&local_108,iVar13);
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
        SetSelectedItem(this,(TSharedPtr<EAudioOscilloscopeTriggerMode,1> *)&local_108);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
LAB_14d94c037:
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
    pSVar8 = TSharedPtr<SListView<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>,1>::operator->
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
      OnSelectionChanged_Internal
                (this,(TSharedPtr<EAudioOscilloscopeTriggerMode,1> *)&local_108,Direct);
    }
    FReply::FReply(&local_e8,true);
    pTVar9 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)((longlong)this + 8),&local_108);
    FReply::SetUserFocus(&local_e8,pTVar9,SetDirectly,false);
    FReply::FReply(__return_storage_ptr__,&local_e8);
    FReply::~FReply(&local_e8);
    DestructItems<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>,int>(local_f8,local_f0);
    if (local_f8 == (TSharedPtr<EAudioOscilloscopeTriggerMode,1> *)0x0) {
      return __return_storage_ptr__;
    }
    FMemory::Free(local_f8);
    return __return_storage_ptr__;
  }
  if (cVar5 == '\x01') {
    pTVar12 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
LAB_14d94bede:
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
    if (FVar1 == EKeys::BackSpace.KeyName) goto LAB_14d94bede;
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
LAB_14d94bf07:
  SWidget::OnKeyDown(this,__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// OnKeyDownHandler @ 14d94c4d0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SComboBox<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>::OnKeyDownHandler
          (void *this,FReply *__return_storage_ptr__,FGeometry *param_1,FKeyEvent *param_2)

{
  FName FVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  FReply *pFVar4;
  longlong *plVar5;
  bool bVar6;
  TSharedPtr<EAudioOscilloscopeTriggerMode,1> *local_28;
  int local_20;
  TSharedPtr<EAudioOscilloscopeTriggerMode,1> local_18;
  
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
      DestructItems<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>,int>(local_28,local_20);
      if (local_28 == (TSharedPtr<EAudioOscilloscopeTriggerMode,1> *)0x0) {
        return __return_storage_ptr__;
      }
      FMemory::Free(local_28);
      return __return_storage_ptr__;
    }
    DestructItems<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>,int>(local_28,local_20);
    if (local_28 != (TSharedPtr<EAudioOscilloscopeTriggerMode,1> *)0x0) {
      FMemory::Free(local_28);
    }
  }
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnMenuOpenChanged @ 14d94d7a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SComboBox<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>::OnMenuOpenChanged
          (void *this,bool param_1)

{
  EAudioOscilloscopeTriggerMode *pEVar1;
  TReferenceControllerBase<1> *pTVar2;
  void *pvVar3;
  code *pcVar4;
  bool bVar5;
  FSlateApplication *this_00;
  void *local_res18;
  TSharedPtr<EAudioOscilloscopeTriggerMode,1> local_38;
  TSharedPtr<EAudioOscilloscopeTriggerMode,1> local_28;
  code *local_18;
  void **local_10;
  
  if (!param_1) {
    pEVar1 = *(EAudioOscilloscopeTriggerMode **)((longlong)this + 0x458);
    *(undefined1 *)((longlong)this + 0x4b9) = 0;
    if (pEVar1 != (EAudioOscilloscopeTriggerMode *)0x0) {
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
      local_38.Object = pEVar1;
      local_38.SharedReferenceCount.ReferenceController = pTVar2;
      SListView<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>::SetSelection
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
      local_28.Object = pEVar1;
      local_28.SharedReferenceCount.ReferenceController = pTVar2;
      SListView<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>::RequestScrollIntoView
                (pvVar3,&local_28,0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    }
    this_00 = FSlateApplication::Get();
    local_10 = &local_res18;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`SComboBox<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>::OnMenuOpenChanged'::__l5::<lambda_1>,void,FSlateUser_&>
               ::Call;
    local_res18 = this;
    FSlateApplication::ForEachUser
              (this_00,(TFunctionRef<void___cdecl(FSlateUser_&)> *)&local_18,false);
  }
  return;
}

// OnSelectionChanged_Internal @ 14d957bb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SComboBox<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>::OnSelectionChanged_Internal
          (void *this,TSharedPtr<EAudioOscilloscopeTriggerMode,1> *param_1,Type param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  EAudioOscilloscopeTriggerMode *pEVar2;
  TReferenceControllerBase<1> *pTVar3;
  FSlateApplication *this_00;
  TSharedPtr<EAudioOscilloscopeTriggerMode,1> local_18;
  
  if (param_2 != OnNavigation) {
    if (param_1->Object != *(EAudioOscilloscopeTriggerMode **)((longlong)this + 0x458)) {
      this_00 = FSlateApplication::Get();
      FSlateApplication::PlaySound(this_00,(FSlateSound *)((longlong)this + 0x408),0);
      pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
      pEVar2 = param_1->Object;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      pTVar3 = *(TReferenceControllerBase<1> **)((longlong)this + 0x460);
      *(EAudioOscilloscopeTriggerMode **)((longlong)this + 0x458) = pEVar2;
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
      TDelegate<void___cdecl(TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
      ::ExecuteIfBound((void *)((longlong)this + 0x440),&local_18,param_2);
    }
    (**(code **)(*(longlong *)this + 0x250))(this,0,1,0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetSelectedItem @ 14d96c100

void __thiscall
SComboBox<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>::SetSelectedItem
          (void *this,TSharedPtr<EAudioOscilloscopeTriggerMode,1> *param_1)

{
  EAudioOscilloscopeTriggerMode *pEVar1;
  TReferenceControllerBase<1> *pTVar2;
  void *this_00;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  Type *pTVar6;
  TSharedPtr<EAudioOscilloscopeTriggerMode,1> local_18;
  
  pEVar1 = param_1->Object;
  if (pEVar1 == (EAudioOscilloscopeTriggerMode *)0x0) {
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
    lVar3 = *(longlong *)((longlong)this + 0x468);
    pTVar6 = TAttribute<enum_ESelectionMode::Type>::Get((void *)(lVar3 + 1000));
    if ((*pTVar6 != None) && (*(int *)(lVar3 + 0x810) != *(int *)(lVar3 + 0x83c))) {
      (**(code **)(*(longlong *)(lVar3 + 0x588) + 0x30))(lVar3 + 0x588);
      (**(code **)(*(longlong *)(lVar3 + 0x588) + 0x40))(lVar3 + 0x588,3);
    }
  }
  else {
    pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
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
    this_00 = *(void **)((longlong)this + 0x468);
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_18.Object = pEVar1;
    local_18.SharedReferenceCount.ReferenceController = pTVar2;
    SListView<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>::SetSelection
              (this_00,&local_18,Direct);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SupportsKeyboardFocus @ 14d9724d0

bool __thiscall
SComboBox<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>::SupportsKeyboardFocus(void *this)

{
  return (bool)*(undefined1 *)((longlong)this + 0x3a0);
}

