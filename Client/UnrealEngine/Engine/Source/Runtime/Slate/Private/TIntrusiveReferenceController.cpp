// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 128

// DestroyObject @ 1426b6580

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FFauxSlateCursor,1>::DestroyObject
          (TIntrusiveReferenceController<FFauxSlateCursor,1> *this)

{
  *(undefined ***)(this->ObjectStorage).Pad = &___7FFauxSlateCursor__6B_;
  return;
}

// DestroyObject @ 1426b65a0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FNavigationConfig,1>::DestroyObject
          (TIntrusiveReferenceController<FNavigationConfig,1> *this)

{
  FNavigationConfig::~FNavigationConfig((FNavigationConfig *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1426b65b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FSlateAsyncTaskNotificationImpl,1>::
DestroyObject(TIntrusiveReferenceController<FSlateAsyncTaskNotificationImpl,1> *this)

{
  FSlateAsyncTaskNotificationImpl::~FSlateAsyncTaskNotificationImpl
            ((FSlateAsyncTaskNotificationImpl *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1426b65c0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FSlateDefaultInputMapping,1>::DestroyObject
          (TIntrusiveReferenceController<FSlateDefaultInputMapping,1> *this)

{
  return;
}

// DestroyObject @ 1426b65d0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SBorder,1>::DestroyObject
          (TIntrusiveReferenceController<SBorder,1> *this)

{
  SBorder::~SBorder((SBorder *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1426b65e0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SBox,1>::DestroyObject
          (TIntrusiveReferenceController<SBox,1> *this)

{
  SBox::~SBox((SBox *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1426b65f0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SImage,1>::DestroyObject
          (TIntrusiveReferenceController<SImage,1> *this)

{
  SImage::~SImage((SImage *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1426b6600

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<MenuStackInternal::SMenuContentWrapper,1>::
DestroyObject(TIntrusiveReferenceController<MenuStackInternal::SMenuContentWrapper,1> *this)

{
  MenuStackInternal::SMenuContentWrapper::~SMenuContentWrapper
            ((SMenuContentWrapper *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1426b6610

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SMenuPanel,1>::DestroyObject
          (TIntrusiveReferenceController<SMenuPanel,1> *this)

{
  SOverlay::~SOverlay((SOverlay *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1426b6620

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SPopup,1>::DestroyObject
          (TIntrusiveReferenceController<SPopup,1> *this)

{
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1426b6630

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SToolTip,1>::DestroyObject
          (TIntrusiveReferenceController<SToolTip,1> *this)

{
  SToolTip::~SToolTip((SToolTip *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1426b6640

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SWindowTitleBar,1>::DestroyObject
          (TIntrusiveReferenceController<SWindowTitleBar,1> *this)

{
  SWindowTitleBar::~SWindowTitleBar((SWindowTitleBar *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14272b800

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Slate::Private::FPanelDrawerData,1>::
DestroyObject(TIntrusiveReferenceController<UE::Slate::Private::FPanelDrawerData,1> *this)

{
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x10));
  return;
}

// DestroyObject @ 14272b810

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TArray<TWeakPtr<FTabSpawnerEntry,1>,TSizedDefaultAllocator<32>_>,1>::
DestroyObject(TIntrusiveReferenceController<TArray<TWeakPtr<FTabSpawnerEntry,1>,TSizedDefaultAllocator<32>_>,1>
              *this)

{
  void *pvVar1;
  
  DestructItems<TWeakPtr<FTabSpawnerEntry,1>,int>
            (*(TWeakPtr<FTabSpawnerEntry,1> **)(this->ObjectStorage).Pad,
             *(int *)((this->ObjectStorage).Pad + 8));
  pvVar1 = *(void **)(this->ObjectStorage).Pad;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
    return;
  }
  return;
}

// DestroyObject @ 14272b850

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FUICommandList,1>::DestroyObject
          (TIntrusiveReferenceController<FUICommandList,1> *this)

{
  FUICommandList::~FUICommandList((FUICommandList *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14272b860

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FWorkspaceItem,1>::DestroyObject
          (TIntrusiveReferenceController<FWorkspaceItem,1> *this)

{
  FWorkspaceItem::~FWorkspaceItem((FWorkspaceItem *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14272b870

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SAppIconWidget,1>::DestroyObject
          (TIntrusiveReferenceController<SAppIconWidget,1> *this)

{
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x2b0));
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14272b8a0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SButton,1>::DestroyObject
          (TIntrusiveReferenceController<SButton,1> *this)

{
  SButton::~SButton((SButton *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14272b8b0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SCheckBox,1>::DestroyObject
          (TIntrusiveReferenceController<SCheckBox,1> *this)

{
  SCheckBox::~SCheckBox((SCheckBox *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14272b8c0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SComplexGradient,1>::DestroyObject
          (TIntrusiveReferenceController<SComplexGradient,1> *this)

{
  SComplexGradient::~SComplexGradient((SComplexGradient *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14272b8d0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SConstraintCanvas,1>::DestroyObject
          (TIntrusiveReferenceController<SConstraintCanvas,1> *this)

{
  SConstraintCanvas::~SConstraintCanvas((SConstraintCanvas *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14272b8e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SDockTab,1>::DestroyObject
          (TIntrusiveReferenceController<SDockTab,1> *this)

{
  SDockTab::~SDockTab((SDockTab *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14272b8f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SDockingArea,1>::DestroyObject
          (TIntrusiveReferenceController<SDockingArea,1> *this)

{
  SDockingArea::~SDockingArea((SDockingArea *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14272b900

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SDockingCross,1>::DestroyObject
          (TIntrusiveReferenceController<SDockingCross,1> *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((this->ObjectStorage).Pad + 0x220);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  SLeafWidget::~SLeafWidget((SLeafWidget *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14272b950

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SDockingSplitter,1>::DestroyObject
          (TIntrusiveReferenceController<SDockingSplitter,1> *this)

{
  SDockingSplitter::~SDockingSplitter((SDockingSplitter *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14272b960

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SDockingTabStack,1>::DestroyObject
          (TIntrusiveReferenceController<SDockingTabStack,1> *this)

{
  SDockingTabStack::~SDockingTabStack((SDockingTabStack *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14272b970

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SDockingTabWell,1>::DestroyObject
          (TIntrusiveReferenceController<SDockingTabWell,1> *this)

{
  SDockingTabWell::~SDockingTabWell((SDockingTabWell *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14272b980

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SDockingTarget,1>::DestroyObject
          (TIntrusiveReferenceController<SDockingTarget,1> *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((this->ObjectStorage).Pad + 0x2f8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  SBorder::~SBorder((SBorder *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14272b9d0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SHorizontalBox,1>::DestroyObject
          (TIntrusiveReferenceController<SHorizontalBox,1> *this)

{
  SBoxPanel::~SBoxPanel((SBoxPanel *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14272b9e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Slate::Private::SPanelDrawerArea,1>::
DestroyObject(TIntrusiveReferenceController<UE::Slate::Private::SPanelDrawerArea,1> *this)

{
  UE::Slate::Private::SPanelDrawerArea::~SPanelDrawerArea((SPanelDrawerArea *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14272b9f0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SSpacer,1>::DestroyObject
          (TIntrusiveReferenceController<SSpacer,1> *this)

{
  SLeafWidget::~SLeafWidget((SLeafWidget *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14272ba00

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SSplitter,1>::DestroyObject
          (TIntrusiveReferenceController<SSplitter,1> *this)

{
  SSplitter::~SSplitter((SSplitter *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14272ba10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<STabDrawer,1>::DestroyObject
          (TIntrusiveReferenceController<STabDrawer,1> *this)

{
  STabDrawer::~STabDrawer((STabDrawer *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14272ba20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<STabDrawerButton,1>::DestroyObject
          (TIntrusiveReferenceController<STabDrawerButton,1> *this)

{
  STabDrawerButton::~STabDrawerButton((STabDrawerButton *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14272ba30

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<STabDrawerTextBlock,1>::DestroyObject
          (TIntrusiveReferenceController<STabDrawerTextBlock,1> *this)

{
  STabDrawerTextBlock::~STabDrawerTextBlock((STabDrawerTextBlock *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14272ba40

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Slate::Private::STabPanelDrawer,1>::
DestroyObject(TIntrusiveReferenceController<UE::Slate::Private::STabPanelDrawer,1> *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  pTVar1 = *(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x360);
  *(undefined ***)((this->ObjectStorage).Pad + 0x2c0) = &___7FSlateBrush__6B_;
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x2b0));
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14272ba90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<STabSidebar,1>::DestroyObject
          (TIntrusiveReferenceController<STabSidebar,1> *this)

{
  STabSidebar::~STabSidebar((STabSidebar *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14272baa0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<STextBlock,1>::DestroyObject
          (TIntrusiveReferenceController<STextBlock,1> *this)

{
  STextBlock::~STextBlock((STextBlock *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14272bab0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SWeakWidget,1>::DestroyObject
          (TIntrusiveReferenceController<SWeakWidget,1> *this)

{
  SWeakWidget::~SWeakWidget((SWeakWidget *)&this->ObjectStorage);
  return;
}

// TIntrusiveReferenceController<FWidgetBlock,1><TSharedRef<SBox,1>_&,FText_const_&,FText,FMenuEntryStyleParams_&> @ 142794750

TIntrusiveReferenceController<FWidgetBlock,1> * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FWidgetBlock,1>::
TIntrusiveReferenceController<FWidgetBlock,1><TSharedRef<SBox,1>_&,FText_const_&,FText,FMenuEntryStyleParams_&>
          (TIntrusiveReferenceController<FWidgetBlock,1> *this,TSharedRef<SBox,1> *param_1,
          FText *param_2,FText *param_3,FMenuEntryStyleParams *param_4)

{
  SBox *local_a8;
  TReferenceControllerBase<1> *local_a0;
  bool local_98;
  undefined1 local_90 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_78;
  ForAnyElementType FStack_70;
  ulonglong local_68;
  undefined1 local_60 [40];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_38;
  ForAnyElementType FStack_30;
  ulonglong local_28;
  
  *(undefined4 *)&this->_padding_ = 1;
  this->_padding_ =
       (longlong)&___7__TIntrusiveReferenceController_VFWidgetBlock___00_SharedPointerInternals__6B_
  ;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 1;
  FSlateIcon::FSlateIcon((FSlateIcon *)local_60);
  local_60[0x20] = false;
  local_28 = 0;
  local_38.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_30.Data = (FScriptContainerElement *)0x0;
  FText::FText((FText *)local_90,param_3);
  local_90[0x10] = true;
  local_a8 = param_1->Object;
  local_a0 = (param_1->SharedReferenceCount).ReferenceController;
  local_68 = 0;
  local_78.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_70.Data = (FScriptContainerElement *)0x0;
  if (local_a0 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_a0->SharedReferenceCount = (atomic<int>)((int)local_a0->SharedReferenceCount + 1);
    UNLOCK();
  }
  FWidgetBlock::FWidgetBlock
            ((FWidgetBlock *)&this->ObjectStorage,(TSharedRef<SWidget,1> *)&local_a8,param_2,
             (TAttribute<FText> *)local_90,param_4,(TAttribute<FSlateIcon> *)local_60);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_78,(FWriteAccessScope *)&local_a8);
  if (((int)local_68 != 0) && (FStack_70.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_70.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_70,0,0,0x10);
    local_68 = local_68 & 0xffffffff00000000;
  }
  if (local_98 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_a0,(FDestructionSentinel *)&local_a8);
  }
  if (FStack_70.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_70.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_78.AccessDetector);
  if ((ITextData *)local_90._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_90._0_8_ + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_38,(FWriteAccessScope *)&local_a8);
  if (((int)local_28 != 0) && (FStack_30.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_30.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_30,0,0,0x10);
    local_28 = local_28 & 0xffffffff00000000;
  }
  if (local_98 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_a0,(FDestructionSentinel *)&local_a8);
  }
  if (FStack_30.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_30.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_38.AccessDetector);
  return this;
}

// TIntrusiveReferenceController<FMenuEntryBlock,1><FName_const_&,FUIAction_const_&,TSharedRef<SWidget,1>_const_&,TAttribute<FText>_const_&,enum_EUserInterfaceActionType_const_&,bool_&> @ 142794920

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

TIntrusiveReferenceController<FMenuEntryBlock,1> * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FMenuEntryBlock,1>::
TIntrusiveReferenceController<FMenuEntryBlock,1><FName_const_&,FUIAction_const_&,TSharedRef<SWidget,1>_const_&,TAttribute<FText>_const_&,enum_EUserInterfaceActionType_const_&,bool_&>
          (TIntrusiveReferenceController<FMenuEntryBlock,1> *this,FName *param_1,FUIAction *param_2,
          TSharedRef<SWidget,1> *param_3,TAttribute<FText> *param_4,
          EUserInterfaceActionType *param_5,bool *param_6)

{
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  bool bVar1;
  EUserInterfaceActionType EVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  SWidget *pSVar5;
  ITextData *pIVar6;
  atomic<int> *paVar7;
  TSharedPtr<FUICommandList_const_,1> local_38;
  
  *(undefined4 *)&this->_padding_ = 1;
  this->_padding_ =
       (longlong)
       &___7__TIntrusiveReferenceController_VFMenuEntryBlock___00_SharedPointerInternals__6B_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 1;
  pTVar4 = (param_3->SharedReferenceCount).ReferenceController;
  bVar1 = *param_6;
  pSVar5 = param_3->Object;
  EVar2 = *param_5;
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    paVar7 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar7 = &pTVar4->SharedReferenceCount;
    LOCK();
    *paVar7 = (atomic<int>)((int)*paVar7 + 1);
    UNLOCK();
  }
  local_38.Object = (FUICommandList *)0x0;
  local_38.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FMultiBlock::FMultiBlock
            ((FMultiBlock *)&this->ObjectStorage,param_2,*param_1,MenuEntry,false,&local_38);
  *(undefined ***)(this->ObjectStorage).Pad = &___7FMenuEntryBlock__6B_;
  FText::FText((FText *)((this->ObjectStorage).Pad + 0x1c8));
  (this->ObjectStorage).Pad[0x1d8] = '\0';
  (this->ObjectStorage).Pad[0x1f0] = '\0';
  (this->ObjectStorage).Pad[0x1f1] = '\0';
  (this->ObjectStorage).Pad[0x1f2] = '\0';
  (this->ObjectStorage).Pad[499] = '\0';
  (this->ObjectStorage).Pad[500] = '\0';
  (this->ObjectStorage).Pad[0x1f5] = '\0';
  (this->ObjectStorage).Pad[0x1f6] = '\0';
  (this->ObjectStorage).Pad[0x1f7] = '\0';
  (this->ObjectStorage).Pad[0x1e0] = '\0';
  (this->ObjectStorage).Pad[0x1e1] = '\0';
  (this->ObjectStorage).Pad[0x1e2] = '\0';
  (this->ObjectStorage).Pad[0x1e3] = '\0';
  (this->ObjectStorage).Pad[0x1e4] = '\0';
  (this->ObjectStorage).Pad[0x1e5] = '\0';
  (this->ObjectStorage).Pad[0x1e6] = '\0';
  (this->ObjectStorage).Pad[0x1e7] = '\0';
  (this->ObjectStorage).Pad[0x1e8] = '\0';
  (this->ObjectStorage).Pad[0x1e9] = '\0';
  (this->ObjectStorage).Pad[0x1ea] = '\0';
  (this->ObjectStorage).Pad[0x1eb] = '\0';
  (this->ObjectStorage).Pad[0x1ec] = '\0';
  (this->ObjectStorage).Pad[0x1ed] = '\0';
  (this->ObjectStorage).Pad[0x1ee] = '\0';
  (this->ObjectStorage).Pad[0x1ef] = '\0';
  (this->ObjectStorage).Pad[0x1f8] = '\0';
  (this->ObjectStorage).Pad[0x1f9] = '\0';
  (this->ObjectStorage).Pad[0x1fa] = '\0';
  (this->ObjectStorage).Pad[0x1fb] = '\0';
  (this->ObjectStorage).Pad[0x1fc] = '\0';
  (this->ObjectStorage).Pad[0x1fd] = '\0';
  (this->ObjectStorage).Pad[0x1fe] = '\0';
  (this->ObjectStorage).Pad[0x1ff] = '\0';
  pIVar6 = (param_4->Value).TextData.Reference;
  *(ITextData **)((this->ObjectStorage).Pad + 0x1f8) = pIVar6;
  if (pIVar6 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar6 + 8))();
  }
  this_00 = (TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)
            ((this->ObjectStorage).Pad + 0x210);
  *(uint *)((this->ObjectStorage).Pad + 0x200) = (param_4->Value).Flags;
  bVar3 = param_4->bIsSet;
  *(undefined8 *)this_00 = 0;
  (this->ObjectStorage).Pad[0x218] = '\0';
  (this->ObjectStorage).Pad[0x219] = '\0';
  (this->ObjectStorage).Pad[0x21a] = '\0';
  (this->ObjectStorage).Pad[0x21b] = '\0';
  (this->ObjectStorage).Pad[0x21c] = '\0';
  (this->ObjectStorage).Pad[0x21d] = '\0';
  (this->ObjectStorage).Pad[0x21e] = '\0';
  (this->ObjectStorage).Pad[0x21f] = '\0';
  (this->ObjectStorage).Pad[0x220] = '\0';
  (this->ObjectStorage).Pad[0x221] = '\0';
  (this->ObjectStorage).Pad[0x222] = '\0';
  (this->ObjectStorage).Pad[0x223] = '\0';
  (this->ObjectStorage).Pad[0x208] = bVar3;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (this_00,&param_4->Getter);
  FText::FText((FText *)((this->ObjectStorage).Pad + 0x228));
  (this->ObjectStorage).Pad[0x238] = '\0';
  (this->ObjectStorage).Pad[0x250] = '\0';
  (this->ObjectStorage).Pad[0x251] = '\0';
  (this->ObjectStorage).Pad[0x252] = '\0';
  (this->ObjectStorage).Pad[0x253] = '\0';
  (this->ObjectStorage).Pad[0x254] = '\0';
  (this->ObjectStorage).Pad[0x255] = '\0';
  (this->ObjectStorage).Pad[0x256] = '\0';
  (this->ObjectStorage).Pad[599] = '\0';
  (this->ObjectStorage).Pad[0x240] = '\0';
  (this->ObjectStorage).Pad[0x241] = '\0';
  (this->ObjectStorage).Pad[0x242] = '\0';
  (this->ObjectStorage).Pad[0x243] = '\0';
  (this->ObjectStorage).Pad[0x244] = '\0';
  (this->ObjectStorage).Pad[0x245] = '\0';
  (this->ObjectStorage).Pad[0x246] = '\0';
  (this->ObjectStorage).Pad[0x247] = '\0';
  (this->ObjectStorage).Pad[0x248] = '\0';
  (this->ObjectStorage).Pad[0x249] = '\0';
  (this->ObjectStorage).Pad[0x24a] = '\0';
  (this->ObjectStorage).Pad[0x24b] = '\0';
  (this->ObjectStorage).Pad[0x24c] = '\0';
  (this->ObjectStorage).Pad[0x24d] = '\0';
  (this->ObjectStorage).Pad[0x24e] = '\0';
  (this->ObjectStorage).Pad[0x24f] = '\0';
  FSlateIcon::FSlateIcon((FSlateIcon *)((this->ObjectStorage).Pad + 600));
  *(SWidget **)((this->ObjectStorage).Pad + 0x2a8) = pSVar5;
  (this->ObjectStorage).Pad[0x278] = '\0';
  (this->ObjectStorage).Pad[0x279] = '\0';
  (this->ObjectStorage).Pad[0x27a] = '\0';
  (this->ObjectStorage).Pad[0x27b] = '\0';
  (this->ObjectStorage).Pad[0x27c] = '\0';
  (this->ObjectStorage).Pad[0x27d] = '\0';
  (this->ObjectStorage).Pad[0x27e] = '\0';
  (this->ObjectStorage).Pad[0x27f] = '\0';
  (this->ObjectStorage).Pad[0x280] = '\0';
  (this->ObjectStorage).Pad[0x281] = '\0';
  (this->ObjectStorage).Pad[0x282] = '\0';
  (this->ObjectStorage).Pad[0x283] = '\0';
  (this->ObjectStorage).Pad[0x284] = '\0';
  (this->ObjectStorage).Pad[0x285] = '\0';
  (this->ObjectStorage).Pad[0x286] = '\0';
  (this->ObjectStorage).Pad[0x287] = '\0';
  (this->ObjectStorage).Pad[0x288] = '\0';
  (this->ObjectStorage).Pad[0x289] = '\0';
  (this->ObjectStorage).Pad[0x28a] = '\0';
  (this->ObjectStorage).Pad[0x28b] = '\0';
  (this->ObjectStorage).Pad[0x290] = '\0';
  (this->ObjectStorage).Pad[0x291] = '\0';
  (this->ObjectStorage).Pad[0x292] = '\0';
  (this->ObjectStorage).Pad[0x293] = '\0';
  (this->ObjectStorage).Pad[0x294] = '\0';
  (this->ObjectStorage).Pad[0x295] = '\0';
  (this->ObjectStorage).Pad[0x296] = '\0';
  (this->ObjectStorage).Pad[0x297] = '\0';
  (this->ObjectStorage).Pad[0x298] = '\0';
  (this->ObjectStorage).Pad[0x299] = '\0';
  (this->ObjectStorage).Pad[0x29a] = '\0';
  (this->ObjectStorage).Pad[0x29b] = '\0';
  (this->ObjectStorage).Pad[0x29c] = '\0';
  (this->ObjectStorage).Pad[0x29d] = '\0';
  (this->ObjectStorage).Pad[0x29e] = '\0';
  (this->ObjectStorage).Pad[0x29f] = '\0';
  (this->ObjectStorage).Pad[0x2a0] = '\0';
  (this->ObjectStorage).Pad[0x2a1] = '\0';
  (this->ObjectStorage).Pad[0x2a2] = '\0';
  (this->ObjectStorage).Pad[0x2a3] = '\0';
  *(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x2b0) = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar7 = (atomic<int>)((int)*paVar7 + 1);
    UNLOCK();
  }
  (this->ObjectStorage).Pad[0x2b8] = '\0';
  (this->ObjectStorage).Pad[0x2b9] = '\x01';
  (this->ObjectStorage).Pad[0x2ba] = '\0';
  (this->ObjectStorage).Pad[699] = EVar2;
  (this->ObjectStorage).Pad[700] = bVar1;
  (this->ObjectStorage).Pad[0x2c0] = '\0';
  (this->ObjectStorage).Pad[0x2c1] = '\0';
  (this->ObjectStorage).Pad[0x2c2] = '\0';
  (this->ObjectStorage).Pad[0x2c3] = '\0';
  (this->ObjectStorage).Pad[0x2c4] = '\0';
  (this->ObjectStorage).Pad[0x2c5] = '\0';
  (this->ObjectStorage).Pad[0x2c6] = '\0';
  (this->ObjectStorage).Pad[0x2c7] = '\0';
  (this->ObjectStorage).Pad[0x2c8] = '\0';
  (this->ObjectStorage).Pad[0x2c9] = '\0';
  (this->ObjectStorage).Pad[0x2ca] = '\0';
  (this->ObjectStorage).Pad[0x2cb] = '\0';
  (this->ObjectStorage).Pad[0x2cc] = '\0';
  (this->ObjectStorage).Pad[0x2cd] = '\0';
  (this->ObjectStorage).Pad[0x2ce] = '\0';
  (this->ObjectStorage).Pad[0x2cf] = '\0';
  (this->ObjectStorage).Pad[0x2d0] = '\x01';
  (this->ObjectStorage).Pad[0x2d4] = '\0';
  (this->ObjectStorage).Pad[0x2d5] = '\0';
  (this->ObjectStorage).Pad[0x2d6] = '\0';
  (this->ObjectStorage).Pad[0x2d7] = '\0';
  (this->ObjectStorage).Pad[0x2d8] = '\0';
  (this->ObjectStorage).Pad[0x2d9] = '\0';
  (this->ObjectStorage).Pad[0x2da] = '\0';
  (this->ObjectStorage).Pad[0x2db] = '\0';
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return this;
}

// TIntrusiveReferenceController<FMenuEntryBlock,1><enum_EName_const_&,FUIAction_const_&,TSharedRef<SWidget,1>_const_&,TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>_const_&,TSharedPtr<FExtender,1>_&,bool_const_&,TSharedPtr<FUICommandList_const_,1>_&,bool_&,bool_const_&> @ 142794b30

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

TIntrusiveReferenceController<FMenuEntryBlock,1> * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FMenuEntryBlock,1>::
TIntrusiveReferenceController<FMenuEntryBlock,1><enum_EName_const_&,FUIAction_const_&,TSharedRef<SWidget,1>_const_&,TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>_const_&,TSharedPtr<FExtender,1>_&,bool_const_&,TSharedPtr<FUICommandList_const_,1>_&,bool_&,bool_const_&>
          (TIntrusiveReferenceController<FMenuEntryBlock,1> *this,EName *param_1,FUIAction *param_2,
          TSharedRef<SWidget,1> *param_3,
          TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy> *param_4,
          TSharedPtr<FExtender,1> *param_5,bool *param_6,
          TSharedPtr<FUICommandList_const_,1> *param_7,bool *param_8,bool *param_9)

{
  TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy> *this_00;
  bool bVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  FExtender *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  SWidget *pSVar7;
  FNameEntryId FVar8;
  uint uVar9;
  undefined4 extraout_var;
  atomic<int> *paVar10;
  FName FVar11;
  TSharedPtr<FUICommandList_const_,1> local_38;
  
  *(undefined4 *)&this->_padding_ = 1;
  this->_padding_ =
       (longlong)
       &___7__TIntrusiveReferenceController_VFMenuEntryBlock___00_SharedPointerInternals__6B_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 1;
  bVar1 = *param_9;
  param_9._0_1_ = *param_8;
  pTVar3 = (param_7->SharedReferenceCount).ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar2 = *param_6;
  pTVar4 = (param_5->SharedReferenceCount).ReferenceController;
  pFVar5 = param_5->Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar6 = (param_3->SharedReferenceCount).ReferenceController;
  pSVar7 = param_3->Object;
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    paVar10 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar10 = &pTVar6->SharedReferenceCount;
    LOCK();
    *paVar10 = (atomic<int>)((int)*paVar10 + 1);
    UNLOCK();
  }
  if (*param_1 == None) {
    uVar9 = 0;
  }
  else {
    FVar8 = FNameEntryId::FromValidEName((EName)&param_8);
    uVar9 = *(uint *)CONCAT44(extraout_var,FVar8.Value);
  }
  FVar11.Number = 0;
  FVar11.ComparisonIndex.Value = uVar9;
  local_38.Object = (FUICommandList *)0x0;
  local_38.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FMultiBlock::FMultiBlock
            ((FMultiBlock *)&this->ObjectStorage,param_2,FVar11,MenuEntry,false,&local_38);
  *(undefined ***)(this->ObjectStorage).Pad = &___7FMenuEntryBlock__6B_;
  FText::FText((FText *)((this->ObjectStorage).Pad + 0x1c8));
  (this->ObjectStorage).Pad[0x1d8] = '\0';
  (this->ObjectStorage).Pad[0x1f0] = '\0';
  (this->ObjectStorage).Pad[0x1f1] = '\0';
  (this->ObjectStorage).Pad[0x1f2] = '\0';
  (this->ObjectStorage).Pad[499] = '\0';
  (this->ObjectStorage).Pad[500] = '\0';
  (this->ObjectStorage).Pad[0x1f5] = '\0';
  (this->ObjectStorage).Pad[0x1f6] = '\0';
  (this->ObjectStorage).Pad[0x1f7] = '\0';
  (this->ObjectStorage).Pad[0x1e0] = '\0';
  (this->ObjectStorage).Pad[0x1e1] = '\0';
  (this->ObjectStorage).Pad[0x1e2] = '\0';
  (this->ObjectStorage).Pad[0x1e3] = '\0';
  (this->ObjectStorage).Pad[0x1e4] = '\0';
  (this->ObjectStorage).Pad[0x1e5] = '\0';
  (this->ObjectStorage).Pad[0x1e6] = '\0';
  (this->ObjectStorage).Pad[0x1e7] = '\0';
  (this->ObjectStorage).Pad[0x1e8] = '\0';
  (this->ObjectStorage).Pad[0x1e9] = '\0';
  (this->ObjectStorage).Pad[0x1ea] = '\0';
  (this->ObjectStorage).Pad[0x1eb] = '\0';
  (this->ObjectStorage).Pad[0x1ec] = '\0';
  (this->ObjectStorage).Pad[0x1ed] = '\0';
  (this->ObjectStorage).Pad[0x1ee] = '\0';
  (this->ObjectStorage).Pad[0x1ef] = '\0';
  FText::FText((FText *)((this->ObjectStorage).Pad + 0x1f8));
  (this->ObjectStorage).Pad[0x208] = '\0';
  (this->ObjectStorage).Pad[0x220] = '\0';
  (this->ObjectStorage).Pad[0x221] = '\0';
  (this->ObjectStorage).Pad[0x222] = '\0';
  (this->ObjectStorage).Pad[0x223] = '\0';
  (this->ObjectStorage).Pad[0x224] = '\0';
  (this->ObjectStorage).Pad[0x225] = '\0';
  (this->ObjectStorage).Pad[0x226] = '\0';
  (this->ObjectStorage).Pad[0x227] = '\0';
  (this->ObjectStorage).Pad[0x210] = '\0';
  (this->ObjectStorage).Pad[0x211] = '\0';
  (this->ObjectStorage).Pad[0x212] = '\0';
  (this->ObjectStorage).Pad[0x213] = '\0';
  (this->ObjectStorage).Pad[0x214] = '\0';
  (this->ObjectStorage).Pad[0x215] = '\0';
  (this->ObjectStorage).Pad[0x216] = '\0';
  (this->ObjectStorage).Pad[0x217] = '\0';
  (this->ObjectStorage).Pad[0x218] = '\0';
  (this->ObjectStorage).Pad[0x219] = '\0';
  (this->ObjectStorage).Pad[0x21a] = '\0';
  (this->ObjectStorage).Pad[0x21b] = '\0';
  (this->ObjectStorage).Pad[0x21c] = '\0';
  (this->ObjectStorage).Pad[0x21d] = '\0';
  (this->ObjectStorage).Pad[0x21e] = '\0';
  (this->ObjectStorage).Pad[0x21f] = '\0';
  FText::FText((FText *)((this->ObjectStorage).Pad + 0x228));
  (this->ObjectStorage).Pad[0x238] = '\0';
  (this->ObjectStorage).Pad[0x250] = '\0';
  (this->ObjectStorage).Pad[0x251] = '\0';
  (this->ObjectStorage).Pad[0x252] = '\0';
  (this->ObjectStorage).Pad[0x253] = '\0';
  (this->ObjectStorage).Pad[0x254] = '\0';
  (this->ObjectStorage).Pad[0x255] = '\0';
  (this->ObjectStorage).Pad[0x256] = '\0';
  (this->ObjectStorage).Pad[599] = '\0';
  (this->ObjectStorage).Pad[0x240] = '\0';
  (this->ObjectStorage).Pad[0x241] = '\0';
  (this->ObjectStorage).Pad[0x242] = '\0';
  (this->ObjectStorage).Pad[0x243] = '\0';
  (this->ObjectStorage).Pad[0x244] = '\0';
  (this->ObjectStorage).Pad[0x245] = '\0';
  (this->ObjectStorage).Pad[0x246] = '\0';
  (this->ObjectStorage).Pad[0x247] = '\0';
  (this->ObjectStorage).Pad[0x248] = '\0';
  (this->ObjectStorage).Pad[0x249] = '\0';
  (this->ObjectStorage).Pad[0x24a] = '\0';
  (this->ObjectStorage).Pad[0x24b] = '\0';
  (this->ObjectStorage).Pad[0x24c] = '\0';
  (this->ObjectStorage).Pad[0x24d] = '\0';
  (this->ObjectStorage).Pad[0x24e] = '\0';
  (this->ObjectStorage).Pad[0x24f] = '\0';
  FSlateIcon::FSlateIcon((FSlateIcon *)((this->ObjectStorage).Pad + 600));
  this_00 = (TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy> *)
            ((this->ObjectStorage).Pad + 0x278);
  *(undefined8 *)this_00 = 0;
  (this->ObjectStorage).Pad[0x280] = '\0';
  (this->ObjectStorage).Pad[0x281] = '\0';
  (this->ObjectStorage).Pad[0x282] = '\0';
  (this->ObjectStorage).Pad[0x283] = '\0';
  (this->ObjectStorage).Pad[0x284] = '\0';
  (this->ObjectStorage).Pad[0x285] = '\0';
  (this->ObjectStorage).Pad[0x286] = '\0';
  (this->ObjectStorage).Pad[0x287] = '\0';
  (this->ObjectStorage).Pad[0x288] = '\0';
  (this->ObjectStorage).Pad[0x289] = '\0';
  (this->ObjectStorage).Pad[0x28a] = '\0';
  (this->ObjectStorage).Pad[0x28b] = '\0';
  TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(this_00,param_4);
  *(SWidget **)((this->ObjectStorage).Pad + 0x2a8) = pSVar7;
  (this->ObjectStorage).Pad[0x290] = '\0';
  (this->ObjectStorage).Pad[0x291] = '\0';
  (this->ObjectStorage).Pad[0x292] = '\0';
  (this->ObjectStorage).Pad[0x293] = '\0';
  (this->ObjectStorage).Pad[0x294] = '\0';
  (this->ObjectStorage).Pad[0x295] = '\0';
  (this->ObjectStorage).Pad[0x296] = '\0';
  (this->ObjectStorage).Pad[0x297] = '\0';
  (this->ObjectStorage).Pad[0x298] = '\0';
  (this->ObjectStorage).Pad[0x299] = '\0';
  (this->ObjectStorage).Pad[0x29a] = '\0';
  (this->ObjectStorage).Pad[0x29b] = '\0';
  (this->ObjectStorage).Pad[0x29c] = '\0';
  (this->ObjectStorage).Pad[0x29d] = '\0';
  (this->ObjectStorage).Pad[0x29e] = '\0';
  (this->ObjectStorage).Pad[0x29f] = '\0';
  (this->ObjectStorage).Pad[0x2a0] = '\0';
  (this->ObjectStorage).Pad[0x2a1] = '\0';
  (this->ObjectStorage).Pad[0x2a2] = '\0';
  (this->ObjectStorage).Pad[0x2a3] = '\0';
  *(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x2b0) = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar10 = (atomic<int>)((int)*paVar10 + 1);
    UNLOCK();
  }
  (this->ObjectStorage).Pad[700] = (uchar)param_9;
  (this->ObjectStorage).Pad[0x2b8] = bVar2;
  *(FExtender **)((this->ObjectStorage).Pad + 0x2c0) = pFVar5;
  (this->ObjectStorage).Pad[0x2b9] = '\x01';
  (this->ObjectStorage).Pad[0x2ba] = '\0';
  (this->ObjectStorage).Pad[699] = '\x01';
  *(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x2c8) = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->ObjectStorage).Pad[0x2d0] = bVar1;
  (this->ObjectStorage).Pad[0x2d4] = '\0';
  (this->ObjectStorage).Pad[0x2d5] = '\0';
  (this->ObjectStorage).Pad[0x2d6] = '\0';
  (this->ObjectStorage).Pad[0x2d7] = '\0';
  (this->ObjectStorage).Pad[0x2d8] = '\0';
  (this->ObjectStorage).Pad[0x2d9] = '\0';
  (this->ObjectStorage).Pad[0x2da] = '\0';
  (this->ObjectStorage).Pad[0x2db] = '\0';
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return this;
}

// TIntrusiveReferenceController<FMenuEntryBlock,1><enum_EName_const_&,FUIAction_const_&,FText_const_&,FText_const_&,TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>_const_&,TSharedPtr<FExtender,1>_&,bool_const_&,bool,bool_&,FSlateIcon_const_&> @ 142794dc0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

TIntrusiveReferenceController<FMenuEntryBlock,1> * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FMenuEntryBlock,1>::
TIntrusiveReferenceController<FMenuEntryBlock,1><enum_EName_const_&,FUIAction_const_&,FText_const_&,FText_const_&,TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>_const_&,TSharedPtr<FExtender,1>_&,bool_const_&,bool,bool_&,FSlateIcon_const_&>
          (TIntrusiveReferenceController<FMenuEntryBlock,1> *this,EName *param_1,FUIAction *param_2,
          FText *param_3,FText *param_4,
          TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy> *param_5,
          TSharedPtr<FExtender,1> *param_6,bool *param_7,bool *param_8,bool *param_9,
          FSlateIcon *param_10)

{
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *pTVar1;
  TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  FExtender *pFVar4;
  FNameEntryId FVar5;
  undefined4 extraout_var;
  FName FVar6;
  FDestructionSentinel local_a8;
  ITextData *local_90;
  uint local_88;
  uchar local_80;
  undefined1 local_78 [8];
  ForAnyElementType FStack_70;
  ulonglong local_68;
  ITextData *local_60;
  uint local_58;
  uchar local_50;
  undefined1 local_48 [8];
  ForAnyElementType FStack_40;
  ulonglong local_38;
  
  *(undefined4 *)&this->_padding_ = 1;
  this->_padding_ =
       (longlong)
       &___7__TIntrusiveReferenceController_VFMenuEntryBlock___00_SharedPointerInternals__6B_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 1;
  bVar2 = *param_9;
  param_8._0_1_ = *param_8;
  param_9._0_1_ = *param_7;
  pTVar3 = (param_6->SharedReferenceCount).ReferenceController;
  pFVar4 = param_6->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_60 = (param_4->TextData).Reference;
  if (local_60 != (ITextData *)0x0) {
    (**(code **)((longlong)*local_60 + 8))(local_60,&param_7);
  }
  local_58 = param_4->Flags;
  local_90 = (param_3->TextData).Reference;
  local_38 = 0;
  local_50 = '\x01';
  local_48 = (undefined1  [8])0x0;
  FStack_40.Data = (FScriptContainerElement *)0x0;
  if (local_90 != (ITextData *)0x0) {
    (**(code **)((longlong)*local_90 + 8))(local_90,&param_7);
  }
  local_88 = param_3->Flags;
  FVar6.ComparisonIndex.Value = 0;
  FVar6.Number = 0;
  local_68 = 0;
  local_80 = '\x01';
  local_78 = (undefined1  [8])0x0;
  FStack_70.Data = (FScriptContainerElement *)0x0;
  if (*param_1 != None) {
    FVar5 = FNameEntryId::FromValidEName((EName)&param_7);
    FVar6.Number = 0;
    FVar6.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar5.Value);
  }
  local_a8.AccessType = Reader;
  local_a8._4_4_ = 0;
  local_a8.Accessor = (FMRSWRecursiveAccessDetector *)0x0;
  FMultiBlock::FMultiBlock
            ((FMultiBlock *)&this->ObjectStorage,param_2,FVar6,MenuEntry,false,
             (TSharedPtr<FUICommandList_const_,1> *)&local_a8);
  *(undefined ***)(this->ObjectStorage).Pad = &___7FMenuEntryBlock__6B_;
  *(ITextData **)((this->ObjectStorage).Pad + 0x1c8) = local_90;
  if (local_90 != (ITextData *)0x0) {
    (**(code **)((longlong)*local_90 + 8))(local_90,&param_7);
  }
  pTVar1 = (TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)
           ((this->ObjectStorage).Pad + 0x1e0);
  *(uint *)((this->ObjectStorage).Pad + 0x1d0) = local_88;
  (this->ObjectStorage).Pad[0x1d8] = local_80;
  *(undefined8 *)pTVar1 = 0;
  (this->ObjectStorage).Pad[0x1e8] = '\0';
  (this->ObjectStorage).Pad[0x1e9] = '\0';
  (this->ObjectStorage).Pad[0x1ea] = '\0';
  (this->ObjectStorage).Pad[0x1eb] = '\0';
  (this->ObjectStorage).Pad[0x1ec] = '\0';
  (this->ObjectStorage).Pad[0x1ed] = '\0';
  (this->ObjectStorage).Pad[0x1ee] = '\0';
  (this->ObjectStorage).Pad[0x1ef] = '\0';
  (this->ObjectStorage).Pad[0x1f0] = '\0';
  (this->ObjectStorage).Pad[0x1f1] = '\0';
  (this->ObjectStorage).Pad[0x1f2] = '\0';
  (this->ObjectStorage).Pad[499] = '\0';
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (pTVar1,(TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)local_78);
  *(ITextData **)((this->ObjectStorage).Pad + 0x1f8) = local_60;
  if (local_60 != (ITextData *)0x0) {
    (**(code **)((longlong)*local_60 + 8))(local_60,&param_7);
  }
  pTVar1 = (TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)
           ((this->ObjectStorage).Pad + 0x210);
  *(uint *)((this->ObjectStorage).Pad + 0x200) = local_58;
  (this->ObjectStorage).Pad[0x208] = local_50;
  *(undefined8 *)pTVar1 = 0;
  (this->ObjectStorage).Pad[0x218] = '\0';
  (this->ObjectStorage).Pad[0x219] = '\0';
  (this->ObjectStorage).Pad[0x21a] = '\0';
  (this->ObjectStorage).Pad[0x21b] = '\0';
  (this->ObjectStorage).Pad[0x21c] = '\0';
  (this->ObjectStorage).Pad[0x21d] = '\0';
  (this->ObjectStorage).Pad[0x21e] = '\0';
  (this->ObjectStorage).Pad[0x21f] = '\0';
  (this->ObjectStorage).Pad[0x220] = '\0';
  (this->ObjectStorage).Pad[0x221] = '\0';
  (this->ObjectStorage).Pad[0x222] = '\0';
  (this->ObjectStorage).Pad[0x223] = '\0';
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (pTVar1,(TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)local_48);
  FText::FText((FText *)((this->ObjectStorage).Pad + 0x228));
  this_00 = (TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy> *)
            ((this->ObjectStorage).Pad + 0x290);
  (this->ObjectStorage).Pad[0x238] = '\0';
  (this->ObjectStorage).Pad[0x250] = '\0';
  (this->ObjectStorage).Pad[0x251] = '\0';
  (this->ObjectStorage).Pad[0x252] = '\0';
  (this->ObjectStorage).Pad[0x253] = '\0';
  (this->ObjectStorage).Pad[0x254] = '\0';
  (this->ObjectStorage).Pad[0x255] = '\0';
  (this->ObjectStorage).Pad[0x256] = '\0';
  (this->ObjectStorage).Pad[599] = '\0';
  (this->ObjectStorage).Pad[0x240] = '\0';
  (this->ObjectStorage).Pad[0x241] = '\0';
  (this->ObjectStorage).Pad[0x242] = '\0';
  (this->ObjectStorage).Pad[0x243] = '\0';
  (this->ObjectStorage).Pad[0x244] = '\0';
  (this->ObjectStorage).Pad[0x245] = '\0';
  (this->ObjectStorage).Pad[0x246] = '\0';
  (this->ObjectStorage).Pad[0x247] = '\0';
  (this->ObjectStorage).Pad[0x248] = '\0';
  (this->ObjectStorage).Pad[0x249] = '\0';
  (this->ObjectStorage).Pad[0x24a] = '\0';
  (this->ObjectStorage).Pad[0x24b] = '\0';
  (this->ObjectStorage).Pad[0x24c] = '\0';
  (this->ObjectStorage).Pad[0x24d] = '\0';
  (this->ObjectStorage).Pad[0x24e] = '\0';
  (this->ObjectStorage).Pad[0x24f] = '\0';
  FVar6 = param_10->StyleName;
  *(FName *)((this->ObjectStorage).Pad + 600) = param_10->StyleSetName;
  *(FName *)((this->ObjectStorage).Pad + 0x260) = FVar6;
  FVar6 = param_10->StatusOverlayStyleName;
  *(FName *)((this->ObjectStorage).Pad + 0x268) = param_10->SmallStyleName;
  *(FName *)((this->ObjectStorage).Pad + 0x270) = FVar6;
  (this->ObjectStorage).Pad[0x278] = '\0';
  (this->ObjectStorage).Pad[0x279] = '\0';
  (this->ObjectStorage).Pad[0x27a] = '\0';
  (this->ObjectStorage).Pad[0x27b] = '\0';
  (this->ObjectStorage).Pad[0x27c] = '\0';
  (this->ObjectStorage).Pad[0x27d] = '\0';
  (this->ObjectStorage).Pad[0x27e] = '\0';
  (this->ObjectStorage).Pad[0x27f] = '\0';
  (this->ObjectStorage).Pad[0x280] = '\0';
  (this->ObjectStorage).Pad[0x281] = '\0';
  (this->ObjectStorage).Pad[0x282] = '\0';
  (this->ObjectStorage).Pad[0x283] = '\0';
  (this->ObjectStorage).Pad[0x284] = '\0';
  (this->ObjectStorage).Pad[0x285] = '\0';
  (this->ObjectStorage).Pad[0x286] = '\0';
  (this->ObjectStorage).Pad[0x287] = '\0';
  (this->ObjectStorage).Pad[0x288] = '\0';
  (this->ObjectStorage).Pad[0x289] = '\0';
  (this->ObjectStorage).Pad[0x28a] = '\0';
  (this->ObjectStorage).Pad[0x28b] = '\0';
  *(undefined8 *)this_00 = 0;
  (this->ObjectStorage).Pad[0x298] = '\0';
  (this->ObjectStorage).Pad[0x299] = '\0';
  (this->ObjectStorage).Pad[0x29a] = '\0';
  (this->ObjectStorage).Pad[0x29b] = '\0';
  (this->ObjectStorage).Pad[0x29c] = '\0';
  (this->ObjectStorage).Pad[0x29d] = '\0';
  (this->ObjectStorage).Pad[0x29e] = '\0';
  (this->ObjectStorage).Pad[0x29f] = '\0';
  (this->ObjectStorage).Pad[0x2a0] = '\0';
  (this->ObjectStorage).Pad[0x2a1] = '\0';
  (this->ObjectStorage).Pad[0x2a2] = '\0';
  (this->ObjectStorage).Pad[0x2a3] = '\0';
  TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(this_00,param_5);
  (this->ObjectStorage).Pad[0x2b8] = (uchar)param_9;
  (this->ObjectStorage).Pad[0x2ba] = (uchar)param_8;
  (this->ObjectStorage).Pad[700] = bVar2;
  *(FExtender **)((this->ObjectStorage).Pad + 0x2c0) = pFVar4;
  (this->ObjectStorage).Pad[0x2a8] = '\0';
  (this->ObjectStorage).Pad[0x2a9] = '\0';
  (this->ObjectStorage).Pad[0x2aa] = '\0';
  (this->ObjectStorage).Pad[0x2ab] = '\0';
  (this->ObjectStorage).Pad[0x2ac] = '\0';
  (this->ObjectStorage).Pad[0x2ad] = '\0';
  (this->ObjectStorage).Pad[0x2ae] = '\0';
  (this->ObjectStorage).Pad[0x2af] = '\0';
  (this->ObjectStorage).Pad[0x2b0] = '\0';
  (this->ObjectStorage).Pad[0x2b1] = '\0';
  (this->ObjectStorage).Pad[0x2b2] = '\0';
  (this->ObjectStorage).Pad[0x2b3] = '\0';
  (this->ObjectStorage).Pad[0x2b4] = '\0';
  (this->ObjectStorage).Pad[0x2b5] = '\0';
  (this->ObjectStorage).Pad[0x2b6] = '\0';
  (this->ObjectStorage).Pad[0x2b7] = '\0';
  (this->ObjectStorage).Pad[0x2b9] = '\x01';
  (this->ObjectStorage).Pad[699] = '\x01';
  *(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x2c8) = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->ObjectStorage).Pad[0x2d0] = '\x01';
  (this->ObjectStorage).Pad[0x2d4] = '\0';
  (this->ObjectStorage).Pad[0x2d5] = '\0';
  (this->ObjectStorage).Pad[0x2d6] = '\0';
  (this->ObjectStorage).Pad[0x2d7] = '\0';
  (this->ObjectStorage).Pad[0x2d8] = '\0';
  (this->ObjectStorage).Pad[0x2d9] = '\0';
  (this->ObjectStorage).Pad[0x2da] = '\0';
  (this->ObjectStorage).Pad[0x2db] = '\0';
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_78,
             (FWriteAccessScope *)&local_a8);
  if (((int)local_68 != 0) && (FStack_70.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_70.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_70,0,0,0x10);
    local_68 = local_68 & 0xffffffff00000000;
  }
  if (local_a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a8.Accessor,&local_a8);
  }
  if (FStack_70.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_70.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_78);
  if (local_90 != (ITextData *)0x0) {
    (**(code **)((longlong)*local_90 + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_a8);
  if (((int)local_38 != 0) && (FStack_40.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_40.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_40,0,0,0x10);
    local_38 = local_38 & 0xffffffff00000000;
  }
  if (local_a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a8.Accessor,&local_a8);
  }
  if (FStack_40.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_40.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  if (local_60 != (ITextData *)0x0) {
    (**(code **)((longlong)*local_60 + 0x10))();
  }
  return this;
}

// TIntrusiveReferenceController<FMenuEntryBlock,1><enum_EName_const_&,FText_const_&,FText_const_&,TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>_const_&,TSharedPtr<FExtender,1>_&,bool_const_&,bool,TSharedPtr<FUICommandList_const_,1>_&,bool_&,FSlateIcon_const_&> @ 142795190

TIntrusiveReferenceController<FMenuEntryBlock,1> * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FMenuEntryBlock,1>::
TIntrusiveReferenceController<FMenuEntryBlock,1><enum_EName_const_&,FText_const_&,FText_const_&,TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>_const_&,TSharedPtr<FExtender,1>_&,bool_const_&,bool,TSharedPtr<FUICommandList_const_,1>_&,bool_&,FSlateIcon_const_&>
          (TIntrusiveReferenceController<FMenuEntryBlock,1> *this,EName *param_1,FText *param_2,
          FText *param_3,
          TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy> *param_4,
          TSharedPtr<FExtender,1> *param_5,bool *param_6,bool *param_7,
          TSharedPtr<FUICommandList_const_,1> *param_8,bool *param_9,FSlateIcon *param_10)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool *pbVar4;
  FNameEntryId FVar5;
  undefined4 extraout_var;
  FDestructionSentinel local_b8;
  undefined1 local_a0 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_88;
  ForAnyElementType FStack_80;
  ulonglong local_78;
  undefined1 local_70 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_58;
  ForAnyElementType FStack_50;
  ulonglong local_48;
  TSharedPtr<FUICommandList_const_,1> local_40;
  
  *(undefined4 *)&this->_padding_ = 1;
  this->_padding_ =
       (longlong)
       &___7__TIntrusiveReferenceController_VFMenuEntryBlock___00_SharedPointerInternals__6B_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 1;
  bVar1 = *param_9;
  local_40.Object = param_8->Object;
  local_40.SharedReferenceCount.ReferenceController =
       (param_8->SharedReferenceCount).ReferenceController;
  if (local_40.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_40.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_40.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar2 = *param_7;
  bVar3 = *param_6;
  local_b8._0_8_ = param_5->Object;
  local_b8.Accessor =
       (FMRSWRecursiveAccessDetector *)(param_5->SharedReferenceCount).ReferenceController;
  if ((TReferenceControllerBase<1> *)local_b8.Accessor != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    ((TReferenceControllerBase<1> *)local_b8.Accessor)->SharedReferenceCount =
         (atomic<int>)
         ((int)((TReferenceControllerBase<1> *)local_b8.Accessor)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_70._0_8_ = (param_3->TextData).Reference;
  if ((ITextData *)local_70._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_70._0_8_ + 8))(local_70._0_8_,&param_9);
  }
  local_70._8_4_ = param_3->Flags;
  local_a0._0_8_ = (param_2->TextData).Reference;
  local_48 = 0;
  local_70[0x10] = true;
  local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_50.Data = (FScriptContainerElement *)0x0;
  pbVar4 = param_9;
  if ((ITextData *)local_a0._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_a0._0_8_ + 8))(local_a0._0_8_,&param_9);
    pbVar4 = param_9;
  }
  local_a0._8_4_ = param_2->Flags;
  param_9._0_4_ = 0;
  local_78 = 0;
  local_a0[0x10] = true;
  local_88.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_80.Data = (FScriptContainerElement *)0x0;
  if (*param_1 != None) {
    param_9 = pbVar4;
    FVar5 = FNameEntryId::FromValidEName((EName)&param_9);
    param_9._0_4_ = *(undefined4 *)CONCAT44(extraout_var,FVar5.Value);
  }
  param_9._4_4_ = 0;
  FMenuEntryBlock::FMenuEntryBlock
            ((FMenuEntryBlock *)&this->ObjectStorage,(FName *)&param_9,(TAttribute<FText> *)local_a0
             ,(TAttribute<FText> *)local_70,param_4,(TSharedPtr<FExtender,1> *)&local_b8,bVar3,bVar2
             ,&local_40,bVar1,param_10,true);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_88,(FWriteAccessScope *)&local_b8);
  if (((int)local_78 != 0) && (FStack_80.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_80.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_80,0,0,0x10);
    local_78 = local_78 & 0xffffffff00000000;
  }
  if (local_b8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b8.Accessor,&local_b8);
  }
  if (FStack_80.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_80.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_88.AccessDetector);
  if ((ITextData *)local_a0._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_a0._0_8_ + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_b8);
  if (((int)local_48 != 0) && (FStack_50.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_50.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_50,0,0,0x10);
    local_48 = local_48 & 0xffffffff00000000;
  }
  if (local_b8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b8.Accessor,&local_b8);
  }
  if (FStack_50.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_50.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58.AccessDetector);
  if ((ITextData *)local_70._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_70._0_8_ + 0x10))();
  }
  return this;
}

// TIntrusiveReferenceController<FMenuEntryBlock,1><enum_EName_const_&,FText_const_&,FText_const_&,TSharedPtr<SWidget,1>_const_&,TSharedPtr<FExtender,1>_&,bool_const_&,bool,TSharedPtr<FUICommandList_const_,1>_&,bool_&,FSlateIcon_const_&> @ 142795420

TIntrusiveReferenceController<FMenuEntryBlock,1> * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FMenuEntryBlock,1>::
TIntrusiveReferenceController<FMenuEntryBlock,1><enum_EName_const_&,FText_const_&,FText_const_&,TSharedPtr<SWidget,1>_const_&,TSharedPtr<FExtender,1>_&,bool_const_&,bool,TSharedPtr<FUICommandList_const_,1>_&,bool_&,FSlateIcon_const_&>
          (TIntrusiveReferenceController<FMenuEntryBlock,1> *this,EName *param_1,FText *param_2,
          FText *param_3,TSharedPtr<SWidget,1> *param_4,TSharedPtr<FExtender,1> *param_5,
          bool *param_6,bool *param_7,TSharedPtr<FUICommandList_const_,1> *param_8,bool *param_9,
          FSlateIcon *param_10)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool *pbVar4;
  FNameEntryId FVar5;
  undefined4 extraout_var;
  FDestructionSentinel local_b8;
  undefined1 local_a0 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_88;
  ForAnyElementType FStack_80;
  ulonglong local_78;
  undefined1 local_70 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_58;
  ForAnyElementType FStack_50;
  ulonglong local_48;
  TSharedPtr<FUICommandList_const_,1> local_40;
  
  *(undefined4 *)&this->_padding_ = 1;
  this->_padding_ =
       (longlong)
       &___7__TIntrusiveReferenceController_VFMenuEntryBlock___00_SharedPointerInternals__6B_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 1;
  bVar1 = *param_9;
  local_40.Object = param_8->Object;
  local_40.SharedReferenceCount.ReferenceController =
       (param_8->SharedReferenceCount).ReferenceController;
  if (local_40.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_40.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_40.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar2 = *param_7;
  bVar3 = *param_6;
  local_b8._0_8_ = param_5->Object;
  local_b8.Accessor =
       (FMRSWRecursiveAccessDetector *)(param_5->SharedReferenceCount).ReferenceController;
  if ((TReferenceControllerBase<1> *)local_b8.Accessor != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    ((TReferenceControllerBase<1> *)local_b8.Accessor)->SharedReferenceCount =
         (atomic<int>)
         ((int)((TReferenceControllerBase<1> *)local_b8.Accessor)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_70._0_8_ = (param_3->TextData).Reference;
  if ((ITextData *)local_70._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_70._0_8_ + 8))(local_70._0_8_,&param_9);
  }
  local_70._8_4_ = param_3->Flags;
  local_a0._0_8_ = (param_2->TextData).Reference;
  local_48 = 0;
  local_70[0x10] = true;
  local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_50.Data = (FScriptContainerElement *)0x0;
  pbVar4 = param_9;
  if ((ITextData *)local_a0._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_a0._0_8_ + 8))(local_a0._0_8_,&param_9);
    pbVar4 = param_9;
  }
  local_a0._8_4_ = param_2->Flags;
  param_9._0_4_ = 0;
  local_78 = 0;
  local_a0[0x10] = true;
  local_88.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_80.Data = (FScriptContainerElement *)0x0;
  if (*param_1 != None) {
    param_9 = pbVar4;
    FVar5 = FNameEntryId::FromValidEName((EName)&param_9);
    param_9._0_4_ = *(undefined4 *)CONCAT44(extraout_var,FVar5.Value);
  }
  param_9._4_4_ = 0;
  FMenuEntryBlock::FMenuEntryBlock
            ((FMenuEntryBlock *)&this->ObjectStorage,(FName *)&param_9,(TAttribute<FText> *)local_a0
             ,(TAttribute<FText> *)local_70,param_4,(TSharedPtr<FExtender,1> *)&local_b8,bVar3,bVar2
             ,&local_40,bVar1,param_10,true);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_88,(FWriteAccessScope *)&local_b8);
  if (((int)local_78 != 0) && (FStack_80.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_80.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_80,0,0,0x10);
    local_78 = local_78 & 0xffffffff00000000;
  }
  if (local_b8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b8.Accessor,&local_b8);
  }
  if (FStack_80.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_80.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_88.AccessDetector);
  if ((ITextData *)local_a0._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_a0._0_8_ + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_b8);
  if (((int)local_48 != 0) && (FStack_50.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_50.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_50,0,0,0x10);
    local_48 = local_48 & 0xffffffff00000000;
  }
  if (local_b8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b8.Accessor,&local_b8);
  }
  if (FStack_50.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_50.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58.AccessDetector);
  if ((ITextData *)local_70._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_70._0_8_ + 0x10))();
  }
  return this;
}

// DestroyObject @ 142801190

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<SMultiBoxWidget::FFlattenSearchableBlockInfo,1>::DestroyObject
          (TIntrusiveReferenceController<SMultiBoxWidget::FFlattenSearchableBlockInfo,1> *this)

{
  void *pvVar1;
  
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x18));
  DestructItems<FText,int>
            (*(FText **)(this->ObjectStorage).Pad,*(int *)((this->ObjectStorage).Pad + 8));
  pvVar1 = *(void **)(this->ObjectStorage).Pad;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
    return;
  }
  return;
}

// DestroyObject @ 1428011d0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<STableRow<TSharedPtr<SWidget,1>_>,1>::
DestroyObject(TIntrusiveReferenceController<STableRow<TSharedPtr<SWidget,1>_>,1> *this)

{
  STableRow<TSharedPtr<SWidget,1>_>::~STableRow<TSharedPtr<SWidget,1>_>
            ((STableRow<TSharedPtr<SWidget,1>_> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1428011e0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<STileView<TSharedPtr<SWidget,1>_>,1>::
DestroyObject(TIntrusiveReferenceController<STileView<TSharedPtr<SWidget,1>_>,1> *this)

{
  SListView<TSharedPtr<SWidget,1>_>::~SListView<TSharedPtr<SWidget,1>_>
            ((SListView<TSharedPtr<SWidget,1>_> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1428011f0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TTableViewMetadata<TSharedPtr<SWidget,1>_>,1>
::DestroyObject(TIntrusiveReferenceController<TTableViewMetadata<TSharedPtr<SWidget,1>_>,1> *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((this->ObjectStorage).Pad + 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  *(undefined ***)(this->ObjectStorage).Pad = &___7ISlateMetaData__6B_;
  return;
}

// DestroyObject @ 142801240

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FExtender,1>::DestroyObject
          (TIntrusiveReferenceController<FExtender,1> *this)

{
  void *pvVar1;
  
  DestructItems<TSharedPtr<FExtensionBase_const_,1>,int>
            (*(TSharedPtr<FExtensionBase_const_,1> **)(this->ObjectStorage).Pad,
             *(int *)((this->ObjectStorage).Pad + 8));
  pvVar1 = *(void **)(this->ObjectStorage).Pad;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
    return;
  }
  return;
}

// DestroyObject @ 142801280

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FHeadingBlock,1>::DestroyObject
          (TIntrusiveReferenceController<FHeadingBlock,1> *this)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)((this->ObjectStorage).Pad + 0x1c8);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  FMultiBlock::~FMultiBlock((FMultiBlock *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1428012b0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FLinkedBoxManager,1>::DestroyObject
          (TIntrusiveReferenceController<FLinkedBoxManager,1> *this)

{
  FLinkedBoxManager::~FLinkedBoxManager((FLinkedBoxManager *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1428012c0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FMenuEntryBlock,1>::DestroyObject
          (TIntrusiveReferenceController<FMenuEntryBlock,1> *this)

{
  FMenuEntryBlock::~FMenuEntryBlock((FMenuEntryBlock *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1428012d0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FMenuSpacerBlock,1>::DestroyObject
          (TIntrusiveReferenceController<FMenuSpacerBlock,1> *this)

{
  FMultiBlock::~FMultiBlock((FMultiBlock *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1428012e0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FTagMetaData,1>::DestroyObject
          (TIntrusiveReferenceController<FTagMetaData,1> *this)

{
  *(undefined ***)(this->ObjectStorage).Pad = &___7ISlateMetaData__6B_;
  return;
}

// DestroyObject @ 142801300

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FToolBarSeparatorBlock,1>::DestroyObject
          (TIntrusiveReferenceController<FToolBarSeparatorBlock,1> *this)

{
  FMultiBlock::~FMultiBlock((FMultiBlock *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142801310

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FWidgetBlock,1>::DestroyObject
          (TIntrusiveReferenceController<FWidgetBlock,1> *this)

{
  FWidgetBlock::~FWidgetBlock((FWidgetBlock *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142801320

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SButtonRowBlock,1>::DestroyObject
          (TIntrusiveReferenceController<SButtonRowBlock,1> *this)

{
  SButtonRowBlock::~SButtonRowBlock((SButtonRowBlock *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142801330

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SCheckBoxStack,1>::DestroyObject
          (TIntrusiveReferenceController<SCheckBoxStack,1> *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((this->ObjectStorage).Pad + 0x480);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  SCheckBox::~SCheckBox((SCheckBox *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142801380

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SClippingHorizontalBox,1>::DestroyObject
          (TIntrusiveReferenceController<SClippingHorizontalBox,1> *this)

{
  SClippingHorizontalBox::~SClippingHorizontalBox((SClippingHorizontalBox *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142801390

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SClippingVerticalBox,1>::DestroyObject
          (TIntrusiveReferenceController<SClippingVerticalBox,1> *this)

{
  SClippingVerticalBox::~SClippingVerticalBox((SClippingVerticalBox *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1428013a0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SColorBlock,1>::DestroyObject
          (TIntrusiveReferenceController<SColorBlock,1> *this)

{
  SColorBlock::~SColorBlock((SColorBlock *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1428013b0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SComboButton,1>::DestroyObject
          (TIntrusiveReferenceController<SComboButton,1> *this)

{
  SComboButton::~SComboButton((SComboButton *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1428013c0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SCustomToolbarPreviewWidget,1>::DestroyObject
          (TIntrusiveReferenceController<SCustomToolbarPreviewWidget,1> *this)

{
  SCustomToolbarPreviewWidget::~SCustomToolbarPreviewWidget
            ((SCustomToolbarPreviewWidget *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1428013d0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SEditableTextBlock,1>::DestroyObject
          (TIntrusiveReferenceController<SEditableTextBlock,1> *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x2d8));
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x2c8));
  plVar3 = *(longlong **)((this->ObjectStorage).Pad + 0x2b8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)((this->ObjectStorage).Pad + 8));
  return;
}

// DestroyObject @ 142801430

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SEditableTextBox,1>::DestroyObject
          (TIntrusiveReferenceController<SEditableTextBox,1> *this)

{
  SEditableTextBox::~SEditableTextBox((SEditableTextBox *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142801440

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SExpanderArrow,1>::DestroyObject
          (TIntrusiveReferenceController<SExpanderArrow,1> *this)

{
  SExpanderArrow::~SExpanderArrow((SExpanderArrow *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142801450

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SGroupMarkerBlock,1>::DestroyObject
          (TIntrusiveReferenceController<SGroupMarkerBlock,1> *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x2d8));
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x2c8));
  plVar3 = *(longlong **)((this->ObjectStorage).Pad + 0x2b8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)((this->ObjectStorage).Pad + 8));
  return;
}

// DestroyObject @ 1428014b0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SHeadingBlock,1>::DestroyObject
          (TIntrusiveReferenceController<SHeadingBlock,1> *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x2d8));
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x2c8));
  plVar3 = *(longlong **)((this->ObjectStorage).Pad + 0x2b8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)((this->ObjectStorage).Pad + 8));
  return;
}

// DestroyObject @ 142801510

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SLayeredImage,1>::DestroyObject
          (TIntrusiveReferenceController<SLayeredImage,1> *this)

{
  void *pvVar1;
  TTuple<SWidget::TSlateManagedAttribute<FSlateBrush_const_*,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>,SWidget::TSlateManagedAttribute<FSlateColor,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>_>
  *pTVar2;
  
  pTVar2 = *(TTuple<SWidget::TSlateManagedAttribute<FSlateBrush_const_*,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>,SWidget::TSlateManagedAttribute<FSlateColor,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>_>
             **)((this->ObjectStorage).Pad + 0x2d8);
  if (pTVar2 == (TTuple<SWidget::TSlateManagedAttribute<FSlateBrush_const_*,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>,SWidget::TSlateManagedAttribute<FSlateColor,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>_>
                 *)0x0) {
    pTVar2 = (TTuple<SWidget::TSlateManagedAttribute<FSlateBrush_const_*,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>,SWidget::TSlateManagedAttribute<FSlateColor,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>_>
              *)((this->ObjectStorage).Pad + 600);
  }
  DestructItems<TTuple<SWidget::TSlateManagedAttribute<FSlateBrush_const_*,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>,SWidget::TSlateManagedAttribute<FSlateColor,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>_>,int>
            (pTVar2,*(int *)((this->ObjectStorage).Pad + 0x2e0));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x2d8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  SImage::~SImage((SImage *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142801570

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SLinkedBox,1>::DestroyObject
          (TIntrusiveReferenceController<SLinkedBox,1> *this)

{
  SLinkedBox::~SLinkedBox((SLinkedBox *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142801580

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SMenuAnchor,1>::DestroyObject
          (TIntrusiveReferenceController<SMenuAnchor,1> *this)

{
  SMenuAnchor::~SMenuAnchor((SMenuAnchor *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142801590

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SMenuEntryBlock,1>::DestroyObject
          (TIntrusiveReferenceController<SMenuEntryBlock,1> *this)

{
  SMenuEntryBlock::~SMenuEntryBlock((SMenuEntryBlock *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1428015a0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SMenuEntryButton,1>::DestroyObject
          (TIntrusiveReferenceController<SMenuEntryButton,1> *this)

{
  SButton::~SButton((SButton *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1428015b0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SMenuSeparatorBlock,1>::DestroyObject
          (TIntrusiveReferenceController<SMenuSeparatorBlock,1> *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x2d8));
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x2c8));
  plVar3 = *(longlong **)((this->ObjectStorage).Pad + 0x2b8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)((this->ObjectStorage).Pad + 8));
  return;
}

// DestroyObject @ 142801610

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SMenuSpacerBlock,1>::DestroyObject
          (TIntrusiveReferenceController<SMenuSpacerBlock,1> *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x2d8));
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x2c8));
  plVar3 = *(longlong **)((this->ObjectStorage).Pad + 0x2b8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)((this->ObjectStorage).Pad + 8));
  return;
}

// DestroyObject @ 142801670

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SMultiBoxWidget,1>::DestroyObject
          (TIntrusiveReferenceController<SMultiBoxWidget,1> *this)

{
  SMultiBoxWidget::~SMultiBoxWidget((SMultiBoxWidget *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142801680

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SNotificationList,1>::DestroyObject
          (TIntrusiveReferenceController<SNotificationList,1> *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x2d8));
  plVar3 = *(longlong **)((this->ObjectStorage).Pad + 0x2c0);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x2b0));
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1428016e0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SPrioritizedWrapBox,1>::DestroyObject
          (TIntrusiveReferenceController<SPrioritizedWrapBox,1> *this)

{
  SPrioritizedWrapBox::~SPrioritizedWrapBox((SPrioritizedWrapBox *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1428016f0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SScrollBox,1>::DestroyObject
          (TIntrusiveReferenceController<SScrollBox,1> *this)

{
  SScrollBox::~SScrollBox((SScrollBox *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142801700

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SSearchBox,1>::DestroyObject
          (TIntrusiveReferenceController<SSearchBox,1> *this)

{
  SSearchBox::~SSearchBox((SSearchBox *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142801710

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SSeparator,1>::DestroyObject
          (TIntrusiveReferenceController<SSeparator,1> *this)

{
  SBorder::~SBorder((SBorder *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142801720

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SSubMenuButton,1>::DestroyObject
          (TIntrusiveReferenceController<SSubMenuButton,1> *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((this->ObjectStorage).Pad + 0x4b8));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x4c0);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((this->ObjectStorage).Pad + 0x4b8));
  SButton::~SButton((SButton *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142801770

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SToolBarButtonBlock,1>::DestroyObject
          (TIntrusiveReferenceController<SToolBarButtonBlock,1> *this)

{
  SToolBarButtonBlock::~SToolBarButtonBlock((SToolBarButtonBlock *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142801780

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SToolBarComboButtonBlock,1>::DestroyObject
          (TIntrusiveReferenceController<SToolBarComboButtonBlock,1> *this)

{
  SToolBarComboButtonBlock::~SToolBarComboButtonBlock
            ((SToolBarComboButtonBlock *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142801790

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SToolBarSeparatorBlock,1>::DestroyObject
          (TIntrusiveReferenceController<SToolBarSeparatorBlock,1> *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x2d8));
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x2c8));
  plVar3 = *(longlong **)((this->ObjectStorage).Pad + 0x2b8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)((this->ObjectStorage).Pad + 8));
  return;
}

// DestroyObject @ 1428017f0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SToolBarStackButtonBlock,1>::DestroyObject
          (TIntrusiveReferenceController<SToolBarStackButtonBlock,1> *this)

{
  SToolBarStackButtonBlock::~SToolBarStackButtonBlock
            ((SToolBarStackButtonBlock *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142801800

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SUniformToolbarButtonBlock,1>::DestroyObject
          (TIntrusiveReferenceController<SUniformToolbarButtonBlock,1> *this)

{
  SToolBarButtonBlock::~SToolBarButtonBlock((SToolBarButtonBlock *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142801810

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SUniformWrapPanel,1>::DestroyObject
          (TIntrusiveReferenceController<SUniformWrapPanel,1> *this)

{
  SUniformWrapPanel::~SUniformWrapPanel((SUniformWrapPanel *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142801820

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SWidgetBlock,1>::DestroyObject
          (TIntrusiveReferenceController<SWidgetBlock,1> *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x2d8));
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x2c8));
  plVar3 = *(longlong **)((this->ObjectStorage).Pad + 0x2b8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)((this->ObjectStorage).Pad + 8));
  return;
}

// DestroyObject @ 14286e0c0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FShapedTextCache,1>::DestroyObject
          (TIntrusiveReferenceController<FShapedTextCache,1> *this)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  longlong *plVar4;
  
  (this->ObjectStorage).Pad[0x58] = '\0';
  (this->ObjectStorage).Pad[0x59] = '\0';
  (this->ObjectStorage).Pad[0x5a] = '\0';
  (this->ObjectStorage).Pad[0x5b] = '\0';
  pvVar3 = *(void **)((this->ObjectStorage).Pad + 0x50);
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FCachedShapedTextKey,TSharedPtr<FShapedGlyphSequence_const_,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FCachedShapedTextKey,TSharedPtr<FShapedGlyphSequence_const_,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FCachedShapedTextKey,TSharedPtr<FShapedGlyphSequence_const_,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((this->ObjectStorage).Pad + 0x10));
  plVar4 = *(longlong **)((this->ObjectStorage).Pad + 8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  return;
}

// DestroyObject @ 14286e120

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FTrackedMetaData,1>::DestroyObject
          (TIntrusiveReferenceController<FTrackedMetaData,1> *this)

{
  FTrackedMetaData::~FTrackedMetaData((FTrackedMetaData *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14286e130

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SEditableText,1>::DestroyObject
          (TIntrusiveReferenceController<SEditableText,1> *this)

{
  SEditableText::~SEditableText((SEditableText *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14286e140

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SPopupErrorText,1>::DestroyObject
          (TIntrusiveReferenceController<SPopupErrorText,1> *this)

{
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x410));
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x400));
  SComboButton::~SComboButton((SComboButton *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14286e180

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SRichTextHyperlink,1>::DestroyObject
          (TIntrusiveReferenceController<SRichTextHyperlink,1> *this)

{
  void *pvVar1;
  
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x4d0));
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((this->ObjectStorage).Pad + 0x4b0));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x4b8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((this->ObjectStorage).Pad + 0x4b0));
  SButton::~SButton((SButton *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142924f00

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TDefaultNumericTypeInterface<signed_char>,1>::
DestroyObject(TIntrusiveReferenceController<TDefaultNumericTypeInterface<signed_char>,1> *this)

{
  *(undefined ***)(this->ObjectStorage).Pad = &___7__INumericTypeInterface_C__6B_;
  return;
}

// DestroyObject @ 142924f20

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TDefaultNumericTypeInterface<unsigned_char>,1>
::DestroyObject(TIntrusiveReferenceController<TDefaultNumericTypeInterface<unsigned_char>,1> *this)

{
  *(undefined ***)(this->ObjectStorage).Pad = &___7__INumericTypeInterface_E__6B_;
  return;
}

// DestroyObject @ 142924f40

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TDefaultNumericTypeInterface<short>,1>::
DestroyObject(TIntrusiveReferenceController<TDefaultNumericTypeInterface<short>,1> *this)

{
  *(undefined ***)(this->ObjectStorage).Pad = &___7__INumericTypeInterface_F__6B_;
  return;
}

// DestroyObject @ 142924f60

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TDefaultNumericTypeInterface<unsigned_short>,1>::DestroyObject
          (TIntrusiveReferenceController<TDefaultNumericTypeInterface<unsigned_short>,1> *this)

{
  *(undefined ***)(this->ObjectStorage).Pad = &___7__INumericTypeInterface_G__6B_;
  return;
}

// DestroyObject @ 142924f80

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TDefaultNumericTypeInterface<int>,1>::
DestroyObject(TIntrusiveReferenceController<TDefaultNumericTypeInterface<int>,1> *this)

{
  *(undefined ***)(this->ObjectStorage).Pad = &___7__INumericTypeInterface_H__6B_;
  return;
}

// DestroyObject @ 142924fa0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TDefaultNumericTypeInterface<unsigned_int>,1>
::DestroyObject(TIntrusiveReferenceController<TDefaultNumericTypeInterface<unsigned_int>,1> *this)

{
  *(undefined ***)(this->ObjectStorage).Pad = &___7__INumericTypeInterface_I__6B_;
  return;
}

// DestroyObject @ 142924fc0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TDefaultNumericTypeInterface<float>,1>::
DestroyObject(TIntrusiveReferenceController<TDefaultNumericTypeInterface<float>,1> *this)

{
  *(undefined ***)(this->ObjectStorage).Pad = &___7__INumericTypeInterface_M__6B_;
  return;
}

// DestroyObject @ 142924fe0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TDefaultNumericTypeInterface<double>,1>::
DestroyObject(TIntrusiveReferenceController<TDefaultNumericTypeInterface<double>,1> *this)

{
  *(undefined ***)(this->ObjectStorage).Pad = &___7__INumericTypeInterface_N__6B_;
  return;
}

// DestroyObject @ 142925000

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TDefaultNumericTypeInterface<__int64>,1>::
DestroyObject(TIntrusiveReferenceController<TDefaultNumericTypeInterface<__int64>,1> *this)

{
  *(undefined ***)(this->ObjectStorage).Pad = &___7__INumericTypeInterface__J__6B_;
  return;
}

// DestroyObject @ 142925020

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TDefaultNumericTypeInterface<unsigned___int64>,1>::DestroyObject
          (TIntrusiveReferenceController<TDefaultNumericTypeInterface<unsigned___int64>,1> *this)

{
  *(undefined ***)(this->ObjectStorage).Pad = &___7__INumericTypeInterface__K__6B_;
  return;
}

// DestroyObject @ 142925040

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SComboBox<TSharedPtr<FString,1>_>,1>::
DestroyObject(TIntrusiveReferenceController<SComboBox<TSharedPtr<FString,1>_>,1> *this)

{
  SComboBox<TSharedPtr<FString,1>_>::~SComboBox<TSharedPtr<FString,1>_>
            ((SComboBox<TSharedPtr<FString,1>_> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142925050

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SComboRow<TSharedPtr<FString,1>_>,1>::
DestroyObject(TIntrusiveReferenceController<SComboRow<TSharedPtr<FString,1>_>,1> *this)

{
  STableRow<TSharedPtr<FString,1>_>::~STableRow<TSharedPtr<FString,1>_>
            ((STableRow<TSharedPtr<FString,1>_> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142925060

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SListView<TSharedPtr<FString,1>_>,1>::
DestroyObject(TIntrusiveReferenceController<SListView<TSharedPtr<FString,1>_>,1> *this)

{
  SListView<TSharedPtr<FString,1>_>::~SListView<TSharedPtr<FString,1>_>
            ((SListView<TSharedPtr<FString,1>_> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142925070

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<STableRow<TSharedPtr<FString,1>_>,1>::
DestroyObject(TIntrusiveReferenceController<STableRow<TSharedPtr<FString,1>_>,1> *this)

{
  STableRow<TSharedPtr<FString,1>_>::~STableRow<TSharedPtr<FString,1>_>
            ((STableRow<TSharedPtr<FString,1>_> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142925080

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TTableViewMetadata<TSharedPtr<FString,1>_>,1>
::DestroyObject(TIntrusiveReferenceController<TTableViewMetadata<TSharedPtr<FString,1>_>,1> *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((this->ObjectStorage).Pad + 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  *(undefined ***)(this->ObjectStorage).Pad = &___7ISlateMetaData__6B_;
  return;
}

// DestroyObject @ 1429250d0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SCircularThrobber,1>::DestroyObject
          (TIntrusiveReferenceController<SCircularThrobber,1> *this)

{
  SCircularThrobber::~SCircularThrobber((SCircularThrobber *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1429250e0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SErrorText,1>::DestroyObject
          (TIntrusiveReferenceController<SErrorText,1> *this)

{
  SErrorText::~SErrorText((SErrorText *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1429250f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SMultiLineEditableText,1>::DestroyObject
          (TIntrusiveReferenceController<SMultiLineEditableText,1> *this)

{
  SMultiLineEditableText::~SMultiLineEditableText((SMultiLineEditableText *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142925100

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SScrollBar,1>::DestroyObject
          (TIntrusiveReferenceController<SScrollBar,1> *this)

{
  SScrollBar::~SScrollBar((SScrollBar *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142925110

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SScrollBarTrack,1>::DestroyObject
          (TIntrusiveReferenceController<SScrollBarTrack,1> *this)

{
  void *pvVar1;
  
  DestructItems<TUniquePtr<SScrollBarTrack::FSlot,TDefaultDelete<SScrollBarTrack::FSlot>_>,int>
            (*(TUniquePtr<SScrollBarTrack::FSlot,TDefaultDelete<SScrollBarTrack::FSlot>_> **)
              ((this->ObjectStorage).Pad + 0x238),*(int *)((this->ObjectStorage).Pad + 0x240));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x238);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FChildren::~FChildren((FChildren *)((this->ObjectStorage).Pad + 0x218));
  SPanel::~SPanel((SPanel *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142925170

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SScrollPanel,1>::DestroyObject
          (TIntrusiveReferenceController<SScrollPanel,1> *this)

{
  void *pvVar1;
  
  DestructItems<TUniquePtr<SScrollBox::FSlot,TDefaultDelete<SScrollBox::FSlot>_>,int>
            (*(TUniquePtr<SScrollBox::FSlot,TDefaultDelete<SScrollBox::FSlot>_> **)
              ((this->ObjectStorage).Pad + 0x240),*(int *)((this->ObjectStorage).Pad + 0x248));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x240);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FChildren::~FChildren((FChildren *)((this->ObjectStorage).Pad + 0x220));
  SPanel::~SPanel((SPanel *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1429251d0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SSlider,1>::DestroyObject
          (TIntrusiveReferenceController<SSlider,1> *this)

{
  SSlider::~SSlider((SSlider *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1429e3d30

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FHittestGrid,1>::DestroyObject
          (TIntrusiveReferenceController<FHittestGrid,1> *this)

{
  FHittestGrid::~FHittestGrid((FHittestGrid *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1429e3d40

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FSimulatedNavigationMetaData,1>::DestroyObject
          (TIntrusiveReferenceController<FSimulatedNavigationMetaData,1> *this)

{
  FSimulatedNavigationMetaData::~FSimulatedNavigationMetaData
            ((FSimulatedNavigationMetaData *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1429e3d50

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FString,1>::DestroyObject
          (TIntrusiveReferenceController<FString,1> *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  pvVar1 = *(void **)(this->ObjectStorage).Pad;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// DestroyObject @ 1429e3d70

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SHyperlink,1>::DestroyObject
          (TIntrusiveReferenceController<SHyperlink,1> *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((this->ObjectStorage).Pad + 0x4b0));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x4b8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((this->ObjectStorage).Pad + 0x4b0));
  SButton::~SButton((SButton *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1429e3dc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SMultiLineEditableTextBox,1>::DestroyObject
          (TIntrusiveReferenceController<SMultiLineEditableTextBox,1> *this)

{
  SMultiLineEditableTextBox::~SMultiLineEditableTextBox
            ((SMultiLineEditableTextBox *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1429e3dd0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SNotificationBackground,1>::DestroyObject
          (TIntrusiveReferenceController<SNotificationBackground,1> *this)

{
  SBorder::~SBorder((SBorder *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1429e3de0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SNotificationItemExternalImpl,1>::
DestroyObject(TIntrusiveReferenceController<SNotificationItemExternalImpl,1> *this)

{
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x660));
  SNotificationItemImpl::~SNotificationItemImpl((SNotificationItemImpl *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1429e3e10

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SNotificationItemImpl,1>::DestroyObject
          (TIntrusiveReferenceController<SNotificationItemImpl,1> *this)

{
  SNotificationItemImpl::~SNotificationItemImpl((SNotificationItemImpl *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1429e3e20

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<STooltipPresenter,1>::DestroyObject
          (TIntrusiveReferenceController<STooltipPresenter,1> *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((this->ObjectStorage).Pad + 0x240);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  FChildren::~FChildren((FChildren *)((this->ObjectStorage).Pad + 0x218));
  SPanel::~SPanel((SPanel *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142a26740

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SListPanel,1>::DestroyObject
          (TIntrusiveReferenceController<SListPanel,1> *this)

{
  void *pvVar1;
  
  *(undefined ***)(this->ObjectStorage).Pad = &___7SListPanel__6B_;
  DestructItems<TUniquePtr<SListPanel::FSlot,TDefaultDelete<SListPanel::FSlot>_>,int>
            (*(TUniquePtr<SListPanel::FSlot,TDefaultDelete<SListPanel::FSlot>_> **)
              ((this->ObjectStorage).Pad + 0x238),*(int *)((this->ObjectStorage).Pad + 0x240));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x238);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FChildren::~FChildren((FChildren *)((this->ObjectStorage).Pad + 0x218));
  SPanel::~SPanel((SPanel *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142a267a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<STableColumnHeader,1>::DestroyObject
          (TIntrusiveReferenceController<STableColumnHeader,1> *this)

{
  STableColumnHeader::~STableColumnHeader((STableColumnHeader *)&this->ObjectStorage);
  return;
}

