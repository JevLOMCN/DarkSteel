// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 39

// FArguments @ 1468fdfa0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FArguments * __thiscall SBackgroundBlur::FArguments::FArguments(FArguments *this)

{
  atomic<int> *paVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  FSharedReferencer<1> FVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  FDestructionSentinel local_48;
  uchar local_30;
  undefined1 local_2f;
  undefined1 local_28 [8];
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  (this->_Content).Widget.Object = SNullWidget::NullWidget.Object;
  FVar4 = SNullWidget::NullWidget.SharedReferenceCount;
  (this->_Content).Widget.SharedReferenceCount.ReferenceController =
       SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
  if (FVar4.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar4.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  uVar3 = _UNK_15076ba38;
  uVar6 = ___xmm_40000000400000004000000040000000;
  this->_HAlign = HAlign_Fill;
  uVar5 = ___xmm_40000000400000004000000040000000;
  this->_VAlign = VAlign_Fill;
  ___xmm_40000000400000004000000040000000 = (undefined4)uVar6;
  _UNK_15076ba34 = SUB84(uVar6,4);
  uVar2 = _UNK_15076ba34;
  (this->_Padding).Value.Left = (float)___xmm_40000000400000004000000040000000;
  ___xmm_40000000400000004000000040000000 = uVar5;
  uVar6 = _UNK_15076ba38;
  (this->_Padding).Value.Top = (float)uVar2;
  _UNK_15076ba38 = (undefined4)uVar3;
  _UNK_15076ba3c = SUB84(uVar3,4);
  uVar2 = _UNK_15076ba3c;
  (this->_Padding).Value.Right = (float)_UNK_15076ba38;
  _UNK_15076ba38 = uVar6;
  (this->_Padding).Value.Bottom = (float)uVar2;
  (this->_Padding).bIsSet = true;
  *(undefined8 *)&(this->_Padding).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_Padding).Getter = 0;
  *(undefined8 *)&(this->_Padding).Getter.field_0x8 = 0;
  (this->_BlurStrength).Value = 0.0;
  (this->_BlurStrength).bIsSet = true;
  this->_bApplyAlphaToBlur = true;
  *(undefined8 *)&(this->_BlurStrength).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_BlurStrength).Getter = 0;
  *(undefined8 *)&(this->_BlurStrength).Getter.field_0x8 = 0;
  (this->_BlurRadius).Value.bIsSet = false;
  (this->_BlurRadius).bIsSet = false;
  *(undefined8 *)&(this->_BlurRadius).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_BlurRadius).Getter = 0;
  *(undefined8 *)&(this->_BlurRadius).Getter.field_0x8 = 0;
  (this->_CornerRadius).Value.field0_0x0._s_0.X = 0.0;
  (this->_CornerRadius).Value.field0_0x0._s_0.Y = 0.0;
  (this->_CornerRadius).Value.field0_0x0._s_0.Z = 0.0;
  (this->_CornerRadius).Value.field0_0x0._s_0.W = 0.0;
  (this->_CornerRadius).bIsSet = true;
  *(undefined8 *)&(this->_CornerRadius).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_CornerRadius).Getter = 0;
  *(undefined8 *)&(this->_CornerRadius).Getter.field_0x8 = 0;
  this->_LowQualityFallbackBrush = (FSlateBrush *)0x0;
  local_30 = (uchar)EVisibility::SelfHitTestInvisible.Value.Value;
  this->field_0x88 = EVisibility::SelfHitTestInvisible.Value.Value;
  local_2f = 1;
  local_28 = (undefined1  [8])0x0;
  FStack_20.Data = (FScriptContainerElement *)0x0;
  local_18 = 0;
  this->field_0x89 = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->field_0x90,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_28);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_28,
             (FWriteAccessScope *)&local_48);
  if (((int)local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
    local_18 = local_18 & 0xffffffff00000000;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  if (FStack_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_20.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_28);
  return this;
}

// FArguments @ 146985c00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FArguments * __thiscall SComboBox<UObject_*>::FArguments::FArguments(FArguments *this)

{
  atomic<int> *paVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  FSharedReferencer<1> FVar8;
  ISlateStyle *pIVar9;
  FName *pFVar10;
  FComboBoxStyle *pFVar11;
  FTableRowStyle *pFVar12;
  FScrollBarStyle *pFVar13;
  FName local_res8;
  undefined4 local_18;
  
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  (this->_Content).Widget.Object = SNullWidget::NullWidget.Object;
  FVar8 = SNullWidget::NullWidget.SharedReferenceCount;
  (this->_Content).Widget.SharedReferenceCount.ReferenceController =
       SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
  if (FVar8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar8.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  pIVar9 = FAppStyle::Get();
  pFVar10 = ::FName::FName(&local_res8,"ComboBox");
  pFVar11 = (FComboBoxStyle *)
            (**(code **)((longlong)*pIVar9 + 0xa0))(pIVar9,FComboBoxStyle::TypeName,*pFVar10,0,1);
  if (pFVar11 == (FComboBoxStyle *)0x0) {
    pFVar11 = FComboBoxStyle::GetDefault();
  }
  this->_ComboBoxStyle = pFVar11;
  this->_ButtonStyle = (FButtonStyle *)0x0;
  pIVar9 = FAppStyle::Get();
  pFVar10 = ::FName::FName(&local_res8,"ComboBox.Row");
  pFVar12 = (FTableRowStyle *)
            (**(code **)((longlong)*pIVar9 + 0xa0))(pIVar9,FTableRowStyle::TypeName,*pFVar10,0,1);
  if (pFVar12 == (FTableRowStyle *)0x0) {
    pFVar12 = FTableRowStyle::GetDefault();
  }
  this->_ItemStyle = pFVar12;
  pIVar9 = FAppStyle::Get();
  pFVar10 = ::FName::FName(&local_res8,"ScrollBar");
  pFVar13 = (FScrollBarStyle *)
            (**(code **)((longlong)*pIVar9 + 0xa0))(pIVar9,FScrollBarStyle::TypeName,*pFVar10,0,1);
  if (pFVar13 == (FScrollBarStyle *)0x0) {
    pFVar13 = FScrollBarStyle::GetDefault();
  }
  this->_ScrollBarStyle = pFVar13;
  pFVar11 = this->_ComboBoxStyle;
  fVar2 = (pFVar11->ContentPadding).Left;
  fVar3 = (pFVar11->ContentPadding).Top;
  fVar4 = (pFVar11->ContentPadding).Right;
  fVar5 = (pFVar11->ContentPadding).Bottom;
  (this->_ContentPadding).bIsSet = true;
  (this->_ContentPadding).Value.Left = fVar2;
  (this->_ContentPadding).Value.Top = fVar3;
  (this->_ContentPadding).Value.Right = fVar4;
  (this->_ContentPadding).Value.Bottom = fVar5;
  *(undefined8 *)&(this->_ContentPadding).Getter.field_0x10 = 0;
  uVar7 = _UNK_15090c6d8;
  uVar6 = ___xmm_3f8000003f800000000000003f800000;
  *(undefined8 *)&(this->_ContentPadding).Getter = 0;
  *(undefined8 *)&(this->_ContentPadding).Getter.field_0x8 = 0;
  *(undefined8 *)&(this->_ForegroundColor).Value.SpecifiedColor.field0_0x0 = uVar6;
  *(undefined8 *)((longlong)&(this->_ForegroundColor).Value.SpecifiedColor.field0_0x0 + 8) = uVar7;
  local_18._0_1_ = (undefined1)4;
  local_18._1_1_ = (undefined1)(4 >> 8);
  (this->_ForegroundColor).Value.ColorUseRule = (undefined1)local_18;
  (this->_ForegroundColor).Value.ColorTableId = local_18._1_1_;
  *(undefined2 *)&(this->_ForegroundColor).Value.field_0x12 = local_18._2_2_;
  (this->_ForegroundColor).bIsSet = true;
  *(undefined8 *)&(this->_ForegroundColor).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_ForegroundColor).Getter = 0;
  *(undefined8 *)&(this->_ForegroundColor).Getter.field_0x8 = 0;
  (this->_OptionsSource_SharedObservableArray).Object = (TObservableArray<UObject_*> *)0x0;
  (this->_OptionsSource_SharedObservableArray).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->_OptionsSource_ArrayPointer = (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)0x0;
  this->_OptionsSource_ObservableArrayPointer = (TObservableArray<UObject_*> *)0x0;
  *(undefined8 *)&(this->_OnSelectionChanged).field_0x10 = 0;
  *(undefined8 *)&this->_OnSelectionChanged = 0;
  *(undefined8 *)&(this->_OnSelectionChanged).field_0x8 = 0;
  *(undefined8 *)&(this->_OnGenerateWidget).field_0x10 = 0;
  *(undefined8 *)&this->_OnGenerateWidget = 0;
  *(undefined8 *)&(this->_OnGenerateWidget).field_0x8 = 0;
  *(undefined8 *)&this->_OnComboBoxOpening = 0;
  *(undefined8 *)&(this->_OnComboBoxOpening).field_0x8 = 0;
  *(undefined4 *)&(this->_OnComboBoxOpening).field_0x10 = 0;
  (this->_CustomScrollbar).Object = (SScrollBar *)0x0;
  (this->_CustomScrollbar).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->_InitiallySelectedItem = (UObject *)0x0;
  (this->_Method).bIsSet = false;
  (this->_PressedSoundOverride).bIsSet = false;
  (this->_SelectionChangeSoundOverride).bIsSet = false;
  this->_MaxListHeight = 450.0;
  this->_HasDownArrow = true;
  this->_EnableGamepadNavigationMode = false;
  this->_IsFocusable = true;
  return this;
}

// FArguments @ 146985e50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FArguments * __thiscall SComboBox<FName>::FArguments::FArguments(FArguments *this)

{
  atomic<int> *paVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  FSharedReferencer<1> FVar8;
  ISlateStyle *pIVar9;
  FName *pFVar10;
  FComboBoxStyle *pFVar11;
  FTableRowStyle *pFVar12;
  FScrollBarStyle *pFVar13;
  FName local_res8;
  undefined4 local_18;
  
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  (this->_Content).Widget.Object = SNullWidget::NullWidget.Object;
  FVar8 = SNullWidget::NullWidget.SharedReferenceCount;
  (this->_Content).Widget.SharedReferenceCount.ReferenceController =
       SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
  if (FVar8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar8.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  pIVar9 = FAppStyle::Get();
  pFVar10 = ::FName::FName(&local_res8,"ComboBox");
  pFVar11 = (FComboBoxStyle *)
            (**(code **)((longlong)*pIVar9 + 0xa0))(pIVar9,FComboBoxStyle::TypeName,*pFVar10,0,1);
  if (pFVar11 == (FComboBoxStyle *)0x0) {
    pFVar11 = FComboBoxStyle::GetDefault();
  }
  this->_ComboBoxStyle = pFVar11;
  this->_ButtonStyle = (FButtonStyle *)0x0;
  pIVar9 = FAppStyle::Get();
  pFVar10 = ::FName::FName(&local_res8,"ComboBox.Row");
  pFVar12 = (FTableRowStyle *)
            (**(code **)((longlong)*pIVar9 + 0xa0))(pIVar9,FTableRowStyle::TypeName,*pFVar10,0,1);
  if (pFVar12 == (FTableRowStyle *)0x0) {
    pFVar12 = FTableRowStyle::GetDefault();
  }
  this->_ItemStyle = pFVar12;
  pIVar9 = FAppStyle::Get();
  pFVar10 = ::FName::FName(&local_res8,"ScrollBar");
  pFVar13 = (FScrollBarStyle *)
            (**(code **)((longlong)*pIVar9 + 0xa0))(pIVar9,FScrollBarStyle::TypeName,*pFVar10,0,1);
  if (pFVar13 == (FScrollBarStyle *)0x0) {
    pFVar13 = FScrollBarStyle::GetDefault();
  }
  this->_ScrollBarStyle = pFVar13;
  pFVar11 = this->_ComboBoxStyle;
  fVar2 = (pFVar11->ContentPadding).Left;
  fVar3 = (pFVar11->ContentPadding).Top;
  fVar4 = (pFVar11->ContentPadding).Right;
  fVar5 = (pFVar11->ContentPadding).Bottom;
  (this->_ContentPadding).bIsSet = true;
  (this->_ContentPadding).Value.Left = fVar2;
  (this->_ContentPadding).Value.Top = fVar3;
  (this->_ContentPadding).Value.Right = fVar4;
  (this->_ContentPadding).Value.Bottom = fVar5;
  *(undefined8 *)&(this->_ContentPadding).Getter.field_0x10 = 0;
  uVar7 = _UNK_15090c6d8;
  uVar6 = ___xmm_3f8000003f800000000000003f800000;
  *(undefined8 *)&(this->_ContentPadding).Getter = 0;
  *(undefined8 *)&(this->_ContentPadding).Getter.field_0x8 = 0;
  *(undefined8 *)&(this->_ForegroundColor).Value.SpecifiedColor.field0_0x0 = uVar6;
  *(undefined8 *)((longlong)&(this->_ForegroundColor).Value.SpecifiedColor.field0_0x0 + 8) = uVar7;
  local_18._0_1_ = (undefined1)4;
  local_18._1_1_ = (undefined1)(4 >> 8);
  (this->_ForegroundColor).Value.ColorUseRule = (undefined1)local_18;
  (this->_ForegroundColor).Value.ColorTableId = local_18._1_1_;
  *(undefined2 *)&(this->_ForegroundColor).Value.field_0x12 = local_18._2_2_;
  (this->_ForegroundColor).bIsSet = true;
  *(undefined8 *)&(this->_ForegroundColor).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_ForegroundColor).Getter = 0;
  *(undefined8 *)&(this->_ForegroundColor).Getter.field_0x8 = 0;
  (this->_OptionsSource_SharedObservableArray).Object = (TObservableArray<FName> *)0x0;
  (this->_OptionsSource_SharedObservableArray).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->_OptionsSource_ArrayPointer = (TArray<FName,TSizedDefaultAllocator<32>_> *)0x0;
  this->_OptionsSource_ObservableArrayPointer = (TObservableArray<FName> *)0x0;
  *(undefined8 *)&(this->_OnSelectionChanged).field_0x10 = 0;
  *(undefined8 *)&this->_OnSelectionChanged = 0;
  *(undefined8 *)&(this->_OnSelectionChanged).field_0x8 = 0;
  *(undefined8 *)&(this->_OnGenerateWidget).field_0x10 = 0;
  *(undefined8 *)&this->_OnGenerateWidget = 0;
  *(undefined8 *)&(this->_OnGenerateWidget).field_0x8 = 0;
  *(undefined8 *)&this->_OnComboBoxOpening = 0;
  *(undefined8 *)&(this->_OnComboBoxOpening).field_0x8 = 0;
  *(undefined4 *)&(this->_OnComboBoxOpening).field_0x10 = 0;
  (this->_CustomScrollbar).Object = (SScrollBar *)0x0;
  (this->_CustomScrollbar).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->_InitiallySelectedItem).ComparisonIndex = 0;
  (this->_InitiallySelectedItem).Number = 0;
  (this->_Method).bIsSet = false;
  (this->_PressedSoundOverride).bIsSet = false;
  (this->_SelectionChangeSoundOverride).bIsSet = false;
  this->_MaxListHeight = 450.0;
  this->_HasDownArrow = true;
  this->_EnableGamepadNavigationMode = false;
  this->_IsFocusable = true;
  return this;
}

// FArguments @ 1469860a0

FArguments * __thiscall SComboRow<UObject_*>::FArguments::FArguments(FArguments *this)

{
  atomic<int> *paVar1;
  FSharedReferencer<1> FVar2;
  ISlateStyle *pIVar3;
  FName *pFVar4;
  FTableRowStyle *pFVar5;
  FName local_res8;
  
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  pIVar3 = FAppStyle::Get();
  pFVar4 = ::FName::FName(&local_res8,"ComboBox.Row");
  pFVar5 = (FTableRowStyle *)
           (**(code **)((longlong)*pIVar3 + 0xa0))(pIVar3,FTableRowStyle::TypeName,*pFVar4,0,1);
  if (pFVar5 == (FTableRowStyle *)0x0) {
    pFVar5 = FTableRowStyle::GetDefault();
  }
  this->_Style = pFVar5;
  (this->_Content).Widget.Object = SNullWidget::NullWidget.Object;
  FVar2 = SNullWidget::NullWidget.SharedReferenceCount;
  (this->_Content).Widget.SharedReferenceCount.ReferenceController =
       SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
  if (FVar2.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar2.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  (this->_Padding).bIsSet = true;
  (this->_Padding).Value.Left = 0.0;
  (this->_Padding).Value.Top = 0.0;
  (this->_Padding).Value.Right = 0.0;
  (this->_Padding).Value.Bottom = 0.0;
  *(undefined8 *)&(this->_Padding).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_Padding).Getter = 0;
  *(undefined8 *)&(this->_Padding).Getter.field_0x8 = 0;
  return this;
}

// FArguments @ 146986160

FArguments * __thiscall SComboRow<FName>::FArguments::FArguments(FArguments *this)

{
  atomic<int> *paVar1;
  FSharedReferencer<1> FVar2;
  ISlateStyle *pIVar3;
  FName *pFVar4;
  FTableRowStyle *pFVar5;
  FName local_res8;
  
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  pIVar3 = FAppStyle::Get();
  pFVar4 = ::FName::FName(&local_res8,"ComboBox.Row");
  pFVar5 = (FTableRowStyle *)
           (**(code **)((longlong)*pIVar3 + 0xa0))(pIVar3,FTableRowStyle::TypeName,*pFVar4,0,1);
  if (pFVar5 == (FTableRowStyle *)0x0) {
    pFVar5 = FTableRowStyle::GetDefault();
  }
  this->_Style = pFVar5;
  (this->_Content).Widget.Object = SNullWidget::NullWidget.Object;
  FVar2 = SNullWidget::NullWidget.SharedReferenceCount;
  (this->_Content).Widget.SharedReferenceCount.ReferenceController =
       SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
  if (FVar2.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar2.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  (this->_Padding).bIsSet = true;
  (this->_Padding).Value.Left = 0.0;
  (this->_Padding).Value.Top = 0.0;
  (this->_Padding).Value.Right = 0.0;
  (this->_Padding).Value.Bottom = 0.0;
  *(undefined8 *)&(this->_Padding).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_Padding).Getter = 0;
  *(undefined8 *)&(this->_Padding).Getter.field_0x8 = 0;
  return this;
}

// FArguments @ 146986220

FArguments * __thiscall SListView<UObject_*>::FArguments::FArguments(FArguments *this)

{
  float fVar1;
  TConsoleVariableData<float> *pTVar2;
  bool bVar3;
  ISlateStyle *pIVar4;
  FName *pFVar5;
  FTableViewStyle *pFVar6;
  FScrollBarStyle *pFVar7;
  longlong lVar8;
  FName local_res8;
  FName local_res10;
  
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  pIVar4 = FAppStyle::Get();
  pFVar5 = ::FName::FName(&local_res8,"ListView");
  pFVar6 = (FTableViewStyle *)
           (**(code **)((longlong)*pIVar4 + 0xa0))(pIVar4,FTableViewStyle::TypeName,*pFVar5,0,1);
  if (pFVar6 == (FTableViewStyle *)0x0) {
    pFVar6 = FTableViewStyle::GetDefault();
  }
  this->_ListViewStyle = pFVar6;
  this->_bEnableShadowBoxStyle = false;
  *(undefined8 *)&(this->_OnGenerateRow).field_0x10 = 0;
  *(undefined8 *)&this->_OnGenerateRow = 0;
  *(undefined8 *)&(this->_OnGenerateRow).field_0x8 = 0;
  *(undefined8 *)&(this->_OnGeneratePinnedRow).field_0x10 = 0;
  *(undefined8 *)&this->_OnGeneratePinnedRow = 0;
  *(undefined8 *)&(this->_OnGeneratePinnedRow).field_0x8 = 0;
  *(undefined8 *)&(this->_OnRefreshRow).field_0x10 = 0;
  *(undefined8 *)&this->_OnRefreshRow = 0;
  *(undefined8 *)&(this->_OnRefreshRow).field_0x8 = 0;
  *(undefined8 *)&(this->_OnEntryInitialized).field_0x10 = 0;
  *(undefined8 *)&this->_OnEntryInitialized = 0;
  *(undefined8 *)&(this->_OnEntryInitialized).field_0x8 = 0;
  *(undefined8 *)&(this->_OnRowReleased).field_0x10 = 0;
  *(undefined8 *)&this->_OnRowReleased = 0;
  *(undefined8 *)&(this->_OnRowReleased).field_0x8 = 0;
  *(undefined8 *)&this->_OnListViewScrolled = 0;
  *(undefined8 *)&(this->_OnListViewScrolled).field_0x8 = 0;
  *(undefined4 *)&(this->_OnListViewScrolled).field_0x10 = 0;
  *(undefined8 *)&this->_OnItemScrolledIntoView = 0;
  *(undefined8 *)&(this->_OnItemScrolledIntoView).field_0x8 = 0;
  *(undefined4 *)&(this->_OnItemScrolledIntoView).field_0x10 = 0;
  *(undefined8 *)&this->_OnFinishedScrolling = 0;
  *(undefined8 *)&(this->_OnFinishedScrolling).field_0x8 = 0;
  *(undefined4 *)&(this->_OnFinishedScrolling).field_0x10 = 0;
  (this->_ListItemsSource_SharedObservableArray).Object = (TObservableArray<UObject_*> *)0x0;
  (this->_ListItemsSource_SharedObservableArray).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->_ItemHeight).Value = 0.0;
  (this->_ItemHeight).bIsSet = false;
  this->_ListItemsSource_ArrayPointer = (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)0x0;
  this->_ListItemsSource_ObservableArrayPointer = (TObservableArray<UObject_*> *)0x0;
  *(undefined8 *)&(this->_ItemHeight).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_ItemHeight).Getter = 0;
  *(undefined8 *)&(this->_ItemHeight).Getter.field_0x8 = 0;
  (this->_MaxPinnedItems).Value = 6;
  (this->_MaxPinnedItems).bIsSet = true;
  *(undefined8 *)&(this->_MaxPinnedItems).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_MaxPinnedItems).Getter = 0;
  *(undefined8 *)&(this->_MaxPinnedItems).Getter.field_0x8 = 0;
  *(undefined8 *)&(this->_OnContextMenuOpening).field_0x10 = 0;
  *(undefined8 *)&this->_OnContextMenuOpening = 0;
  *(undefined8 *)&(this->_OnContextMenuOpening).field_0x8 = 0;
  *(undefined8 *)&(this->_OnItemsRebuilt).field_0x10 = 0;
  *(undefined8 *)&this->_OnItemsRebuilt = 0;
  *(undefined8 *)&(this->_OnItemsRebuilt).field_0x8 = 0;
  *(undefined8 *)&(this->_OnMouseButtonClick).field_0x10 = 0;
  *(undefined8 *)&this->_OnMouseButtonClick = 0;
  *(undefined8 *)&(this->_OnMouseButtonClick).field_0x8 = 0;
  *(undefined8 *)&(this->_OnMouseButtonDoubleClick).field_0x10 = 0;
  *(undefined8 *)&this->_OnMouseButtonDoubleClick = 0;
  *(undefined8 *)&(this->_OnMouseButtonDoubleClick).field_0x8 = 0;
  *(undefined8 *)&(this->_OnSelectionChanged).field_0x10 = 0;
  *(undefined8 *)&this->_OnSelectionChanged = 0;
  *(undefined8 *)&(this->_OnSelectionChanged).field_0x8 = 0;
  *(undefined8 *)&(this->_OnIsSelectableOrNavigable).field_0x10 = 0;
  *(undefined8 *)&this->_OnIsSelectableOrNavigable = 0;
  *(undefined8 *)&(this->_OnIsSelectableOrNavigable).field_0x8 = 0;
  (this->_SelectionMode).Value = Multi;
  (this->_SelectionMode).bIsSet = true;
  *(undefined8 *)&(this->_SelectionMode).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_SelectionMode).Getter = 0;
  *(undefined8 *)&(this->_SelectionMode).Getter.field_0x8 = 0;
  (this->_HeaderRow).Object = (SHeaderRow *)0x0;
  (this->_HeaderRow).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_ExternalScrollbar).Object = (SScrollBar *)0x0;
  (this->_ExternalScrollbar).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->_FixedLineScrollOffset).bIsSet = false;
  (this->_ScrollbarVisibility).Value = (TEnumAsByte<EVisibility::Private>)0x19;
  (this->_ScrollbarVisibility).bIsSet = false;
  this->_ClearSelectionOnClick = true;
  this->_Orientation = Orient_Vertical;
  this->_EnableAnimatedScrolling = false;
  *(undefined8 *)&(this->_ScrollbarVisibility).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_ScrollbarVisibility).Getter = 0;
  *(undefined8 *)&(this->_ScrollbarVisibility).Getter.field_0x8 = 0;
  this->_ScrollbarDragFocusCause = Mouse;
  this->_AllowOverscroll = Yes;
  pIVar4 = FAppStyle::Get();
  pFVar5 = ::FName::FName(&local_res10,"ScrollBar");
  pFVar7 = (FScrollBarStyle *)
           (**(code **)((longlong)*pIVar4 + 0xa0))(pIVar4,FScrollBarStyle::TypeName,*pFVar5,0,1);
  if (pFVar7 == (FScrollBarStyle *)0x0) {
    pFVar7 = FScrollBarStyle::GetDefault();
  }
  this->_ScrollBarStyle = pFVar7;
  this->_PreventThrottling = false;
  pTVar2 = GlobalScrollAmount.Ref;
  this->_ConsumeMouseWheel = WhenScrollingPossible;
  bVar3 = IsInParallelGameThread();
  if (!bVar3) {
    bVar3 = IsInGameThread();
    lVar8 = 4;
    if (!bVar3) goto LAB_14698650d;
  }
  lVar8 = 0;
LAB_14698650d:
  fVar1 = *(float *)((longlong)pTVar2->ShadowedValue + lVar8);
  (this->_IsFocusable).Value = true;
  (this->_IsFocusable).bIsSet = true;
  this->_WheelScrollMultiplier = fVar1;
  this->_HandleSpacebarSelection = false;
  this->_NavigationScrollOffset = 0.5;
  (this->_ScrollBarPadding).Left = 0.0;
  this->_HandleGamepadEvents = true;
  this->_HandleDirectionalNavigation = true;
  *(undefined8 *)&(this->_IsFocusable).Getter.field_0x8 = 0;
  (this->_ScrollBarPadding).Top = 0.0;
  (this->_ScrollBarPadding).Right = 0.0;
  (this->_ScrollBarPadding).Bottom = 0.0;
  *(undefined8 *)&(this->_IsFocusable).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_IsFocusable).Getter = 0;
  this->_ReturnFocusToSelection = false;
  this->_ClearScrollVelocityOnSelection = true;
  *(undefined8 *)&(this->_OnItemToString_Debug).field_0x10 = 0;
  *(undefined8 *)&this->_OnItemToString_Debug = 0;
  *(undefined8 *)&(this->_OnItemToString_Debug).field_0x8 = 0;
  *(undefined8 *)&(this->_OnEnteredBadState).field_0x10 = 0;
  *(undefined8 *)&this->_OnEnteredBadState = 0;
  *(undefined8 *)&(this->_OnEnteredBadState).field_0x8 = 0;
  *(undefined8 *)&this->_OnKeyDownHandler = 0;
  *(undefined8 *)&(this->_OnKeyDownHandler).field_0x8 = 0;
  *(undefined4 *)&(this->_OnKeyDownHandler).field_0x10 = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 1;
  return this;
}

// FArguments @ 1469865d0

FArguments * __thiscall SListView<FName>::FArguments::FArguments(FArguments *this)

{
  float fVar1;
  TConsoleVariableData<float> *pTVar2;
  bool bVar3;
  ISlateStyle *pIVar4;
  FName *pFVar5;
  FTableViewStyle *pFVar6;
  FScrollBarStyle *pFVar7;
  longlong lVar8;
  FName local_res8;
  FName local_res10;
  
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  pIVar4 = FAppStyle::Get();
  pFVar5 = ::FName::FName(&local_res8,"ListView");
  pFVar6 = (FTableViewStyle *)
           (**(code **)((longlong)*pIVar4 + 0xa0))(pIVar4,FTableViewStyle::TypeName,*pFVar5,0,1);
  if (pFVar6 == (FTableViewStyle *)0x0) {
    pFVar6 = FTableViewStyle::GetDefault();
  }
  this->_ListViewStyle = pFVar6;
  this->_bEnableShadowBoxStyle = false;
  *(undefined8 *)&(this->_OnGenerateRow).field_0x10 = 0;
  *(undefined8 *)&this->_OnGenerateRow = 0;
  *(undefined8 *)&(this->_OnGenerateRow).field_0x8 = 0;
  *(undefined8 *)&(this->_OnGeneratePinnedRow).field_0x10 = 0;
  *(undefined8 *)&this->_OnGeneratePinnedRow = 0;
  *(undefined8 *)&(this->_OnGeneratePinnedRow).field_0x8 = 0;
  *(undefined8 *)&(this->_OnRefreshRow).field_0x10 = 0;
  *(undefined8 *)&this->_OnRefreshRow = 0;
  *(undefined8 *)&(this->_OnRefreshRow).field_0x8 = 0;
  *(undefined8 *)&(this->_OnEntryInitialized).field_0x10 = 0;
  *(undefined8 *)&this->_OnEntryInitialized = 0;
  *(undefined8 *)&(this->_OnEntryInitialized).field_0x8 = 0;
  *(undefined8 *)&(this->_OnRowReleased).field_0x10 = 0;
  *(undefined8 *)&this->_OnRowReleased = 0;
  *(undefined8 *)&(this->_OnRowReleased).field_0x8 = 0;
  *(undefined8 *)&this->_OnListViewScrolled = 0;
  *(undefined8 *)&(this->_OnListViewScrolled).field_0x8 = 0;
  *(undefined4 *)&(this->_OnListViewScrolled).field_0x10 = 0;
  *(undefined8 *)&this->_OnItemScrolledIntoView = 0;
  *(undefined8 *)&(this->_OnItemScrolledIntoView).field_0x8 = 0;
  *(undefined4 *)&(this->_OnItemScrolledIntoView).field_0x10 = 0;
  *(undefined8 *)&this->_OnFinishedScrolling = 0;
  *(undefined8 *)&(this->_OnFinishedScrolling).field_0x8 = 0;
  *(undefined4 *)&(this->_OnFinishedScrolling).field_0x10 = 0;
  (this->_ListItemsSource_SharedObservableArray).Object = (TObservableArray<FName> *)0x0;
  (this->_ListItemsSource_SharedObservableArray).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->_ItemHeight).Value = 0.0;
  (this->_ItemHeight).bIsSet = false;
  this->_ListItemsSource_ArrayPointer = (TArray<FName,TSizedDefaultAllocator<32>_> *)0x0;
  this->_ListItemsSource_ObservableArrayPointer = (TObservableArray<FName> *)0x0;
  *(undefined8 *)&(this->_ItemHeight).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_ItemHeight).Getter = 0;
  *(undefined8 *)&(this->_ItemHeight).Getter.field_0x8 = 0;
  (this->_MaxPinnedItems).Value = 6;
  (this->_MaxPinnedItems).bIsSet = true;
  *(undefined8 *)&(this->_MaxPinnedItems).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_MaxPinnedItems).Getter = 0;
  *(undefined8 *)&(this->_MaxPinnedItems).Getter.field_0x8 = 0;
  *(undefined8 *)&(this->_OnContextMenuOpening).field_0x10 = 0;
  *(undefined8 *)&this->_OnContextMenuOpening = 0;
  *(undefined8 *)&(this->_OnContextMenuOpening).field_0x8 = 0;
  *(undefined8 *)&(this->_OnItemsRebuilt).field_0x10 = 0;
  *(undefined8 *)&this->_OnItemsRebuilt = 0;
  *(undefined8 *)&(this->_OnItemsRebuilt).field_0x8 = 0;
  *(undefined8 *)&(this->_OnMouseButtonClick).field_0x10 = 0;
  *(undefined8 *)&this->_OnMouseButtonClick = 0;
  *(undefined8 *)&(this->_OnMouseButtonClick).field_0x8 = 0;
  *(undefined8 *)&(this->_OnMouseButtonDoubleClick).field_0x10 = 0;
  *(undefined8 *)&this->_OnMouseButtonDoubleClick = 0;
  *(undefined8 *)&(this->_OnMouseButtonDoubleClick).field_0x8 = 0;
  *(undefined8 *)&(this->_OnSelectionChanged).field_0x10 = 0;
  *(undefined8 *)&this->_OnSelectionChanged = 0;
  *(undefined8 *)&(this->_OnSelectionChanged).field_0x8 = 0;
  *(undefined8 *)&(this->_OnIsSelectableOrNavigable).field_0x10 = 0;
  *(undefined8 *)&this->_OnIsSelectableOrNavigable = 0;
  *(undefined8 *)&(this->_OnIsSelectableOrNavigable).field_0x8 = 0;
  (this->_SelectionMode).Value = Multi;
  (this->_SelectionMode).bIsSet = true;
  *(undefined8 *)&(this->_SelectionMode).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_SelectionMode).Getter = 0;
  *(undefined8 *)&(this->_SelectionMode).Getter.field_0x8 = 0;
  (this->_HeaderRow).Object = (SHeaderRow *)0x0;
  (this->_HeaderRow).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_ExternalScrollbar).Object = (SScrollBar *)0x0;
  (this->_ExternalScrollbar).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->_FixedLineScrollOffset).bIsSet = false;
  (this->_ScrollbarVisibility).Value = (TEnumAsByte<EVisibility::Private>)0x19;
  (this->_ScrollbarVisibility).bIsSet = false;
  this->_ClearSelectionOnClick = true;
  this->_Orientation = Orient_Vertical;
  this->_EnableAnimatedScrolling = false;
  *(undefined8 *)&(this->_ScrollbarVisibility).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_ScrollbarVisibility).Getter = 0;
  *(undefined8 *)&(this->_ScrollbarVisibility).Getter.field_0x8 = 0;
  this->_ScrollbarDragFocusCause = Mouse;
  this->_AllowOverscroll = Yes;
  pIVar4 = FAppStyle::Get();
  pFVar5 = ::FName::FName(&local_res10,"ScrollBar");
  pFVar7 = (FScrollBarStyle *)
           (**(code **)((longlong)*pIVar4 + 0xa0))(pIVar4,FScrollBarStyle::TypeName,*pFVar5,0,1);
  if (pFVar7 == (FScrollBarStyle *)0x0) {
    pFVar7 = FScrollBarStyle::GetDefault();
  }
  this->_ScrollBarStyle = pFVar7;
  this->_PreventThrottling = false;
  pTVar2 = GlobalScrollAmount.Ref;
  this->_ConsumeMouseWheel = WhenScrollingPossible;
  bVar3 = IsInParallelGameThread();
  if (!bVar3) {
    bVar3 = IsInGameThread();
    lVar8 = 4;
    if (!bVar3) goto LAB_1469868bd;
  }
  lVar8 = 0;
LAB_1469868bd:
  fVar1 = *(float *)((longlong)pTVar2->ShadowedValue + lVar8);
  (this->_IsFocusable).Value = true;
  (this->_IsFocusable).bIsSet = true;
  this->_WheelScrollMultiplier = fVar1;
  this->_HandleSpacebarSelection = false;
  this->_NavigationScrollOffset = 0.5;
  (this->_ScrollBarPadding).Left = 0.0;
  this->_HandleGamepadEvents = true;
  this->_HandleDirectionalNavigation = true;
  *(undefined8 *)&(this->_IsFocusable).Getter.field_0x8 = 0;
  (this->_ScrollBarPadding).Top = 0.0;
  (this->_ScrollBarPadding).Right = 0.0;
  (this->_ScrollBarPadding).Bottom = 0.0;
  *(undefined8 *)&(this->_IsFocusable).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_IsFocusable).Getter = 0;
  this->_ReturnFocusToSelection = false;
  this->_ClearScrollVelocityOnSelection = true;
  *(undefined8 *)&(this->_OnItemToString_Debug).field_0x10 = 0;
  *(undefined8 *)&this->_OnItemToString_Debug = 0;
  *(undefined8 *)&(this->_OnItemToString_Debug).field_0x8 = 0;
  *(undefined8 *)&(this->_OnEnteredBadState).field_0x10 = 0;
  *(undefined8 *)&this->_OnEnteredBadState = 0;
  *(undefined8 *)&(this->_OnEnteredBadState).field_0x8 = 0;
  *(undefined8 *)&this->_OnKeyDownHandler = 0;
  *(undefined8 *)&(this->_OnKeyDownHandler).field_0x8 = 0;
  *(undefined4 *)&(this->_OnKeyDownHandler).field_0x10 = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 1;
  return this;
}

// FArguments @ 146986980

FArguments * __thiscall SObjectTableRow<UObject_*>::FArguments::FArguments(FArguments *this)

{
  atomic<int> *paVar1;
  FSharedReferencer<1> FVar2;
  
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  this->_bAllowDragging = true;
  this->_bAllowDragDrop = false;
  (this->_Content).Widget.Object = SNullWidget::NullWidget.Object;
  FVar2 = SNullWidget::NullWidget.SharedReferenceCount;
  (this->_Content).Widget.SharedReferenceCount.ReferenceController =
       SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
  if (FVar2.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar2.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  *(undefined8 *)&this->_OnHovered = 0;
  *(undefined8 *)&(this->_OnHovered).field_0x8 = 0;
  *(undefined4 *)&(this->_OnHovered).field_0x10 = 0;
  *(undefined8 *)&this->_OnUnhovered = 0;
  *(undefined8 *)&(this->_OnUnhovered).field_0x8 = 0;
  *(undefined4 *)&(this->_OnUnhovered).field_0x10 = 0;
  *(undefined8 *)&this->_OnRowCanAcceptDrop = 0;
  *(undefined8 *)&(this->_OnRowCanAcceptDrop).field_0x8 = 0;
  *(undefined4 *)&(this->_OnRowCanAcceptDrop).field_0x10 = 0;
  *(undefined8 *)&this->_OnRowAcceptDrop = 0;
  *(undefined8 *)&(this->_OnRowAcceptDrop).field_0x8 = 0;
  *(undefined4 *)&(this->_OnRowAcceptDrop).field_0x10 = 0;
  *(undefined8 *)&this->_OnRowDragDetected = 0;
  *(undefined8 *)&(this->_OnRowDragDetected).field_0x8 = 0;
  *(undefined4 *)&(this->_OnRowDragDetected).field_0x10 = 0;
  *(undefined8 *)&this->_OnRowDragEnter = 0;
  *(undefined8 *)&(this->_OnRowDragEnter).field_0x8 = 0;
  *(undefined4 *)&(this->_OnRowDragEnter).field_0x10 = 0;
  *(undefined8 *)&this->_OnRowDragLeave = 0;
  *(undefined8 *)&(this->_OnRowDragLeave).field_0x8 = 0;
  *(undefined4 *)&(this->_OnRowDragLeave).field_0x10 = 0;
  *(undefined8 *)&this->_OnRowDragCancelled = 0;
  *(undefined8 *)&(this->_OnRowDragCancelled).field_0x8 = 0;
  *(undefined4 *)&(this->_OnRowDragCancelled).field_0x10 = 0;
  return this;
}

// FArguments @ 146986a70

FArguments * __thiscall STableRow<UObject_*>::FArguments::FArguments(FArguments *this)

{
  atomic<int> *paVar1;
  FSharedReferencer<1> FVar2;
  ISlateStyle *pIVar3;
  FName *pFVar4;
  FTableRowStyle *pFVar5;
  FName local_res8;
  
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  pIVar3 = FAppStyle::Get();
  pFVar4 = ::FName::FName(&local_res8,"TableView.Row");
  pFVar5 = (FTableRowStyle *)
           (**(code **)((longlong)*pIVar3 + 0xa0))(pIVar3,FTableRowStyle::TypeName,*pFVar4,0,1);
  if (pFVar5 == (FTableRowStyle *)0x0) {
    pFVar5 = FTableRowStyle::GetDefault();
  }
  this->_Style = pFVar5;
  pIVar3 = FAppStyle::Get();
  this->_ExpanderStyleSet = pIVar3;
  *(undefined8 *)&this->_OnCanAcceptDrop = 0;
  *(undefined8 *)&(this->_OnCanAcceptDrop).field_0x8 = 0;
  *(undefined4 *)&(this->_OnCanAcceptDrop).field_0x10 = 0;
  *(undefined8 *)&this->_OnAcceptDrop = 0;
  *(undefined8 *)&(this->_OnAcceptDrop).field_0x8 = 0;
  *(undefined4 *)&(this->_OnAcceptDrop).field_0x10 = 0;
  *(undefined8 *)&this->_OnPaintDropIndicator = 0;
  *(undefined8 *)&(this->_OnPaintDropIndicator).field_0x8 = 0;
  *(undefined4 *)&(this->_OnPaintDropIndicator).field_0x10 = 0;
  *(undefined8 *)&this->_OnDragDetected = 0;
  *(undefined8 *)&(this->_OnDragDetected).field_0x8 = 0;
  *(undefined4 *)&(this->_OnDragDetected).field_0x10 = 0;
  *(undefined8 *)&this->_OnDragEnter = 0;
  *(undefined8 *)&(this->_OnDragEnter).field_0x8 = 0;
  *(undefined4 *)&(this->_OnDragEnter).field_0x10 = 0;
  *(undefined8 *)&this->_OnDragLeave = 0;
  *(undefined8 *)&(this->_OnDragLeave).field_0x8 = 0;
  *(undefined4 *)&(this->_OnDragLeave).field_0x10 = 0;
  *(undefined8 *)&this->_OnDrop = 0;
  *(undefined8 *)&(this->_OnDrop).field_0x8 = 0;
  *(undefined4 *)&(this->_OnDrop).field_0x10 = 0;
  (this->_Padding).Value.Left = 0.0;
  (this->_Padding).Value.Top = 0.0;
  (this->_Padding).Value.Right = 0.0;
  (this->_Padding).Value.Bottom = 0.0;
  (this->_Padding).bIsSet = true;
  *(undefined8 *)&(this->_Padding).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_Padding).Getter = 0;
  *(undefined8 *)&(this->_Padding).Getter.field_0x8 = 0;
  this->_ShowSelection = true;
  this->_ShowWires = false;
  this->_bAllowPreselectedItemActivation = false;
  this->_SignalSelectionMode = Deferred;
  (this->_Content).Widget.Object = SNullWidget::NullWidget.Object;
  FVar2 = SNullWidget::NullWidget.SharedReferenceCount;
  (this->_Content).Widget.SharedReferenceCount.ReferenceController =
       SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
  if (FVar2.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar2.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  return this;
}

// FArguments @ 146986be0

FArguments * __thiscall STableRow<FName>::FArguments::FArguments(FArguments *this)

{
  atomic<int> *paVar1;
  FSharedReferencer<1> FVar2;
  ISlateStyle *pIVar3;
  FName *pFVar4;
  FTableRowStyle *pFVar5;
  FName local_res8;
  
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  pIVar3 = FAppStyle::Get();
  pFVar4 = ::FName::FName(&local_res8,"TableView.Row");
  pFVar5 = (FTableRowStyle *)
           (**(code **)((longlong)*pIVar3 + 0xa0))(pIVar3,FTableRowStyle::TypeName,*pFVar4,0,1);
  if (pFVar5 == (FTableRowStyle *)0x0) {
    pFVar5 = FTableRowStyle::GetDefault();
  }
  this->_Style = pFVar5;
  pIVar3 = FAppStyle::Get();
  this->_ExpanderStyleSet = pIVar3;
  *(undefined8 *)&this->_OnCanAcceptDrop = 0;
  *(undefined8 *)&(this->_OnCanAcceptDrop).field_0x8 = 0;
  *(undefined4 *)&(this->_OnCanAcceptDrop).field_0x10 = 0;
  *(undefined8 *)&this->_OnAcceptDrop = 0;
  *(undefined8 *)&(this->_OnAcceptDrop).field_0x8 = 0;
  *(undefined4 *)&(this->_OnAcceptDrop).field_0x10 = 0;
  *(undefined8 *)&this->_OnPaintDropIndicator = 0;
  *(undefined8 *)&(this->_OnPaintDropIndicator).field_0x8 = 0;
  *(undefined4 *)&(this->_OnPaintDropIndicator).field_0x10 = 0;
  *(undefined8 *)&this->_OnDragDetected = 0;
  *(undefined8 *)&(this->_OnDragDetected).field_0x8 = 0;
  *(undefined4 *)&(this->_OnDragDetected).field_0x10 = 0;
  *(undefined8 *)&this->_OnDragEnter = 0;
  *(undefined8 *)&(this->_OnDragEnter).field_0x8 = 0;
  *(undefined4 *)&(this->_OnDragEnter).field_0x10 = 0;
  *(undefined8 *)&this->_OnDragLeave = 0;
  *(undefined8 *)&(this->_OnDragLeave).field_0x8 = 0;
  *(undefined4 *)&(this->_OnDragLeave).field_0x10 = 0;
  *(undefined8 *)&this->_OnDrop = 0;
  *(undefined8 *)&(this->_OnDrop).field_0x8 = 0;
  *(undefined4 *)&(this->_OnDrop).field_0x10 = 0;
  (this->_Padding).Value.Left = 0.0;
  (this->_Padding).Value.Top = 0.0;
  (this->_Padding).Value.Right = 0.0;
  (this->_Padding).Value.Bottom = 0.0;
  (this->_Padding).bIsSet = true;
  *(undefined8 *)&(this->_Padding).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_Padding).Getter = 0;
  *(undefined8 *)&(this->_Padding).Getter.field_0x8 = 0;
  this->_ShowSelection = true;
  this->_ShowWires = false;
  this->_bAllowPreselectedItemActivation = false;
  this->_SignalSelectionMode = Deferred;
  (this->_Content).Widget.Object = SNullWidget::NullWidget.Object;
  FVar2 = SNullWidget::NullWidget.SharedReferenceCount;
  (this->_Content).Widget.SharedReferenceCount.ReferenceController =
       SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
  if (FVar2.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar2.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  return this;
}

// FArguments @ 146986d50

FArguments * __thiscall STileView<UObject_*>::FArguments::FArguments(FArguments *this)

{
  float fVar1;
  TConsoleVariableData<float> *pTVar2;
  bool bVar3;
  ISlateStyle *pIVar4;
  FName *pFVar5;
  FScrollBarStyle *pFVar6;
  longlong lVar7;
  FName local_res8;
  
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  *(undefined8 *)&(this->_OnGenerateTile).field_0x10 = 0;
  *(undefined8 *)&this->_OnGenerateTile = 0;
  *(undefined8 *)&(this->_OnGenerateTile).field_0x8 = 0;
  *(undefined8 *)&(this->_OnRefreshTile).field_0x10 = 0;
  *(undefined8 *)&this->_OnRefreshTile = 0;
  *(undefined8 *)&(this->_OnRefreshTile).field_0x8 = 0;
  *(undefined8 *)&(this->_OnTileReleased).field_0x10 = 0;
  *(undefined8 *)&this->_OnTileReleased = 0;
  *(undefined8 *)&(this->_OnTileReleased).field_0x8 = 0;
  *(undefined8 *)&this->_OnTileViewScrolled = 0;
  *(undefined8 *)&(this->_OnTileViewScrolled).field_0x8 = 0;
  *(undefined4 *)&(this->_OnTileViewScrolled).field_0x10 = 0;
  *(undefined8 *)&this->_OnFinishedScrolling = 0;
  *(undefined8 *)&(this->_OnFinishedScrolling).field_0x8 = 0;
  *(undefined4 *)&(this->_OnFinishedScrolling).field_0x10 = 0;
  *(undefined8 *)&this->_OnItemScrolledIntoView = 0;
  *(undefined8 *)&(this->_OnItemScrolledIntoView).field_0x8 = 0;
  *(undefined4 *)&(this->_OnItemScrolledIntoView).field_0x10 = 0;
  (this->_ListItemsSource_SharedObservableArray).Object = (TObservableArray<UObject_*> *)0x0;
  (this->_ListItemsSource_SharedObservableArray).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->_ItemHeight).Value = 128.0;
  (this->_ItemHeight).bIsSet = true;
  this->_ListItemsSource_ArrayPointer = (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)0x0;
  this->_ListItemsSource_ObservableArrayPointer = (TObservableArray<UObject_*> *)0x0;
  *(undefined8 *)&(this->_ItemHeight).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_ItemHeight).Getter = 0;
  *(undefined8 *)&(this->_ItemHeight).Getter.field_0x8 = 0;
  (this->_ItemWidth).Value = 128.0;
  (this->_ItemWidth).bIsSet = true;
  *(undefined8 *)&(this->_ItemWidth).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_ItemWidth).Getter = 0;
  *(undefined8 *)&(this->_ItemWidth).Getter.field_0x8 = 0;
  (this->_ItemAlignment).Value = EvenlyDistributed;
  (this->_ItemAlignment).bIsSet = true;
  *(undefined8 *)&(this->_ItemAlignment).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_ItemAlignment).Getter = 0;
  *(undefined8 *)&(this->_ItemAlignment).Getter.field_0x8 = 0;
  *(undefined8 *)&(this->_OnContextMenuOpening).field_0x10 = 0;
  *(undefined8 *)&this->_OnContextMenuOpening = 0;
  *(undefined8 *)&(this->_OnContextMenuOpening).field_0x8 = 0;
  *(undefined8 *)&(this->_OnItemsRebuilt).field_0x10 = 0;
  *(undefined8 *)&this->_OnItemsRebuilt = 0;
  *(undefined8 *)&(this->_OnItemsRebuilt).field_0x8 = 0;
  *(undefined8 *)&(this->_OnMouseButtonClick).field_0x10 = 0;
  *(undefined8 *)&this->_OnMouseButtonClick = 0;
  *(undefined8 *)&(this->_OnMouseButtonClick).field_0x8 = 0;
  *(undefined8 *)&(this->_OnMouseButtonDoubleClick).field_0x10 = 0;
  *(undefined8 *)&this->_OnMouseButtonDoubleClick = 0;
  *(undefined8 *)&(this->_OnMouseButtonDoubleClick).field_0x8 = 0;
  *(undefined8 *)&(this->_OnSelectionChanged).field_0x10 = 0;
  *(undefined8 *)&this->_OnSelectionChanged = 0;
  *(undefined8 *)&(this->_OnSelectionChanged).field_0x8 = 0;
  *(undefined8 *)&(this->_OnIsSelectableOrNavigable).field_0x10 = 0;
  *(undefined8 *)&this->_OnIsSelectableOrNavigable = 0;
  *(undefined8 *)&(this->_OnIsSelectableOrNavigable).field_0x8 = 0;
  (this->_SelectionMode).Value = Multi;
  (this->_SelectionMode).bIsSet = true;
  *(undefined8 *)&(this->_SelectionMode).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_SelectionMode).Getter = 0;
  *(undefined8 *)&(this->_SelectionMode).Getter.field_0x8 = 0;
  (this->_ExternalScrollbar).Object = (SScrollBar *)0x0;
  (this->_ExternalScrollbar).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->_FixedLineScrollOffset).bIsSet = false;
  this->_ClearSelectionOnClick = true;
  this->_Orientation = Orient_Vertical;
  this->_EnableAnimatedScrolling = false;
  (this->_ScrollbarVisibility).Value.Value.Value = (uchar)EVisibility::Visible.Value.Value;
  (this->_ScrollbarVisibility).bIsSet = true;
  *(undefined8 *)&(this->_ScrollbarVisibility).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_ScrollbarVisibility).Getter = 0;
  *(undefined8 *)&(this->_ScrollbarVisibility).Getter.field_0x8 = 0;
  this->_ScrollbarDragFocusCause = Mouse;
  this->_AllowOverscroll = Yes;
  pIVar4 = FAppStyle::Get();
  pFVar5 = ::FName::FName(&local_res8,"ScrollBar");
  pFVar6 = (FScrollBarStyle *)
           (**(code **)((longlong)*pIVar4 + 0xa0))(pIVar4,FScrollBarStyle::TypeName,*pFVar5,0,1);
  if (pFVar6 == (FScrollBarStyle *)0x0) {
    pFVar6 = FScrollBarStyle::GetDefault();
  }
  this->_ScrollBarStyle = pFVar6;
  (this->_ScrollbarDisabledVisibility).Value.Value = (uchar)EVisibility::Collapsed.Value.Value;
  this->_ConsumeMouseWheel = WhenScrollingPossible;
  pTVar2 = GlobalScrollAmount.Ref;
  bVar3 = IsInParallelGameThread();
  if (!bVar3) {
    bVar3 = IsInGameThread();
    lVar7 = 4;
    if (!bVar3) goto LAB_146986fec;
  }
  lVar7 = 0;
LAB_146986fec:
  fVar1 = *(float *)((longlong)pTVar2->ShadowedValue + lVar7);
  (this->_IsFocusable).Value = true;
  (this->_IsFocusable).bIsSet = true;
  this->_WheelScrollMultiplier = fVar1;
  this->_HandleGamepadEvents = true;
  this->_HandleDirectionalNavigation = true;
  *(undefined8 *)&(this->_IsFocusable).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_IsFocusable).Getter = 0;
  *(undefined8 *)&(this->_IsFocusable).Getter.field_0x8 = 0;
  *(undefined8 *)&(this->_OnItemToString_Debug).field_0x10 = 0;
  *(undefined8 *)&this->_OnItemToString_Debug = 0;
  *(undefined8 *)&(this->_OnItemToString_Debug).field_0x8 = 0;
  *(undefined8 *)&(this->_OnEnteredBadState).field_0x10 = 0;
  *(undefined8 *)&this->_OnEnteredBadState = 0;
  *(undefined8 *)&(this->_OnEnteredBadState).field_0x8 = 0;
  this->_WrapHorizontalNavigation = true;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 1;
  return this;
}

// FArguments @ 146987070

FArguments * __thiscall STreeView<UObject_*>::FArguments::FArguments(FArguments *this)

{
  TConsoleVariableData<float> *pTVar1;
  bool bVar2;
  ISlateStyle *pIVar3;
  FName *pFVar4;
  FTableViewStyle *pFVar5;
  FScrollBarStyle *pFVar6;
  longlong lVar7;
  FName local_res8;
  FName local_res10;
  
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  pIVar3 = FAppStyle::Get();
  pFVar4 = ::FName::FName(&local_res8,"TreeView");
  pFVar5 = (FTableViewStyle *)
           (**(code **)((longlong)*pIVar3 + 0xa0))(pIVar3,FTableViewStyle::TypeName,*pFVar4,0,1);
  if (pFVar5 == (FTableViewStyle *)0x0) {
    pFVar5 = FTableViewStyle::GetDefault();
  }
  this->_TreeViewStyle = pFVar5;
  *(undefined8 *)&(this->_OnGenerateRow).field_0x10 = 0;
  *(undefined8 *)&this->_OnGenerateRow = 0;
  *(undefined8 *)&(this->_OnGenerateRow).field_0x8 = 0;
  *(undefined8 *)&(this->_OnGeneratePinnedRow).field_0x10 = 0;
  *(undefined8 *)&this->_OnGeneratePinnedRow = 0;
  *(undefined8 *)&(this->_OnGeneratePinnedRow).field_0x8 = 0;
  *(undefined8 *)&(this->_OnRefreshRow).field_0x10 = 0;
  *(undefined8 *)&this->_OnRefreshRow = 0;
  *(undefined8 *)&(this->_OnRefreshRow).field_0x8 = 0;
  *(undefined8 *)&this->_OnRowReleased = 0;
  *(undefined8 *)&(this->_OnRowReleased).field_0x8 = 0;
  *(undefined4 *)&(this->_OnRowReleased).field_0x10 = 0;
  *(undefined8 *)&this->_OnTreeViewScrolled = 0;
  *(undefined8 *)&(this->_OnTreeViewScrolled).field_0x8 = 0;
  *(undefined4 *)&(this->_OnTreeViewScrolled).field_0x10 = 0;
  *(undefined8 *)&this->_OnFinishedScrolling = 0;
  *(undefined8 *)&(this->_OnFinishedScrolling).field_0x8 = 0;
  *(undefined4 *)&(this->_OnFinishedScrolling).field_0x10 = 0;
  *(undefined8 *)&this->_OnItemScrolledIntoView = 0;
  *(undefined8 *)&(this->_OnItemScrolledIntoView).field_0x8 = 0;
  *(undefined4 *)&(this->_OnItemScrolledIntoView).field_0x10 = 0;
  *(undefined8 *)&(this->_OnGetChildren).field_0x10 = 0;
  *(undefined8 *)&this->_OnGetChildren = 0;
  *(undefined8 *)&(this->_OnGetChildren).field_0x8 = 0;
  *(undefined8 *)&(this->_OnSetExpansionRecursive).field_0x10 = 0;
  *(undefined8 *)&this->_OnSetExpansionRecursive = 0;
  *(undefined8 *)&(this->_OnSetExpansionRecursive).field_0x8 = 0;
  (this->_TreeItemsSource_SharedObservableArray).Object = (TObservableArray<UObject_*> *)0x0;
  (this->_TreeItemsSource_SharedObservableArray).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->_ItemHeight).Value = 0.0;
  (this->_ItemHeight).bIsSet = false;
  this->_TreeItemsSource_ArrayPointer = (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)0x0;
  this->_TreeItemsSource_ObservableArrayPointer = (TObservableArray<UObject_*> *)0x0;
  *(undefined8 *)&(this->_ItemHeight).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_ItemHeight).Getter = 0;
  *(undefined8 *)&(this->_ItemHeight).Getter.field_0x8 = 0;
  (this->_MaxPinnedItems).Value = 6;
  (this->_MaxPinnedItems).bIsSet = true;
  *(undefined8 *)&(this->_MaxPinnedItems).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_MaxPinnedItems).Getter = 0;
  *(undefined8 *)&(this->_MaxPinnedItems).Getter.field_0x8 = 0;
  *(undefined8 *)&(this->_OnContextMenuOpening).field_0x10 = 0;
  *(undefined8 *)&this->_OnContextMenuOpening = 0;
  *(undefined8 *)&(this->_OnContextMenuOpening).field_0x8 = 0;
  *(undefined8 *)&(this->_OnItemsRebuilt).field_0x10 = 0;
  *(undefined8 *)&this->_OnItemsRebuilt = 0;
  *(undefined8 *)&(this->_OnItemsRebuilt).field_0x8 = 0;
  *(undefined8 *)&(this->_OnMouseButtonClick).field_0x10 = 0;
  *(undefined8 *)&this->_OnMouseButtonClick = 0;
  *(undefined8 *)&(this->_OnMouseButtonClick).field_0x8 = 0;
  *(undefined8 *)&(this->_OnMouseButtonDoubleClick).field_0x10 = 0;
  *(undefined8 *)&this->_OnMouseButtonDoubleClick = 0;
  *(undefined8 *)&(this->_OnMouseButtonDoubleClick).field_0x8 = 0;
  *(undefined8 *)&(this->_OnSelectionChanged).field_0x10 = 0;
  *(undefined8 *)&this->_OnSelectionChanged = 0;
  *(undefined8 *)&(this->_OnSelectionChanged).field_0x8 = 0;
  *(undefined8 *)&(this->_OnExpansionChanged).field_0x10 = 0;
  *(undefined8 *)&this->_OnExpansionChanged = 0;
  *(undefined8 *)&(this->_OnExpansionChanged).field_0x8 = 0;
  *(undefined8 *)&(this->_OnIsSelectableOrNavigable).field_0x10 = 0;
  *(undefined8 *)&this->_OnIsSelectableOrNavigable = 0;
  *(undefined8 *)&(this->_OnIsSelectableOrNavigable).field_0x8 = 0;
  (this->_SelectionMode).Value = Multi;
  (this->_SelectionMode).bIsSet = true;
  *(undefined8 *)&(this->_SelectionMode).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_SelectionMode).Getter = 0;
  *(undefined8 *)&(this->_SelectionMode).Getter.field_0x8 = 0;
  (this->_HeaderRow).Object = (SHeaderRow *)0x0;
  (this->_HeaderRow).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->_ClearSelectionOnClick = true;
  (this->_ExternalScrollbar).Object = (SScrollBar *)0x0;
  (this->_ExternalScrollbar).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->_EnableAnimatedScrolling = false;
  (this->_FixedLineScrollOffset).bIsSet = false;
  this->_ScrollbarDragFocusCause = Mouse;
  this->_ConsumeMouseWheel = WhenScrollingPossible;
  this->_AllowOverscroll = Yes;
  pIVar3 = FAppStyle::Get();
  pFVar4 = ::FName::FName(&local_res10,"ScrollBar");
  pFVar6 = (FScrollBarStyle *)
           (**(code **)((longlong)*pIVar3 + 0xa0))(pIVar3,FScrollBarStyle::TypeName,*pFVar4,0,1);
  if (pFVar6 == (FScrollBarStyle *)0x0) {
    pFVar6 = FScrollBarStyle::GetDefault();
  }
  this->_ScrollBarStyle = pFVar6;
  this->_PreventThrottling = false;
  pTVar1 = GlobalScrollAmount.Ref;
  bVar2 = IsInParallelGameThread();
  if (!bVar2) {
    bVar2 = IsInGameThread();
    lVar7 = 4;
    if (!bVar2) goto LAB_14698735e;
  }
  lVar7 = 0;
LAB_14698735e:
  this->_WheelScrollMultiplier = *(float *)((longlong)pTVar1->ShadowedValue + lVar7);
  this->_ShadowBoxStyle = (FScrollBoxStyle *)0x0;
  this->_bEnableShadowBoxStyle = false;
  *(undefined8 *)&(this->_OnItemToString_Debug).field_0x10 = 0;
  *(undefined8 *)&this->_OnItemToString_Debug = 0;
  *(undefined8 *)&(this->_OnItemToString_Debug).field_0x8 = 0;
  *(undefined8 *)&(this->_OnEnteredBadState).field_0x10 = 0;
  *(undefined8 *)&this->_OnEnteredBadState = 0;
  *(undefined8 *)&(this->_OnEnteredBadState).field_0x8 = 0;
  this->_ReturnFocusToSelection = false;
  (this->_ShouldStackHierarchyHeaders).Value = false;
  (this->_ShouldStackHierarchyHeaders).bIsSet = true;
  this->_HandleGamepadEvents = true;
  this->_HandleDirectionalNavigation = true;
  this->_AllowInvisibleItemSelection = false;
  this->_HighlightParentNodesForSelection = false;
  *(undefined8 *)&(this->_ShouldStackHierarchyHeaders).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_ShouldStackHierarchyHeaders).Getter = 0;
  *(undefined8 *)&(this->_ShouldStackHierarchyHeaders).Getter.field_0x8 = 0;
  *(undefined8 *)&this->_OnKeyDownHandler = 0;
  *(undefined8 *)&(this->_OnKeyDownHandler).field_0x8 = 0;
  *(undefined4 *)&(this->_OnKeyDownHandler).field_0x10 = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 1;
  return this;
}

// FArguments @ 146987410

FArguments * __thiscall SAutoRefreshViewport::FArguments::FArguments(FArguments *this)

{
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return this;
}

// FArguments @ 146987430

FArguments * __thiscall SExpandableArea::FArguments::FArguments(FArguments *this)

{
  atomic<int> *paVar1;
  code *pcVar2;
  FLinearColor FVar3;
  FSharedReferencer<1> FVar4;
  ISlateStyle *pIVar5;
  FName *pFVar6;
  FExpandableAreaStyle *pFVar7;
  FSlateBrush *pFVar8;
  FSlateFontInfo *pFVar9;
  FName local_res8;
  undefined1 local_78 [56];
  TReferenceControllerBase<1> *local_40;
  
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  pIVar5 = FAppStyle::Get();
  pFVar6 = ::FName::FName(&local_res8,"ExpandableArea");
  pFVar7 = (FExpandableAreaStyle *)
           (**(code **)((longlong)*pIVar5 + 0xa0))
                     (pIVar5,FExpandableAreaStyle::TypeName,*pFVar6,0,1);
  if (pFVar7 == (FExpandableAreaStyle *)0x0) {
    pFVar7 = FExpandableAreaStyle::GetDefault();
  }
  this->_Style = pFVar7;
  FVar3 = FLinearColor::White;
  (this->_BorderBackgroundColor).Value.ColorUseRule = UseColor_Specified;
  (this->_BorderBackgroundColor).Value.SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FVar3.field0_0x0;
  (this->_BorderBackgroundColor).bIsSet = true;
  *(undefined8 *)&(this->_BorderBackgroundColor).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_BorderBackgroundColor).Getter = 0;
  *(undefined8 *)&(this->_BorderBackgroundColor).Getter.field_0x8 = 0;
  pIVar5 = FAppStyle::Get();
  pcVar2 = *(code **)((longlong)*pIVar5 + 0x50);
  pFVar6 = ::FName::FName(&local_res8,"ExpandableArea.Border");
  pFVar8 = (FSlateBrush *)(*pcVar2)(pIVar5,*pFVar6,0,0);
  (this->_BorderImage).Value = pFVar8;
  (this->_BorderImage).bIsSet = true;
  *(undefined8 *)&(this->_BorderImage).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_BorderImage).Getter = 0;
  *(undefined8 *)&(this->_BorderImage).Getter.field_0x8 = 0;
  FVar3 = FLinearColor::White;
  (this->_BodyBorderBackgroundColor).Value.ColorUseRule = UseColor_Specified;
  (this->_BodyBorderBackgroundColor).Value.SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FVar3.field0_0x0;
  (this->_BodyBorderBackgroundColor).bIsSet = true;
  *(undefined8 *)&(this->_BodyBorderBackgroundColor).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_BodyBorderBackgroundColor).Getter = 0;
  *(undefined8 *)&(this->_BodyBorderBackgroundColor).Getter.field_0x8 = 0;
  this->_BodyBorderImage = (FSlateBrush *)0x0;
  (this->_HeaderContent).Widget.Object = SNullWidget::NullWidget.Object;
  FVar4 = SNullWidget::NullWidget.SharedReferenceCount;
  (this->_HeaderContent).Widget.SharedReferenceCount.ReferenceController =
       SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
  if (FVar4.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar4.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  (this->_BodyContent).Widget.Object = SNullWidget::NullWidget.Object;
  FVar4 = SNullWidget::NullWidget.SharedReferenceCount;
  (this->_BodyContent).Widget.SharedReferenceCount.ReferenceController =
       SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
  if (FVar4.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar4.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  FText::FText(&(this->_AreaTitle).Value);
  (this->_AreaTitle).bIsSet = false;
  *(undefined8 *)&(this->_AreaTitle).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_AreaTitle).Getter = 0;
  *(undefined8 *)&(this->_AreaTitle).Getter.field_0x8 = 0;
  this->_InitiallyCollapsed = false;
  this->_MinWidth = 0.0;
  this->_MaxHeight = 0.0;
  (this->_AreaTitlePadding).Value.Left = 0.0;
  (this->_AreaTitlePadding).Value.Top = 0.0;
  (this->_AreaTitlePadding).Value.Right = 3.0;
  (this->_AreaTitlePadding).Value.Bottom = 0.0;
  (this->_AreaTitlePadding).bIsSet = true;
  *(undefined8 *)&(this->_AreaTitlePadding).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_AreaTitlePadding).Getter = 0;
  *(undefined8 *)&(this->_AreaTitlePadding).Getter.field_0x8 = 0;
  (this->_HeaderPadding).Value.Left = 4.0;
  (this->_HeaderPadding).Value.Top = 2.0;
  (this->_HeaderPadding).Value.Right = 4.0;
  (this->_HeaderPadding).Value.Bottom = 2.0;
  (this->_HeaderPadding).bIsSet = true;
  *(undefined8 *)&(this->_HeaderPadding).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_HeaderPadding).Getter = 0;
  *(undefined8 *)&(this->_HeaderPadding).Getter.field_0x8 = 0;
  (this->_Padding).bIsSet = true;
  (this->_Padding).Value.Left = 1.0;
  (this->_Padding).Value.Top = 1.0;
  (this->_Padding).Value.Right = 1.0;
  (this->_Padding).Value.Bottom = 1.0;
  *(undefined8 *)&(this->_Padding).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_Padding).Getter = 0;
  *(undefined8 *)&(this->_Padding).Getter.field_0x8 = 0;
  *(undefined8 *)&this->_OnAreaExpansionChanged = 0;
  *(undefined8 *)&(this->_OnAreaExpansionChanged).field_0x8 = 0;
  *(undefined4 *)&(this->_OnAreaExpansionChanged).field_0x10 = 0;
  pIVar5 = FAppStyle::Get();
  pcVar2 = *(code **)((longlong)*pIVar5 + 0x88);
  pFVar6 = ::FName::FName(&local_res8,"ExpandableArea.TitleFont");
  pFVar9 = (FSlateFontInfo *)(*pcVar2)(pIVar5,local_78,*pFVar6,0);
  FSlateFontInfo::FSlateFontInfo(&(this->_AreaTitleFont).Value,pFVar9);
  (this->_AreaTitleFont).bIsSet = true;
  *(undefined8 *)&(this->_AreaTitleFont).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_AreaTitleFont).Getter = 0;
  *(undefined8 *)&(this->_AreaTitleFont).Getter.field_0x8 = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
  (this->_HeaderCursor).Value.bIsSet = false;
  (this->_HeaderCursor).bIsSet = false;
  *(undefined8 *)&(this->_HeaderCursor).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_HeaderCursor).Getter = 0;
  *(undefined8 *)&(this->_HeaderCursor).Getter.field_0x8 = 0;
  this->_AllowAnimatedTransition = true;
  return this;
}

// FArguments @ 146987760

FArguments * __thiscall SInputKeySelector::FArguments::FArguments(FArguments *this)

{
  undefined1 *puVar1;
  FName FVar2;
  FKeyDetails *pFVar3;
  FSharedReferencer<1> FVar4;
  ISlateStyle *pIVar5;
  FName *pFVar6;
  FButtonStyle *pFVar7;
  FTextBlockStyle *pFVar8;
  FName local_res8;
  
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  FVar4 = EKeys::Invalid.KeyDetails.SharedReferenceCount;
  pFVar3 = EKeys::Invalid.KeyDetails.Object;
  FVar2 = EKeys::Invalid.KeyName;
  if (EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (FVar4.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar4.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar4.ReferenceController);
  (this->_SelectedKey).Value.Key.KeyName = FVar2;
  (this->_SelectedKey).Value.Key.KeyDetails.Object = pFVar3;
  (this->_SelectedKey).Value.Key.KeyDetails.SharedReferenceCount.ReferenceController =
       FVar4.ReferenceController;
  (this->_SelectedKey).Value.bShift = 0;
  (this->_SelectedKey).Value.bCmd = 0;
  (this->_SelectedKey).Value.bAlt = 0;
  (this->_SelectedKey).Value.bCtrl = 0;
  (this->_SelectedKey).bIsSet = true;
  *(undefined8 *)&(this->_SelectedKey).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_SelectedKey).Getter = 0;
  *(undefined8 *)&(this->_SelectedKey).Getter.field_0x8 = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  FSlateFontInfo::FSlateFontInfo(&(this->_Font).Value);
  (this->_Font).bIsSet = false;
  *(undefined8 *)&(this->_Font).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_Font).Getter = 0;
  *(undefined8 *)&(this->_Font).Getter.field_0x8 = 0;
  (this->_Margin).bIsSet = false;
  (this->_Margin).Value.Left = 0.0;
  (this->_Margin).Value.Top = 0.0;
  (this->_Margin).Value.Right = 0.0;
  (this->_Margin).Value.Bottom = 0.0;
  *(undefined8 *)&(this->_Margin).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_Margin).Getter = 0;
  *(undefined8 *)&(this->_Margin).Getter.field_0x8 = 0;
  pIVar5 = FAppStyle::Get();
  pFVar6 = ::FName::FName(&local_res8,"Button");
  pFVar7 = (FButtonStyle *)
           (**(code **)((longlong)*pIVar5 + 0xa0))(pIVar5,FButtonStyle::TypeName,*pFVar6,0,1);
  if (pFVar7 == (FButtonStyle *)0x0) {
    pFVar7 = FButtonStyle::GetDefault();
  }
  this->_ButtonStyle = pFVar7;
  pIVar5 = FAppStyle::Get();
  pFVar6 = ::FName::FName(&local_res8,"NormalText");
  pFVar8 = (FTextBlockStyle *)
           (**(code **)((longlong)*pIVar5 + 0xa0))(pIVar5,FTextBlockStyle::TypeName,*pFVar6,0,1);
  if (pFVar8 == (FTextBlockStyle *)0x0) {
    pFVar8 = FTextBlockStyle::GetDefault();
  }
  this->_TextStyle = pFVar8;
  FText::AsLocalizable_Advanced_LocText
            (&this->_KeySelectionText,L"InputKeySelector",L"DefaultKeySelectionText",L"...");
  FText::AsLocalizable_Advanced_LocText
            (&this->_NoKeySpecifiedText,L"InputKeySelector",L"DefaultEmptyText",L"Empty");
  (this->_EscapeKeys).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->_EscapeKeys).ArrayNum = 0;
  (this->_EscapeKeys).ArrayMax = 0;
  *(undefined8 *)&this->_OnKeySelected = 0;
  *(undefined8 *)&(this->_OnKeySelected).field_0x8 = 0;
  *(undefined4 *)&(this->_OnKeySelected).field_0x10 = 0;
  *(undefined8 *)&this->_OnIsSelectingKeyChanged = 0;
  *(undefined8 *)&(this->_OnIsSelectingKeyChanged).field_0x8 = 0;
  *(undefined4 *)&(this->_OnIsSelectingKeyChanged).field_0x10 = 0;
  this->_AllowModifierKeys = true;
  this->_AllowGamepadKeys = false;
  this->_EscapeCancelsSelection = true;
  this->_IsFocusable = true;
  return this;
}

// FArguments @ 146987980

FArguments * __thiscall
SListView<UObject_*>::SListViewPinnedRowWidget::FArguments::FArguments(FArguments *this)

{
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return this;
}

// FArguments @ 1469879a0

FArguments * __thiscall SMouseHoverWidget::FArguments::FArguments(FArguments *this)

{
  atomic<int> *paVar1;
  FSharedReferencer<1> FVar2;
  
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  (this->_Content).Widget.Object = SNullWidget::NullWidget.Object;
  FVar2 = SNullWidget::NullWidget.SharedReferenceCount;
  (this->_Content).Widget.SharedReferenceCount.ReferenceController =
       SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
  if (FVar2.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar2.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  return this;
}

// FArguments @ 1469879f0

FArguments * __thiscall SObjectWidget::FArguments::FArguments(FArguments *this)

{
  atomic<int> *paVar1;
  FSharedReferencer<1> FVar2;
  FDestructionSentinel local_48;
  uchar local_30;
  undefined1 local_2f;
  undefined1 local_28 [8];
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  (this->_Content).Widget.Object = SNullWidget::NullWidget.Object;
  FVar2 = SNullWidget::NullWidget.SharedReferenceCount;
  (this->_Content).Widget.SharedReferenceCount.ReferenceController =
       SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
  if (FVar2.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar2.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  local_30 = (uchar)EVisibility::SelfHitTestInvisible.Value.Value;
  local_18 = 0;
  local_2f = 1;
  local_28 = (undefined1  [8])0x0;
  FStack_20.Data = (FScriptContainerElement *)0x0;
  *(TEnumAsByte<EVisibility::Private> *)&this->_padding_ =
       EVisibility::SelfHitTestInvisible.Value.Value;
  *(undefined1 *)((longlong)&this->_padding_ + 1) = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_28);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_28,
             (FWriteAccessScope *)&local_48);
  if (((int)local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
    local_18 = local_18 & 0xffffffff00000000;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  if (FStack_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_20.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_28);
  return this;
}

// FArguments @ 146987af0

FArguments * __thiscall SPostBufferUpdate::FArguments::FArguments(FArguments *this)

{
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  this->_bUsePaintGeometry = false;
  return this;
}

// FArguments @ 146987b20

FArguments * __thiscall SRadialBox::FArguments::FArguments(FArguments *this)

{
  FDestructionSentinel local_48;
  uchar local_30;
  undefined1 local_2f;
  undefined1 local_28 [8];
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  (this->_PreferredWidth).Value = 100.0;
  (this->_PreferredWidth).bIsSet = true;
  (this->_Slots).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->_Slots).ArrayNum = 0;
  (this->_Slots).ArrayMax = 0;
  *(undefined8 *)&(this->_PreferredWidth).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_PreferredWidth).Getter = 0;
  *(undefined8 *)&(this->_PreferredWidth).Getter.field_0x8 = 0;
  this->_UseAllottedWidth = false;
  this->_StartingAngle = 0.0;
  this->_bDistributeItemsEvenly = true;
  this->_AngleBetweenItems = 0.0;
  this->_SectorCentralAngle = 360.0;
  this->_bClockwiseOrder = false;
  local_30 = (uchar)EVisibility::SelfHitTestInvisible.Value.Value;
  *(TEnumAsByte<EVisibility::Private> *)&this->_padding_ =
       EVisibility::SelfHitTestInvisible.Value.Value;
  local_2f = 1;
  local_28 = (undefined1  [8])0x0;
  FStack_20.Data = (FScriptContainerElement *)0x0;
  local_18 = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 1) = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_28);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_28,
             (FWriteAccessScope *)&local_48);
  if (((int)local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
    local_18 = local_18 & 0xffffffff00000000;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  if (FStack_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_20.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_28);
  return this;
}

// FArguments @ 146987c60

FArguments * __thiscall SRetainerWidget::FArguments::FArguments(FArguments *this)

{
  atomic<int> *paVar1;
  FSharedReferencer<1> FVar2;
  FDestructionSentinel local_48;
  uchar local_30;
  undefined1 local_2f;
  undefined1 local_28 [8];
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  (this->_Content).Widget.Object = SNullWidget::NullWidget.Object;
  FVar2 = SNullWidget::NullWidget.SharedReferenceCount;
  (this->_Content).Widget.SharedReferenceCount.ReferenceController =
       SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
  if (FVar2.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar2.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  local_2f = 1;
  (this->_StatId).ComparisonIndex = 0;
  (this->_StatId).Number = 0;
  local_30 = (uchar)EVisibility::SelfHitTestInvisible.Value.Value;
  *(TEnumAsByte<EVisibility::Private> *)&this->_padding_ =
       EVisibility::SelfHitTestInvisible.Value.Value;
  local_28 = (undefined1  [8])0x0;
  FStack_20.Data = (FScriptContainerElement *)0x0;
  local_18 = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 1) = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_28);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_28,
             (FWriteAccessScope *)&local_48);
  if (((int)local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
    local_18 = local_18 & 0xffffffff00000000;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  if (FStack_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_20.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_28);
  this->_Phase = 0;
  this->_PhaseCount = 1;
  this->_RenderOnPhase = true;
  this->_RenderOnInvalidation = false;
  return this;
}

// FArguments @ 146987d90

FArguments * __thiscall SRichInlineImage::FArguments::FArguments(FArguments *this)

{
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return this;
}

// FArguments @ 146987db0

FArguments * __thiscall SSafeZone::FArguments::FArguments(FArguments *this)

{
  atomic<int> *paVar1;
  FSharedReferencer<1> FVar2;
  
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  (this->_Padding).bIsSet = true;
  this->_HAlign = HAlign_Fill;
  this->_VAlign = VAlign_Fill;
  (this->_Padding).Value.Left = 0.0;
  (this->_Padding).Value.Top = 0.0;
  (this->_Padding).Value.Right = 0.0;
  (this->_Padding).Value.Bottom = 0.0;
  *(undefined8 *)&(this->_Padding).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_Padding).Getter = 0;
  *(undefined8 *)&(this->_Padding).Getter.field_0x8 = 0;
  (this->_Content).Widget.Object = SNullWidget::NullWidget.Object;
  FVar2 = SNullWidget::NullWidget.SharedReferenceCount;
  (this->_Content).Widget.SharedReferenceCount.ReferenceController =
       SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
  if (FVar2.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar2.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  this->_IsTitleSafe = false;
  (this->_SafeAreaScale).Left = 1.0;
  (this->_SafeAreaScale).Top = 1.0;
  (this->_SafeAreaScale).Right = 1.0;
  (this->_SafeAreaScale).Bottom = 1.0;
  this->_PadLeft = true;
  this->_PadRight = true;
  this->_PadTop = true;
  this->_PadBottom = true;
  return this;
}

// FArguments @ 146987e60

FArguments * __thiscall SStackBox::FArguments::FArguments(FArguments *this)

{
  FDestructionSentinel local_48;
  uchar local_30;
  undefined1 local_2f;
  undefined1 local_28 [8];
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  local_2f = 1;
  (this->_Slots).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->_Slots).ArrayNum = 0;
  (this->_Slots).ArrayMax = 0;
  local_30 = (uchar)EVisibility::SelfHitTestInvisible.Value.Value;
  *(TEnumAsByte<EVisibility::Private> *)&this->_padding_ =
       EVisibility::SelfHitTestInvisible.Value.Value;
  local_28 = (undefined1  [8])0x0;
  FStack_20.Data = (FScriptContainerElement *)0x0;
  local_18 = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 1) = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_28);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_28,
             (FWriteAccessScope *)&local_48);
  if (((int)local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
    local_18 = local_18 & 0xffffffff00000000;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  if (FStack_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_20.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_28);
  return this;
}

// ~FArguments @ 1469908e0

void __thiscall SListView<UObject_*>::FArguments::~FArguments(FArguments *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnKeyDownHandler);
  pvVar1 = *(void **)&(this->_OnKeyDownHandler).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnKeyDownHandler);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnEnteredBadState);
  pvVar1 = *(void **)&(this->_OnEnteredBadState).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnEnteredBadState);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnItemToString_Debug);
  pvVar1 = *(void **)&(this->_OnItemToString_Debug).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnItemToString_Debug);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_IsFocusable).Getter);
  pvVar1 = *(void **)&(this->_IsFocusable).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_IsFocusable).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_ScrollbarVisibility).Getter);
  pvVar1 = *(void **)&(this->_ScrollbarVisibility).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_ScrollbarVisibility).Getter);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->_ExternalScrollbar).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->_HeaderRow).SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_SelectionMode).Getter);
  pvVar1 = *(void **)&(this->_SelectionMode).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_SelectionMode).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnIsSelectableOrNavigable);
  pvVar1 = *(void **)&(this->_OnIsSelectableOrNavigable).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnIsSelectableOrNavigable);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnSelectionChanged);
  pvVar1 = *(void **)&(this->_OnSelectionChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnSelectionChanged);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnMouseButtonDoubleClick);
  pvVar1 = *(void **)&(this->_OnMouseButtonDoubleClick).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnMouseButtonDoubleClick);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnMouseButtonClick);
  pvVar1 = *(void **)&(this->_OnMouseButtonClick).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnMouseButtonClick);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnItemsRebuilt);
  pvVar1 = *(void **)&(this->_OnItemsRebuilt).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnItemsRebuilt);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnContextMenuOpening);
  pvVar1 = *(void **)&(this->_OnContextMenuOpening).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnContextMenuOpening);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_MaxPinnedItems).Getter);
  pvVar1 = *(void **)&(this->_MaxPinnedItems).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_MaxPinnedItems).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_ItemHeight).Getter);
  pvVar1 = *(void **)&(this->_ItemHeight).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_ItemHeight).Getter);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->_ListItemsSource_SharedObservableArray).SharedReferenceCount.ReferenceController
            );
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnFinishedScrolling);
  pvVar1 = *(void **)&(this->_OnFinishedScrolling).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnFinishedScrolling);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnItemScrolledIntoView);
  pvVar1 = *(void **)&(this->_OnItemScrolledIntoView).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnItemScrolledIntoView);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnListViewScrolled);
  pvVar1 = *(void **)&(this->_OnListViewScrolled).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnListViewScrolled);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnRowReleased);
  pvVar1 = *(void **)&(this->_OnRowReleased).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnRowReleased);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnEntryInitialized);
  pvVar1 = *(void **)&(this->_OnEntryInitialized).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnEntryInitialized);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnRefreshRow);
  pvVar1 = *(void **)&(this->_OnRefreshRow).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnRefreshRow);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnGeneratePinnedRow);
  pvVar1 = *(void **)&(this->_OnGeneratePinnedRow).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnGeneratePinnedRow);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnGenerateRow);
  pvVar1 = *(void **)&(this->_OnGenerateRow).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnGenerateRow);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return;
}

// ~FArguments @ 146990cb0

void __thiscall SListView<FName>::FArguments::~FArguments(FArguments *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnKeyDownHandler);
  pvVar1 = *(void **)&(this->_OnKeyDownHandler).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnKeyDownHandler);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnEnteredBadState);
  pvVar1 = *(void **)&(this->_OnEnteredBadState).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnEnteredBadState);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnItemToString_Debug);
  pvVar1 = *(void **)&(this->_OnItemToString_Debug).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnItemToString_Debug);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_IsFocusable).Getter);
  pvVar1 = *(void **)&(this->_IsFocusable).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_IsFocusable).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_ScrollbarVisibility).Getter);
  pvVar1 = *(void **)&(this->_ScrollbarVisibility).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_ScrollbarVisibility).Getter);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->_ExternalScrollbar).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->_HeaderRow).SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_SelectionMode).Getter);
  pvVar1 = *(void **)&(this->_SelectionMode).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_SelectionMode).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnIsSelectableOrNavigable);
  pvVar1 = *(void **)&(this->_OnIsSelectableOrNavigable).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnIsSelectableOrNavigable);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnSelectionChanged);
  pvVar1 = *(void **)&(this->_OnSelectionChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnSelectionChanged);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnMouseButtonDoubleClick);
  pvVar1 = *(void **)&(this->_OnMouseButtonDoubleClick).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnMouseButtonDoubleClick);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnMouseButtonClick);
  pvVar1 = *(void **)&(this->_OnMouseButtonClick).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnMouseButtonClick);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnItemsRebuilt);
  pvVar1 = *(void **)&(this->_OnItemsRebuilt).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnItemsRebuilt);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnContextMenuOpening);
  pvVar1 = *(void **)&(this->_OnContextMenuOpening).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnContextMenuOpening);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_MaxPinnedItems).Getter);
  pvVar1 = *(void **)&(this->_MaxPinnedItems).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_MaxPinnedItems).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_ItemHeight).Getter);
  pvVar1 = *(void **)&(this->_ItemHeight).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_ItemHeight).Getter);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->_ListItemsSource_SharedObservableArray).SharedReferenceCount.ReferenceController
            );
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnFinishedScrolling);
  pvVar1 = *(void **)&(this->_OnFinishedScrolling).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnFinishedScrolling);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnItemScrolledIntoView);
  pvVar1 = *(void **)&(this->_OnItemScrolledIntoView).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnItemScrolledIntoView);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnListViewScrolled);
  pvVar1 = *(void **)&(this->_OnListViewScrolled).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnListViewScrolled);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnRowReleased);
  pvVar1 = *(void **)&(this->_OnRowReleased).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnRowReleased);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnEntryInitialized);
  pvVar1 = *(void **)&(this->_OnEntryInitialized).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnEntryInitialized);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnRefreshRow);
  pvVar1 = *(void **)&(this->_OnRefreshRow).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnRefreshRow);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnGeneratePinnedRow);
  pvVar1 = *(void **)&(this->_OnGeneratePinnedRow).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnGeneratePinnedRow);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnGenerateRow);
  pvVar1 = *(void **)&(this->_OnGenerateRow).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnGenerateRow);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return;
}

// ~FArguments @ 146991080

void __thiscall STableRow<UObject_*>::FArguments::~FArguments(FArguments *this)

{
  void *pvVar1;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->_Content).Widget.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_Padding).Getter);
  pvVar1 = *(void **)&(this->_Padding).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_Padding).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnDrop);
  pvVar1 = *(void **)&(this->_OnDrop).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnDrop);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnDragLeave);
  pvVar1 = *(void **)&(this->_OnDragLeave).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnDragLeave);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnDragEnter);
  pvVar1 = *(void **)&(this->_OnDragEnter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnDragEnter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnDragDetected);
  pvVar1 = *(void **)&(this->_OnDragDetected).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnDragDetected);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnPaintDropIndicator);
  pvVar1 = *(void **)&(this->_OnPaintDropIndicator).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnPaintDropIndicator);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnAcceptDrop);
  pvVar1 = *(void **)&(this->_OnAcceptDrop).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnAcceptDrop);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnCanAcceptDrop);
  pvVar1 = *(void **)&(this->_OnCanAcceptDrop).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnCanAcceptDrop);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return;
}

// ~FArguments @ 146991200

void __thiscall STableRow<FName>::FArguments::~FArguments(FArguments *this)

{
  void *pvVar1;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->_Content).Widget.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_Padding).Getter);
  pvVar1 = *(void **)&(this->_Padding).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_Padding).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnDrop);
  pvVar1 = *(void **)&(this->_OnDrop).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnDrop);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnDragLeave);
  pvVar1 = *(void **)&(this->_OnDragLeave).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnDragLeave);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnDragEnter);
  pvVar1 = *(void **)&(this->_OnDragEnter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnDragEnter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnDragDetected);
  pvVar1 = *(void **)&(this->_OnDragDetected).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnDragDetected);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnPaintDropIndicator);
  pvVar1 = *(void **)&(this->_OnPaintDropIndicator).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnPaintDropIndicator);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnAcceptDrop);
  pvVar1 = *(void **)&(this->_OnAcceptDrop).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnAcceptDrop);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnCanAcceptDrop);
  pvVar1 = *(void **)&(this->_OnCanAcceptDrop).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnCanAcceptDrop);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return;
}

// ~FArguments @ 146991380

void __thiscall STileView<UObject_*>::FArguments::~FArguments(FArguments *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnEnteredBadState);
  pvVar1 = *(void **)&(this->_OnEnteredBadState).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnEnteredBadState);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnItemToString_Debug);
  pvVar1 = *(void **)&(this->_OnItemToString_Debug).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnItemToString_Debug);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_IsFocusable).Getter);
  pvVar1 = *(void **)&(this->_IsFocusable).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_IsFocusable).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_ScrollbarVisibility).Getter);
  pvVar1 = *(void **)&(this->_ScrollbarVisibility).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_ScrollbarVisibility).Getter);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->_ExternalScrollbar).SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_SelectionMode).Getter);
  pvVar1 = *(void **)&(this->_SelectionMode).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_SelectionMode).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnIsSelectableOrNavigable);
  pvVar1 = *(void **)&(this->_OnIsSelectableOrNavigable).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnIsSelectableOrNavigable);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnSelectionChanged);
  pvVar1 = *(void **)&(this->_OnSelectionChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnSelectionChanged);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnMouseButtonDoubleClick);
  pvVar1 = *(void **)&(this->_OnMouseButtonDoubleClick).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnMouseButtonDoubleClick);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnMouseButtonClick);
  pvVar1 = *(void **)&(this->_OnMouseButtonClick).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnMouseButtonClick);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnItemsRebuilt);
  pvVar1 = *(void **)&(this->_OnItemsRebuilt).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnItemsRebuilt);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnContextMenuOpening);
  pvVar1 = *(void **)&(this->_OnContextMenuOpening).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnContextMenuOpening);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_ItemAlignment).Getter);
  pvVar1 = *(void **)&(this->_ItemAlignment).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_ItemAlignment).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_ItemWidth).Getter);
  pvVar1 = *(void **)&(this->_ItemWidth).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_ItemWidth).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_ItemHeight).Getter);
  pvVar1 = *(void **)&(this->_ItemHeight).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_ItemHeight).Getter);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->_ListItemsSource_SharedObservableArray).SharedReferenceCount.ReferenceController
            );
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnItemScrolledIntoView);
  pvVar1 = *(void **)&(this->_OnItemScrolledIntoView).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnItemScrolledIntoView);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnFinishedScrolling);
  pvVar1 = *(void **)&(this->_OnFinishedScrolling).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnFinishedScrolling);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnTileViewScrolled);
  pvVar1 = *(void **)&(this->_OnTileViewScrolled).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnTileViewScrolled);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnTileReleased);
  pvVar1 = *(void **)&(this->_OnTileReleased).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnTileReleased);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnRefreshTile);
  pvVar1 = *(void **)&(this->_OnRefreshTile).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnRefreshTile);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnGenerateTile);
  pvVar1 = *(void **)&(this->_OnGenerateTile).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnGenerateTile);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return;
}

// ~FArguments @ 146991700

void __thiscall STreeView<UObject_*>::FArguments::~FArguments(FArguments *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnKeyDownHandler);
  pvVar1 = *(void **)&(this->_OnKeyDownHandler).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnKeyDownHandler);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->_ShouldStackHierarchyHeaders).Getter);
  pvVar1 = *(void **)&(this->_ShouldStackHierarchyHeaders).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_ShouldStackHierarchyHeaders).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnEnteredBadState);
  pvVar1 = *(void **)&(this->_OnEnteredBadState).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnEnteredBadState);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnItemToString_Debug);
  pvVar1 = *(void **)&(this->_OnItemToString_Debug).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnItemToString_Debug);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->_ExternalScrollbar).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->_HeaderRow).SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_SelectionMode).Getter);
  pvVar1 = *(void **)&(this->_SelectionMode).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_SelectionMode).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnIsSelectableOrNavigable);
  pvVar1 = *(void **)&(this->_OnIsSelectableOrNavigable).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnIsSelectableOrNavigable);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnExpansionChanged);
  pvVar1 = *(void **)&(this->_OnExpansionChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnExpansionChanged);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnSelectionChanged);
  pvVar1 = *(void **)&(this->_OnSelectionChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnSelectionChanged);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnMouseButtonDoubleClick);
  pvVar1 = *(void **)&(this->_OnMouseButtonDoubleClick).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnMouseButtonDoubleClick);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnMouseButtonClick);
  pvVar1 = *(void **)&(this->_OnMouseButtonClick).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnMouseButtonClick);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnItemsRebuilt);
  pvVar1 = *(void **)&(this->_OnItemsRebuilt).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnItemsRebuilt);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnContextMenuOpening);
  pvVar1 = *(void **)&(this->_OnContextMenuOpening).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnContextMenuOpening);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_MaxPinnedItems).Getter);
  pvVar1 = *(void **)&(this->_MaxPinnedItems).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_MaxPinnedItems).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_ItemHeight).Getter);
  pvVar1 = *(void **)&(this->_ItemHeight).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_ItemHeight).Getter);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->_TreeItemsSource_SharedObservableArray).SharedReferenceCount.ReferenceController
            );
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnSetExpansionRecursive);
  pvVar1 = *(void **)&(this->_OnSetExpansionRecursive).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnSetExpansionRecursive);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnGetChildren);
  pvVar1 = *(void **)&(this->_OnGetChildren).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnGetChildren);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnItemScrolledIntoView);
  pvVar1 = *(void **)&(this->_OnItemScrolledIntoView).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnItemScrolledIntoView);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnFinishedScrolling);
  pvVar1 = *(void **)&(this->_OnFinishedScrolling).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnFinishedScrolling);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnTreeViewScrolled);
  pvVar1 = *(void **)&(this->_OnTreeViewScrolled).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnTreeViewScrolled);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnRowReleased);
  pvVar1 = *(void **)&(this->_OnRowReleased).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnRowReleased);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnRefreshRow);
  pvVar1 = *(void **)&(this->_OnRefreshRow).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnRefreshRow);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnGeneratePinnedRow);
  pvVar1 = *(void **)&(this->_OnGeneratePinnedRow).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnGeneratePinnedRow);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnGenerateRow);
  pvVar1 = *(void **)&(this->_OnGenerateRow).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnGenerateRow);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return;
}

// ~FArguments @ 146991b00

void __thiscall SExpandableArea::FArguments::~FArguments(FArguments *this)

{
  void *pvVar1;
  ITextData *pIVar2;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_HeaderCursor).Getter);
  pvVar1 = *(void **)&(this->_HeaderCursor).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_HeaderCursor).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_AreaTitleFont).Getter);
  pvVar1 = *(void **)&(this->_AreaTitleFont).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_AreaTitleFont).Getter);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->_AreaTitleFont).Value.CompositeFont.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnAreaExpansionChanged);
  pvVar1 = *(void **)&(this->_OnAreaExpansionChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnAreaExpansionChanged);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_Padding).Getter);
  pvVar1 = *(void **)&(this->_Padding).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_Padding).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_HeaderPadding).Getter);
  pvVar1 = *(void **)&(this->_HeaderPadding).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_HeaderPadding).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_AreaTitlePadding).Getter);
  pvVar1 = *(void **)&(this->_AreaTitlePadding).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_AreaTitlePadding).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_AreaTitle).Getter);
  pvVar1 = *(void **)&(this->_AreaTitle).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_AreaTitle).Getter);
  pIVar2 = (this->_AreaTitle).Value.TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->_BodyContent).Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->_HeaderContent).Widget.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_BodyBorderBackgroundColor).Getter
            );
  pvVar1 = *(void **)&(this->_BodyBorderBackgroundColor).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_BodyBorderBackgroundColor).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_BorderImage).Getter);
  pvVar1 = *(void **)&(this->_BorderImage).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_BorderImage).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_BorderBackgroundColor).Getter);
  pvVar1 = *(void **)&(this->_BorderBackgroundColor).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_BorderBackgroundColor).Getter);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return;
}

// ~FArguments @ 146991d00

void __thiscall SWrapBox::FArguments::~FArguments(FArguments *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_HAlign).Getter);
  pvVar1 = *(void **)&(this->_HAlign).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_HAlign).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_PreferredSize).Getter);
  pvVar1 = *(void **)&(this->_PreferredSize).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_PreferredSize).Getter);
  DestructItems<SWrapBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)(this->_Slots).AllocatorInstance.Data,(this->_Slots).ArrayNum);
  pFVar2 = (this->_Slots).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return;
}

// MakeListItemsSource @ 1469e3fa0

TUniquePtr<UE::Slate::ItemsSource::IItemsSource<UObject_*>,TDefaultDelete<UE::Slate::ItemsSource::IItemsSource<UObject_*>_>_>
 __thiscall
SListView<UObject_*>::FArguments::MakeListItemsSource
          (FArguments *this,TSharedRef<STableViewBase,1> *param_1)

{
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *pTVar1;
  TObservableArray<UObject_*> *pTVar2;
  STableViewBase *pSVar3;
  FObservableArrayPointer<UObject_*> *this_00;
  TSharedRef<UE::Slate::Containers::TObservableArray<UObject_*>,1> *pTVar4;
  FSharedObservableArray<UObject_*> *this_01;
  TReferenceControllerBase<1> *pTVar5;
  undefined8 *in_R8;
  TSharedRef<STableViewBase,1> local_38;
  TSharedRef<STableViewBase,1> local_28;
  TSharedRef<UE::Slate::Containers::TObservableArray<UObject_*>,1> local_18;
  
  if (this->_ListItemsSource_ArrayPointer == (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)0x0) {
    if (this->_ListItemsSource_ObservableArrayPointer == (TObservableArray<UObject_*> *)0x0) {
      if ((this->_ListItemsSource_SharedObservableArray).Object ==
          (TObservableArray<UObject_*> *)0x0) {
        pTVar5 = (TReferenceControllerBase<1> *)in_R8[1];
        param_1->Object = (STableViewBase *)0x0;
      }
      else {
        pTVar4 = TSharedPtr<UE::Slate::Containers::TObservableArray<UObject_*>,1>::ToSharedRef
                           (&this->_ListItemsSource_SharedObservableArray,&local_18);
        this_01 = ::operator_new(0x30);
        if (this_01 == (FSharedObservableArray<UObject_*> *)0x0) {
          pSVar3 = (STableViewBase *)0x0;
        }
        else {
          local_38.Object = (STableViewBase *)pTVar4->Object;
          local_38.SharedReferenceCount.ReferenceController =
               (pTVar4->SharedReferenceCount).ReferenceController;
          if (local_38.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          local_28.Object = (STableViewBase *)*in_R8;
          local_28.SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)in_R8[1];
          if (local_28.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          pSVar3 = (STableViewBase *)
                   UE::Slate::ItemsSource::FSharedObservableArray<UObject_*>::
                   FSharedObservableArray<UObject_*>
                             (this_01,&local_28,
                              (TSharedRef<UE::Slate::Containers::TObservableArray<UObject_*>,1> *)
                              &local_38);
        }
        param_1->Object = pSVar3;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_18.SharedReferenceCount.ReferenceController);
        pTVar5 = (TReferenceControllerBase<1> *)in_R8[1];
      }
      goto LAB_1469e40f5;
    }
    this_00 = ::operator_new(0x28);
    if (this_00 != (FObservableArrayPointer<UObject_*> *)0x0) {
      local_38.Object = (STableViewBase *)*in_R8;
      pTVar2 = this->_ListItemsSource_ObservableArrayPointer;
      local_38.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)in_R8[1];
      if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pSVar3 = (STableViewBase *)
               UE::Slate::ItemsSource::FObservableArrayPointer<UObject_*>::
               FObservableArrayPointer<UObject_*>(this_00,&local_38,pTVar2);
      pTVar5 = (TReferenceControllerBase<1> *)in_R8[1];
      param_1->Object = pSVar3;
      goto LAB_1469e40f5;
    }
  }
  else {
    pSVar3 = ::operator_new(0x10);
    if (pSVar3 != (STableViewBase *)0x0) {
      pTVar1 = this->_ListItemsSource_ArrayPointer;
      *(undefined ***)pSVar3 = &___7__FArrayPointer_PEAVUObject___ItemsSource_Slate_UE__6B_;
      *(TArray<UObject_*,TSizedDefaultAllocator<32>_> **)&pSVar3->field_0x8 = pTVar1;
      pTVar5 = (TReferenceControllerBase<1> *)in_R8[1];
      param_1->Object = pSVar3;
      goto LAB_1469e40f5;
    }
  }
  pTVar5 = (TReferenceControllerBase<1> *)in_R8[1];
  param_1->Object = (STableViewBase *)0x0;
LAB_1469e40f5:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return (TUniquePtr<UE::Slate::ItemsSource::IItemsSource<UObject_*>,TDefaultDelete<UE::Slate::ItemsSource::IItemsSource<UObject_*>_>_>
          )(IItemsSource<UObject_*> *)param_1;
}

// MakeListItemsSource @ 1469e4120

TUniquePtr<UE::Slate::ItemsSource::IItemsSource<FName>,TDefaultDelete<UE::Slate::ItemsSource::IItemsSource<FName>_>_>
 __thiscall
SListView<FName>::FArguments::MakeListItemsSource
          (FArguments *this,TSharedRef<STableViewBase,1> *param_1)

{
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  TObservableArray<FName> *pTVar3;
  STableViewBase *pSVar4;
  FObservableArrayPointer<FName> *this_00;
  FSharedObservableArray<FName> *this_01;
  longlong *in_R8;
  TSharedRef<STableViewBase,1> local_28;
  TSharedRef<STableViewBase,1> local_18;
  
  if (this->_ListItemsSource_ArrayPointer == (TArray<FName,TSizedDefaultAllocator<32>_> *)0x0) {
    if (this->_ListItemsSource_ObservableArrayPointer == (TObservableArray<FName> *)0x0) {
      pSVar4 = (STableViewBase *)(this->_ListItemsSource_SharedObservableArray).Object;
      if (pSVar4 == (STableViewBase *)0x0) {
        pTVar2 = (TReferenceControllerBase<1> *)in_R8[1];
        param_1->Object = (STableViewBase *)0x0;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      }
      else {
        pTVar2 = (this->_ListItemsSource_SharedObservableArray).SharedReferenceCount.
                 ReferenceController;
        if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
          UNLOCK();
        }
        this_01 = ::operator_new(0x30);
        if (this_01 == (FSharedObservableArray<FName> *)0x0) {
          pSVar4 = (STableViewBase *)0x0;
        }
        else {
          if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_18.SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)in_R8[1];
          local_18.Object = (STableViewBase *)*in_R8;
          if (local_18.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          local_28.Object = pSVar4;
          local_28.SharedReferenceCount.ReferenceController = pTVar2;
          pSVar4 = (STableViewBase *)
                   UE::Slate::ItemsSource::FSharedObservableArray<FName>::
                   FSharedObservableArray<FName>
                             (this_01,&local_18,
                              (TSharedRef<UE::Slate::Containers::TObservableArray<FName>,1> *)
                              &local_28);
        }
        param_1->Object = pSVar4;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)in_R8[1]);
      }
      return (TUniquePtr<UE::Slate::ItemsSource::IItemsSource<FName>,TDefaultDelete<UE::Slate::ItemsSource::IItemsSource<FName>_>_>
              )(IItemsSource<FName> *)param_1;
    }
    this_00 = ::operator_new(0x28);
    if (this_00 != (FObservableArrayPointer<FName> *)0x0) {
      local_28.Object = (STableViewBase *)*in_R8;
      pTVar3 = this->_ListItemsSource_ObservableArrayPointer;
      local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)in_R8[1];
      if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pSVar4 = (STableViewBase *)
               UE::Slate::ItemsSource::FObservableArrayPointer<FName>::
               FObservableArrayPointer<FName>(this_00,&local_28,pTVar3);
      goto LAB_1469e418b;
    }
  }
  else {
    pSVar4 = ::operator_new(0x10);
    if (pSVar4 != (STableViewBase *)0x0) {
      pTVar1 = this->_ListItemsSource_ArrayPointer;
      *(undefined ***)pSVar4 = &___7__FArrayPointer_VFName___ItemsSource_Slate_UE__6B_;
      *(TArray<FName,TSizedDefaultAllocator<32>_> **)&pSVar4->field_0x8 = pTVar1;
      pTVar2 = (TReferenceControllerBase<1> *)in_R8[1];
      param_1->Object = pSVar4;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      return (TUniquePtr<UE::Slate::ItemsSource::IItemsSource<FName>,TDefaultDelete<UE::Slate::ItemsSource::IItemsSource<FName>_>_>
              )(IItemsSource<FName> *)param_1;
    }
  }
  pSVar4 = (STableViewBase *)0x0;
LAB_1469e418b:
  pTVar2 = (TReferenceControllerBase<1> *)in_R8[1];
  param_1->Object = pSVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return (TUniquePtr<UE::Slate::ItemsSource::IItemsSource<FName>,TDefaultDelete<UE::Slate::ItemsSource::IItemsSource<FName>_>_>
          )(IItemsSource<FName> *)param_1;
}

// MakeListItemsSource @ 1469e42d0

TUniquePtr<UE::Slate::ItemsSource::IItemsSource<UObject_*>,TDefaultDelete<UE::Slate::ItemsSource::IItemsSource<UObject_*>_>_>
 __thiscall
STileView<UObject_*>::FArguments::MakeListItemsSource
          (FArguments *this,TSharedRef<STableViewBase,1> *param_1)

{
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *pTVar1;
  TObservableArray<UObject_*> *pTVar2;
  STableViewBase *pSVar3;
  FObservableArrayPointer<UObject_*> *this_00;
  TSharedRef<UE::Slate::Containers::TObservableArray<UObject_*>,1> *pTVar4;
  FSharedObservableArray<UObject_*> *this_01;
  TReferenceControllerBase<1> *pTVar5;
  undefined8 *in_R8;
  TSharedRef<STableViewBase,1> local_38;
  TSharedRef<STableViewBase,1> local_28;
  TSharedRef<UE::Slate::Containers::TObservableArray<UObject_*>,1> local_18;
  
  if (this->_ListItemsSource_ArrayPointer == (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)0x0) {
    if (this->_ListItemsSource_ObservableArrayPointer == (TObservableArray<UObject_*> *)0x0) {
      if ((this->_ListItemsSource_SharedObservableArray).Object ==
          (TObservableArray<UObject_*> *)0x0) {
        pTVar5 = (TReferenceControllerBase<1> *)in_R8[1];
        param_1->Object = (STableViewBase *)0x0;
      }
      else {
        pTVar4 = TSharedPtr<UE::Slate::Containers::TObservableArray<UObject_*>,1>::ToSharedRef
                           (&this->_ListItemsSource_SharedObservableArray,&local_18);
        this_01 = ::operator_new(0x30);
        if (this_01 == (FSharedObservableArray<UObject_*> *)0x0) {
          pSVar3 = (STableViewBase *)0x0;
        }
        else {
          local_38.Object = (STableViewBase *)pTVar4->Object;
          local_38.SharedReferenceCount.ReferenceController =
               (pTVar4->SharedReferenceCount).ReferenceController;
          if (local_38.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          local_28.Object = (STableViewBase *)*in_R8;
          local_28.SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)in_R8[1];
          if (local_28.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          pSVar3 = (STableViewBase *)
                   UE::Slate::ItemsSource::FSharedObservableArray<UObject_*>::
                   FSharedObservableArray<UObject_*>
                             (this_01,&local_28,
                              (TSharedRef<UE::Slate::Containers::TObservableArray<UObject_*>,1> *)
                              &local_38);
        }
        param_1->Object = pSVar3;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_18.SharedReferenceCount.ReferenceController);
        pTVar5 = (TReferenceControllerBase<1> *)in_R8[1];
      }
      goto LAB_1469e4425;
    }
    this_00 = ::operator_new(0x28);
    if (this_00 != (FObservableArrayPointer<UObject_*> *)0x0) {
      local_38.Object = (STableViewBase *)*in_R8;
      pTVar2 = this->_ListItemsSource_ObservableArrayPointer;
      local_38.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)in_R8[1];
      if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pSVar3 = (STableViewBase *)
               UE::Slate::ItemsSource::FObservableArrayPointer<UObject_*>::
               FObservableArrayPointer<UObject_*>(this_00,&local_38,pTVar2);
      pTVar5 = (TReferenceControllerBase<1> *)in_R8[1];
      param_1->Object = pSVar3;
      goto LAB_1469e4425;
    }
  }
  else {
    pSVar3 = ::operator_new(0x10);
    if (pSVar3 != (STableViewBase *)0x0) {
      pTVar1 = this->_ListItemsSource_ArrayPointer;
      *(undefined ***)pSVar3 = &___7__FArrayPointer_PEAVUObject___ItemsSource_Slate_UE__6B_;
      *(TArray<UObject_*,TSizedDefaultAllocator<32>_> **)&pSVar3->field_0x8 = pTVar1;
      pTVar5 = (TReferenceControllerBase<1> *)in_R8[1];
      param_1->Object = pSVar3;
      goto LAB_1469e4425;
    }
  }
  pTVar5 = (TReferenceControllerBase<1> *)in_R8[1];
  param_1->Object = (STableViewBase *)0x0;
LAB_1469e4425:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return (TUniquePtr<UE::Slate::ItemsSource::IItemsSource<UObject_*>,TDefaultDelete<UE::Slate::ItemsSource::IItemsSource<UObject_*>_>_>
          )(IItemsSource<UObject_*> *)param_1;
}

// MakeTreeItemsSource @ 1469e4450

TUniquePtr<UE::Slate::ItemsSource::IItemsSource<UObject_*>,TDefaultDelete<UE::Slate::ItemsSource::IItemsSource<UObject_*>_>_>
 __thiscall
STreeView<UObject_*>::FArguments::MakeTreeItemsSource
          (FArguments *this,TSharedRef<STableViewBase,1> *param_1)

{
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *pTVar1;
  TObservableArray<UObject_*> *pTVar2;
  STableViewBase *pSVar3;
  FObservableArrayPointer<UObject_*> *this_00;
  TSharedRef<UE::Slate::Containers::TObservableArray<UObject_*>,1> *pTVar4;
  FSharedObservableArray<UObject_*> *this_01;
  TReferenceControllerBase<1> *pTVar5;
  undefined8 *in_R8;
  TSharedRef<STableViewBase,1> local_38;
  TSharedRef<STableViewBase,1> local_28;
  TSharedRef<UE::Slate::Containers::TObservableArray<UObject_*>,1> local_18;
  
  if (this->_TreeItemsSource_ArrayPointer == (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)0x0) {
    if (this->_TreeItemsSource_ObservableArrayPointer == (TObservableArray<UObject_*> *)0x0) {
      if ((this->_TreeItemsSource_SharedObservableArray).Object ==
          (TObservableArray<UObject_*> *)0x0) {
        pTVar5 = (TReferenceControllerBase<1> *)in_R8[1];
        param_1->Object = (STableViewBase *)0x0;
      }
      else {
        pTVar4 = TSharedPtr<UE::Slate::Containers::TObservableArray<UObject_*>,1>::ToSharedRef
                           (&this->_TreeItemsSource_SharedObservableArray,&local_18);
        this_01 = ::operator_new(0x30);
        if (this_01 == (FSharedObservableArray<UObject_*> *)0x0) {
          pSVar3 = (STableViewBase *)0x0;
        }
        else {
          local_38.Object = (STableViewBase *)pTVar4->Object;
          local_38.SharedReferenceCount.ReferenceController =
               (pTVar4->SharedReferenceCount).ReferenceController;
          if (local_38.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          local_28.Object = (STableViewBase *)*in_R8;
          local_28.SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)in_R8[1];
          if (local_28.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          pSVar3 = (STableViewBase *)
                   UE::Slate::ItemsSource::FSharedObservableArray<UObject_*>::
                   FSharedObservableArray<UObject_*>
                             (this_01,&local_28,
                              (TSharedRef<UE::Slate::Containers::TObservableArray<UObject_*>,1> *)
                              &local_38);
        }
        param_1->Object = pSVar3;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_18.SharedReferenceCount.ReferenceController);
        pTVar5 = (TReferenceControllerBase<1> *)in_R8[1];
      }
      goto LAB_1469e45a5;
    }
    this_00 = ::operator_new(0x28);
    if (this_00 != (FObservableArrayPointer<UObject_*> *)0x0) {
      local_38.Object = (STableViewBase *)*in_R8;
      pTVar2 = this->_TreeItemsSource_ObservableArrayPointer;
      local_38.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)in_R8[1];
      if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pSVar3 = (STableViewBase *)
               UE::Slate::ItemsSource::FObservableArrayPointer<UObject_*>::
               FObservableArrayPointer<UObject_*>(this_00,&local_38,pTVar2);
      pTVar5 = (TReferenceControllerBase<1> *)in_R8[1];
      param_1->Object = pSVar3;
      goto LAB_1469e45a5;
    }
  }
  else {
    pSVar3 = ::operator_new(0x10);
    if (pSVar3 != (STableViewBase *)0x0) {
      pTVar1 = this->_TreeItemsSource_ArrayPointer;
      *(undefined ***)pSVar3 = &___7__FArrayPointer_PEAVUObject___ItemsSource_Slate_UE__6B_;
      *(TArray<UObject_*,TSizedDefaultAllocator<32>_> **)&pSVar3->field_0x8 = pTVar1;
      pTVar5 = (TReferenceControllerBase<1> *)in_R8[1];
      param_1->Object = pSVar3;
      goto LAB_1469e45a5;
    }
  }
  pTVar5 = (TReferenceControllerBase<1> *)in_R8[1];
  param_1->Object = (STableViewBase *)0x0;
LAB_1469e45a5:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return (TUniquePtr<UE::Slate::ItemsSource::IItemsSource<UObject_*>,TDefaultDelete<UE::Slate::ItemsSource::IItemsSource<UObject_*>_>_>
          )(IItemsSource<UObject_*> *)param_1;
}

// TextMargin @ 146a293b0

FArguments * __thiscall
SToolTip::FArguments::TextMargin(FArguments *this,TAttribute<FMargin> *param_1)

{
  TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = (param_1->Value).Top;
  fVar3 = (param_1->Value).Right;
  fVar4 = (param_1->Value).Bottom;
  this_00 = &param_1->Getter;
  (this->_TextMargin).Value.Left = (param_1->Value).Left;
  (this->_TextMargin).Value.Top = fVar2;
  (this->_TextMargin).Value.Right = fVar3;
  (this->_TextMargin).Value.Bottom = fVar4;
  (this->_TextMargin).bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_TextMargin).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return this;
}

// FArguments @ 146a556a0

FArguments * __thiscall SWindowTitleBarArea::FArguments::FArguments(FArguments *this)

{
  atomic<int> *paVar1;
  FSharedReferencer<1> FVar2;
  
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  (this->_Padding).bIsSet = true;
  this->_HAlign = HAlign_Fill;
  this->_VAlign = VAlign_Fill;
  (this->_Padding).Value.Left = 0.0;
  (this->_Padding).Value.Top = 0.0;
  (this->_Padding).Value.Right = 0.0;
  (this->_Padding).Value.Bottom = 0.0;
  *(undefined8 *)&(this->_Padding).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_Padding).Getter = 0;
  *(undefined8 *)&(this->_Padding).Getter.field_0x8 = 0;
  (this->_Content).Widget.Object = SNullWidget::NullWidget.Object;
  FVar2 = SNullWidget::NullWidget.SharedReferenceCount;
  (this->_Content).Widget.SharedReferenceCount.ReferenceController =
       SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
  if (FVar2.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar2.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  *(undefined8 *)&this->_RequestToggleFullscreen = 0;
  *(undefined8 *)&(this->_RequestToggleFullscreen).field_0x8 = 0;
  *(undefined4 *)&(this->_RequestToggleFullscreen).field_0x10 = 0;
  return this;
}

// FArguments @ 146a55730

FArguments * __thiscall SWorldWidgetScreenLayer::FArguments::FArguments(FArguments *this)

{
  FDestructionSentinel local_48;
  uchar local_30;
  undefined1 local_2f;
  undefined1 local_28 [8];
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  local_30 = (uchar)EVisibility::SelfHitTestInvisible.Value.Value;
  local_18 = 0;
  local_2f = 1;
  local_28 = (undefined1  [8])0x0;
  FStack_20.Data = (FScriptContainerElement *)0x0;
  this->field_0x88 = EVisibility::SelfHitTestInvisible.Value.Value;
  this->field_0x89 = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->field_0x90,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_28);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_28,
             (FWriteAccessScope *)&local_48);
  if (((int)local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
    local_18 = local_18 & 0xffffffff00000000;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  if (FStack_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_20.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_28);
  return this;
}

