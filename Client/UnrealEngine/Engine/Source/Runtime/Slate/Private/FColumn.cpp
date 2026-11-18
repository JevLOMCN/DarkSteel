// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 4

// FColumn @ 142a177b0

/* WARNING: Enum "Type": Some values do not have unique names */

FColumn * __thiscall SHeaderRow::FColumn::FColumn(FColumn *this,FArguments *param_1)

{
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  TAttribute<float> *this_01;
  TDelegate<EColumnSortMode::Type___cdecl(void),FDefaultDelegateUserPolicy> *pTVar1;
  TDelegate<EColumnSortPriority::Type___cdecl(void),FDefaultDelegateUserPolicy> *this_02;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *pTVar2;
  bool bVar3;
  float fVar4;
  EVerticalAlignment EVar5;
  ITextData *pIVar6;
  TReferenceControllerBase<1> *pTVar7;
  float fVar8;
  float fVar9;
  float *pfVar10;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  FDestructionSentinel local_98;
  FDestructionSentinel local_80;
  float local_68;
  undefined1 local_64;
  undefined1 local_60 [8];
  ForAnyElementType FStack_58;
  ulonglong local_50;
  float local_48;
  undefined1 local_44;
  undefined1 local_40 [8];
  ForAnyElementType FStack_38;
  ulonglong local_30;
  
  this->ColumnId = param_1->_ColumnId;
  (this->DefaultText).Value.TextData.Reference = (ITextData *)0x0;
  pIVar6 = (param_1->_DefaultLabel).Value.TextData.Reference;
  (this->DefaultText).Value.TextData.Reference = pIVar6;
  if (pIVar6 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar6 + 8))(pIVar6,local_res8);
  }
  (this->DefaultText).Value.Flags = (param_1->_DefaultLabel).Value.Flags;
  (this->DefaultText).bIsSet = (param_1->_DefaultLabel).bIsSet;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>
            (&(this->DefaultText).Getter,&(param_1->_DefaultLabel).Getter);
  (this->DefaultTooltip).Value.TextData.Reference = (ITextData *)0x0;
  pIVar6 = (param_1->_DefaultTooltip).Value.TextData.Reference;
  (this->DefaultTooltip).Value.TextData.Reference = pIVar6;
  if (pIVar6 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar6 + 8))(pIVar6,local_res10);
  }
  (this->DefaultTooltip).Value.Flags = (param_1->_DefaultTooltip).Value.Flags;
  (this->DefaultTooltip).bIsSet = (param_1->_DefaultTooltip).bIsSet;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>
            (&(this->DefaultTooltip).Getter,&(param_1->_DefaultTooltip).Getter);
  (this->ToolTip).Value.Object = (param_1->_ToolTip).Value.Object;
  pTVar7 = (param_1->_ToolTip).Value.SharedReferenceCount.ReferenceController;
  (this->ToolTip).Value.SharedReferenceCount.ReferenceController = pTVar7;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->ToolTip).bIsSet = (param_1->_ToolTip).bIsSet;
  TDelegate<TSharedPtr<IToolTip,1>___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<TSharedPtr<IToolTip,1>___cdecl(void),FDefaultDelegateUserPolicy>
            (&(this->ToolTip).Getter,&(param_1->_ToolTip).Getter);
  this_01 = &this->Width;
  this_01->Value = 1.0;
  (this->Width).bIsSet = true;
  *(undefined4 *)&(this->Width).Getter.field_0x14 = 0;
  *(undefined8 *)&(this->Width).Getter = 0;
  *(undefined8 *)&(this->Width).Getter.field_0x8 = 0;
  *(undefined4 *)&(this->Width).Getter.field_0x10 = 0;
  this->DefaultWidth = 1.0;
  *(undefined8 *)&this->OnWidthChanged = 0;
  *(undefined8 *)&(this->OnWidthChanged).field_0x8 = 0;
  *(undefined4 *)&(this->OnWidthChanged).field_0x10 = 0;
  TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->OnWidthChanged,&param_1->_OnWidthChanged);
  fVar4 = param_1->_MinSize;
  this->SizeRule = Fill;
  this->MinSize = fVar4;
  (this->HeaderContent).Widget.Object = (param_1->_HeaderContent).Widget.Object;
  pTVar7 = (param_1->_HeaderContent).Widget.SharedReferenceCount.ReferenceController;
  (this->HeaderContent).Widget.SharedReferenceCount.ReferenceController = pTVar7;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->HeaderMenuContent).Widget.Object = (param_1->_MenuContent).Widget.Object;
  pTVar7 = (param_1->_MenuContent).Widget.SharedReferenceCount.ReferenceController;
  (this->HeaderMenuContent).Widget.SharedReferenceCount.ReferenceController = pTVar7;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  *(undefined8 *)&this->OnGetMenuContent = 0;
  *(undefined8 *)&(this->OnGetMenuContent).field_0x8 = 0;
  *(undefined4 *)&(this->OnGetMenuContent).field_0x10 = 0;
  TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&this->OnGetMenuContent,&param_1->_OnGetMenuContent);
  *(undefined8 *)&this->OnColumnSplitterDoubleClick = 0;
  *(undefined8 *)&(this->OnColumnSplitterDoubleClick).field_0x8 = 0;
  *(undefined4 *)&(this->OnColumnSplitterDoubleClick).field_0x10 = 0;
  TDelegate<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&this->OnColumnSplitterDoubleClick,&param_1->_OnColumnSplitterDoubleClick);
  this->HeaderHAlignment = param_1->_HAlignHeader;
  EVar5 = param_1->_VAlignHeader;
  (this->HeaderContentPadding).bIsSet = false;
  this->HeaderVAlignment = EVar5;
  bVar3 = (param_1->_HeaderContentPadding).bIsSet;
  (this->HeaderContentPadding).bIsSet = bVar3;
  if (bVar3 != false) {
    fVar4 = (param_1->_HeaderContentPadding).TypedValue.Top;
    fVar8 = (param_1->_HeaderContentPadding).TypedValue.Right;
    fVar9 = (param_1->_HeaderContentPadding).TypedValue.Bottom;
    (this->HeaderContentPadding).TypedValue.Left = (param_1->_HeaderContentPadding).TypedValue.Left;
    (this->HeaderContentPadding).TypedValue.Top = fVar4;
    (this->HeaderContentPadding).TypedValue.Right = fVar8;
    (this->HeaderContentPadding).TypedValue.Bottom = fVar9;
  }
  pTVar1 = &(this->InitialSortMode).Getter;
  this->HeaderComboVisibility = param_1->_HeaderComboVisibility;
  this->CellHAlignment = param_1->_HAlignCell;
  this->CellVAlignment = param_1->_VAlignCell;
  this->OverflowPolicy = param_1->_OverflowPolicy;
  (this->InitialSortMode).Value = (param_1->_InitialSortMode).Value;
  (this->InitialSortMode).bIsSet = (param_1->_InitialSortMode).bIsSet;
  *(undefined8 *)pTVar1 = 0;
  *(undefined8 *)&(this->InitialSortMode).Getter.field_0x8 = 0;
  *(undefined4 *)&(this->InitialSortMode).Getter.field_0x10 = 0;
  TDelegate<enum_EColumnSortMode::Type___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(pTVar1,&(param_1->_InitialSortMode).Getter);
  pTVar1 = &(this->SortMode).Getter;
  (this->SortMode).Value = (param_1->_SortMode).Value;
  (this->SortMode).bIsSet = (param_1->_SortMode).bIsSet;
  *(undefined8 *)pTVar1 = 0;
  *(undefined8 *)&(this->SortMode).Getter.field_0x8 = 0;
  *(undefined4 *)&(this->SortMode).Getter.field_0x10 = 0;
  TDelegate<enum_EColumnSortMode::Type___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(pTVar1,&(param_1->_SortMode).Getter);
  this_02 = &(this->SortPriority).Getter;
  (this->SortPriority).Value = (param_1->_SortPriority).Value;
  (this->SortPriority).bIsSet = (param_1->_SortPriority).bIsSet;
  *(undefined8 *)this_02 = 0;
  *(undefined8 *)&(this->SortPriority).Getter.field_0x8 = 0;
  *(undefined4 *)&(this->SortPriority).Getter.field_0x10 = 0;
  TDelegate<enum_EColumnSortPriority::Type___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(this_02,&(param_1->_SortPriority).Getter);
  pTVar2 = &(this->IsSorting).Getter;
  (this->IsSorting).Value = (param_1->_IsSorting).Value;
  (this->IsSorting).bIsSet = (param_1->_IsSorting).bIsSet;
  *(undefined8 *)pTVar2 = 0;
  *(undefined8 *)&(this->IsSorting).Getter.field_0x8 = 0;
  *(undefined4 *)&(this->IsSorting).Getter.field_0x10 = 0;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (pTVar2,&(param_1->_IsSorting).Getter);
  pTVar2 = &(this->CanManuallySort).Getter;
  (this->CanManuallySort).Value = (param_1->_CanManuallySort).Value;
  (this->CanManuallySort).bIsSet = (param_1->_CanManuallySort).bIsSet;
  *(undefined8 *)pTVar2 = 0;
  *(undefined8 *)&(this->CanManuallySort).Getter.field_0x8 = 0;
  *(undefined4 *)&(this->CanManuallySort).Getter.field_0x10 = 0;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (pTVar2,&(param_1->_CanManuallySort).Getter);
  *(undefined8 *)&this->OnSortModeChanged = 0;
  *(undefined8 *)&(this->OnSortModeChanged).field_0x8 = 0;
  *(undefined4 *)&(this->OnSortModeChanged).field_0x10 = 0;
  TDelegate<void___cdecl(enum_EColumnSortPriority::Type,FName_const_&,enum_EColumnSortMode::Type),FDefaultDelegateUserPolicy>
  ::CopyFrom<FDefaultDelegateUserPolicy>(&this->OnSortModeChanged,&param_1->_OnSort);
  pTVar2 = &(this->ShouldGenerateWidget).Getter;
  (this->ShouldGenerateWidget).Value = (param_1->_ShouldGenerateWidget).Value;
  (this->ShouldGenerateWidget).bIsSet = (param_1->_ShouldGenerateWidget).bIsSet;
  *(undefined8 *)pTVar2 = 0;
  *(undefined8 *)&(this->ShouldGenerateWidget).Getter.field_0x8 = 0;
  *(undefined4 *)&(this->ShouldGenerateWidget).Getter.field_0x10 = 0;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (pTVar2,&(param_1->_ShouldGenerateWidget).Getter);
  pTVar2 = &(this->ShouldGenerateEmptyWidgetForSpacing).Getter;
  (this->ShouldGenerateEmptyWidgetForSpacing).Value =
       (param_1->_ShouldGenerateEmptyWidgetForSpacing).Value;
  (this->ShouldGenerateEmptyWidgetForSpacing).bIsSet =
       (param_1->_ShouldGenerateEmptyWidgetForSpacing).bIsSet;
  *(undefined8 *)pTVar2 = 0;
  *(undefined8 *)&(this->ShouldGenerateEmptyWidgetForSpacing).Getter.field_0x8 = 0;
  *(undefined4 *)&(this->ShouldGenerateEmptyWidgetForSpacing).Getter.field_0x10 = 0;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (pTVar2,&(param_1->_ShouldGenerateEmptyWidgetForSpacing).Getter);
  this->bIsVisible = true;
  this_00 = &(this->Width).Getter;
  if ((param_1->_FixedWidth).bIsSet == false) {
    if ((param_1->_ManualWidth).bIsSet == false) {
      if ((param_1->_FillSized).bIsSet == false) {
        this_01->Value = (param_1->_FillWidth).Value;
        (this->Width).bIsSet = (param_1->_FillWidth).bIsSet;
        TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::
        CopyFrom<FDefaultDelegateUserPolicy>(this_00,&(param_1->_FillWidth).Getter);
        this->SizeRule = Fill;
      }
      else {
        local_48 = (param_1->_FillSized).TypedValue;
        local_30 = 0;
        this_01->Value = local_48;
        local_44 = 1;
        local_40 = (undefined1  [8])0x0;
        FStack_38.Data = (FScriptContainerElement *)0x0;
        (this->Width).bIsSet = true;
        TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00,
                   (TDelegateBase<FNotThreadSafeDelegateMode> *)local_40);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_40,
                   (FWriteAccessScope *)&local_80);
        if (((int)local_30 != 0) && (FStack_38.Data != (FScriptContainerElement *)0x0)) {
          (*(code *)**(undefined8 **)FStack_38.Data)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_38,0,0,0x10);
          local_30 = local_30 & 0xffffffff00000000;
        }
        if (local_80.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
        }
        if (FStack_38.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_38.Data);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_40);
        this->SizeRule = FillSized;
      }
    }
    else {
      this_01->Value = (param_1->_ManualWidth).Value;
      (this->Width).bIsSet = (param_1->_ManualWidth).bIsSet;
      TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::
      CopyFrom<FDefaultDelegateUserPolicy>(this_00,&(param_1->_ManualWidth).Getter);
      this->SizeRule = Manual;
    }
  }
  else {
    local_68 = (param_1->_FixedWidth).TypedValue;
    local_50 = 0;
    this_01->Value = local_68;
    local_64 = 1;
    local_60 = (undefined1  [8])0x0;
    FStack_58.Data = (FScriptContainerElement *)0x0;
    (this->Width).bIsSet = true;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_60);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_60,
               (FWriteAccessScope *)&local_98);
    if (((int)local_50 != 0) && (FStack_58.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_58.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_58,0,0,0x10);
      local_50 = local_50 & 0xffffffff00000000;
    }
    if (local_98.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
    }
    if (FStack_58.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_58.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_60);
    this->SizeRule = Fixed;
  }
  pfVar10 = TAttribute<float>::Get(this_01);
  this->DefaultWidth = *pfVar10;
  return this;
}

// ~FColumn @ 142a189e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SHeaderRow::FColumn::~FColumn(FColumn *this)

{
  void *pvVar1;
  ITextData *pIVar2;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->ShouldGenerateEmptyWidgetForSpacing).Getter);
  pvVar1 = *(void **)&(this->ShouldGenerateEmptyWidgetForSpacing).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ShouldGenerateEmptyWidgetForSpacing).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ShouldGenerateWidget).Getter);
  pvVar1 = *(void **)&(this->ShouldGenerateWidget).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ShouldGenerateWidget).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnSortModeChanged);
  pvVar1 = *(void **)&(this->OnSortModeChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSortModeChanged);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->CanManuallySort).Getter);
  pvVar1 = *(void **)&(this->CanManuallySort).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->CanManuallySort).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->IsSorting).Getter);
  pvVar1 = *(void **)&(this->IsSorting).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->IsSorting).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->SortPriority).Getter);
  pvVar1 = *(void **)&(this->SortPriority).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->SortPriority).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->SortMode).Getter);
  pvVar1 = *(void **)&(this->SortMode).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->SortMode).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->InitialSortMode).Getter);
  pvVar1 = *(void **)&(this->InitialSortMode).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->InitialSortMode).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnColumnSplitterDoubleClick);
  pvVar1 = *(void **)&(this->OnColumnSplitterDoubleClick).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnColumnSplitterDoubleClick);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnGetMenuContent);
  pvVar1 = *(void **)&(this->OnGetMenuContent).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnGetMenuContent);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->HeaderMenuContent).Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->HeaderContent).Widget.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnWidthChanged);
  pvVar1 = *(void **)&(this->OnWidthChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnWidthChanged);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->Width).Getter);
  pvVar1 = *(void **)&(this->Width).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->Width).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ToolTip).Getter);
  pvVar1 = *(void **)&(this->ToolTip).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ToolTip).Getter);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ToolTip).Value.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->DefaultTooltip).Getter);
  pvVar1 = *(void **)&(this->DefaultTooltip).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->DefaultTooltip).Getter);
  pIVar2 = (this->DefaultTooltip).Value.TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->DefaultText).Getter);
  pvVar1 = *(void **)&(this->DefaultText).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->DefaultText).Getter);
  pIVar2 = (this->DefaultText).Value.TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  return;
}

// GetWidth @ 142a2bb00

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall SHeaderRow::FColumn::GetWidth(FColumn *this)

{
  float *pfVar1;
  
  pfVar1 = TAttribute<float>::Get(&this->Width);
  return *pfVar1;
}

// SetWidth @ 142a369e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SHeaderRow::FColumn::SetWidth(FColumn *this,float param_1)

{
  char cVar1;
  longlong *plVar2;
  FDestructionSentinel local_58;
  float local_40;
  undefined1 local_3c;
  undefined1 local_38 [8];
  ForAnyElementType FStack_30;
  ulonglong local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnWidthChanged,
             (FReadAccessScope *)&local_58);
  if (((*(int *)&(this->OnWidthChanged).field_0x10 != 0) &&
      (plVar2 = *(longlong **)&(this->OnWidthChanged).field_0x8, plVar2 != (longlong *)0x0)) &&
     (cVar1 = (**(code **)(*plVar2 + 0x38))(), cVar1 != '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_58);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnWidthChanged,
               (FReadAccessScope *)&local_58);
    if (*(int *)&(this->OnWidthChanged).field_0x10 == 0) {
      plVar2 = (longlong *)0x0;
    }
    else {
      plVar2 = *(longlong **)&(this->OnWidthChanged).field_0x8;
    }
    (**(code **)(*plVar2 + 0x60))(plVar2,param_1);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_58);
    return;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_58);
  (this->Width).Value = param_1;
  local_28 = 0;
  local_3c = 1;
  local_38 = (undefined1  [8])0x0;
  FStack_30.Data = (FScriptContainerElement *)0x0;
  (this->Width).bIsSet = true;
  local_40 = param_1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->Width).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_38);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_38,
             (FWriteAccessScope *)&local_58);
  if (((int)local_28 != 0) && (FStack_30.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_30.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_30,0,0,0x10);
    local_28 = local_28 & 0xffffffff00000000;
  }
  if (local_58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
  }
  if (FStack_30.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_30.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_38);
  return;
}

