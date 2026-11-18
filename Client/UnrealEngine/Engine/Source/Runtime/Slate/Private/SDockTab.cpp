// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 104

// ~SDockTab @ 142701da0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SDockTab::~SDockTab(SDockTab *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  void *pvVar3;
  ITextData *pIVar4;
  TReferenceControllerBase<1> *pTVar5;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->IconWidget).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->LabelSuffix).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->LabelWidget).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->DraggedOverDockingArea).SharedReferenceCount.ReferenceController);
  FCurveSequence::~FCurveSequence(&this->FlashTabCurve);
  FCurveSequence::~FCurveSequence(&this->SpawnAnimCurve);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->IconColor).Getter);
  pvVar3 = *(void **)&(this->IconColor).Getter.field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->IconColor).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->TabColorScale).Getter);
  pvVar3 = *(void **)&(this->TabColorScale).Getter.field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->TabColorScale).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ContentAreaPadding).Getter);
  pvVar3 = *(void **)&(this->ContentAreaPadding).Getter.field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ContentAreaPadding).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnTabRenamed);
  pvVar3 = *(void **)&(this->OnTabRenamed).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnTabRenamed);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnPersistVisualState);
  pvVar3 = *(void **)&(this->OnPersistVisualState).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnPersistVisualState);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnExtendContextMenu);
  pvVar3 = *(void **)&(this->OnExtendContextMenu).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnExtendContextMenu);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnTabDraggedOverDockArea);
  pvVar3 = *(void **)&(this->OnTabDraggedOverDockArea).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnTabDraggedOverDockArea);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnTabRelocated);
  pvVar3 = *(void **)&(this->OnTabRelocated).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnTabRelocated);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnTabDrawerOpenedEvent);
  pvVar3 = *(void **)&(this->OnTabDrawerOpenedEvent).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnTabDrawerOpenedEvent);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnTabDrawerClosedEvent);
  pvVar3 = *(void **)&(this->OnTabDrawerClosedEvent).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnTabDrawerClosedEvent);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnCanCloseTab);
  pvVar3 = *(void **)&(this->OnCanCloseTab).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnCanCloseTab);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnTabActivated);
  pvVar3 = *(void **)&(this->OnTabActivated).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnTabActivated);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnTabClosed);
  pvVar3 = *(void **)&(this->OnTabClosed).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnTabClosed);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->TabIcon).Getter);
  pvVar3 = *(void **)&(this->TabIcon).Getter.field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->TabIcon).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->TabLabelSuffix).Getter);
  pvVar3 = *(void **)&(this->TabLabelSuffix).Getter.field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->TabLabelSuffix).Getter);
  pIVar4 = (this->TabLabelSuffix).Value.TextData.Reference;
  if (pIVar4 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar4 + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->TabLabel).Getter);
  pvVar3 = *(void **)&(this->TabLabel).Getter.field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->TabLabel).Getter);
  pIVar4 = (this->TabLabel).Value.TextData.Reference;
  if (pIVar4 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar4 + 0x10))();
  }
  pTVar5 = (this->ParentDockingAreaPtr).WeakReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar5->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
    }
  }
  pTVar5 = (this->ParentPtr).WeakReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar5->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->TitleBarContentRight).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->TabWellContentRight).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->TabWellContentLeft).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Content).SharedReferenceCount.ReferenceController);
  pTVar5 = (this->MyTabManager).WeakReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar5->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
    }
  }
  pTVar5 = (this->UpdateStyleTimerHandle).WeakReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar5->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
    }
  }
  pTVar5 = (this->DragDropTimerHandle).WeakReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar5->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
    }
  }
  SBorder::~SBorder((SBorder *)this);
  return;
}

// SDockTab @ 142847c80

/* WARNING: Enum "Type": Some values do not have unique names */

SDockTab * __thiscall SDockTab::SDockTab(SDockTab *this)

{
  atomic<int> *paVar1;
  TReferenceControllerBase<1> *pTVar2;
  ITextData *pIVar3;
  FLinearColor FVar4;
  FSharedReferencer<1> FVar5;
  FArguments *pFVar6;
  TSharedRef<SSpacer,1> *pTVar7;
  FText *pFVar8;
  undefined8 local_res8;
  FLLMScope local_res10 [2];
  FName local_res18;
  FMemScope local_res20;
  TSharedRef<SSpacer,1> local_268;
  TSlateDecl<SSpacer,RequiredArgs::T0RequiredArgs> local_258;
  undefined1 local_240 [528];
  undefined1 local_30 [24];
  
  SBorder::SBorder((SBorder *)this);
  this->_padding_ = (longlong)&___7SDockTab__6B_;
  (this->DragDropTimerHandle).Object = (FActiveTimerHandle *)0x0;
  (this->DragDropTimerHandle).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->UpdateStyleTimerHandle).Object = (FActiveTimerHandle *)0x0;
  (this->UpdateStyleTimerHandle).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->MyTabManager).Object = (FTabManager *)0x0;
  (this->MyTabManager).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->bIsTabNameHidden = false;
  pFVar6 = SSpacer::FArguments::FArguments((FArguments *)local_240);
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_res20,&local_res18,true);
  TSlateDecl<SSpacer,RequiredArgs::T0RequiredArgs>::TSlateDecl<SSpacer,RequiredArgs::T0RequiredArgs>
            (&local_258,"SSpacer",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Docking\\SDockTab.cpp"
             ,399,(T0RequiredArgs *)&local_res8);
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res10);
  pTVar7 = TSlateDecl<SSpacer,RequiredArgs::T0RequiredArgs>::operator<<=
                     (&local_258,&local_268,pFVar6);
  (this->Content).Object = (SWidget *)pTVar7->Object;
  pTVar2 = (pTVar7->SharedReferenceCount).ReferenceController;
  (this->Content).SharedReferenceCount.ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_268.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_258._Widget.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_30);
  if ((void *)local_30._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_30._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_30);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_240);
  (this->TabWellContentLeft).Object = SNullWidget::NullWidget.Object;
  FVar5 = SNullWidget::NullWidget.SharedReferenceCount;
  (this->TabWellContentLeft).SharedReferenceCount.ReferenceController =
       SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
  if (FVar5.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar5.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  (this->TabWellContentRight).Object = SNullWidget::NullWidget.Object;
  FVar5 = SNullWidget::NullWidget.SharedReferenceCount;
  (this->TabWellContentRight).SharedReferenceCount.ReferenceController =
       SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
  if (FVar5.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar5.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  (this->TitleBarContentRight).Object = SNullWidget::NullWidget.Object;
  FVar5 = SNullWidget::NullWidget.SharedReferenceCount;
  (this->TitleBarContentRight).SharedReferenceCount.ReferenceController =
       SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
  if (FVar5.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar5.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  (this->LayoutIdentifier).InstanceId = -1;
  (this->LayoutIdentifier).Flags = SaveLayout;
  local_res8 = 0;
  (this->LayoutIdentifier).TabType.ComparisonIndex = 0;
  (this->LayoutIdentifier).TabType.Number = 0;
  this->TabRole = PanelTab;
  (this->ParentPtr).Object = (SDockingTabWell *)0x0;
  (this->ParentPtr).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->ParentDockingAreaPtr).Object = (SDockingArea *)0x0;
  (this->ParentDockingAreaPtr).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pFVar8 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)&local_268,L"DockTab",L"DefaultTabTitle",L"UNNAMED");
  FText::FText(&(this->TabLabel).Value,pFVar8);
  (this->TabLabel).bIsSet = true;
  *(undefined8 *)&(this->TabLabel).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->TabLabel).Getter = 0;
  *(undefined8 *)&(this->TabLabel).Getter.field_0x8 = 0;
  if (local_268.Object != (SSpacer *)0x0) {
    (**(code **)((local_268.Object)->_padding_ + 0x10))();
  }
  pFVar8 = FText::GetEmpty();
  (this->TabLabelSuffix).Value.TextData.Reference = (ITextData *)0x0;
  pIVar3 = (pFVar8->TextData).Reference;
  (this->TabLabelSuffix).Value.TextData.Reference = pIVar3;
  if (pIVar3 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar3 + 8))(pIVar3,&local_res8);
  }
  (this->TabLabelSuffix).Value.Flags = pFVar8->Flags;
  (this->TabLabelSuffix).bIsSet = true;
  *(undefined8 *)&(this->TabLabelSuffix).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->TabLabelSuffix).Getter = 0;
  *(undefined8 *)&(this->TabLabelSuffix).Getter.field_0x8 = 0;
  (this->TabIcon).Value = (FSlateBrush *)0x0;
  (this->TabIcon).bIsSet = false;
  *(undefined8 *)&(this->TabIcon).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->TabIcon).Getter = 0;
  *(undefined8 *)&(this->TabIcon).Getter.field_0x8 = 0;
  *(undefined8 *)&(this->OnTabClosed).field_0x10 = 0;
  *(undefined8 *)&this->OnTabClosed = 0;
  *(undefined8 *)&(this->OnTabClosed).field_0x8 = 0;
  *(undefined8 *)&(this->OnTabActivated).field_0x10 = 0;
  *(undefined8 *)&this->OnTabActivated = 0;
  *(undefined8 *)&(this->OnTabActivated).field_0x8 = 0;
  *(undefined8 *)&(this->OnCanCloseTab).field_0x10 = 0;
  *(undefined8 *)&this->OnCanCloseTab = 0;
  *(undefined8 *)&(this->OnCanCloseTab).field_0x8 = 0;
  *(undefined8 *)&this->OnTabDrawerClosedEvent = 0;
  *(undefined8 *)&(this->OnTabDrawerClosedEvent).field_0x8 = 0;
  *(undefined4 *)&(this->OnTabDrawerClosedEvent).field_0x10 = 0;
  *(undefined8 *)&this->OnTabDrawerOpenedEvent = 0;
  *(undefined8 *)&(this->OnTabDrawerOpenedEvent).field_0x8 = 0;
  *(undefined4 *)&(this->OnTabDrawerOpenedEvent).field_0x10 = 0;
  *(undefined8 *)&this->OnTabRelocated = 0;
  *(undefined8 *)&(this->OnTabRelocated).field_0x8 = 0;
  *(undefined4 *)&(this->OnTabRelocated).field_0x10 = 0;
  *(undefined8 *)&this->OnTabDraggedOverDockArea = 0;
  *(undefined8 *)&(this->OnTabDraggedOverDockArea).field_0x8 = 0;
  *(undefined4 *)&(this->OnTabDraggedOverDockArea).field_0x10 = 0;
  *(undefined8 *)&this->OnExtendContextMenu = 0;
  *(undefined8 *)&(this->OnExtendContextMenu).field_0x8 = 0;
  *(undefined4 *)&(this->OnExtendContextMenu).field_0x10 = 0;
  *(undefined8 *)&this->OnPersistVisualState = 0;
  *(undefined8 *)&(this->OnPersistVisualState).field_0x8 = 0;
  *(undefined4 *)&(this->OnPersistVisualState).field_0x10 = 0;
  *(undefined8 *)&this->OnTabRenamed = 0;
  *(undefined8 *)&(this->OnTabRenamed).field_0x8 = 0;
  *(undefined4 *)&(this->OnTabRenamed).field_0x10 = 0;
  (this->ContentAreaPadding).bIsSet = true;
  (this->ContentAreaPadding).Value.Left = 2.0;
  (this->ContentAreaPadding).Value.Top = 2.0;
  (this->ContentAreaPadding).Value.Right = 2.0;
  (this->ContentAreaPadding).Value.Bottom = 2.0;
  *(undefined8 *)&(this->ContentAreaPadding).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->ContentAreaPadding).Getter = 0;
  *(undefined8 *)&(this->ContentAreaPadding).Getter.field_0x8 = 0;
  this->bShouldAutosize = false;
  FVar4 = FLinearColor::Transparent;
  (this->TabColorScale).bIsSet = true;
  (this->TabColorScale).Value.field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar4.field0_0x0;
  *(undefined8 *)&(this->TabColorScale).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->TabColorScale).Getter = 0;
  *(undefined8 *)&(this->TabColorScale).Getter.field_0x8 = 0;
  *(undefined8 *)&(this->IconColor).Value.field0_0x0 = 0;
  *(undefined8 *)((longlong)&(this->IconColor).Value.field0_0x0 + 8) = 0;
  (this->IconColor).bIsSet = false;
  *(undefined8 *)&(this->IconColor).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->IconColor).Getter = 0;
  *(undefined8 *)&(this->IconColor).Getter.field_0x8 = 0;
  FCurveSequence::FCurveSequence(&this->SpawnAnimCurve);
  FCurveSequence::FCurveSequence(&this->FlashTabCurve);
  (this->DraggedOverDockingArea).Object = (SDockingArea *)0x0;
  (this->DraggedOverDockingArea).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->LabelWidget).Object = (STextBlock *)0x0;
  (this->LabelWidget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->LabelSuffix).Object = (STextBlock *)0x0;
  (this->LabelSuffix).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->IconWidget).Object = (SImage *)0x0;
  (this->IconWidget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->LastActivationTime = 0.0;
  return this;
}

// ActivateInParent @ 142850000

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SDockTab::ActivateInParent(SDockTab *this,ETabActivationCause param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  SWidget *pSVar2;
  SDockingTabWell *this_00;
  SDockTab *pSVar3;
  longlong *plVar4;
  longlong lVar5;
  atomic<int> aVar6;
  char cVar7;
  atomic<int> aVar8;
  TSharedRef<SWidget,1> *pTVar9;
  FSlateApplication *this_01;
  TReferenceControllerBase<1> *pTVar10;
  atomic<int> *paVar11;
  TReferenceControllerBase<1> *pTVar12;
  bool bVar13;
  TReferenceControllerBase<1> *local_res8;
  FReadAccessScope local_68;
  TSharedRef<SWidget,1> local_50;
  
  pTVar1 = (this->ParentPtr).WeakReferenceCount.ReferenceController;
  pTVar12 = (TReferenceControllerBase<1> *)0x0;
  pTVar10 = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar6 = pTVar1->SharedReferenceCount;
    do {
      pTVar10 = pTVar12;
      if (aVar6 == (atomic<int>)0x0) goto LAB_142850057;
      LOCK();
      aVar8 = pTVar1->SharedReferenceCount;
      bVar13 = aVar6 == aVar8;
      if (bVar13) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar6 + 1);
        aVar8 = aVar6;
      }
      UNLOCK();
      aVar6 = aVar8;
    } while (!bVar13);
    this_00 = (this->ParentPtr).Object;
    pTVar10 = pTVar1;
    if (this_00 != (SDockingTabWell *)0x0) {
      pTVar9 = TSharedFromThis<SWidget,1>::AsShared
                         ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_50);
      pTVar10 = (pTVar9->SharedReferenceCount).ReferenceController;
      pSVar3 = (SDockTab *)pTVar9->Object;
      if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_50.SharedReferenceCount.ReferenceController);
      }
      else {
        LOCK();
        pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
        UNLOCK();
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_50.SharedReferenceCount.ReferenceController);
        LOCK();
        pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_68.DestructionSentinel._0_8_ = pSVar3;
      local_68.DestructionSentinel.Accessor = (FMRSWRecursiveAccessDetector *)pTVar10;
      SDockingTabWell::BringTabToFront(this_00,(TSharedPtr<SDockTab,1> *)&local_68);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
      pTVar10 = pTVar1;
    }
  }
LAB_142850057:
  pTVar9 = TSharedFromThis<SWidget,1>::AsShared
                     ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_50);
  pTVar1 = (pTVar9->SharedReferenceCount).ReferenceController;
  pSVar2 = pTVar9->Object;
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    paVar11 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar11 = &pTVar1->SharedReferenceCount;
    LOCK();
    *paVar11 = (atomic<int>)((int)*paVar11 + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_50.SharedReferenceCount.ReferenceController);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnTabActivated,
             &local_68);
  if ((*(int *)&(this->OnTabActivated).field_0x10 != 0) &&
     (plVar4 = *(longlong **)&(this->OnTabActivated).field_0x8, plVar4 != (longlong *)0x0)) {
    lVar5 = *plVar4;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar11 = (atomic<int>)((int)*paVar11 + 1);
      UNLOCK();
    }
    local_50.Object = pSVar2;
    local_50.SharedReferenceCount.ReferenceController = pTVar1;
    (**(code **)(lVar5 + 0x68))(plVar4,&local_50,param_1);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_68);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if (param_1 == UserClickedOnTab) {
    local_res8 = (this->Content).SharedReferenceCount.ReferenceController;
    pSVar2 = (this->Content).Object;
    if (local_res8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_res8->SharedReferenceCount = (atomic<int>)((int)local_res8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar12 = (TReferenceControllerBase<1> *)&DAT_00000001;
    cVar7 = (**(code **)(pSVar2->_padding_ + 0x198))();
    if (cVar7 != '\0') {
      bVar13 = false;
      goto LAB_1428501a2;
    }
  }
  bVar13 = true;
LAB_1428501a2:
  if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_res8);
  }
  if (!bVar13) {
    this_01 = FSlateApplication::Get();
    local_68.DestructionSentinel._0_8_ = (this->Content).Object;
    pTVar1 = (this->Content).SharedReferenceCount.ReferenceController;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_68.DestructionSentinel.Accessor = (FMRSWRecursiveAccessDetector *)pTVar1;
    FSlateApplication::SetKeyboardFocus(this_01,(TSharedPtr<SWidget,1> *)&local_68,SetDirectly);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_68.DestructionSentinel.Accessor);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  return;
}

// CanCloseTab @ 1428571f0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall SDockTab::CanCloseTab(SDockTab *this)

{
  FTabManager *this_00;
  atomic<int> aVar1;
  atomic<int> aVar2;
  TSharedRef<SWidget_const_,1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  TSharedRef<SDockTab_const_,1> local_28;
  TSharedRef<SWidget_const_,1> local_18;
  
  pTVar6 = (TReferenceControllerBase<1> *)0x0;
  if (this->bCanEverClose == false) {
    return false;
  }
  pTVar5 = (this->MyTabManager).WeakReferenceCount.ReferenceController;
  pTVar4 = pTVar5;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar5->SharedReferenceCount;
    do {
      pTVar4 = pTVar6;
      if (aVar1 == (atomic<int>)0x0) goto LAB_142857247;
      LOCK();
      aVar2 = pTVar5->SharedReferenceCount;
      bVar7 = aVar1 == aVar2;
      if (bVar7) {
        pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar7);
    this_00 = (this->MyTabManager).Object;
    pTVar4 = pTVar5;
    if (this_00 != (FTabManager *)0x0) {
      pTVar3 = TSharedFromThis<SWidget,1>::AsShared
                         ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_18);
      local_28.Object = (SDockTab *)pTVar3->Object;
      local_28.SharedReferenceCount.ReferenceController =
           (pTVar3->SharedReferenceCount).ReferenceController;
      if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
      pTVar6 = (TReferenceControllerBase<1> *)&DAT_00000001;
      bVar7 = FTabManager::IsTabCloseable(this_00,&local_28);
      if (!bVar7) {
        bVar7 = true;
        goto LAB_14285724a;
      }
    }
  }
LAB_142857247:
  bVar7 = false;
  pTVar5 = pTVar4;
LAB_14285724a:
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  if (bVar7) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  }
  else {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    bVar7 = IsTabLocked(this);
    if ((!bVar7) &&
       ((bVar7 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                           ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnCanCloseTab),
        !bVar7 || (bVar7 = TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::Execute
                                     (&this->OnCanCloseTab), bVar7)))) {
      return true;
    }
  }
  return false;
}

// CanCloseTab @ 142857330

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall SDockTab::CanCloseTab(SDockTab *this,bool param_1)

{
  FTabManager *this_00;
  atomic<int> aVar1;
  atomic<int> aVar2;
  TSharedRef<SWidget_const_,1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  TSharedRef<SDockTab_const_,1> local_38;
  TSharedRef<SWidget_const_,1> local_28;
  
  pTVar6 = (TReferenceControllerBase<1> *)0x0;
  if (this->bCanEverClose == false) {
    return false;
  }
  pTVar5 = (this->MyTabManager).WeakReferenceCount.ReferenceController;
  pTVar4 = pTVar5;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar5->SharedReferenceCount;
    do {
      pTVar4 = pTVar6;
      if (aVar1 == (atomic<int>)0x0) goto LAB_142857381;
      LOCK();
      aVar2 = pTVar5->SharedReferenceCount;
      bVar7 = aVar1 == aVar2;
      if (bVar7) {
        pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar7);
    this_00 = (this->MyTabManager).Object;
    pTVar4 = pTVar5;
    if (this_00 != (FTabManager *)0x0) {
      pTVar3 = TSharedFromThis<SWidget,1>::AsShared
                         ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_28);
      local_38.Object = (SDockTab *)pTVar3->Object;
      local_38.SharedReferenceCount.ReferenceController =
           (pTVar3->SharedReferenceCount).ReferenceController;
      if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_28.SharedReferenceCount.ReferenceController);
      pTVar6 = (TReferenceControllerBase<1> *)&DAT_00000001;
      bVar7 = FTabManager::IsTabCloseable(this_00,&local_38);
      if (!bVar7) {
        bVar7 = true;
        goto LAB_142857384;
      }
    }
  }
LAB_142857381:
  bVar7 = false;
  pTVar5 = pTVar4;
LAB_142857384:
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
  }
  if (bVar7) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  }
  else {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    if ((param_1) || (bVar7 = IsTabLocked(this), !bVar7)) {
      bVar7 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                        ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnCanCloseTab);
      if (bVar7) {
        bVar7 = TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::Execute
                          (&this->OnCanCloseTab);
        return bVar7;
      }
      return true;
    }
  }
  return false;
}

// CheckTabAllowed @ 142857540

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SDockTab::CheckTabAllowed(SDockTab *this)

{
  FTabManager *this_00;
  atomic<int> aVar1;
  atomic<int> aVar2;
  TSharedRef<FNamePermissionList,1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  FString local_18;
  
  if ((this->LayoutIdentifier).TabType != (FName)0x0) {
    pTVar4 = (this->MyTabManager).WeakReferenceCount.ReferenceController;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      aVar1 = pTVar4->SharedReferenceCount;
      do {
        if (aVar1 == (atomic<int>)0x0) {
          pTVar4 = (TReferenceControllerBase<1> *)0x0;
          goto LAB_142857580;
        }
        LOCK();
        aVar2 = pTVar4->SharedReferenceCount;
        bVar5 = aVar1 == aVar2;
        if (bVar5) {
          pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
          aVar2 = aVar1;
        }
        UNLOCK();
        aVar1 = aVar2;
      } while (!bVar5);
      this_00 = (this->MyTabManager).Object;
      if (this_00 != (FTabManager *)0x0) {
        pTVar3 = FTabManager::GetTabPermissionList(this_00);
        bVar5 = FNamePermissionList::PassesFilter(pTVar3->Object,(this->LayoutIdentifier).TabType);
        if (!bVar5) {
          if (5 < (byte)LogSlate._0_1_) {
            ::FName::ToString(&(this->LayoutIdentifier).TabType,&local_18);
            UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogSlate);
            if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_18.Data.AllocatorInstance.Data);
            }
          }
          RequestCloseTab(this);
        }
      }
    }
LAB_142857580:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  }
  return;
}

// Construct @ 14285add0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SDockTab::Construct(SDockTab *this,FArguments *param_1)

{
  longlong *plVar1;
  undefined1 *puVar2;
  TAttribute<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  SWidget *pSVar5;
  FScriptContainerElement *pFVar6;
  SImage *pSVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  code *pcVar12;
  TReferenceControllerBase<1> *pTVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  double dVar18;
  ForAnyElementType _Src;
  ETabRole EVar19;
  undefined4 uVar20;
  FCurveSequence *pFVar21;
  ISlateStyle *pIVar22;
  FName *pFVar23;
  FDockTabStyle *pFVar24;
  FArguments *pFVar25;
  FArguments *pFVar26;
  FSlotArguments *pFVar27;
  FArguments *pFVar28;
  TSharedRef<SImage,1> *pTVar29;
  FArguments *pFVar30;
  TSharedRef<SComplexGradient,1> *pTVar31;
  TSharedRef<SBorder,1> *pTVar32;
  undefined8 *puVar33;
  TSharedRef<SWidget_const_,1> *pTVar34;
  ulong64 uVar35;
  FSlotArguments *pFVar36;
  FArguments *pFVar37;
  TAttribute<FText> *pTVar38;
  FSlot *this_00;
  FMargin *pFVar39;
  FName FVar40;
  FName FVar41;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> *this_01;
  FSlotArguments *pFVar42;
  TAttribute<TSharedPtr<IToolTip,1>_> *pTVar43;
  FArguments *pFVar44;
  ETextOverflowPolicy *pEVar45;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> *pTVar46;
  TSharedRef<STextBlock,1> *pTVar47;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> *pTVar48;
  TSharedRef<SHorizontalBox,1> *pTVar49;
  FArguments *pFVar50;
  TSharedRef<SWidget,1> *pTVar51;
  FArguments *pFVar52;
  TSlateDecl<SSpacer,RequiredArgs::T0RequiredArgs> *this_02;
  TSharedRef<SSpacer,1> *pTVar53;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> *this_03;
  TSharedRef<SButton,1> *pTVar54;
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs> *this_04;
  TSharedRef<SOverlay,1> *pTVar55;
  FSlateColor *this_05;
  longlong lVar56;
  FSlotArguments *pFVar57;
  int iVar58;
  FSlotArguments *pFVar59;
  uint uVar60;
  FSlotArguments *pFVar61;
  undefined1 auStackY_3c28 [32];
  ETextOverflowPolicy local_3be8 [16];
  TReferenceControllerBase<1> *local_3bd8;
  undefined4 uStack_3bd0;
  float fStack_3bcc;
  T0RequiredArgs local_3bc8;
  T0RequiredArgs local_3bc7;
  T0RequiredArgs local_3bc6;
  T0RequiredArgs local_3bc5;
  T0RequiredArgs local_3bc4;
  T0RequiredArgs local_3bc3;
  T0RequiredArgs local_3bc2;
  T0RequiredArgs local_3bc1;
  T0RequiredArgs local_3bc0;
  T0RequiredArgs local_3bbf;
  T0RequiredArgs local_3bbe;
  T0RequiredArgs local_3bbd;
  undefined4 local_3bbc;
  FArguments *local_3bb8;
  FName local_3bb0;
  FArguments *local_3ba8;
  TReferenceControllerBase<1> *local_3b98;
  undefined4 uStack_3b90;
  uint uStack_3b8c;
  FLLMScope local_3b88;
  FLLMScope local_3b84;
  FLLMScope local_3b80;
  FLLMScope local_3b7c;
  SWidget *local_3b78;
  TReferenceControllerBase<1> *pTStack_3b70;
  TSharedRef<SWidget,1> local_3b68;
  SWidget *local_3b58;
  FMemScope local_3b50;
  FName local_3b48;
  SImage *local_3b40;
  FSharedReferencer<1> local_3b38;
  SComplexGradient *local_3b30;
  FSharedReferencer<1> local_3b28;
  SBorder *local_3b20;
  FSharedReferencer<1> local_3b18;
  FName local_3b10;
  FName local_3b08;
  ForAnyElementType local_3b00;
  undefined8 local_3af8;
  bool local_3af0;
  undefined1 local_3ae8 [8];
  void *pvStack_3ae0;
  undefined8 local_3ad8;
  FArguments *local_3ad0;
  TSharedRef<SWidget,1> local_3ac8;
  FButtonStyle *local_3ab8;
  uchar local_3ab0;
  undefined1 local_3aaf;
  undefined1 local_3aa8 [8];
  void *pvStack_3aa0;
  undefined8 local_3a98;
  uchar local_3a90;
  undefined1 local_3a8f;
  undefined1 local_3a88 [8];
  void *pvStack_3a80;
  undefined8 local_3a78;
  undefined1 local_3a70 [8];
  FDelegateAllocation local_3a68;
  TReferenceControllerBase<1> *local_3a58;
  undefined4 uStack_3a50;
  uint uStack_3a4c;
  TReferenceControllerBase<1> *local_3a48;
  undefined4 uStack_3a40;
  uint uStack_3a3c;
  SSpacer *local_3a38;
  TReferenceControllerBase<1> *pTStack_3a30;
  SOverlay *local_3a28;
  TReferenceControllerBase<1> *pTStack_3a20;
  TReferenceControllerBase<1> *local_3a18;
  undefined4 uStack_3a10;
  uint uStack_3a0c;
  FSlateBrush *local_3a08;
  undefined1 local_3a00;
  undefined1 local_39f8 [8];
  void *pvStack_39f0;
  undefined8 local_39e8;
  undefined8 local_39e0;
  undefined8 uStack_39d8;
  undefined4 local_39d0;
  bool local_39cc;
  undefined1 local_39c8 [8];
  void *pvStack_39c0;
  undefined4 local_39b8;
  undefined4 local_39b0 [2];
  undefined4 local_39a8 [2];
  undefined4 local_39a0 [2];
  undefined4 local_3998 [2];
  undefined4 local_3990 [2];
  undefined4 local_3988 [2];
  undefined4 local_3980 [2];
  undefined4 local_3978 [2];
  FName local_3970;
  FName local_3968;
  FMemScope local_3960;
  FMemScope local_3958;
  FSlotArguments *local_3950;
  FMemScope local_3948;
  undefined4 local_3940 [2];
  FMemScope local_3938;
  undefined4 local_3930 [2];
  undefined4 local_3928 [2];
  FSlotArguments *local_3920;
  FArguments *local_3918;
  double local_3910;
  double dStack_3908;
  undefined1 local_3900;
  undefined1 local_38f8;
  undefined1 local_38f0 [8];
  void *pvStack_38e8;
  undefined8 local_38e0;
  double local_38d8;
  double dStack_38d0;
  undefined1 local_38c8;
  undefined1 local_38c0 [8];
  void *pvStack_38b8;
  undefined8 local_38b0;
  TAttribute<EVisibility> local_38a8;
  TAttribute<float> local_3888;
  TAttribute<float> local_3868;
  FMargin local_3848;
  initializer_list<FLinearColor> local_3838;
  TSharedRef<SWidget,1> local_3828;
  TSharedRef<SWidget,1> local_3818;
  TSharedRef<SWidget,1> local_3808;
  TSharedRef<SWidget,1> local_37f8;
  undefined1 local_37e8 [16];
  FDestructionSentinel local_37d8;
  FDelegateAllocation *local_37c0;
  FDestructionSentinel local_37b8;
  FDelegateAllocation *local_37a0;
  FDestructionSentinel local_3798;
  undefined1 *local_3780;
  TAttribute<FMargin> local_3778;
  TAttribute<FMargin> local_3748;
  code *local_3718;
  longlong lStack_3710;
  code *local_3708;
  TReferenceControllerBase<1> *pTStack_3700;
  TSharedRef<SWidget,1> local_36f8;
  code *local_36e8;
  TReferenceControllerBase<1> *pTStack_36e0;
  code *local_36d8;
  TReferenceControllerBase<1> *pTStack_36d0;
  TSharedRef<SOverlay,1> local_36c8;
  TSharedRef<SHorizontalBox,1> local_36b8;
  TSharedRef<SButton,1> local_36a8;
  TSharedRef<SSpacer,1> local_3698;
  TSharedRef<SHorizontalBox,1> local_3688;
  TSharedRef<STextBlock,1> local_3678;
  TSharedRef<STextBlock,1> local_3668;
  TSharedRef<SBorder,1> local_3658;
  TSharedRef<SImage,1> local_3648;
  TSharedRef<SBorder,1> local_3638;
  TSharedRef<SComplexGradient,1> local_3628;
  FName local_3618;
  FName local_3610;
  SWidget *local_3608;
  TReferenceControllerBase<1> *pTStack_3600;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_35f8;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_35e0;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_35c8;
  TSlateDecl<SComplexGradient,RequiredArgs::T0RequiredArgs> local_35b0;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_3598;
  SWidget *local_3580;
  TReferenceControllerBase<1> *pTStack_3578;
  SWidget *local_3570;
  TReferenceControllerBase<1> *pTStack_3568;
  code *local_3558;
  longlong lStack_3550;
  code *local_3548;
  longlong lStack_3540;
  code *local_3538;
  longlong lStack_3530;
  code *local_3528;
  longlong lStack_3520;
  code *local_3518;
  longlong lStack_3510;
  TSharedRef<SWidget_const_,1> local_3508;
  code *local_34f8;
  longlong lStack_34f0;
  code *local_34e8;
  longlong lStack_34e0;
  code *local_34d8;
  longlong lStack_34d0;
  code *local_34c8;
  longlong lStack_34c0;
  code *local_34b8;
  longlong lStack_34b0;
  code *local_34a8;
  longlong lStack_34a0;
  TSharedRef<SWidget_const_,1> local_3498;
  TAttribute<TSharedPtr<IToolTip,1>_> local_3488;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_3458;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_3440;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_3428;
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs> local_3410;
  TSlateDecl<SSpacer,RequiredArgs::T0RequiredArgs> local_33f8;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_33e0;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_33c8;
  TAttribute<FMargin> local_33b0;
  FMargin local_3380;
  undefined1 local_3370 [56];
  void *local_3338;
  undefined1 local_3310 [56];
  void *local_32d8;
  undefined1 local_32b0 [24];
  TAttribute<FText> local_3298;
  TAttribute<FText> local_3268;
  FSlotArguments local_3238;
  TAttribute<FText> local_31d8;
  TAttribute<TSharedPtr<IToolTip,1>_> local_31a8;
  FSlotArguments local_3178;
  FCurveSequence local_3118;
  undefined1 local_30a8 [528];
  undefined1 local_2e98 [64];
  undefined1 local_2e58 [24];
  FSlotArguments local_2e40;
  FArguments local_2d58;
  FSlotArguments local_2b50;
  FSlotArguments local_2a68;
  FSlotArguments local_2980;
  FSlotArguments local_2898;
  FArguments local_27b0;
  FArguments local_2588;
  FArguments local_2380;
  FArguments local_2178;
  FArguments local_1ed0;
  FArguments local_1c28;
  FArguments local_1848;
  FArguments local_1468;
  FArguments local_1088;
  FArguments local_b48;
  FArguments local_5f0;
  FLinearColor_u_0 local_98;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  FLinearColor_u_0 local_68 [3];
  
  local_68[0]._0_8_ = __security_cookie.value ^ (ulonglong)auStackY_3c28;
  pFVar61 = (FSlotArguments *)0x0;
  local_3bbc = 0;
  pFVar21 = FCurveSequence::FCurveSequence(&local_3118,0.0,__real_3e19999a,Linear);
  FCurveSequence::operator=(&this->SpawnAnimCurve,pFVar21);
  FCurveSequence::~FCurveSequence(&local_3118);
  FCurveSequence::JumpToEnd(&this->SpawnAnimCurve);
  pTVar4 = (param_1->_Content).Widget.SharedReferenceCount.ReferenceController;
  pSVar5 = (param_1->_Content).Widget.Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_3608 = (this->Content).Object;
  pTStack_3600 = (this->Content).SharedReferenceCount.ReferenceController;
  (this->Content).Object = pSVar5;
  (this->Content).SharedReferenceCount.ReferenceController = pTVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_3600);
  pTVar4 = (param_1->_TabWellContentLeft).Widget.SharedReferenceCount.ReferenceController;
  pSVar5 = (param_1->_TabWellContentLeft).Widget.Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_3580 = (this->TabWellContentLeft).Object;
  pTStack_3578 = (this->TabWellContentLeft).SharedReferenceCount.ReferenceController;
  (this->TabWellContentLeft).Object = pSVar5;
  (this->TabWellContentLeft).SharedReferenceCount.ReferenceController = pTVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_3578);
  pTVar4 = (param_1->_TabWellContentRight).Widget.SharedReferenceCount.ReferenceController;
  pSVar5 = (param_1->_TabWellContentRight).Widget.Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_3570 = (this->TabWellContentRight).Object;
  pTStack_3568 = (this->TabWellContentRight).SharedReferenceCount.ReferenceController;
  (this->TabWellContentRight).Object = pSVar5;
  (this->TabWellContentRight).SharedReferenceCount.ReferenceController = pTVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_3568);
  this->TabRole = param_1->_TabRole;
  TDelegate<void___cdecl(TSharedRef<SDockTab,1>),FDefaultDelegateUserPolicy>::operator=
            (&this->OnTabClosed,&param_1->_OnTabClosed);
  TDelegate<void___cdecl(TSharedRef<SDockTab,1>,enum_ETabActivationCause),FDefaultDelegateUserPolicy>
  ::operator=(&this->OnTabActivated,&param_1->_OnTabActivated);
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->OnCanCloseTab,&param_1->_OnCanCloseTab);
  this->bCanEverClose = param_1->_CanEverClose;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->OnPersistVisualState,&param_1->_OnPersistVisualState);
  TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>::operator=
            (&this->OnExtendContextMenu,&param_1->_OnExtendContextMenu);
  TAttribute<FText>::operator=(&this->TabLabel,&param_1->_Label);
  TAttribute<FText>::operator=(&this->TabLabelSuffix,&param_1->_LabelSuffix);
  this->bShouldAutosize = param_1->_ShouldAutosize;
  uVar14 = *(undefined8 *)((longlong)&(param_1->_TabColorScale).Value.field0_0x0 + 8);
  *(undefined8 *)&(this->TabColorScale).Value.field0_0x0 =
       *(undefined8 *)&(param_1->_TabColorScale).Value.field0_0x0;
  *(undefined8 *)((longlong)&(this->TabColorScale).Value.field0_0x0 + 8) = uVar14;
  (this->TabColorScale).bIsSet = (param_1->_TabColorScale).bIsSet;
  TDelegate<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->TabColorScale).Getter,&(param_1->_TabColorScale).Getter);
  uVar14 = *(undefined8 *)((longlong)&(param_1->_IconColor).Value.field0_0x0 + 8);
  *(undefined8 *)&(this->IconColor).Value.field0_0x0 =
       *(undefined8 *)&(param_1->_IconColor).Value.field0_0x0;
  *(undefined8 *)((longlong)&(this->IconColor).Value.field0_0x0 + 8) = uVar14;
  (this->IconColor).bIsSet = (param_1->_IconColor).bIsSet;
  TDelegate<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&(this->IconColor).Getter,&(param_1->_IconColor).Getter);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->OnTabDrawerClosedEvent,&param_1->_OnTabDrawerClosed);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->OnTabRelocated,&param_1->_OnTabRelocated);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->OnTabDraggedOverDockArea,&param_1->_OnTabDraggedOverDockArea);
  pIVar22 = FAppStyle::Get();
  pFVar23 = ::FName::FName(&local_3618,"Docking.MajorTab");
  pFVar24 = (FDockTabStyle *)
            (**(code **)((longlong)*pIVar22 + 0xa0))(pIVar22,FDockTabStyle::TypeName,*pFVar23);
  if (pFVar24 == (FDockTabStyle *)0x0) {
    pFVar24 = FDockTabStyle::GetDefault();
  }
  this->MajorTabStyle = pFVar24;
  pIVar22 = FAppStyle::Get();
  pFVar23 = ::FName::FName(&local_3610,"Docking.Tab");
  pFVar24 = (FDockTabStyle *)
            (**(code **)((longlong)*pIVar22 + 0xa0))(pIVar22,FDockTabStyle::TypeName,*pFVar23);
  if (pFVar24 == (FDockTabStyle *)0x0) {
    pFVar24 = FDockTabStyle::GetDefault();
  }
  this->GenericTabStyle = pFVar24;
  fVar15 = (param_1->_ContentPadding).Value.Top;
  fVar16 = (param_1->_ContentPadding).Value.Right;
  fVar17 = (param_1->_ContentPadding).Value.Bottom;
  (this->ContentAreaPadding).Value.Left = (param_1->_ContentPadding).Value.Left;
  (this->ContentAreaPadding).Value.Top = fVar15;
  (this->ContentAreaPadding).Value.Right = fVar16;
  (this->ContentAreaPadding).Value.Bottom = fVar17;
  (this->ContentAreaPadding).bIsSet = (param_1->_ContentPadding).bIsSet;
  TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->ContentAreaPadding).Getter,&(param_1->_ContentPadding).Getter);
  EVar19 = GetVisualTabRole(this);
  lVar56 = 0x508;
  if (EVar19 != MajorTab) {
    lVar56 = 0x510;
  }
  local_3ab8 = (FButtonStyle *)(*(longlong *)((longlong)&this->_padding_ + lVar56) + 0x10);
  GetVisualTabRole(this);
  lVar56 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar56 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pIVar22 = FAppStyle::Get();
    pcVar12 = *(code **)((longlong)*pIVar22 + 0x40);
    pFVar23 = ::FName::FName(&local_3b48,"Docking.Tab.ActiveTabIndicatorColor");
    this_05 = (FSlateColor *)(*pcVar12)(pIVar22,local_32b0,*pFVar23);
    FSlateColor::GetSpecifiedColor(this_05,&ActiveBorderColor);
    _Init_thread_footer(&::_TSS0);
  }
  if ((*(int *)(lVar56 + 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    ActiveBorderColorTransparent.field0_0x0._s_0.R = ActiveBorderColor.field0_0x0._s_0.R;
    ActiveBorderColorTransparent.field0_0x0._s_0.B = ActiveBorderColor.field0_0x0._s_0.B;
    ActiveBorderColorTransparent.field0_0x0._s_0.G = ActiveBorderColor.field0_0x0._s_0.G;
    _Init_thread_footer(&::_TSS1);
  }
  if ((*(int *)(lVar56 + 0x9d4c) < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
    local_98._s_0.G = ActiveBorderColorTransparent.field0_0x0._s_0.G;
    local_98._s_0.R = ActiveBorderColorTransparent.field0_0x0._s_0.R;
    local_98._s_0.B = ActiveBorderColorTransparent.field0_0x0._s_0.B;
    local_98._s_0.A = ActiveBorderColorTransparent.field0_0x0._s_0.A;
    local_3838._First = (FLinearColor *)&local_98;
    local_78._4_4_ = ActiveBorderColorTransparent.field0_0x0._s_0.G;
    local_78._0_4_ = ActiveBorderColorTransparent.field0_0x0._s_0.R;
    local_78._8_4_ = ActiveBorderColorTransparent.field0_0x0._s_0.B;
    local_78._12_4_ = ActiveBorderColorTransparent.field0_0x0._s_0.A;
    local_3838._Last = (FLinearColor *)local_68;
    local_88._4_4_ = ActiveBorderColor.field0_0x0._s_0.G;
    local_88._0_4_ = ActiveBorderColor.field0_0x0._s_0.R;
    local_88._8_4_ = ActiveBorderColor.field0_0x0._s_0.B;
    local_88._12_4_ = ActiveBorderColor.field0_0x0._s_0.A;
    TArray<FLinearColor,TSizedDefaultAllocator<32>_>::
    TArray<FLinearColor,TSizedDefaultAllocator<32>_>(&GradientStops,&local_3838);
    atexit(`SDockTab::Construct'::__l2::_dynamic_atexit_destructor_for__GradientStops__);
    _Init_thread_footer(&::_TSS2);
  }
  pFVar25 = SBorder::FArguments::FArguments(&local_1468);
  local_3a08 = FStyleDefaults::GetNoBrush();
  local_3a00 = 1;
  local_39e8 = 0;
  local_39f8 = (undefined1  [8])0x0;
  pvStack_39f0 = (void *)0x0;
  (pFVar25->_BorderImage).Value = local_3a08;
  (pFVar25->_BorderImage).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar25->_BorderImage).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_39f8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_39f8);
  if (pvStack_39f0 != (void *)0x0) {
    FMemory::Free(pvStack_39f0);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_39f8);
  pFVar25->_VAlign = VAlign_Bottom;
  pFVar25 = SBorder::FArguments::Padding(pFVar25,0.0);
  local_39d0._0_1_ = (param_1->_ForegroundColor).Value.ColorUseRule;
  local_39d0._1_1_ = (param_1->_ForegroundColor).Value.ColorTableId;
  local_39d0._2_2_ = *(undefined2 *)&(param_1->_ForegroundColor).Value.field_0x12;
  local_39e0 = *(undefined8 *)&(param_1->_ForegroundColor).Value.SpecifiedColor.field0_0x0;
  uStack_39d8 = *(undefined8 *)
                 ((longlong)&(param_1->_ForegroundColor).Value.SpecifiedColor.field0_0x0 + 8);
  local_39cc = (param_1->_ForegroundColor).bIsSet;
  local_39c8 = (undefined1  [8])0x0;
  pvStack_39c0 = (void *)0x0;
  local_39b8 = 0;
  local_3ad0 = pFVar25;
  TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy> *)local_39c8,
             &(param_1->_ForegroundColor).Getter);
  *(undefined8 *)&(pFVar25->_ForegroundColor).Value.SpecifiedColor.field0_0x0 = local_39e0;
  *(undefined8 *)((longlong)&(pFVar25->_ForegroundColor).Value.SpecifiedColor.field0_0x0 + 8) =
       uStack_39d8;
  (pFVar25->_ForegroundColor).Value.ColorUseRule = (undefined1)local_39d0;
  (pFVar25->_ForegroundColor).Value.ColorTableId = local_39d0._1_1_;
  *(undefined2 *)&(pFVar25->_ForegroundColor).Value.field_0x12 = local_39d0._2_2_;
  (pFVar25->_ForegroundColor).bIsSet = local_39cc;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar25->_ForegroundColor).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_39c8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_39c8);
  if (pvStack_39c0 != (void *)0x0) {
    FMemory::Free(pvStack_39c0);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_39c8);
  pFVar26 = SOverlay::FArguments::FArguments(&local_2d58);
  pFVar27 = SOverlay::Slot((FSlotArguments *)local_3310,0);
  pFVar28 = SImage::FArguments::FArguments(&local_1ed0);
  uStack_3a40 = 0;
  local_3a48 = (TReferenceControllerBase<1> *)GetImageBrush;
  lStack_3550 = (ulonglong)uStack_3a3c << 0x20;
  local_3558 = GetImageBrush;
  TAttribute<FSlateBrush_const_*>::Bind<SDockTab>(&pFVar28->_Image,this,(pmf_604a4ec2 *)&local_3558)
  ;
  FLLMScope::FLLMScope(&local_3b88,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_3970 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_3938,&local_3970,true);
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
            (&local_3598,"SImage",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Docking\\SDockTab.cpp"
             ,0x278,&local_3bc8);
  FMemScope::~FMemScope(&local_3938);
  FLLMScope::~FLLMScope(&local_3b88);
  pTVar29 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_3598,(TSharedRef<SImage,1> *)local_37e8,pFVar28);
  local_3b40 = pTVar29->Object;
  local_3b38.ReferenceController = (pTVar29->SharedReferenceCount).ReferenceController;
  if (local_3b38.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_3b38.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_3b38.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (local_3b38.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_3b38.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_3a48 = local_3b38.ReferenceController;
  if ((SImage **)&pFVar27->_padding_ != &local_3b40) {
    pFVar27->_padding_ = (longlong)local_3b40;
    local_3b40 = (SImage *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar27->_padding_,&local_3b38);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3b38.ReferenceController);
  local_3b10 = (FName)SOverlay::FArguments::operator+(pFVar26,pFVar27);
  pFVar27 = SOverlay::Slot((FSlotArguments *)local_3370,0);
  if ((longlong *)local_3930 != &pFVar27->_padding_) {
    *(undefined4 *)&pFVar27->_padding_ = 1;
    *(undefined1 *)((longlong)&pFVar27->_padding_ + 4) = 1;
  }
  pFVar57 = pFVar61;
  if (pFVar27 != (FSlotArguments *)0xffffffffffffffb8) {
    pFVar57 = pFVar27;
  }
  plVar1 = &pFVar57->_padding_;
  if ((longlong *)local_3928 != plVar1) {
    *(undefined4 *)plVar1 = 0;
    *(undefined1 *)((longlong)&pFVar57->_padding_ + 4) = 1;
  }
  pFVar27 = pFVar61;
  if (plVar1 != (longlong *)0x0) {
    pFVar27 = pFVar57;
  }
  pFVar30 = SComplexGradient::FArguments::FArguments((FArguments *)local_30a8);
  local_3a58 = (TReferenceControllerBase<1> *)GetActiveTabIndicatorVisibility;
  uStack_3a50 = 0;
  lStack_3540 = (ulonglong)uStack_3a4c << 0x20;
  local_3548 = GetActiveTabIndicatorVisibility;
  TAttribute<EVisibility>::Bind<SDockTab>
            ((TAttribute<EVisibility> *)&pFVar30->_padding_,this,(pmf_5203558a *)&local_3548);
  dVar18 = _UNK_150689688;
  local_3900 = 1;
  local_38f8 = 1;
  local_38e0 = 0;
  local_3910 = ___xmm_3ff00000000000003ff0000000000000;
  dStack_3908 = _UNK_150689688;
  local_38f0 = (undefined1  [8])0x0;
  pvStack_38e8 = (void *)0x0;
  if ((TAttribute<TOptional<UE::Math::TVector2<double>_>_> *)&local_3910 !=
      &pFVar30->_DesiredSizeOverride) {
    (pFVar30->_DesiredSizeOverride).Value.TypedValue.field0_0x0._s_0.X =
         ___xmm_3ff00000000000003ff0000000000000;
    (pFVar30->_DesiredSizeOverride).Value.TypedValue.field0_0x0._s_0.Y = dVar18;
    (pFVar30->_DesiredSizeOverride).Value.bIsSet = true;
  }
  (pFVar30->_DesiredSizeOverride).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar30->_DesiredSizeOverride).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_38f0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_38f0);
  if (pvStack_38e8 != (void *)0x0) {
    FMemory::Free(pvStack_38e8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_38f0);
  _Src = GradientStops.AllocatorInstance;
  local_3b00.Data = (FScriptContainerElement *)0x0;
  iVar58 = GradientStops.ArrayNum;
  local_3af8 = CONCAT44(local_3af8._4_4_,iVar58);
  if (iVar58 == 0) {
    local_3af8 = GradientStops._8_8_ & 0xffffffff;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,iVar58,0,&local_3b00,iVar58,(int *)((longlong)&local_3af8 + 4));
    memcpy(local_3b00.Data,_Src.Data,(longlong)iVar58 << 4);
  }
  pTVar3 = &pFVar30->_GradientColors;
  local_3af0 = true;
  local_3ad8 = 0;
  local_3ae8 = (undefined1  [8])0x0;
  pvStack_3ae0 = (void *)0x0;
  if (pTVar3 != (TAttribute<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_> *)&local_3b00) {
    pFVar6 = (pTVar3->Value).AllocatorInstance.Data;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
    (pTVar3->Value).AllocatorInstance.Data = local_3b00.Data;
    local_3b00.Data = (FScriptContainerElement *)0x0;
    (pFVar30->_GradientColors).Value.ArrayNum = (int)local_3af8;
    (pFVar30->_GradientColors).Value.ArrayMax = local_3af8._4_4_;
    local_3af8 = 0;
  }
  (pFVar30->_GradientColors).bIsSet = local_3af0;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar30->_GradientColors).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_3ae8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_3ae8);
  if (pvStack_3ae0 != (void *)0x0) {
    FMemory::Free(pvStack_3ae0);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3ae8);
  if (local_3b00.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3b00.Data);
  }
  pFVar30->_Orientation = Orient_Vertical;
  FLLMScope::FLLMScope(&local_3b84,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_3968 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_3960,&local_3968,true);
  TSlateDecl<SComplexGradient,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SComplexGradient,RequiredArgs::T0RequiredArgs>
            (&local_35b0,"SComplexGradient",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Docking\\SDockTab.cpp"
             ,0x281,&local_3bc7);
  FMemScope::~FMemScope(&local_3960);
  FLLMScope::~FLLMScope(&local_3b84);
  pTVar31 = TSlateDecl<SComplexGradient,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_35b0,&local_3628,pFVar30);
  local_3b30 = pTVar31->Object;
  local_3b28.ReferenceController = (pTVar31->SharedReferenceCount).ReferenceController;
  if (local_3b28.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_3b28.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_3b28.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (local_3b28.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_3b28.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_3a58 = local_3b28.ReferenceController;
  if ((SComplexGradient **)&pFVar27->_padding_ != &local_3b30) {
    pFVar27->_padding_ = (longlong)local_3b30;
    local_3b30 = (SComplexGradient *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar27->_padding_,&local_3b28);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3b28.ReferenceController);
  pFVar26 = SOverlay::FArguments::operator+((FArguments *)local_3b10,pFVar27);
  pFVar27 = SOverlay::Slot(&local_3238,0);
  pFVar25 = SBorder::FArguments::FArguments(&local_1848);
  local_3ab0 = (uchar)EVisibility::HitTestInvisible.Value.Value;
  local_3aaf = 1;
  local_3aa8 = (undefined1  [8])0x0;
  pvStack_3aa0 = (void *)0x0;
  local_3a98 = 0;
  *(TEnumAsByte<EVisibility::Private> *)&pFVar25->_padding_ =
       EVisibility::HitTestInvisible.Value.Value;
  *(undefined1 *)((longlong)&pFVar25->_padding_ + 1) = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar25->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_3aa8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_3aa8);
  if (pvStack_3aa0 != (void *)0x0) {
    FMemory::Free(pvStack_3aa0);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3aa8);
  uStack_3b90 = 0;
  local_3b98 = (TReferenceControllerBase<1> *)GetTabPadding;
  lStack_3530 = (ulonglong)uStack_3b8c << 0x20;
  local_3538 = GetTabPadding;
  pFVar25 = SBorder::FArguments::Padding<SDockTab>(pFVar25,this,(pmf_28cbc127 *)&local_3538);
  uStack_3b90 = 0;
  local_3b98 = (TReferenceControllerBase<1> *)GetFlashOverlayImageBrush;
  lStack_3520 = (ulonglong)uStack_3b8c << 0x20;
  local_3528 = GetFlashOverlayImageBrush;
  TAttribute<FSlateBrush_const_*>::Bind<SDockTab>
            (&pFVar25->_BorderImage,this,(pmf_604a4ec2 *)&local_3528);
  uStack_3b90 = 0;
  local_3b98 = (TReferenceControllerBase<1> *)GetFlashColor;
  lStack_3510 = (ulonglong)uStack_3b8c << 0x20;
  local_3518 = GetFlashColor;
  TAttribute<FSlateColor>::Bind<SDockTab>
            (&pFVar25->_BorderBackgroundColor,this,(pmf_11ab8443 *)&local_3518);
  FLLMScope::FLLMScope(&local_3b80,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_3b10 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_3958,&local_3b10,true);
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>
            (&local_35c8,"SBorder",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Docking\\SDockTab.cpp"
             ,0x28b,&local_3bc6);
  FMemScope::~FMemScope(&local_3958);
  FLLMScope::~FLLMScope(&local_3b80);
  pTVar32 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_35c8,&local_3638,pFVar25);
  local_3b20 = pTVar32->Object;
  local_3b98 = (pTVar32->SharedReferenceCount).ReferenceController;
  if (local_3b98 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_3b98->SharedReferenceCount = (atomic<int>)((int)local_3b98->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    local_3b98->SharedReferenceCount = (atomic<int>)((int)local_3b98->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_3b18.ReferenceController = local_3b98;
  if ((SBorder **)&pFVar27->_padding_ != &local_3b20) {
    pFVar27->_padding_ = (longlong)local_3b20;
    local_3b20 = (SBorder *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar27->_padding_,&local_3b18);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3b18.ReferenceController);
  local_3918 = SOverlay::FArguments::operator+(pFVar26,pFVar27);
  pFVar27 = SOverlay::Slot(&local_3178,0);
  local_3a70 = (undefined1  [8])0x0;
  local_3a68.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_3a68.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_3a70,
             (FWriteAccessScope *)&local_37d8);
  local_37c0 = &local_3a68;
  puVar33 = UE::Core::Private::DelegateAllocate(0x38,&local_3a68);
  FVar40 = local_3b48;
  if (puVar33 != (undefined8 *)0x0) {
    fStack_3bcc = (float)local_37e8._12_4_;
    local_3bd8 = (TReferenceControllerBase<1> *)GetTabPadding;
    uStack_3bd0 = 0;
    pTVar34 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_3508);
    FVar40 = (FName)(pTVar34->SharedReferenceCount).ReferenceController;
    pSVar5 = pTVar34->Object;
    if (FVar40 != (FName)0x0) {
      LOCK();
      *(atomic<int> *)((longlong)FVar40 + 8) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)FVar40 + 8) + 1);
      UNLOCK();
      LOCK();
      *(atomic<int> *)((longlong)FVar40 + 8) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)FVar40 + 8) + 1);
      UNLOCK();
    }
    *puVar33 = &
               ___7__TCommonDelegateInstanceState___A6A_AUFMargin__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar35 = FDelegateHandle::GenerateNewID();
    puVar33[2] = uVar35;
    *puVar33 = &
               ___7__TBaseSPMethodDelegateInstance__00__CBVSDockTab___00__A6A_AUFMargin__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar33[3] = pSVar5;
    *(FName *)(puVar33 + 4) = FVar40;
    if (FVar40 != (FName)0x0) {
      LOCK();
      *(atomic<int> *)((longlong)FVar40 + 0xc) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)FVar40 + 0xc) + 1);
      UNLOCK();
    }
    pFVar61 = (FSlotArguments *)&DAT_0000001c;
    puVar33[5] = local_3bd8;
    puVar33[6] = CONCAT44(fStack_3bcc,uStack_3bd0);
  }
  if (((ulonglong)pFVar61 & 0x10) != 0) {
    pFVar61 = (FSlotArguments *)(ulonglong)((uint)pFVar61 & 0xffffffef);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)FVar40);
  }
  if (((ulonglong)pFVar61 & 8) != 0) {
    pFVar61 = (FSlotArguments *)(ulonglong)((uint)pFVar61 & 0xfffffff7);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)FVar40);
  }
  uVar60 = (uint)pFVar61;
  if (((ulonglong)pFVar61 & 4) != 0) {
    uVar60 = uVar60 & 0xfffffffb;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3508.SharedReferenceCount.ReferenceController);
  }
  if (local_37d8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_37d8.Accessor,&local_37d8);
  }
  local_33b0.bIsSet = true;
  local_33b0.Value.Left = 0.0;
  local_33b0.Value.Top = 0.0;
  local_33b0.Value.Right = 0.0;
  local_33b0.Value.Bottom = 0.0;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_33b0.Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_3a70);
  pFVar36 = (FSlotArguments *)
            TPaddingWidgetSlotMixin<SOverlay::FOverlaySlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)&pFVar27->_padding_,&local_33b0);
  if (local_3940 != (undefined4 *)&pFVar36->field_0x50) {
    *(undefined4 *)&pFVar36->field_0x50 = 2;
    pFVar36->field_0x54 = 1;
  }
  pFVar59 = (FSlotArguments *)0x0;
  pFVar42 = pFVar59;
  if (pFVar36 != (FSlotArguments *)0xffffffffffffffb8) {
    pFVar42 = pFVar36;
  }
  plVar1 = (longlong *)&pFVar42->field_0x48;
  if ((longlong *)local_39b0 != plVar1) {
    *(undefined4 *)plVar1 = 0;
    pFVar42->field_0x4c = 1;
  }
  local_3920 = pFVar59;
  if (plVar1 != (longlong *)0x0) {
    local_3920 = pFVar42;
  }
  pFVar37 = SHorizontalBox::FArguments::FArguments(&local_2380);
  local_3a90 = (uchar)EVisibility::Visible.Value.Value;
  local_3a8f = 1;
  local_3a78 = 0;
  local_3a88 = (undefined1  [8])0x0;
  pvStack_3a80 = (void *)0x0;
  *(TEnumAsByte<EVisibility::Private> *)&pFVar37->_padding_ = EVisibility::Visible.Value.Value;
  *(undefined1 *)((longlong)&pFVar37->_padding_ + 1) = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar37->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_3a88);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_3a88);
  if (pvStack_3a80 != (void *)0x0) {
    FMemory::Free(pvStack_3a80);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3a88);
  local_3488.Value.Object = (IToolTip *)param_1->_padding_;
  local_3488.Value.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)param_1->_padding_;
  if (local_3488.Value.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_3488.Value.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_3488.Value.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
         );
    UNLOCK();
  }
  local_3488.bIsSet = SUB81(param_1->_padding_,0);
  TDelegate<TSharedPtr<IToolTip,1>___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<TSharedPtr<IToolTip,1>___cdecl(void),FDefaultDelegateUserPolicy>
            (&local_3488.Getter,
             (TDelegate<TSharedPtr<IToolTip,1>___cdecl(void),FDefaultDelegateUserPolicy> *)
             &param_1->_padding_);
  pFVar37 = TSlateBaseNamedArgs<SHorizontalBox>::ToolTip
                      ((TSlateBaseNamedArgs<SHorizontalBox> *)pFVar37,&local_3488);
  local_3ba8 = pFVar37;
  if ((char)param_1->_padding_ == '\0') {
    local_3bd8 = (TReferenceControllerBase<1> *)GetTabLabel;
    uStack_3bd0 = 0;
    lStack_34f0 = (ulonglong)(uint)fStack_3bcc << 0x20;
    uVar60 = uVar60 | 2;
    local_34f8 = GetTabLabel;
    pTVar38 = TAttribute<FText>::TAttribute<FText><SDockTab>
                        (&local_3298,this,(pmf_b5ac6a49 *)&local_34f8);
  }
  else {
    uVar60 = uVar60 | 1;
    pTVar38 = TAttribute<FText>::TAttribute<FText>(&local_3268,(TAttribute<FText> *)param_1);
  }
  pTVar38 = TAttribute<FText>::TAttribute<FText>(&local_31d8,pTVar38);
  FText::operator=((FText *)pFVar37,&pTVar38->Value);
  *(bool *)&pFVar37->_padding_ = pTVar38->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar37->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&pTVar38->Getter);
  TAttribute<FText>::~TAttribute<FText>(pTVar38);
  this_00 = ::operator_new(0x58);
  local_3950 = pFVar59;
  if (this_00 != (FSlot *)0x0) {
    *(undefined8 *)this_00 = 0;
    *(undefined8 *)&this_00->field_0x8 = 0;
    *(undefined8 *)&this_00->field_0x10 = 0;
    *(undefined8 *)&this_00->field_0x18 = 0;
    *(undefined8 *)&this_00->field_0x20 = 0;
    *(undefined8 *)&this_00->field_0x28 = 0;
    *(undefined8 *)&this_00->field_0x30 = 0;
    *(undefined8 *)&this_00->field_0x38 = 0;
    *(undefined8 *)&this_00->field_0x40 = 0;
    *(undefined8 *)&this_00->field_0x48 = 0;
    *(undefined8 *)&this_00->field_0x50 = 0;
    local_3950 = (FSlotArguments *)SHorizontalBox::FSlot::FSlot(this_00);
  }
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments(&local_2e40,(FSlot *)&local_3950);
  pFVar36 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(&local_2e40);
  if (local_39a8 != (undefined4 *)&pFVar36->field_0x50) {
    *(undefined4 *)&pFVar36->field_0x50 = 2;
    pFVar36->field_0x54 = 1;
  }
  if (pFVar36 != (FSlotArguments *)0xffffffffffffffb8) {
    pFVar59 = pFVar36;
  }
  if (this->bIsTabNameHidden == false) {
    pFVar39 = FMargin::FMargin(&local_3848,0.0,0.0,__real_4014000000000000,0.0);
  }
  else {
    pFVar39 = FMargin::FMargin(&local_3380,0.0);
  }
  local_3778.Value.Left = pFVar39->Left;
  local_3778.Value.Top = pFVar39->Top;
  local_3778.Value.Right = pFVar39->Right;
  local_3778.Value.Bottom = pFVar39->Bottom;
  local_3778.bIsSet = true;
  local_3778.Getter._16_8_ = 0;
  local_3778.Getter._0_8_ = 0;
  local_3778.Getter._8_8_ = 0;
  local_3bb8 = (FArguments *)
               TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                         ((FSlotArgumentsMixin *)&pFVar59->field_0x18,&local_3778);
  pFVar25 = SBorder::FArguments::FArguments(&local_1c28);
  uStack_3bd0 = 0;
  local_3bd8 = (TReferenceControllerBase<1> *)GetTabIconBorderPadding;
  lStack_34e0 = (ulonglong)(uint)fStack_3bcc << 0x20;
  local_34e8 = GetTabIconBorderPadding;
  pFVar25 = SBorder::FArguments::Padding<SDockTab>(pFVar25,this,(pmf_28cbc127 *)&local_34e8);
  local_38a8.Value = (EVisibility)EVisibility::HitTestInvisible.Value.Value;
  local_38a8.bIsSet = true;
  local_38a8.Getter._0_8_ = 0;
  local_38a8.Getter._8_8_ = 0;
  local_38a8.Getter._16_8_ = 0;
  FVar40 = (FName)TSlateBaseNamedArgs<SBorder>::Visibility
                            ((TSlateBaseNamedArgs<SBorder> *)pFVar25,&local_38a8);
  uStack_3bd0 = 0;
  local_3bd8 = (TReferenceControllerBase<1> *)GetColorOverlayImageBrush;
  lStack_34d0 = (ulonglong)(uint)fStack_3bcc << 0x20;
  local_34d8 = GetColorOverlayImageBrush;
  local_3bb0 = FVar40;
  TAttribute<FSlateBrush_const_*>::Bind<SDockTab>
            ((TAttribute<FSlateBrush_const_*> *)((longlong)FVar40 + 0x2a0),this,
             (pmf_604a4ec2 *)&local_34d8);
  uStack_3bd0 = 0;
  local_3bd8 = (TReferenceControllerBase<1> *)GetTabColor;
  lStack_34c0 = (ulonglong)(uint)fStack_3bcc << 0x20;
  local_34c8 = GetTabColor;
  TAttribute<FSlateColor>::Bind<SDockTab>
            ((TAttribute<FSlateColor> *)((longlong)FVar40 + 0x358),this,(pmf_11ab8443 *)&local_34c8)
  ;
  FVar41 = (FName)SImage::FArguments::FArguments(&local_2178);
  uStack_3bd0 = 0;
  local_3bd8 = (TReferenceControllerBase<1> *)GetIconColor;
  lStack_34b0 = (ulonglong)(uint)fStack_3bcc << 0x20;
  local_34b8 = GetIconColor;
  local_3b08 = FVar41;
  TAttribute<FSlateColor>::Bind<SDockTab>
            ((TAttribute<FSlateColor> *)((longlong)FVar41 + 0x220),this,(pmf_11ab8443 *)&local_34b8)
  ;
  uStack_3bd0 = 0;
  local_3bd8 = (TReferenceControllerBase<1> *)GetTabIcon;
  lStack_34a0 = (ulonglong)(uint)fStack_3bcc << 0x20;
  local_34a8 = GetTabIcon;
  TAttribute<FSlateBrush_const_*>::Bind<SDockTab>
            ((TAttribute<FSlateBrush_const_*> *)((longlong)FVar41 + 0x1f8),this,
             (pmf_604a4ec2 *)&local_34a8);
  *(bool *)((longlong)FVar41 + 0x268) = true;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)FVar41 + 0x270),
             (FWriteAccessScope *)&local_37b8);
  local_37a0 = (FDelegateAllocation *)((longlong)FVar41 + 0x278);
  puVar33 = UE::Core::Private::DelegateAllocate(0x38,local_37a0);
  FVar40 = local_3b48;
  if (puVar33 != (undefined8 *)0x0) {
    fStack_3bcc = local_3848.Bottom;
    local_3bd8 = (TReferenceControllerBase<1> *)GetTabIconSize;
    uStack_3bd0 = 0;
    pTVar34 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_3498);
    FVar40 = (FName)(pTVar34->SharedReferenceCount).ReferenceController;
    pSVar5 = pTVar34->Object;
    if (FVar40 != (FName)0x0) {
      LOCK();
      *(atomic<int> *)((longlong)FVar40 + 8) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)FVar40 + 8) + 1);
      UNLOCK();
      LOCK();
      *(atomic<int> *)((longlong)FVar40 + 8) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)FVar40 + 8) + 1);
      UNLOCK();
    }
    uVar60 = uVar60 | 0xe0;
    *puVar33 = &
               ___7__TCommonDelegateInstanceState___A6A_AU__TOptional_U__TVector2_N_Math_UE____XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar35 = FDelegateHandle::GenerateNewID();
    puVar33[2] = uVar35;
    *puVar33 = &
               ___7__TBaseSPMethodDelegateInstance__00__CBVSDockTab___00__A6A_AU__TOptional_U__TVector2_N_Math_UE____XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar33[3] = pSVar5;
    *(FName *)(puVar33 + 4) = FVar40;
    if (FVar40 != (FName)0x0) {
      LOCK();
      *(atomic<int> *)((longlong)FVar40 + 0xc) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)FVar40 + 0xc) + 1);
      UNLOCK();
    }
    puVar33[5] = local_3bd8;
    puVar33[6] = CONCAT44(fStack_3bcc,uStack_3bd0);
    FVar41 = local_3b08;
  }
  if ((char)uVar60 < '\0') {
    uVar60 = uVar60 & 0xffffff7f;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)FVar40);
  }
  if ((uVar60 & 0x40) != 0) {
    uVar60 = uVar60 & 0xffffffbf;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)FVar40);
  }
  if ((uVar60 & 0x20) != 0) {
    uVar60 = uVar60 & 0xffffffdf;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3498.SharedReferenceCount.ReferenceController);
  }
  if (local_37b8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_37b8.Accessor,&local_37b8);
  }
  FLLMScope::FLLMScope(&local_3b7c,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_3b08 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_3948,&local_3b08,true);
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
            (&local_35e0,"SImage",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Docking\\SDockTab.cpp"
             ,0x2ab,&local_3bc5);
  FMemScope::~FMemScope(&local_3948);
  FLLMScope::~FLLMScope(&local_3b7c);
  this_01 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::Expose<SImage>
                      (&local_35e0,&this->IconWidget);
  pTVar29 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_01,&local_3648,(FArguments *)FVar41);
  FVar40 = local_3bb0;
  pTVar4 = (pTVar29->SharedReferenceCount).ReferenceController;
  pSVar7 = pTVar29->Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_3b78 = (((TAlwaysValidWidget *)((longlong)local_3bb0 + 0x1f8))->Widget).Object;
  pTStack_3b70 = ((FSharedReferencer<1> *)((longlong)local_3bb0 + 0x200))->ReferenceController;
  (((TAlwaysValidWidget *)((longlong)local_3bb0 + 0x1f8))->Widget).Object = (SWidget *)pSVar7;
  ((FSharedReferencer<1> *)((longlong)local_3bb0 + 0x200))->ReferenceController = pTVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_3b70);
  FLLMScope::FLLMScope
            ((FLLMScope *)&local_3bbc,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true)
  ;
  local_3bb0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_3b50,&local_3bb0,true);
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>
            (&local_35f8,"SBorder",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Docking\\SDockTab.cpp"
             ,0x2a3,&local_3bc4);
  FMemScope::~FMemScope(&local_3b50);
  FLLMScope::~FLLMScope((FLLMScope *)&local_3bbc);
  pTVar32 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_35f8,&local_3658,(FArguments *)FVar40);
  local_3828.Object = (SWidget *)pTVar32->Object;
  local_3bd8 = (pTVar32->SharedReferenceCount).ReferenceController;
  if (local_3bd8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_3bd8->SharedReferenceCount = (atomic<int>)((int)local_3bd8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_3828.SharedReferenceCount.ReferenceController = local_3bd8;
  pFVar36 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)local_3bb8,&local_3828);
  local_3b58 = (SWidget *)SHorizontalBox::FArguments::operator+(local_3ba8,pFVar36);
  pFVar42 = SHorizontalBox::Slot(&local_2898);
  fVar15 = __real_3f800000;
  local_3888.Value = 1.0;
  pFVar36 = (FSlotArguments *)0x0;
  local_3888.bIsSet = true;
  local_3888.Getter._16_8_ = 0;
  local_3888.Getter._0_8_ = 0;
  local_3888.Getter._8_8_ = 0;
  pFVar42 = SHorizontalBox::FSlot::FSlotArguments::FillWidth(pFVar42,&local_3888);
  pFVar42 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)&pFVar42->field_0x18,0.0,fVar15);
  puVar2 = &pFVar42->field_0x48;
  if (local_39a0 != (undefined4 *)puVar2) {
    *(undefined4 *)puVar2 = 1;
    pFVar42->field_0x4c = 1;
  }
  pFVar59 = pFVar36;
  if (puVar2 != (undefined1 *)0x0) {
    pFVar59 = pFVar42;
  }
  if (local_3998 != (undefined4 *)&pFVar59->field_0x50) {
    *(undefined4 *)&pFVar59->field_0x50 = 2;
    pFVar59->field_0x54 = 1;
  }
  local_3bb8 = (FArguments *)pFVar36;
  if (pFVar59 != (FSlotArguments *)0xffffffffffffffb8) {
    local_3bb8 = (FArguments *)pFVar59;
  }
  pFVar37 = SHorizontalBox::FArguments::FArguments(&local_2588);
  pTVar43 = TAttribute<TSharedPtr<IToolTip,1>_>::TAttribute<TSharedPtr<IToolTip,1>_>
                      (&local_31a8,(TAttribute<TSharedPtr<IToolTip,1>_> *)&param_1->_padding_);
  local_3ba8 = TSlateBaseNamedArgs<SHorizontalBox>::ToolTip
                         ((TSlateBaseNamedArgs<SHorizontalBox> *)pFVar37,pTVar43);
  pFVar42 = SHorizontalBox::Slot(&local_2980);
  local_3868.Value = 1.0;
  local_3868.bIsSet = true;
  local_3868.Getter._16_8_ = 0;
  local_3868.Getter._0_8_ = 0;
  local_3868.Getter._8_8_ = 0;
  pFVar42 = SHorizontalBox::FSlot::FSlotArguments::FillWidth(pFVar42,&local_3868);
  pFVar42 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)&pFVar42->field_0x18,0.0,fVar15);
  if (local_3990 != (undefined4 *)&pFVar42->field_0x50) {
    *(undefined4 *)&pFVar42->field_0x50 = 2;
    pFVar42->field_0x54 = 1;
  }
  if (pFVar42 != (FSlotArguments *)0xffffffffffffffb8) {
    pFVar36 = pFVar42;
  }
  pFVar44 = STextBlock::FArguments::FArguments(&local_5f0);
  EVar19 = GetVisualTabRole(this);
  lVar56 = 0x508;
  if (EVar19 != MajorTab) {
    lVar56 = 0x510;
  }
  local_3a18 = (TReferenceControllerBase<1> *)GetTabLabel;
  pFVar44->_TextStyle =
       (FTextBlockStyle *)(*(longlong *)((longlong)&this->_padding_ + lVar56) + 0x870);
  uStack_3a10 = 0;
  lStack_3710 = (ulonglong)uStack_3a0c << 0x20;
  local_3718 = GetTabLabel;
  TAttribute<FText>::Bind<SDockTab>(&pFVar44->_Text,this,(pmf_b5ac6a49 *)&local_3718);
  local_3be8[0] = param_1->_LabelOverflowPolicy;
  local_3be8[1] = 1;
  if ((TOptional<ETextOverflowPolicy> *)local_3be8 != &pFVar44->_OverflowPolicy) {
    pEVar45 = TOptional<enum_ETextOverflowPolicy>::GetValue(local_3be8);
    (pFVar44->_OverflowPolicy).TypedValue = *pEVar45;
    (pFVar44->_OverflowPolicy).bIsSet = true;
  }
  pTVar46 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                      (&local_3428,"STextBlock",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Docking\\SDockTab.cpp"
                       ,0x2c2,&local_3bc3);
  pTVar46 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::Expose<STextBlock>
                      (pTVar46,&this->LabelWidget);
  pTVar47 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar46,&local_3668,pFVar44);
  local_3ac8.Object = (SWidget *)pTVar47->Object;
  local_3ac8.SharedReferenceCount.ReferenceController =
       (pTVar47->SharedReferenceCount).ReferenceController;
  if (local_3ac8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_3ac8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_3ac8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_3a18 = local_3ac8.SharedReferenceCount.ReferenceController;
  pFVar36 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)pFVar36,&local_3ac8);
  pFVar37 = SHorizontalBox::FArguments::operator+(local_3ba8,pFVar36);
  pFVar36 = SHorizontalBox::Slot(&local_2a68);
  pFVar36 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar36);
  pFVar36 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)&pFVar36->field_0x18,0.0,fVar15);
  if (local_3988 != (undefined4 *)&pFVar36->field_0x50) {
    *(undefined4 *)&pFVar36->field_0x50 = 2;
    pFVar36->field_0x54 = 1;
  }
  pFVar42 = (FSlotArguments *)0x0;
  if (pFVar36 != (FSlotArguments *)0xffffffffffffffb8) {
    pFVar42 = pFVar36;
  }
  pFVar44 = STextBlock::FArguments::FArguments(&local_b48);
  EVar19 = GetVisualTabRole(this);
  lVar56 = 0x508;
  if (EVar19 != MajorTab) {
    lVar56 = 0x510;
  }
  local_3ac8.Object = (SWidget *)GetTabLabelSuffix;
  pFVar44->_TextStyle =
       (FTextBlockStyle *)(*(longlong *)((longlong)&this->_padding_ + lVar56) + 0x870);
  local_3ac8.SharedReferenceCount.ReferenceController =
       local_3ac8.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
  local_3708 = GetTabLabelSuffix;
  pTStack_3700 = local_3ac8.SharedReferenceCount.ReferenceController;
  TAttribute<FText>::Bind<SDockTab>(&pFVar44->_Text,this,(pmf_b5ac6a49 *)&local_3708);
  pTVar46 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                      (&local_3440,"STextBlock",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Docking\\SDockTab.cpp"
                       ,0x2ce,&local_3bc2);
  pTVar46 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::Expose<STextBlock>
                      (pTVar46,&this->LabelSuffix);
  pTVar47 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar46,&local_3678,pFVar44);
  local_3808.Object = (SWidget *)pTVar47->Object;
  local_3bb0 = (FName)(pTVar47->SharedReferenceCount).ReferenceController;
  if (local_3bb0 != (FName)0x0) {
    LOCK();
    *(atomic<int> *)((longlong)local_3bb0 + 8) =
         (atomic<int>)((int)*(atomic<int> *)((longlong)local_3bb0 + 8) + 1);
    UNLOCK();
  }
  local_3808.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)local_3bb0;
  pFVar36 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)pFVar42,&local_3808);
  pFVar37 = SHorizontalBox::FArguments::operator+(pFVar37,pFVar36);
  pTVar48 = MakeTDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
                      (&local_3458,"SHorizontalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Docking\\SDockTab.cpp"
                       ,0x2b9,&local_3bc1);
  pTVar49 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar48,&local_3688,pFVar37);
  local_3b68.Object = (SWidget *)pTVar49->Object;
  local_3b68.SharedReferenceCount.ReferenceController =
       (pTVar49->SharedReferenceCount).ReferenceController;
  if ((FMemScope)local_3b68.SharedReferenceCount.ReferenceController != (FMemScope)0x0) {
    LOCK();
    *(atomic<int> *)((longlong)local_3b68.SharedReferenceCount.ReferenceController + 8) =
         (atomic<int>)
         ((int)*(atomic<int> *)((longlong)local_3b68.SharedReferenceCount.ReferenceController + 8) +
         1);
    UNLOCK();
  }
  local_3b50 = (FMemScope)local_3b68.SharedReferenceCount.ReferenceController;
  pFVar36 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)local_3bb8,&local_3b68);
  local_3bb8 = SHorizontalBox::FArguments::operator+((FArguments *)local_3b58,pFVar36);
  pFVar36 = SHorizontalBox::Slot(&local_2b50);
  pFVar36 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar36);
  puVar2 = &pFVar36->field_0x48;
  uVar20 = 3;
  if (this->bIsTabNameHidden != false) {
    uVar20 = 1;
  }
  if (local_3980 != (undefined4 *)puVar2) {
    *(undefined4 *)puVar2 = uVar20;
    pFVar36->field_0x4c = 1;
  }
  pFVar42 = (FSlotArguments *)0x0;
  if (puVar2 != (undefined1 *)0x0) {
    pFVar42 = pFVar36;
  }
  if (local_3978 != (undefined4 *)&pFVar42->field_0x50) {
    *(undefined4 *)&pFVar42->field_0x50 = 2;
    pFVar42->field_0x54 = 1;
  }
  local_3ba8 = (FArguments *)(FSlotArguments *)0x0;
  if (pFVar42 != (FSlotArguments *)0xffffffffffffffb8) {
    local_3ba8 = (FArguments *)pFVar42;
  }
  pFVar50 = SButton::FArguments::FArguments(&local_1088);
  pFVar50->_ButtonStyle = local_3ab8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar50->_OnClicked,
             (FWriteAccessScope *)&local_3798);
  local_3780 = &(pFVar50->_OnClicked).field_0x8;
  puVar33 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_3780);
  FVar40 = local_3b48;
  if (puVar33 != (undefined8 *)0x0) {
    local_3b78 = (SWidget *)OnCloseButtonClicked;
    pTStack_3b70 = (TReferenceControllerBase<1> *)((ulonglong)(uint)local_3848.Bottom << 0x20);
    pTVar51 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_36f8);
    FVar40 = (FName)(pTVar51->SharedReferenceCount).ReferenceController;
    local_3b58 = pTVar51->Object;
    if (FVar40 != (FName)0x0) {
      LOCK();
      *(atomic<int> *)((longlong)FVar40 + 8) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)FVar40 + 8) + 1);
      UNLOCK();
      LOCK();
      *(atomic<int> *)((longlong)FVar40 + 8) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)FVar40 + 8) + 1);
      UNLOCK();
    }
    uVar60 = uVar60 | 0x700;
    *puVar33 = &
               ___7__TCommonDelegateInstanceState___A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar35 = FDelegateHandle::GenerateNewID();
    puVar33[2] = uVar35;
    *puVar33 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSDockTab___00__A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar33[3] = local_3b58;
    *(FName *)(puVar33 + 4) = FVar40;
    if (FVar40 != (FName)0x0) {
      LOCK();
      *(atomic<int> *)((longlong)FVar40 + 0xc) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)FVar40 + 0xc) + 1);
      UNLOCK();
    }
    puVar33[5] = local_3b78;
    puVar33[6] = pTStack_3b70;
  }
  if (uVar60 >> 10 != 0) {
    uVar60 = uVar60 & 0xfffffbff;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)FVar40);
  }
  if ((uVar60 >> 9 & 1) != 0) {
    uVar60 = uVar60 & 0xfffffdff;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)FVar40);
  }
  if ((uVar60 >> 8 & 1) != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_36f8.SharedReferenceCount.ReferenceController);
  }
  if (local_3798.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3798.Accessor,&local_3798);
  }
  local_3748.bIsSet = true;
  local_3748.Getter._16_8_ = 0;
  local_3748.Value.Left = ___xmm_00000000000000003fc0000000000000;
  local_3748.Value.Top = _UNK_15094b724;
  local_3748.Value.Right = _UNK_15094b728;
  local_3748.Value.Bottom = _UNK_15094b72c;
  local_3748.Getter._0_8_ = 0;
  local_3748.Getter._8_8_ = 0;
  pFVar50 = SButton::FArguments::ContentPadding(pFVar50,&local_3748);
  local_3b68.SharedReferenceCount.ReferenceController =
       local_3b68.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
  local_3b68.Object = (SWidget *)GetCloseButtonToolTipText;
  local_36e8 = GetCloseButtonToolTipText;
  pTStack_36e0 = local_3b68.SharedReferenceCount.ReferenceController;
  TAttribute<FText>::Bind<SDockTab>((TAttribute<FText> *)pFVar50,this,(pmf_b5ac6a49 *)&local_36e8);
  local_3b68.SharedReferenceCount.ReferenceController =
       local_3b68.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
  local_3b68.Object = (SWidget *)HandleIsCloseButtonVisible;
  local_36d8 = HandleIsCloseButtonVisible;
  pTStack_36d0 = local_3b68.SharedReferenceCount.ReferenceController;
  TAttribute<EVisibility>::Bind<SDockTab>
            ((TAttribute<EVisibility> *)&pFVar50->_padding_,this,(pmf_5203558a *)&local_36d8);
  pFVar52 = SSpacer::FArguments::FArguments(&local_27b0);
  local_38c8 = 1;
  local_38c0 = (undefined1  [8])0x0;
  pvStack_38b8 = (void *)0x0;
  local_38b0 = 0;
  local_38d8 = (double)*(float *)&(local_3ab8->Normal).ImageSize;
  dStack_38d0 = (double)*(float *)&(local_3ab8->Normal).ImageSize.field_0x4;
  (pFVar52->_Size).Value.field0_0x0._s_0.X = local_38d8;
  (pFVar52->_Size).Value.field0_0x0._s_0.Y = dStack_38d0;
  (pFVar52->_Size).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar52->_Size).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_38c0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_38c0);
  if (pvStack_38b8 != (void *)0x0) {
    FMemory::Free(pvStack_38b8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_38c0);
  this_02 = MakeTDecl<SSpacer,RequiredArgs::T0RequiredArgs>
                      (&local_33f8,"SSpacer",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Docking\\SDockTab.cpp"
                       ,0x2e2,&local_3bc0);
  pTVar53 = TSlateDecl<SSpacer,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_02,&local_3698,pFVar52);
  pTVar8 = (pTVar53->SharedReferenceCount).ReferenceController;
  local_3a38 = pTVar53->Object;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar9 = (pFVar50->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar50->_Content).Widget.Object = (SWidget *)local_3a38;
  (pFVar50->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar8;
  pTStack_3a30 = pTVar8;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  this_03 = MakeTDecl<SButton,RequiredArgs::T0RequiredArgs>
                      (&local_33c8,"SButton",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Docking\\SDockTab.cpp"
                       ,0x2db,&local_3bbf);
  pTVar54 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_03,&local_36a8,pFVar50);
  pTVar9 = (pTVar54->SharedReferenceCount).ReferenceController;
  local_37f8.Object = (SWidget *)pTVar54->Object;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_37f8.SharedReferenceCount.ReferenceController = pTVar9;
  pFVar36 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)local_3ba8,&local_37f8);
  pFVar37 = SHorizontalBox::FArguments::operator+(local_3bb8,pFVar36);
  pTVar48 = MakeTDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
                      (&local_33e0,"SHorizontalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Docking\\SDockTab.cpp"
                       ,0x298,&local_3bbe);
  pTVar49 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar48,&local_36b8,pFVar37);
  pTVar10 = (pTVar49->SharedReferenceCount).ReferenceController;
  local_3818.Object = (SWidget *)pTVar49->Object;
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_3818.SharedReferenceCount.ReferenceController = pTVar10;
  pFVar61 = TSlotBase<SOverlay::FOverlaySlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)local_3920,&local_3818);
  pFVar26 = SOverlay::FArguments::operator+(local_3918,pFVar61);
  this_04 = MakeTDecl<SOverlay,RequiredArgs::T0RequiredArgs>
                      (&local_3410,"SOverlay",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Docking\\SDockTab.cpp"
                       ,0x275,&local_3bbd);
  pTVar55 = TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_04,&local_36c8,pFVar26);
  pTVar11 = (pTVar55->SharedReferenceCount).ReferenceController;
  local_3a28 = pTVar55->Object;
  if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar13 = (local_3ad0->_Content).Widget.SharedReferenceCount.ReferenceController;
  (local_3ad0->_Content).Widget.Object = (SWidget *)local_3a28;
  (local_3ad0->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar11;
  pTStack_3a20 = pTVar11;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  SBorder::Construct((SBorder *)this,local_3ad0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_36c8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3410._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_36b8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_33e0._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_36a8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_33c8._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3698.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_33f8._Widget.SharedReferenceCount.ReferenceController);
  TAttribute<UE::Math::TVector2<double>_>::~TAttribute<UE::Math::TVector2<double>_>
            (&local_27b0._Size);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_27b0);
  SButton::FArguments::~FArguments(&local_1088);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_2b50);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_3b50);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3688.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3458._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_3bb0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3678.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3440._Widget.SharedReferenceCount.ReferenceController);
  STextBlock::FArguments::~FArguments(&local_b48);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_2a68);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_3a18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3668.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3428._Widget.SharedReferenceCount.ReferenceController);
  STextBlock::FArguments::~FArguments(&local_5f0);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_2980);
  SHorizontalBox::FArguments::~FArguments(&local_2588);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_2898);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_3bd8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3658.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_35f8._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3648.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_35e0._Widget.SharedReferenceCount.ReferenceController);
  SImage::FArguments::~FArguments(&local_2178);
  SBorder::FArguments::~FArguments(&local_1c28);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_2e40);
  if ((uVar60 & 2) != 0) {
    TAttribute<FText>::~TAttribute<FText>(&local_3298);
  }
  if ((uVar60 & 1) != 0) {
    TAttribute<FText>::~TAttribute<FText>(&local_3268);
  }
  SHorizontalBox::FArguments::~FArguments(&local_2380);
  TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>::
  ~TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>
            ((TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy> *)local_3a70);
  SOverlay::FOverlaySlot::FSlotArguments::~FSlotArguments(&local_3178);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_3b98);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3638.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_35c8._Widget.SharedReferenceCount.ReferenceController);
  SBorder::FArguments::~FArguments(&local_1848);
  SOverlay::FOverlaySlot::FSlotArguments::~FSlotArguments(&local_3238);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_3a58);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3628.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_35b0._Widget.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2e58);
  if ((void *)local_2e58._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_2e58._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2e58);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2e98);
  if ((void *)local_2e98._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_2e98._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2e98);
  if ((FScriptContainerElement *)local_30a8._504_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_30a8._504_8_);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_30a8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_3370 + 0x30));
  if (local_3338 != (void *)0x0) {
    FMemory::Free(local_3338);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)(local_3370 + 0x30));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_3370._16_8_);
  if ((undefined8 *)local_3370._0_8_ != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)local_3370._0_8_)(local_3370._0_8_,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_3a48);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)CONCAT44(local_37e8._12_4_,local_37e8._8_4_));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3598._Widget.SharedReferenceCount.ReferenceController);
  SImage::FArguments::~FArguments(&local_1ed0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_3310 + 0x30));
  if (local_32d8 != (void *)0x0) {
    FMemory::Free(local_32d8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)(local_3310 + 0x30));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_3310._16_8_);
  if ((undefined8 *)local_3310._0_8_ != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)local_3310._0_8_)(local_3310._0_8_,1);
  }
  DestructItems<SOverlay::FOverlaySlot::FSlotArguments,int>
            ((FSlotArguments *)local_2d58._Slots.AllocatorInstance.Data,local_2d58._Slots.ArrayNum);
  if ((FSlotArguments *)local_2d58._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_2d58._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_2d58);
  SBorder::FArguments::~FArguments(&local_1468);
  return;
}

// DrawAttention @ 14286eb60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SDockTab::DrawAttention(SDockTab *this)

{
  FTabManager *pFVar1;
  code *pcVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  TSharedRef<SWidget,1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  SWidget *local_28;
  TReferenceControllerBase<1> *local_20;
  TSharedRef<SWidget,1> local_18;
  
  pTVar6 = (this->MyTabManager).WeakReferenceCount.ReferenceController;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar6->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        pTVar6 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14286eb90;
      }
      LOCK();
      aVar4 = pTVar6->SharedReferenceCount;
      bVar7 = aVar3 == aVar4;
      if (bVar7) {
        pTVar6->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
    } while (!bVar7);
    pFVar1 = (this->MyTabManager).Object;
    if (pFVar1 != (FTabManager *)0x0) {
      pcVar2 = *(code **)pFVar1->_padding_;
      pTVar5 = TSharedFromThis<SWidget,1>::AsShared
                         ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_18);
      local_28 = pTVar5->Object;
      local_20 = (pTVar5->SharedReferenceCount).ReferenceController;
      if (local_20 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_20->SharedReferenceCount = (atomic<int>)((int)local_20->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
      (*pcVar2)(pFVar1,&local_28);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
      return;
    }
  }
LAB_14286eb90:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return;
}

// ExtendContextMenu @ 142871920

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall SDockTab::ExtendContextMenu(SDockTab *this,FMenuBuilder *param_1)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnExtendContextMenu,
             &local_28);
  if ((*(int *)&(this->OnExtendContextMenu).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->OnExtendContextMenu).field_0x8, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))(plVar1,param_1);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// FlashTab @ 142872bc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SDockTab::FlashTab(SDockTab *this)

{
  FCurveSequence *pFVar1;
  TSharedRef<SWidget,1> *pTVar2;
  TSharedRef<SWidget,1> local_88;
  FCurveSequence local_78;
  
  pFVar1 = FCurveSequence::FCurveSequence(&local_78,0.0,__real_3f800000,Linear);
  FCurveSequence::operator=(&this->FlashTabCurve,pFVar1);
  FCurveSequence::~FCurveSequence(&local_78);
  pTVar2 = TSharedFromThis<SWidget,1>::AsShared
                     ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_88);
  FCurveSequence::Play(&this->FlashTabCurve,pTVar2,false,0.0,true);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.SharedReferenceCount.ReferenceController);
  return;
}

// GetActiveTabIndicatorVisibility @ 142874b00

/* WARNING: Enum "Type": Some values do not have unique names */

EVisibility __thiscall SDockTab::GetActiveTabIndicatorVisibility(SDockTab *this)

{
  bool bVar1;
  ETabRole EVar2;
  EVisibility EVar3;
  uchar *in_RDX;
  
  bVar1 = IsActive(this);
  if (bVar1) {
    EVar2 = GetVisualTabRole(this);
    EVar3 = EVisibility::HitTestInvisible;
    if (EVar2 != MajorTab) goto LAB_142874b33;
  }
  EVar3.Value.Value = EVisibility::Collapsed.Value.Value;
LAB_142874b33:
  *in_RDX = (uchar)EVar3.Value.Value;
  return (EVisibility)SUB81(in_RDX,0);
}

// GetAnimatedScale @ 142874b50

/* WARNING: Enum "Type": Some values do not have unique names */

FDeprecateSlateVector2D __thiscall SDockTab::GetAnimatedScale(SDockTab *this)

{
  FDeprecateSlateVector2D in_RDX;
  float fVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FullyOpen = UE::Math::TVector2<float>::UnitVector;
      _Init_thread_footer(&::_TSS0);
    }
  }
  fVar1 = FCurveSequence::GetLerp(&this->SpawnAnimCurve);
  *(ulonglong *)in_RDX =
       CONCAT44((FullyOpen.field0_0x0._s_0.Y - FullyClosed.field0_0x0._s_0.Y) * fVar1 +
                FullyClosed.field0_0x0._s_0.Y,
                (FullyOpen.field0_0x0._s_0.X - FullyClosed.field0_0x0._s_0.X) * fVar1 +
                FullyClosed.field0_0x0._s_0.X);
  return in_RDX;
}

// GetCloseButtonToolTipText @ 142875b00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __thiscall SDockTab::GetCloseButtonToolTipText(SDockTab *this,FText *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  FUICommandInfo *this_00;
  code *pcVar2;
  ETabRole EVar3;
  bool bVar4;
  FTabCommands *pFVar5;
  TSharedPtr<FUICommandInfo,1> *pTVar6;
  FText *pFVar7;
  FTextFormat *pFVar8;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_178
  ;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_168;
  FText local_158;
  FText local_148;
  FString local_138;
  FString local_128;
  FTextFormat local_118;
  FString local_108;
  FText local_f8;
  FFormatArgumentValue local_e8;
  FFormatArgumentValue local_c8;
  FFormatArgumentValue local_a8;
  FFormatArgumentValue local_88;
  FText local_68;
  FText local_58;
  FText local_48;
  FTextFormat local_38;
  FTextFormat local_28;
  
  EVar3 = GetVisualTabRole(this);
  if (EVar3 == MajorTab) {
    pFVar5 = TCommands<FTabCommands>::Get();
    pTVar6 = &pFVar5->CloseMajorTab;
  }
  else {
    pFVar5 = TCommands<FTabCommands>::Get();
    pTVar6 = &pFVar5->CloseMinorTab;
  }
  pTVar1 = (pTVar6->SharedReferenceCount).ReferenceController;
  this_00 = pTVar6->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_178.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_178.Pairs.ArrayNum = 0;
  local_178.Pairs.ArrayMax = 0;
  pFVar7 = FText::AsLocalizable_Advanced_LocText
                     (&local_68,L"DockTab",L"CloseButtonToolTipLabel",L"Close Tab");
  local_c8.Type = Text;
  FText::FText((FText *)&local_c8.TextValue,pFVar7);
  if ((local_c8.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        ), bVar4)) {
    pcVar2 = (code *)swi(3);
    pFVar7 = (FText *)(*pcVar2)();
    return pFVar7;
  }
  ::FString::FString(&local_138,L"Label");
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
  Emplace<FString,FFormatArgumentValue>(&local_178,&local_138,&local_c8);
  if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.Data.AllocatorInstance.Data);
  }
  if (local_c8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_c8.TextValue.field0_0x0.TypedValue.TextData.Reference
                + 0x10))();
  }
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
  }
  if ((this_00 == (FUICommandInfo *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pFVar7 = (FText *)(*pcVar2)();
    return pFVar7;
  }
  FUICommandInfo::GetInputText(this_00,&local_158);
  bVar4 = FText::IsEmptyOrWhitespace(&local_158);
  if (bVar4) {
    local_e8.Type = Text;
    local_e8.TextValue.field0_0x0.TypedValue.TextData.Reference =
         (TRefCountPtr<ITextData>)(TRefCountPtr<ITextData>)local_158.TextData.Reference;
    if (local_158.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_158.TextData.Reference + 8))
                (local_158.TextData.Reference,local_res10);
    }
    local_e8.TextValue.field0_0x0.TypedValue.Flags = local_158.Flags;
    if ((local_e8.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          ), bVar4)) {
      pcVar2 = (code *)swi(3);
      pFVar7 = (FText *)(*pcVar2)();
      return pFVar7;
    }
    ::FString::FString(&local_128,L"InputText");
    TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
    Emplace<FString,FFormatArgumentValue>(&local_178,&local_128,&local_e8);
    local_58.TextData.Reference =
         (ITextData *)local_e8.TextValue.field0_0x0.TypedValue.TextData.Reference;
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
      local_58.TextData.Reference =
           (ITextData *)local_e8.TextValue.field0_0x0.TypedValue.TextData.Reference;
    }
  }
  else {
    local_148.TextData.Reference = local_158.TextData.Reference;
    if (local_158.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_158.TextData.Reference + 8))
                (local_158.TextData.Reference,local_res18);
    }
    local_148.Flags = local_158.Flags;
    pFVar7 = FText::AsLocalizable_Advanced_LocText
                       (&local_58,L"DockTab",L"CloseButtonInputText",L"({0})");
    pFVar8 = FTextFormat::FTextFormat(&local_38,pFVar7,Default);
    local_a8.Type = Text;
    FText::FText((FText *)&local_a8.TextValue,&local_148);
    if ((local_a8.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          ), bVar4)) {
      pcVar2 = (code *)swi(3);
      pFVar7 = (FText *)(*pcVar2)();
      return pFVar7;
    }
    local_168.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_168.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,0,&local_168.AllocatorInstance,1,&local_168.ArrayMax);
    ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
              (local_168.AllocatorInstance.Data,&local_a8,1);
    local_118.TextFormatData.Object = (pFVar8->TextFormatData).Object;
    local_118.TextFormatData.SharedReferenceCount.ReferenceController =
         (pFVar8->TextFormatData).SharedReferenceCount.ReferenceController;
    if (local_118.TextFormatData.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_118.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_118.TextFormatData.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    FText::Format(&local_f8,&local_118,&local_168);
    DestructItems<FFormatArgumentValue,int>
              ((FFormatArgumentValue *)local_168.AllocatorInstance.Data,local_168.ArrayNum);
    if ((FFormatArgumentValue *)local_168.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
      FMemory::Free(local_168.AllocatorInstance.Data);
    }
    if (local_a8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_a8.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10)
      )();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pFVar8->TextFormatData).SharedReferenceCount.ReferenceController);
    if (local_148.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_148.TextData.Reference + 0x10))();
    }
    local_88.Type = Text;
    FText::FText((FText *)&local_88.TextValue,&local_f8);
    if ((local_88.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          ), bVar4)) {
      pcVar2 = (code *)swi(3);
      pFVar7 = (FText *)(*pcVar2)();
      return pFVar7;
    }
    ::FString::FString(&local_108,L"InputText");
    TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
    Emplace<FString,FFormatArgumentValue>(&local_178,&local_108,&local_88);
    if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data.AllocatorInstance.Data);
    }
    if (local_88.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_88.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10)
      )();
    }
    if (local_f8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_f8.TextData.Reference + 0x10))();
    }
  }
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  pFVar7 = FText::AsLocalizable_Advanced_LocText
                     (&local_48,L"DockTab",L"CloseButtonToolTipFormat",L"{Label} {InputText}");
  pFVar8 = FTextFormat::FTextFormat(&local_28,pFVar7,Default);
  FText::Format(__return_storage_ptr__,pFVar8,&local_178);
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  if (local_158.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_158.TextData.Reference + 0x10))();
  }
  DestructItems<TTuple<FString,FFormatArgumentValue>,int>
            ((TTuple<FString,FFormatArgumentValue> *)local_178.Pairs.AllocatorInstance.Data,
             local_178.Pairs.ArrayNum);
  if ((TTuple<FString,FFormatArgumentValue> *)local_178.Pairs.AllocatorInstance.Data !=
      (TTuple<FString,FFormatArgumentValue> *)0x0) {
    FMemory::Free(local_178.Pairs.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// GetColorOverlayImageBrush @ 142875f80

/* WARNING: Enum "Type": Some values do not have unique names */

FSlateBrush * __thiscall SDockTab::GetColorOverlayImageBrush(SDockTab *this)

{
  ETabRole EVar1;
  FLinearColor *pFVar2;
  FSlateBrush *pFVar3;
  longlong lVar4;
  
  pFVar2 = TAttribute<FLinearColor>::Get(&this->TabColorScale);
  if (0.0 < (pFVar2->field0_0x0)._s_0.A) {
    EVar1 = GetVisualTabRole(this);
    lVar4 = 0x508;
    if (EVar1 != MajorTab) {
      lVar4 = 0x510;
    }
    return (FSlateBrush *)(*(longlong *)((longlong)&this->_padding_ + lVar4) + 0x500);
  }
  pFVar3 = FStyleDefaults::GetNoBrush();
  return pFVar3;
}

// GetContent @ 1428760d0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
SDockTab::GetContent(SDockTab *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->Content).Object;
  pTVar1 = (this->Content).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetContentAreaBrush @ 142876100

/* WARNING: Enum "Type": Some values do not have unique names */

FSlateBrush * __thiscall SDockTab::GetContentAreaBrush(SDockTab *this)

{
  ETabRole EVar1;
  longlong lVar2;
  
  EVar1 = GetVisualTabRole(this);
  lVar2 = 0x508;
  if (EVar1 != MajorTab) {
    lVar2 = 0x510;
  }
  return (FSlateBrush *)(*(longlong *)((longlong)&this->_padding_ + lVar2) + 0x710);
}

// GetContentPadding @ 142876140

/* WARNING: Enum "Type": Some values do not have unique names */

FMargin * __thiscall SDockTab::GetContentPadding(SDockTab *this,FMargin *__return_storage_ptr__)

{
  float fVar1;
  float fVar2;
  float fVar3;
  FMargin *pFVar4;
  
  pFVar4 = TAttribute<FMargin>::Get(&this->ContentAreaPadding);
  fVar1 = pFVar4->Top;
  fVar2 = pFVar4->Right;
  fVar3 = pFVar4->Bottom;
  __return_storage_ptr__->Left = pFVar4->Left;
  __return_storage_ptr__->Top = fVar1;
  __return_storage_ptr__->Right = fVar2;
  __return_storage_ptr__->Bottom = fVar3;
  return __return_storage_ptr__;
}

// GetCurrentStyle @ 142876170

/* WARNING: Enum "Type": Some values do not have unique names */

FDockTabStyle * __thiscall SDockTab::GetCurrentStyle(SDockTab *this)

{
  ETabRole EVar1;
  
  EVar1 = GetVisualTabRole(this);
  if (EVar1 == MajorTab) {
    return this->MajorTabStyle;
  }
  return this->GenericTabStyle;
}

// GetDockArea @ 142876510

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<SDockingArea,1> * __thiscall
SDockTab::GetDockArea(SDockTab *this,TSharedPtr<SDockingArea,1> *__return_storage_ptr__)

{
  SDockingArea *pSVar1;
  SDockingTabWell *this_00;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = (this->ParentDockingAreaPtr).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142876546;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    pSVar1 = (this->ParentDockingAreaPtr).Object;
    if (pSVar1 != (SDockingArea *)0x0) {
      __return_storage_ptr__->Object = pSVar1;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      return __return_storage_ptr__;
    }
  }
LAB_142876546:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  pTVar4 = (this->ParentPtr).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142876576;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    this_00 = (this->ParentPtr).Object;
    if (this_00 != (SDockingTabWell *)0x0) {
      SDockingTabWell::GetDockArea(this_00,__return_storage_ptr__);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return __return_storage_ptr__;
    }
  }
LAB_142876576:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  __return_storage_ptr__->Object = (SDockingArea *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetFlashColor @ 1428766d0

/* WARNING: Enum "Type": Some values do not have unique names */

FSlateColor * __thiscall SDockTab::GetFlashColor(SDockTab *this,FSlateColor *__return_storage_ptr__)

{
  char cVar1;
  uint uVar2;
  ETabRole EVar3;
  bool bVar4;
  FLinearColor *pFVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  EVar3 = GetVisualTabRole(this);
  lVar6 = 0x508;
  uVar2 = 0x508;
  if (EVar3 != MajorTab) {
    uVar2 = 0x510;
  }
  cVar1 = *(char *)(*(longlong *)((longlong)&this->_padding_ + (ulonglong)uVar2) + 0xb7c);
  if ((cVar1 == '\0') || (cVar1 == '\x01')) {
    EVar3 = GetVisualTabRole(this);
    if (EVar3 != MajorTab) {
      lVar6 = 0x510;
    }
    lVar6 = *(longlong *)((longlong)&this->_padding_ + lVar6);
    if (*(char *)(lVar6 + 0xb7c) == '\x01') {
      pFVar5 = FSlateColor::GetColorFromTable((FSlateColor *)(lVar6 + 0xb6c));
      fVar9 = (pFVar5->field0_0x0)._s_0.R;
      fVar10 = (pFVar5->field0_0x0)._s_0.G;
      fVar11 = (pFVar5->field0_0x0)._s_0.B;
    }
    else {
      fVar9 = (((FSlateColor *)(lVar6 + 0xb6c))->SpecifiedColor).field0_0x0._s_0.R;
      fVar10 = *(float *)(lVar6 + 0xb70);
      fVar11 = *(float *)(lVar6 + 0xb74);
    }
    bVar4 = FCurveSequence::IsPlaying(&this->FlashTabCurve);
    if (bVar4) {
      fVar7 = FCurveSequence::GetLerp(&this->FlashTabCurve);
      fVar8 = sinf(fVar7 * __real_41490fdb);
      fVar7 = (fVar8 + __real_3f800000) * __real_3f000000 * (__real_3f800000 - fVar7);
    }
    else {
      fVar7 = 0.0;
    }
  }
  else {
    fVar9 = FLinearColor::White.field0_0x0._0_4_;
    fVar10 = FLinearColor::White.field0_0x0._4_4_;
    fVar11 = FLinearColor::White.field0_0x0._8_4_;
    fVar7 = FLinearColor::White.field0_0x0._12_4_;
  }
  __return_storage_ptr__->ColorUseRule = UseColor_Specified;
  (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.R = fVar9;
  (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.G = fVar10;
  (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.B = fVar11;
  (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.A = fVar7;
  return __return_storage_ptr__;
}

// GetFlashOverlayImageBrush @ 1428767f0

/* WARNING: Enum "Type": Some values do not have unique names */

FSlateBrush * __thiscall SDockTab::GetFlashOverlayImageBrush(SDockTab *this)

{
  bool bVar1;
  ETabRole EVar2;
  FSlateBrush *pFVar3;
  longlong lVar4;
  
  bVar1 = FCurveSequence::IsPlaying(&this->FlashTabCurve);
  if (bVar1) {
    EVar2 = GetVisualTabRole(this);
    lVar4 = 0x508;
    if (EVar2 != MajorTab) {
      lVar4 = 0x510;
    }
    return (FSlateBrush *)(*(longlong *)((longlong)&this->_padding_ + lVar4) + 0x450);
  }
  pFVar3 = FStyleDefaults::GetNoBrush();
  return pFVar3;
}

// GetFlashValue @ 142876840

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall SDockTab::GetFlashValue(SDockTab *this)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  
  bVar1 = FCurveSequence::IsPlaying(&this->FlashTabCurve);
  if (bVar1) {
    fVar2 = FCurveSequence::GetLerp(&this->FlashTabCurve);
    fVar3 = sinf(fVar2 * __real_41490fdb);
    return (fVar3 + __real_3f800000) * __real_3f000000 * (__real_3f800000 - fVar2);
  }
  return 0.0;
}

// GetForegroundColor @ 142876ad0

/* WARNING: Enum "Type": Some values do not have unique names */

FSlateColor * __thiscall
SDockTab::GetForegroundColor(SDockTab *this,FSlateColor *__return_storage_ptr__)

{
  atomic<int> *paVar1;
  longlong *this_00;
  atomic<int> aVar2;
  SWidget *pSVar3;
  code *pcVar4;
  bool bVar5;
  ETabRole EVar6;
  atomic<int> aVar7;
  undefined4 uVar8;
  TSharedRef<SWidget_const_,1> *pTVar9;
  FSlateColor *pFVar10;
  FDockTabStyle *pFVar11;
  longlong lVar12;
  TReferenceControllerBase<1> *pTVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  TSharedRef<SWidget_const_,1> local_48;
  TSlateMemberAttributeRef<SWidget::TSlateAttribute<FSlateColor,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>_>
  local_38;
  
  pTVar9 = TSharedFromThis<SWidget,1>::AsShared
                     ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_48);
  this_00 = &this->_padding_;
  pTVar13 = (pTVar9->SharedReferenceCount).ReferenceController;
  pSVar3 = pTVar9->Object;
  if (pTVar13 == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  else {
    LOCK();
    pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
    LOCK();
    pTVar13->WeakReferenceCount = (atomic<int>)((int)pTVar13->WeakReferenceCount + 1);
    UNLOCK();
  }
  local_38.Owner.Object = pSVar3;
  local_38.Owner.WeakReferenceCount.ReferenceController = pTVar13;
  local_38.Attribute =
       (TSlateAttribute<FSlateColor,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> *)this_00;
  if (((this_00 < pSVar3) ||
      (&pSVar3[1].PersistentState.InitialClipState.TypedValue.Debugging_StateIndexFromFrame <=
       this_00)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(UPTRINT)&InAttribute >= (UPTRINT)&InWidget && (UPTRINT)&InAttribute < (UPTRINT)&InWidget + sizeof(WidgetType)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeMember.inl"
                         ,99,L"The attribute is not a member of the widget."), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar10 = (FSlateColor *)(*pcVar4)();
    return pFVar10;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  if (pTVar13 == (TReferenceControllerBase<1> *)0x0) {
LAB_142876bc0:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
LAB_142876bc8:
    pFVar10 = SlateAttributePrivate::
              TSlateMemberAttributeRef<SWidget::TSlateAttribute<FSlateColor,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>_>
              ::Get(&local_38);
    if (((__real_3f800000 == (pFVar10->SpecifiedColor).field0_0x0._s_0.R) &&
        ((pFVar10->SpecifiedColor).field0_0x0._s_0.G == 0.0)) &&
       ((__real_3f800000 == (pFVar10->SpecifiedColor).field0_0x0._s_0.B &&
        ((__real_3f800000 == (pFVar10->SpecifiedColor).field0_0x0._s_0.A &&
         (pFVar10->ColorUseRule == UseColor_UseStyle)))))) {
      bVar5 = IsActive(this);
      if (bVar5) {
        EVar6 = GetVisualTabRole(this);
        lVar12 = 0x508;
        if (EVar6 != MajorTab) {
          lVar12 = 0x510;
        }
        lVar12 = *(longlong *)((longlong)&this->_padding_ + lVar12);
        fVar14 = *(float *)(lVar12 + 0xba8);
        fVar15 = *(float *)(lVar12 + 0xbac);
        fVar16 = *(float *)(lVar12 + 0xbb0);
        fVar17 = *(float *)(lVar12 + 0xbb4);
        uVar8 = *(undefined4 *)(lVar12 + 3000);
      }
      else if (*(char *)((longlong)&this->_padding_ + 3) == '\0') {
        bVar5 = IsForeground(this);
        if (bVar5) {
          pFVar11 = GetCurrentStyle(this);
          fVar14 = (pFVar11->ForegroundForegroundColor).SpecifiedColor.field0_0x0._s_0.R;
          fVar15 = (pFVar11->ForegroundForegroundColor).SpecifiedColor.field0_0x0._s_0.G;
          fVar16 = (pFVar11->ForegroundForegroundColor).SpecifiedColor.field0_0x0._s_0.B;
          fVar17 = (pFVar11->ForegroundForegroundColor).SpecifiedColor.field0_0x0._s_0.A;
          uVar8._0_1_ = (pFVar11->ForegroundForegroundColor).ColorUseRule;
          uVar8._1_1_ = (pFVar11->ForegroundForegroundColor).ColorTableId;
          uVar8._2_2_ = *(undefined2 *)&(pFVar11->ForegroundForegroundColor).field_0x12;
        }
        else {
          pFVar11 = GetCurrentStyle(this);
          fVar14 = (pFVar11->NormalForegroundColor).SpecifiedColor.field0_0x0._s_0.R;
          fVar15 = (pFVar11->NormalForegroundColor).SpecifiedColor.field0_0x0._s_0.G;
          fVar16 = (pFVar11->NormalForegroundColor).SpecifiedColor.field0_0x0._s_0.B;
          fVar17 = (pFVar11->NormalForegroundColor).SpecifiedColor.field0_0x0._s_0.A;
          uVar8._0_1_ = (pFVar11->NormalForegroundColor).ColorUseRule;
          uVar8._1_1_ = (pFVar11->NormalForegroundColor).ColorTableId;
          uVar8._2_2_ = *(undefined2 *)&(pFVar11->NormalForegroundColor).field_0x12;
        }
      }
      else {
        pFVar11 = GetCurrentStyle(this);
        fVar14 = (pFVar11->HoveredForegroundColor).SpecifiedColor.field0_0x0._s_0.R;
        fVar15 = (pFVar11->HoveredForegroundColor).SpecifiedColor.field0_0x0._s_0.G;
        fVar16 = (pFVar11->HoveredForegroundColor).SpecifiedColor.field0_0x0._s_0.B;
        fVar17 = (pFVar11->HoveredForegroundColor).SpecifiedColor.field0_0x0._s_0.A;
        uVar8._0_1_ = (pFVar11->HoveredForegroundColor).ColorUseRule;
        uVar8._1_1_ = (pFVar11->HoveredForegroundColor).ColorTableId;
        uVar8._2_2_ = *(undefined2 *)&(pFVar11->HoveredForegroundColor).field_0x12;
      }
      goto LAB_142876c6a;
    }
  }
  else {
    aVar2 = pTVar13->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar13 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142876bc0;
      }
      LOCK();
      aVar7 = pTVar13->SharedReferenceCount;
      bVar5 = aVar2 == aVar7;
      if (bVar5) {
        pTVar13->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar7 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar7;
    } while (!bVar5);
    if (pSVar3 == (SWidget *)0x0) goto LAB_142876bc0;
    bVar5 = SlateAttributePrivate::FSlateAttributeImpl::ProtectedIsBound
                      ((FSlateAttributeImpl *)this_00,pSVar3,Member);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
    if (!bVar5) goto LAB_142876bc8;
  }
  pFVar10 = SlateAttributePrivate::
            TSlateMemberAttributeRef<SWidget::TSlateAttribute<FSlateColor,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>_>
            ::Get(&local_38);
  fVar14 = (pFVar10->SpecifiedColor).field0_0x0._s_0.R;
  fVar15 = (pFVar10->SpecifiedColor).field0_0x0._s_0.G;
  fVar16 = (pFVar10->SpecifiedColor).field0_0x0._s_0.B;
  fVar17 = (pFVar10->SpecifiedColor).field0_0x0._s_0.A;
  uVar8._0_1_ = pFVar10->ColorUseRule;
  uVar8._1_1_ = pFVar10->ColorTableId;
  uVar8._2_2_ = *(undefined2 *)&pFVar10->field_0x12;
LAB_142876c6a:
  (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.R = fVar14;
  (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.G = fVar15;
  (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.B = fVar16;
  (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.A = fVar17;
  __return_storage_ptr__->ColorUseRule = (char)uVar8;
  __return_storage_ptr__->ColorTableId = (char)((uint)uVar8 >> 8);
  *(short *)&__return_storage_ptr__->field_0x12 = (short)((uint)uVar8 >> 0x10);
  if (local_38.Owner.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_38.Owner.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_38.Owner.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_38.Owner.WeakReferenceCount.ReferenceController,1);
    }
  }
  return __return_storage_ptr__;
}

// GetIconColor @ 142876f40

/* WARNING: Enum "Type": Some values do not have unique names */

FSlateColor * __thiscall SDockTab::GetIconColor(SDockTab *this,FSlateColor *__return_storage_ptr__)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  FLinearColor *pFVar4;
  undefined8 uStack_10;
  
  if ((this->IconColor).bIsSet == false) {
    *(undefined8 *)&(__return_storage_ptr__->SpecifiedColor).field0_0x0 = 0x3f800000;
    (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.B = 1.0;
    (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.A = 1.0;
    __return_storage_ptr__->ColorUseRule = UseColor_Foreground;
    __return_storage_ptr__->ColorTableId = Black;
    return __return_storage_ptr__;
  }
  bVar3 = IsForeground(this);
  if ((!bVar3) && (*(char *)((longlong)&this->_padding_ + 3) == '\0')) {
    pFVar4 = TAttribute<FLinearColor>::Get(&this->IconColor);
    uVar1 = *(undefined8 *)&pFVar4->field0_0x0;
    uVar2 = *(undefined8 *)((longlong)&pFVar4->field0_0x0 + 8);
    __return_storage_ptr__->ColorUseRule = UseColor_Specified;
    uStack_10 = CONCAT44(0x3f333333,(int)uVar2);
    *(undefined8 *)&(__return_storage_ptr__->SpecifiedColor).field0_0x0 = uVar1;
    *(undefined8 *)((longlong)&(__return_storage_ptr__->SpecifiedColor).field0_0x0 + 8) = uStack_10;
    return __return_storage_ptr__;
  }
  pFVar4 = TAttribute<FLinearColor>::Get(&this->IconColor);
  uVar1 = *(undefined8 *)&pFVar4->field0_0x0;
  uVar2 = *(undefined8 *)((longlong)&pFVar4->field0_0x0 + 8);
  __return_storage_ptr__->ColorUseRule = UseColor_Specified;
  *(undefined8 *)&(__return_storage_ptr__->SpecifiedColor).field0_0x0 = uVar1;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->SpecifiedColor).field0_0x0 + 8) = uVar2;
  return __return_storage_ptr__;
}

// GetImageBrush @ 142876ff0

/* WARNING: Enum "Type": Some values do not have unique names */

FSlateBrush * __thiscall SDockTab::GetImageBrush(SDockTab *this)

{
  ETabRole EVar1;
  bool bVar2;
  FSlateBrush *pFVar3;
  longlong lVar4;
  
  EVar1 = GetVisualTabRole(this);
  lVar4 = 0x508;
  if (EVar1 != MajorTab) {
    lVar4 = 0x510;
  }
  lVar4 = *(longlong *)((longlong)&this->_padding_ + lVar4);
  bVar2 = IsForeground(this);
  if (bVar2) {
    return (FSlateBrush *)(lVar4 + 0x5b0);
  }
  pFVar3 = (FSlateBrush *)(lVar4 + 0x3a0);
  if (*(char *)((longlong)&this->_padding_ + 3) != '\0') {
    pFVar3 = (FSlateBrush *)(lVar4 + 0x660);
  }
  return pFVar3;
}

// GetLayoutIdentifier @ 142877350

/* WARNING: Enum "Type": Some values do not have unique names */

FTabId * __thiscall SDockTab::GetLayoutIdentifier(SDockTab *this,FTabId *__return_storage_ptr__)

{
  int iVar1;
  ETabIdFlags EVar2;
  undefined3 uVar3;
  
  iVar1 = (this->LayoutIdentifier).InstanceId;
  EVar2 = (this->LayoutIdentifier).Flags;
  uVar3 = *(undefined3 *)&(this->LayoutIdentifier).field_0xd;
  __return_storage_ptr__->TabType = (this->LayoutIdentifier).TabType;
  __return_storage_ptr__->InstanceId = iVar1;
  __return_storage_ptr__->Flags = EVar2;
  *(undefined3 *)&__return_storage_ptr__->field_0xd = uVar3;
  return __return_storage_ptr__;
}

// GetLeftContent @ 142877370

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
SDockTab::GetLeftContent(SDockTab *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->TabWellContentLeft).Object;
  pTVar1 = (this->TabWellContentLeft).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetOverlapWidth @ 142878a20

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall SDockTab::GetOverlapWidth(SDockTab *this)

{
  ETabRole EVar1;
  longlong lVar2;
  
  EVar1 = GetVisualTabRole(this);
  lVar2 = 0x508;
  if (EVar1 != MajorTab) {
    lVar2 = 0x510;
  }
  return *(float *)(*(longlong *)((longlong)&this->_padding_ + lVar2) + 0xb68);
}

// GetParent @ 142878a60

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<SDockingTabWell,1> * __thiscall
SDockTab::GetParent(SDockTab *this,TSharedPtr<SDockingTabWell,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  SDockingTabWell *pSVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  SDockingTabWell *pSVar5;
  SDockingTabWell *pSVar6;
  bool bVar7;
  
  if ((((this->ParentPtr).Object == (SDockingTabWell *)0x0) ||
      (pTVar1 = (this->ParentPtr).WeakReferenceCount.ReferenceController,
      pTVar1 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar1->SharedReferenceCount < 1)) {
    __return_storage_ptr__->Object = (SDockingTabWell *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    return __return_storage_ptr__;
  }
  pSVar2 = (SDockingTabWell *)(this->ParentPtr).WeakReferenceCount.ReferenceController;
  pSVar5 = pSVar2;
  pSVar6 = (SDockingTabWell *)0x0;
  if (pSVar2 != (SDockingTabWell *)0x0) {
    aVar3 = *(atomic<int> *)&pSVar2->_padding_;
    do {
      pSVar5 = (SDockingTabWell *)0x0;
      pSVar6 = (SDockingTabWell *)0x0;
      if (aVar3 == (atomic<int>)0x0) goto LAB_142878ab2;
      LOCK();
      aVar4 = *(atomic<int> *)&pSVar2->_padding_;
      bVar7 = aVar3 == aVar4;
      if (bVar7) {
        *(atomic<int> *)&pSVar2->_padding_ = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
    } while (!bVar7);
    pSVar5 = pSVar2;
    pSVar6 = (this->ParentPtr).Object;
  }
LAB_142878ab2:
  __return_storage_ptr__->Object = pSVar6;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pSVar5;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// GetParentDockTabStack @ 142878b00

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<SDockingTabStack,1> * __thiscall
SDockTab::GetParentDockTabStack
          (SDockTab *this,TSharedPtr<SDockingTabStack,1> *__return_storage_ptr__)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  SDockingTabWell *this_00;
  bool bVar4;
  
  if ((((this->ParentPtr).Object == (SDockingTabWell *)0x0) ||
      (pTVar3 = (this->ParentPtr).WeakReferenceCount.ReferenceController,
      pTVar3 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar3->SharedReferenceCount < 1)) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    pTVar3 = (this->ParentPtr).WeakReferenceCount.ReferenceController;
    this_00 = (SDockingTabWell *)0x0;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      aVar1 = pTVar3->SharedReferenceCount;
      do {
        if (aVar1 == (atomic<int>)0x0) {
          pTVar3 = (TReferenceControllerBase<1> *)0x0;
          goto LAB_142878b60;
        }
        LOCK();
        aVar2 = pTVar3->SharedReferenceCount;
        bVar4 = aVar1 == aVar2;
        if (bVar4) {
          pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
          aVar2 = aVar1;
        }
        UNLOCK();
        aVar1 = aVar2;
      } while (!bVar4);
      this_00 = (this->ParentPtr).Object;
    }
LAB_142878b60:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    if (this_00 != (SDockingTabWell *)0x0) {
      SDockingTabWell::GetParentDockTabStack(this_00,__return_storage_ptr__);
      goto LAB_142878b9a;
    }
  }
  __return_storage_ptr__->Object = (SDockingTabStack *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
LAB_142878b9a:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return __return_storage_ptr__;
}

// GetParentWindow @ 142878bc0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<SWindow,1> * __thiscall
SDockTab::GetParentWindow(SDockTab *this,TSharedPtr<SWindow,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  SDockingArea *pSVar2;
  SDockingTabWell *this_00;
  code *pcVar3;
  atomic<int> aVar4;
  atomic<int> aVar5;
  TSharedPtr<SWindow,1> *pTVar6;
  FSharedReferencer<1> FVar7;
  TReferenceControllerBase<1> *pTVar8;
  bool bVar9;
  TSharedPtr<SDockingArea,1> local_28;
  TSharedPtr<SWindow,1> local_18;
  
  pTVar1 = (this->ParentDockingAreaPtr).WeakReferenceCount.ReferenceController;
  FVar7.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar8 = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar4 = pTVar1->SharedReferenceCount;
    do {
      pTVar8 = FVar7.ReferenceController;
      if (aVar4 == (atomic<int>)0x0) goto LAB_142878c06;
      LOCK();
      aVar5 = pTVar1->SharedReferenceCount;
      bVar9 = aVar4 == aVar5;
      if (bVar9) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
        aVar5 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar5;
    } while (!bVar9);
    pSVar2 = (this->ParentDockingAreaPtr).Object;
    pTVar8 = pTVar1;
    if (pSVar2 != (SDockingArea *)0x0) {
      local_28.Object = pSVar2;
      local_28.SharedReferenceCount.ReferenceController = pTVar1;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      goto LAB_142878c5b;
    }
  }
LAB_142878c06:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  pTVar1 = (this->ParentPtr).WeakReferenceCount.ReferenceController;
  pTVar8 = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar4 = pTVar1->SharedReferenceCount;
    do {
      pTVar8 = FVar7.ReferenceController;
      if (aVar4 == (atomic<int>)0x0) goto LAB_142878c45;
      LOCK();
      aVar5 = pTVar1->SharedReferenceCount;
      bVar9 = aVar4 == aVar5;
      if (bVar9) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
        aVar5 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar5;
    } while (!bVar9);
    this_00 = (this->ParentPtr).Object;
    pTVar8 = pTVar1;
    if (this_00 != (SDockingTabWell *)0x0) {
      SDockingTabWell::GetDockArea(this_00,&local_28);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      goto LAB_142878c5b;
    }
  }
LAB_142878c45:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  local_28.Object = (SDockingArea *)0x0;
  local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
LAB_142878c5b:
  if (local_28.Object == (SDockingArea *)0x0) {
    __return_storage_ptr__->Object = (SWindow *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    if ((local_28.Object == (SDockingArea *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TSharedPtr<SWindow,1> *)(*pcVar3)();
      return pTVar6;
    }
    pTVar6 = SDockingArea::GetParentWindow(local_28.Object,&local_18);
    __return_storage_ptr__->Object = pTVar6->Object;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (pTVar6->SharedReferenceCount).ReferenceController;
    (pTVar6->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pTVar6->Object = (SWindow *)0x0;
    FVar7.ReferenceController = local_18.SharedReferenceCount.ReferenceController;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar7.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// GetRightContent @ 142879db0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
SDockTab::GetRightContent(SDockTab *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->TabWellContentRight).Object;
  pTVar1 = (this->TabWellContentRight).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetTabColor @ 14287af20

/* WARNING: Enum "Type": Some values do not have unique names */

FSlateColor * __thiscall SDockTab::GetTabColor(SDockTab *this,FSlateColor *__return_storage_ptr__)

{
  undefined8 uVar1;
  FLinearColor *pFVar2;
  
  pFVar2 = TAttribute<FLinearColor>::Get(&this->TabColorScale);
  __return_storage_ptr__->ColorUseRule = UseColor_Specified;
  uVar1 = *(undefined8 *)((longlong)&pFVar2->field0_0x0 + 8);
  *(undefined8 *)&(__return_storage_ptr__->SpecifiedColor).field0_0x0 =
       *(undefined8 *)&pFVar2->field0_0x0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->SpecifiedColor).field0_0x0 + 8) = uVar1;
  return __return_storage_ptr__;
}

// GetTabIcon @ 14287af50

/* WARNING: Enum "Type": Some values do not have unique names */

FSlateBrush * __thiscall SDockTab::GetTabIcon(SDockTab *this)

{
  FSlateBrush **ppFVar1;
  
  ppFVar1 = TAttribute<FSlateBrush_const_*>::Get(&this->TabIcon);
  return *ppFVar1;
}

// GetTabIconBorderPadding @ 14287af70

/* WARNING: Enum "Type": Some values do not have unique names */

FMargin * __thiscall
SDockTab::GetTabIconBorderPadding(SDockTab *this,FMargin *__return_storage_ptr__)

{
  float fVar1;
  ETabRole EVar2;
  longlong lVar3;
  
  EVar2 = GetVisualTabRole(this);
  lVar3 = 0x508;
  if (EVar2 != MajorTab) {
    lVar3 = 0x510;
  }
  fVar1 = *(float *)(*(longlong *)((longlong)&this->_padding_ + lVar3) + 0xbd0);
  __return_storage_ptr__->Left = fVar1;
  __return_storage_ptr__->Top = fVar1;
  __return_storage_ptr__->Right = fVar1;
  __return_storage_ptr__->Bottom = fVar1;
  return __return_storage_ptr__;
}

// GetTabIconSize @ 14287afc0

/* WARNING: Enum "Type": Some values do not have unique names */

TOptional<UE::Math::TVector2<double>_> * __thiscall
SDockTab::GetTabIconSize
          (SDockTab *this,TOptional<UE::Math::TVector2<double>_> *__return_storage_ptr__)

{
  float fVar1;
  ETabRole EVar2;
  longlong lVar3;
  
  EVar2 = GetVisualTabRole(this);
  lVar3 = 0x508;
  if (EVar2 != MajorTab) {
    lVar3 = 0x510;
  }
  lVar3 = *(longlong *)((longlong)&this->_padding_ + lVar3);
  fVar1 = *(float *)(lVar3 + 0xb64);
  (__return_storage_ptr__->TypedValue).field0_0x0._s_0.X = (double)*(float *)(lVar3 + 0xb60);
  (__return_storage_ptr__->TypedValue).field0_0x0._s_0.Y = (double)fVar1;
  __return_storage_ptr__->bIsSet = true;
  return __return_storage_ptr__;
}

// GetTabLabel @ 14287b030

/* WARNING: Enum "Type": Some values do not have unique names */

FText * __thiscall SDockTab::GetTabLabel(SDockTab *this,FText *__return_storage_ptr__)

{
  ITextData *pIVar1;
  FText *pFVar2;
  undefined1 local_res8 [8];
  
  pFVar2 = TAttribute<FText>::Get(&this->TabLabel);
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar1 = (pFVar2->TextData).Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  __return_storage_ptr__->Flags = pFVar2->Flags;
  return __return_storage_ptr__;
}

// GetTabLabelSuffix @ 14287b090

/* WARNING: Enum "Type": Some values do not have unique names */

FText * __thiscall SDockTab::GetTabLabelSuffix(SDockTab *this,FText *__return_storage_ptr__)

{
  ITextData *pIVar1;
  FText *pFVar2;
  undefined1 local_res8 [8];
  
  pFVar2 = TAttribute<FText>::Get(&this->TabLabelSuffix);
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar1 = (pFVar2->TextData).Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  __return_storage_ptr__->Flags = pFVar2->Flags;
  return __return_storage_ptr__;
}

// GetTabManager @ 14287b0f0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<FTabManager,1> * __thiscall
SDockTab::GetTabManager(SDockTab *this,TSharedRef<FTabManager,1> *__return_storage_ptr__)

{
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TSharedRef<FTabManager,1> *pTVar4;
  FTabManager *pFVar5;
  FTabManager *pFVar6;
  FTabManager *pFVar7;
  bool bVar8;
  
  pFVar6 = (FTabManager *)(this->MyTabManager).WeakReferenceCount.ReferenceController;
  pFVar7 = (FTabManager *)0x0;
  pFVar5 = pFVar6;
  if (pFVar6 != (FTabManager *)0x0) {
    aVar2 = *(atomic<int> *)&pFVar6->_padding_;
    do {
      pFVar5 = pFVar7;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14287b131;
      LOCK();
      aVar3 = *(atomic<int> *)&pFVar6->_padding_;
      bVar8 = aVar2 == aVar3;
      if (bVar8) {
        *(atomic<int> *)&pFVar6->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar8);
    pFVar7 = (this->MyTabManager).Object;
    pFVar5 = pFVar6;
    if (pFVar7 != (FTabManager *)0x0) goto LAB_14287b157;
  }
LAB_14287b131:
  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x416,L"");
  pFVar6 = pFVar5;
  if (bVar8) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TSharedRef<FTabManager,1> *)(*pcVar1)();
    return pTVar4;
  }
LAB_14287b157:
  __return_storage_ptr__->Object = pFVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pFVar6;
  if ((pFVar7 == (FTabManager *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TSharedRef<FTabManager,1> *)(*pcVar1)();
    return pTVar4;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// GetTabManagerPtr @ 14287b1c0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FTabManager,1> * __thiscall
SDockTab::GetTabManagerPtr(SDockTab *this,TSharedPtr<FTabManager,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  bool bVar4;
  
  __return_storage_ptr__->Object = (FTabManager *)0x0;
  pTVar1 = (this->MyTabManager).WeakReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar1->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        break;
      }
      LOCK();
      aVar3 = pTVar1->SharedReferenceCount;
      bVar4 = aVar2 == aVar3;
      if (bVar4) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar4);
  }
  if ((__return_storage_ptr__->SharedReferenceCount).ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (this->MyTabManager).Object;
  }
  return __return_storage_ptr__;
}

// GetTabPadding @ 14287b210

/* WARNING: Enum "Type": Some values do not have unique names */

FMargin * __thiscall SDockTab::GetTabPadding(SDockTab *this,FMargin *__return_storage_ptr__)

{
  float fVar1;
  float fVar2;
  ETabRole EVar3;
  longlong lVar4;
  float fVar5;
  
  EVar3 = GetVisualTabRole(this);
  lVar4 = 0x508;
  if (EVar3 != MajorTab) {
    lVar4 = 0x510;
  }
  lVar4 = *(longlong *)((longlong)&this->_padding_ + lVar4);
  fVar5 = *(float *)(lVar4 + 0xb54);
  fVar1 = *(float *)(lVar4 + 0xb58);
  fVar2 = *(float *)(lVar4 + 0xb5c);
  __return_storage_ptr__->Left = *(float *)(lVar4 + 0xb50);
  __return_storage_ptr__->Top = fVar5;
  __return_storage_ptr__->Right = fVar1;
  __return_storage_ptr__->Bottom = fVar2;
  fVar5 = fVar5 * __real_3f59999a;
  __return_storage_ptr__->Bottom = __return_storage_ptr__->Bottom * __real_3f59999a;
  __return_storage_ptr__->Top = fVar5;
  return __return_storage_ptr__;
}

// GetTabRole @ 14287b280

/* WARNING: Enum "Type": Some values do not have unique names */

ETabRole __thiscall SDockTab::GetTabRole(SDockTab *this)

{
  return this->TabRole;
}

// GetTabWellBrush @ 14287b290

/* WARNING: Enum "Type": Some values do not have unique names */

FSlateBrush * __thiscall SDockTab::GetTabWellBrush(SDockTab *this)

{
  ETabRole EVar1;
  longlong lVar2;
  
  EVar1 = GetVisualTabRole(this);
  lVar2 = 0x508;
  if (EVar1 != MajorTab) {
    lVar2 = 0x510;
  }
  return (FSlateBrush *)(*(longlong *)((longlong)&this->_padding_ + lVar2) + 0x7c0);
}

// GetTitleBarRightContent @ 14287cef0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
SDockTab::GetTitleBarRightContent(SDockTab *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->TitleBarContentRight).Object;
  pTVar1 = (this->TitleBarContentRight).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetVisualTabRole @ 14287dcf0

/* WARNING: Enum "Type": Some values do not have unique names */

ETabRole __thiscall SDockTab::GetVisualTabRole(SDockTab *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SDockingTabWell *pSVar2;
  code *pcVar3;
  bool bVar4;
  atomic<int> aVar5;
  bool bVar6;
  ETabRole EVar7;
  atomic<int> aVar8;
  TSharedRef<FGlobalTabmanager,1> *pTVar9;
  TSharedRef<FTabManager,1> *pTVar10;
  TSharedPtr<SDockingTabWell,1> *pTVar11;
  TSharedPtr<SDockingArea,1> *pTVar12;
  SDockingTabWell *pSVar13;
  SDockingArea *this_00;
  SDockingTabWell *pSVar14;
  bool bVar15;
  TSharedPtr<SDockingTabWell,1> local_a8;
  TSharedRef<FTabManager,1> local_98;
  undefined8 local_88;
  undefined8 local_80;
  TSharedPtr<SDockingArea,1> local_78;
  TSharedPtr<SDockingTabWell,1> local_68;
  TSharedRef<FTabManager,1> local_58;
  TSharedPtr<SDockingArea,1> local_48;
  TSharedPtr<SDockingTabWell,1> local_38 [2];
  
  pSVar13 = (SDockingTabWell *)0x0;
  if (this->TabRole != NomadTab) goto LAB_14287df9c;
  if ((this->DraggedOverDockingArea).Object == (SDockingArea *)0x0) {
    if ((((this->ParentPtr).Object == (SDockingTabWell *)0x0) ||
        (pTVar1 = (this->ParentPtr).WeakReferenceCount.ReferenceController,
        pTVar1 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar1->SharedReferenceCount < 1)) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      bVar4 = false;
      bVar6 = false;
LAB_14287de88:
      bVar15 = false;
    }
    else {
      pSVar2 = (SDockingTabWell *)(this->ParentPtr).WeakReferenceCount.ReferenceController;
      pSVar14 = pSVar2;
      if (pSVar2 != (SDockingTabWell *)0x0) {
        aVar5 = *(atomic<int> *)&pSVar2->_padding_;
        do {
          pSVar14 = pSVar13;
          if (aVar5 == (atomic<int>)0x0) goto LAB_14287dde5;
          LOCK();
          aVar8 = *(atomic<int> *)&pSVar2->_padding_;
          bVar6 = aVar5 == aVar8;
          if (bVar6) {
            *(atomic<int> *)&pSVar2->_padding_ = (atomic<int>)((int)aVar5 + 1);
            aVar8 = aVar5;
          }
          UNLOCK();
          aVar5 = aVar8;
        } while (!bVar6);
        pSVar13 = (this->ParentPtr).Object;
        pSVar14 = pSVar2;
      }
LAB_14287dde5:
      local_80 = 0;
      local_88 = 0;
      bVar4 = false;
      bVar6 = false;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      bVar15 = pSVar13 == (SDockingTabWell *)0x0;
      pSVar13 = pSVar14;
      if (bVar15) goto LAB_14287de88;
      pTVar11 = GetParent(this,&local_68);
      if ((pTVar11->Object == (SDockingTabWell *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        EVar7 = (*pcVar3)();
        return EVar7;
      }
      bVar4 = true;
      bVar6 = true;
      pTVar12 = SDockingTabWell::GetDockArea(pTVar11->Object,&local_78);
      if (pTVar12->Object == (SDockingArea *)0x0) goto LAB_14287de88;
      bVar15 = true;
    }
    if (bVar6) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_78.SharedReferenceCount.ReferenceController);
    }
    if (bVar4) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_68.SharedReferenceCount.ReferenceController);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar13);
    if (!bVar15) {
      pTVar11 = GetParent(this,&local_a8);
      if ((pTVar11->Object == (SDockingTabWell *)0x0) &&
         ((((this->ParentDockingAreaPtr).Object == (SDockingArea *)0x0 ||
           (pTVar1 = (this->ParentDockingAreaPtr).WeakReferenceCount.ReferenceController,
           pTVar1 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar1->SharedReferenceCount < 1)
          ))) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_a8.SharedReferenceCount.ReferenceController);
        return MajorTab;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_a8.SharedReferenceCount.ReferenceController);
      goto LAB_14287df9c;
    }
    pTVar9 = FGlobalTabmanager::Get();
    pTVar11 = GetParent(this,local_38);
    pSVar13 = TSharedPtr<SDockingTabWell,1>::operator->(pTVar11);
    pTVar12 = SDockingTabWell::GetDockArea(pSVar13,&local_48);
    this_00 = TSharedPtr<SDockingArea,1>::operator->(pTVar12);
    pTVar10 = SDockingArea::GetTabManager(this_00,&local_58);
    bVar6 = (FGlobalTabmanager *)pTVar10->Object == pTVar9->Object;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
    local_98.SharedReferenceCount.ReferenceController =
         local_38[0].SharedReferenceCount.ReferenceController;
  }
  else {
    pTVar9 = FGlobalTabmanager::Get();
    if (((this->DraggedOverDockingArea).Object == (SDockingArea *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      EVar7 = (*pcVar3)();
      return EVar7;
    }
    pTVar10 = SDockingArea::GetTabManager((this->DraggedOverDockingArea).Object,&local_98);
    bVar6 = (FGlobalTabmanager *)pTVar10->Object == pTVar9->Object;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  if (bVar6) {
    return MajorTab;
  }
LAB_14287df9c:
  return this->TabRole;
}

// HandleIsCloseButtonVisible @ 14287eff0

/* WARNING: Enum "Type": Some values do not have unique names */

EVisibility __thiscall SDockTab::HandleIsCloseButtonVisible(SDockTab *this)

{
  FTabManager *pFVar1;
  atomic<int> aVar2;
  bool bVar3;
  bool bVar4;
  EVisibility EVar5;
  atomic<int> aVar6;
  TSharedRef<SWidget_const_,1> *pTVar7;
  uchar *in_RDX;
  FTabManager *pFVar8;
  FTabManager *pFVar9;
  FTabManager *this_00;
  bool bVar10;
  TSharedRef<SDockTab_const_,1> local_38;
  TSharedRef<SWidget_const_,1> local_28;
  
  pFVar1 = (FTabManager *)(this->MyTabManager).WeakReferenceCount.ReferenceController;
  pFVar9 = (FTabManager *)0x0;
  pFVar8 = pFVar1;
  this_00 = pFVar9;
  if (pFVar1 != (FTabManager *)0x0) {
    aVar2 = *(atomic<int> *)&pFVar1->_padding_;
    do {
      pFVar8 = pFVar9;
      this_00 = (FTabManager *)0x0;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14287f034;
      LOCK();
      aVar6 = *(atomic<int> *)&pFVar1->_padding_;
      bVar10 = aVar2 == aVar6;
      if (bVar10) {
        *(atomic<int> *)&pFVar1->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar6 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar6;
    } while (!bVar10);
    pFVar8 = pFVar1;
    this_00 = (this->MyTabManager).Object;
  }
LAB_14287f034:
  if ((*(char *)((longlong)&this->_padding_ + 3) != '\0') || (bVar10 = IsForeground(this), bVar10))
  {
    bVar10 = true;
  }
  else {
    bVar10 = false;
  }
  if (this_00 != (FTabManager *)0x0) {
    pTVar7 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_28);
    local_38.Object = (SDockTab *)pTVar7->Object;
    local_38.SharedReferenceCount.ReferenceController =
         (pTVar7->SharedReferenceCount).ReferenceController;
    if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
    pFVar9 = (FTabManager *)&DAT_00000001;
    bVar3 = FTabManager::IsTabCloseable(this_00,&local_38);
    if (!bVar3) {
      bVar3 = false;
      goto LAB_14287f0b1;
    }
  }
  bVar3 = true;
LAB_14287f0b1:
  if (pFVar9 != (FTabManager *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
  }
  if ((((this->bCanEverClose == false) || (bVar4 = IsTabLocked(this), bVar4)) || (!bVar10)) ||
     (EVar5 = EVisibility::Visible, !bVar3)) {
    EVar5.Value.Value = EVisibility::Hidden.Value.Value;
  }
  *in_RDX = (uchar)EVar5.Value.Value;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar8);
  return (EVisibility)SUB81(in_RDX,0);
}

// HasSiblingTab @ 14287fb20

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall SDockTab::HasSiblingTab(SDockTab *this,FTabId *param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TSharedPtr<SDockingTabStack,1> local_38;
  FTabMatcher local_28;
  
  GetParentDockTabStack(this,&local_38);
  if (local_38.Object == (SDockingTabStack *)0x0) {
    bVar2 = false;
  }
  else {
    if ((local_38.Object == (SDockingTabStack *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    local_28.TabIdToMatch.TabType = param_1->TabType;
    local_28.TabIdToMatch.InstanceId = param_1->InstanceId;
    local_28.TabIdToMatch.Flags = param_1->Flags;
    local_28.TabIdToMatch._13_3_ = *(undefined3 *)&param_1->field_0xd;
    local_28.RequiredTabState = SidebarTab|ClosedTab|OpenedTab;
    local_28.TreatIndexNoneAsWildcard = param_2;
    bVar2 = SDockingTabStack::HasTab(local_38.Object,&local_28);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  return bVar2;
}

// IsActive @ 142881a60

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall SDockTab::IsActive(SDockTab *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SDockTab *pSVar2;
  TSharedRef<SWidget_const_,1> *pTVar3;
  TSharedRef<FGlobalTabmanager,1> *pTVar4;
  TSharedPtr<SDockTab,1> *pTVar5;
  bool bVar6;
  TSharedRef<SWidget_const_,1> local_28;
  TSharedPtr<SDockTab,1> local_18;
  
  pTVar3 = TSharedFromThis<SWidget,1>::AsShared
                     ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_28);
  pTVar1 = (pTVar3->SharedReferenceCount).ReferenceController;
  pSVar2 = (SDockTab *)pTVar3->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  pTVar4 = FGlobalTabmanager::Get();
  pTVar5 = FGlobalTabmanager::GetActiveTab(pTVar4->Object,&local_18);
  if ((pTVar5->Object == (SDockTab *)0x0) || (pTVar5->Object != pSVar2)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return bVar6;
}

// IsForeground @ 142881ca0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall SDockTab::IsForeground(SDockTab *this)

{
  SDockTab *pSVar1;
  code *pcVar2;
  atomic<int> aVar3;
  undefined1 uVar4;
  atomic<int> aVar5;
  TSharedRef<SWidget_const_,1> *pTVar6;
  TSharedPtr<SDockTab,1> *pTVar7;
  SDockingTabWell *this_00;
  TReferenceControllerBase<1> *pTVar8;
  SDockingTabWell *pSVar9;
  SDockingTabWell *pSVar10;
  bool bVar11;
  uint uStackX_c;
  TSharedRef<SWidget_const_,1> local_38;
  TSharedPtr<SDockTab,1> local_28;
  
  this_00 = (SDockingTabWell *)0x0;
  if ((((this->ParentPtr).Object == (SDockingTabWell *)0x0) ||
      (pTVar8 = (this->ParentPtr).WeakReferenceCount.ReferenceController,
      pTVar8 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar8->SharedReferenceCount < 1)) {
    pSVar10 = (SDockingTabWell *)((ulonglong)uStackX_c << 0x20);
    bVar11 = true;
    pTVar8 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
    goto LAB_142881dac;
  }
  pTVar6 = TSharedFromThis<SWidget,1>::AsShared
                     ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_38);
  pTVar8 = (pTVar6->SharedReferenceCount).ReferenceController;
  pSVar1 = (SDockTab *)pTVar6->Object;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  pSVar10 = (SDockingTabWell *)(this->ParentPtr).WeakReferenceCount.ReferenceController;
  pSVar9 = pSVar10;
  if (pSVar10 == (SDockingTabWell *)0x0) {
LAB_142881d33:
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    pSVar10 = pSVar9;
    if (bVar11) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  else {
    aVar3 = *(atomic<int> *)&pSVar10->_padding_;
    do {
      pSVar9 = this_00;
      if (aVar3 == (atomic<int>)0x0) goto LAB_142881d33;
      LOCK();
      aVar5 = *(atomic<int> *)&pSVar10->_padding_;
      bVar11 = aVar3 == aVar5;
      if (bVar11) {
        *(atomic<int> *)&pSVar10->_padding_ = (atomic<int>)((int)aVar3 + 1);
        aVar5 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar5;
    } while (!bVar11);
    this_00 = (this->ParentPtr).Object;
    pSVar9 = pSVar10;
    if (this_00 == (SDockingTabWell *)0x0) goto LAB_142881d33;
  }
  pTVar7 = SDockingTabWell::GetForegroundTab(this_00,&local_28);
  if ((pTVar7->Object == (SDockTab *)0x0) || (pTVar7->Object != pSVar1)) {
    bVar11 = false;
    this_00 = (SDockingTabWell *)&DAT_00000007;
  }
  else {
    bVar11 = true;
    this_00 = (SDockingTabWell *)&DAT_00000007;
  }
LAB_142881dac:
  if (((ulonglong)this_00 & 4) != 0) {
    this_00 = (SDockingTabWell *)(ulonglong)((uint)this_00 & 0xfffffffb);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  if (((ulonglong)this_00 & 2) != 0) {
    this_00 = (SDockingTabWell *)(ulonglong)((uint)this_00 & 0xfffffffd);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar10);
  }
  if (((ulonglong)this_00 & 1) != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
  return bVar11;
}

// IsTabLocked @ 1428829d0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall SDockTab::IsTabLocked(SDockTab *this)

{
  bool bVar1;
  TSharedRef<SWidget_const_,1> *pTVar2;
  bool bVar3;
  TSharedRef<SDockTab_const_,1> local_38;
  TSharedPtr<SDockingTabStack,1> local_28;
  TSharedRef<SWidget_const_,1> local_18;
  
  bVar3 = false;
  GetParentDockTabStack(this,&local_28);
  bVar1 = false;
  if (local_28.Object != (SDockingTabStack *)0x0) {
    pTVar2 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_18);
    local_38.Object = (SDockTab *)pTVar2->Object;
    local_38.SharedReferenceCount.ReferenceController =
         (pTVar2->SharedReferenceCount).ReferenceController;
    if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    bVar1 = SDockingTabStack::IsTabLocked(local_28.Object,&local_38);
    bVar3 = true;
  }
  if (bVar3) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return bVar1;
}

// IsTabNameHidden @ 142882a80

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall SDockTab::IsTabNameHidden(SDockTab *this)

{
  return this->bIsTabNameHidden;
}

// NotifyTabRelocated @ 142884c40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SDockTab::NotifyTabRelocated(SDockTab *this)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnTabRelocated,
             &local_28);
  if ((*(int *)&(this->OnTabRelocated).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->OnTabRelocated).field_0x8, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// OnCloseButtonClicked @ 142885160

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall SDockTab::OnCloseButtonClicked(SDockTab *this,FReply *__return_storage_ptr__)

{
  RequestCloseTab(this);
  FReply::FReply(__return_storage_ptr__,true);
  return __return_storage_ptr__;
}

// OnDragDetected @ 142885530

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SDockTab::OnDragDetected
          (SDockTab *this,FReply *__return_storage_ptr__,FGeometry *param_1,FPointerEvent *param_2)

{
  SDockingTabWell *this_00;
  FTabManager *pFVar1;
  double dVar2;
  double dVar3;
  atomic<int> aVar4;
  bool bVar5;
  atomic<int> aVar6;
  TTransform2<float> *pTVar7;
  TSharedRef<SWidget,1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  float fVar11;
  undefined1 local_88 [16];
  TTransform2<float> local_78 [3];
  
  bVar5 = IsTabLocked(this);
  if (bVar5) {
    FReply::FReply(__return_storage_ptr__,false);
    return __return_storage_ptr__;
  }
  pTVar7 = Inverse<TTransform2<float>_>(local_78,&param_1->AccumulatedRenderTransform);
  pTVar10 = (this->ParentPtr).WeakReferenceCount.ReferenceController;
  local_88._0_4_ = SUB84(param_2->ScreenSpacePosition,0);
  local_88._4_4_ = SUB84(param_2->ScreenSpacePosition,4);
  fVar11 = (float)local_88._4_4_ * (pTVar7->M).M[1][0] + (float)local_88._0_4_ * (pTVar7->M).M[0][0]
           + (pTVar7->Trans).field0_0x0._s_0.X;
  local_88._4_4_ =
       (float)local_88._4_4_ * (pTVar7->M).M[1][1] + (float)local_88._0_4_ * (pTVar7->M).M[0][1] +
       (pTVar7->Trans).field0_0x0._s_0.Y;
  local_88._0_4_ = fVar11;
  local_78[0].M.M[0] = *(float (*) [2])&param_1->Size;
  dVar2 = (double)fVar11 / (double)local_78[0].M.M[0][0];
  if (__real_3ff0000000000000 <= dVar2) {
    dVar2 = __real_3ff0000000000000;
  }
  if (dVar2 <= 0.0) {
    dVar2 = 0.0;
  }
  dVar3 = (double)(float)local_88._4_4_ / (double)local_78[0].M.M[0][1];
  if (__real_3ff0000000000000 <= dVar3) {
    dVar3 = __real_3ff0000000000000;
  }
  if (dVar3 <= 0.0) {
    dVar3 = 0.0;
  }
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    aVar4 = pTVar10->SharedReferenceCount;
    do {
      if (aVar4 == (atomic<int>)0x0) {
        pTVar10 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142885662;
      }
      LOCK();
      aVar6 = pTVar10->SharedReferenceCount;
      bVar5 = aVar4 == aVar6;
      if (bVar5) {
        pTVar10->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
        aVar6 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar6;
    } while (!bVar5);
    this_00 = (this->ParentPtr).Object;
    if (this_00 != (SDockingTabWell *)0x0) {
      pTVar9 = (this->MyTabManager).WeakReferenceCount.ReferenceController;
      if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
        aVar4 = pTVar9->SharedReferenceCount;
        do {
          if (aVar4 == (atomic<int>)0x0) {
            pTVar9 = (TReferenceControllerBase<1> *)0x0;
            goto LAB_1428856d0;
          }
          LOCK();
          aVar6 = pTVar9->SharedReferenceCount;
          bVar5 = aVar4 == aVar6;
          if (bVar5) {
            pTVar9->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
            aVar6 = aVar4;
          }
          UNLOCK();
          aVar4 = aVar6;
        } while (!bVar5);
        pFVar1 = (this->MyTabManager).Object;
        if ((pFVar1 != (FTabManager *)0x0) && (pFVar1->bCanDoDragOperation != false)) {
          pTVar8 = TSharedFromThis<SWidget,1>::AsShared
                             ((TSharedFromThis<SWidget,1> *)&this->_padding_,
                              (TSharedRef<SWidget,1> *)local_88);
          local_78[0].M.M[0] = (float  [2])pTVar8->Object;
          local_78[0].M.M[1] = (float  [2])(pTVar8->SharedReferenceCount).ReferenceController;
          if (local_78[0].M.M[1] != (float  [2])0x0) {
            LOCK();
            *(atomic<int> *)((longlong)local_78[0].M.M[1] + 8) =
                 (atomic<int>)((int)*(atomic<int> *)((longlong)local_78[0].M.M[1] + 8) + 1);
            UNLOCK();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)local_88._8_8_);
          local_88._8_4_ = SUB84(dVar3,0);
          local_88._0_8_ = dVar2;
          local_88._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
          SDockingTabWell::StartDraggingTab
                    (this_00,__return_storage_ptr__,(TSharedRef<SDockTab,1> *)local_78,
                     (TVector2<double> *)local_88,param_2);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar9);
          goto LAB_14288566c;
        }
      }
LAB_1428856d0:
      FReply::FReply(__return_storage_ptr__,true);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
      goto LAB_14288566c;
    }
  }
LAB_142885662:
  FReply::FReply(__return_storage_ptr__,false);
LAB_14288566c:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  return __return_storage_ptr__;
}

// OnDragEnter @ 142885820

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SDockTab::OnDragEnter(SDockTab *this,FGeometry *param_1,FDragDropEvent *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  TDelegate<EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy> *pTVar5;
  TSharedRef<FActiveTimerHandle,1> *pTVar6;
  code *local_48;
  ulonglong uStack_40;
  TSharedRef<FActiveTimerHandle,1> local_38;
  TDelegate<EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy> local_28;
  
  if ((((this->DragDropTimerHandle).Object == (FActiveTimerHandle *)0x0) ||
      (pTVar3 = (this->DragDropTimerHandle).WeakReferenceCount.ReferenceController,
      pTVar3 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar3->SharedReferenceCount < 1)) {
    uStack_40 = uStack_40 & 0xffffffff00000000;
    local_48 = TriggerActivateTab;
    pTVar5 = TDelegate<enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
             ::CreateSP<SDockTab>(&local_28,this,(pmf_f75ffe94 *)&local_48);
    pTVar6 = SWidget::RegisterActiveTimer((SWidget *)this,&local_38,__real_3f400000,pTVar5);
    (this->DragDropTimerHandle).Object = pTVar6->Object;
    pTVar3 = (pTVar6->SharedReferenceCount).ReferenceController;
    if (pTVar3 != (this->DragDropTimerHandle).WeakReferenceCount.ReferenceController) {
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
        UNLOCK();
      }
      pTVar4 = (this->DragDropTimerHandle).WeakReferenceCount.ReferenceController;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar4->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
        }
      }
      (this->DragDropTimerHandle).WeakReferenceCount.ReferenceController = pTVar3;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
  }
  UpdateTabStyle(this);
  SWidget::OnDragEnter((SWidget *)this,param_1,param_2);
  return;
}

// OnDragLeave @ 1428859e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SDockTab::OnDragLeave(SDockTab *this,FDragDropEvent *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  FActiveTimerHandle *pFVar5;
  FActiveTimerHandle *pFVar6;
  bool bVar7;
  TSharedRef<FActiveTimerHandle,1> local_18;
  
  if ((((this->DragDropTimerHandle).Object == (FActiveTimerHandle *)0x0) ||
      (pTVar1 = (this->DragDropTimerHandle).WeakReferenceCount.ReferenceController,
      pTVar1 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar1->SharedReferenceCount < 1))
  goto LAB_142885ad8;
  local_18.SharedReferenceCount.ReferenceController =
       (this->DragDropTimerHandle).WeakReferenceCount.ReferenceController;
  pFVar6 = (FActiveTimerHandle *)0x0;
  pFVar5 = (FActiveTimerHandle *)local_18.SharedReferenceCount.ReferenceController;
  if ((FActiveTimerHandle *)local_18.SharedReferenceCount.ReferenceController ==
      (FActiveTimerHandle *)0x0) {
LAB_142885a55:
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar5;
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    aVar3 = *(atomic<int> *)
             &((FActiveTimerHandle *)local_18.SharedReferenceCount.ReferenceController)->
              TimerFunction;
    do {
      pFVar5 = pFVar6;
      if (aVar3 == (atomic<int>)0x0) goto LAB_142885a55;
      LOCK();
      aVar4 = *(atomic<int> *)
               &((FActiveTimerHandle *)local_18.SharedReferenceCount.ReferenceController)->
                TimerFunction;
      bVar7 = aVar3 == aVar4;
      if (bVar7) {
        *(int *)&((FActiveTimerHandle *)local_18.SharedReferenceCount.ReferenceController)->
                 TimerFunction = (int)aVar3 + 1;
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
    } while (!bVar7);
    pFVar6 = (this->DragDropTimerHandle).Object;
    pFVar5 = (FActiveTimerHandle *)local_18.SharedReferenceCount.ReferenceController;
    if (pFVar6 == (FActiveTimerHandle *)0x0) goto LAB_142885a55;
  }
  local_18.Object = pFVar6;
  if ((pFVar6 == (FActiveTimerHandle *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar7)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  SWidget::UnRegisterActiveTimer((SWidget *)this,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
LAB_142885ad8:
  SWidget::OnDragLeave((SWidget *)this,param_1);
  return;
}

// OnDrop @ 142885d30

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SDockTab::OnDrop(SDockTab *this,FReply *__return_storage_ptr__,FGeometry *param_1,
                FDragDropEvent *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  FReply *pFVar5;
  FActiveTimerHandle *pFVar6;
  FActiveTimerHandle *pFVar7;
  bool bVar8;
  TSharedRef<FActiveTimerHandle,1> local_28;
  
  if ((((this->DragDropTimerHandle).Object == (FActiveTimerHandle *)0x0) ||
      (pTVar1 = (this->DragDropTimerHandle).WeakReferenceCount.ReferenceController,
      pTVar1 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar1->SharedReferenceCount < 1))
  goto LAB_142885e2a;
  local_28.SharedReferenceCount.ReferenceController =
       (this->DragDropTimerHandle).WeakReferenceCount.ReferenceController;
  pFVar7 = (FActiveTimerHandle *)0x0;
  pFVar6 = (FActiveTimerHandle *)local_28.SharedReferenceCount.ReferenceController;
  if ((FActiveTimerHandle *)local_28.SharedReferenceCount.ReferenceController ==
      (FActiveTimerHandle *)0x0) {
LAB_142885da7:
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar6;
    if (bVar8) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FReply *)(*pcVar2)();
      return pFVar5;
    }
  }
  else {
    aVar3 = *(atomic<int> *)
             &((FActiveTimerHandle *)local_28.SharedReferenceCount.ReferenceController)->
              TimerFunction;
    do {
      pFVar6 = pFVar7;
      if (aVar3 == (atomic<int>)0x0) goto LAB_142885da7;
      LOCK();
      aVar4 = *(atomic<int> *)
               &((FActiveTimerHandle *)local_28.SharedReferenceCount.ReferenceController)->
                TimerFunction;
      bVar8 = aVar3 == aVar4;
      if (bVar8) {
        *(int *)&((FActiveTimerHandle *)local_28.SharedReferenceCount.ReferenceController)->
                 TimerFunction = (int)aVar3 + 1;
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
    } while (!bVar8);
    pFVar7 = (this->DragDropTimerHandle).Object;
    pFVar6 = (FActiveTimerHandle *)local_28.SharedReferenceCount.ReferenceController;
    if (pFVar7 == (FActiveTimerHandle *)0x0) goto LAB_142885da7;
  }
  local_28.Object = pFVar7;
  if ((pFVar7 == (FActiveTimerHandle *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FReply *)(*pcVar2)();
    return pFVar5;
  }
  SWidget::UnRegisterActiveTimer((SWidget *)this,&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
LAB_142885e2a:
  SWidget::OnDrop((SWidget *)this,__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// OnHandleUpdateStyle @ 142886800

/* WARNING: Enum "Type": Some values do not have unique names */

EActiveTimerReturnType __thiscall
SDockTab::OnHandleUpdateStyle(SDockTab *this,double param_1,float param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  atomic<int> aVar4;
  EActiveTimerReturnType EVar5;
  atomic<int> aVar6;
  SDockingTabWell **ppSVar7;
  TSharedPtr<SDockingArea,1> *pTVar8;
  SDockingTabWell *pSVar9;
  SDockingTabWell *this_00;
  SDockingTabWell *pSVar10;
  SDockingTabWell *pSVar11;
  bool bVar12;
  bool bVar13;
  uint uStackX_c;
  SDockingTabWell *local_68;
  TReferenceControllerBase<1> *local_60;
  SDockingTabWell *local_58;
  TReferenceControllerBase<1> *local_50;
  undefined8 local_48;
  undefined8 local_40;
  TSharedPtr<SDockingArea,1> local_38 [2];
  
  this_00 = (SDockingTabWell *)0x0;
  if ((((this->ParentPtr).Object == (SDockingTabWell *)0x0) ||
      (pTVar1 = (this->ParentPtr).WeakReferenceCount.ReferenceController,
      pTVar1 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar1->SharedReferenceCount < 1)) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    pSVar10 = this_00;
LAB_1428869b1:
    bVar3 = false;
    bVar12 = false;
    pSVar11 = (SDockingTabWell *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pSVar11 = (SDockingTabWell *)(this->ParentPtr).WeakReferenceCount.ReferenceController;
    pSVar9 = this_00;
    pSVar10 = pSVar11;
    if (pSVar11 != (SDockingTabWell *)0x0) {
      aVar4 = *(atomic<int> *)&pSVar11->_padding_;
      do {
        pSVar9 = (SDockingTabWell *)0x0;
        pSVar10 = this_00;
        if (aVar4 == (atomic<int>)0x0) goto LAB_142886885;
        LOCK();
        aVar6 = *(atomic<int> *)&pSVar11->_padding_;
        bVar12 = aVar4 == aVar6;
        if (bVar12) {
          *(atomic<int> *)&pSVar11->_padding_ = (atomic<int>)((int)aVar4 + 1);
          aVar6 = aVar4;
        }
        UNLOCK();
        aVar4 = aVar6;
      } while (!bVar12);
      pSVar9 = (this->ParentPtr).Object;
      pSVar10 = pSVar11;
    }
LAB_142886885:
    local_40 = 0;
    local_48 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    if (pSVar9 == (SDockingTabWell *)0x0) goto LAB_1428869b1;
    if ((((this->ParentPtr).Object == (SDockingTabWell *)0x0) ||
        (pTVar1 = (this->ParentPtr).WeakReferenceCount.ReferenceController,
        pTVar1 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar1->SharedReferenceCount < 1)) {
      local_50 = (TReferenceControllerBase<1> *)0x0;
      ppSVar7 = &local_58;
      bVar3 = false;
      bVar12 = true;
      this_00 = (SDockingTabWell *)0x0;
    }
    else {
      local_60 = (this->ParentPtr).WeakReferenceCount.ReferenceController;
      bVar3 = true;
      bVar12 = false;
      local_68 = (SDockingTabWell *)0x0;
      if (local_60 == (TReferenceControllerBase<1> *)0x0) {
LAB_1428868f7:
        ppSVar7 = &local_68;
      }
      else {
        aVar4 = local_60->SharedReferenceCount;
        do {
          if (aVar4 == (atomic<int>)0x0) {
            local_60 = (TReferenceControllerBase<1> *)0x0;
            goto LAB_1428868f7;
          }
          LOCK();
          aVar6 = local_60->SharedReferenceCount;
          bVar13 = aVar4 == aVar6;
          if (bVar13) {
            local_60->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
            aVar6 = aVar4;
          }
          UNLOCK();
          aVar4 = aVar6;
        } while (!bVar13);
        this_00 = (this->ParentPtr).Object;
        ppSVar7 = &local_68;
        local_68 = this_00;
      }
    }
    pSVar11 = ppSVar7[1];
    ppSVar7[1] = (SDockingTabWell *)0x0;
    *ppSVar7 = (SDockingTabWell *)0x0;
    if (bVar12) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_50);
    }
    if (bVar3) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_60);
    }
    bVar3 = true;
    if ((this_00 == (SDockingTabWell *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar2 = (code *)swi(3);
      EVar5 = (*pcVar2)();
      return EVar5;
    }
    bVar12 = true;
    pTVar8 = SDockingTabWell::GetDockArea(this_00,local_38);
    if (pTVar8->Object != (SDockingArea *)0x0) {
      bVar13 = true;
      goto LAB_1428869bc;
    }
  }
  bVar13 = false;
LAB_1428869bc:
  if (bVar12) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38[0].SharedReferenceCount.ReferenceController);
  }
  if (bVar3) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar11);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar10);
  if (bVar13) {
    UpdateTabStyle(this);
    return Stop;
  }
  return Continue;
}

// OnMouseButtonDoubleClick @ 1428875a0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SDockTab::OnMouseButtonDoubleClick
          (SDockTab *this,FReply *__return_storage_ptr__,FGeometry *param_1,FPointerEvent *param_2)

{
  FName FVar1;
  TReferenceControllerBase<1> *pTVar2;
  SWidget *pSVar3;
  TSharedRef<SWidget,1> *pTVar4;
  FReply *pFVar5;
  bool bVar6;
  TSharedRef<SWidget,1> local_d8;
  FReply local_c8;
  
  FVar1 = (param_2->EffectingButton).KeyName;
  pTVar2 = (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar6 = FVar1 == EKeys::MiddleMouseButton.KeyName;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (bVar6) {
    FReply::FReply(&local_c8,true);
    pTVar4 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_d8);
    pTVar2 = (pTVar4->SharedReferenceCount).ReferenceController;
    pSVar3 = pTVar4->Object;
    if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_d8.SharedReferenceCount.ReferenceController);
    }
    else {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_d8.SharedReferenceCount.ReferenceController);
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_d8.Object = pSVar3;
    local_d8.SharedReferenceCount.ReferenceController = pTVar2;
    pFVar5 = FReply::CaptureMouse(&local_c8,&local_d8);
    FReply::FReply(__return_storage_ptr__,pFVar5);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    FReply::~FReply(&local_c8);
  }
  else {
    FReply::FReply(__return_storage_ptr__,false);
  }
  return __return_storage_ptr__;
}

// OnMouseButtonDown @ 1428885e0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SDockTab::OnMouseButtonDown
          (SDockTab *this,FReply *__return_storage_ptr__,FGeometry *param_1,FPointerEvent *param_2)

{
  FName FVar1;
  SWidget *pSVar2;
  bool bVar3;
  TSharedRef<SWidget,1> *pTVar4;
  FReply *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSharedRef<SWidget,1> local_e8;
  FKey local_d8;
  FReply local_c0;
  
  bVar3 = SWidget::HasMouseCapture((SWidget *)this);
  if (bVar3) {
LAB_1428887d6:
    FReply::FReply(__return_storage_ptr__,false);
  }
  else {
    pTVar6 = (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
    FVar1 = (param_2->EffectingButton).KeyName;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar3 = FVar1 == EKeys::LeftMouseButton.KeyName;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    if (bVar3) {
      TotalDraggedDistance = 0.0;
      ActivateInParent(this,UserClickedOnTab);
      FReply::FReply(&local_c0,true);
      local_d8.KeyName = EKeys::LeftMouseButton.KeyName;
      local_d8.KeyDetails.Object = EKeys::LeftMouseButton.KeyDetails.Object;
      local_d8.KeyDetails.SharedReferenceCount.ReferenceController =
           EKeys::LeftMouseButton.KeyDetails.SharedReferenceCount.ReferenceController;
      if (EKeys::LeftMouseButton.KeyDetails.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (EKeys::LeftMouseButton.KeyDetails.SharedReferenceCount.ReferenceController)->
        SharedReferenceCount =
             (atomic<int>)
             ((int)(EKeys::LeftMouseButton.KeyDetails.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      pTVar4 = TSharedFromThis<SWidget,1>::AsShared
                         ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_e8);
      pTVar6 = (pTVar4->SharedReferenceCount).ReferenceController;
      pSVar2 = pTVar4->Object;
      if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_e8.SharedReferenceCount.ReferenceController);
      }
      else {
        LOCK();
        pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
        UNLOCK();
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_e8.SharedReferenceCount.ReferenceController);
        LOCK();
        pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_e8.Object = pSVar2;
      local_e8.SharedReferenceCount.ReferenceController = pTVar6;
      pFVar5 = FReply::DetectDrag(&local_c0,&local_e8,&local_d8);
      FReply::FReply(__return_storage_ptr__,pFVar5);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    }
    else {
      pTVar6 = (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
      FVar1 = (param_2->EffectingButton).KeyName;
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
        UNLOCK();
      }
      bVar3 = FVar1 != EKeys::MiddleMouseButton.KeyName;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
      if (bVar3) {
        pTVar6 = (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
        FVar1 = (param_2->EffectingButton).KeyName;
        if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
          UNLOCK();
        }
        bVar3 = FVar1 == EKeys::RightMouseButton.KeyName;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
        if (bVar3) {
          ActivateInParent(this,UserClickedOnTab);
        }
        goto LAB_1428887d6;
      }
      FReply::FReply(&local_c0,true);
      pTVar4 = TSharedFromThis<SWidget,1>::AsShared
                         ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_e8);
      pTVar6 = (pTVar4->SharedReferenceCount).ReferenceController;
      pSVar2 = pTVar4->Object;
      if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_e8.SharedReferenceCount.ReferenceController);
      }
      else {
        LOCK();
        pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
        UNLOCK();
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_e8.SharedReferenceCount.ReferenceController);
        LOCK();
        pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_e8.Object = pSVar2;
      local_e8.SharedReferenceCount.ReferenceController = pTVar6;
      pFVar5 = FReply::CaptureMouse(&local_c0,&local_e8);
      FReply::FReply(__return_storage_ptr__,pFVar5);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    FReply::~FReply(&local_c0);
  }
  return __return_storage_ptr__;
}

// OnMouseButtonUp @ 1428894a0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SDockTab::OnMouseButtonUp
          (SDockTab *this,FReply *__return_storage_ptr__,FGeometry *param_1,FPointerEvent *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FName FVar4;
  FWeakReferencer<1> FVar5;
  bool bVar6;
  undefined4 local_108;
  undefined4 uStack_104;
  TVector2<float>_u_0 local_100;
  undefined4 local_f8;
  undefined8 local_f4;
  undefined4 local_ec;
  FReply local_e8;
  FSlateRotatedRect local_30;
  
  bVar6 = SWidget::HasMouseCapture((SWidget *)this);
  if (bVar6) {
    pTVar3 = (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
    FVar4 = (param_2->EffectingButton).KeyName;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar6 = FVar4 == EKeys::LeftMouseButton.KeyName;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    if (bVar6) {
      FReply::FReply(&local_e8,true);
      FVar5.ReferenceController = local_e8.MouseCaptor.WeakReferenceCount.ReferenceController;
      local_e8.MouseCaptor.Object = (SWidget *)0x0;
      local_e8.MouseCaptor.WeakReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      if (FVar5.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &(FVar5.ReferenceController)->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)((FVar5.ReferenceController)->_padding_ + 8))(FVar5.ReferenceController,1);
        }
      }
      local_e8.bUseHighPrecisionMouse = 0;
      local_e8.bReleaseMouseCapture = 1;
      FReply::FReply(__return_storage_ptr__,&local_e8);
      FReply::~FReply(&local_e8);
      return __return_storage_ptr__;
    }
    pTVar3 = (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
    FVar4 = (param_2->EffectingButton).KeyName;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar6 = FVar4 == EKeys::MiddleMouseButton.KeyName;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    if (bVar6) {
      local_108 = SUB84(param_1->Size,0);
      uStack_104 = SUB84(param_1->Size,4);
      local_f8 = local_108;
      local_ec = uStack_104;
      local_100 = (TVector2<float>_u_0)0x0;
      local_f4 = 0;
      TransformRect<TTransform2<float>_>
                (&local_30,&param_1->AccumulatedRenderTransform,(FSlateRotatedRect *)&local_100._s_0
                );
      bVar6 = FSlateRotatedRect::IsUnderLocation
                        (&local_30,*(FDeprecateVector2DParameter *)&param_2->ScreenSpacePosition);
      if (bVar6) {
        RequestCloseTab(this);
      }
      FReply::FReply(&local_e8,true);
      FVar5.ReferenceController = local_e8.MouseCaptor.WeakReferenceCount.ReferenceController;
      local_e8.MouseCaptor.Object = (SWidget *)0x0;
      local_e8.MouseCaptor.WeakReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      if (FVar5.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &(FVar5.ReferenceController)->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)((FVar5.ReferenceController)->_padding_ + 8))(FVar5.ReferenceController,1);
        }
      }
      local_e8.bUseHighPrecisionMouse = 0;
      local_e8.bReleaseMouseCapture = 1;
      FReply::FReply(__return_storage_ptr__,&local_e8);
      FReply::~FReply(&local_e8);
      return __return_storage_ptr__;
    }
  }
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnParentSet @ 14288f660

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SDockTab::OnParentSet(SDockTab *this)

{
  atomic<int> *paVar1;
  FWeakReferencer<1> *pFVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  TDelegate<EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy> *pTVar6;
  TSharedRef<FActiveTimerHandle,1> *pTVar7;
  code *local_48;
  ulonglong uStack_40;
  TSharedRef<FActiveTimerHandle,1> local_38;
  TDelegate<EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy> local_28;
  
  pFVar2 = &(this->UpdateStyleTimerHandle).WeakReferenceCount;
  if ((((this->UpdateStyleTimerHandle).Object == (FActiveTimerHandle *)0x0) ||
      (pFVar2->ReferenceController == (TReferenceControllerBase<1> *)0x0)) ||
     ((int)pFVar2->ReferenceController->SharedReferenceCount < 1)) {
    uStack_40 = uStack_40 & 0xffffffff00000000;
    local_48 = OnHandleUpdateStyle;
    pTVar6 = TDelegate<enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
             ::CreateSP<SDockTab>(&local_28,this,(pmf_f75ffe94 *)&local_48);
    pTVar7 = SWidget::RegisterActiveTimer((SWidget *)this,&local_38,0.0,pTVar6);
    (this->UpdateStyleTimerHandle).Object = pTVar7->Object;
    pTVar4 = (pTVar7->SharedReferenceCount).ReferenceController;
    if (pTVar4 != pFVar2->ReferenceController) {
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
        UNLOCK();
      }
      pTVar5 = pFVar2->ReferenceController;
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar5->WeakReferenceCount;
        aVar3 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar3 == (atomic<int>)0x1) {
          (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
        }
      }
      pFVar2->ReferenceController = pTVar4;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
  }
  return;
}

// OnTabDrawerClosed @ 14288f740

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SDockTab::OnTabDrawerClosed(SDockTab *this)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnTabDrawerClosedEvent
             ,&local_28);
  if ((*(int *)&(this->OnTabDrawerClosedEvent).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->OnTabDrawerClosedEvent).field_0x8, plVar1 != (longlong *)0x0))
  {
    (**(code **)(*plVar1 + 0x68))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// OnTabDrawerOpened @ 14288f790

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SDockTab::OnTabDrawerOpened(SDockTab *this)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnTabDrawerOpenedEvent
             ,&local_28);
  if ((*(int *)&(this->OnTabDrawerOpenedEvent).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->OnTabDrawerOpenedEvent).field_0x8, plVar1 != (longlong *)0x0))
  {
    (**(code **)(*plVar1 + 0x68))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// OnTouchEnded @ 14288f8b0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SDockTab::OnTouchEnded
          (SDockTab *this,FReply *__return_storage_ptr__,FGeometry *param_1,FPointerEvent *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FWeakReferencer<1> FVar3;
  bool bVar4;
  FReply local_c8;
  
  bVar4 = SWidget::HasMouseCapture((SWidget *)this);
  if (bVar4) {
    FReply::FReply(&local_c8,true);
    FVar3.ReferenceController = local_c8.MouseCaptor.WeakReferenceCount.ReferenceController;
    local_c8.MouseCaptor.Object = (SWidget *)0x0;
    local_c8.MouseCaptor.WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
    ;
    if (FVar3.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(FVar3.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((FVar3.ReferenceController)->_padding_ + 8))(FVar3.ReferenceController,1);
      }
    }
    local_c8.bUseHighPrecisionMouse = 0;
    local_c8.bReleaseMouseCapture = 1;
    FReply::FReply(__return_storage_ptr__,&local_c8);
    FReply::~FReply(&local_c8);
    return __return_storage_ptr__;
  }
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnTouchStarted @ 14288f960

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SDockTab::OnTouchStarted
          (SDockTab *this,FReply *__return_storage_ptr__,FGeometry *param_1,FPointerEvent *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  SWidget *pSVar2;
  bool bVar3;
  TSharedRef<SWidget,1> *pTVar4;
  FReply *pFVar5;
  TSharedRef<SWidget,1> local_d8;
  FReply local_c8;
  
  bVar3 = SWidget::HasMouseCapture((SWidget *)this);
  if (bVar3) {
    FReply::FReply(__return_storage_ptr__,false);
  }
  else {
    ActivateInParent(this,UserClickedOnTab);
    FReply::FReply(&local_c8,true);
    pTVar4 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_d8);
    pTVar1 = (pTVar4->SharedReferenceCount).ReferenceController;
    pSVar2 = pTVar4->Object;
    if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_d8.SharedReferenceCount.ReferenceController);
    }
    else {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_d8.SharedReferenceCount.ReferenceController);
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_d8.Object = pSVar2;
    local_d8.SharedReferenceCount.ReferenceController = pTVar1;
    pFVar5 = FReply::CaptureMouse(&local_c8,&local_d8);
    FReply::FReply(__return_storage_ptr__,pFVar5);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    FReply::~FReply(&local_c8);
  }
  return __return_storage_ptr__;
}

// PersistVisualState @ 1428919e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SDockTab::PersistVisualState(SDockTab *this)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnPersistVisualState,
             &local_28);
  if ((*(int *)&(this->OnPersistVisualState).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->OnPersistVisualState).field_0x8, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// PlaySpawnAnim @ 142891b20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SDockTab::PlaySpawnAnim(SDockTab *this)

{
  TSharedRef<SWidget,1> *pTVar1;
  TSharedRef<SWidget,1> local_18;
  
  pTVar1 = TSharedFromThis<SWidget,1>::AsShared
                     ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_18);
  FCurveSequence::Play(&this->SpawnAnimCurve,pTVar1,false,0.0,true);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return;
}

// ProvideDefaultIcon @ 142893170

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SDockTab::ProvideDefaultIcon(SDockTab *this,FSlateBrush *param_1)

{
  longlong *plVar1;
  FSlateBrush *pFVar2;
  char cVar3;
  FSlateBrush **ppFVar4;
  FSlateBrush *pFVar5;
  FDestructionSentinel local_48;
  FSlateBrush *local_30;
  undefined1 local_28;
  undefined1 local_20 [8];
  ForAnyElementType FStack_18;
  ulonglong local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(this->TabIcon).Getter,
             (FReadAccessScope *)&local_48);
  if (((*(int *)&(this->TabIcon).Getter.field_0x10 != 0) &&
      (plVar1 = *(longlong **)&(this->TabIcon).Getter.field_0x8, plVar1 != (longlong *)0x0)) &&
     (cVar3 = (**(code **)(*plVar1 + 0x38))(), cVar3 != '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_48);
    return;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_48);
  ppFVar4 = TAttribute<FSlateBrush_const_*>::Get(&this->TabIcon);
  if (*ppFVar4 != (FSlateBrush *)0x0) {
    ppFVar4 = TAttribute<FSlateBrush_const_*>::Get(&this->TabIcon);
    pFVar2 = *ppFVar4;
    pFVar5 = FStyleDefaults::GetNoBrush();
    if (pFVar2 != pFVar5) {
      return;
    }
  }
  local_28 = 1;
  local_10 = 0;
  (this->TabIcon).Value = param_1;
  local_20 = (undefined1  [8])0x0;
  FStack_18.Data = (FScriptContainerElement *)0x0;
  (this->TabIcon).bIsSet = true;
  local_30 = param_1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->TabIcon).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_20);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_20,
             (FWriteAccessScope *)&local_48);
  if (((int)local_10 != 0) && (FStack_18.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_18.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_18,0,0,0x10);
    local_10 = local_10 & 0xffffffff00000000;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  if (FStack_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_18.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_20);
  return;
}

// ProvideDefaultLabel @ 1428932e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SDockTab::ProvideDefaultLabel(SDockTab *this,FText *param_1)

{
  longlong *plVar1;
  char cVar2;
  bool bVar3;
  FText *this_00;
  undefined1 local_res8 [8];
  FDestructionSentinel local_58;
  FText local_40;
  bool local_30;
  undefined1 local_28 [8];
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(this->TabLabel).Getter,
             (FReadAccessScope *)&local_58);
  if (((*(int *)&(this->TabLabel).Getter.field_0x10 != 0) &&
      (plVar1 = *(longlong **)&(this->TabLabel).Getter.field_0x8, plVar1 != (longlong *)0x0)) &&
     (cVar2 = (**(code **)(*plVar1 + 0x38))(), cVar2 != '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_58);
    return;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_58);
  this_00 = TAttribute<FText>::Get(&this->TabLabel);
  bVar3 = FText::IsEmpty(this_00);
  if (bVar3) {
    local_40.TextData.Reference = (param_1->TextData).Reference;
    if (local_40.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_40.TextData.Reference + 8))
                (local_40.TextData.Reference,local_res8);
    }
    local_40.Flags = param_1->Flags;
    local_30 = true;
    local_18 = 0;
    local_28 = (undefined1  [8])0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    FText::operator=(&(this->TabLabel).Value,&local_40);
    (this->TabLabel).bIsSet = local_30;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->TabLabel).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_28);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_28,
               (FWriteAccessScope *)&local_58);
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
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_28);
    if (local_40.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_40.TextData.Reference + 0x10))();
    }
  }
  return;
}

// RemoveTabFromParent @ 142894bd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SDockTab::RemoveTabFromParent(SDockTab *this)

{
  TSharedRef<SWidget,1> *pTVar1;
  TSharedRef<SDockTab,1> local_28;
  TSharedRef<SWidget,1> local_18;
  
  pTVar1 = TSharedFromThis<SWidget,1>::AsShared
                     ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_18);
  local_28.Object = (SDockTab *)pTVar1->Object;
  local_28.SharedReferenceCount.ReferenceController =
       (pTVar1->SharedReferenceCount).ReferenceController;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  TDelegate<void___cdecl(TSharedRef<SDockTab,1>),FDefaultDelegateUserPolicy>::ExecuteIfBound
            (&this->OnTabClosed,&local_28);
  RemoveTabFromParent_Internal(this);
  return;
}

// RemoveTabFromParent_Internal @ 142894c30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SDockTab::RemoveTabFromParent_Internal(SDockTab *this)

{
  atomic<int> *paVar1;
  TWeakPtr<SDockingTabWell,1> *pTVar2;
  atomic<int> aVar3;
  SDockingArea *this_00;
  code *pcVar4;
  atomic<int> aVar5;
  TSharedRef<SWidget,1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  SDockingTabWell *this_01;
  bool bVar8;
  TSharedRef<SDockTab,1> local_68;
  TSharedPtr<SDockTab,1> local_58;
  TSharedRef<SWidget,1> local_48;
  TSharedPtr<SDockTab,1> local_38;
  longlong local_28 [2];
  undefined8 local_18 [2];
  
  pTVar6 = TSharedFromThis<SWidget,1>::AsShared
                     ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_48);
  local_68.Object = (SDockTab *)pTVar6->Object;
  local_68.SharedReferenceCount.ReferenceController =
       (pTVar6->SharedReferenceCount).ReferenceController;
  if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  pTVar2 = &this->ParentPtr;
  if (((pTVar2->Object == (SDockingTabWell *)0x0) ||
      (pTVar7 = (this->ParentPtr).WeakReferenceCount.ReferenceController,
      pTVar7 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar7->SharedReferenceCount < 1)) {
    pTVar7 = (this->ParentDockingAreaPtr).WeakReferenceCount.ReferenceController;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      aVar3 = pTVar7->SharedReferenceCount;
      do {
        if (aVar3 == (atomic<int>)0x0) {
          pTVar7 = (TReferenceControllerBase<1> *)0x0;
          goto LAB_142894d34;
        }
        LOCK();
        aVar5 = pTVar7->SharedReferenceCount;
        bVar8 = aVar3 == aVar5;
        if (bVar8) {
          pTVar7->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
          aVar5 = aVar3;
        }
        UNLOCK();
        aVar3 = aVar5;
      } while (!bVar8);
      this_00 = (this->ParentDockingAreaPtr).Object;
      if (this_00 != (SDockingArea *)0x0) {
        SDockingArea::ClosePanelDrawerForTransfer(this_00,&local_38);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_38.SharedReferenceCount.ReferenceController);
        local_58.Object = local_68.Object;
        local_58.SharedReferenceCount.ReferenceController =
             local_68.SharedReferenceCount.ReferenceController;
        if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        SDockingArea::RemoveHiddenInactivePanelDrawerTab(this_00,&local_58);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_58.SharedReferenceCount.ReferenceController);
      }
    }
    goto LAB_142894d34;
  }
  pTVar7 = (this->ParentPtr).WeakReferenceCount.ReferenceController;
  this_01 = (SDockingTabWell *)0x0;
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
LAB_142894cc0:
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    aVar3 = pTVar7->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        pTVar7 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142894cc0;
      }
      LOCK();
      aVar5 = pTVar7->SharedReferenceCount;
      bVar8 = aVar3 == aVar5;
      if (bVar8) {
        pTVar7->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar5 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar5;
    } while (!bVar8);
    this_01 = pTVar2->Object;
    if (this_01 == (SDockingTabWell *)0x0) goto LAB_142894cc0;
  }
  SDockingTabWell::RemoveAndDestroyTab(this_01,&local_68,TabRemoval_Closed);
LAB_142894d34:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  if (pTVar2 != (TWeakPtr<SDockingTabWell,1> *)local_28) {
    pTVar7 = (this->ParentPtr).WeakReferenceCount.ReferenceController;
    pTVar2->Object = (SDockingTabWell *)0x0;
    (this->ParentPtr).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
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
  }
  if (&this->ParentDockingAreaPtr != (TWeakPtr<SDockingArea,1> *)local_18) {
    pTVar7 = (this->ParentDockingAreaPtr).WeakReferenceCount.ReferenceController;
    (this->ParentDockingAreaPtr).Object = (SDockingArea *)0x0;
    (this->ParentDockingAreaPtr).WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
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
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  return;
}

// RequestCloseTab @ 142894e50

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall SDockTab::RequestCloseTab(SDockTab *this)

{
  FTabManager *this_00;
  code *pcVar1;
  atomic<int> aVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined1 uVar6;
  bool bVar7;
  atomic<int> aVar8;
  TSharedRef<SWidget_const_,1> *pTVar9;
  TSharedPtr<SDockingTabStack,1> *pTVar10;
  longlong *plVar11;
  SDockingTabStack *pSVar12;
  TSharedPtr<SDockingArea,1> *this_01;
  SDockingArea *pSVar13;
  TSharedRef<SWidget,1> *pTVar14;
  longlong *plVar15;
  TReferenceControllerBase<1> *pTVar16;
  TReferenceControllerBase<1> *pTVar17;
  TReferenceControllerBase<1> *pTVar18;
  bool bVar19;
  TSharedRef<SDockTab_const_,1> local_148;
  TSharedRef<SDockTab,1> local_138;
  TSharedRef<SDockTab,1> local_128;
  TSharedRef<SDockTab,1> local_118;
  TSharedRef<SDockTab,1> local_108;
  TSharedRef<SWidget_const_,1> local_f8;
  TSharedRef<SWidget,1> local_e8;
  undefined1 local_d8 [8];
  TReferenceControllerBase<1> *local_d0;
  TSharedPtr<SDockingTabStack,1> local_c8;
  undefined1 local_b8 [8];
  TReferenceControllerBase<1> *local_b0;
  TSharedPtr<SDockingTabStack,1> local_a8;
  TSharedPtr<SDockingTabStack,1> local_98;
  TSharedRef<SWidget,1> local_88;
  TSharedRef<SWidget,1> local_78;
  undefined1 local_68 [8];
  TReferenceControllerBase<1> *local_60;
  TSharedPtr<SDockingTabStack,1> local_58;
  TSharedRef<SWidget,1> local_48;
  FReadAccessScope local_38;
  
  pTVar16 = (TReferenceControllerBase<1> *)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnPersistVisualState,
             &local_38);
  if ((*(int *)&(this->OnPersistVisualState).field_0x10 != 0) &&
     (plVar11 = *(longlong **)&(this->OnPersistVisualState).field_0x8, plVar11 != (longlong *)0x0))
  {
    (**(code **)(*plVar11 + 0x68))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_38);
  if (this->bCanEverClose == false) {
    return false;
  }
  pTVar18 = (this->MyTabManager).WeakReferenceCount.ReferenceController;
  pTVar17 = pTVar18;
  if (pTVar18 == (TReferenceControllerBase<1> *)0x0) {
LAB_142894ee1:
    bVar19 = false;
    pTVar18 = pTVar17;
  }
  else {
    aVar2 = pTVar18->SharedReferenceCount;
    do {
      pTVar17 = pTVar16;
      if (aVar2 == (atomic<int>)0x0) goto LAB_142894ee1;
      LOCK();
      aVar8 = pTVar18->SharedReferenceCount;
      bVar19 = aVar2 == aVar8;
      if (bVar19) {
        pTVar18->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar8 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar8;
    } while (!bVar19);
    this_00 = (this->MyTabManager).Object;
    pTVar17 = pTVar18;
    if (this_00 == (FTabManager *)0x0) goto LAB_142894ee1;
    pTVar9 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_f8);
    local_148.Object = (SDockTab *)pTVar9->Object;
    local_148.SharedReferenceCount.ReferenceController =
         (pTVar9->SharedReferenceCount).ReferenceController;
    if (local_148.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_f8.SharedReferenceCount.ReferenceController);
    pTVar16 = (TReferenceControllerBase<1> *)&DAT_00000020;
    bVar19 = FTabManager::IsTabCloseable(this_00,&local_148);
    if (bVar19) goto LAB_142894ee1;
    bVar19 = true;
  }
  if (pTVar16 != (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_148.SharedReferenceCount.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar18);
  if (((bVar19) || (bVar19 = IsTabLocked(this), bVar19)) ||
     ((bVar19 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                          ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnCanCloseTab),
      bVar19 && (bVar19 = TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::Execute
                                    (&this->OnCanCloseTab), !bVar19)))) {
    return false;
  }
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  bVar19 = false;
  pTVar10 = GetParentDockTabStack(this,&local_98);
  if (pTVar10->Object != (SDockingTabStack *)0x0) {
    pTVar10 = GetParentDockTabStack(this,&local_a8);
    if ((pTVar10->Object == (SDockingTabStack *)0x0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar19)) {
      pcVar1 = (code *)swi(3);
      uVar6 = (*pcVar1)();
      return (bool)uVar6;
    }
    bVar5 = true;
    bVar4 = true;
    bVar3 = false;
    bVar19 = false;
    plVar11 = (longlong *)
              (**(code **)(pTVar10->Object->_padding_ + 0x260))(pTVar10->Object,local_b8);
    if (*plVar11 != 0) {
      pTVar10 = GetParentDockTabStack(this,&local_c8);
      pSVar12 = TSharedPtr<SDockingTabStack,1>::operator->(pTVar10);
      this_01 = (TSharedPtr<SDockingArea,1> *)
                (**(code **)(pSVar12->_padding_ + 0x260))(pSVar12,local_d8);
      pSVar13 = TSharedPtr<SDockingArea,1>::operator->(this_01);
      pTVar14 = TSharedFromThis<SWidget,1>::AsShared
                          ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_e8);
      local_138.Object = (SDockTab *)pTVar14->Object;
      local_138.SharedReferenceCount.ReferenceController =
           (pTVar14->SharedReferenceCount).ReferenceController;
      if (local_138.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_138.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_138.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_e8.SharedReferenceCount.ReferenceController);
      bVar5 = true;
      bVar4 = true;
      bVar3 = true;
      bVar19 = true;
      bVar7 = SDockingArea::IsTabInSidebar(pSVar13,&local_138);
      if (bVar7) {
        bVar7 = true;
        goto LAB_14289509c;
      }
    }
  }
  bVar7 = false;
LAB_14289509c:
  plVar11 = &this->_padding_;
  if (bVar19) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_d0);
  }
  if (bVar3) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_c8.SharedReferenceCount.ReferenceController);
  }
  if (bVar4) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_b0);
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_a8.SharedReferenceCount.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  if (bVar7) {
    pTVar14 = TSharedFromThis<SWidget,1>::AsShared((TSharedFromThis<SWidget,1> *)plVar11,&local_88);
    local_128.Object = (SDockTab *)pTVar14->Object;
    local_128.SharedReferenceCount.ReferenceController =
         (pTVar14->SharedReferenceCount).ReferenceController;
    if (local_128.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_128.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_128.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_88.SharedReferenceCount.ReferenceController);
    TDelegate<void___cdecl(TSharedRef<SDockTab,1>),FDefaultDelegateUserPolicy>::ExecuteIfBound
              (&this->OnTabClosed,&local_128);
    pTVar10 = GetParentDockTabStack(this,&local_58);
    if ((pTVar10->Object == (SDockingTabStack *)0x0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar19)) {
      pcVar1 = (code *)swi(3);
      uVar6 = (*pcVar1)();
      return (bool)uVar6;
    }
    plVar15 = (longlong *)
              (**(code **)(pTVar10->Object->_padding_ + 0x260))(pTVar10->Object,local_68);
    if ((*plVar15 == 0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar19)) {
      pcVar1 = (code *)swi(3);
      uVar6 = (*pcVar1)();
      return (bool)uVar6;
    }
    pSVar13 = (SDockingArea *)*plVar15;
    pTVar14 = TSharedFromThis<SWidget,1>::AsShared((TSharedFromThis<SWidget,1> *)plVar11,&local_78);
    local_118.Object = (SDockTab *)pTVar14->Object;
    local_118.SharedReferenceCount.ReferenceController =
         (pTVar14->SharedReferenceCount).ReferenceController;
    if (local_118.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_118.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_118.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_78.SharedReferenceCount.ReferenceController);
    SDockingArea::RemoveTabFromSidebar(pSVar13,&local_118);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_60);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
  }
  else {
    pTVar14 = TSharedFromThis<SWidget,1>::AsShared((TSharedFromThis<SWidget,1> *)plVar11,&local_48);
    local_108.Object = (SDockTab *)pTVar14->Object;
    local_108.SharedReferenceCount.ReferenceController =
         (pTVar14->SharedReferenceCount).ReferenceController;
    if (local_108.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_108.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_108.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
    TDelegate<void___cdecl(TSharedRef<SDockTab,1>),FDefaultDelegateUserPolicy>::ExecuteIfBound
              (&this->OnTabClosed,&local_108);
    RemoveTabFromParent_Internal(this);
  }
  return true;
}

// SetCanCloseTab @ 142895aa0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SDockTab::SetCanCloseTab
          (SDockTab *this,TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *param_1)

{
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->OnCanCloseTab,param_1);
  return;
}

// SetContent @ 142895ce0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SDockTab::SetContent(SDockTab *this,TSharedRef<SWidget,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  SWidget *pSVar2;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  atomic<int> aVar5;
  atomic<int> aVar6;
  SDockingTabWell *pSVar7;
  SDockingTabWell *pSVar8;
  SDockingTabWell *this_00;
  bool bVar9;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pSVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar4 = (this->Content).SharedReferenceCount.ReferenceController;
  (this->Content).Object = pSVar2;
  (this->Content).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  if ((((this->ParentPtr).Object == (SDockingTabWell *)0x0) ||
      (pTVar1 = (this->ParentPtr).WeakReferenceCount.ReferenceController,
      pTVar1 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar1->SharedReferenceCount < 1))
  goto LAB_142895db6;
  pSVar8 = (SDockingTabWell *)(this->ParentPtr).WeakReferenceCount.ReferenceController;
  this_00 = (SDockingTabWell *)0x0;
  pSVar7 = pSVar8;
  if (pSVar8 == (SDockingTabWell *)0x0) {
LAB_142895d76:
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    pSVar8 = pSVar7;
    if (bVar9) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    aVar5 = *(atomic<int> *)&pSVar8->_padding_;
    do {
      pSVar7 = this_00;
      if (aVar5 == (atomic<int>)0x0) goto LAB_142895d76;
      LOCK();
      aVar6 = *(atomic<int> *)&pSVar8->_padding_;
      bVar9 = aVar5 == aVar6;
      if (bVar9) {
        *(atomic<int> *)&pSVar8->_padding_ = (atomic<int>)((int)aVar5 + 1);
        aVar6 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar6;
    } while (!bVar9);
    this_00 = (this->ParentPtr).Object;
    pSVar7 = pSVar8;
    if (this_00 == (SDockingTabWell *)0x0) goto LAB_142895d76;
  }
  SDockingTabWell::RefreshParentContent(this_00);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar8);
LAB_142895db6:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetDraggedOverDockArea @ 142896060

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SDockTab::SetDraggedOverDockArea(SDockTab *this,TSharedPtr<SDockingArea,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  SDockingArea *pSVar2;
  longlong *plVar3;
  TReferenceControllerBase<1> *pTVar4;
  FReadAccessScope local_28;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pSVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar4 = (this->DraggedOverDockingArea).SharedReferenceCount.ReferenceController;
  (this->DraggedOverDockingArea).Object = pSVar2;
  (this->DraggedOverDockingArea).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnTabDraggedOverDockArea,&local_28);
  if ((*(int *)&(this->OnTabDraggedOverDockArea).field_0x10 != 0) &&
     (plVar3 = *(longlong **)&(this->OnTabDraggedOverDockArea).field_0x8, plVar3 != (longlong *)0x0)
     ) {
    (**(code **)(*plVar3 + 0x68))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// SetIsTabNameHidden @ 142897320

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SDockTab::SetIsTabNameHidden(SDockTab *this,bool param_1)

{
  this->bIsTabNameHidden = param_1;
  return;
}

// SetLabel @ 1428973e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SDockTab::SetLabel(SDockTab *this,TAttribute<FText> *param_1)

{
  TSharedRef<SWidget,1> *pTVar1;
  TSharedRef<SDockTab,1> local_28;
  TSharedRef<SWidget,1> local_18;
  
  TAttribute<FText>::operator=(&this->TabLabel,param_1);
  pTVar1 = TSharedFromThis<SWidget,1>::AsShared
                     ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_18);
  local_28.Object = (SDockTab *)pTVar1->Object;
  local_28.SharedReferenceCount.ReferenceController =
       (pTVar1->SharedReferenceCount).ReferenceController;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  TDelegate<void___cdecl(TSharedRef<SDockTab,1>),FDefaultDelegateUserPolicy>::ExecuteIfBound
            (&this->OnTabRenamed,&local_28);
  return;
}

// SetLayoutIdentifier @ 142897450

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SDockTab::SetLayoutIdentifier(SDockTab *this,FTabId *param_1)

{
  int iVar1;
  ETabIdFlags EVar2;
  undefined3 uVar3;
  
  iVar1 = param_1->InstanceId;
  EVar2 = param_1->Flags;
  uVar3 = *(undefined3 *)&param_1->field_0xd;
  (this->LayoutIdentifier).TabType = param_1->TabType;
  (this->LayoutIdentifier).InstanceId = iVar1;
  (this->LayoutIdentifier).Flags = EVar2;
  *(undefined3 *)&(this->LayoutIdentifier).field_0xd = uVar3;
  return;
}

// SetLeftContent @ 142897470

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SDockTab::SetLeftContent(SDockTab *this,TSharedRef<SWidget,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  SWidget *pSVar2;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  atomic<int> aVar5;
  atomic<int> aVar6;
  SDockingTabWell *pSVar7;
  SDockingTabWell *pSVar8;
  SDockingTabWell *this_00;
  bool bVar9;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pSVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar4 = (this->TabWellContentLeft).SharedReferenceCount.ReferenceController;
  (this->TabWellContentLeft).Object = pSVar2;
  (this->TabWellContentLeft).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  if ((((this->ParentPtr).Object == (SDockingTabWell *)0x0) ||
      (pTVar1 = (this->ParentPtr).WeakReferenceCount.ReferenceController,
      pTVar1 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar1->SharedReferenceCount < 1))
  goto LAB_142897546;
  pSVar8 = (SDockingTabWell *)(this->ParentPtr).WeakReferenceCount.ReferenceController;
  this_00 = (SDockingTabWell *)0x0;
  pSVar7 = pSVar8;
  if (pSVar8 == (SDockingTabWell *)0x0) {
LAB_142897506:
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    pSVar8 = pSVar7;
    if (bVar9) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    aVar5 = *(atomic<int> *)&pSVar8->_padding_;
    do {
      pSVar7 = this_00;
      if (aVar5 == (atomic<int>)0x0) goto LAB_142897506;
      LOCK();
      aVar6 = *(atomic<int> *)&pSVar8->_padding_;
      bVar9 = aVar5 == aVar6;
      if (bVar9) {
        *(atomic<int> *)&pSVar8->_padding_ = (atomic<int>)((int)aVar5 + 1);
        aVar6 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar6;
    } while (!bVar9);
    this_00 = (this->ParentPtr).Object;
    pSVar7 = pSVar8;
    if (this_00 == (SDockingTabWell *)0x0) goto LAB_142897506;
  }
  SDockingTabWell::RefreshParentContent(this_00);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar8);
LAB_142897546:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetOnExtendContextMenu @ 142897d20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SDockTab::SetOnExtendContextMenu
          (SDockTab *this,
          TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy> *param_1)

{
  TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>::operator=
            (&this->OnExtendContextMenu,param_1);
  return;
}

// SetOnPersistVisualState @ 142898080

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SDockTab::SetOnPersistVisualState
          (SDockTab *this,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_1)

{
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->OnPersistVisualState,param_1);
  return;
}

// SetOnTabActivated @ 1428980a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SDockTab::SetOnTabActivated
          (SDockTab *this,
          TDelegate<void___cdecl(TSharedRef<SDockTab,1>,ETabActivationCause),FDefaultDelegateUserPolicy>
          *param_1)

{
  TDelegate<void___cdecl(TSharedRef<SDockTab,1>,enum_ETabActivationCause),FDefaultDelegateUserPolicy>
  ::operator=(&this->OnTabActivated,param_1);
  return;
}

// SetOnTabClosed @ 1428980c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SDockTab::SetOnTabClosed
          (SDockTab *this,
          TDelegate<void___cdecl(TSharedRef<SDockTab,1>),FDefaultDelegateUserPolicy> *param_1)

{
  TDelegate<void___cdecl(TSharedRef<SDockTab,1>),FDefaultDelegateUserPolicy>::operator=
            (&this->OnTabClosed,param_1);
  return;
}

// SetOnTabDraggedOverDockArea @ 1428980e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SDockTab::SetOnTabDraggedOverDockArea
          (SDockTab *this,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_1)

{
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->OnTabDraggedOverDockArea,param_1);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
  if (*(void **)&param_1->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_1->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_1);
  return;
}

// SetOnTabDrawerClosed @ 142898120

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SDockTab::SetOnTabDrawerClosed
          (SDockTab *this,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_1)

{
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->OnTabDrawerClosedEvent,param_1);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
  if (*(void **)&param_1->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_1->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_1);
  return;
}

// SetOnTabDrawerOpened @ 142898160

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SDockTab::SetOnTabDrawerOpened
          (SDockTab *this,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_1)

{
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->OnTabDrawerOpenedEvent,param_1);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
  if (*(void **)&param_1->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_1->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_1);
  return;
}

// SetOnTabRelocated @ 1428981a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SDockTab::SetOnTabRelocated
          (SDockTab *this,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_1)

{
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->OnTabRelocated,param_1);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
  if (*(void **)&param_1->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_1->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_1);
  return;
}

// SetOnTabRenamed @ 1428981e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SDockTab::SetOnTabRenamed
          (SDockTab *this,
          TDelegate<void___cdecl(TSharedRef<SDockTab,1>),FDefaultDelegateUserPolicy> *param_1)

{
  TDelegate<void___cdecl(TSharedRef<SDockTab,1>),FDefaultDelegateUserPolicy>::operator=
            (&this->OnTabRenamed,param_1);
  return;
}

// SetParent @ 142898300

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SDockTab::SetParent(SDockTab *this,TSharedPtr<SDockingTabWell,1> *param_1)

{
  atomic<int> *paVar1;
  FWeakReferencer<1> *pFVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  TDelegate<EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy> *pTVar6;
  TSharedRef<FActiveTimerHandle,1> *pTVar7;
  code *local_58;
  ulonglong uStack_50;
  TSharedRef<FActiveTimerHandle,1> local_48;
  undefined8 local_38 [2];
  TDelegate<EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy> local_28;
  
  (this->ParentPtr).Object = param_1->Object;
  pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar4 != (this->ParentPtr).WeakReferenceCount.ReferenceController) {
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar5 = (this->ParentPtr).WeakReferenceCount.ReferenceController;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar5->WeakReferenceCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
      }
    }
    (this->ParentPtr).WeakReferenceCount.ReferenceController = pTVar4;
  }
  if (&this->ParentDockingAreaPtr != (TWeakPtr<SDockingArea,1> *)local_38) {
    pTVar4 = (this->ParentDockingAreaPtr).WeakReferenceCount.ReferenceController;
    (this->ParentDockingAreaPtr).Object = (SDockingArea *)0x0;
    (this->ParentDockingAreaPtr).WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar4->WeakReferenceCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
      }
    }
  }
  pFVar2 = &(this->UpdateStyleTimerHandle).WeakReferenceCount;
  if ((((this->UpdateStyleTimerHandle).Object == (FActiveTimerHandle *)0x0) ||
      (pFVar2->ReferenceController == (TReferenceControllerBase<1> *)0x0)) ||
     ((int)pFVar2->ReferenceController->SharedReferenceCount < 1)) {
    uStack_50 = uStack_50 & 0xffffffff00000000;
    local_58 = OnHandleUpdateStyle;
    pTVar6 = TDelegate<enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
             ::CreateSP<SDockTab>(&local_28,this,(pmf_f75ffe94 *)&local_58);
    pTVar7 = SWidget::RegisterActiveTimer((SWidget *)this,&local_48,0.0,pTVar6);
    (this->UpdateStyleTimerHandle).Object = pTVar7->Object;
    pTVar4 = (pTVar7->SharedReferenceCount).ReferenceController;
    if (pTVar4 != pFVar2->ReferenceController) {
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
        UNLOCK();
      }
      pTVar5 = pFVar2->ReferenceController;
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar5->WeakReferenceCount;
        aVar3 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar3 == (atomic<int>)0x1) {
          (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
        }
      }
      pFVar2->ReferenceController = pTVar4;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetParentDockTabStackTabWellHidden @ 142898480

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SDockTab::SetParentDockTabStackTabWellHidden(SDockTab *this,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  TSharedPtr<SDockingTabStack,1> local_18;
  
  GetParentDockTabStack(this,&local_18);
  if (local_18.Object != (SDockingTabStack *)0x0) {
    if (param_1) {
      if (local_18.Object == (SDockingTabStack *)0x0) {
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
      bVar2 = SDockingTabStack::CanHideTabWell(local_18.Object);
      if (!bVar2) goto LAB_14289854b;
      if (local_18.Object == (SDockingTabStack *)0x0) {
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
      bVar2 = true;
    }
    else {
      if (local_18.Object == (SDockingTabStack *)0x0) {
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
      bVar2 = false;
    }
    SDockingTabStack::SetTabWellHidden(local_18.Object,bVar2);
  }
LAB_14289854b:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return;
}

// SetParentDockingArea @ 142898570

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SDockTab::SetParentDockingArea(SDockTab *this,TSharedPtr<SDockingArea,1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  
  (this->ParentDockingAreaPtr).Object = param_1->Object;
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar3 != (this->ParentDockingAreaPtr).WeakReferenceCount.ReferenceController) {
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar4 = (this->ParentDockingAreaPtr).WeakReferenceCount.ReferenceController;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar4->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
      }
    }
    (this->ParentDockingAreaPtr).WeakReferenceCount.ReferenceController = pTVar3;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetRightContent @ 1428987e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SDockTab::SetRightContent(SDockTab *this,TSharedRef<SWidget,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  SWidget *pSVar2;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  atomic<int> aVar5;
  atomic<int> aVar6;
  SDockingTabWell *pSVar7;
  SDockingTabWell *pSVar8;
  SDockingTabWell *this_00;
  bool bVar9;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pSVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar4 = (this->TabWellContentRight).SharedReferenceCount.ReferenceController;
  (this->TabWellContentRight).Object = pSVar2;
  (this->TabWellContentRight).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  if ((((this->ParentPtr).Object == (SDockingTabWell *)0x0) ||
      (pTVar1 = (this->ParentPtr).WeakReferenceCount.ReferenceController,
      pTVar1 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar1->SharedReferenceCount < 1))
  goto LAB_1428988b6;
  pSVar8 = (SDockingTabWell *)(this->ParentPtr).WeakReferenceCount.ReferenceController;
  this_00 = (SDockingTabWell *)0x0;
  pSVar7 = pSVar8;
  if (pSVar8 == (SDockingTabWell *)0x0) {
LAB_142898876:
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    pSVar8 = pSVar7;
    if (bVar9) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    aVar5 = *(atomic<int> *)&pSVar8->_padding_;
    do {
      pSVar7 = this_00;
      if (aVar5 == (atomic<int>)0x0) goto LAB_142898876;
      LOCK();
      aVar6 = *(atomic<int> *)&pSVar8->_padding_;
      bVar9 = aVar5 == aVar6;
      if (bVar9) {
        *(atomic<int> *)&pSVar8->_padding_ = (atomic<int>)((int)aVar5 + 1);
        aVar6 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar6;
    } while (!bVar9);
    this_00 = (this->ParentPtr).Object;
    pSVar7 = pSVar8;
    if (this_00 == (SDockingTabWell *)0x0) goto LAB_142898876;
  }
  SDockingTabWell::RefreshParentContent(this_00);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar8);
LAB_1428988b6:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetShouldAutosize @ 142898e30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SDockTab::SetShouldAutosize(SDockTab *this,bool param_1)

{
  this->bShouldAutosize = param_1;
  return;
}

// SetTabIcon @ 142899250

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SDockTab::SetTabIcon(SDockTab *this,TAttribute<FSlateBrush_const_*> *param_1)

{
  TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  
  this_00 = &param_1->Getter;
  (this->TabIcon).Value = param_1->Value;
  (this->TabIcon).bIsSet = param_1->bIsSet;
  TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&(this->TabIcon).Getter,this_00);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return;
}

// SetTabLabelOverflowPolicy @ 1428992b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SDockTab::SetTabLabelOverflowPolicy(SDockTab *this,TOptional<ETextOverflowPolicy> param_1)

{
  STextBlock *this_00;
  undefined6 in_register_00000012;
  undefined1 local_res8;
  char local_res9;
  
  this_00 = (this->LabelWidget).Object;
  if (this_00 != (STextBlock *)0x0) {
    local_res9 = ((undefined1 *)CONCAT62(in_register_00000012,param_1))[1];
    if (local_res9 != '\0') {
      local_res8 = *(undefined1 *)CONCAT62(in_register_00000012,param_1);
    }
    STextBlock::SetOverflowPolicy(this_00,SUB82(&local_res8,0));
  }
  return;
}

// SetTabLabelSuffix @ 1428992f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SDockTab::SetTabLabelSuffix(SDockTab *this,TAttribute<FText> *param_1)

{
  TAttribute<FText>::operator=(&this->TabLabelSuffix,param_1);
  return;
}

// SetTabManager @ 142899310

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SDockTab::SetTabManager(SDockTab *this,TSharedPtr<FTabManager,1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  int iVar3;
  TReferenceControllerBase<1> *pTVar4;
  FNamePermissionList *pFVar5;
  longlong *plVar6;
  FTabManager *this_00;
  code *pcVar7;
  char cVar8;
  atomic<int> aVar9;
  TSharedRef<FNamePermissionList,1> *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  longlong *plVar12;
  longlong *plVar13;
  bool bVar14;
  undefined1 local_res8 [16];
  FReadAccessScope local_48;
  
  pTVar11 = (this->MyTabManager).WeakReferenceCount.ReferenceController;
  if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar11->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar11 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142899346;
      }
      LOCK();
      aVar9 = pTVar11->SharedReferenceCount;
      bVar14 = aVar2 == aVar9;
      if (bVar14) {
        pTVar11->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar9 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar9;
    } while (!bVar14);
    this_00 = (this->MyTabManager).Object;
    if ((this_00 != (FTabManager *)0x0) && (this_00 != param_1->Object)) {
      pTVar10 = FTabManager::GetTabPermissionList(this_00);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &pTVar10->Object->OnFilterChangedDelegate,this);
    }
  }
LAB_142899346:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  (this->MyTabManager).Object = param_1->Object;
  pTVar11 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar11 != (this->MyTabManager).WeakReferenceCount.ReferenceController) {
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar11->WeakReferenceCount = (atomic<int>)((int)pTVar11->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar4 = (this->MyTabManager).WeakReferenceCount.ReferenceController;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar4->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
      }
    }
    (this->MyTabManager).WeakReferenceCount.ReferenceController = pTVar11;
  }
  if (param_1->Object != (FTabManager *)0x0) {
    pTVar10 = FTabManager::GetTabPermissionList(param_1->Object);
    pFVar5 = pTVar10->Object;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &pFVar5->OnFilterChangedDelegate,&local_48);
    iVar3 = *(int *)&(pFVar5->OnFilterChangedDelegate).field_0x10;
    plVar12 = *(longlong **)&(pFVar5->OnFilterChangedDelegate).field_0x8;
    plVar13 = plVar12 + (longlong)iVar3 * 2;
    while( true ) {
      if (*(int *)&(pFVar5->OnFilterChangedDelegate).field_0x10 != iVar3) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>_const_,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (plVar12 == plVar13) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_48);
        if ((param_1->Object == (FTabManager *)0x0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar14)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pTVar10 = FTabManager::GetTabPermissionList(param_1->Object);
        TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
        AddSP<SDockTab>((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>
                         *)&pTVar10->Object->OnFilterChangedDelegate,(SDockTab *)(local_res8 + 8),
                        (pmf_6d858b0d *)this);
        return;
      }
      if ((((int)plVar12[1] != 0) && (plVar6 = (longlong *)*plVar12, plVar6 != (longlong *)0x0)) &&
         (cVar8 = (**(code **)(*plVar6 + 0x28))(plVar6,this), cVar8 != '\0')) break;
      plVar12 = plVar12 + 2;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_48);
  }
  return;
}

// SetTabToolTipWidget @ 142899520

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SDockTab::SetTabToolTipWidget(SDockTab *this,TSharedPtr<SToolTip,1> *param_1)

{
  SImage *this_00;
  STextBlock *this_01;
  code *pcVar1;
  bool bVar2;
  undefined1 local_98 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_80;
  ForAnyElementType FStack_78;
  ulonglong local_70;
  undefined1 local_68 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_50;
  ForAnyElementType FStack_48;
  ulonglong local_40;
  FDestructionSentinel local_38;
  FDestructionSentinel local_20;
  
  if ((this->IconWidget).Object == (SImage *)0x0) {
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
  this_00 = (this->IconWidget).Object;
  local_98._8_8_ = (param_1->SharedReferenceCount).ReferenceController;
  local_98._0_8_ = &param_1->Object->_padding_;
  if (param_1->Object == (SToolTip *)0x0) {
    local_98._0_8_ = (IToolTip *)0x0;
  }
  if ((TReferenceControllerBase<1> *)local_98._8_8_ != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    ((TReferenceControllerBase<1> *)local_98._8_8_)->SharedReferenceCount =
         (atomic<int>)
         ((int)((TReferenceControllerBase<1> *)local_98._8_8_)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_98[0x10] = true;
  local_70 = 0;
  local_80.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_78.Data = (FScriptContainerElement *)0x0;
  SWidget::SetToolTip((SWidget *)this_00,(TAttribute<TSharedPtr<IToolTip,1>_> *)local_98);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_80,(FWriteAccessScope *)&local_38);
  if (((int)local_70 != 0) && (FStack_78.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_78.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_78,0,0,0x10);
    local_70 = local_70 & 0xffffffff00000000;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  if (FStack_78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_78.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_80.AccessDetector);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_98._8_8_);
  if ((this->LabelWidget).Object == (STextBlock *)0x0) {
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
  this_01 = (this->LabelWidget).Object;
  local_68._8_8_ = (param_1->SharedReferenceCount).ReferenceController;
  local_68._0_8_ = &param_1->Object->_padding_;
  if (param_1->Object == (SToolTip *)0x0) {
    local_68._0_8_ = (IToolTip *)0x0;
  }
  if ((TReferenceControllerBase<1> *)local_68._8_8_ != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    ((TReferenceControllerBase<1> *)local_68._8_8_)->SharedReferenceCount =
         (atomic<int>)
         ((int)((TReferenceControllerBase<1> *)local_68._8_8_)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_68[0x10] = true;
  local_40 = 0;
  local_50.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_48.Data = (FScriptContainerElement *)0x0;
  SWidget::SetToolTip((SWidget *)this_01,(TAttribute<TSharedPtr<IToolTip,1>_> *)local_68);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_50,(FWriteAccessScope *)&local_20);
  if (((int)local_40 != 0) && (FStack_48.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_48.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_48,0,0,0x10);
    local_40 = local_40 & 0xffffffff00000000;
  }
  if (local_20.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_20.Accessor,&local_20);
  }
  if (FStack_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_48.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_50.AccessDetector);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_68._8_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetTitleBarRightContent @ 14289b160

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SDockTab::SetTitleBarRightContent(SDockTab *this,TSharedRef<SWidget,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  SWidget *pSVar2;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  atomic<int> aVar5;
  atomic<int> aVar6;
  SDockingTabWell *pSVar7;
  SDockingTabWell *pSVar8;
  SDockingTabWell *this_00;
  bool bVar9;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pSVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar4 = (this->TitleBarContentRight).SharedReferenceCount.ReferenceController;
  (this->TitleBarContentRight).Object = pSVar2;
  (this->TitleBarContentRight).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  if ((((this->ParentPtr).Object == (SDockingTabWell *)0x0) ||
      (pTVar1 = (this->ParentPtr).WeakReferenceCount.ReferenceController,
      pTVar1 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar1->SharedReferenceCount < 1))
  goto LAB_14289b236;
  pSVar8 = (SDockingTabWell *)(this->ParentPtr).WeakReferenceCount.ReferenceController;
  this_00 = (SDockingTabWell *)0x0;
  pSVar7 = pSVar8;
  if (pSVar8 == (SDockingTabWell *)0x0) {
LAB_14289b1f6:
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    pSVar8 = pSVar7;
    if (bVar9) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    aVar5 = *(atomic<int> *)&pSVar8->_padding_;
    do {
      pSVar7 = this_00;
      if (aVar5 == (atomic<int>)0x0) goto LAB_14289b1f6;
      LOCK();
      aVar6 = *(atomic<int> *)&pSVar8->_padding_;
      bVar9 = aVar5 == aVar6;
      if (bVar9) {
        *(atomic<int> *)&pSVar8->_padding_ = (atomic<int>)((int)aVar5 + 1);
        aVar6 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar6;
    } while (!bVar9);
    this_00 = (this->ParentPtr).Object;
    pSVar7 = pSVar8;
    if (this_00 == (SDockingTabWell *)0x0) goto LAB_14289b1f6;
  }
  SDockingTabWell::RefreshParentContent(this_00);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar8);
LAB_14289b236:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// ShouldAutosize @ 14289bbd0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall SDockTab::ShouldAutosize(SDockTab *this)

{
  return this->bShouldAutosize;
}

// TriggerActivateTab @ 14289e2c0

/* WARNING: Enum "Type": Some values do not have unique names */

EActiveTimerReturnType __thiscall
SDockTab::TriggerActivateTab(SDockTab *this,double param_1,float param_2)

{
  ActivateInParent(this,UserClickedOnTab);
  return Stop;
}

// UpdateActivationTime @ 14289eb20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SDockTab::UpdateActivationTime(SDockTab *this)

{
  FSlateApplication *pFVar1;
  double dVar2;
  
  if (FSlateApplication::CurrentApplication.Object != (FSlateApplication *)0x0) {
    pFVar1 = FSlateApplication::Get();
    dVar2 = (double)(**(code **)(*(longlong *)pFVar1 + 0x60))(pFVar1);
    this->LastActivationTime = dVar2;
  }
  return;
}

// UpdateTabStyle @ 14289faf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SDockTab::UpdateTabStyle(SDockTab *this)

{
  code *pcVar1;
  ETabRole EVar2;
  bool bVar3;
  longlong lVar4;
  
  EVar2 = GetVisualTabRole(this);
  lVar4 = 0x508;
  if (EVar2 != MajorTab) {
    lVar4 = 0x510;
  }
  lVar4 = *(longlong *)((longlong)&this->_padding_ + lVar4);
  if ((this->LabelSuffix).Object == (STextBlock *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  STextBlock::SetTextStyle((this->LabelSuffix).Object,(FTextBlockStyle *)(lVar4 + 0x870));
  if ((this->LabelWidget).Object == (STextBlock *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  STextBlock::SetTextStyle((this->LabelWidget).Object,(FTextBlockStyle *)(lVar4 + 0x870));
  return;
}

